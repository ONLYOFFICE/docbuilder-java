#include <documentbuilder/docbuilder.h>

#include "com_onlyoffice_DocBuilderInitializer.h"
#include "converter.h"

using namespace NSDoctRenderer;

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilderInitializer_initialize0__
  (JNIEnv *jvm, jclass DocBuilderInitializer) {
	CDocBuilder::Initialize();
}

JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilderInitializer_initialize0__Ljava_lang_String_2
  (JNIEnv *jvm, jclass DocBuilderInitializer, jstring dir) {
	CDocBuilder::Initialize(ToWStr(jvm, dir).c_str());
}
