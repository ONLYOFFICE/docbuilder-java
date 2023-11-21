#include <documentbuilder/docbuilder.h>
#include <iostream>

#include "com_onlyoffice_DocBuilder.h"
#include "converter.h"

using namespace NSDoctRenderer;

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilder_allocate0
  (JNIEnv *jvm, jclass DocBuilder) {
	return (jlong) new CDocBuilder();
}

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilder_free0
  (JNIEnv *jvm, jclass DocBuilder, jlong ptr) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return;
	delete builder;
}

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilder_destroy0
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return;
	builder -> Dispose();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_run0
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr, jstring path) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return false;
	return builder -> Run(ToWStr(jvm, path).c_str());
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_runText0
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr, jstring text) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return false;
	return builder -> RunTextW(ToWStr(jvm, text).c_str());
}

JNIEXPORT jint JNICALL Java_com_onlyoffice_DocBuilder_openFile0
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr, jstring path, jstring params) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return -1;
	return builder -> OpenFile(ToWStr(jvm, path).c_str(), ToWStr(jvm, params).c_str());
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_createFile0
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr, jint type) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return false;
	return builder -> CreateFile(type);
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_saveFile0__JILjava_lang_String_2
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr, jint type, jstring path) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return false;
	return builder -> SaveFile(type, ToWStr(jvm, path).c_str());
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_saveFile0__JILjava_lang_String_2Ljava_lang_String_2
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr, jint type, jstring path, jstring params) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return false;
	return builder -> SaveFile(type, ToWStr(jvm, path).c_str(), ToWStr(jvm, params).c_str());
}


JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilder_closeFile0
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return;
	builder -> CloseFile();
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_executeCommand0__JLjava_lang_String_2
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr, jstring command) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return false;
	return builder -> ExecuteCommand(ToWStr(jvm, command).c_str());
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_executeCommand0__JLjava_lang_String_2J
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr, jstring command, jlong v) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return false;
	CDocBuilderValue* value = (CDocBuilderValue*) v;
	if (!value) return false;
	return builder -> ExecuteCommand(ToWStr(jvm, command).c_str(), value);
}

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilder_writeData0
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr, jstring path, jstring value, jboolean append) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return;
	builder -> WriteData(ToWStr(jvm, path).c_str(), ToWStr(jvm, value).c_str(), append);
}

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilder_setTmpFolder0
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr, jstring folder) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return;
	builder -> SetTmpFolder(ToWStr(jvm, folder).c_str());
}

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilder_setProperty0
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr, jstring param, jstring value) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return;
	builder -> SetPropertyW(ToWStr(jvm, param).c_str(), ToWStr(jvm, value).c_str());
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_isSaveWithDoctrendererMode0
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	return builder -> IsSaveWithDoctrendererMode();
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilder_getContext0
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return -1;
	CDocBuilderContext* ctx = new CDocBuilderContext(builder -> GetContext());
	return (jlong) ctx;
}

JNIEXPORT jstring JNICALL Java_com_onlyoffice_DocBuilder_getVersion0
  (JNIEnv *jvm, jobject DocBuilder, jlong ptr) {
	CDocBuilder* builder = (CDocBuilder*) ptr;
	if (!builder) return NULL;
	return jvm -> NewStringUTF(builder -> GetVersion());
}
