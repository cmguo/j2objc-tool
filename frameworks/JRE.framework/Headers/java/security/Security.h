//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/Security.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaSecuritySecurity")
#ifdef RESTRICT_JavaSecuritySecurity
#define INCLUDE_ALL_JavaSecuritySecurity 0
#else
#define INCLUDE_ALL_JavaSecuritySecurity 1
#endif
#undef RESTRICT_JavaSecuritySecurity

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecuritySecurity_) && (INCLUDE_ALL_JavaSecuritySecurity || defined(INCLUDE_JavaSecuritySecurity))
#define JavaSecuritySecurity_

@class IOSObjectArray;
@class JavaSecurityProvider;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief <p>This class centralizes all security properties and common security
  methods.
 One of its primary uses is to manage providers. 
 <p>The default values of security properties are read from an
  implementation-specific location, which is typically the properties file 
 <code>lib/security/java.security</code> in the Java installation directory.
 @author Benjamin Renaud
 */
@interface JavaSecuritySecurity : NSObject

#pragma mark Public

/*!
 @brief Adds a provider to the next position available.
 <p>If there is a security manager, the 
 <code>java.lang.SecurityManager.checkSecurityAccess</code> method is called
  with the <code>"insertProvider"</code> permission target name to see if
  it's ok to add a new provider. If this permission check is denied, 
 <code>checkSecurityAccess</code> is called again with the 
 <code>"insertProvider."+provider.getName()</code> permission target name. If
  both checks are denied, a <code>SecurityException</code> is thrown.
 @param provider the provider to be added.
 @return the preference position in which the provider was
  added, or -1 if the provider was not added because it is
  already installed.
 @throw NullPointerExceptionif provider is null
 @throw SecurityException
 if a security manager exists and its <code>java.lang.SecurityManager.checkSecurityAccess</code>
  method
           denies access to add a new provider
 - seealso: #getProvider
 - seealso: #removeProvider
 - seealso: java.security.SecurityPermission
 */
+ (jint)addProviderWithJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Gets a specified property for an algorithm.The algorithm name
  should be a standard name.
 See the <a href="{@@docRoot}/../technotes/guides/security/StandardNames.html">
  Java Cryptography Architecture Standard Algorithm Name Documentation</a>
  for information about standard algorithm names.
  One possible use is by specialized algorithm parsers, which may map
  classes to algorithms which they understand (much like Key parsers
  do).
 @param algName the algorithm name.
 @param propName the name of the property to get.
 @return the value of the specified property.
 */
+ (NSString *)getAlgorithmPropertyWithNSString:(NSString *)algName
                                  withNSString:(NSString *)propName __attribute__((deprecated));

/*!
 @brief Returns a Set of Strings containing the names of all available
  algorithms or types for the specified Java cryptographic service
  (e.g., Signature, MessageDigest, Cipher, Mac, KeyStore).Returns
  an empty Set if there is no provider that supports the
  specified service or if serviceName is null.
 For a complete list
  of Java cryptographic services, please see the 
 <a href="../../../technotes/guides/security/crypto/CryptoSpec.html">Java
  Cryptography Architecture API Specification &amp; Reference</a>.
  Note: the returned set is immutable.
 @param serviceName the name of the Java cryptographic  service (e.g., Signature, MessageDigest, Cipher, Mac, KeyStore).
   Note: this parameter is case-insensitive.
 @return a Set of Strings containing the names of all available
  algorithms or types for the specified Java cryptographic service
  or an empty set if no provider supports the specified service.
 @since 1.4
 */
+ (id<JavaUtilSet>)getAlgorithmsWithNSString:(NSString *)serviceName;

/*!
 @brief Gets a security property value.
 <p>First, if there is a security manager, its 
 <code>checkPermission</code>  method is called with a 
 <code>java.security.SecurityPermission("getProperty."+key)</code>
  permission to see if it's ok to retrieve the specified
  security property value..
 @param key the key of the property being retrieved.
 @return the value of the security property corresponding to key.
 @throw SecurityException
 if a security manager exists and its <code>java.lang.SecurityManager.checkPermission</code>
  method
           denies
           access to retrieve the specified security property value
 @throw NullPointerExceptionis key is null
 - seealso: #setProperty
 - seealso: java.security.SecurityPermission
 */
+ (NSString *)getPropertyWithNSString:(NSString *)key;

/*!
 @brief Returns the provider installed with the specified name, if
  any.Returns null if no provider with the specified name is
  installed or if name is null.
 @param name the name of the provider to get.
 @return the provider of the specified name.
 - seealso: #removeProvider
 - seealso: #addProvider
 */
+ (JavaSecurityProvider *)getProviderWithNSString:(NSString *)name;

/*!
 @brief Returns an array containing all the installed providers.The order of
  the providers in the array is their preference order.
 @return an array of all the installed providers.
 */
+ (IOSObjectArray *)getProviders;

/*!
 @brief Returns an array containing all installed providers that satisfy the
  specified* selection criteria, or null if no such providers have been
  installed.The returned providers are ordered
  according to their 
 preference order
 .
 <p>The selection criteria are represented by a map.
  Each map entry represents a selection criterion.
  A provider is selected iff it satisfies all selection
  criteria. The key for any entry in such a map must be in one of the
  following two formats: 
 <ul>
  <li> <i>&lt;crypto_service&gt;.&lt;algorithm_or_type&gt;</i>
  <p> The cryptographic service name must not contain any dots. 
 <p> The value associated with the key must be an empty string. 
 <p> A provider
  satisfies this selection criterion iff the provider implements the
  specified algorithm or type for the specified cryptographic service. 
 <li>  <i>&lt;crypto_service&gt;.
  &lt;algorithm_or_type&gt; &lt;attribute_name&gt;</i>
  <p> The cryptographic service name must not contain any dots. There
  must be one or more space characters between the 
 <i>&lt;algorithm_or_type&gt;</i>
  and the <i>&lt;attribute_name&gt;</i>.
  <p> The value associated with the key must be a non-empty string.
  A provider satisfies this selection criterion iff the
  provider implements the specified algorithm or type for the specified
  cryptographic service and its implementation meets the
  constraint expressed by the specified attribute name/value pair. 
 </ul>
  
 <p> See the <a href="../../../technotes/guides/security/StandardNames.html">
  Java Cryptography Architecture Standard Algorithm Name Documentation</a>
  for information about standard cryptographic service names, standard
  algorithm names and standard attribute names.
 @param filter the criteria for selecting  providers. The filter is case-insensitive.
 @return all the installed providers that satisfy the selection
  criteria, or null if no such providers have been installed.
 @throw InvalidParameterException
 if the filter is not in the required format
 @throw NullPointerExceptionif filter is null
 - seealso: #getProviders(java.lang.String)
 @since 1.3
 */
+ (IOSObjectArray *)getProvidersWithJavaUtilMap:(id<JavaUtilMap>)filter;

/*!
 @brief Returns an array containing all installed providers that satisfy the
  specified selection criterion, or null if no such providers have been
  installed.The returned providers are ordered
  according to their 
 preference order.
 <p> A cryptographic service is always associated with a particular
  algorithm or type. For example, a digital signature service is
  always associated with a particular algorithm (e.g., DSA),
  and a CertificateFactory service is always associated with
  a particular certificate type (e.g., X.509). 
 <p>The selection criterion must be specified in one of the following two
  formats: 
 <ul>
  <li> <i>&lt;crypto_service&gt;.&lt;algorithm_or_type&gt;</i>
  <p> The cryptographic service name must not contain any dots. 
 <p> A
  provider satisfies the specified selection criterion iff the provider
  implements the
  specified algorithm or type for the specified cryptographic service. 
 <p> For example, "CertificateFactory.X.509"
  would be satisfied by any provider that supplied
  a CertificateFactory implementation for X.509 certificates. 
 <li> <i>&lt;crypto_service&gt;.&lt;algorithm_or_type&gt;
  &lt;attribute_name&gt;:&lt;attribute_value&gt;
 </i>
  <p> The cryptographic service name must not contain any dots. There
  must be one or more space characters between the 
 <i>&lt;algorithm_or_type&gt;</i> and the 
 <i>&lt;attribute_name&gt;</i>.
   <p> A provider satisfies this selection criterion iff the
  provider implements the specified algorithm or type for the specified
  cryptographic service and its implementation meets the
  constraint expressed by the specified attribute name/value pair. 
 <p> For example, "Signature.SHA1withDSA KeySize:1024" would be
  satisfied by any provider that implemented
  the SHA1withDSA signature algorithm with a keysize of 1024 (or larger). 
 </ul>
  
 <p> See the <a href="{@@docRoot}/../technotes/guides/security/StandardNames.html">
  Java Cryptography Architecture Standard Algorithm Name Documentation</a>
  for information about standard cryptographic service names, standard
  algorithm names and standard attribute names.
 @param filter the criterion for selecting  providers. The filter is case-insensitive.
 @return all the installed providers that satisfy the selection
  criterion, or null if no such providers have been installed.
 @throw InvalidParameterException
 if the filter is not in the required format
 @throw NullPointerExceptionif filter is null
 - seealso: #getProviders(java.util.Map)
 @since 1.3
 */
+ (IOSObjectArray *)getProvidersWithNSString:(NSString *)filter;

/*!
 */
+ (jint)getVersion;

/*!
 */
+ (void)increaseVersion;

/*!
 @brief Adds a new provider, at a specified position.The position is
  the preference order in which providers are searched for
  requested algorithms.
 The position is 1-based, that is,
  1 is most preferred, followed by 2, and so on. 
 <p>If the given provider is installed at the requested position,
  the provider that used to be at that position, and all providers
  with a position greater than <code>position</code>, are shifted up
  one position (towards the end of the list of installed providers). 
 <p>A provider cannot be added if it is already installed. 
 <p>If there is a security manager, the 
 <code>java.lang.SecurityManager.checkSecurityAccess</code> method is called
  with the <code>"insertProvider"</code> permission target name to see if
  it's ok to add a new provider. If this permission check is denied, 
 <code>checkSecurityAccess</code> is called again with the 
 <code>"insertProvider."+provider.getName()</code> permission target name. If
  both checks are denied, a <code>SecurityException</code> is thrown.
 @param provider the provider to be added.
 @param position the preference position that the caller would  like for this provider.
 @return the actual preference position in which the provider was
  added, or -1 if the provider was not added because it is
  already installed.
 @throw NullPointerExceptionif provider is null
 @throw SecurityException
 if a security manager exists and its <code>java.lang.SecurityManager.checkSecurityAccess</code>
  method
           denies access to add a new provider
 - seealso: #getProvider
 - seealso: #removeProvider
 - seealso: java.security.SecurityPermission
 */
+ (jint)insertProviderAtWithJavaSecurityProvider:(JavaSecurityProvider *)provider
                                         withInt:(jint)position;

/*!
 @brief Removes the provider with the specified name.
 <p>When the specified provider is removed, all providers located
  at a position greater than where the specified provider was are shifted
  down one position (towards the head of the list of installed
  providers). 
 <p>This method returns silently if the provider is not installed or
  if name is null. 
 <p>First, if there is a security manager, its 
 <code>checkSecurityAccess</code>
  method is called with the string <code>"removeProvider."+name</code>
  to see if it's ok to remove the provider.
  If the default implementation of <code>checkSecurityAccess</code>
  is used (i.e., that method is not overriden), then this will result in
  a call to the security manager's <code>checkPermission</code> method
  with a <code>SecurityPermission("removeProvider."+name)</code>
  permission.
 @param name the name of the provider to remove.
 @throw SecurityException
 if a security manager exists and its <code>java.lang.SecurityManager.checkSecurityAccess</code>
  method
           denies
           access to remove the provider
 - seealso: #getProvider
 - seealso: #addProvider
 */
+ (void)removeProviderWithNSString:(NSString *)name;

/*!
 @brief Sets a security property value.
 <p>First, if there is a security manager, its 
 <code>checkPermission</code> method is called with a 
 <code>java.security.SecurityPermission("setProperty."+key)</code>
  permission to see if it's ok to set the specified
  security property value.
 @param key the name of the property to be set.
 @param datum the value of the property to be set.
 @throw SecurityException
 if a security manager exists and its <code>java.lang.SecurityManager.checkPermission</code>
  method
           denies access to set the specified security property value
 @throw NullPointerExceptionif key or datum is null
 - seealso: #getProperty
 - seealso: java.security.SecurityPermission
 */
+ (void)setPropertyWithNSString:(NSString *)key
                   withNSString:(NSString *)datum;

#pragma mark Package-Private

+ (IOSObjectArray *)getFilterComponentsWithNSString:(NSString *)filterKey
                                       withNSString:(NSString *)filterValue;

+ (IOSObjectArray *)getImplWithNSString:(NSString *)algorithm
                           withNSString:(NSString *)type
               withJavaSecurityProvider:(JavaSecurityProvider *)provider;

+ (IOSObjectArray *)getImplWithNSString:(NSString *)algorithm
                           withNSString:(NSString *)type
               withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                 withId:(id)params;

+ (IOSObjectArray *)getImplWithNSString:(NSString *)algorithm
                           withNSString:(NSString *)type
                           withNSString:(NSString *)provider;

+ (IOSObjectArray *)getImplWithNSString:(NSString *)algorithm
                           withNSString:(NSString *)type
                           withNSString:(NSString *)provider
                                 withId:(id)params;

@end

J2OBJC_STATIC_INIT(JavaSecuritySecurity)

FOUNDATION_EXPORT NSString *JavaSecuritySecurity_getAlgorithmPropertyWithNSString_withNSString_(NSString *algName, NSString *propName);

FOUNDATION_EXPORT jint JavaSecuritySecurity_insertProviderAtWithJavaSecurityProvider_withInt_(JavaSecurityProvider *provider, jint position);

FOUNDATION_EXPORT jint JavaSecuritySecurity_addProviderWithJavaSecurityProvider_(JavaSecurityProvider *provider);

FOUNDATION_EXPORT void JavaSecuritySecurity_removeProviderWithNSString_(NSString *name);

FOUNDATION_EXPORT IOSObjectArray *JavaSecuritySecurity_getProviders(void);

FOUNDATION_EXPORT JavaSecurityProvider *JavaSecuritySecurity_getProviderWithNSString_(NSString *name);

FOUNDATION_EXPORT IOSObjectArray *JavaSecuritySecurity_getProvidersWithNSString_(NSString *filter);

FOUNDATION_EXPORT IOSObjectArray *JavaSecuritySecurity_getProvidersWithJavaUtilMap_(id<JavaUtilMap> filter);

FOUNDATION_EXPORT IOSObjectArray *JavaSecuritySecurity_getImplWithNSString_withNSString_withNSString_(NSString *algorithm, NSString *type, NSString *provider);

FOUNDATION_EXPORT IOSObjectArray *JavaSecuritySecurity_getImplWithNSString_withNSString_withNSString_withId_(NSString *algorithm, NSString *type, NSString *provider, id params);

FOUNDATION_EXPORT IOSObjectArray *JavaSecuritySecurity_getImplWithNSString_withNSString_withJavaSecurityProvider_(NSString *algorithm, NSString *type, JavaSecurityProvider *provider);

FOUNDATION_EXPORT IOSObjectArray *JavaSecuritySecurity_getImplWithNSString_withNSString_withJavaSecurityProvider_withId_(NSString *algorithm, NSString *type, JavaSecurityProvider *provider, id params);

FOUNDATION_EXPORT NSString *JavaSecuritySecurity_getPropertyWithNSString_(NSString *key);

FOUNDATION_EXPORT void JavaSecuritySecurity_setPropertyWithNSString_withNSString_(NSString *key, NSString *datum);

FOUNDATION_EXPORT IOSObjectArray *JavaSecuritySecurity_getFilterComponentsWithNSString_withNSString_(NSString *filterKey, NSString *filterValue);

FOUNDATION_EXPORT id<JavaUtilSet> JavaSecuritySecurity_getAlgorithmsWithNSString_(NSString *serviceName);

FOUNDATION_EXPORT void JavaSecuritySecurity_increaseVersion(void);

FOUNDATION_EXPORT jint JavaSecuritySecurity_getVersion(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySecurity)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySecurity")
