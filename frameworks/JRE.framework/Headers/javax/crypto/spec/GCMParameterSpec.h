//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/spec/GCMParameterSpec.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxCryptoSpecGCMParameterSpec")
#ifdef RESTRICT_JavaxCryptoSpecGCMParameterSpec
#define INCLUDE_ALL_JavaxCryptoSpecGCMParameterSpec 0
#else
#define INCLUDE_ALL_JavaxCryptoSpecGCMParameterSpec 1
#endif
#undef RESTRICT_JavaxCryptoSpecGCMParameterSpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoSpecGCMParameterSpec_) && (INCLUDE_ALL_JavaxCryptoSpecGCMParameterSpec || defined(INCLUDE_JavaxCryptoSpecGCMParameterSpec))
#define JavaxCryptoSpecGCMParameterSpec_

#define RESTRICT_JavaSecuritySpecAlgorithmParameterSpec 1
#define INCLUDE_JavaSecuritySpecAlgorithmParameterSpec 1
#include <JRE/java/security/spec/AlgorithmParameterSpec.h>

@class IOSByteArray;

/*!
 @brief Specifies the set of parameters required by a <code>javax.crypto.Cipher</code>
  using the Galois/Counter Mode (GCM) mode.
 <p>
  Simple block cipher modes (such as CBC) generally require only an
  initialization vector (such as <code>IvParameterSpec</code>),
  but GCM needs these parameters: 
 <ul>
  <li><code>IV</code>: Initialization Vector (IV) </li>
  <li><code>tLen</code>: length (in bits) of authentication tag T</li>
  </ul>
  <p>
  In addition to the parameters described here, other GCM inputs/output
  (Additional Authenticated Data (AAD), Keys, block ciphers,
  plain/ciphertext and authentication tags) are handled in the <code>Cipher</code>
  class. 
 <p>
  Please see <a href="http://www.ietf.org/rfc/rfc5116.txt"> RFC 5116 
 </a> for more information on the Authenticated Encryption with
  Associated Data (AEAD) algorithm, and <a href="http://csrc.nist.gov/publications/nistpubs/800-38D/SP-800-38D.pdf">
  NIST Special Publication 800-38D</a>, "NIST Recommendation for Block
  Cipher Modes of Operation:  Galois/Counter Mode (GCM) and GMAC." 
 <p>
  The GCM specification states that <code>tLen</code> may only have the
  values {128, 120, 112, 104, 96}, or {64, 32} for certain
  applications.  Other values can be specified for this class, but not
  all CSP implementations will support them.
 - seealso: javax.crypto.Cipher
 @since 1.7
 */
@interface JavaxCryptoSpecGCMParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >

#pragma mark Public

/*!
 @brief Constructs a GCMParameterSpec using the specified authentication
  tag bit-length and IV buffer.
 @param tLen the authentication tag length (in bits)
 @param src the IV source buffer.  The contents of the buffer are  copied to protect against subsequent modification.
 @throw IllegalArgumentExceptionif <code>tLen</code> is negative,
  or <code>src</code> is null.
 */
- (instancetype __nonnull)initWithInt:(jint)tLen
                        withByteArray:(IOSByteArray *)src;

/*!
 @brief Constructs a GCMParameterSpec object using the specified
  authentication tag bit-length and a subset of the specified
  buffer as the IV.
 @param tLen the authentication tag length (in bits)
 @param src the IV source buffer.  The contents of the  buffer are copied to protect against subsequent modification.
 @param offset the offset in <code>src</code>  where the IV starts
 @param len the number of IV bytes
 @throw IllegalArgumentExceptionif <code>tLen</code> is negative, 
 <code>src</code> is null, <code>len</code> or <code>offset</code> is negative,
  or the sum of <code>offset</code> and <code>len</code> is greater than the
  length of the <code>src</code> byte array.
 */
- (instancetype __nonnull)initWithInt:(jint)tLen
                        withByteArray:(IOSByteArray *)src
                              withInt:(jint)offset
                              withInt:(jint)len;

/*!
 @brief Returns the Initialization Vector (IV).
 @return the IV.  Creates a new array each time this method
  is called.
 */
- (IOSByteArray *)getIV;

/*!
 @brief Returns the authentication tag length.
 @return the authentication tag length (in bits)
 */
- (jint)getTLen;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoSpecGCMParameterSpec)

FOUNDATION_EXPORT void JavaxCryptoSpecGCMParameterSpec_initWithInt_withByteArray_(JavaxCryptoSpecGCMParameterSpec *self, jint tLen, IOSByteArray *src);

FOUNDATION_EXPORT JavaxCryptoSpecGCMParameterSpec *new_JavaxCryptoSpecGCMParameterSpec_initWithInt_withByteArray_(jint tLen, IOSByteArray *src) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecGCMParameterSpec *create_JavaxCryptoSpecGCMParameterSpec_initWithInt_withByteArray_(jint tLen, IOSByteArray *src);

FOUNDATION_EXPORT void JavaxCryptoSpecGCMParameterSpec_initWithInt_withByteArray_withInt_withInt_(JavaxCryptoSpecGCMParameterSpec *self, jint tLen, IOSByteArray *src, jint offset, jint len);

FOUNDATION_EXPORT JavaxCryptoSpecGCMParameterSpec *new_JavaxCryptoSpecGCMParameterSpec_initWithInt_withByteArray_withInt_withInt_(jint tLen, IOSByteArray *src, jint offset, jint len) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecGCMParameterSpec *create_JavaxCryptoSpecGCMParameterSpec_initWithInt_withByteArray_withInt_withInt_(jint tLen, IOSByteArray *src, jint offset, jint len);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecGCMParameterSpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoSpecGCMParameterSpec")
