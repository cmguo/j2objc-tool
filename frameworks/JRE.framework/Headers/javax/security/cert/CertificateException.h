//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/security/cert/CertificateException.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxSecurityCertCertificateException")
#ifdef RESTRICT_JavaxSecurityCertCertificateException
#define INCLUDE_ALL_JavaxSecurityCertCertificateException 0
#else
#define INCLUDE_ALL_JavaxSecurityCertCertificateException 1
#endif
#undef RESTRICT_JavaxSecurityCertCertificateException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSecurityCertCertificateException_) && (INCLUDE_ALL_JavaxSecurityCertCertificateException || defined(INCLUDE_JavaxSecurityCertCertificateException))
#define JavaxSecurityCertCertificateException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include <JRE/java/lang/Exception.h>

@class JavaLangThrowable;

/*!
 @brief This exception indicates one of a variety of certificate problems.
 <p><em>Note: The classes in the package <code>javax.security.cert</code>
  exist for compatibility with earlier versions of the
  Java Secure Sockets Extension (JSSE). New applications should instead
  use the standard Java SE certificate classes located in 
 <code>java.security.cert</code>.</em></p>
 @author Hemma Prafullchandra
 @since 1.4
 - seealso: Certificate
 */
@interface JavaxSecurityCertCertificateException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a certificate exception with no detail message.A detail
  message is a String that describes this particular exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a certificate exception with the given detail
  message.A detail message is a String that describes this
  particular exception.
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertCertificateException)

FOUNDATION_EXPORT void JavaxSecurityCertCertificateException_init(JavaxSecurityCertCertificateException *self);

FOUNDATION_EXPORT JavaxSecurityCertCertificateException *new_JavaxSecurityCertCertificateException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityCertCertificateException *create_JavaxSecurityCertCertificateException_init(void);

FOUNDATION_EXPORT void JavaxSecurityCertCertificateException_initWithNSString_(JavaxSecurityCertCertificateException *self, NSString *msg);

FOUNDATION_EXPORT JavaxSecurityCertCertificateException *new_JavaxSecurityCertCertificateException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityCertCertificateException *create_JavaxSecurityCertCertificateException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertCertificateException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxSecurityCertCertificateException")
