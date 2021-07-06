//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/interfaces/RSAPublicKey.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaSecurityInterfacesRSAPublicKey")
#ifdef RESTRICT_JavaSecurityInterfacesRSAPublicKey
#define INCLUDE_ALL_JavaSecurityInterfacesRSAPublicKey 0
#else
#define INCLUDE_ALL_JavaSecurityInterfacesRSAPublicKey 1
#endif
#undef RESTRICT_JavaSecurityInterfacesRSAPublicKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityInterfacesRSAPublicKey_) && (INCLUDE_ALL_JavaSecurityInterfacesRSAPublicKey || defined(INCLUDE_JavaSecurityInterfacesRSAPublicKey))
#define JavaSecurityInterfacesRSAPublicKey_

#define RESTRICT_JavaSecurityPublicKey 1
#define INCLUDE_JavaSecurityPublicKey 1
#include <JRE/java/security/PublicKey.h>

#define RESTRICT_JavaSecurityInterfacesRSAKey 1
#define INCLUDE_JavaSecurityInterfacesRSAKey 1
#include <JRE/java/security/interfaces/RSAKey.h>

@class JavaMathBigInteger;

/*!
 @brief The interface to an RSA public key.
 @author Jan Luehe
 */
@protocol JavaSecurityInterfacesRSAPublicKey < JavaSecurityPublicKey, JavaSecurityInterfacesRSAKey, JavaObject >

/*!
 @brief Returns the public exponent.
 @return the public exponent
 */
- (JavaMathBigInteger *)getPublicExponent;

@end

@interface JavaSecurityInterfacesRSAPublicKey : NSObject
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesRSAPublicKey)

/*!
 @brief The type fingerprint that is set to indicate
  serialization compatibility with a previous
  version of the type.
 */
inline jlong JavaSecurityInterfacesRSAPublicKey_get_serialVersionUID(void);
#define JavaSecurityInterfacesRSAPublicKey_serialVersionUID -8727434096241101194LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityInterfacesRSAPublicKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesRSAPublicKey)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityInterfacesRSAPublicKey")
