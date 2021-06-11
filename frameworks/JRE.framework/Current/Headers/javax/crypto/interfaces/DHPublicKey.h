//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/interfaces/DHPublicKey.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoInterfacesDHPublicKey")
#ifdef RESTRICT_JavaxCryptoInterfacesDHPublicKey
#define INCLUDE_ALL_JavaxCryptoInterfacesDHPublicKey 0
#else
#define INCLUDE_ALL_JavaxCryptoInterfacesDHPublicKey 1
#endif
#undef RESTRICT_JavaxCryptoInterfacesDHPublicKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoInterfacesDHPublicKey_) && (INCLUDE_ALL_JavaxCryptoInterfacesDHPublicKey || defined(INCLUDE_JavaxCryptoInterfacesDHPublicKey))
#define JavaxCryptoInterfacesDHPublicKey_

#define RESTRICT_JavaxCryptoInterfacesDHKey 1
#define INCLUDE_JavaxCryptoInterfacesDHKey 1
#include "javax/crypto/interfaces/DHKey.h"

#define RESTRICT_JavaSecurityPublicKey 1
#define INCLUDE_JavaSecurityPublicKey 1
#include "java/security/PublicKey.h"

@class JavaMathBigInteger;

/*!
 @brief The interface to a Diffie-Hellman public key.
 @author Jan Luehe
 - seealso: DHKey
 - seealso: DHPrivateKey
 @since 1.4
 */
@protocol JavaxCryptoInterfacesDHPublicKey < JavaxCryptoInterfacesDHKey, JavaSecurityPublicKey, JavaObject >

/*!
 @brief Returns the public value, <code>y</code>.
 @return the public value, <code>y</code>
 */
- (JavaMathBigInteger *)getY;

@end

@interface JavaxCryptoInterfacesDHPublicKey : NSObject
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoInterfacesDHPublicKey)

/*!
 @brief The class fingerprint that is set to indicate serialization
  compatibility since J2SE 1.4.
 */
inline jlong JavaxCryptoInterfacesDHPublicKey_get_serialVersionUID(void);
#define JavaxCryptoInterfacesDHPublicKey_serialVersionUID -6628103563352519193LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaxCryptoInterfacesDHPublicKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoInterfacesDHPublicKey)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoInterfacesDHPublicKey")
