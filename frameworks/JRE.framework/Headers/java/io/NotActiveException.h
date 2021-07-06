//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/NotActiveException.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaIoNotActiveException")
#ifdef RESTRICT_JavaIoNotActiveException
#define INCLUDE_ALL_JavaIoNotActiveException 0
#else
#define INCLUDE_ALL_JavaIoNotActiveException 1
#endif
#undef RESTRICT_JavaIoNotActiveException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoNotActiveException_) && (INCLUDE_ALL_JavaIoNotActiveException || defined(INCLUDE_JavaIoNotActiveException))
#define JavaIoNotActiveException_

#define RESTRICT_JavaIoObjectStreamException 1
#define INCLUDE_JavaIoObjectStreamException 1
#include <JRE/java/io/ObjectStreamException.h>

/*!
 @brief Thrown when serialization or deserialization is not active.
 @author unascribed
 @since JDK1.1
 */
@interface JavaIoNotActiveException : JavaIoObjectStreamException

#pragma mark Public

/*!
 @brief Constructor to create a new NotActiveException without a reason.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructor to create a new NotActiveException with the reason given.
 @param reason a String describing the reason for the exception.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoNotActiveException)

FOUNDATION_EXPORT void JavaIoNotActiveException_initWithNSString_(JavaIoNotActiveException *self, NSString *reason);

FOUNDATION_EXPORT JavaIoNotActiveException *new_JavaIoNotActiveException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoNotActiveException *create_JavaIoNotActiveException_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaIoNotActiveException_init(JavaIoNotActiveException *self);

FOUNDATION_EXPORT JavaIoNotActiveException *new_JavaIoNotActiveException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoNotActiveException *create_JavaIoNotActiveException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoNotActiveException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoNotActiveException")
