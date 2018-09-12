//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/annotation/AnnotationTypeMismatchException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangAnnotationAnnotationTypeMismatchException")
#ifdef RESTRICT_JavaLangAnnotationAnnotationTypeMismatchException
#define INCLUDE_ALL_JavaLangAnnotationAnnotationTypeMismatchException 0
#else
#define INCLUDE_ALL_JavaLangAnnotationAnnotationTypeMismatchException 1
#endif
#undef RESTRICT_JavaLangAnnotationAnnotationTypeMismatchException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangAnnotationAnnotationTypeMismatchException_) && (INCLUDE_ALL_JavaLangAnnotationAnnotationTypeMismatchException || defined(INCLUDE_JavaLangAnnotationAnnotationTypeMismatchException))
#define JavaLangAnnotationAnnotationTypeMismatchException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangReflectMethod;
@class JavaLangThrowable;

/*!
 @brief Thrown to indicate that a program has attempted to access an element of
  an annotation whose type has changed after the annotation was compiled
  (or serialized).
 This exception can be thrown by the used to read annotations
  reflectively
 .
 @author Josh Bloch
 - seealso: java.lang.reflect.AnnotatedElement
 @since 1.5
 */
@interface JavaLangAnnotationAnnotationTypeMismatchException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs an AnnotationTypeMismatchException for the specified
  annotation type element and found data type.
 @param element the  <tt> Method </tt>  object for the annotation element
 @param foundType the (erroneous) type of data found in the annotation.         This string may, but is not required to, contain the value
          as well.  The exact format of the string is unspecified.
 */
- (instancetype __nonnull)initWithJavaLangReflectMethod:(JavaLangReflectMethod *)element
                                           withNSString:(NSString *)foundType;

/*!
 @brief Returns the <tt>Method</tt> object for the incorrectly typed element.
 @return the <tt>Method</tt> object for the incorrectly typed element
 */
- (JavaLangReflectMethod *)element;

/*!
 @brief Returns the type of data found in the incorrectly typed element.
 The returned string may, but is not required to, contain the value
  as well.  The exact format of the string is unspecified.
 @return the type of data found in the incorrectly typed element
 */
- (NSString *)foundType;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAnnotationAnnotationTypeMismatchException)

FOUNDATION_EXPORT void JavaLangAnnotationAnnotationTypeMismatchException_initWithJavaLangReflectMethod_withNSString_(JavaLangAnnotationAnnotationTypeMismatchException *self, JavaLangReflectMethod *element, NSString *foundType);

FOUNDATION_EXPORT JavaLangAnnotationAnnotationTypeMismatchException *new_JavaLangAnnotationAnnotationTypeMismatchException_initWithJavaLangReflectMethod_withNSString_(JavaLangReflectMethod *element, NSString *foundType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAnnotationAnnotationTypeMismatchException *create_JavaLangAnnotationAnnotationTypeMismatchException_initWithJavaLangReflectMethod_withNSString_(JavaLangReflectMethod *element, NSString *foundType);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationAnnotationTypeMismatchException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangAnnotationAnnotationTypeMismatchException")
