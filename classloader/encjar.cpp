
#include <iostream>
#include <string>

using namespace std;
const string tempDir = "tempDir";

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
    const char *sourceFile = &(*argv[1]);
    const char *targetFile = &(*argv[2]);
    string s = sourceFile;
    string unzip = "unzip  -oq " + s + " -d " + tempDir;

    // unzip file
    std::cout << unzip << std::endl;
    system(unzip.c_str());

    // cerate jar file
    string st = targetFile;
    string jar = "jar -cfm0 " + st + " " + tempDir + "/META-INF/MANIFEST.MF  -C  " + tempDir + "/  .";
    std::cout << jar << std::endl;
    system(jar.c_str());

    // rm tempFile
    string rm = "rm -rf " + tempDir;
    system(rm.c_str());
    return 0;
}
