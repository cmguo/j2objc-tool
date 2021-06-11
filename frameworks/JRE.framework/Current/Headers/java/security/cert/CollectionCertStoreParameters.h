//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CollectionCertStoreParameters.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCollectionCertStoreParameters")
#ifdef RESTRICT_JavaSecurityCertCollectionCertStoreParameters
#define INCLUDE_ALL_JavaSecurityCertCollectionCertStoreParameters 0
#else
#define INCLUDE_ALL_JavaSecurityCertCollectionCertStoreParameters 1
#endif
#undef RESTRICT_JavaSecurityCertCollectionCertStoreParameters

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertCollectionCertStoreParameters_) && (INCLUDE_ALL_JavaSecurityCertCollectionCertStoreParameters || defined(INCLUDE_JavaSecurityCertCollectionCertStoreParameters))
#define JavaSecurityCertCollectionCertStoreParameters_

#define RESTRICT_JavaSecurityCertCertStoreParameters 1
#define INCLUDE_JavaSecurityCertCertStoreParameters 1
#include "java/security/cert/CertStoreParameters.h"

@protocol JavaUtilCollection;

/*!
 @brief Parameters used as input for the Collection <code>CertStore</code>
  algorithm.
 <p>
  This class is used to provide necessary configuration parameters
  to implementations of the Collection <code>CertStore</code>
  algorithm. The only parameter included in this class is the 
 <code>Collection</code> from which the <code>CertStore</code> will
  retrieve certificates and CRLs. 
 <p>
  <b>Concurrent Access</b>
  <p>
  Unless otherwise specified, the methods defined in this class are not
  thread-safe. Multiple threads that need to access a single
  object concurrently should synchronize amongst themselves and
  provide the necessary locking. Multiple threads each manipulating
  separate objects need not synchronize.
 @since 1.4
 @author Steve Hanna
 - seealso: java.util.Collection
 - seealso: CertStore
 */
@interface JavaSecurityCertCollectionCertStoreParameters : NSObject < JavaSecurityCertCertStoreParameters >

#pragma mark Public

/*!
 @brief Creates an instance of <code>CollectionCertStoreParameters</code> with
  the default parameter values (an empty and immutable 
 <code>Collection</code>).
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates an instance of <code>CollectionCertStoreParameters</code>
  which will allow certificates and CRLs to be retrieved from the
  specified <code>Collection</code>.If the specified 
 <code>Collection</code> contains an object that is not a 
 <code>Certificate</code> or <code>CRL</code>, that object will be
  ignored by the Collection <code>CertStore</code>.
 <p>
  The <code>Collection</code> is <b>not</b> copied. Instead, a
  reference is used. This allows the caller to subsequently add or
  remove <code>Certificates</code> or <code>CRL</code>s from the 
 <code>Collection</code>, thus changing the set of 
 <code>Certificates</code> or <code>CRL</code>s available to the
  Collection <code>CertStore</code>. The Collection <code>CertStore</code>
  will not modify the contents of the <code>Collection</code>.
  <p>
  If the <code>Collection</code> will be modified by one thread while
  another thread is calling a method of a Collection <code>CertStore</code>
  that has been initialized with this <code>Collection</code>, the 
 <code>Collection</code> must have fail-fast iterators.
 @param collection a <code>Collection</code>  of
          <code>Certificate</code> s and <code>CRL</code> s
 @throw NullPointerExceptionif <code>collection</code> is 
 <code>null</code>
 */
- (instancetype __nonnull)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Returns a copy of this object.Note that only a reference to the 
 <code>Collection</code> is copied, and not the contents.
 @return the copy
 */
- (id)java_clone;

/*!
 @brief Returns the <code>Collection</code> from which <code>Certificate</code>s
  and <code>CRL</code>s are retrieved.This is <b>not</b> a copy of the 
 <code>Collection</code>, it is a reference.
 This allows the caller to
  subsequently add or remove <code>Certificates</code> or 
 <code>CRL</code>s from the <code>Collection</code>.
 @return the <code>Collection</code> (never null)
 */
- (id<JavaUtilCollection>)getCollection;

/*!
 @brief Returns a formatted string describing the parameters.
 @return a formatted string describing the parameters
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCollectionCertStoreParameters)

FOUNDATION_EXPORT void JavaSecurityCertCollectionCertStoreParameters_initWithJavaUtilCollection_(JavaSecurityCertCollectionCertStoreParameters *self, id<JavaUtilCollection> collection);

FOUNDATION_EXPORT JavaSecurityCertCollectionCertStoreParameters *new_JavaSecurityCertCollectionCertStoreParameters_initWithJavaUtilCollection_(id<JavaUtilCollection> collection) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCollectionCertStoreParameters *create_JavaSecurityCertCollectionCertStoreParameters_initWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT void JavaSecurityCertCollectionCertStoreParameters_init(JavaSecurityCertCollectionCertStoreParameters *self);

FOUNDATION_EXPORT JavaSecurityCertCollectionCertStoreParameters *new_JavaSecurityCertCollectionCertStoreParameters_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCollectionCertStoreParameters *create_JavaSecurityCertCollectionCertStoreParameters_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCollectionCertStoreParameters)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCollectionCertStoreParameters")
