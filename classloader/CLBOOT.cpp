// hello.cpp
#include <jni.h>
#include "CLBOOT.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

char *getFirstChar(JNIEnv *env, jbyteArray bytearray);

// org.springframework.boot.loader.LaunchedURLClassLoader#makeClass
// org_springframework_boot_loader_LaunchedURLClassLoader_makeClass
JNIEXPORT jclass JNICALL Java_org_springframework_boot_loader_LaunchedURLClassLoader_makeClass(JNIEnv *env, jobject obj, jstring name, jbyteArray byarray)
{

    // jint v = env->GetVersion();
    // std::cout << "GetVersion," << v << std::endl;

    const char *str = env->GetStringUTFChars(name, 0);
    std::cout << "JNI make class Name: " << str << std::endl;

    //std::cout << "bs," << byarray << std::endl;

    jsize len = env->GetArrayLength(byarray);
    // std::cout << "bs len," << len << std::endl;
    jbyte *jbarray = (jbyte *)malloc(len);

    //jbyte *dDate = (jbyte *)jbarray;

    jclass clazz;

    string ss = "2233";
    const char *chs = ss.c_str();
    const char *str2 = getFirstChar(env, byarray);
    size_t c = strcmp(chs, str2);

    // std::cout << "chs," << chs << "str2" << str2 << std::endl;

    if (c == 0)
    {
        std::cout << "enc clazz" << std::endl;
        env->GetByteArrayRegion(byarray, 4, len - 5, jbarray);
        clazz = env->DefineClass(str, NULL, jbarray, len - 5);
    }
    else
    {
        std::cout << "normal clazz" << std::endl;
        env->GetByteArrayRegion(byarray, 0, len, jbarray);
        clazz = env->DefineClass(str, NULL, jbarray, len);
    }
    std::cout << "clazz=" << clazz << std::endl;
    delete jbarray;
    return clazz;
}

char *getFirstChar(JNIEnv *env, jbyteArray bytearray)
{
    char *chars = NULL;
    jbyte *bytes;
    bytes = env->GetByteArrayElements(bytearray, 0);
    int chars_len = env->GetArrayLength(bytearray);
    chars = new char[4 + 1];
    memset(chars, 0, 4 + 1);
    memcpy(chars, bytes, 4);
    chars[chars_len] = 0;
    env->ReleaseByteArrayElements(bytearray, bytes, 0);
    return chars;
}