#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_seasapps_keysndk_MainActivity_getNativeKey1(JNIEnv *env, jobject instance) {

    return (*env)->  NewStringUTF(env, "TmF0aXZlNWVjcmV0UEBzc3cwcmQx");
}

JNIEXPORT jstring JNICALL
Java_com_seasapps_keysndk_MainActivity_getNativeKey2(JNIEnv *env, jobject instance) {

    return (*env)->NewStringUTF(env, "TmF0aXZlNWVjcmV0UEBzc3cwcmQy");
}