//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/FormatFlagsConversionMismatchException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFormatFlagsConversionMismatchException")
#ifdef RESTRICT_JavaUtilFormatFlagsConversionMismatchException
#define INCLUDE_ALL_JavaUtilFormatFlagsConversionMismatchException 0
#else
#define INCLUDE_ALL_JavaUtilFormatFlagsConversionMismatchException 1
#endif
#undef RESTRICT_JavaUtilFormatFlagsConversionMismatchException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFormatFlagsConversionMismatchException_) && (INCLUDE_ALL_JavaUtilFormatFlagsConversionMismatchException || defined(INCLUDE_JavaUtilFormatFlagsConversionMismatchException))
#define JavaUtilFormatFlagsConversionMismatchException_

#define RESTRICT_JavaUtilIllegalFormatException 1
#define INCLUDE_JavaUtilIllegalFormatException 1
#include "java/util/IllegalFormatException.h"

/*!
 @brief Unchecked exception thrown when a conversion and flag are incompatible.
 <p> Unless otherwise specified, passing a <tt>null</tt> argument to any
  method or constructor in this class will cause a <code>NullPointerException</code>
  to be thrown.
 @since 1.5
 */
@interface JavaUtilFormatFlagsConversionMismatchException : JavaUtilIllegalFormatException

#pragma mark Public

/*!
 @brief Constructs an instance of this class with the specified flag
  and conversion.
 @param f The flag
 @param c The conversion
 */
- (instancetype __nonnull)initWithNSString:(NSString *)f
                                  withChar:(jchar)c;

/*!
 @brief Returns the incompatible conversion.
 @return The conversion
 */
- (jchar)getConversion;

/*!
 @brief Returns the incompatible flag.
 @return The flag
 */
- (NSString *)getFlags;

- (NSString *)getMessage;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormatFlagsConversionMismatchException)

FOUNDATION_EXPORT void JavaUtilFormatFlagsConversionMismatchException_initWithNSString_withChar_(JavaUtilFormatFlagsConversionMismatchException *self, NSString *f, jchar c);

FOUNDATION_EXPORT JavaUtilFormatFlagsConversionMismatchException *new_JavaUtilFormatFlagsConversionMismatchException_initWithNSString_withChar_(NSString *f, jchar c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilFormatFlagsConversionMismatchException *create_JavaUtilFormatFlagsConversionMismatchException_initWithNSString_withChar_(NSString *f, jchar c);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormatFlagsConversionMismatchException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFormatFlagsConversionMismatchException")
