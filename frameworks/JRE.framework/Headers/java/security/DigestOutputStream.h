//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/DigestOutputStream.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaSecurityDigestOutputStream")
#ifdef RESTRICT_JavaSecurityDigestOutputStream
#define INCLUDE_ALL_JavaSecurityDigestOutputStream 0
#else
#define INCLUDE_ALL_JavaSecurityDigestOutputStream 1
#endif
#undef RESTRICT_JavaSecurityDigestOutputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityDigestOutputStream_) && (INCLUDE_ALL_JavaSecurityDigestOutputStream || defined(INCLUDE_JavaSecurityDigestOutputStream))
#define JavaSecurityDigestOutputStream_

#define RESTRICT_JavaIoFilterOutputStream 1
#define INCLUDE_JavaIoFilterOutputStream 1
#include <JRE/java/io/FilterOutputStream.h>

@class IOSByteArray;
@class JavaIoOutputStream;
@class JavaSecurityMessageDigest;

/*!
 @brief A transparent stream that updates the associated message digest using
  the bits going through the stream.
 <p>To complete the message digest computation, call one of the 
 <code>digest</code> methods on the associated message
  digest after your calls to one of this digest output stream's 
 <code>write</code> methods. 
 <p>It is possible to turn this stream on or off (see 
 <code>on</code>). When it is on, a call to one of the 
 <code>write</code> methods results in
  an update on the message digest.  But when it is off, the message
  digest is not updated. The default is for the stream to be on.
 - seealso: MessageDigest
 - seealso: DigestInputStream
 @author Benjamin Renaud
 */
@interface JavaSecurityDigestOutputStream : JavaIoFilterOutputStream {
 @public
  /*!
   @brief The message digest associated with this stream.
   */
  JavaSecurityMessageDigest *digest_;
}

#pragma mark Public

/*!
 @brief Creates a digest output stream, using the specified output stream
  and message digest.
 @param stream the output stream.
 @param digest the message digest to associate with this stream.
 */
- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)stream
                       withJavaSecurityMessageDigest:(JavaSecurityMessageDigest *)digest;

/*!
 @brief Returns the message digest associated with this stream.
 @return the message digest associated with this stream.
 - seealso: #setMessageDigest(java.security.MessageDigest)
 */
- (JavaSecurityMessageDigest *)getMessageDigest;

/*!
 @brief Turns the digest function on or off.The default is on.
 When
  it is on, a call to one of the <code>write</code> methods results in an
  update on the message digest.  But when it is off, the message
  digest is not updated.
 @param on true to turn the digest function on, false to turn it  off.
 */
- (void)onWithBoolean:(jboolean)on;

/*!
 @brief Associates the specified message digest with this stream.
 @param digest the message digest to be associated with this stream.
 - seealso: #getMessageDigest()
 */
- (void)setMessageDigestWithJavaSecurityMessageDigest:(JavaSecurityMessageDigest *)digest;

/*!
 @brief Prints a string representation of this digest output stream and
  its associated message digest object.
 */
- (NSString *)description;

/*!
 @brief Updates the message digest (if the digest function is on) using
  the specified subarray, and in any case writes the subarray to
  the output stream.That is, if the digest function is on (see 
 <code>on</code>), this method calls <code>update</code>
  on the message digest associated with this stream, passing it
  the subarray specifications.
 This method then writes the subarray
  bytes to the output stream, blocking until the bytes are actually
  written.
 @param b the array containing the subarray to be used for updating  and writing to the output stream.
 @param off the offset into <code>b</code>  of the first byte to
   be updated and written.
 @param len the number of bytes of data to be updated and written  from 
 <code>b</code> , starting at offset <code>off</code> .
 @throw IOExceptionif an I/O error occurs.
 - seealso: MessageDigest#update(byte[], int, int)
 */
- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

/*!
 @brief Updates the message digest (if the digest function is on) using
  the specified byte, and in any case writes the byte
  to the output stream.That is, if the digest function is on
  (see <code>on</code>), this method calls 
 <code>update</code> on the message digest associated with this
  stream, passing it the byte <code>b</code>.
 This method then
  writes the byte to the output stream, blocking until the byte
  is actually written.
 @param b the byte to be used for updating and writing to the  output stream.
 @throw IOExceptionif an I/O error occurs.
 - seealso: MessageDigest#update(byte)
 */
- (void)writeWithInt:(jint)b;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaIoOutputStream:(JavaIoOutputStream *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityDigestOutputStream)

J2OBJC_FIELD_SETTER(JavaSecurityDigestOutputStream, digest_, JavaSecurityMessageDigest *)

FOUNDATION_EXPORT void JavaSecurityDigestOutputStream_initWithJavaIoOutputStream_withJavaSecurityMessageDigest_(JavaSecurityDigestOutputStream *self, JavaIoOutputStream *stream, JavaSecurityMessageDigest *digest);

FOUNDATION_EXPORT JavaSecurityDigestOutputStream *new_JavaSecurityDigestOutputStream_initWithJavaIoOutputStream_withJavaSecurityMessageDigest_(JavaIoOutputStream *stream, JavaSecurityMessageDigest *digest) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityDigestOutputStream *create_JavaSecurityDigestOutputStream_initWithJavaIoOutputStream_withJavaSecurityMessageDigest_(JavaIoOutputStream *stream, JavaSecurityMessageDigest *digest);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityDigestOutputStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityDigestOutputStream")
