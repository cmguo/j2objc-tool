//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/security/cert/CertificateEncodingException.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxSecurityCertCertificateEncodingException")
#ifdef RESTRICT_JavaxSecurityCertCertificateEncodingException
#define INCLUDE_ALL_JavaxSecurityCertCertificateEncodingException 0
#else
#define INCLUDE_ALL_JavaxSecurityCertCertificateEncodingException 1
#endif
#undef RESTRICT_JavaxSecurityCertCertificateEncodingException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSecurityCertCertificateEncodingException_) && (INCLUDE_ALL_JavaxSecurityCertCertificateEncodingException || defined(INCLUDE_JavaxSecurityCertCertificateEncodingException))
#define JavaxSecurityCertCertificateEncodingException_

#define RESTRICT_JavaxSecurityCertCertificateException 1
#define INCLUDE_JavaxSecurityCertCertificateException 1
#include <JRE/javax/security/cert/CertificateException.h>

/*!
 @brief Certificate Encoding Exception.This is thrown whenever an error
  occurs whilst attempting to encode a certificate.
 <p><em>Note: The classes in the package <code>javax.security.cert</code>
  exist for compatibility with earlier versions of the
  Java Secure Sockets Extension (JSSE). New applications should instead
  use the standard Java SE certificate classes located in 
 <code>java.security.cert</code>.</em></p>
 @since 1.4
 @author Hemma Prafullchandra
 */
@interface JavaxSecurityCertCertificateEncodingException : JavaxSecurityCertCertificateException

#pragma mark Public

/*!
 @brief Constructs a CertificateEncodingException with no detail message.A
  detail message is a String that describes this particular
  exception.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a CertificateEncodingException with the specified detail
  message.A detail message is a String that describes this
  particular exception.
 @param message the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertCertificateEncodingException)

FOUNDATION_EXPORT void JavaxSecurityCertCertificateEncodingException_init(JavaxSecurityCertCertificateEncodingException *self);

FOUNDATION_EXPORT JavaxSecurityCertCertificateEncodingException *new_JavaxSecurityCertCertificateEncodingException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityCertCertificateEncodingException *create_JavaxSecurityCertCertificateEncodingException_init(void);

FOUNDATION_EXPORT void JavaxSecurityCertCertificateEncodingException_initWithNSString_(JavaxSecurityCertCertificateEncodingException *self, NSString *message);

FOUNDATION_EXPORT JavaxSecurityCertCertificateEncodingException *new_JavaxSecurityCertCertificateEncodingException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityCertCertificateEncodingException *create_JavaxSecurityCertCertificateEncodingException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertCertificateEncodingException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxSecurityCertCertificateEncodingException")
