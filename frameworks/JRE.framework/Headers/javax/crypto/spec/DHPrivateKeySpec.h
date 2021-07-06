//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/spec/DHPrivateKeySpec.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxCryptoSpecDHPrivateKeySpec")
#ifdef RESTRICT_JavaxCryptoSpecDHPrivateKeySpec
#define INCLUDE_ALL_JavaxCryptoSpecDHPrivateKeySpec 0
#else
#define INCLUDE_ALL_JavaxCryptoSpecDHPrivateKeySpec 1
#endif
#undef RESTRICT_JavaxCryptoSpecDHPrivateKeySpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoSpecDHPrivateKeySpec_) && (INCLUDE_ALL_JavaxCryptoSpecDHPrivateKeySpec || defined(INCLUDE_JavaxCryptoSpecDHPrivateKeySpec))
#define JavaxCryptoSpecDHPrivateKeySpec_

#define RESTRICT_JavaSecuritySpecKeySpec 1
#define INCLUDE_JavaSecuritySpecKeySpec 1
#include <JRE/java/security/spec/KeySpec.h>

@class JavaMathBigInteger;

/*!
 @brief This class specifies a Diffie-Hellman private key with its associated
  parameters.
 <p>Note that this class does not perform any validation on specified
  parameters. Thus, the specified values are returned directly even
  if they are null.
 @author Jan Luehe
 - seealso: DHPublicKeySpec
 @since 1.4
 */
@interface JavaxCryptoSpecDHPrivateKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

/*!
 @brief Constructor that takes a private value <code>x</code>, a prime
  modulus <code>p</code>, and a base generator <code>g</code>.
 @param x private value x
 @param p prime modulus p
 @param g base generator g
 */
- (instancetype __nonnull)initWithJavaMathBigInteger:(JavaMathBigInteger *)x
                              withJavaMathBigInteger:(JavaMathBigInteger *)p
                              withJavaMathBigInteger:(JavaMathBigInteger *)g;

/*!
 @brief Returns the base generator <code>g</code>.
 @return the base generator <code>g</code>
 */
- (JavaMathBigInteger *)getG;

/*!
 @brief Returns the prime modulus <code>p</code>.
 @return the prime modulus <code>p</code>
 */
- (JavaMathBigInteger *)getP;

/*!
 @brief Returns the private value <code>x</code>.
 @return the private value <code>x</code>
 */
- (JavaMathBigInteger *)getX;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoSpecDHPrivateKeySpec)

FOUNDATION_EXPORT void JavaxCryptoSpecDHPrivateKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaxCryptoSpecDHPrivateKeySpec *self, JavaMathBigInteger *x, JavaMathBigInteger *p, JavaMathBigInteger *g);

FOUNDATION_EXPORT JavaxCryptoSpecDHPrivateKeySpec *new_JavaxCryptoSpecDHPrivateKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *x, JavaMathBigInteger *p, JavaMathBigInteger *g) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecDHPrivateKeySpec *create_JavaxCryptoSpecDHPrivateKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *x, JavaMathBigInteger *p, JavaMathBigInteger *g);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecDHPrivateKeySpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoSpecDHPrivateKeySpec")
