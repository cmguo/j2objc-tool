//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/AccessMode.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioFileAccessMode")
#ifdef RESTRICT_JavaNioFileAccessMode
#define INCLUDE_ALL_JavaNioFileAccessMode 0
#else
#define INCLUDE_ALL_JavaNioFileAccessMode 1
#endif
#undef RESTRICT_JavaNioFileAccessMode

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAccessMode_) && (INCLUDE_ALL_JavaNioFileAccessMode || defined(INCLUDE_JavaNioFileAccessMode))
#define JavaNioFileAccessMode_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include <JRE/java/lang/Enum.h>

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaNioFileAccessMode_Enum) {
  JavaNioFileAccessMode_Enum_READ = 0,
  JavaNioFileAccessMode_Enum_WRITE = 1,
  JavaNioFileAccessMode_Enum_EXECUTE = 2,
};

/*!
 @brief Defines access modes used to test the accessibility of a file.
 @since 1.7
 */
@interface JavaNioFileAccessMode : JavaLangEnum

@property (readonly, class, nonnull) JavaNioFileAccessMode *READ NS_SWIFT_NAME(READ);
@property (readonly, class, nonnull) JavaNioFileAccessMode *WRITE NS_SWIFT_NAME(WRITE);
@property (readonly, class, nonnull) JavaNioFileAccessMode *EXECUTE NS_SWIFT_NAME(EXECUTE);
#pragma mark Public

+ (JavaNioFileAccessMode *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaNioFileAccessMode_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaNioFileAccessMode)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaNioFileAccessMode *JavaNioFileAccessMode_values_[];

/*!
 @brief Test read access.
 */
inline JavaNioFileAccessMode *JavaNioFileAccessMode_get_READ(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAccessMode, READ)

/*!
 @brief Test write access.
 */
inline JavaNioFileAccessMode *JavaNioFileAccessMode_get_WRITE(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAccessMode, WRITE)

/*!
 @brief Test execute access.
 */
inline JavaNioFileAccessMode *JavaNioFileAccessMode_get_EXECUTE(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAccessMode, EXECUTE)

FOUNDATION_EXPORT IOSObjectArray *JavaNioFileAccessMode_values(void);

FOUNDATION_EXPORT JavaNioFileAccessMode *JavaNioFileAccessMode_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaNioFileAccessMode *JavaNioFileAccessMode_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAccessMode)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAccessMode")
