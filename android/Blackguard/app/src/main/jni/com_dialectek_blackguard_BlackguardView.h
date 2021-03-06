/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_dialectek_blackguard_BlackguardView */

#ifndef _Included_com_dialectek_blackguard_BlackguardView
#define _Included_com_dialectek_blackguard_BlackguardView
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    initBlackguard
 * Signature: ([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_dialectek_blackguard_BlackguardView_initBlackguard
  (JNIEnv *, jobject, jobjectArray, jstring, jstring);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    saveBlackguard
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_dialectek_blackguard_BlackguardView_saveBlackguard
  (JNIEnv *, jobject);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    deleteBlackguard
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_dialectek_blackguard_BlackguardView_deleteBlackguard
  (JNIEnv *, jobject);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    playerDir
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_dialectek_blackguard_BlackguardView_playerDir__
  (JNIEnv *, jobject);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    playerDir
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_dialectek_blackguard_BlackguardView_playerDir__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    lockInput
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_dialectek_blackguard_BlackguardView_lockInput
  (JNIEnv *, jobject);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    unlockInput
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_dialectek_blackguard_BlackguardView_unlockInput
  (JNIEnv *, jobject);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    waitInput
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_dialectek_blackguard_BlackguardView_waitInput
  (JNIEnv *, jobject);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    signalInput
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_dialectek_blackguard_BlackguardView_signalInput
  (JNIEnv *, jobject);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    inputReq
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_dialectek_blackguard_BlackguardView_inputReq__
  (JNIEnv *, jobject);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    inputReq
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_dialectek_blackguard_BlackguardView_inputReq__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    spacePrompt
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_dialectek_blackguard_BlackguardView_spacePrompt
  (JNIEnv *, jobject);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    inputChar
 * Signature: (C)V
 */
JNIEXPORT void JNICALL Java_com_dialectek_blackguard_BlackguardView_inputChar
  (JNIEnv *, jobject, jchar);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    inputIndex
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_dialectek_blackguard_BlackguardView_inputIndex__
  (JNIEnv *, jobject);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    inputIndex
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_dialectek_blackguard_BlackguardView_inputIndex__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    inputBuf
 * Signature: (IC)V
 */
JNIEXPORT void JNICALL Java_com_dialectek_blackguard_BlackguardView_inputBuf
  (JNIEnv *, jobject, jint, jchar);

/*
 * Class:     com_dialectek_blackguard_BlackguardView
 * Method:    inputSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_dialectek_blackguard_BlackguardView_inputSize
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
