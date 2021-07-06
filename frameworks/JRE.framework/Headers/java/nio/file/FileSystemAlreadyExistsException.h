//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/FileSystemAlreadyExistsException.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioFileFileSystemAlreadyExistsException")
#ifdef RESTRICT_JavaNioFileFileSystemAlreadyExistsException
#define INCLUDE_ALL_JavaNioFileFileSystemAlreadyExistsException 0
#else
#define INCLUDE_ALL_JavaNioFileFileSystemAlreadyExistsException 1
#endif
#undef RESTRICT_JavaNioFileFileSystemAlreadyExistsException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileFileSystemAlreadyExistsException_) && (INCLUDE_ALL_JavaNioFileFileSystemAlreadyExistsException || defined(INCLUDE_JavaNioFileFileSystemAlreadyExistsException))
#define JavaNioFileFileSystemAlreadyExistsException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include <JRE/java/lang/RuntimeException.h>

@class JavaLangThrowable;

/*!
 @brief Runtime exception thrown when an attempt is made to create a file system that
  already exists.
 */
@interface JavaNioFileFileSystemAlreadyExistsException : JavaLangRuntimeException
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an instance of this class.
 @param msg the detail message
 */
- (instancetype __nonnull)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileFileSystemAlreadyExistsException)

inline jlong JavaNioFileFileSystemAlreadyExistsException_get_serialVersionUID(void);
#define JavaNioFileFileSystemAlreadyExistsException_serialVersionUID -5438419127181131148LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioFileFileSystemAlreadyExistsException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaNioFileFileSystemAlreadyExistsException_init(JavaNioFileFileSystemAlreadyExistsException *self);

FOUNDATION_EXPORT JavaNioFileFileSystemAlreadyExistsException *new_JavaNioFileFileSystemAlreadyExistsException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioFileFileSystemAlreadyExistsException *create_JavaNioFileFileSystemAlreadyExistsException_init(void);

FOUNDATION_EXPORT void JavaNioFileFileSystemAlreadyExistsException_initWithNSString_(JavaNioFileFileSystemAlreadyExistsException *self, NSString *msg);

FOUNDATION_EXPORT JavaNioFileFileSystemAlreadyExistsException *new_JavaNioFileFileSystemAlreadyExistsException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioFileFileSystemAlreadyExistsException *create_JavaNioFileFileSystemAlreadyExistsException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileFileSystemAlreadyExistsException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileFileSystemAlreadyExistsException")
