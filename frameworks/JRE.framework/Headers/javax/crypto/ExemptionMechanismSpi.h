//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/ExemptionMechanismSpi.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxCryptoExemptionMechanismSpi")
#ifdef RESTRICT_JavaxCryptoExemptionMechanismSpi
#define INCLUDE_ALL_JavaxCryptoExemptionMechanismSpi 0
#else
#define INCLUDE_ALL_JavaxCryptoExemptionMechanismSpi 1
#endif
#undef RESTRICT_JavaxCryptoExemptionMechanismSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxCryptoExemptionMechanismSpi_) && (INCLUDE_ALL_JavaxCryptoExemptionMechanismSpi || defined(INCLUDE_JavaxCryptoExemptionMechanismSpi))
#define JavaxCryptoExemptionMechanismSpi_

@class IOSByteArray;
@class JavaSecurityAlgorithmParameters;
@protocol JavaSecurityKey;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief This class defines the <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>ExemptionMechanism</code> class.
 All the abstract methods in this class must be implemented by each
  cryptographic service provider who wishes to supply the implementation
  of a particular exemption mechanism.
 @author Sharon Liu
 @since 1.4
 */
@interface JavaxCryptoExemptionMechanismSpi : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

#pragma mark Protected

/*!
 @brief Generates the exemption mechanism key blob.
 @return the new buffer with the result key blob.
 @throw ExemptionMechanismExceptionif problem(s) encountered in the
  process of generating.
 */
- (IOSByteArray *)engineGenExemptionBlob;

/*!
 @brief Generates the exemption mechanism key blob, and stores the result in the 
 <code>output</code> buffer, starting at <code>outputOffset</code>
  inclusive.
 <p>If the <code>output</code> buffer is too small to hold the result,
  a <code>ShortBufferException</code> is thrown. In this case, repeat this
  call with a larger output buffer. Use 
 <code>engineGetOutputSize</code> to determine
  how big the output buffer should be.
 @param output the buffer for the result
 @param outputOffset the offset in  <code> output </code>  where the result
   is stored
 @return the number of bytes stored in <code>output</code>
 @throw ShortBufferExceptionif the given output buffer is too small
  to hold the result.
 @throw ExemptionMechanismExceptionif problem(s) encountered in the
  process of generating.
 */
- (jint)engineGenExemptionBlobWithByteArray:(IOSByteArray *)output
                                    withInt:(jint)outputOffset;

/*!
 @brief Returns the length in bytes that an output buffer would need to be in
  order to hold the result of the next 
 <code>engineGenExemptionBlob</code>
  operation, given the input length <code>inputLen</code> (in bytes).
 <p>The actual output length of the next 
 <code>engineGenExemptionBlob</code>
  call may be smaller than the length returned by this method.
 @param inputLen the input length (in bytes)
 @return the required output buffer size (in bytes)
 */
- (jint)engineGetOutputSizeWithInt:(jint)inputLen;

/*!
 @brief Initializes this exemption mechanism with a key.
 <p>If this exemption mechanism requires any algorithm parameters
  that cannot be derived from the given <code>key</code>, the underlying
  exemption mechanism implementation is supposed to generate the required
  parameters itself (using provider-specific default values); in the case
  that algorithm parameters must be specified by the caller, an 
 <code>InvalidKeyException</code> is raised.
 @param key the key for this exemption mechanism
 @throw InvalidKeyExceptionif the given key is inappropriate for
  this exemption mechanism.
 @throw ExemptionMechanismExceptionif problem(s) encountered in the
  process of initializing.
 */
- (void)engineInitWithJavaSecurityKey:(id<JavaSecurityKey>)key;

/*!
 @brief Initializes this exemption mechanism with a key and a set of algorithm
  parameters.
 <p>If this exemption mechanism requires any algorithm parameters
  and <code>params</code> is null, the underlying exemption mechanism
  implementation is supposed to generate the required parameters
  itself (using provider-specific default values); in the case that
  algorithm parameters must be specified by the caller, an 
 <code>InvalidAlgorithmParameterException</code> is raised.
 @param key the key for this exemption mechanism
 @param params the algorithm parameters
 @throw InvalidKeyExceptionif the given key is inappropriate for
  this exemption mechanism.
 @throw InvalidAlgorithmParameterExceptionif the given algorithm
  parameters are inappropriate for this exemption mechanism.
 @throw ExemptionMechanismExceptionif problem(s) encountered in the
  process of initializing.
 */
- (void)engineInitWithJavaSecurityKey:(id<JavaSecurityKey>)key
  withJavaSecurityAlgorithmParameters:(JavaSecurityAlgorithmParameters *)params;

/*!
 @brief Initializes this exemption mechanism with a key and a set of algorithm
  parameters.
 <p>If this exemption mechanism requires any algorithm parameters and 
 <code>params</code> is null, the underlying exemption mechanism
  implementation is supposed to generate the required parameters
  itself (using provider-specific default values); in the case that
  algorithm parameters must be specified by the caller, an 
 <code>InvalidAlgorithmParameterException</code> is raised.
 @param key the key for this exemption mechanism
 @param params the algorithm parameters
 @throw InvalidKeyExceptionif the given key is inappropriate for
  this exemption mechanism.
 @throw InvalidAlgorithmParameterExceptionif the given algorithm
  parameters are inappropriate for this exemption mechanism.
 @throw ExemptionMechanismExceptionif problem(s) encountered in the
  process of initializing.
 */
- (void)engineInitWithJavaSecurityKey:(id<JavaSecurityKey>)key
withJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoExemptionMechanismSpi)

FOUNDATION_EXPORT void JavaxCryptoExemptionMechanismSpi_init(JavaxCryptoExemptionMechanismSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoExemptionMechanismSpi)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoExemptionMechanismSpi")
