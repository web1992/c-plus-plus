#include <jni.h>
#include "org_springframework_asm_ClassReader.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
char *getFirstChar(JNIEnv *env, jbyteArray bytearray);

JNIEXPORT jint JNICALL Java_org_springframework_asm_ClassReader_encByte(JNIEnv *env, jclass, jbyteArray byarray)
{
    jsize len = env->GetArrayLength(byarray);
    char *by = (char *)byarray;
    // std::cout << "Java_org_springframework_asm_ClassReader_encByte " << len << std::endl;

    string ss = "2233";
    const char *chs = ss.c_str();
    const char *str2 = getFirstChar(env, byarray);
    size_t c = strcmp(chs, str2);
    delete str2;
    if (c == 0)
    {

      return 1;
    }
    else
    {
        return 0;
    }
}

char *getFirstChar(JNIEnv *env, jbyteArray bytearray)
{
    jbyte *bytes;
    bytes = env->GetByteArrayElements(bytearray, 0);
    int chars_len = env->GetArrayLength(bytearray);
    char *chars = new char[4 + 1];
    memset(chars, 0, 4 + 1);
    memcpy(chars, bytes, 4);
    chars[4 + 1] = '\0';
    env->ReleaseByteArrayElements(bytearray, bytes, 0);
    return chars;
}
