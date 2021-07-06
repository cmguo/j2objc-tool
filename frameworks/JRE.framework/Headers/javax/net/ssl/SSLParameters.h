//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SSLParameters.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLParameters")
#ifdef RESTRICT_JavaxNetSslSSLParameters
#define INCLUDE_ALL_JavaxNetSslSSLParameters 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLParameters 1
#endif
#undef RESTRICT_JavaxNetSslSSLParameters

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslSSLParameters_) && (INCLUDE_ALL_JavaxNetSslSSLParameters || defined(INCLUDE_JavaxNetSslSSLParameters))
#define JavaxNetSslSSLParameters_

@class IOSObjectArray;
@protocol JavaSecurityAlgorithmConstraints;
@protocol JavaUtilCollection;
@protocol JavaUtilList;

/*!
 @brief Encapsulates parameters for an SSL/TLS connection.The parameters
  are the list of ciphersuites to be accepted in an SSL/TLS handshake,
  the list of protocols to be allowed, the endpoint identification
  algorithm during SSL/TLS handshaking, the Server Name Indication (SNI),
  the algorithm constraints and whether SSL/TLS servers should request
  or require client authentication, etc.
 <p>
  SSLParameters can be created via the constructors in this class.
  Objects can also be obtained using the <code>getSSLParameters()</code>
  methods in 
 <code>SSLSocket</code> and 
 <code>SSLServerSocket</code> and 
 <code>SSLEngine</code> or the 
 <code>getDefaultSSLParameters()</code> and 
 <code>getSupportedSSLParameters()</code>
  methods in <code>SSLContext</code>.
  <p>
  SSLParameters can be applied to a connection via the methods 
 <code>SSLSocket.setSSLParameters()</code> and 
 <code>SSLServerSocket.setSSLParameters()</code>
  and <code>SSLEngine.setSSLParameters()</code>.
 - seealso: SSLSocket
 - seealso: SSLEngine
 - seealso: SSLContext
 @since 1.6
 */
@interface JavaxNetSslSSLParameters : NSObject

#pragma mark Public

/*!
 @brief Constructs SSLParameters.
 <p>
  The values of cipherSuites, protocols, cryptographic algorithm
  constraints, endpoint identification algorithm, server names and
  server name matchers are set to <code>null</code>, useCipherSuitesOrder,
  wantClientAuth and needClientAuth are set to <code>false</code>.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs SSLParameters from the specified array of ciphersuites.
 <p>
  Calling this constructor is equivalent to calling the no-args
  constructor followed by 
 <code>setCipherSuites(cipherSuites);</code>.
 @param cipherSuites the array of ciphersuites (or null)
 */
- (instancetype __nonnull)initWithNSStringArray:(IOSObjectArray *)cipherSuites;

/*!
 @brief Constructs SSLParameters from the specified array of ciphersuites
  and protocols.
 <p>
  Calling this constructor is equivalent to calling the no-args
  constructor followed by 
 <code>setCipherSuites(cipherSuites); setProtocols(protocols);</code>.
 @param cipherSuites the array of ciphersuites (or null)
 @param protocols the array of protocols (or null)
 */
- (instancetype __nonnull)initWithNSStringArray:(IOSObjectArray *)cipherSuites
                              withNSStringArray:(IOSObjectArray *)protocols;

/*!
 @brief Returns the cryptographic algorithm constraints.
 @return the cryptographic algorithm constraints, or null if the
      constraints have not been set
 - seealso: #setAlgorithmConstraints(AlgorithmConstraints)
 @since 1.7
 */
- (id<JavaSecurityAlgorithmConstraints>)getAlgorithmConstraints;

/*!
 @brief Returns a copy of the array of ciphersuites or null if none
  have been set.
 @return a copy of the array of ciphersuites or null if none
  have been set.
 */
- (IOSObjectArray *)getCipherSuites;

/*!
 @brief Gets the endpoint identification algorithm.
 @return the endpoint identification algorithm, or null if none
  has been set.
 - seealso: X509ExtendedTrustManager
 - seealso: #setEndpointIdentificationAlgorithm(String)
 @since 1.7
 */
- (NSString *)getEndpointIdentificationAlgorithm;

/*!
 @brief Returns whether client authentication should be required.
 @return whether client authentication should be required.
 */
- (jboolean)getNeedClientAuth;

/*!
 @brief Returns a copy of the array of protocols or null if none
  have been set.
 @return a copy of the array of protocols or null if none
  have been set.
 */
- (IOSObjectArray *)getProtocols;

/*!
 @brief Returns a <code>List</code> containing all <code>SNIServerName</code>s of the
  Server Name Indication (SNI) parameter, or null if none has been set.
 <P>
  This method is only useful to <code>SSLSocket</code>s or <code>SSLEngine</code>s
  operating in client mode. 
 <P>
  For SSL/TLS connections, the underlying SSL/TLS provider
  may specify a default value for a certain server name type.  In
  client mode, it is recommended that, by default, providers should
  include the server name indication whenever the server can be located
  by a supported server name type. 
 <P>
  It is recommended that providers initialize default Server Name
  Indications when creating <code>SSLSocket</code>/<code>SSLEngine</code>s.
  In the following examples, the server name could be represented by an
  instance of <code>SNIHostName</code> which has been initialized with the
  hostname "www.example.com" and type 
 <code>StandardConstants.SNI_HOST_NAME</code>.
  
 @code

      Socket socket =
          sslSocketFactory.createSocket("www.example.com", 443); 
  
@endcode
  or 
 @code

      SSLEngine engine =
          sslContext.createSSLEngine("www.example.com", 443); 
  
@endcode
  <P>
 @return null or an immutable list of non-null <code>SNIServerName</code>s
 - seealso: List
 - seealso: #setServerNames(List)
 @since 1.8
 */
- (id<JavaUtilList>)getServerNames;

/*!
 @brief Returns a <code>Collection</code> containing all <code>SNIMatcher</code>s of the
  Server Name Indication (SNI) parameter, or null if none has been set.
 <P>
  This method is only useful to <code>SSLSocket</code>s or <code>SSLEngine</code>s
  operating in server mode. 
 <P>
  For better interoperability, providers generally will not define
  default matchers so that by default servers will ignore the SNI
  extension and continue the handshake.
 @return null or an immutable collection of non-null <code>SNIMatcher</code>s
 - seealso: SNIMatcher
 - seealso: #setSNIMatchers(Collection)
 @since 1.8
 */
- (id<JavaUtilCollection>)getSNIMatchers;

/*!
 @brief Returns whether the local cipher suites preference should be honored.
 @return whether local cipher suites order in <code>#getCipherSuites</code>
          should be honored during SSL/TLS handshaking.
 - seealso: #setUseCipherSuitesOrder(boolean)
 @since 1.8
 */
- (jboolean)getUseCipherSuitesOrder;

/*!
 @brief Returns whether client authentication should be requested.
 @return whether client authentication should be requested.
 */
- (jboolean)getWantClientAuth;

/*!
 @brief Sets the cryptographic algorithm constraints, which will be used
  in addition to any configured by the runtime environment.
 <p>
  If the <code>constraints</code> parameter is non-null, every
  cryptographic algorithm, key and algorithm parameters used in the
  SSL/TLS handshake must be permitted by the constraints.
 @param constraints the algorithm constraints (or null)
 @since 1.7
 */
- (void)setAlgorithmConstraintsWithJavaSecurityAlgorithmConstraints:(id<JavaSecurityAlgorithmConstraints>)constraints;

/*!
 @brief Sets the array of ciphersuites.
 @param cipherSuites the array of ciphersuites (or null)
 */
- (void)setCipherSuitesWithNSStringArray:(IOSObjectArray *)cipherSuites;

/*!
 @brief Sets the endpoint identification algorithm.
 <p>
  If the <code>algorithm</code> parameter is non-null or non-empty, the
  endpoint identification/verification procedures must be handled during
  SSL/TLS handshaking.  This is to prevent man-in-the-middle attacks.
 @param algorithm The standard string name of the endpoint      identification algorithm (or null).  See Appendix A in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/crypto/CryptoSpec.html#AppA">
       Java Cryptography Architecture API Specification 
  &amp;  Reference  </a>      for information about standard algorithm names.
 - seealso: X509ExtendedTrustManager
 @since 1.7
 */
- (void)setEndpointIdentificationAlgorithmWithNSString:(NSString *)algorithm;

/*!
 @brief Sets whether client authentication should be required.Calling
  this method clears the <code>wantClientAuth</code> flag.
 @param needClientAuth whether client authentication should be required
 */
- (void)setNeedClientAuthWithBoolean:(jboolean)needClientAuth;

/*!
 @brief Sets the array of protocols.
 @param protocols the array of protocols (or null)
 */
- (void)setProtocolsWithNSStringArray:(IOSObjectArray *)protocols;

/*!
 @brief Sets the desired <code>SNIServerName</code>s of the Server Name
  Indication (SNI) parameter.
 <P>
  This method is only useful to <code>SSLSocket</code>s or <code>SSLEngine</code>s
  operating in client mode. 
 <P>
  Note that the <code>serverNames</code> list is cloned
  to protect against subsequent modification.
 @param serverNames the list of desired 
 <code>SNIServerName</code> s (or null)
 @throw NullPointerExceptionif the <code>serverNames</code>
          contains <code>null</code> element
 @throw IllegalArgumentExceptionif the <code>serverNames</code>
          contains more than one name of the same name type
 - seealso: SNIServerName
 - seealso: #getServerNames()
 @since 1.8
 */
- (void)setServerNamesWithJavaUtilList:(id<JavaUtilList>)serverNames;

/*!
 @brief Sets the <code>SNIMatcher</code>s of the Server Name Indication (SNI)
  parameter.
 <P>
  This method is only useful to <code>SSLSocket</code>s or <code>SSLEngine</code>s
  operating in server mode. 
 <P>
  Note that the <code>matchers</code> collection is cloned to protect
  against subsequent modification.
 @param matchers the collection of 
 <code>SNIMatcher</code> s (or null)
 @throw NullPointerExceptionif the <code>matchers</code>
          contains <code>null</code> element
 @throw IllegalArgumentExceptionif the <code>matchers</code>
          contains more than one name of the same name type
 - seealso: Collection
 - seealso: SNIMatcher
 - seealso: #getSNIMatchers()
 @since 1.8
 */
- (void)setSNIMatchersWithJavaUtilCollection:(id<JavaUtilCollection>)matchers;

/*!
 @brief Sets whether the local cipher suites preference should be honored.
 @param honorOrder whether local cipher suites order in         
 <code>#getCipherSuites</code>  should be honored during         SSL/TLS handshaking.
 - seealso: #getUseCipherSuitesOrder()
 @since 1.8
 */
- (void)setUseCipherSuitesOrderWithBoolean:(jboolean)honorOrder;

/*!
 @brief Sets whether client authentication should be requested.Calling
  this method clears the <code>needClientAuth</code> flag.
 @param wantClientAuth whether client authentication should be requested
 */
- (void)setWantClientAuthWithBoolean:(jboolean)wantClientAuth;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLParameters)

FOUNDATION_EXPORT void JavaxNetSslSSLParameters_init(JavaxNetSslSSLParameters *self);

FOUNDATION_EXPORT JavaxNetSslSSLParameters *new_JavaxNetSslSSLParameters_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslSSLParameters *create_JavaxNetSslSSLParameters_init(void);

FOUNDATION_EXPORT void JavaxNetSslSSLParameters_initWithNSStringArray_(JavaxNetSslSSLParameters *self, IOSObjectArray *cipherSuites);

FOUNDATION_EXPORT JavaxNetSslSSLParameters *new_JavaxNetSslSSLParameters_initWithNSStringArray_(IOSObjectArray *cipherSuites) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslSSLParameters *create_JavaxNetSslSSLParameters_initWithNSStringArray_(IOSObjectArray *cipherSuites);

FOUNDATION_EXPORT void JavaxNetSslSSLParameters_initWithNSStringArray_withNSStringArray_(JavaxNetSslSSLParameters *self, IOSObjectArray *cipherSuites, IOSObjectArray *protocols);

FOUNDATION_EXPORT JavaxNetSslSSLParameters *new_JavaxNetSslSSLParameters_initWithNSStringArray_withNSStringArray_(IOSObjectArray *cipherSuites, IOSObjectArray *protocols) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslSSLParameters *create_JavaxNetSslSSLParameters_initWithNSStringArray_withNSStringArray_(IOSObjectArray *cipherSuites, IOSObjectArray *protocols);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLParameters)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLParameters")
