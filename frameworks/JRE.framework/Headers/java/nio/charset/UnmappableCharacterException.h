//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/charset/UnmappableCharacterException.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioCharsetUnmappableCharacterException")
#ifdef RESTRICT_JavaNioCharsetUnmappableCharacterException
#define INCLUDE_ALL_JavaNioCharsetUnmappableCharacterException 0
#else
#define INCLUDE_ALL_JavaNioCharsetUnmappableCharacterException 1
#endif
#undef RESTRICT_JavaNioCharsetUnmappableCharacterException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioCharsetUnmappableCharacterException_) && (INCLUDE_ALL_JavaNioCharsetUnmappableCharacterException || defined(INCLUDE_JavaNioCharsetUnmappableCharacterException))
#define JavaNioCharsetUnmappableCharacterException_

#define RESTRICT_JavaNioCharsetCharacterCodingException 1
#define INCLUDE_JavaNioCharsetCharacterCodingException 1
#include <JRE/java/nio/charset/CharacterCodingException.h>

/*!
 @brief Checked exception thrown when an input character (or byte) sequence
  is valid but cannot be mapped to an output byte (or character)
  sequence.
 @since 1.4
 */
@interface JavaNioCharsetUnmappableCharacterException : JavaNioCharsetCharacterCodingException

#pragma mark Public

/*!
 @brief Constructs an <code>UnmappableCharacterException</code> with the
  given length.
 @param inputLength the length of the input
 */
- (instancetype __nonnull)initWithInt:(jint)inputLength;

/*!
 @brief Returns the length of the input.
 @return the length of the input
 */
- (jint)getInputLength;

/*!
 @brief Returns the message.
 @return the message
 */
- (NSString *)getMessage;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioCharsetUnmappableCharacterException)

FOUNDATION_EXPORT void JavaNioCharsetUnmappableCharacterException_initWithInt_(JavaNioCharsetUnmappableCharacterException *self, jint inputLength);

FOUNDATION_EXPORT JavaNioCharsetUnmappableCharacterException *new_JavaNioCharsetUnmappableCharacterException_initWithInt_(jint inputLength) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioCharsetUnmappableCharacterException *create_JavaNioCharsetUnmappableCharacterException_initWithInt_(jint inputLength);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetUnmappableCharacterException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioCharsetUnmappableCharacterException")
