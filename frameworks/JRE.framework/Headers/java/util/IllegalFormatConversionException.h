//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/IllegalFormatConversionException.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaUtilIllegalFormatConversionException")
#ifdef RESTRICT_JavaUtilIllegalFormatConversionException
#define INCLUDE_ALL_JavaUtilIllegalFormatConversionException 0
#else
#define INCLUDE_ALL_JavaUtilIllegalFormatConversionException 1
#endif
#undef RESTRICT_JavaUtilIllegalFormatConversionException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilIllegalFormatConversionException_) && (INCLUDE_ALL_JavaUtilIllegalFormatConversionException || defined(INCLUDE_JavaUtilIllegalFormatConversionException))
#define JavaUtilIllegalFormatConversionException_

#define RESTRICT_JavaUtilIllegalFormatException 1
#define INCLUDE_JavaUtilIllegalFormatException 1
#include <JRE/java/util/IllegalFormatException.h>

@class IOSClass;

/*!
 @brief Unchecked exception thrown when the argument corresponding to the format
  specifier is of an incompatible type.
 <p> Unless otherwise specified, passing a <tt>null</tt> argument to any
  method or constructor in this class will cause a <code>NullPointerException</code>
  to be thrown.
 @since 1.5
 */
@interface JavaUtilIllegalFormatConversionException : JavaUtilIllegalFormatException

#pragma mark Public

/*!
 @brief Constructs an instance of this class with the mismatched conversion and
  the corresponding argument class.
 @param c Inapplicable conversion
 @param arg Class of the mismatched argument
 */
- (instancetype __nonnull)initWithChar:(jchar)c
                          withIOSClass:(IOSClass *)arg;

/*!
 @brief Returns the class of the mismatched argument.
 @return The class of the mismatched argument
 */
- (IOSClass *)getArgumentClass;

/*!
 @brief Returns the inapplicable conversion.
 @return The inapplicable conversion
 */
- (jchar)getConversion;

- (NSString *)getMessage;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIllegalFormatConversionException)

FOUNDATION_EXPORT void JavaUtilIllegalFormatConversionException_initWithChar_withIOSClass_(JavaUtilIllegalFormatConversionException *self, jchar c, IOSClass *arg);

FOUNDATION_EXPORT JavaUtilIllegalFormatConversionException *new_JavaUtilIllegalFormatConversionException_initWithChar_withIOSClass_(jchar c, IOSClass *arg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilIllegalFormatConversionException *create_JavaUtilIllegalFormatConversionException_initWithChar_withIOSClass_(jchar c, IOSClass *arg);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIllegalFormatConversionException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilIllegalFormatConversionException")
