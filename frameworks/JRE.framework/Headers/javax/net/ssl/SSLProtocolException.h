//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SSLProtocolException.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLProtocolException")
#ifdef RESTRICT_JavaxNetSslSSLProtocolException
#define INCLUDE_ALL_JavaxNetSslSSLProtocolException 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLProtocolException 1
#endif
#undef RESTRICT_JavaxNetSslSSLProtocolException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslSSLProtocolException_) && (INCLUDE_ALL_JavaxNetSslSSLProtocolException || defined(INCLUDE_JavaxNetSslSSLProtocolException))
#define JavaxNetSslSSLProtocolException_

#define RESTRICT_JavaxNetSslSSLException 1
#define INCLUDE_JavaxNetSslSSLException 1
#include <JRE/javax/net/ssl/SSLException.h>

@class JavaLangThrowable;

/*!
 @brief Reports an error in the operation of the SSL protocol.Normally
  this indicates a flaw in one of the protocol implementations.
 @since 1.4
 @author David Brownell
 */
@interface JavaxNetSslSSLProtocolException : JavaxNetSslSSLException

#pragma mark Public

/*!
 @brief Constructs an exception reporting an SSL protocol error
  detected by an SSL subsystem.
 @param reason describes the problem.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLProtocolException)

FOUNDATION_EXPORT void JavaxNetSslSSLProtocolException_initWithNSString_(JavaxNetSslSSLProtocolException *self, NSString *reason);

FOUNDATION_EXPORT JavaxNetSslSSLProtocolException *new_JavaxNetSslSSLProtocolException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslSSLProtocolException *create_JavaxNetSslSSLProtocolException_initWithNSString_(NSString *reason);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLProtocolException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLProtocolException")
