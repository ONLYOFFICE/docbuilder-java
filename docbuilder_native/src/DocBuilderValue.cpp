#include <documentbuilder/docbuilder.h>
#include <iostream>
#include <locale>
#include <codecvt>
#include "com_onlyoffice_DocBuilderValue.h"
#include "converter.h"

using namespace NSDoctRenderer;
using convert_type = std::codecvt_utf8<wchar_t>;

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_allocate0__
  (JNIEnv *jvm, jclass DocBuilderValue) {
	return (jlong) new CDocBuilderValue();
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_allocate0__J
  (JNIEnv *jvm, jclass DocBuilderValue, jlong ptr) {
	CDocBuilderValue* other = (CDocBuilderValue*) ptr;
	if (!other) return -1;
	return (jlong) new CDocBuilderValue(other);
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_allocate0__Z
  (JNIEnv *jvm, jclass DocBuilderValue, jboolean value) {
	return (jlong) new CDocBuilderValue((bool) value);
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_allocate0__I
  (JNIEnv *jvm, jclass DocBuilderValue, jint value) {
	return (jlong) new CDocBuilderValue(value);
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_allocate0__D
  (JNIEnv *jvm, jclass DocBuilderValue, jdouble value) {
	return (jlong) new CDocBuilderValue(value);
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_allocate0__Ljava_lang_String_2
  (JNIEnv *jvm, jclass DocBuilderValue, jstring value) {
	return (jlong) new CDocBuilderValue(ToWStr(jvm, value).c_str());
}

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilderValue_free0
  (JNIEnv *jvm, jclass DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return;
	delete value;
}

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilderValue_clear0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return;
	value -> Clear();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilderValue_isEmpty0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return true;
	return value -> IsEmpty();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilderValue_isNull0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return true;
	return value -> IsNull();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilderValue_isUndefined0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return true;
	return value -> IsUndefined();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilderValue_isBoolean0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return false;
	return value -> IsBool();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilderValue_isInt0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return false;
	return value -> IsInt();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilderValue_isDouble0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return false;
	return value -> IsDouble();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilderValue_isString0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return false;
	return value -> IsString();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilderValue_isFunction0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return false;
	return value -> IsFunction();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilderValue_isObject0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return false;
	return value -> IsObject();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilderValue_isArray0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return false;
	return value -> IsArray();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilderValue_isTypedArray0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return false;
	return value -> IsTypedArray();
}

JNIEXPORT jint JNICALL Java_com_onlyoffice_DocBuilderValue_getLength0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1;
	return value -> GetLength();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilderValue_toBool0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return false;
	return value -> ToBool();
}

JNIEXPORT jint JNICALL Java_com_onlyoffice_DocBuilderValue_toInt0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1;
	return value -> ToInt();
}

JNIEXPORT jdouble JNICALL Java_com_onlyoffice_DocBuilderValue_toDouble0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1.0;
	return value -> ToDouble();
}

JNIEXPORT jstring JNICALL Java_com_onlyoffice_DocBuilderValue_toString0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return NULL;
	wchar_t* s = value -> ToString().c_str();
	if(s == nullptr || std::wcslen(s) < 1) {
		return NULL;
	}
	std::wstring sbody(value -> ToString().c_str());
	std::wstring str(L""+sbody);
	std::wstring_convert<convert_type, wchar_t> converter;
	std::string converted_str = converter.to_bytes(str);
	return jvm->NewStringUTF(converted_str.c_str());
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_getProperty0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr, jstring name) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1;
	CDocBuilderValue* v = new CDocBuilderValue(value -> GetProperty(ToWStr(jvm, name).c_str()));
	if (!v) return -1;
	return (jlong) v;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_get0__JLjava_lang_String_2
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr, jstring name) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1;
	CDocBuilderValue* v = new CDocBuilderValue(value -> GetProperty(ToWStr(jvm, name).c_str()));
	if (!v) return -1;
	return (jlong) v;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_get0__JI
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr, jint index) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1;
	CDocBuilderValue* v = new CDocBuilderValue(value -> Get(index));
	if (!v) return -1;
	return (jlong) v;
}

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilderValue_setProperty0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr, jstring name, jlong p1) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return;
	CDocBuilderValue* p1v = (CDocBuilderValue*) p1;
	if (!p1v) return;
	value -> SetProperty(ToWStr(jvm, name).c_str(), *p1v);
}

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilderValue_set0__JLjava_lang_String_2J
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr, jstring name, jlong p1) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return;
	CDocBuilderValue* p1v = (CDocBuilderValue*) p1;
	if (!p1v) return;
	value -> Set(ToWStr(jvm, name).c_str(), *p1v);
}

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilderValue_set0__JIJ
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr, jint index, jlong p1) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return;
	CDocBuilderValue* p1v = (CDocBuilderValue*) p1;
	if (!p1v) return;
	value -> Set(index, *p1v);
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_createUndefined0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1;
	CDocBuilderValue* v = new CDocBuilderValue(value -> CreateUndefined());
	return (jlong) v;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_createNull0
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	CDocBuilderValue* v = new CDocBuilderValue(value -> CreateNull());
	return (jlong) v;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_call0__JLjava_lang_String_2
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr, jstring name) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1;
	CDocBuilderValue* v = new CDocBuilderValue(value -> Call(ToWStr(jvm, name).c_str()));
	return (jlong) v;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_call0__JLjava_lang_String_2J
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr, jstring name, jlong p1) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1;
	CDocBuilderValue* p1v = (CDocBuilderValue*) p1;
	if (!p1v) return -1;
	CDocBuilderValue* v = new CDocBuilderValue(value -> Call(ToWStr(jvm, name).c_str(), *p1v));
	return (jlong) v;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_call0__JLjava_lang_String_2JJ
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr, jstring name, jlong p1, jlong p2) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1;
	CDocBuilderValue* p1v = (CDocBuilderValue*) p1;
	if (!p1v) return -1;
	CDocBuilderValue* p2v = (CDocBuilderValue*) p2;
	if (!p2v) return -1;
	CDocBuilderValue* v = new CDocBuilderValue(value -> Call(ToWStr(jvm, name).c_str(), *p1v, *p2v));
	return (jlong) v;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_call0__JLjava_lang_String_2JJJ
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr, jstring name, jlong p1, jlong p2, jlong p3) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1;
	CDocBuilderValue* p1v = (CDocBuilderValue*) p1;
	if (!p1v) return -1;
	CDocBuilderValue* p2v = (CDocBuilderValue*) p2;
	if (!p2v) return -1;
	CDocBuilderValue* p3v = (CDocBuilderValue*) p3;
	if (!p3v) return -1;
	CDocBuilderValue* v = new CDocBuilderValue(value -> Call(ToWStr(jvm, name).c_str(), *p1v, *p2v, *p3v));
	return (jlong) v;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_call0__JLjava_lang_String_2JJJJ
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr, jstring name, jlong p1, jlong p2, jlong p3, jlong p4) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1;
	CDocBuilderValue* p1v = (CDocBuilderValue*) p1;
	if (!p1v) return -1;
	CDocBuilderValue* p2v = (CDocBuilderValue*) p2;
	if (!p2v) return -1;
	CDocBuilderValue* p3v = (CDocBuilderValue*) p3;
	if (!p3v) return -1;
	CDocBuilderValue* p4v = (CDocBuilderValue*) p4;
	if (!p4v) return -1;
	CDocBuilderValue* v = new CDocBuilderValue(value -> Call(ToWStr(jvm, name).c_str(), *p1v, *p2v, *p3v, *p4v));
	return (jlong) v;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_call0__JLjava_lang_String_2JJJJJ
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr, jstring name, jlong p1, jlong p2, jlong p3, jlong p4, jlong p5) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1;
	CDocBuilderValue* p1v = (CDocBuilderValue*) p1;
	if (!p1v) return -1;
	CDocBuilderValue* p2v = (CDocBuilderValue*) p2;
	if (!p2v) return -1;
	CDocBuilderValue* p3v = (CDocBuilderValue*) p3;
	if (!p3v) return -1;
	CDocBuilderValue* p4v = (CDocBuilderValue*) p4;
	if (!p4v) return -1;
	CDocBuilderValue* p5v = (CDocBuilderValue*) p5;
	if (!p5v) return -1;
	CDocBuilderValue* v = new CDocBuilderValue(value -> Call(ToWStr(jvm, name).c_str(), *p1v, *p2v, *p3v, *p4v, *p5v));
	return (jlong) v;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderValue_call0__JLjava_lang_String_2JJJJJJ
  (JNIEnv *jvm, jobject DocBuilderValue, jlong ptr, jstring name, jlong p1, jlong p2, jlong p3, jlong p4, jlong p5, jlong p6) {
	CDocBuilderValue* value = (CDocBuilderValue*) ptr;
	if (!value) return -1;
	CDocBuilderValue* p1v = (CDocBuilderValue*) p1;
	if (!p1v) return -1;
	CDocBuilderValue* p2v = (CDocBuilderValue*) p2;
	if (!p2v) return -1;
	CDocBuilderValue* p3v = (CDocBuilderValue*) p3;
	if (!p3v) return -1;
	CDocBuilderValue* p4v = (CDocBuilderValue*) p4;
	if (!p4v) return -1;
	CDocBuilderValue* p5v = (CDocBuilderValue*) p5;
	if (!p5v) return -1;
	CDocBuilderValue* p6v = (CDocBuilderValue*) p6;
	if (!p6v) return -1;
	CDocBuilderValue* v = new CDocBuilderValue(value -> Call(ToWStr(jvm, name).c_str(), *p1v, *p2v, *p3v, *p4v, *p5v, *p6v));
	return (jlong) v;
}
