//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/MulticastSocket.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNetMulticastSocket")
#ifdef RESTRICT_JavaNetMulticastSocket
#define INCLUDE_ALL_JavaNetMulticastSocket 0
#else
#define INCLUDE_ALL_JavaNetMulticastSocket 1
#endif
#undef RESTRICT_JavaNetMulticastSocket

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetMulticastSocket_) && (INCLUDE_ALL_JavaNetMulticastSocket || defined(INCLUDE_JavaNetMulticastSocket))
#define JavaNetMulticastSocket_

#define RESTRICT_JavaNetDatagramSocket 1
#define INCLUDE_JavaNetDatagramSocket 1
#include <JRE/java/net/DatagramSocket.h>

@class JavaNetDatagramPacket;
@class JavaNetDatagramSocketImpl;
@class JavaNetInetAddress;
@class JavaNetNetworkInterface;
@class JavaNetSocketAddress;

/*!
 @brief The multicast datagram socket class is useful for sending
  and receiving IP multicast packets.A MulticastSocket is
  a (UDP) DatagramSocket, with additional capabilities for
  joining "groups" of other multicast hosts on the internet.
 <P>
  A multicast group is specified by a class D IP address
  and by a standard UDP port number. Class D IP addresses
  are in the range <CODE>224.0.0.0</CODE> to <CODE>239.255.255.255</CODE>,
  inclusive. The address 224.0.0.0 is reserved and should not be used. 
 <P>
  One would join a multicast group by first creating a MulticastSocket
  with the desired port, then invoking the 
 <CODE>joinGroup(InetAddress groupAddr)</CODE>
  method: 
 @code

  // join a Multicast group and send the group salutations
  ...
  String msg = "Hello";
  InetAddress group = InetAddress.getByName("228.5.6.7");
  MulticastSocket s = new MulticastSocket(6789);
  s.joinGroup(group);
  byte[] bytes = msg.getBytes(StandardCharsets.UTF_8);
  DatagramPacket hi = new DatagramPacket(bytes, bytes.length,
                              group, 6789);
  s.send(hi);
  // get their responses!
  byte[] buf = new byte[1000];
  DatagramPacket recv = new DatagramPacket(buf, buf.length);
  s.receive(recv);
  ...
  // OK, I'm done talking - leave the group...
  s.leaveGroup(group); 
  
@endcode
  When one sends a message to a multicast group, <B>all</B> subscribing
  recipients to that host and port receive the message (within the
  time-to-live range of the packet, see below).  The socket needn't
  be a member of the multicast group to send messages to it. 
 <P>
  When a socket subscribes to a multicast group/port, it receives
  datagrams sent by other hosts to the group/port, as do all other
  members of the group and port.  A socket relinquishes membership
  in a group by the leaveGroup(InetAddress addr) method.  <B>
  Multiple MulticastSocket's</B> may subscribe to a multicast group
  and port concurrently, and they will all receive group datagrams. 
 <P>
  Currently applets are not allowed to use multicast sockets.
 @author Pavani Diwanji
 @since JDK1.1
 */
@interface JavaNetMulticastSocket : JavaNetDatagramSocket

#pragma mark Public

/*!
 @brief Create a multicast socket.
 <p>If there is a security manager,
  its <code>checkListen</code> method is first called
  with 0 as its argument to ensure the operation is allowed.
  This could result in a SecurityException. 
 <p>
  When the socket is created the 
 <code>DatagramSocket.setReuseAddress(boolean)</code> method is
  called to enable the SO_REUSEADDR socket option.
 @throw IOExceptionif an I/O exception occurs
  while creating the MulticastSocket
 @throw SecurityExceptionif a security manager exists and its
              <code>checkListen</code> method doesn't allow the operation.
 - seealso: SecurityManager#checkListen
 - seealso: java.net.DatagramSocket#setReuseAddress(boolean)
 */
- (instancetype __nonnull)init;

/*!
 @brief Create a multicast socket and bind it to a specific port.
 <p>If there is a security manager,
  its <code>checkListen</code> method is first called
  with the <code>port</code> argument
  as its argument to ensure the operation is allowed.
  This could result in a SecurityException. 
 <p>
  When the socket is created the 
 <code>DatagramSocket.setReuseAddress(boolean)</code> method is
  called to enable the SO_REUSEADDR socket option.
 @param port port to use
 @throw IOExceptionif an I/O exception occurs
  while creating the MulticastSocket
 @throw SecurityExceptionif a security manager exists and its
              <code>checkListen</code> method doesn't allow the operation.
 - seealso: SecurityManager#checkListen
 - seealso: java.net.DatagramSocket#setReuseAddress(boolean)
 */
- (instancetype __nonnull)initWithInt:(jint)port;

/*!
 @brief Create a MulticastSocket bound to the specified socket address.
 <p>
  Or, if the address is <code>null</code>, create an unbound socket. 
 <p>If there is a security manager,
  its <code>checkListen</code> method is first called
  with the SocketAddress port as its argument to ensure the operation is allowed.
  This could result in a SecurityException. 
 <p>
  When the socket is created the 
 <code>DatagramSocket.setReuseAddress(boolean)</code> method is
  called to enable the SO_REUSEADDR socket option.
 @param bindaddr Socket address to bind to, or <code>null</code>  for
                   an unbound socket.
 @throw IOExceptionif an I/O exception occurs
  while creating the MulticastSocket
 @throw SecurityExceptionif a security manager exists and its
              <code>checkListen</code> method doesn't allow the operation.
 - seealso: SecurityManager#checkListen
 - seealso: java.net.DatagramSocket#setReuseAddress(boolean)
 @since 1.4
 */
- (instancetype __nonnull)initWithJavaNetSocketAddress:(JavaNetSocketAddress *)bindaddr;

/*!
 @brief Retrieve the address of the network interface used for
  multicast packets.
 @return An <code>InetAddress</code> representing
   the address of the network interface used for
   multicast packets.
 @throw SocketExceptionif there is an error in
  the underlying protocol, such as a TCP error.
 - seealso: #setInterface(java.net.InetAddress)
 */
- (JavaNetInetAddress *)getInterface;

/*!
 @brief Get the setting for local loopback of multicast datagrams.
 @throw SocketExceptionif an error occurs while getting the value
 @return true if the LoopbackMode has been disabled
 @since 1.4
 - seealso: #setLoopbackMode
 */
- (jboolean)getLoopbackMode;

/*!
 @brief Get the multicast network interface set.
 @throw SocketExceptionif there is an error in
  the underlying protocol, such as a TCP error.
 @return the multicast <code>NetworkInterface</code> currently set
 - seealso: #setNetworkInterface(NetworkInterface)
 @since 1.4
 */
- (JavaNetNetworkInterface *)getNetworkInterface;

/*!
 @brief Get the default time-to-live for multicast packets sent out on
  the socket.
 @throw IOExceptionif an I/O exception occurs while
  getting the default time-to-live value
 @return the default time-to-live value
 - seealso: #setTimeToLive(int)
 */
- (jint)getTimeToLive;

/*!
 @brief Get the default time-to-live for multicast packets sent out on
  the socket.
 @throw IOExceptionif an I/O exception occurs
  while getting the default time-to-live value
 @return the default time-to-live value
 - seealso: #setTTL(byte)
 */
- (jbyte)getTTL __attribute__((deprecated));

/*!
 @brief Joins a multicast group.Its behavior may be affected by 
 <code>setInterface</code> or <code>setNetworkInterface</code>.
 <p>If there is a security manager, this method first
  calls its <code>checkMulticast</code> method
  with the <code>mcastaddr</code> argument
  as its argument.
 @param mcastaddr is the multicast address to join
 @throw IOExceptionif there is an error joining
  or when the address is not a multicast address.
 @throw SecurityExceptionif a security manager exists and its 
 <code>checkMulticast</code> method doesn't allow the join.
 - seealso: SecurityManager#checkMulticast(InetAddress)
 */
- (void)joinGroupWithJavaNetInetAddress:(JavaNetInetAddress *)mcastaddr;

/*!
 @brief Joins the specified multicast group at the specified interface.
 <p>If there is a security manager, this method first
  calls its <code>checkMulticast</code> method
  with the <code>mcastaddr</code> argument
  as its argument.
 @param mcastaddr is the multicast address to join
 @param netIf specifies the local interface to receive multicast         datagram packets, or 
  <i> null </i>  to defer to the interface set by        
 <code>MulticastSocket.setInterface(InetAddress)</code>  or        
 <code>MulticastSocket.setNetworkInterface(NetworkInterface)</code>
 @throw IOExceptionif there is an error joining
  or when the address is not a multicast address.
 @throw SecurityExceptionif a security manager exists and its 
 <code>checkMulticast</code> method doesn't allow the join.
 @throw IllegalArgumentExceptionif mcastaddr is null or is a
           SocketAddress subclass not supported by this socket
 - seealso: SecurityManager#checkMulticast(InetAddress)
 @since 1.4
 */
- (void)joinGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)mcastaddr
              withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netIf;

/*!
 @brief Leave a multicast group.Its behavior may be affected by 
 <code>setInterface</code> or <code>setNetworkInterface</code>.
 <p>If there is a security manager, this method first
  calls its <code>checkMulticast</code> method
  with the <code>mcastaddr</code> argument
  as its argument.
 @param mcastaddr is the multicast address to leave
 @throw IOExceptionif there is an error leaving
  or when the address is not a multicast address.
 @throw SecurityExceptionif a security manager exists and its 
 <code>checkMulticast</code> method doesn't allow the operation.
 - seealso: SecurityManager#checkMulticast(InetAddress)
 */
- (void)leaveGroupWithJavaNetInetAddress:(JavaNetInetAddress *)mcastaddr;

/*!
 @brief Leave a multicast group on a specified local interface.
 <p>If there is a security manager, this method first
  calls its <code>checkMulticast</code> method
  with the <code>mcastaddr</code> argument
  as its argument.
 @param mcastaddr is the multicast address to leave
 @param netIf specifies the local interface or  <i> null </i>  to defer
               to the interface set by              
 <code>MulticastSocket.setInterface(InetAddress)</code>  or              
 <code>MulticastSocket.setNetworkInterface(NetworkInterface)</code>
 @throw IOExceptionif there is an error leaving
  or when the address is not a multicast address.
 @throw SecurityExceptionif a security manager exists and its 
 <code>checkMulticast</code> method doesn't allow the operation.
 @throw IllegalArgumentExceptionif mcastaddr is null or is a
           SocketAddress subclass not supported by this socket
 - seealso: SecurityManager#checkMulticast(InetAddress)
 @since 1.4
 */
- (void)leaveGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)mcastaddr
               withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netIf;

/*!
 @brief Sends a datagram packet to the destination, with a TTL (time-
  to-live) other than the default for the socket.This method
  need only be used in instances where a particular TTL is desired;
  otherwise it is preferable to set a TTL once on the socket, and
  use that default TTL for all packets.
 This method does <B>not
  </B> alter the default TTL for the socket. Its behavior may be
  affected by <code>setInterface</code>.
  
 <p>If there is a security manager, this method first performs some
  security checks. First, if <code>p.getAddress().isMulticastAddress()</code>
  is true, this method calls the
  security manager's <code>checkMulticast</code> method
  with <code>p.getAddress()</code> and <code>ttl</code> as its arguments.
  If the evaluation of that expression is false,
  this method instead calls the security manager's 
 <code>checkConnect</code> method with arguments 
 <code>p.getAddress().getHostAddress()</code> and 
 <code>p.getPort()</code>. Each call to a security manager method
  could result in a SecurityException if the operation is not allowed.
 @param p is the packet to be sent. The packet should contain  the destination multicast ip address and the data to be sent.
   One does not need to be the member of the group to send
   packets to a destination multicast address.
 @param ttl optional time to live for multicast packet.  default ttl is 1.
 @throw IOExceptionis raised if an error occurs i.e
  error while setting ttl.
 @throw SecurityExceptionif a security manager exists and its
              <code>checkMulticast</code> or <code>checkConnect</code>
              method doesn't allow the send.
 - seealso: DatagramSocket#send
 - seealso: DatagramSocket#receive
 - seealso: SecurityManager#checkMulticast(java.net.InetAddress, byte)
 - seealso: SecurityManager#checkConnect
 */
- (void)sendWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)p
                             withByte:(jbyte)ttl __attribute__((deprecated));

/*!
 @brief Set the multicast network interface used by methods
  whose behavior would be affected by the value of the
  network interface.Useful for multihomed hosts.
 @param inf the InetAddress
 @throw SocketExceptionif there is an error in
  the underlying protocol, such as a TCP error.
 - seealso: #getInterface()
 */
- (void)setInterfaceWithJavaNetInetAddress:(JavaNetInetAddress *)inf;

/*!
 @brief Disable/Enable local loopback of multicast datagrams
  The option is used by the platform's networking code as a hint
  for setting whether multicast data will be looped back to
  the local socket.
 <p>Because this option is a hint, applications that want to
  verify what loopback mode is set to should call 
 <code>getLoopbackMode()</code>
 @param disable<code>true</code>  to disable the LoopbackMode
 @throw SocketExceptionif an error occurs while setting the value
 @since 1.4
 - seealso: #getLoopbackMode
 */
- (void)setLoopbackModeWithBoolean:(jboolean)disable;

/*!
 @brief Specify the network interface for outgoing multicast datagrams
  sent on this socket.
 @param netIf the interface
 @throw SocketExceptionif there is an error in
  the underlying protocol, such as a TCP error.
 - seealso: #getNetworkInterface()
 @since 1.4
 */
- (void)setNetworkInterfaceWithJavaNetNetworkInterface:(JavaNetNetworkInterface *)netIf;

/*!
 @brief Set the default time-to-live for multicast packets sent out
  on this <code>MulticastSocket</code> in order to control the
  scope of the multicasts.
 <P> The ttl <B>must</B> be in the range <code>0 <= ttl <=
  255</code>
  or an <code>IllegalArgumentException</code> will be thrown.
  Multicast packets sent with a TTL of <code>0</code> are not transmitted
  on the network but may be delivered locally.
 @param ttl the time-to-live
 @throw IOException
 if an I/O exception occurs while setting the
           default time-to-live value
 - seealso: #getTimeToLive()
 */
- (void)setTimeToLiveWithInt:(jint)ttl;

/*!
 @brief Set the default time-to-live for multicast packets sent out
  on this <code>MulticastSocket</code> in order to control the
  scope of the multicasts.
 <p>The ttl is an <b>unsigned</b> 8-bit quantity, and so <B>must</B> be
  in the range <code>0 <= ttl <= 0xFF</code>.
 @param ttl the time-to-live
 @throw IOExceptionif an I/O exception occurs
  while setting the default time-to-live value
 - seealso: #getTTL()
 */
- (void)setTTLWithByte:(jbyte)ttl __attribute__((deprecated));

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithInt:(jint)arg0
               withJavaNetInetAddress:(JavaNetInetAddress *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaNetDatagramSocketImpl:(JavaNetDatagramSocketImpl *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetMulticastSocket)

FOUNDATION_EXPORT void JavaNetMulticastSocket_init(JavaNetMulticastSocket *self);

FOUNDATION_EXPORT JavaNetMulticastSocket *new_JavaNetMulticastSocket_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetMulticastSocket *create_JavaNetMulticastSocket_init(void);

FOUNDATION_EXPORT void JavaNetMulticastSocket_initWithInt_(JavaNetMulticastSocket *self, jint port);

FOUNDATION_EXPORT JavaNetMulticastSocket *new_JavaNetMulticastSocket_initWithInt_(jint port) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetMulticastSocket *create_JavaNetMulticastSocket_initWithInt_(jint port);

FOUNDATION_EXPORT void JavaNetMulticastSocket_initWithJavaNetSocketAddress_(JavaNetMulticastSocket *self, JavaNetSocketAddress *bindaddr);

FOUNDATION_EXPORT JavaNetMulticastSocket *new_JavaNetMulticastSocket_initWithJavaNetSocketAddress_(JavaNetSocketAddress *bindaddr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetMulticastSocket *create_JavaNetMulticastSocket_initWithJavaNetSocketAddress_(JavaNetSocketAddress *bindaddr);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetMulticastSocket)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetMulticastSocket")
