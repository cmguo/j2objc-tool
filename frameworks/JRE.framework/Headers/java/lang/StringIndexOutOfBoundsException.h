//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/StringIndexOutOfBoundsException.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaLangStringIndexOutOfBoundsException")
#ifdef RESTRICT_JavaLangStringIndexOutOfBoundsException
#define INCLUDE_ALL_JavaLangStringIndexOutOfBoundsException 0
#else
#define INCLUDE_ALL_JavaLangStringIndexOutOfBoundsException 1
#endif
#undef RESTRICT_JavaLangStringIndexOutOfBoundsException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangStringIndexOutOfBoundsException_) && (INCLUDE_ALL_JavaLangStringIndexOutOfBoundsException || defined(INCLUDE_JavaLangStringIndexOutOfBoundsException))
#define JavaLangStringIndexOutOfBoundsException_

#define RESTRICT_JavaLangIndexOutOfBoundsException 1
#define INCLUDE_JavaLangIndexOutOfBoundsException 1
#include <JRE/java/lang/IndexOutOfBoundsException.h>

/*!
 @brief Thrown by <code>String</code> methods to indicate that an index
  is either negative or greater than the size of the string.For
  some methods such as the charAt method, this exception also is
  thrown when the index is equal to the size of the string.
 @author unascribed
 - seealso: java.lang.String#charAt(int)
 @since JDK1.0
 */
@interface JavaLangStringIndexOutOfBoundsException : JavaLangIndexOutOfBoundsException

#pragma mark Public

/*!
 @brief Constructs a <code>StringIndexOutOfBoundsException</code> with no
  detail message.
 @since JDK1.0.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a new <code>StringIndexOutOfBoundsException</code>
  class with an argument indicating the illegal index.
 @param index the illegal index.
 */
- (instancetype __nonnull)initWithInt:(jint)index;

/*!
 @brief Used internally for consistent high-quality error reporting.
 */
- (instancetype __nonnull)initWithInt:(jint)sourceLength
                              withInt:(jint)index;

/*!
 @brief Used internally for consistent high-quality error reporting.
 */
- (instancetype __nonnull)initWithInt:(jint)sourceLength
                              withInt:(jint)offset
                              withInt:(jint)count;

/*!
 @brief Constructs a <code>StringIndexOutOfBoundsException</code> with
  the specified detail message.
 @param s the detail message.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

/*!
 @brief Used internally for consistent high-quality error reporting.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s
                                   withInt:(jint)index;

/*!
 @brief Used internally for consistent high-quality error reporting.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s
                                   withInt:(jint)offset
                                   withInt:(jint)count;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangStringIndexOutOfBoundsException)

FOUNDATION_EXPORT void JavaLangStringIndexOutOfBoundsException_init(JavaLangStringIndexOutOfBoundsException *self);

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *new_JavaLangStringIndexOutOfBoundsException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *create_JavaLangStringIndexOutOfBoundsException_init(void);

FOUNDATION_EXPORT void JavaLangStringIndexOutOfBoundsException_initWithNSString_(JavaLangStringIndexOutOfBoundsException *self, NSString *s);

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *new_JavaLangStringIndexOutOfBoundsException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *create_JavaLangStringIndexOutOfBoundsException_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void JavaLangStringIndexOutOfBoundsException_initWithInt_(JavaLangStringIndexOutOfBoundsException *self, jint index);

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *new_JavaLangStringIndexOutOfBoundsException_initWithInt_(jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *create_JavaLangStringIndexOutOfBoundsException_initWithInt_(jint index);

FOUNDATION_EXPORT void JavaLangStringIndexOutOfBoundsException_initWithNSString_withInt_(JavaLangStringIndexOutOfBoundsException *self, NSString *s, jint index);

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *new_JavaLangStringIndexOutOfBoundsException_initWithNSString_withInt_(NSString *s, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *create_JavaLangStringIndexOutOfBoundsException_initWithNSString_withInt_(NSString *s, jint index);

FOUNDATION_EXPORT void JavaLangStringIndexOutOfBoundsException_initWithInt_withInt_(JavaLangStringIndexOutOfBoundsException *self, jint sourceLength, jint index);

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *new_JavaLangStringIndexOutOfBoundsException_initWithInt_withInt_(jint sourceLength, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *create_JavaLangStringIndexOutOfBoundsException_initWithInt_withInt_(jint sourceLength, jint index);

FOUNDATION_EXPORT void JavaLangStringIndexOutOfBoundsException_initWithNSString_withInt_withInt_(JavaLangStringIndexOutOfBoundsException *self, NSString *s, jint offset, jint count);

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *new_JavaLangStringIndexOutOfBoundsException_initWithNSString_withInt_withInt_(NSString *s, jint offset, jint count) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *create_JavaLangStringIndexOutOfBoundsException_initWithNSString_withInt_withInt_(NSString *s, jint offset, jint count);

FOUNDATION_EXPORT void JavaLangStringIndexOutOfBoundsException_initWithInt_withInt_withInt_(JavaLangStringIndexOutOfBoundsException *self, jint sourceLength, jint offset, jint count);

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *new_JavaLangStringIndexOutOfBoundsException_initWithInt_withInt_withInt_(jint sourceLength, jint offset, jint count) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringIndexOutOfBoundsException *create_JavaLangStringIndexOutOfBoundsException_initWithInt_withInt_withInt_(jint sourceLength, jint offset, jint count);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangStringIndexOutOfBoundsException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangStringIndexOutOfBoundsException")
