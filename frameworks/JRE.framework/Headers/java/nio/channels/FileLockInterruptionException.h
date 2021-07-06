//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/FileLockInterruptionException.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsFileLockInterruptionException")
#ifdef RESTRICT_JavaNioChannelsFileLockInterruptionException
#define INCLUDE_ALL_JavaNioChannelsFileLockInterruptionException 0
#else
#define INCLUDE_ALL_JavaNioChannelsFileLockInterruptionException 1
#endif
#undef RESTRICT_JavaNioChannelsFileLockInterruptionException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioChannelsFileLockInterruptionException_) && (INCLUDE_ALL_JavaNioChannelsFileLockInterruptionException || defined(INCLUDE_JavaNioChannelsFileLockInterruptionException))
#define JavaNioChannelsFileLockInterruptionException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include <JRE/java/io/IOException.h>

@class JavaLangThrowable;

/*!
 @brief Checked exception received by a thread when another thread interrupts it
  while it is waiting to acquire a file lock.Before this exception is thrown
  the interrupt status of the previously-blocked thread will have been set.
 @since 1.4
 */
@interface JavaNioChannelsFileLockInterruptionException : JavaIoIOException

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

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsFileLockInterruptionException)

FOUNDATION_EXPORT void JavaNioChannelsFileLockInterruptionException_init(JavaNioChannelsFileLockInterruptionException *self);

FOUNDATION_EXPORT JavaNioChannelsFileLockInterruptionException *new_JavaNioChannelsFileLockInterruptionException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsFileLockInterruptionException *create_JavaNioChannelsFileLockInterruptionException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsFileLockInterruptionException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsFileLockInterruptionException")
