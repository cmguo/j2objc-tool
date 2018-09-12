//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SSLSessionContext.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLSessionContext")
#ifdef RESTRICT_JavaxNetSslSSLSessionContext
#define INCLUDE_ALL_JavaxNetSslSSLSessionContext 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLSessionContext 1
#endif
#undef RESTRICT_JavaxNetSslSSLSessionContext

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslSSLSessionContext_) && (INCLUDE_ALL_JavaxNetSslSSLSessionContext || defined(INCLUDE_JavaxNetSslSSLSessionContext))
#define JavaxNetSslSSLSessionContext_

@class IOSByteArray;
@protocol JavaUtilEnumeration;
@protocol JavaxNetSslSSLSession;

/*!
 @brief A <code>SSLSessionContext</code> represents a set of 
 <code>SSLSession</code>s associated with a single entity.For example,
  it could be associated with a server or client who participates in many
  sessions concurrently.
 <p>
  Not all environments will contain session contexts. 
 <p>
  There are <code>SSLSessionContext</code> parameters that affect how
  sessions are stored: 
 <UL>
       <LI>Sessions can be set to expire after a specified
       time limit.      
 <LI>The number of sessions that can be stored in context
       can be limited. 
 </UL>
  A session can be retrieved based on its session id, and all session id's
  in a <code>SSLSessionContext</code> can be listed.
 - seealso: SSLSession
 @since 1.4
 @author Nathan Abramson
 @author David Brownell
 */
@protocol JavaxNetSslSSLSessionContext < JavaObject >

/*!
 @brief Returns the <code>SSLSession</code> bound to the specified session id.
 @param sessionId the Session identifier
 @return the <code>SSLSession</code> or null if
  the specified session id does not refer to a valid SSLSession.
 @throw NullPointerExceptionif <code>sessionId</code> is null.
 */
- (id<JavaxNetSslSSLSession>)getSessionWithByteArray:(IOSByteArray *)sessionId;

/*!
 @brief Returns an Enumeration of all session id's grouped under this 
 <code>SSLSessionContext</code>.
 @return an enumeration of all the Session id's
 */
- (id<JavaUtilEnumeration>)getIds;

/*!
 @brief Sets the timeout limit for <code>SSLSession</code> objects grouped
  under this <code>SSLSessionContext</code>.
 <p>
  If the timeout limit is set to 't' seconds, a session exceeds the
  timeout limit 't' seconds after its creation time.
  When the timeout limit is exceeded for a session, the 
 <code>SSLSession</code> object is invalidated and future connections
  cannot resume or rejoin the session.
  A check for sessions exceeding the timeout is made immediately whenever
  the timeout limit is changed for this <code>SSLSessionContext</code>.
 @param seconds the new session timeout limit in seconds; zero means           there is no limit.
 @throw IllegalArgumentExceptionif the timeout specified is < 0.
 - seealso: #getSessionTimeout
 */
- (void)setSessionTimeoutWithInt:(jint)seconds;

/*!
 @brief Returns the timeout limit of <code>SSLSession</code> objects grouped
  under this <code>SSLSessionContext</code>.
 <p>
  If the timeout limit is set to 't' seconds, a session exceeds the
  timeout limit 't' seconds after its creation time.
  When the timeout limit is exceeded for a session, the 
 <code>SSLSession</code> object is invalidated and future connections
  cannot resume or rejoin the session.
  A check for sessions exceeding the timeout limit is made immediately
  whenever the timeout limit is changed for this 
 <code>SSLSessionContext</code>.
 @return the session timeout limit in seconds; zero means there is no
  limit.
 - seealso: #setSessionTimeout
 */
- (jint)getSessionTimeout;

/*!
 @brief Sets the size of the cache used for storing 
 <code>SSLSession</code> objects grouped under this 
 <code>SSLSessionContext</code>.
 @param size the new session cache size limit; zero means there is no  limit.
 @throw IllegalArgumentExceptionif the specified size is < 0.
 - seealso: #getSessionCacheSize
 */
- (void)setSessionCacheSizeWithInt:(jint)size;

/*!
 @brief Returns the size of the cache used for storing 
 <code>SSLSession</code> objects grouped under this 
 <code>SSLSessionContext</code>.
 @return size of the session cache; zero means there is no size limit.
 - seealso: #setSessionCacheSize
 */
- (jint)getSessionCacheSize;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSessionContext)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSessionContext)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLSessionContext")
