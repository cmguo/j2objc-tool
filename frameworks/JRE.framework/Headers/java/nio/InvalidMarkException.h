//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/InvalidMarkException.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioInvalidMarkException")
#ifdef RESTRICT_JavaNioInvalidMarkException
#define INCLUDE_ALL_JavaNioInvalidMarkException 0
#else
#define INCLUDE_ALL_JavaNioInvalidMarkException 1
#endif
#undef RESTRICT_JavaNioInvalidMarkException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioInvalidMarkException_) && (INCLUDE_ALL_JavaNioInvalidMarkException || defined(INCLUDE_JavaNioInvalidMarkException))
#define JavaNioInvalidMarkException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include <JRE/java/lang/IllegalStateException.h>

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when an attempt is made to reset a buffer
  when its mark is not defined.
 @since 1.4
 */
@interface JavaNioInvalidMarkException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype __nonnull)init;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioInvalidMarkException)

FOUNDATION_EXPORT void JavaNioInvalidMarkException_init(JavaNioInvalidMarkException *self);

FOUNDATION_EXPORT JavaNioInvalidMarkException *new_JavaNioInvalidMarkException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioInvalidMarkException *create_JavaNioInvalidMarkException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioInvalidMarkException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioInvalidMarkException")
