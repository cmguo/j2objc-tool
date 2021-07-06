//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/spec/DESKeySpec.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxCryptoSpecDESKeySpec")
#ifdef RESTRICT_JavaxCryptoSpecDESKeySpec
#define INCLUDE_ALL_JavaxCryptoSpecDESKeySpec 0
#else
#define INCLUDE_ALL_JavaxCryptoSpecDESKeySpec 1
#endif
#undef RESTRICT_JavaxCryptoSpecDESKeySpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoSpecDESKeySpec_) && (INCLUDE_ALL_JavaxCryptoSpecDESKeySpec || defined(INCLUDE_JavaxCryptoSpecDESKeySpec))
#define JavaxCryptoSpecDESKeySpec_

#define RESTRICT_JavaSecuritySpecKeySpec 1
#define INCLUDE_JavaSecuritySpecKeySpec 1
#include <JRE/java/security/spec/KeySpec.h>

@class IOSByteArray;

/*!
 @brief This class specifies a DES key.
 @author Jan Luehe
 @since 1.4
 */
@interface JavaxCryptoSpecDESKeySpec : NSObject < JavaSecuritySpecKeySpec >
@property (readonly, class) jint DES_KEY_LEN NS_SWIFT_NAME(DES_KEY_LEN);

#pragma mark Public

/*!
 @brief Creates a DESKeySpec object using the first 8 bytes in 
 <code>key</code> as the key material for the DES key.
 <p> The bytes that constitute the DES key are those between 
 <code>key[0]</code> and <code>key[7]</code> inclusive.
 @param key the buffer with the DES key material. The first 8 bytes  of the buffer are copied to protect against subsequent modification.
 @throw NullPointerExceptionif the given key material is 
 <code>null</code>
 @throw InvalidKeyExceptionif the given key material is shorter
  than 8 bytes.
 */
- (instancetype __nonnull)initWithByteArray:(IOSByteArray *)key;

/*!
 @brief Creates a DESKeySpec object using the first 8 bytes in 
 <code>key</code>, beginning at <code>offset</code> inclusive,
  as the key material for the DES key.
 <p> The bytes that constitute the DES key are those between 
 <code>key[offset]</code> and <code>key[offset+7]</code> inclusive.
 @param key the buffer with the DES key material. The first 8 bytes  of the buffer beginning at 
  <code> offset </code>  inclusive are copied  to protect against subsequent modification.
 @param offset the offset in  <code> key </code> , where the DES key
   material starts.
 @throw NullPointerExceptionif the given key material is 
 <code>null</code>
 @throw InvalidKeyExceptionif the given key material, starting at 
 <code>offset</code> inclusive, is shorter than 8 bytes.
 */
- (instancetype __nonnull)initWithByteArray:(IOSByteArray *)key
                                    withInt:(jint)offset;

/*!
 @brief Returns the DES key material.
 @return the DES key material. Returns a new array
  each time this method is called.
 */
- (IOSByteArray *)getKey;

/*!
 @brief Checks if the given DES key material, starting at <code>offset</code>
  inclusive, is parity-adjusted.
 @param key the buffer with the DES key material.
 @param offset the offset in  <code> key </code> , where the DES key
   material starts.
 @return true if the given DES key material is parity-adjusted, false
  otherwise.
 @throw InvalidKeyExceptionif the given key material is 
 <code>null</code>, or starting at <code>offset</code> inclusive, is
  shorter than 8 bytes.
 */
+ (jboolean)isParityAdjustedWithByteArray:(IOSByteArray *)key
                                  withInt:(jint)offset;

/*!
 @brief Checks if the given DES key material is weak or semi-weak.
 @param key the buffer with the DES key material.
 @param offset the offset in  <code> key </code> , where the DES key
   material starts.
 @return true if the given DES key material is weak or semi-weak, false
  otherwise.
 @throw InvalidKeyExceptionif the given key material is 
 <code>null</code>, or starting at <code>offset</code> inclusive, is
  shorter than 8 bytes.
 */
+ (jboolean)isWeakWithByteArray:(IOSByteArray *)key
                        withInt:(jint)offset;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaxCryptoSpecDESKeySpec)

/*!
 @brief The constant which defines the length of a DES key in bytes.
 */
inline jint JavaxCryptoSpecDESKeySpec_get_DES_KEY_LEN(void);
#define JavaxCryptoSpecDESKeySpec_DES_KEY_LEN 8
J2OBJC_STATIC_FIELD_CONSTANT(JavaxCryptoSpecDESKeySpec, DES_KEY_LEN, jint)

FOUNDATION_EXPORT void JavaxCryptoSpecDESKeySpec_initWithByteArray_(JavaxCryptoSpecDESKeySpec *self, IOSByteArray *key);

FOUNDATION_EXPORT JavaxCryptoSpecDESKeySpec *new_JavaxCryptoSpecDESKeySpec_initWithByteArray_(IOSByteArray *key) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecDESKeySpec *create_JavaxCryptoSpecDESKeySpec_initWithByteArray_(IOSByteArray *key);

FOUNDATION_EXPORT void JavaxCryptoSpecDESKeySpec_initWithByteArray_withInt_(JavaxCryptoSpecDESKeySpec *self, IOSByteArray *key, jint offset);

FOUNDATION_EXPORT JavaxCryptoSpecDESKeySpec *new_JavaxCryptoSpecDESKeySpec_initWithByteArray_withInt_(IOSByteArray *key, jint offset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecDESKeySpec *create_JavaxCryptoSpecDESKeySpec_initWithByteArray_withInt_(IOSByteArray *key, jint offset);

FOUNDATION_EXPORT jboolean JavaxCryptoSpecDESKeySpec_isParityAdjustedWithByteArray_withInt_(IOSByteArray *key, jint offset);

FOUNDATION_EXPORT jboolean JavaxCryptoSpecDESKeySpec_isWeakWithByteArray_withInt_(IOSByteArray *key, jint offset);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecDESKeySpec)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoSpecDESKeySpec")
