//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/interfaces/RSAPrivateCrtKey.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaSecurityInterfacesRSAPrivateCrtKey")
#ifdef RESTRICT_JavaSecurityInterfacesRSAPrivateCrtKey
#define INCLUDE_ALL_JavaSecurityInterfacesRSAPrivateCrtKey 0
#else
#define INCLUDE_ALL_JavaSecurityInterfacesRSAPrivateCrtKey 1
#endif
#undef RESTRICT_JavaSecurityInterfacesRSAPrivateCrtKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityInterfacesRSAPrivateCrtKey_) && (INCLUDE_ALL_JavaSecurityInterfacesRSAPrivateCrtKey || defined(INCLUDE_JavaSecurityInterfacesRSAPrivateCrtKey))
#define JavaSecurityInterfacesRSAPrivateCrtKey_

#define RESTRICT_JavaSecurityInterfacesRSAPrivateKey 1
#define INCLUDE_JavaSecurityInterfacesRSAPrivateKey 1
#include <JRE/java/security/interfaces/RSAPrivateKey.h>

@class JavaMathBigInteger;

/*!
 @brief The interface to an RSA private key, as defined in the PKCS#1 standard,
  using the <i>Chinese Remainder Theorem</i> (CRT) information values.
 @author Jan Luehe
 - seealso: RSAPrivateKey
 */
@protocol JavaSecurityInterfacesRSAPrivateCrtKey < JavaSecurityInterfacesRSAPrivateKey, JavaObject >

/*!
 @brief Returns the public exponent.
 @return the public exponent
 */
- (JavaMathBigInteger *)getPublicExponent;

/*!
 @brief Returns the primeP.
 @return the primeP
 */
- (JavaMathBigInteger *)getPrimeP;

/*!
 @brief Returns the primeQ.
 @return the primeQ
 */
- (JavaMathBigInteger *)getPrimeQ;

/*!
 @brief Returns the primeExponentP.
 @return the primeExponentP
 */
- (JavaMathBigInteger *)getPrimeExponentP;

/*!
 @brief Returns the primeExponentQ.
 @return the primeExponentQ
 */
- (JavaMathBigInteger *)getPrimeExponentQ;

/*!
 @brief Returns the crtCoefficient.
 @return the crtCoefficient
 */
- (JavaMathBigInteger *)getCrtCoefficient;

@end

@interface JavaSecurityInterfacesRSAPrivateCrtKey : NSObject
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesRSAPrivateCrtKey)

/*!
 @brief The type fingerprint that is set to indicate
  serialization compatibility with a previous
  version of the type.
 */
inline jlong JavaSecurityInterfacesRSAPrivateCrtKey_get_serialVersionUID(void);
#define JavaSecurityInterfacesRSAPrivateCrtKey_serialVersionUID -5682214253527700368LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityInterfacesRSAPrivateCrtKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesRSAPrivateCrtKey)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityInterfacesRSAPrivateCrtKey")
