//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/PKIXRevocationChecker.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertPKIXRevocationChecker")
#ifdef RESTRICT_JavaSecurityCertPKIXRevocationChecker
#define INCLUDE_ALL_JavaSecurityCertPKIXRevocationChecker 0
#else
#define INCLUDE_ALL_JavaSecurityCertPKIXRevocationChecker 1
#endif
#undef RESTRICT_JavaSecurityCertPKIXRevocationChecker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertPKIXRevocationChecker_) && (INCLUDE_ALL_JavaSecurityCertPKIXRevocationChecker || defined(INCLUDE_JavaSecurityCertPKIXRevocationChecker))
#define JavaSecurityCertPKIXRevocationChecker_

#define RESTRICT_JavaSecurityCertPKIXCertPathChecker 1
#define INCLUDE_JavaSecurityCertPKIXCertPathChecker 1
#include <JRE/java/security/cert/PKIXCertPathChecker.h>

@class JavaNetURI;
@class JavaSecurityCertX509Certificate;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief A <code>PKIXCertPathChecker</code> for checking the revocation status of
  certificates with the PKIX algorithm.
 <p>A <code>PKIXRevocationChecker</code> checks the revocation status of
  certificates with the Online Certificate Status Protocol (OCSP) or
  Certificate Revocation Lists (CRLs). OCSP is described in RFC 2560 and
  is a network protocol for determining the status of a certificate. A CRL
  is a time-stamped list identifying revoked certificates, and RFC 5280
  describes an algorithm for determining the revocation status of certificates
  using CRLs. 
 <p>Each <code>PKIXRevocationChecker</code> must be able to check the revocation
  status of certificates with OCSP and CRLs. By default, OCSP is the
  preferred mechanism for checking revocation status, with CRLs as the
  fallback mechanism. However, this preference can be switched to CRLs with
  the <code>PREFER_CRLS</code> option. In addition, the fallback
  mechanism can be disabled with the <code>NO_FALLBACK</code>
  option. 
 <p>A <code>PKIXRevocationChecker</code> is obtained by calling the 
 <code>getRevocationChecker</code> method
  of a PKIX <code>CertPathValidator</code>. Additional parameters and options
  specific to revocation can be set (by calling the 
 <code>setOcspResponder</code> method for instance). The 
 <code>PKIXRevocationChecker</code> is added to a <code>PKIXParameters</code> object
  using the <code>addCertPathChecker</code>
  or <code>setCertPathCheckers</code> method,
  and then the <code>PKIXParameters</code> is passed along with the <code>CertPath</code>
  to be validated to the <code>validate</code> method
  of a PKIX <code>CertPathValidator</code>. When supplying a revocation checker in
  this manner, it will be used to check revocation irrespective of the setting of the 
 <code>RevocationEnabled</code> flag.
  Similarly, a <code>PKIXRevocationChecker</code> may be added to a 
 <code>PKIXBuilderParameters</code> object for use with a PKIX 
 <code>CertPathBuilder</code>.
  
 <p>Note that when a <code>PKIXRevocationChecker</code> is added to 
 <code>PKIXParameters</code>, it clones the <code>PKIXRevocationChecker</code>;
  thus any subsequent modifications to the <code>PKIXRevocationChecker</code>
  have no effect. 
 <p>Any parameter that is not set (or is set to <code>null</code>) will be set to
  the default value for that parameter. 
 <p><b>Concurrent Access</b>
  
 <p>Unless otherwise specified, the methods defined in this class are not
  thread-safe. Multiple threads that need to access a single object
  concurrently should synchronize amongst themselves and provide the
  necessary locking. Multiple threads each manipulating separate objects
  need not synchronize. 
 <p>See RFC 2560: X.509 Internet Public Key Infrastructure Online Certificate Status Protocol -
  OCSP, RFC 5280: Internet X.509 Public Key Infrastructure Certificate and Certificate Revocation
  List (CRL) Profile (Android note: this paragraph was originally in a malformed "see" tag below,
  moved here for correct construction of the docs).
 @since 1.8
 */
@interface JavaSecurityCertPKIXRevocationChecker : JavaSecurityCertPKIXCertPathChecker

#pragma mark Public

- (JavaSecurityCertPKIXRevocationChecker *)java_clone;

/*!
 @brief Gets the optional OCSP request extensions.
 @return an unmodifiable list of extensions. The list is empty if no
          extensions have been specified.
 */
- (id<JavaUtilList>)getOcspExtensions;

/*!
 @brief Gets the URI that identifies the location of the OCSP responder.This
  overrides the <code>ocsp.responderURL</code> security property.
 If this
  parameter or the <code>ocsp.responderURL</code> property is not set, the
  location is determined from the certificate's Authority Information
  Access Extension, as defined in RFC 5280.
 @return the responder URI, or <code>null</code> if not set
 */
- (JavaNetURI *)getOcspResponder;

/*!
 @brief Gets the OCSP responder's certificate.This overrides the 
 <code>ocsp.responderCertSubjectName</code>,
  <code>ocsp.responderCertIssuerName</code>,
  and <code>ocsp.responderCertSerialNumber</code> security properties.
 If this
  parameter or the aforementioned properties are not set, then the
  responder's certificate is determined as specified in RFC 2560.
 @return the responder's certificate, or <code>null</code> if not set
 */
- (JavaSecurityCertX509Certificate *)getOcspResponderCert;

/*!
 @brief Gets the OCSP responses.These responses are used to determine
  the revocation status of the specified certificates when OCSP is used.
 @return a map of OCSP responses. Each key is an
         <code>X509Certificate</code> that maps to the corresponding
         DER-encoded OCSP response for that certificate. A deep copy of
         the map is returned to protect against subsequent modification.
         Returns an empty map if no responses have been specified.
 */
- (id<JavaUtilMap>)getOcspResponses;

/*!
 @brief Gets the revocation options.
 @return an unmodifiable set of revocation options. The set is empty if
          no options have been specified.
 */
- (id<JavaUtilSet>)getOptions;

/*!
 @brief Returns a list containing the exceptions that are ignored by the
  revocation checker when the <code>SOFT_FAIL</code> option
  is set.The list is cleared each time <code>init</code> is called.
 The list is ordered in ascending order according to the certificate
  index returned by <code>getIndex</code>
  method of each entry. 
 <p>
  An implementation of <code>PKIXRevocationChecker</code> is responsible for
  adding the ignored exceptions to the list.
 @return an unmodifiable list containing the ignored exceptions. The list
          is empty if no exceptions have been ignored.
 */
- (id<JavaUtilList>)getSoftFailExceptions;

/*!
 @brief Sets the optional OCSP request extensions.
 @param extensions a list of extensions. The list is copied to protect         against subsequent modification.
 */
- (void)setOcspExtensionsWithJavaUtilList:(id<JavaUtilList>)extensions;

/*!
 @brief Sets the URI that identifies the location of the OCSP responder.This
  overrides the <code>ocsp.responderURL</code> security property and any
  responder specified in a certificate's Authority Information Access
  Extension, as defined in RFC 5280.
 @param uri the responder URI
 */
- (void)setOcspResponderWithJavaNetURI:(JavaNetURI *)uri;

/*!
 @brief Sets the OCSP responder's certificate.This overrides the 
 <code>ocsp.responderCertSubjectName</code>,
  <code>ocsp.responderCertIssuerName</code>,
  and <code>ocsp.responderCertSerialNumber</code> security properties.
 @param cert the responder's certificate
 */
- (void)setOcspResponderCertWithJavaSecurityCertX509Certificate:(JavaSecurityCertX509Certificate *)cert;

/*!
 @brief Sets the OCSP responses.These responses are used to determine
  the revocation status of the specified certificates when OCSP is used.
 @param responses a map of OCSP responses. Each key is an         
 <code>X509Certificate</code>  that maps to the corresponding         DER-encoded OCSP response for that certificate. A deep copy of
          the map is performed to protect against subsequent modification.
 */
- (void)setOcspResponsesWithJavaUtilMap:(id<JavaUtilMap>)responses;

/*!
 @brief Sets the revocation options.
 @param options a set of revocation options. The set is copied to protect         against subsequent modification.
 */
- (void)setOptionsWithJavaUtilSet:(id<JavaUtilSet>)options;

#pragma mark Protected

/*!
 @brief Default constructor.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertPKIXRevocationChecker)

FOUNDATION_EXPORT void JavaSecurityCertPKIXRevocationChecker_init(JavaSecurityCertPKIXRevocationChecker *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertPKIXRevocationChecker)

#endif

#if !defined (JavaSecurityCertPKIXRevocationChecker_Option_) && (INCLUDE_ALL_JavaSecurityCertPKIXRevocationChecker || defined(INCLUDE_JavaSecurityCertPKIXRevocationChecker_Option))
#define JavaSecurityCertPKIXRevocationChecker_Option_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include <JRE/java/lang/Enum.h>

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaSecurityCertPKIXRevocationChecker_Option_Enum) {
  JavaSecurityCertPKIXRevocationChecker_Option_Enum_ONLY_END_ENTITY = 0,
  JavaSecurityCertPKIXRevocationChecker_Option_Enum_PREFER_CRLS = 1,
  JavaSecurityCertPKIXRevocationChecker_Option_Enum_NO_FALLBACK = 2,
  JavaSecurityCertPKIXRevocationChecker_Option_Enum_SOFT_FAIL = 3,
};

/*!
 @brief Various revocation options that can be specified for the revocation
  checking mechanism.
 */
@interface JavaSecurityCertPKIXRevocationChecker_Option : JavaLangEnum

@property (readonly, class, nonnull) JavaSecurityCertPKIXRevocationChecker_Option *ONLY_END_ENTITY NS_SWIFT_NAME(ONLY_END_ENTITY);
@property (readonly, class, nonnull) JavaSecurityCertPKIXRevocationChecker_Option *PREFER_CRLS NS_SWIFT_NAME(PREFER_CRLS);
@property (readonly, class, nonnull) JavaSecurityCertPKIXRevocationChecker_Option *NO_FALLBACK NS_SWIFT_NAME(NO_FALLBACK);
@property (readonly, class, nonnull) JavaSecurityCertPKIXRevocationChecker_Option *SOFT_FAIL NS_SWIFT_NAME(SOFT_FAIL);
#pragma mark Public

+ (JavaSecurityCertPKIXRevocationChecker_Option *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaSecurityCertPKIXRevocationChecker_Option_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaSecurityCertPKIXRevocationChecker_Option)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaSecurityCertPKIXRevocationChecker_Option *JavaSecurityCertPKIXRevocationChecker_Option_values_[];

/*!
 @brief Only check the revocation status of end-entity certificates.
 */
inline JavaSecurityCertPKIXRevocationChecker_Option *JavaSecurityCertPKIXRevocationChecker_Option_get_ONLY_END_ENTITY(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCertPKIXRevocationChecker_Option, ONLY_END_ENTITY)

/*!
 @brief Prefer CRLs to OSCP.The default behavior is to prefer OCSP.
 Each
  PKIX implementation should document further details of their
  specific preference rules and fallback policies.
 */
inline JavaSecurityCertPKIXRevocationChecker_Option *JavaSecurityCertPKIXRevocationChecker_Option_get_PREFER_CRLS(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCertPKIXRevocationChecker_Option, PREFER_CRLS)

/*!
 @brief Disable the fallback mechanism.
 */
inline JavaSecurityCertPKIXRevocationChecker_Option *JavaSecurityCertPKIXRevocationChecker_Option_get_NO_FALLBACK(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCertPKIXRevocationChecker_Option, NO_FALLBACK)

/*!
 @brief Allow revocation check to succeed if the revocation status cannot be
  determined for one of the following reasons: 
 <ul>
   <li>The CRL or OCSP response cannot be obtained because of a
       network error.
 <li>The OCSP responder returns one of the following errors
       specified in section 2.3 of RFC 2560: internalError or tryLater. 
 </ul><br>
  Note that these conditions apply to both OCSP and CRLs, and unless
  the <code>NO_FALLBACK</code> option is set, the revocation check is
  allowed to succeed only if both mechanisms fail under one of the
  conditions as stated above.
  Exceptions that cause the network errors are ignored but can be
  later retrieved by calling the 
 <code>getSoftFailExceptions</code> method.
 */
inline JavaSecurityCertPKIXRevocationChecker_Option *JavaSecurityCertPKIXRevocationChecker_Option_get_SOFT_FAIL(void);
J2OBJC_ENUM_CONSTANT(JavaSecurityCertPKIXRevocationChecker_Option, SOFT_FAIL)

FOUNDATION_EXPORT IOSObjectArray *JavaSecurityCertPKIXRevocationChecker_Option_values(void);

FOUNDATION_EXPORT JavaSecurityCertPKIXRevocationChecker_Option *JavaSecurityCertPKIXRevocationChecker_Option_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaSecurityCertPKIXRevocationChecker_Option *JavaSecurityCertPKIXRevocationChecker_Option_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertPKIXRevocationChecker_Option)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertPKIXRevocationChecker")
