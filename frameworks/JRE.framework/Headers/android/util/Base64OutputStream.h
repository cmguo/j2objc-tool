//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/Base64OutputStream.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_AndroidUtilBase64OutputStream")
#ifdef RESTRICT_AndroidUtilBase64OutputStream
#define INCLUDE_ALL_AndroidUtilBase64OutputStream 0
#else
#define INCLUDE_ALL_AndroidUtilBase64OutputStream 1
#endif
#undef RESTRICT_AndroidUtilBase64OutputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidUtilBase64OutputStream_) && (INCLUDE_ALL_AndroidUtilBase64OutputStream || defined(INCLUDE_AndroidUtilBase64OutputStream))
#define AndroidUtilBase64OutputStream_

#define RESTRICT_JavaIoFilterOutputStream 1
#define INCLUDE_JavaIoFilterOutputStream 1
#include <JRE/java/io/FilterOutputStream.h>

@class IOSByteArray;
@class JavaIoOutputStream;

/*!
 @brief An OutputStream that does Base64 encoding on the data written to
  it, writing the resulting data to another OutputStream.
 */
@interface AndroidUtilBase64OutputStream : JavaIoFilterOutputStream

#pragma mark Public

/*!
 @brief Performs Base64 encoding on the data written to the stream,
  writing the encoded data to another OutputStream.
 @param outArg the OutputStream to write the encoded data to
 @param flags bit flags for controlling the encoder; see the         constants in 
 <code>Base64</code>
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                                             withInt:(jint)flags;

/*!
 @brief Performs Base64 encoding or decoding on the data written to the
  stream, writing the encoded/decoded data to another
  OutputStream.
 @param outArg the OutputStream to write the encoded data to
 @param flags bit flags for controlling the encoder; see the         constants in 
 <code>Base64</code>
 @param encode true to encode, false to decode
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                                             withInt:(jint)flags
                                         withBoolean:(jboolean)encode;

- (void)close;

- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeWithInt:(jint)b;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(AndroidUtilBase64OutputStream)

FOUNDATION_EXPORT void AndroidUtilBase64OutputStream_initWithJavaIoOutputStream_withInt_(AndroidUtilBase64OutputStream *self, JavaIoOutputStream *outArg, jint flags);

FOUNDATION_EXPORT AndroidUtilBase64OutputStream *new_AndroidUtilBase64OutputStream_initWithJavaIoOutputStream_withInt_(JavaIoOutputStream *outArg, jint flags) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilBase64OutputStream *create_AndroidUtilBase64OutputStream_initWithJavaIoOutputStream_withInt_(JavaIoOutputStream *outArg, jint flags);

FOUNDATION_EXPORT void AndroidUtilBase64OutputStream_initWithJavaIoOutputStream_withInt_withBoolean_(AndroidUtilBase64OutputStream *self, JavaIoOutputStream *outArg, jint flags, jboolean encode);

FOUNDATION_EXPORT AndroidUtilBase64OutputStream *new_AndroidUtilBase64OutputStream_initWithJavaIoOutputStream_withInt_withBoolean_(JavaIoOutputStream *outArg, jint flags, jboolean encode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilBase64OutputStream *create_AndroidUtilBase64OutputStream_initWithJavaIoOutputStream_withInt_withBoolean_(JavaIoOutputStream *outArg, jint flags, jboolean encode);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilBase64OutputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidUtilBase64OutputStream")
