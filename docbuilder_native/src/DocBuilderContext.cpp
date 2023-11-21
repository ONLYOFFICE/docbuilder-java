#include <documentbuilder/docbuilder.h>
#include "com_onlyoffice_DocBuilderContext.h"

#include "converter.h"

using namespace NSDoctRenderer;

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilderContext_free0
  (JNIEnv *jvm, jobject DocBuilderContext, jlong ptr) {
	CDocBuilderContext* ctx = (CDocBuilderContext*) ptr;
	if (!ctx) return;
	delete ctx;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderContext_createUndefined0
  (JNIEnv *jvm, jobject DocBuilderContext, jlong ptr) {
	CDocBuilderContext* ctx = (CDocBuilderContext*) ptr;
	if (!ctx) return -1;
	CDocBuilderValue* p = new CDocBuilderValue(ctx->CreateUndefined());
	return (jlong) p;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderContext_createNull0
  (JNIEnv *jvm, jobject DocBuilderContext, jlong ptr) {
	CDocBuilderContext* ctx = (CDocBuilderContext*) ptr;
	if (!ctx) return -1;
	CDocBuilderValue* p = new CDocBuilderValue(ctx->CreateNull());
	return (jlong) p;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderContext_createObject0
  (JNIEnv *jvm, jobject DocBuilderContext, jlong ptr) {
	CDocBuilderContext* ctx = (CDocBuilderContext*) ptr;
	if (!ctx) return -1;
	CDocBuilderValue* p = new CDocBuilderValue(ctx->CreateObject());
	return (jlong) p;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderContext_createArray0
  (JNIEnv *jvm, jobject DocBuilderContext, jlong ptr, jlong length) {
	CDocBuilderContext* ctx = (CDocBuilderContext*) ptr;
	if (!ctx) return -1;
	CDocBuilderValue* p = new CDocBuilderValue(ctx->CreateArray(length));
	return (jlong) p;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderContext_createTypedArray0
  (JNIEnv *jvm, jobject DocBuilderContext, jlong ptr, jbyteArray buf) {
	CDocBuilderContext* ctx = (CDocBuilderContext*) ptr;
	if (!ctx) return -1;
	int len = jvm -> GetArrayLength(buf);
	unsigned char* buffer = toCharArray(jvm, buf);
	CDocBuilderValue* p = new CDocBuilderValue(ctx ->CreateTypedArray(buffer, len, false));
	return (jlong) p;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderContext_createGlobal0
  (JNIEnv *jvm, jobject DocBuilderContext, jlong ptr) {
	CDocBuilderContext* ctx = (CDocBuilderContext*) ptr;
	if (!ctx) return -1;
	CDocBuilderValue* p = new CDocBuilderValue(ctx->GetGlobal());
	return (jlong) p;
}

JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilderContext_createScope0
  (JNIEnv *jvm, jobject DocBuilderContext, jlong ptr) {
	CDocBuilderContext* ctx = (CDocBuilderContext*) ptr;
	if (!ctx) return -1;
	CDocBuilderContextScope* p = new CDocBuilderContextScope(ctx->CreateScope());
	return (jlong) p;
}

JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilderContext_isError0
  (JNIEnv *jvm, jobject DocBuilderContext, jlong ptr) {
	CDocBuilderContext* ctx = (CDocBuilderContext*) ptr;
	if (!ctx) return false;
	return ctx->IsError();
}
