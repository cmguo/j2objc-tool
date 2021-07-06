//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/DSAPublicKeySpec.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecDSAPublicKeySpec")
#ifdef RESTRICT_JavaSecuritySpecDSAPublicKeySpec
#define INCLUDE_ALL_JavaSecuritySpecDSAPublicKeySpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecDSAPublicKeySpec 1
#endif
#undef RESTRICT_JavaSecuritySpecDSAPublicKeySpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySpecDSAPublicKeySpec_) && (INCLUDE_ALL_JavaSecuritySpecDSAPublicKeySpec || defined(INCLUDE_JavaSecuritySpecDSAPublicKeySpec))
#define JavaSecuritySpecDSAPublicKeySpec_

#define RESTRICT_JavaSecuritySpecKeySpec 1
#define INCLUDE_JavaSecuritySpecKeySpec 1
#include <JRE/java/security/spec/KeySpec.h>

@class JavaMathBigInteger;

/*!
 @brief This class specifies a DSA public key with its associated parameters.
 @author Jan Luehe
 - seealso: java.security.Key
 - seealso: java.security.KeyFactory
 - seealso: KeySpec
 - seealso: DSAPrivateKeySpec
 - seealso: X509EncodedKeySpec
 @since 1.2
 */
@interface JavaSecuritySpecDSAPublicKeySpec : NSObject < JavaSecuritySpecKeySpec >

#pragma mark Public

/*!
 @brief Creates a new DSAPublicKeySpec with the specified parameter values.
 @param y the public key.
 @param p the prime.
 @param q the sub-prime.
 @param g the base.
 */
- (instancetype __nonnull)initWithJavaMathBigInteger:(JavaMathBigInteger *)y
                              withJavaMathBigInteger:(JavaMathBigInteger *)p
                              withJavaMathBigInteger:(JavaMathBigInteger *)q
                              withJavaMathBigInteger:(JavaMathBigInteger *)g;

/*!
 @brief Returns the base <code>g</code>.
 @return the base <code>g</code>.
 */
- (JavaMathBigInteger *)getG;

/*!
 @brief Returns the prime <code>p</code>.
 @return the prime <code>p</code>.
 */
- (JavaMathBigInteger *)getP;

/*!
 @brief Returns the sub-prime <code>q</code>.
 @return the sub-prime <code>q</code>.
 */
- (JavaMathBigInteger *)getQ;

/*!
 @brief Returns the public key <code>y</code>.
 @return the public key <code>y</code>.
 */
- (JavaMathBigInteger *)getY;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecDSAPublicKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecDSAPublicKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaSecuritySpecDSAPublicKeySpec *self, JavaMathBigInteger *y, JavaMathBigInteger *p, JavaMathBigInteger *q, JavaMathBigInteger *g);

FOUNDATION_EXPORT JavaSecuritySpecDSAPublicKeySpec *new_JavaSecuritySpecDSAPublicKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *y, JavaMathBigInteger *p, JavaMathBigInteger *q, JavaMathBigInteger *g) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecDSAPublicKeySpec *create_JavaSecuritySpecDSAPublicKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *y, JavaMathBigInteger *p, JavaMathBigInteger *q, JavaMathBigInteger *g);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecDSAPublicKeySpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecDSAPublicKeySpec")
