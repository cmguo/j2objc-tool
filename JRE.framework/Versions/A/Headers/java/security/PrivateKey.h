//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/PrivateKey.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityPrivateKey")
#ifdef RESTRICT_JavaSecurityPrivateKey
#define INCLUDE_ALL_JavaSecurityPrivateKey 0
#else
#define INCLUDE_ALL_JavaSecurityPrivateKey 1
#endif
#undef RESTRICT_JavaSecurityPrivateKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityPrivateKey_) && (INCLUDE_ALL_JavaSecurityPrivateKey || defined(INCLUDE_JavaSecurityPrivateKey))
#define JavaSecurityPrivateKey_

#define RESTRICT_JavaSecurityKey 1
#define INCLUDE_JavaSecurityKey 1
#include "java/security/Key.h"

/*!
 @brief <p>A private key.
 This interface contains no methods or constants.
  It merely serves to group (and provide type safety for) all private key
  interfaces.
  Note: The specialized private key interfaces extend this interface.
  See, for example, the DSAPrivateKey interface in 
 <code>java.security.interfaces</code>.
 - seealso: Key
 - seealso: PublicKey
 - seealso: Certificate
 - seealso: Signature#initVerify
 - seealso: java.security.interfaces.DSAPrivateKey
 - seealso: java.security.interfaces.RSAPrivateKey
 - seealso: java.security.interfaces.RSAPrivateCrtKey
 @author Benjamin Renaud
 @author Josh Bloch
 */
@protocol JavaSecurityPrivateKey < JavaSecurityKey, JavaObject >

@end

@interface JavaSecurityPrivateKey : NSObject
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

+ (jlong)serialVersionUID;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPrivateKey)

/*!
 @brief The class fingerprint that is set to indicate serialization
  compatibility with a previous version of the class.
 */
inline jlong JavaSecurityPrivateKey_get_serialVersionUID(void);
#define JavaSecurityPrivateKey_serialVersionUID 6034044314589513430LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityPrivateKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPrivateKey)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityPrivateKey")
