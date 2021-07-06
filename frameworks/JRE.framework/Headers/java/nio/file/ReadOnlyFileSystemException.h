//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/ReadOnlyFileSystemException.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioFileReadOnlyFileSystemException")
#ifdef RESTRICT_JavaNioFileReadOnlyFileSystemException
#define INCLUDE_ALL_JavaNioFileReadOnlyFileSystemException 0
#else
#define INCLUDE_ALL_JavaNioFileReadOnlyFileSystemException 1
#endif
#undef RESTRICT_JavaNioFileReadOnlyFileSystemException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileReadOnlyFileSystemException_) && (INCLUDE_ALL_JavaNioFileReadOnlyFileSystemException || defined(INCLUDE_JavaNioFileReadOnlyFileSystemException))
#define JavaNioFileReadOnlyFileSystemException_

#define RESTRICT_JavaLangUnsupportedOperationException 1
#define INCLUDE_JavaLangUnsupportedOperationException 1
#include <JRE/java/lang/UnsupportedOperationException.h>

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when an attempt is made to update an object
  associated with a <code>read-only</code> <code>FileSystem</code>.
 */
@interface JavaNioFileReadOnlyFileSystemException : JavaLangUnsupportedOperationException
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype __nonnull)init;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileReadOnlyFileSystemException)

inline jlong JavaNioFileReadOnlyFileSystemException_get_serialVersionUID(void);
#define JavaNioFileReadOnlyFileSystemException_serialVersionUID -6822409595617487197LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioFileReadOnlyFileSystemException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaNioFileReadOnlyFileSystemException_init(JavaNioFileReadOnlyFileSystemException *self);

FOUNDATION_EXPORT JavaNioFileReadOnlyFileSystemException *new_JavaNioFileReadOnlyFileSystemException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioFileReadOnlyFileSystemException *create_JavaNioFileReadOnlyFileSystemException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileReadOnlyFileSystemException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileReadOnlyFileSystemException")
