//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/Inet6Address.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNetInet6Address")
#ifdef RESTRICT_JavaNetInet6Address
#define INCLUDE_ALL_JavaNetInet6Address 0
#else
#define INCLUDE_ALL_JavaNetInet6Address 1
#endif
#undef RESTRICT_JavaNetInet6Address

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetInet6Address_) && (INCLUDE_ALL_JavaNetInet6Address || defined(INCLUDE_JavaNetInet6Address))
#define JavaNetInet6Address_

#define RESTRICT_JavaNetInetAddress 1
#define INCLUDE_JavaNetInetAddress 1
#include <JRE/java/net/InetAddress.h>

@class IOSByteArray;
@class JavaNetInet6Address_Inet6AddressHolder;
@class JavaNetNetworkInterface;

/*!
 @brief This class represents an Internet Protocol version 6 (IPv6) address.
 Defined by <a href="http://www.ietf.org/rfc/rfc2373.txt">
  <i>RFC&nbsp;2373: IP Version 6 Addressing Architecture</i></a>.
  
 <h3> <A NAME="format">Textual representation of IP addresses</a> </h3>
  Textual representation of IPv6 address used as input to methods
  takes one of the following forms: 
 <ol>
    <li><p> <A NAME="lform">The preferred form</a> is x:x:x:x:x:x:x:x,
    where the 'x's are
    the hexadecimal values of the eight 16-bit pieces of the
    address. This is the full form.  For example,   
 <blockquote><table cellpadding=0 cellspacing=0 summary="layout">
    <tr><td><code>1080:0:0:0:8:800:200C:417A</code><td></tr>
    </table></blockquote>
    <p> Note that it is not necessary to write the leading zeros in
    an individual field. However, there must be at least one numeral
    in every field, except as described below.</li>
    <li><p> Due to some methods of allocating certain styles of IPv6
    addresses, it will be common for addresses to contain long
    strings of zero bits. In order to make writing addresses
    containing zero bits easier, a special syntax is available to
    compress the zeros. The use of "::" indicates multiple groups
    of 16-bits of zeros. The "::" can only appear once in an address.
    The "::" can also be used to compress the leading and/or trailing
    zeros in an address. For example,   
 <blockquote><table cellpadding=0 cellspacing=0 summary="layout">
    <tr><td><code>1080::8:800:200C:417A</code><td></tr>
    </table></blockquote>
    <li><p> An alternative form that is sometimes more convenient
    when dealing with a mixed environment of IPv4 and IPv6 nodes is
    x:x:x:x:x:x:d.d.d.d, where the 'x's are the hexadecimal values
    of the six high-order 16-bit pieces of the address, and the 'd's
    are the decimal values of the four low-order 8-bit pieces of the
    standard IPv4 representation address, for example,   
 <blockquote><table cellpadding=0 cellspacing=0 summary="layout">
    <tr><td><code>::FFFF:129.144.52.38</code><td></tr>
    <tr><td><code>::129.144.52.38</code><td></tr>
    </table></blockquote>
    <p> where "::FFFF:d.d.d.d" and "::d.d.d.d" are, respectively, the
    general forms of an IPv4-mapped IPv6 address and an
    IPv4-compatible IPv6 address. Note that the IPv4 portion must be
    in the "d.d.d.d" form. The following forms are invalid:   
 <blockquote><table cellpadding=0 cellspacing=0 summary="layout">
    <tr><td><code>::FFFF:d.d.d</code><td></tr>
    <tr><td><code>::FFFF:d.d</code><td></tr>
    <tr><td><code>::d.d.d</code><td></tr>
    <tr><td><code>::d.d</code><td></tr>
    </table></blockquote>
    <p> The following form:
    <blockquote><table cellpadding=0 cellspacing=0 summary="layout">
    <tr><td><code>::FFFF:d</code><td></tr>
    </table></blockquote>
    <p> is valid, however it is an unconventional representation of
    the IPv4-compatible IPv6 address,   
 <blockquote><table cellpadding=0 cellspacing=0 summary="layout">
    <tr><td><code>::255.255.0.d</code><td></tr>
    </table></blockquote>
    <p> while "::d" corresponds to the general IPv6 address
    "0:0:0:0:0:0:0:d".</li>
  </ol>
  
 <p> For methods that return a textual representation as output
  value, the full form is used. Inet6Address will return the full
  form because it is unambiguous when used in combination with other
  textual data. 
 <h4> Special IPv6 address </h4>
  
 <blockquote>
  <table cellspacing=2 summary="Description of IPv4-mapped address">
  <tr><th valign=top><i>IPv4-mapped address</i></th>
          <td>Of the form::ffff:w.x.y.z, this IPv6 address is used to
          represent an IPv4 address. It allows the native program to
          use the same address data structure and also the same
          socket when communicating with both IPv4 and IPv6 nodes.         
 <p>In InetAddress and Inet6Address, it is used for internal
          representation; it has no functional role. Java will never
          return an IPv4-mapped address.  These classes can take an
          IPv4-mapped address as input, both in byte array and text
          representation. However, it will be converted into an IPv4
          address.</td></tr>
  </table></blockquote>
  
 <h4><A NAME="scoped">Textual representation of IPv6 scoped addresses</a></h4>
  
 <p> The textual representation of IPv6 addresses as described above can be
  extended to specify IPv6 scoped addresses. This extension to the basic
  addressing architecture is described in [draft-ietf-ipngwg-scoping-arch-04.txt]. 
 <p> Because link-local and site-local addresses are non-global, it is possible
  that different hosts may have the same destination address and may be
  reachable through different interfaces on the same originating system. In
  this case, the originating system is said to be connected to multiple zones
  of the same scope. In order to disambiguate which is the intended destination
  zone, it is possible to append a zone identifier (or <i>scope_id</i>) to an
  IPv6 address. 
 <p> The general format for specifying the <i>scope_id</i> is the following: 
 <blockquote><i>IPv6-address</i>%<i>scope_id</i></blockquote>
  <p> The IPv6-address is a literal IPv6 address as described above. The 
 <i>scope_id</i> refers to an interface on the local system, and it can be
  specified in two ways. 
 <ol><li><i>As a numeric identifier.</i> This must be a positive integer
  that identifies the particular interface and scope as understood by the
  system. Usually, the numeric values can be determined through administration
  tools on the system. Each interface may have multiple values, one for each
  scope. If the scope is unspecified, then the default value used is zero.</li>
  <li><i>As a string.</i> This must be the exact string that is returned by 
 <code>java.net.NetworkInterface.getName()</code> for the particular interface in
  question. When an Inet6Address is created in this way, the numeric scope-id
  is determined at the time the object is created by querying the relevant
  NetworkInterface.</li></ol>
  
 <p> Note also, that the numeric <i>scope_id</i> can be retrieved from
  Inet6Address instances returned from the NetworkInterface class. This can be
  used to find out the current scope ids configured on the system.
 @since 1.4
 */
@interface JavaNetInet6Address : JavaNetInetAddress {
 @public
  JavaNetInet6Address_Inet6AddressHolder *holder6_;
}
@property (readonly, class) jint INADDRSZ NS_SWIFT_NAME(INADDRSZ);
@property (readonly, class, strong) JavaNetInetAddress *ANY NS_SWIFT_NAME(ANY);
@property (readonly, class, strong) JavaNetInetAddress *LOOPBACK NS_SWIFT_NAME(LOOPBACK);

#pragma mark Public

/*!
 @brief Compares this object against the specified object.The result is <code>true</code>
  if and only if the argument is not <code>null</code> and it represents
  the same IP address as this object.
 <p> Two instances of <code>InetAddress</code> represent the same IP address
  if the length of the byte arrays returned by <code>getAddress</code> is the
  same for both, and each of the array components is the same for the byte
  arrays.
 @param obj the object to compare against.
 @return <code>true</code> if the objects are the same; <code>false</code> otherwise.
 - seealso: java.net.InetAddress#getAddress()
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the raw IP address of this <code>InetAddress</code> object.The result
  is in network byte order: the highest order byte of the address is in 
 <code>getAddress()[0]</code>.
 @return the raw IP address of this object.
 */
- (IOSByteArray *)getAddress;

/*!
 @brief Create an Inet6Address in the exact manner of <code>InetAddress.getByAddress(String,byte[])</code>
  except that the IPv6 scope_id is
  set to the given numeric value.The scope_id is not checked to determine
  if it corresponds to any interface on the system.
 See <a href="Inet6Address.html#scoped">here</a> for a description of IPv6
  scoped addresses.
 @param host the specified host
 @param addr the raw IP address in network byte order
 @param scope_id the numeric scope_id for the address.
 @return an Inet6Address object created from the raw IP address.
 @throw UnknownHostExceptionif IP address is of illegal length.
 @since 1.5
 */
+ (JavaNetInet6Address *)getByAddressWithNSString:(NSString *)host
                                    withByteArray:(IOSByteArray *)addr
                                          withInt:(jint)scope_id;

/*!
 @brief Create an Inet6Address in the exact manner of <code>InetAddress.getByAddress(String,byte[])</code>
  except that the IPv6 scope_id is
  set to the value corresponding to the given interface for the address
  type specified in <code>addr</code>.The call will fail with an
  UnknownHostException if the given interface does not have a numeric
  scope_id assigned for the given address type (eg. link-local or site-local).
 See <a href="Inet6Address.html#scoped">here</a> for a description of IPv6
  scoped addresses.
 @param host the specified host
 @param addr the raw IP address in network byte order
 @param nif an interface this address must be associated with.
 @return an Inet6Address object created from the raw IP address.
 @throw UnknownHostException
 if IP address is of illegal length, or if the interface does not
           have a numeric scope_id assigned for the given address type.
 @since 1.5
 */
+ (JavaNetInet6Address *)getByAddressWithNSString:(NSString *)host
                                    withByteArray:(IOSByteArray *)addr
                      withJavaNetNetworkInterface:(JavaNetNetworkInterface *)nif;

/*!
 @brief Returns the IP address string in textual presentation.If the instance
  was created specifying a scope identifier then the scope id is appended
  to the IP address preceded by a "%" (per-cent) character.
 This can be
  either a numeric value or a string, depending on which was used to create
  the instance.
 @return the raw IP address in a string format.
 */
- (NSString *)getHostAddress;

/*!
 @brief Returns the scoped interface, if this instance was created with
  with a scoped interface.
 @return the scoped interface, or null if not set.
 @since 1.5
 */
- (JavaNetNetworkInterface *)getScopedInterface;

/*!
 @brief Returns the numeric scopeId, if this instance is associated with
  an interface.If no scoped_id is set, the returned value is zero.
 @return the scopeId, or zero if not set.
 @since 1.5
 */
- (jint)getScopeId;

/*!
 @brief Returns a hashcode for this IP address.
 @return a hash code value for this IP address.
 */
- (NSUInteger)hash;

/*!
 @brief Utility routine to check if the InetAddress in a wildcard address.
 @return a <code>boolean</code> indicating if the Inetaddress is
          a wildcard address.
 @since 1.4
 */
- (jboolean)isAnyLocalAddress;

/*!
 @brief Utility routine to check if the InetAddress is an
  IPv4 compatible IPv6 address.
 @return a <code>boolean</code> indicating if the InetAddress is an IPv4
          compatible IPv6 address; or false if address is IPv4 address.
 @since 1.4
 */
- (jboolean)isIPv4CompatibleAddress;

/*!
 @brief Utility routine to check if the InetAddress is an link local address.
 @return a <code>boolean</code> indicating if the InetAddress is a link local
          address; or false if address is not a link local unicast address.
 @since 1.4
 */
- (jboolean)isLinkLocalAddress;

/*!
 @brief Utility routine to check if the InetAddress is a loopback address.
 @return a <code>boolean</code> indicating if the InetAddress is a loopback
          address; or false otherwise.
 @since 1.4
 */
- (jboolean)isLoopbackAddress;

/*!
 @brief Utility routine to check if the multicast address has global scope.
 @return a <code>boolean</code> indicating if the address has is a multicast
          address of global scope, false if it is not of global scope or
          it is not a multicast address
 @since 1.4
 */
- (jboolean)isMCGlobal;

/*!
 @brief Utility routine to check if the multicast address has link scope.
 @return a <code>boolean</code> indicating if the address has is a multicast
          address of link-local scope, false if it is not of link-local
          scope or it is not a multicast address
 @since 1.4
 */
- (jboolean)isMCLinkLocal;

/*!
 @brief Utility routine to check if the multicast address has node scope.
 @return a <code>boolean</code> indicating if the address has is a multicast
          address of node-local scope, false if it is not of node-local
          scope or it is not a multicast address
 @since 1.4
 */
- (jboolean)isMCNodeLocal;

/*!
 @brief Utility routine to check if the multicast address has organization scope.
 @return a <code>boolean</code> indicating if the address has is a multicast
          address of organization-local scope, false if it is not of
          organization-local scope or it is not a multicast address
 @since 1.4
 */
- (jboolean)isMCOrgLocal;

/*!
 @brief Utility routine to check if the multicast address has site scope.
 @return a <code>boolean</code> indicating if the address has is a multicast
          address of site-local scope, false if it is not  of site-local
          scope or it is not a multicast address
 @since 1.4
 */
- (jboolean)isMCSiteLocal;

/*!
 @brief Utility routine to check if the InetAddress is an IP multicast
  address.11111111 at the start of the address identifies the
  address as being a multicast address.
 @return a <code>boolean</code> indicating if the InetAddress is an IP
          multicast address
 @since JDK1.1
 */
- (jboolean)isMulticastAddress;

/*!
 @brief Utility routine to check if the InetAddress is a site local address.
 @return a <code>boolean</code> indicating if the InetAddress is a site local
          address; or false if address is not a site local unicast address.
 @since 1.4
 */
- (jboolean)isSiteLocalAddress;

#pragma mark Package-Private

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)hostName
                             withByteArray:(IOSByteArray *)addr;

- (instancetype __nonnull)initWithNSString:(NSString *)hostName
                             withByteArray:(IOSByteArray *)addr
                                   withInt:(jint)scope_id;

- (instancetype __nonnull)initWithNSString:(NSString *)hostName
                             withByteArray:(IOSByteArray *)addr
               withJavaNetNetworkInterface:(JavaNetNetworkInterface *)nif;

- (instancetype __nonnull)initWithNSString:(NSString *)hostName
                             withByteArray:(IOSByteArray *)addr
                              withNSString:(NSString *)ifname;

+ (jboolean)isLinkLocalAddressWithByteArray:(IOSByteArray *)ipaddress;

+ (jboolean)isSiteLocalAddressWithByteArray:(IOSByteArray *)ipaddress;

+ (NSString *)numericToTextFormatWithByteArray:(IOSByteArray *)src;

@end

J2OBJC_STATIC_INIT(JavaNetInet6Address)

J2OBJC_FIELD_SETTER(JavaNetInet6Address, holder6_, JavaNetInet6Address_Inet6AddressHolder *)

inline jint JavaNetInet6Address_get_INADDRSZ(void);
#define JavaNetInet6Address_INADDRSZ 16
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetInet6Address, INADDRSZ, jint)

/*!
 */
inline JavaNetInetAddress *JavaNetInet6Address_get_ANY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet6Address_ANY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetInet6Address, ANY, JavaNetInetAddress *)

/*!
 */
inline JavaNetInetAddress *JavaNetInet6Address_get_LOOPBACK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet6Address_LOOPBACK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetInet6Address, LOOPBACK, JavaNetInetAddress *)

FOUNDATION_EXPORT void JavaNetInet6Address_init(JavaNetInet6Address *self);

FOUNDATION_EXPORT JavaNetInet6Address *new_JavaNetInet6Address_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInet6Address *create_JavaNetInet6Address_init(void);

FOUNDATION_EXPORT void JavaNetInet6Address_initWithNSString_withByteArray_withInt_(JavaNetInet6Address *self, NSString *hostName, IOSByteArray *addr, jint scope_id);

FOUNDATION_EXPORT JavaNetInet6Address *new_JavaNetInet6Address_initWithNSString_withByteArray_withInt_(NSString *hostName, IOSByteArray *addr, jint scope_id) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInet6Address *create_JavaNetInet6Address_initWithNSString_withByteArray_withInt_(NSString *hostName, IOSByteArray *addr, jint scope_id);

FOUNDATION_EXPORT void JavaNetInet6Address_initWithNSString_withByteArray_(JavaNetInet6Address *self, NSString *hostName, IOSByteArray *addr);

FOUNDATION_EXPORT JavaNetInet6Address *new_JavaNetInet6Address_initWithNSString_withByteArray_(NSString *hostName, IOSByteArray *addr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInet6Address *create_JavaNetInet6Address_initWithNSString_withByteArray_(NSString *hostName, IOSByteArray *addr);

FOUNDATION_EXPORT void JavaNetInet6Address_initWithNSString_withByteArray_withJavaNetNetworkInterface_(JavaNetInet6Address *self, NSString *hostName, IOSByteArray *addr, JavaNetNetworkInterface *nif);

FOUNDATION_EXPORT JavaNetInet6Address *new_JavaNetInet6Address_initWithNSString_withByteArray_withJavaNetNetworkInterface_(NSString *hostName, IOSByteArray *addr, JavaNetNetworkInterface *nif) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInet6Address *create_JavaNetInet6Address_initWithNSString_withByteArray_withJavaNetNetworkInterface_(NSString *hostName, IOSByteArray *addr, JavaNetNetworkInterface *nif);

FOUNDATION_EXPORT void JavaNetInet6Address_initWithNSString_withByteArray_withNSString_(JavaNetInet6Address *self, NSString *hostName, IOSByteArray *addr, NSString *ifname);

FOUNDATION_EXPORT JavaNetInet6Address *new_JavaNetInet6Address_initWithNSString_withByteArray_withNSString_(NSString *hostName, IOSByteArray *addr, NSString *ifname) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInet6Address *create_JavaNetInet6Address_initWithNSString_withByteArray_withNSString_(NSString *hostName, IOSByteArray *addr, NSString *ifname);

FOUNDATION_EXPORT JavaNetInet6Address *JavaNetInet6Address_getByAddressWithNSString_withByteArray_withJavaNetNetworkInterface_(NSString *host, IOSByteArray *addr, JavaNetNetworkInterface *nif);

FOUNDATION_EXPORT JavaNetInet6Address *JavaNetInet6Address_getByAddressWithNSString_withByteArray_withInt_(NSString *host, IOSByteArray *addr, jint scope_id);

FOUNDATION_EXPORT jboolean JavaNetInet6Address_isLinkLocalAddressWithByteArray_(IOSByteArray *ipaddress);

FOUNDATION_EXPORT jboolean JavaNetInet6Address_isSiteLocalAddressWithByteArray_(IOSByteArray *ipaddress);

FOUNDATION_EXPORT NSString *JavaNetInet6Address_numericToTextFormatWithByteArray_(IOSByteArray *src);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetInet6Address)

#endif

#if !defined (JavaNetInet6Address_Inet6AddressHolder_) && (INCLUDE_ALL_JavaNetInet6Address || defined(INCLUDE_JavaNetInet6Address_Inet6AddressHolder))
#define JavaNetInet6Address_Inet6AddressHolder_

@class IOSByteArray;
@class JavaNetInet6Address;
@class JavaNetNetworkInterface;

@interface JavaNetInet6Address_Inet6AddressHolder : NSObject {
 @public
  /*!
   @brief Holds a 128-bit (16 bytes) IPv6 address.
   */
  IOSByteArray *ipaddress_;
  /*!
   @brief scope_id.The scope specified when the object is created.
   If the object
  is created with an interface name, then the scope_id is not determined
  until the time it is needed.
   */
  jint scope_id_;
  /*!
   @brief This will be set to true when the scope_id field contains a valid
  integer scope_id.
   */
  jboolean scope_id_set_;
  /*!
   @brief scoped interface.scope_id is derived from this as the scope_id of the first
  address whose scope is the same as this address for the named interface.
   */
  __unsafe_unretained JavaNetNetworkInterface *scope_ifname_;
  /*!
   @brief set if the object is constructed with a scoped
  interface instead of a numeric scope id.
   */
  jboolean scope_ifname_set_;
}

#pragma mark Public

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaNetInet6Address:(JavaNetInet6Address *)outer$;

- (instancetype __nonnull)initWithJavaNetInet6Address:(JavaNetInet6Address *)outer$
                                        withByteArray:(IOSByteArray *)ipaddress
                                              withInt:(jint)scope_id
                                          withBoolean:(jboolean)scope_id_set
                          withJavaNetNetworkInterface:(JavaNetNetworkInterface *)ifname
                                          withBoolean:(jboolean)scope_ifname_set;

- (void)init__WithByteArray:(IOSByteArray *)addr
                    withInt:(jint)scope_id OBJC_METHOD_FAMILY_NONE;

- (void)init__WithByteArray:(IOSByteArray *)addr
withJavaNetNetworkInterface:(JavaNetNetworkInterface *)nif OBJC_METHOD_FAMILY_NONE;

- (jboolean)isAnyLocalAddress;

- (jboolean)isIPv4CompatibleAddress;

- (jboolean)isLinkLocalAddress;

- (jboolean)isLoopbackAddress;

- (jboolean)isMCGlobal;

- (jboolean)isMCLinkLocal;

- (jboolean)isMCNodeLocal;

- (jboolean)isMCOrgLocal;

- (jboolean)isMCSiteLocal;

- (jboolean)isMulticastAddress;

- (jboolean)isSiteLocalAddress;

- (void)setAddrWithByteArray:(IOSByteArray *)addr;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetInet6Address_Inet6AddressHolder)

J2OBJC_FIELD_SETTER(JavaNetInet6Address_Inet6AddressHolder, ipaddress_, IOSByteArray *)

FOUNDATION_EXPORT void JavaNetInet6Address_Inet6AddressHolder_initWithJavaNetInet6Address_(JavaNetInet6Address_Inet6AddressHolder *self, JavaNetInet6Address *outer$);

FOUNDATION_EXPORT JavaNetInet6Address_Inet6AddressHolder *new_JavaNetInet6Address_Inet6AddressHolder_initWithJavaNetInet6Address_(JavaNetInet6Address *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInet6Address_Inet6AddressHolder *create_JavaNetInet6Address_Inet6AddressHolder_initWithJavaNetInet6Address_(JavaNetInet6Address *outer$);

FOUNDATION_EXPORT void JavaNetInet6Address_Inet6AddressHolder_initWithJavaNetInet6Address_withByteArray_withInt_withBoolean_withJavaNetNetworkInterface_withBoolean_(JavaNetInet6Address_Inet6AddressHolder *self, JavaNetInet6Address *outer$, IOSByteArray *ipaddress, jint scope_id, jboolean scope_id_set, JavaNetNetworkInterface *ifname, jboolean scope_ifname_set);

FOUNDATION_EXPORT JavaNetInet6Address_Inet6AddressHolder *new_JavaNetInet6Address_Inet6AddressHolder_initWithJavaNetInet6Address_withByteArray_withInt_withBoolean_withJavaNetNetworkInterface_withBoolean_(JavaNetInet6Address *outer$, IOSByteArray *ipaddress, jint scope_id, jboolean scope_id_set, JavaNetNetworkInterface *ifname, jboolean scope_ifname_set) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInet6Address_Inet6AddressHolder *create_JavaNetInet6Address_Inet6AddressHolder_initWithJavaNetInet6Address_withByteArray_withInt_withBoolean_withJavaNetNetworkInterface_withBoolean_(JavaNetInet6Address *outer$, IOSByteArray *ipaddress, jint scope_id, jboolean scope_id_set, JavaNetNetworkInterface *ifname, jboolean scope_ifname_set);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetInet6Address_Inet6AddressHolder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetInet6Address")
