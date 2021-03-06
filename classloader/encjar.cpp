
#include <iostream>
#include <string>
#include <dirent.h>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

const string TEMP_DIR = "tempDir";
const string CLASS = ".class";
const int BUFFSIZE = 1024;

int isClass(string f);
void enc_file(FILE *f);
int process_file(const char *f);

// g++ encjar.cpp && ./a.out demo.jar enc_demo.jar
// jar -cfm0 classes.jar META-INF/MANIFEST.MF -C .  .
int main(int argc, const char *argv[])
{

    // 读取jar 或者 class 文件，获取byte 字节
    // 加密byte 字节
    // 生产加密之后的 jar 或者class 文件

    if (argc < 3)
    {
        std::cout << "usage: encjar in_file_name out_file_name" << std::endl;
        return 0;
    }

    // get param
    const char *sourceFile = argv[1];
    const char *targetFile = argv[2];
    string s = sourceFile;
    string unzip = "unzip  -oq " + s + " -d " + TEMP_DIR;

    // unzip file
    std::cout << unzip << std::endl;
    system(unzip.c_str());

    // cerate jar file
    string st = targetFile;
    string jar = "jar -cfm0 " + st + " " + TEMP_DIR + "/META-INF/MANIFEST.MF  -C  " + TEMP_DIR + "/  .";
    std::cout << jar << std::endl;
    system(jar.c_str());

    process_file(TEMP_DIR.c_str());
    // rm tempFile
    //string rm = "rm -rf " + TEMP_DIR;
    //system(rm.c_str());
    return 0;
}

int readFileList(char *basePath, vector<string> &files)
{
    DIR *dir;
    struct dirent *ptr;
    char base[1000];

    if ((dir = opendir(basePath)) == NULL)
    {
        perror("Open dir error...");
        exit(1);
    }

    while ((ptr = readdir(dir)) != NULL)
    {
        if (strcmp(ptr->d_name, ".") == 0 || strcmp(ptr->d_name, "..") == 0) ///current dir OR parrent dir
            continue;
        else if (ptr->d_type == 8)
        {
            // file
            memset(base, '\0', sizeof(base));
            strcpy(base, basePath);
            strcat(base, "/");
            strcat(base, ptr->d_name);
            files.push_back(base);
            //printf("d_name:%s/%s\n", basePath, ptr->d_name);
        }
        else if (ptr->d_type == 10)
        {
            //link file
            //printf("d_name:%s/%s\n", basePath, ptr->d_name);
        }
        else if (ptr->d_type == 4) ///dir
        {
            memset(base, '\0', sizeof(base));
            strcpy(base, basePath);
            strcat(base, "/");
            strcat(base, ptr->d_name);
            readFileList(base, files);
        }
    }
    closedir(dir);
    return 1;
}

int process_file(const char *path)
{
    DIR *dir;
    char basePath[1000];
    vector<string> files;

    ///get the current absoulte path
    memset(basePath, '\0', sizeof(basePath));
    getcwd(basePath, 999);
    printf("the current dir is : %s\n", basePath);

    ///get the file list
    memset(basePath, '\0', sizeof(basePath));
    strcpy(basePath, path);
    readFileList(basePath, files);

    int size = files.size();
    for (int i = 0; i < size; i++)
    {
        string f = files[i];
        if (isClass(f))
        {
            //cout << "file is class : " << f << endl;

            string new_name = f + ".bak";
            rename(f.c_str(), new_name.c_str());

            FILE *fs;
            if ((fs = fopen(new_name.c_str(), "rb")) == NULL)
            {
                printf("Cannot open file strike any key exit!");
                exit(1);
            }

            FILE *ft;
            ft = fopen(f.c_str(), "wb");

            void *buf;

            enc_file(ft);
            while (!feof(fs))
            {
                fread(&buf, 1, 1, fs);
                fwrite(&buf, 1, 1, ft);
            }

            fclose(fs);
            fclose(ft);
            remove(new_name.c_str());
        }
    }

    return 0;
}

int isClass(string f)
{
    // cout << "f is  : " << f << endl;
    // BOOT-INF
    string bi = "BOOT-INF";
    if (strstr(f.c_str(), bi.c_str()) == NULL)
    {
        return 0;
    }
    // CL.class
    string cl_str = "/CL.class";
    int ni = f.find_last_of("/");
    const int ll = cl_str.length();

    char sufix_cl[ll];
    int cpLen = f.copy(sufix_cl, ll, ni);
    sufix_cl[ll] = '\0';

    if (strcmp(sufix_cl, cl_str.c_str()) == 0)
    {
        cout << "sufix_cl : " << sufix_cl << endl;
        return 0;
    }
    int idx = f.find_last_of(".");
    int strLen = CLASS.length();
    char sufix[strLen];
    int l = f.copy(sufix, strLen, idx);
    sufix[l] = '\0';
    string s = sufix;
    if (s.compare(CLASS) == 0)
    {
        // cout << "file is class : " << sufix << endl;
        return 1;
    }
    return 0;
}

void enc_file(FILE *f)
{
    string ss = "2233";
    const char *chs = ss.c_str();
    size_t s = fwrite(chs, sizeof(char), 4, f);
    // cout << "s= " << s << endl;
}