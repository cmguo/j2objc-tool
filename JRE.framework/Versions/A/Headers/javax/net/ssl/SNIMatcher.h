//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SNIMatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSNIMatcher")
#ifdef RESTRICT_JavaxNetSslSNIMatcher
#define INCLUDE_ALL_JavaxNetSslSNIMatcher 0
#else
#define INCLUDE_ALL_JavaxNetSslSNIMatcher 1
#endif
#undef RESTRICT_JavaxNetSslSNIMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxNetSslSNIMatcher_) && (INCLUDE_ALL_JavaxNetSslSNIMatcher || defined(INCLUDE_JavaxNetSslSNIMatcher))
#define JavaxNetSslSNIMatcher_

@class JavaxNetSslSNIServerName;

/*!
 @brief Instances of this class represent a matcher that performs match
  operations on an <code>SNIServerName</code> instance.
 <P>
  Servers can use Server Name Indication (SNI) information to decide if
  specific <code>SSLSocket</code> or <code>SSLEngine</code> instances should accept
  a connection.  For example, when multiple "virtual" or "name-based"
  servers are hosted on a single underlying network address, the server
  application can use SNI information to determine whether this server is
  the exact server that the client wants to access.  Instances of this
  class can be used by a server to verify the acceptable server names of
  a particular type, such as host names. 
 <P>
  <code>SNIMatcher</code> objects are immutable.  Subclasses should not provide
  methods that can change the state of an instance once it has been created.
 - seealso: SNIServerName
 - seealso: SNIHostName
 - seealso: SSLParameters#getSNIMatchers()
 - seealso: SSLParameters#setSNIMatchers(Collection)
 @since 1.8
 */
@interface JavaxNetSslSNIMatcher : NSObject

#pragma mark Public

/*!
 @brief Returns the server name type of this <code>SNIMatcher</code> object.
 @return the server name type of this <code>SNIMatcher</code> object.
 - seealso: SNIServerName
 */
- (jint)getType;

/*!
 @brief Attempts to match the given <code>SNIServerName</code>.
 @param serverName the 
 <code>SNIServerName</code>  instance on which this matcher          performs match operations
 @return <code>true</code> if, and only if, the matcher matches the
          given <code>serverName</code>
 @throw NullPointerExceptionif <code>serverName</code> is <code>null</code>
 @throw IllegalArgumentExceptionif <code>serverName</code> is
          not of the given server name type of this matcher
 - seealso: SNIServerName
 */
- (jboolean)matchesWithJavaxNetSslSNIServerName:(JavaxNetSslSNIServerName *)serverName;

#pragma mark Protected

/*!
 @brief Creates an <code>SNIMatcher</code> using the specified server name type.
 @param type the type of the server name that this matcher performs on
 @throw IllegalArgumentExceptionif <code>type</code> is not in the range
          of 0 to 255, inclusive.
 */
- (instancetype __nonnull)initWithInt:(jint)type;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSNIMatcher)

FOUNDATION_EXPORT void JavaxNetSslSNIMatcher_initWithInt_(JavaxNetSslSNIMatcher *self, jint type);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSNIMatcher)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSNIMatcher")
