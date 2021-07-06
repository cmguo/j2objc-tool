//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/logging/ErrorManager.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaUtilLoggingErrorManager")
#ifdef RESTRICT_JavaUtilLoggingErrorManager
#define INCLUDE_ALL_JavaUtilLoggingErrorManager 0
#else
#define INCLUDE_ALL_JavaUtilLoggingErrorManager 1
#endif
#undef RESTRICT_JavaUtilLoggingErrorManager

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilLoggingErrorManager_) && (INCLUDE_ALL_JavaUtilLoggingErrorManager || defined(INCLUDE_JavaUtilLoggingErrorManager))
#define JavaUtilLoggingErrorManager_

@class JavaLangException;

/*!
 @brief ErrorManager objects can be attached to Handlers to process
  any error that occurs on a Handler during Logging.
 <p>
  When processing logging output, if a Handler encounters problems
  then rather than throwing an Exception back to the issuer of
  the logging call (who is unlikely to be interested) the Handler
  should call its associated ErrorManager.
 */
@interface JavaUtilLoggingErrorManager : NSObject
@property (readonly, class) jint GENERIC_FAILURE NS_SWIFT_NAME(GENERIC_FAILURE);
@property (readonly, class) jint WRITE_FAILURE NS_SWIFT_NAME(WRITE_FAILURE);
@property (readonly, class) jint FLUSH_FAILURE NS_SWIFT_NAME(FLUSH_FAILURE);
@property (readonly, class) jint CLOSE_FAILURE NS_SWIFT_NAME(CLOSE_FAILURE);
@property (readonly, class) jint OPEN_FAILURE NS_SWIFT_NAME(OPEN_FAILURE);
@property (readonly, class) jint FORMAT_FAILURE NS_SWIFT_NAME(FORMAT_FAILURE);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief The error method is called when a Handler failure occurs.
 <p>
  This method may be overridden in subclasses.  The default
  behavior in this base class is that the first call is
  reported to System.err, and subsequent calls are ignored.
 @param msg a descriptive string (may be null)
 @param ex an exception (may be null)
 @param code an error code defined in ErrorManager
 */
- (void)errorWithNSString:(NSString *)msg
    withJavaLangException:(JavaLangException *)ex
                  withInt:(jint)code;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingErrorManager)

/*!
 @brief GENERIC_FAILURE is used for failure that don't fit
  into one of the other categories.
 */
inline jint JavaUtilLoggingErrorManager_get_GENERIC_FAILURE(void);
#define JavaUtilLoggingErrorManager_GENERIC_FAILURE 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilLoggingErrorManager, GENERIC_FAILURE, jint)

/*!
 @brief WRITE_FAILURE is used when a write to an output stream fails.
 */
inline jint JavaUtilLoggingErrorManager_get_WRITE_FAILURE(void);
#define JavaUtilLoggingErrorManager_WRITE_FAILURE 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilLoggingErrorManager, WRITE_FAILURE, jint)

/*!
 @brief FLUSH_FAILURE is used when a flush to an output stream fails.
 */
inline jint JavaUtilLoggingErrorManager_get_FLUSH_FAILURE(void);
#define JavaUtilLoggingErrorManager_FLUSH_FAILURE 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilLoggingErrorManager, FLUSH_FAILURE, jint)

/*!
 @brief CLOSE_FAILURE is used when a close of an output stream fails.
 */
inline jint JavaUtilLoggingErrorManager_get_CLOSE_FAILURE(void);
#define JavaUtilLoggingErrorManager_CLOSE_FAILURE 3
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilLoggingErrorManager, CLOSE_FAILURE, jint)

/*!
 @brief OPEN_FAILURE is used when an open of an output stream fails.
 */
inline jint JavaUtilLoggingErrorManager_get_OPEN_FAILURE(void);
#define JavaUtilLoggingErrorManager_OPEN_FAILURE 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilLoggingErrorManager, OPEN_FAILURE, jint)

/*!
 @brief FORMAT_FAILURE is used when formatting fails for any reason.
 */
inline jint JavaUtilLoggingErrorManager_get_FORMAT_FAILURE(void);
#define JavaUtilLoggingErrorManager_FORMAT_FAILURE 5
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilLoggingErrorManager, FORMAT_FAILURE, jint)

FOUNDATION_EXPORT void JavaUtilLoggingErrorManager_init(JavaUtilLoggingErrorManager *self);

FOUNDATION_EXPORT JavaUtilLoggingErrorManager *new_JavaUtilLoggingErrorManager_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingErrorManager *create_JavaUtilLoggingErrorManager_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingErrorManager)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilLoggingErrorManager")
