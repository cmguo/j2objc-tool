//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/UnsupportedOperationException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangUnsupportedOperationException")
#ifdef RESTRICT_JavaLangUnsupportedOperationException
#define INCLUDE_ALL_JavaLangUnsupportedOperationException 0
#else
#define INCLUDE_ALL_JavaLangUnsupportedOperationException 1
#endif
#undef RESTRICT_JavaLangUnsupportedOperationException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangUnsupportedOperationException_) && (INCLUDE_ALL_JavaLangUnsupportedOperationException || defined(INCLUDE_JavaLangUnsupportedOperationException))
#define JavaLangUnsupportedOperationException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class JavaLangThrowable;

/*!
 @brief Thrown to indicate that the requested operation is not supported.
 <p>
  This class is a member of the 
 <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/collections/index.html">
  Java Collections Framework</a>.
 @author Josh Bloch
 @since 1.2
 */
@interface JavaLangUnsupportedOperationException : JavaLangRuntimeException
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Constructs an UnsupportedOperationException with no detail message.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs an UnsupportedOperationException with the specified
  detail message.
 @param message the detail message
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

/*!
 @brief Constructs a new exception with the specified detail message and
  cause.
 <p>Note that the detail message associated with <code>cause</code> is 
 <i>not</i> automatically incorporated in this exception's detail
  message.
 @param message the detail message (which is saved for later retrieval          by the 
 <code>Throwable.getMessage()</code>  method).
 @param cause the cause (which is saved for later retrieval by the          
 <code>Throwable.getCause()</code>  method).  (A  <tt> null </tt>  value          is permitted, and indicates that the cause is nonexistent or
           unknown.)
 @since 1.5
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a new exception with the specified cause and a detail
  message of <tt>(cause==null ?
 null : cause.toString())</tt> (which
  typically contains the class and detail message of <tt>cause</tt>).
 This constructor is useful for exceptions that are little more than
  wrappers for other throwables (for example, <code>java.security.PrivilegedActionException</code>
 ).
 @param cause the cause (which is saved for later retrieval by the          
 <code>Throwable.getCause()</code>  method).  (A  <tt> null </tt>  value is          permitted, and indicates that the cause is nonexistent or
           unknown.)
 @since 1.5
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangUnsupportedOperationException)

inline jlong JavaLangUnsupportedOperationException_get_serialVersionUID(void);
#define JavaLangUnsupportedOperationException_serialVersionUID -1242599979055084673LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangUnsupportedOperationException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaLangUnsupportedOperationException_init(JavaLangUnsupportedOperationException *self);

FOUNDATION_EXPORT JavaLangUnsupportedOperationException *new_JavaLangUnsupportedOperationException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangUnsupportedOperationException *create_JavaLangUnsupportedOperationException_init(void);

FOUNDATION_EXPORT void JavaLangUnsupportedOperationException_initWithNSString_(JavaLangUnsupportedOperationException *self, NSString *message);

FOUNDATION_EXPORT JavaLangUnsupportedOperationException *new_JavaLangUnsupportedOperationException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangUnsupportedOperationException *create_JavaLangUnsupportedOperationException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaLangUnsupportedOperationException_initWithNSString_withJavaLangThrowable_(JavaLangUnsupportedOperationException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangUnsupportedOperationException *new_JavaLangUnsupportedOperationException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangUnsupportedOperationException *create_JavaLangUnsupportedOperationException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaLangUnsupportedOperationException_initWithJavaLangThrowable_(JavaLangUnsupportedOperationException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangUnsupportedOperationException *new_JavaLangUnsupportedOperationException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangUnsupportedOperationException *create_JavaLangUnsupportedOperationException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangUnsupportedOperationException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangUnsupportedOperationException")
