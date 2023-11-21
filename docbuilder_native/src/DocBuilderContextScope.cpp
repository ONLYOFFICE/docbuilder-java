#include <documentbuilder/docbuilder.h>
#include "com_onlyoffice_DocBuilderContextScope.h"

using namespace NSDoctRenderer;

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilderContextScope_free0
  (JNIEnv *jvm, jobject DocBuilderContextScope, jlong ptr) {
	CDocBuilderContextScope* scope = (CDocBuilderContextScope*) ptr;
	if (!scope) return;
	delete scope;
}

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilderContextScope_close0
  (JNIEnv *jvm, jobject DocBuilderContextScope, jlong ptr) {
	CDocBuilderContextScope* scope = (CDocBuilderContextScope*) ptr;
	if (!scope) return;
	scope->Close();
}
