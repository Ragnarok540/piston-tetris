/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_nova_graphic_RandomGraphGenerator */

#ifndef _Included_com_nova_graphic_RandomGraphGenerator
#define _Included_com_nova_graphic_RandomGraphGenerator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_nova_graphic_RandomGraphGenerator
 * Method:    randomPermutation
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_nova_graphic_RandomGraphGenerator_randomPermutation
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_nova_graphic_RandomGraphGenerator
 * Method:    randomGraph
 * Signature: (IIIZZZZII)I
 */
JNIEXPORT jint JNICALL Java_com_nova_graphic_RandomGraphGenerator_randomGraph
  (JNIEnv *, jobject, jint, jint, jint, jboolean, jboolean, jboolean, jboolean, jint, jint);

#ifdef __cplusplus
}
#endif
#endif