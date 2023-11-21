#include <iostream>
#include <jni.h>

std::wstring ToWStr(JNIEnv *env, jstring string);

unsigned char* toCharArray(JNIEnv *env, jbyteArray array);

jbyteArray toJByteArray(JNIEnv *env, unsigned char* buf, int len);
