//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/PKIXBuilderParameters.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertPKIXBuilderParameters")
#ifdef RESTRICT_JavaSecurityCertPKIXBuilderParameters
#define INCLUDE_ALL_JavaSecurityCertPKIXBuilderParameters 0
#else
#define INCLUDE_ALL_JavaSecurityCertPKIXBuilderParameters 1
#endif
#undef RESTRICT_JavaSecurityCertPKIXBuilderParameters

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertPKIXBuilderParameters_) && (INCLUDE_ALL_JavaSecurityCertPKIXBuilderParameters || defined(INCLUDE_JavaSecurityCertPKIXBuilderParameters))
#define JavaSecurityCertPKIXBuilderParameters_

#define RESTRICT_JavaSecurityCertPKIXParameters 1
#define INCLUDE_JavaSecurityCertPKIXParameters 1
#include <JRE/java/security/cert/PKIXParameters.h>

@class JavaSecurityKeyStore;
@protocol JavaSecurityCertCertSelector;
@protocol JavaUtilSet;

/*!
 @brief Parameters used as input for the PKIX <code>CertPathBuilder</code>
  algorithm.
 <p>
  A PKIX <code>CertPathBuilder</code> uses these parameters to <code>build</code>
  a <code>CertPath</code> which has been
  validated according to the PKIX certification path validation algorithm. 
 <p>To instantiate a <code>PKIXBuilderParameters</code> object, an
  application must specify one or more <i>most-trusted CAs</i> as defined by
  the PKIX certification path validation algorithm. The most-trusted CA
  can be specified using one of two constructors. An application
  can call <code>PKIXBuilderParameters(Set, CertSelector)</code>
 , specifying a 
 <code>Set</code> of <code>TrustAnchor</code> objects, each of which
  identifies a most-trusted CA. Alternatively, an application can call 
 <code>PKIXBuilderParameters(KeyStore, CertSelector)</code>
 , specifying a 
 <code>KeyStore</code> instance containing trusted certificate entries, each
  of which will be considered as a most-trusted CA. 
 <p>In addition, an application must specify constraints on the target
  certificate that the <code>CertPathBuilder</code> will attempt
  to build a path to. The constraints are specified as a 
 <code>CertSelector</code> object. These constraints should provide the 
 <code>CertPathBuilder</code> with enough search criteria to find the target
  certificate. Minimal criteria for an <code>X509Certificate</code> usually
  include the subject name and/or one or more subject alternative names.
  If enough criteria is not specified, the <code>CertPathBuilder</code>
  may throw a <code>CertPathBuilderException</code>.
  <p>
  <b>Concurrent Access</b>
  <p>
  Unless otherwise specified, the methods defined in this class are not
  thread-safe. Multiple threads that need to access a single
  object concurrently should synchronize amongst themselves and
  provide the necessary locking. Multiple threads each manipulating
  separate objects need not synchronize.
 - seealso: CertPathBuilder
 @since 1.4
 @author Sean Mullan
 */
@interface JavaSecurityCertPKIXBuilderParameters : JavaSecurityCertPKIXParameters

#pragma mark Public

/*!
 @brief Creates an instance of <code>PKIXBuilderParameters</code> that
  populates the set of most-trusted CAs from the trusted
  certificate entries contained in the specified <code>KeyStore</code>.
 Only keystore entries that contain trusted <code>X509Certificate</code>s
  are considered; all other certificate types are ignored.
 @param keystore a <code>KeyStore</code>  from which the set of
   most-trusted CAs will be populated
 @param targetConstraints a <code>CertSelector</code>  specifying the
   constraints on the target certificate
 @throw KeyStoreExceptionif <code>keystore</code> has not been
  initialized
 @throw InvalidAlgorithmParameterExceptionif <code>keystore</code> does
  not contain at least one trusted certificate entry
 @throw NullPointerExceptionif <code>keystore</code> is 
 <code>null</code>
 */
- (instancetype __nonnull)initWithJavaSecurityKeyStore:(JavaSecurityKeyStore *)keystore
                      withJavaSecurityCertCertSelector:(id<JavaSecurityCertCertSelector>)targetConstraints;

/*!
 @brief Creates an instance of <code>PKIXBuilderParameters</code> with
  the specified <code>Set</code> of most-trusted CAs.
 Each element of the set is a <code>TrustAnchor</code>.
  
 <p>Note that the <code>Set</code> is copied to protect against
  subsequent modifications.
 @param trustAnchors a <code>Set</code>  of <code>TrustAnchor</code> s
 @param targetConstraints a <code>CertSelector</code>  specifying the
   constraints on the target certificate
 @throw InvalidAlgorithmParameterExceptionif <code>trustAnchors</code>
  is empty <code>(trustAnchors.isEmpty() == true)</code>
 @throw NullPointerExceptionif <code>trustAnchors</code> is 
 <code>null</code>
 @throw ClassCastExceptionif any of the elements of 
 <code>trustAnchors</code> are not of type 
 <code>java.security.cert.TrustAnchor</code>
 */
- (instancetype __nonnull)initWithJavaUtilSet:(id<JavaUtilSet>)trustAnchors
             withJavaSecurityCertCertSelector:(id<JavaSecurityCertCertSelector>)targetConstraints;

/*!
 @brief Returns the value of the maximum number of intermediate non-self-issued
  certificates that may exist in a certification path.See
  the <code>setMaxPathLength</code> method for more details.
 @return the maximum number of non-self-issued intermediate certificates
   that may exist in a certification path, or -1 if there is no limit
 - seealso: #setMaxPathLength
 */
- (jint)getMaxPathLength;

/*!
 @brief Sets the value of the maximum number of non-self-issued intermediate
  certificates that may exist in a certification path.A certificate
  is self-issued if the DNs that appear in the subject and issuer
  fields are identical and are not empty.
 Note that the last certificate
  in a certification path is not an intermediate certificate, and is not
  included in this limit. Usually the last certificate is an end entity
  certificate, but it can be a CA certificate. A PKIX 
 <code>CertPathBuilder</code> instance must not build
  paths longer than the length specified. 
 <p> A value of 0 implies that the path can only contain
  a single certificate. A value of -1 implies that the
  path length is unconstrained (i.e. there is no maximum).
  The default maximum path length, if not specified, is 5.
  Setting a value less than -1 will cause an exception to be thrown. 
 <p> If any of the CA certificates contain the 
 <code>BasicConstraintsExtension</code>, the value of the 
 <code>pathLenConstraint</code> field of the extension overrides
  the maximum path length parameter whenever the result is a
  certification path of smaller length.
 @param maxPathLength the maximum number of non-self-issued intermediate   certificates that may exist in a certification path
 @throw InvalidParameterExceptionif <code>maxPathLength</code> is set
   to a value less than -1
 - seealso: #getMaxPathLength
 */
- (void)setMaxPathLengthWithInt:(jint)maxPathLength;

/*!
 @brief Returns a formatted string describing the parameters.
 @return a formatted string describing the parameters
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaSecurityKeyStore:(JavaSecurityKeyStore *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaUtilSet:(id<JavaUtilSet>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertPKIXBuilderParameters)

FOUNDATION_EXPORT void JavaSecurityCertPKIXBuilderParameters_initWithJavaUtilSet_withJavaSecurityCertCertSelector_(JavaSecurityCertPKIXBuilderParameters *self, id<JavaUtilSet> trustAnchors, id<JavaSecurityCertCertSelector> targetConstraints);

FOUNDATION_EXPORT JavaSecurityCertPKIXBuilderParameters *new_JavaSecurityCertPKIXBuilderParameters_initWithJavaUtilSet_withJavaSecurityCertCertSelector_(id<JavaUtilSet> trustAnchors, id<JavaSecurityCertCertSelector> targetConstraints) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertPKIXBuilderParameters *create_JavaSecurityCertPKIXBuilderParameters_initWithJavaUtilSet_withJavaSecurityCertCertSelector_(id<JavaUtilSet> trustAnchors, id<JavaSecurityCertCertSelector> targetConstraints);

FOUNDATION_EXPORT void JavaSecurityCertPKIXBuilderParameters_initWithJavaSecurityKeyStore_withJavaSecurityCertCertSelector_(JavaSecurityCertPKIXBuilderParameters *self, JavaSecurityKeyStore *keystore, id<JavaSecurityCertCertSelector> targetConstraints);

FOUNDATION_EXPORT JavaSecurityCertPKIXBuilderParameters *new_JavaSecurityCertPKIXBuilderParameters_initWithJavaSecurityKeyStore_withJavaSecurityCertCertSelector_(JavaSecurityKeyStore *keystore, id<JavaSecurityCertCertSelector> targetConstraints) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertPKIXBuilderParameters *create_JavaSecurityCertPKIXBuilderParameters_initWithJavaSecurityKeyStore_withJavaSecurityCertCertSelector_(JavaSecurityKeyStore *keystore, id<JavaSecurityCertCertSelector> targetConstraints);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertPKIXBuilderParameters)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertPKIXBuilderParameters")
