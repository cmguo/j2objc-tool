//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/ShortBufferException.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxCryptoShortBufferException")
#ifdef RESTRICT_JavaxCryptoShortBufferException
#define INCLUDE_ALL_JavaxCryptoShortBufferException 0
#else
#define INCLUDE_ALL_JavaxCryptoShortBufferException 1
#endif
#undef RESTRICT_JavaxCryptoShortBufferException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoShortBufferException_) && (INCLUDE_ALL_JavaxCryptoShortBufferException || defined(INCLUDE_JavaxCryptoShortBufferException))
#define JavaxCryptoShortBufferException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include <JRE/java/security/GeneralSecurityException.h>

@class JavaLangThrowable;

/*!
 @brief This exception is thrown when an output buffer provided by the user
  is too short to hold the operation result.
 @author Jan Luehe
 @since 1.4
 */
@interface JavaxCryptoShortBufferException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a ShortBufferException with no detail
  message.A detail message is a String that describes this
  particular exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a ShortBufferException with the specified
  detail message.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoShortBufferException)

FOUNDATION_EXPORT void JavaxCryptoShortBufferException_init(JavaxCryptoShortBufferException *self);

FOUNDATION_EXPORT JavaxCryptoShortBufferException *new_JavaxCryptoShortBufferException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoShortBufferException *create_JavaxCryptoShortBufferException_init(void);

FOUNDATION_EXPORT void JavaxCryptoShortBufferException_initWithNSString_(JavaxCryptoShortBufferException *self, NSString *msg);

FOUNDATION_EXPORT JavaxCryptoShortBufferException *new_JavaxCryptoShortBufferException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoShortBufferException *create_JavaxCryptoShortBufferException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoShortBufferException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoShortBufferException")
