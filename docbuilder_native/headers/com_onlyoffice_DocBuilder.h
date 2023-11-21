/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_onlyoffice_DocBuilder */

#ifndef _Included_com_onlyoffice_DocBuilder
#define _Included_com_onlyoffice_DocBuilder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    allocate0
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilder_allocate0
  (JNIEnv *, jclass);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    free0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilder_free0
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    destroy0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilder_destroy0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    run0
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_run0
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    runText0
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_runText0
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    openFile0
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_onlyoffice_DocBuilder_openFile0
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    createFile0
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_createFile0
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    saveFile0
 * Signature: (JILjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_saveFile0__JILjava_lang_String_2
  (JNIEnv *, jobject, jlong, jint, jstring);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    saveFile0
 * Signature: (JILjava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_saveFile0__JILjava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jobject, jlong, jint, jstring, jstring);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    closeFile0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilder_closeFile0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    executeCommand0
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_executeCommand0__JLjava_lang_String_2
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    executeCommand0
 * Signature: (JLjava/lang/String;J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_executeCommand0__JLjava_lang_String_2J
  (JNIEnv *, jobject, jlong, jstring, jlong);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    writeData0
 * Signature: (JLjava/lang/String;Ljava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilder_writeData0
  (JNIEnv *, jobject, jlong, jstring, jstring, jboolean);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    setTmpFolder0
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilder_setTmpFolder0
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    setProperty0
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_onlyoffice_DocBuilder_setProperty0
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    isSaveWithDoctrendererMode0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_onlyoffice_DocBuilder_isSaveWithDoctrendererMode0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    getContext0
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_onlyoffice_DocBuilder_getContext0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_onlyoffice_DocBuilder
 * Method:    getVersion0
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_onlyoffice_DocBuilder_getVersion0
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
