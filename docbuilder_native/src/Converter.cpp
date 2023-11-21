#include "converter.h"

std::wstring ToWStr(JNIEnv *env, jstring string) {
	std::wstring value;
	const jchar *raw = env->GetStringChars(string, 0);
	jsize len = env->GetStringLength(string);

	value.assign(raw, raw + len);

	env->ReleaseStringChars(string, raw);

	return value;
}

unsigned char* toCharArray(JNIEnv *env, jbyteArray array) {
    int len = env->GetArrayLength (array);
    unsigned char* buf = new unsigned char[len];
    env->GetByteArrayRegion (array, 0, len, reinterpret_cast<jbyte*>(buf));
    return buf;
}

jbyteArray toJByteArray(JNIEnv *env, unsigned char* buf, int len) {
    jbyteArray array = env->NewByteArray (len);
    env->SetByteArrayRegion (array, 0, len, reinterpret_cast<jbyte*>(buf));
    return array;
}
