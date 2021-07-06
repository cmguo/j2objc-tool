//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/StringBuilder.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaLangStringBuilder")
#ifdef RESTRICT_JavaLangStringBuilder
#define INCLUDE_ALL_JavaLangStringBuilder 0
#else
#define INCLUDE_ALL_JavaLangStringBuilder 1
#endif
#undef RESTRICT_JavaLangStringBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangStringBuilder_) && (INCLUDE_ALL_JavaLangStringBuilder || defined(INCLUDE_JavaLangStringBuilder))
#define JavaLangStringBuilder_

#define RESTRICT_JavaLangAbstractStringBuilder 1
#define INCLUDE_JavaLangAbstractStringBuilder 1
#include <JRE/java/lang/AbstractStringBuilder.h>

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include <JRE/java/io/Serializable.h>

#define RESTRICT_JavaLangCharSequence 1
#define INCLUDE_JavaLangCharSequence 1
#include <JRE/java/lang/CharSequence.h>

@class IOSCharArray;
@class JavaLangStringBuffer;

/*!
 @brief A mutable sequence of characters.This class provides an API compatible
  with <code>StringBuffer</code>, but with no guarantee of synchronization.
 This class is designed for use as a drop-in replacement for 
 <code>StringBuffer</code> in places where the string buffer was being
  used by a single thread (as is generally the case).   Where possible,
  it is recommended that this class be used in preference to 
 <code>StringBuffer</code> as it will be faster under most implementations. 
 <p>The principal operations on a <code>StringBuilder</code> are the 
 <code>append</code> and <code>insert</code> methods, which are
  overloaded so as to accept data of any type. Each effectively
  converts a given datum to a string and then appends or inserts the
  characters of that string to the string builder. The 
 <code>append</code> method always adds these characters at the end
  of the builder; the <code>insert</code> method adds the characters at
  a specified point. 
 <p>
  For example, if <code>z</code> refers to a string builder object
  whose current contents are "<code>start</code>", then
  the method call <code>z.append("le")</code> would cause the string
  builder to contain "<code>startle</code>", whereas 
 <code>z.insert(4, "le")</code> would alter the string builder to
  contain "<code>starlet</code>".
  <p>
  In general, if sb refers to an instance of a <code>StringBuilder</code>,
  then <code>sb.append(x)</code> has the same effect as 
 <code>sb.insert(sb.length(), x)</code>.
  <p>
  Every string builder has a capacity. As long as the length of the
  character sequence contained in the string builder does not exceed
  the capacity, it is not necessary to allocate a new internal
  buffer. If the internal buffer overflows, it is automatically made larger. 
 <p>Instances of <code>StringBuilder</code> are not safe for
  use by multiple threads. If such synchronization is required then it is
  recommended that <code>java.lang.StringBuffer</code> be used. 
 <p>Unless otherwise noted, passing a <code>null</code> argument to a constructor
  or method in this class will cause a <code>NullPointerException</code> to be
  thrown.
 @author Michael McCloskey
 - seealso: java.lang.StringBuffer
 - seealso: java.lang.String
 @since 1.5
 */
@interface JavaLangStringBuilder : JavaLangAbstractStringBuilder < JavaIoSerializable, JavaLangCharSequence >
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Constructs a string builder with no characters in it and an
  initial capacity of 16 characters.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a string builder that contains the same characters
  as the specified <code>CharSequence</code>.The initial capacity of
  the string builder is <code>16</code> plus the length of the 
 <code>CharSequence</code> argument.
 @param seq the sequence to copy.
 */
- (instancetype __nonnull)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)seq;

/*!
 @brief Constructs a string builder with no characters in it and an
  initial capacity specified by the <code>capacity</code> argument.
 @param capacity the initial capacity.
 @throw NegativeArraySizeExceptionif the <code>capacity</code>
                argument is less than <code>0</code>.
 */
- (instancetype __nonnull)initWithInt:(jint)capacity;

/*!
 @brief Constructs a string builder initialized to the contents of the
  specified string.The initial capacity of the string builder is 
 <code>16</code> plus the length of the string argument.
 @param str the initial contents of the buffer.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)str;

- (JavaLangStringBuilder * __nonnull)appendWithBoolean:(jboolean)b;

- (JavaLangStringBuilder * __nonnull)appendWithChar:(jchar)c;

- (JavaLangStringBuilder * __nonnull)appendWithCharArray:(IOSCharArray *)str;

/*!
 @throw IndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)appendWithCharArray:(IOSCharArray *)str
                                                 withInt:(jint)offset
                                                 withInt:(jint)len;

- (JavaLangStringBuilder * __nonnull)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)s;

/*!
 @throw IndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                                            withInt:(jint)start
                                                            withInt:(jint)end;

- (JavaLangStringBuilder * __nonnull)appendWithDouble:(jdouble)d;

- (JavaLangStringBuilder * __nonnull)appendWithFloat:(jfloat)f;

- (JavaLangStringBuilder * __nonnull)appendWithInt:(jint)i;

- (JavaLangStringBuilder * __nonnull)appendWithLong:(jlong)lng;

- (JavaLangStringBuilder * __nonnull)appendWithId:(id)obj;

- (JavaLangStringBuilder * __nonnull)appendWithNSString:(NSString *)str;

/*!
 @brief Appends the specified <code>StringBuffer</code> to this sequence.
 <p>
  The characters of the <code>StringBuffer</code> argument are appended,
  in order, to this sequence, increasing the
  length of this sequence by the length of the argument.
  If <code>sb</code> is <code>null</code>, then the four characters 
 <code>"null"</code> are appended to this sequence. 
 <p>
  Let <i>n</i> be the length of this character sequence just prior to
  execution of the <code>append</code> method. Then the character at index 
 <i>k</i> in the new character sequence is equal to the character at
  index <i>k</i> in the old character sequence, if <i>k</i> is less than 
 <i>n</i>; otherwise, it is equal to the character at index <i>k-n</i>
  in the argument <code>sb</code>.
 @param sb the <code>StringBuffer</code>  to append.
 @return a reference to this object.
 */
- (JavaLangStringBuilder * __nonnull)appendWithJavaLangStringBuffer:(JavaLangStringBuffer *)sb;

/*!
 @since 1.5
 */
- (JavaLangStringBuilder * __nonnull)appendCodePointWithInt:(jint)codePoint;

/*!
 @throw StringIndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)delete__WithInt:(jint)start
                                             withInt:(jint)end;

/*!
 @throw StringIndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)deleteCharAtWithInt:(jint)index;

/*!
 @throw StringIndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)insertWithInt:(jint)offset
                                       withBoolean:(jboolean)b;

/*!
 @throw IndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)insertWithInt:(jint)offset
                                          withChar:(jchar)c;

/*!
 @throw StringIndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)insertWithInt:(jint)offset
                                     withCharArray:(IOSCharArray *)str;

/*!
 @throw StringIndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)insertWithInt:(jint)index
                                     withCharArray:(IOSCharArray *)str
                                           withInt:(jint)offset
                                           withInt:(jint)len;

/*!
 @throw IndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)insertWithInt:(jint)dstOffset
                          withJavaLangCharSequence:(id<JavaLangCharSequence>)s;

/*!
 @throw IndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)insertWithInt:(jint)dstOffset
                          withJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                           withInt:(jint)start
                                           withInt:(jint)end;

/*!
 @throw StringIndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)insertWithInt:(jint)offset
                                        withDouble:(jdouble)d;

/*!
 @throw StringIndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)insertWithInt:(jint)offset
                                         withFloat:(jfloat)f;

/*!
 @throw StringIndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)insertWithInt:(jint)offset
                                           withInt:(jint)i;

/*!
 @throw StringIndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)insertWithInt:(jint)offset
                                          withLong:(jlong)l;

/*!
 @throw StringIndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)insertWithInt:(jint)offset
                                            withId:(id)obj;

/*!
 @throw StringIndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)insertWithInt:(jint)offset
                                      withNSString:(NSString *)str;

/*!
 @throw StringIndexOutOfBoundsException
 */
- (JavaLangStringBuilder * __nonnull)replaceWithInt:(jint)start
                                            withInt:(jint)end
                                       withNSString:(NSString *)str;

- (JavaLangStringBuilder * __nonnull)reverse;

- (NSString * __nonnull)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initPackagePrivate NS_UNAVAILABLE;

- (instancetype __nonnull)initPackagePrivateWithInt:(jint)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangStringBuilder)

/*!
 @brief use serialVersionUID for interoperability
 */
inline jlong JavaLangStringBuilder_get_serialVersionUID(void);
#define JavaLangStringBuilder_serialVersionUID 4383685877147921099LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangStringBuilder, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaLangStringBuilder_init(JavaLangStringBuilder *self);

FOUNDATION_EXPORT JavaLangStringBuilder *new_JavaLangStringBuilder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringBuilder *create_JavaLangStringBuilder_init(void);

FOUNDATION_EXPORT void JavaLangStringBuilder_initWithInt_(JavaLangStringBuilder *self, jint capacity);

FOUNDATION_EXPORT JavaLangStringBuilder *new_JavaLangStringBuilder_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringBuilder *create_JavaLangStringBuilder_initWithInt_(jint capacity);

FOUNDATION_EXPORT void JavaLangStringBuilder_initWithNSString_(JavaLangStringBuilder *self, NSString *str);

FOUNDATION_EXPORT JavaLangStringBuilder *new_JavaLangStringBuilder_initWithNSString_(NSString *str) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringBuilder *create_JavaLangStringBuilder_initWithNSString_(NSString *str);

FOUNDATION_EXPORT void JavaLangStringBuilder_initWithJavaLangCharSequence_(JavaLangStringBuilder *self, id<JavaLangCharSequence> seq);

FOUNDATION_EXPORT JavaLangStringBuilder *new_JavaLangStringBuilder_initWithJavaLangCharSequence_(id<JavaLangCharSequence> seq) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringBuilder *create_JavaLangStringBuilder_initWithJavaLangCharSequence_(id<JavaLangCharSequence> seq);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangStringBuilder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangStringBuilder")
