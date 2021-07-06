//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/ClassCircularityError.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaLangClassCircularityError")
#ifdef RESTRICT_JavaLangClassCircularityError
#define INCLUDE_ALL_JavaLangClassCircularityError 0
#else
#define INCLUDE_ALL_JavaLangClassCircularityError 1
#endif
#undef RESTRICT_JavaLangClassCircularityError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangClassCircularityError_) && (INCLUDE_ALL_JavaLangClassCircularityError || defined(INCLUDE_JavaLangClassCircularityError))
#define JavaLangClassCircularityError_

#define RESTRICT_JavaLangLinkageError 1
#define INCLUDE_JavaLangLinkageError 1
#include <JRE/java/lang/LinkageError.h>

@class JavaLangThrowable;

/*!
 @brief Thrown when the Java Virtual Machine detects a circularity in the
  superclass hierarchy of a class being loaded.
 @author unascribed
 @since JDK1.0
 */
@interface JavaLangClassCircularityError : JavaLangLinkageError

#pragma mark Public

/*!
 @brief Constructs a <code>ClassCircularityError</code> with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>ClassCircularityError</code> with the specified detail
  message.
 @param s The detail message
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangClassCircularityError)

FOUNDATION_EXPORT void JavaLangClassCircularityError_init(JavaLangClassCircularityError *self);

FOUNDATION_EXPORT JavaLangClassCircularityError *new_JavaLangClassCircularityError_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangClassCircularityError *create_JavaLangClassCircularityError_init(void);

FOUNDATION_EXPORT void JavaLangClassCircularityError_initWithNSString_(JavaLangClassCircularityError *self, NSString *s);

FOUNDATION_EXPORT JavaLangClassCircularityError *new_JavaLangClassCircularityError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangClassCircularityError *create_JavaLangClassCircularityError_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangClassCircularityError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangClassCircularityError")
