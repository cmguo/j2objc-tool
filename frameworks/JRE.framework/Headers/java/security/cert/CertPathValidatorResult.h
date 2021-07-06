//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CertPathValidatorResult.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertPathValidatorResult")
#ifdef RESTRICT_JavaSecurityCertCertPathValidatorResult
#define INCLUDE_ALL_JavaSecurityCertCertPathValidatorResult 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertPathValidatorResult 1
#endif
#undef RESTRICT_JavaSecurityCertCertPathValidatorResult

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertCertPathValidatorResult_) && (INCLUDE_ALL_JavaSecurityCertCertPathValidatorResult || defined(INCLUDE_JavaSecurityCertCertPathValidatorResult))
#define JavaSecurityCertCertPathValidatorResult_

/*!
 @brief A specification of the result of a certification path validator algorithm.
 <p>
  The purpose of this interface is to group (and provide type safety
  for) all certification path validator results. All results returned
  by the <code>CertPathValidator.validate</code>
  method must implement this interface.
 - seealso: CertPathValidator
 @since 1.4
 @author Yassir Elley
 */
@protocol JavaSecurityCertCertPathValidatorResult < NSCopying, JavaObject >

/*!
 @brief Makes a copy of this <code>CertPathValidatorResult</code>.Changes to the
  copy will not affect the original and vice versa.
 @return a copy of this <code>CertPathValidatorResult</code>
 */
- (id)clone;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertPathValidatorResult)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertPathValidatorResult)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertPathValidatorResult")
