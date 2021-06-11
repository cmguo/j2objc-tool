//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/PKIXCertPathChecker.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertPKIXCertPathChecker")
#ifdef RESTRICT_JavaSecurityCertPKIXCertPathChecker
#define INCLUDE_ALL_JavaSecurityCertPKIXCertPathChecker 0
#else
#define INCLUDE_ALL_JavaSecurityCertPKIXCertPathChecker 1
#endif
#undef RESTRICT_JavaSecurityCertPKIXCertPathChecker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertPKIXCertPathChecker_) && (INCLUDE_ALL_JavaSecurityCertPKIXCertPathChecker || defined(INCLUDE_JavaSecurityCertPKIXCertPathChecker))
#define JavaSecurityCertPKIXCertPathChecker_

#define RESTRICT_JavaSecurityCertCertPathChecker 1
#define INCLUDE_JavaSecurityCertCertPathChecker 1
#include "java/security/cert/CertPathChecker.h"

@class JavaSecurityCertCertificate;
@protocol JavaUtilCollection;
@protocol JavaUtilSet;

/*!
 @brief An abstract class that performs one or more checks on an 
 <code>X509Certificate</code>.
 <p>A concrete implementation of the <code>PKIXCertPathChecker</code> class
  can be created to extend the PKIX certification path validation algorithm.
  For example, an implementation may check for and process a critical private
  extension of each certificate in a certification path. 
 <p>Instances of <code>PKIXCertPathChecker</code> are passed as parameters
  using the <code>setCertPathCheckers</code>
  or <code>addCertPathChecker</code> methods
  of the <code>PKIXParameters</code> and <code>PKIXBuilderParameters</code>
  class. Each of the <code>PKIXCertPathChecker</code>s <code>check</code>
  methods will be called, in turn, for each certificate processed by a PKIX 
 <code>CertPathValidator</code> or <code>CertPathBuilder</code>
  implementation. 
 <p>A <code>PKIXCertPathChecker</code> may be called multiple times on
  successive certificates in a certification path. Concrete subclasses
  are expected to maintain any internal state that may be necessary to
  check successive certificates. The <code>init</code> method is used
  to initialize the internal state of the checker so that the certificates
  of a new certification path may be checked. A stateful implementation 
 <b>must</b> override the <code>clone</code> method if necessary in
  order to allow a PKIX <code>CertPathBuilder</code> to efficiently
  backtrack and try other paths. In these situations, the 
 <code>CertPathBuilder</code> is able to restore prior path validation
  states by restoring the cloned <code>PKIXCertPathChecker</code>s.
  
 <p>The order in which the certificates are presented to the 
 <code>PKIXCertPathChecker</code> may be either in the forward direction
  (from target to most-trusted CA) or in the reverse direction (from
  most-trusted CA to target). A <code>PKIXCertPathChecker</code> implementation 
 <b>must</b> support reverse checking (the ability to perform its checks when
  it is presented with certificates in the reverse direction) and <b>may</b>
  support forward checking (the ability to perform its checks when it is
  presented with certificates in the forward direction). The 
 <code>isForwardCheckingSupported</code> method
  indicates whether forward checking is supported. 
 <p>
  Additional input parameters required for executing the check may be
  specified through constructors of concrete implementations of this class. 
 <p>
  <b>Concurrent Access</b>
  <p>
  Unless otherwise specified, the methods defined in this class are not
  thread-safe. Multiple threads that need to access a single
  object concurrently should synchronize amongst themselves and
  provide the necessary locking. Multiple threads each manipulating
  separate objects need not synchronize.
 - seealso: PKIXParameters
 - seealso: PKIXBuilderParameters
 @since 1.4
 @author Yassir Elley
 @author Sean Mullan
 */
@interface JavaSecurityCertPKIXCertPathChecker : NSObject < JavaSecurityCertCertPathChecker, NSCopying >

#pragma mark Public

/*!
 @brief <p>This implementation calls 
 <code>check(cert, java.util.Collections.
 <String>emptySet())</code>.
 */
- (void)checkWithJavaSecurityCertCertificate:(JavaSecurityCertCertificate *)cert;

/*!
 @brief Performs the check(s) on the specified certificate using its internal
  state and removes any critical extensions that it processes from the
  specified collection of OID strings that represent the unresolved
  critical extensions.The certificates are presented in the order
  specified by the <code>init</code> method.
 @param cert the <code>Certificate</code>  to be checked
 @param unresolvedCritExts a <code>Collection</code>  of OID strings
   representing the current set of unresolved critical extensions
 @throw CertPathValidatorExceptionif the specified certificate does
  not pass the check
 */
- (void)checkWithJavaSecurityCertCertificate:(JavaSecurityCertCertificate *)cert
                      withJavaUtilCollection:(id<JavaUtilCollection>)unresolvedCritExts;

/*!
 @brief Returns a clone of this object.Calls the <code>Object.clone()</code>
  method.
 All subclasses which maintain state must support and
  override this method, if necessary.
 @return a copy of this <code>PKIXCertPathChecker</code>
 */
- (id)java_clone;

/*!
 @brief Returns an immutable <code>Set</code> of X.509 certificate extensions
  that this <code>PKIXCertPathChecker</code> supports (i.e.recognizes, is
  able to process), or <code>null</code> if no extensions are supported.
 <p>
  Each element of the set is a <code>String</code> representing the
  Object Identifier (OID) of the X.509 extension that is supported.
  The OID is represented by a set of nonnegative integers separated by
  periods. 
 <p>
  All X.509 certificate extensions that a <code>PKIXCertPathChecker</code>
  might possibly be able to process should be included in the set.
 @return an immutable <code>Set</code> of X.509 extension OIDs (in 
 <code>String</code> format) supported by this 
 <code>PKIXCertPathChecker</code>, or <code>null</code> if no
  extensions are supported
 */
- (id<JavaUtilSet>)getSupportedExtensions;

/*!
 @brief Initializes the internal state of this <code>PKIXCertPathChecker</code>.
 <p>
  The <code>forward</code> flag specifies the order that
  certificates will be passed to the <code>check</code> method
  (forward or reverse). A <code>PKIXCertPathChecker</code> <b>must</b>
  support reverse checking and <b>may</b> support forward checking.
 @param forward the order that certificates are presented to  the 
 <code>check</code>  method. If <code>true</code> , certificates  are presented from target to most-trusted CA (forward); if
   <code>false</code>
  , from most-trusted CA to target (reverse).
 @throw CertPathValidatorExceptionif this 
 <code>PKIXCertPathChecker</code> is unable to check certificates in
  the specified order; it should never be thrown if the forward flag
  is false since reverse checking must be supported
 */
- (void)init__WithBoolean:(jboolean)forward OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Indicates if forward checking is supported.Forward checking refers
  to the ability of the <code>PKIXCertPathChecker</code> to perform
  its checks when certificates are presented to the <code>check</code>
  method in the forward direction (from target to most-trusted CA).
 @return <code>true</code> if forward checking is supported, 
 <code>false</code> otherwise
 */
- (jboolean)isForwardCheckingSupported;

#pragma mark Protected

/*!
 @brief Default constructor.
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertPKIXCertPathChecker)

FOUNDATION_EXPORT void JavaSecurityCertPKIXCertPathChecker_init(JavaSecurityCertPKIXCertPathChecker *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertPKIXCertPathChecker)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertPKIXCertPathChecker")
