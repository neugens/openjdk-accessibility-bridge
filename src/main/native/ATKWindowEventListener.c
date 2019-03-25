#include "net_java_openjdk_internal_accessibility_ATKWindowEventListener.h"

#include <jni.h>
#include <stdio.h>
#include <stdlib.h>
#include <atk-bridge.h>

JNIEXPORT jlong JNICALL
Java_net_java_openjdk_internal_accessibility_ATKWindowEventListener_initAtkWindows
	(JNIEnv *env, jclass ATKWindowEventListenerclass)
{

    fprintf(stderr, "Java_net_java_openjdk_internal_accessibility_ATKWindowEventListener_initAtkWindows\n");

    return 0;

}

JNIEXPORT void JNICALL
Java_net_java_openjdk_internal_accessibility_ATKWindowEventListener_freeAtkWindows
	(JNIEnv *env, jclass ATKWindowEventListenerclass, jlong cObject)
{
	fprintf(stderr, "Java_net_java_openjdk_internal_accessibility_ATKWindowEventListener_freeAtkWindows\n");

}

JNIEXPORT void JNICALL
Java_net_java_openjdk_internal_accessibility_ATKWindowEventListener_windowOpened
	(JNIEnv *env, jclass ATKWindowEventListenerclass, jlong cObject, jstring dscription)
{

    fprintf(stderr, "Java_net_java_openjdk_internal_accessibility_ATKWindowEventListener_windowOpened\n");

}
