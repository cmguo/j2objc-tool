//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/CharSequence.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaLangCharSequence")
#ifdef RESTRICT_JavaLangCharSequence
#define INCLUDE_ALL_JavaLangCharSequence 0
#else
#define INCLUDE_ALL_JavaLangCharSequence 1
#endif
#undef RESTRICT_JavaLangCharSequence

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangCharSequence_) && (INCLUDE_ALL_JavaLangCharSequence || defined(INCLUDE_JavaLangCharSequence))
#define JavaLangCharSequence_

@protocol JavaUtilStreamIntStream;

/*!
 @brief A <tt>CharSequence</tt> is a readable sequence of <code>char</code> values.This
  interface provides uniform, read-only access to many different kinds of 
 <code>char</code> sequences.
 A <code>char</code> value represents a character in the <i>Basic
  Multilingual Plane (BMP)</i> or a surrogate. Refer to <a href="Character.html#unicode">
 Unicode Character Representation</a> for details. 
 <p> This interface does not refine the general contracts of the <code>equals</code>
  and <code>hashCode</code>
  methods.  The result of comparing two
  objects that implement <tt>CharSequence</tt> is therefore, in general,
  undefined.  Each object may be implemented by a different class, and there
  is no guarantee that each class will be capable of testing its instances
  for equality with those of the other.  It is therefore inappropriate to use
  arbitrary <tt>CharSequence</tt> instances as elements in a set or as keys in
  a map. </p>
 @author Mike McCloskey
 @since 1.4
 */
@protocol JavaLangCharSequence < JavaObject >

/*!
 @brief Returns the length of this character sequence.The length is the number
  of 16-bit <code>char</code>s in the sequence.
 @return the number of <code>char</code>s in this sequence
 */
- (jint)java_length;

/*!
 @brief Returns the <code>char</code> value at the specified index.An index ranges from zero
  to <tt>length() - 1</tt>.
 The first <code>char</code> value of the sequence is at
  index zero, the next at index one, and so on, as for array
  indexing. 
 <p>If the <code>char</code> value specified by the index is a 
 <a href="{@@docRoot}/java/lang/Character.html#unicode">surrogate</a>, the surrogate
  value is returned.
 @param index the index of the  <code> char </code>  value to be returned
 @return the specified <code>char</code> value
 @throw IndexOutOfBoundsException
 if the <tt>index</tt> argument is negative or not less than
           <tt>length()</tt>
 */
- (jchar)charAtWithInt:(jint)index;

/*!
 @brief Returns a <code>CharSequence</code> that is a subsequence of this sequence.
 The subsequence starts with the <code>char</code> value at the specified index and
  ends with the <code>char</code> value at index <tt>end - 1</tt>.  The length
  (in <code>char</code>s) of the
  returned sequence is <tt>end - start</tt>, so if <tt>start == end</tt>
  then an empty sequence is returned.
 @param start the start index, inclusive
 @param end the end index, exclusive
 @return the specified subsequence
 @throw IndexOutOfBoundsException
 if <tt>start</tt> or <tt>end</tt> are negative,
           if <tt>end</tt> is greater than <tt>length()</tt>,
           or if <tt>start</tt> is greater than <tt>end</tt>
 */
- (id<JavaLangCharSequence> __nonnull)subSequenceFrom:(jint)start
                                                   to:(jint)end;

/*!
 @brief Returns a string containing the characters in this sequence in the same
  order as this sequence.The length of the string will be the length of
  this sequence.
 @return a string consisting of exactly this sequence of characters
 */
- (NSString * __nonnull)description;

/*!
 @brief Returns a stream of <code>int</code> zero-extending the <code>char</code> values
  from this sequence.Any char which maps to a <a href="{@@docRoot}/java/lang/Character.html#unicode">
 surrogate code
  point</a> is passed through uninterpreted.
 <p>If the sequence is mutated while the stream is being read, the
  result is undefined.
 @return an IntStream of char values from this sequence
 @since 1.8
 */
- (id<JavaUtilStreamIntStream> __nonnull)chars;

/*!
 @brief Returns a stream of code point values from this sequence.Any surrogate
  pairs encountered in the sequence are combined as if by Character.toCodePoint
  and the result is passed
  to the stream.
 Any other code units, including ordinary BMP characters,
  unpaired surrogates, and undefined code units, are zero-extended to 
 <code>int</code> values which are then passed to the stream. 
 <p>If the sequence is mutated while the stream is being read, the result
  is undefined.
 @return an IntStream of Unicode code points from this sequence
 @since 1.8
 */
- (id<JavaUtilStreamIntStream> __nonnull)codePoints;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangCharSequence)

FOUNDATION_EXPORT id<JavaUtilStreamIntStream> JavaLangCharSequence_chars(id<JavaLangCharSequence> self);

FOUNDATION_EXPORT id<JavaUtilStreamIntStream> JavaLangCharSequence_codePoints(id<JavaLangCharSequence> self);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangCharSequence)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangCharSequence")
