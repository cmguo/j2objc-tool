//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/StackOverflowError.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaLangStackOverflowError")
#ifdef RESTRICT_JavaLangStackOverflowError
#define INCLUDE_ALL_JavaLangStackOverflowError 0
#else
#define INCLUDE_ALL_JavaLangStackOverflowError 1
#endif
#undef RESTRICT_JavaLangStackOverflowError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangStackOverflowError_) && (INCLUDE_ALL_JavaLangStackOverflowError || defined(INCLUDE_JavaLangStackOverflowError))
#define JavaLangStackOverflowError_

#define RESTRICT_JavaLangVirtualMachineError 1
#define INCLUDE_JavaLangVirtualMachineError 1
#include <JRE/java/lang/VirtualMachineError.h>

@class JavaLangThrowable;

/*!
 @brief Thrown when a stack overflow occurs because an application
  recurses too deeply.
 @author unascribed
 @since JDK1.0
 */
@interface JavaLangStackOverflowError : JavaLangVirtualMachineError

#pragma mark Public

/*!
 @brief Constructs a <code>StackOverflowError</code> with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>StackOverflowError</code> with the specified
  detail message.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangStackOverflowError)

FOUNDATION_EXPORT void JavaLangStackOverflowError_init(JavaLangStackOverflowError *self);

FOUNDATION_EXPORT JavaLangStackOverflowError *new_JavaLangStackOverflowError_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStackOverflowError *create_JavaLangStackOverflowError_init(void);

FOUNDATION_EXPORT void JavaLangStackOverflowError_initWithNSString_(JavaLangStackOverflowError *self, NSString *s);

FOUNDATION_EXPORT JavaLangStackOverflowError *new_JavaLangStackOverflowError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStackOverflowError *create_JavaLangStackOverflowError_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangStackOverflowError)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangStackOverflowError")
