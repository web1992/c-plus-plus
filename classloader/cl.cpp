// hello.cpp
#include <jni.h>
#include "CL.h"
#include <stdio.h>
#include <iostream>

JNIEXPORT void JNICALL Java_CL_DisplayHello(JNIEnv *env, jobject obj)
{
    printf("From hello.cpp :");
    printf("Hello world ! \n");
    return;
}

JNIEXPORT jclass JNICALL Java_CL_makeClass(JNIEnv *env, jobject obj, jstring name, jbyteArray byarray)
{

    jint v = env->GetVersion();

    std::cout << "GetVersion," << v << std::endl;

    const char *str = env->GetStringUTFChars(name, 0);
    std::cout << "Name," << str << std::endl;

    //std::cout << "bs," << byarray << std::endl;

    jsize len = env->GetArrayLength(byarray);
    //std::cout << "bs len," << len << std::endl;
    jbyte *jbarray = (jbyte *)malloc(len);

    env->GetByteArrayRegion(byarray, 0, len, jbarray);

    //jbyte *dDate = (jbyte *)jbarray;

    jclass clazz = env->DefineClass(str, NULL, jbarray, len);

    return clazz;
}
