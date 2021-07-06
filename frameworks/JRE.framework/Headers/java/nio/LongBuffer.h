//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/LongBuffer.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioLongBuffer")
#ifdef RESTRICT_JavaNioLongBuffer
#define INCLUDE_ALL_JavaNioLongBuffer 0
#else
#define INCLUDE_ALL_JavaNioLongBuffer 1
#endif
#undef RESTRICT_JavaNioLongBuffer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioLongBuffer_) && (INCLUDE_ALL_JavaNioLongBuffer || defined(INCLUDE_JavaNioLongBuffer))
#define JavaNioLongBuffer_

#define RESTRICT_JavaNioBuffer 1
#define INCLUDE_JavaNioBuffer 1
#include <JRE/java/nio/Buffer.h>

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include <JRE/java/lang/Comparable.h>

@class IOSLongArray;
@class JavaNioByteOrder;

/*!
 @brief A long buffer.
 <p> This class defines four categories of operations upon
  long buffers: 
 <ul>
    <li><p> Absolute and relative <code><i>get</i></code> and
    <code><i>put</i></code> methods that read and write
    single longs; </p></li>
    <li><p> Relative <code><i>bulk get</i></code>
    methods that transfer contiguous sequences of longs from this buffer
    into an array; and</p></li>
    <li><p> Relative <code><i>bulk put</i></code>
    methods that transfer contiguous sequences of longs from a
    long array or some other long
    buffer into this buffer;&#32;and </p></li>
    <li><p> Methods for <code>compacting</code>, <code>duplicating</code>
 , and <code>slicing</code>
    a long buffer.  </p></li>
  
 </ul>
  
 <p> Long buffers can be created either by <code><i>allocation</i></code>
 , which allocates space for the buffer's
  content, by <code><i>wrapping</i></code> an existing
  long array  into a buffer, or by creating a 
 <a href="ByteBuffer.html#views"><i>view</i></a> of an existing byte buffer. 
 <p> Like a byte buffer, a long buffer is either <a href="ByteBuffer.html#direct">
 <i>direct</i> or <i>non-direct</i></a>.  A
  long buffer created via the <tt>wrap</tt> methods of this class will
  be non-direct.  A long buffer created as a view of a byte buffer will
  be direct if, and only if, the byte buffer itself is direct.  Whether or not
  a long buffer is direct may be determined by invoking the <code>isDirect</code>
  method.  </p>
  
 <p> Methods in this class that do not otherwise have a value to return are
  specified to return the buffer upon which they are invoked.  This allows
  method invocations to be chained.
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 */
@interface JavaNioLongBuffer : JavaNioBuffer < JavaLangComparable > {
 @public
  IOSLongArray *hb_;
  jint offset_;
  jboolean isReadOnly_;
}

#pragma mark Public

/*!
 @brief Allocates a new long buffer.
 <p> The new buffer's position will be zero, its limit will be its
  capacity, its mark will be undefined, and each of its elements will be
  initialized to zero.  It will have a <code>backing array</code>,
  and its <code>array offset</code> will be zero.
 @param capacity The new buffer's capacity, in longs
 @return The new long buffer
 @throw IllegalArgumentException
 If the <tt>capacity</tt> is a negative integer
 */
+ (JavaNioLongBuffer *)allocateWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns the long array that backs this
  buffer&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> Modifications to this buffer's content will cause the returned
  array's content to be modified, and vice versa. 
 <p> Invoke the <code>hasArray</code> method before invoking this
  method in order to ensure that this buffer has an accessible backing
  array.  </p>
 @return The array that backs this buffer
 @throw ReadOnlyBufferException
 If this buffer is backed by an array but is read-only
 @throw UnsupportedOperationException
 If this buffer is not backed by an accessible array
 */
- (IOSLongArray *)array;

/*!
 @brief Returns the offset within this buffer's backing array of the first
  element of the buffer&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> If this buffer is backed by an array then buffer position <i>p</i>
  corresponds to array index <i>p</i>&nbsp;+&nbsp;<tt>arrayOffset()</tt>.
  
 <p> Invoke the <code>hasArray</code> method before invoking this
  method in order to ensure that this buffer has an accessible backing
  array.  </p>
 @return The offset within this buffer's array
           of the first element of the buffer
 @throw ReadOnlyBufferException
 If this buffer is backed by an array but is read-only
 @throw UnsupportedOperationException
 If this buffer is not backed by an accessible array
 */
- (jint)arrayOffset;

/*!
 @brief Creates a new, read-only long buffer that shares this buffer's
  content.
 <p> The content of the new buffer will be that of this buffer.  Changes
  to this buffer's content will be visible in the new buffer; the new
  buffer itself, however, will be read-only and will not allow the shared
  content to be modified.  The two buffers' position, limit, and mark
  values will be independent. 
 <p> The new buffer's capacity, limit, position, and mark values will be
  identical to those of this buffer. 
 <p> If this buffer is itself read-only then this method behaves in
  exactly the same way as the <code>duplicate</code> method.  </p>
 @return The new, read-only long buffer
 */
- (JavaNioLongBuffer *)asReadOnlyBuffer;

- (JavaNioBuffer *)clear;

/*!
 @brief Compacts this buffer&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> The longs between the buffer's current position and its limit,
  if any, are copied to the beginning of the buffer.  That is, the
  long at index <i>p</i>&nbsp;=&nbsp;<tt>position()</tt> is copied
  to index zero, the long at index <i>p</i>&nbsp;+&nbsp;1 is copied
  to index one, and so forth until the long at index 
 <tt>limit()</tt>&nbsp;-&nbsp;1 is copied to index 
 <i>n</i>&nbsp;=&nbsp;<tt>limit()</tt>&nbsp;-&nbsp;<tt>1</tt>&nbsp;-&nbsp;<i>p</i>.
  The buffer's position is then set to <i>n+1</i> and its limit is set to
  its capacity.  The mark, if defined, is discarded. 
 <p> The buffer's position is set to the number of longs copied,
  rather than to zero, so that an invocation of this method can be
  followed immediately by an invocation of another relative <i>put</i>
  method. </p>
 @return This buffer
 @throw ReadOnlyBufferException
 If this buffer is read-only
 */
- (JavaNioLongBuffer *)compact;

/*!
 @brief Compares this buffer to another.
 <p> Two long buffers are compared by comparing their sequences of
  remaining elements lexicographically, without regard to the starting
  position of each sequence within its corresponding buffer.
  Pairs of <code>long</code> elements are compared as if by invoking 
 <code>Long.compare(long,long)</code>.
  
 <p> A long buffer is not comparable to any other type of object.
 @return A negative integer, zero, or a positive integer as this buffer
           is less than, equal to, or greater than the given buffer
 */
- (jint)compareToWithId:(JavaNioLongBuffer *)that;

/*!
 @brief Creates a new long buffer that shares this buffer's content.
 <p> The content of the new buffer will be that of this buffer.  Changes
  to this buffer's content will be visible in the new buffer, and vice
  versa; the two buffers' position, limit, and mark values will be
  independent. 
 <p> The new buffer's capacity, limit, position, and mark values will be
  identical to those of this buffer.  The new buffer will be direct if,
  and only if, this buffer is direct, and it will be read-only if, and
  only if, this buffer is read-only.  </p>
 @return The new long buffer
 */
- (JavaNioLongBuffer *)duplicate;

/*!
 @brief Tells whether or not this buffer is equal to another object.
 <p> Two long buffers are equal if, and only if, 
 <ol>
    
 <li><p> They have the same element type,  </p></li>
    
 <li><p> They have the same number of remaining elements, and
    </p></li>
    
 <li><p> The two sequences of remaining elements, considered
    independently of their starting positions, are pointwise equal.   
 </p></li>
  
 </ol>
  
 <p> A long buffer is not equal to any other type of object.  </p>
 @param ob The object to which this buffer is to be compared
 @return <tt>true</tt> if, and only if, this buffer is equal to the
            given object
 */
- (jboolean)isEqual:(id)ob;

- (JavaNioBuffer *)flip;

/*!
 @brief Relative <i>get</i> method.Reads the long at this buffer's
  current position, and then increments the position.
 @return The long at the buffer's current position
 @throw BufferUnderflowException
 If the buffer's current position is not smaller than its limit
 */
- (jlong)get;

/*!
 @brief Absolute <i>get</i> method.Reads the long at the given
  index.
 @param index The index from which the long will be read
 @return The long at the given index
 @throw IndexOutOfBoundsException
 If <tt>index</tt> is negative
           or not smaller than the buffer's limit
 */
- (jlong)getWithInt:(jint)index;

/*!
 @brief Relative bulk <i>get</i> method.
 <p> This method transfers longs from this buffer into the given
  destination array.  An invocation of this method of the form 
 <tt>src.get(a)</tt> behaves in exactly the same way as the invocation 
 @code

      src.get(a, 0, a.length) 
@endcode
 @param dst The destination array
 @return This buffer
 @throw BufferUnderflowException
 If there are fewer than <tt>length</tt> longs
           remaining in this buffer
 */
- (JavaNioLongBuffer *)getWithLongArray:(IOSLongArray *)dst;

/*!
 @brief Relative bulk <i>get</i> method.
 <p> This method transfers longs from this buffer into the given
  destination array.  If there are fewer longs remaining in the
  buffer than are required to satisfy the request, that is, if 
 <tt>length</tt>&nbsp;<tt>&gt;</tt>&nbsp;<tt>remaining()</tt>, then no
  longs are transferred and a <code>BufferUnderflowException</code> is
  thrown. 
 <p> Otherwise, this method copies <tt>length</tt> longs from this
  buffer into the given array, starting at the current position of this
  buffer and at the given offset in the array.  The position of this
  buffer is then incremented by <tt>length</tt>.
  
 <p> In other words, an invocation of this method of the form 
 <tt>src.get(dst,&nbsp;off,&nbsp;len)</tt> has exactly the same effect as
  the loop 
 @code
    for (int i = off; i < off + len; i++)
          dst[i] = src.get(); 
 
@endcode
  except that it first checks that there are sufficient longs in
  this buffer and it is potentially much more efficient.
 @param dst The array into which longs are to be written
 @param offset The offset within the array of the first long to be
           written; must be non-negative and no larger than
            <tt> dst.length
  </tt>
 @param length The maximum number of longs to be written to the given
           array; must be non-negative and no larger than
            <tt> dst.length - offset
  </tt>
 @return This buffer
 @throw BufferUnderflowException
 If there are fewer than <tt>length</tt> longs
           remaining in this buffer
 @throw IndexOutOfBoundsException
 If the preconditions on the <tt>offset</tt> and <tt>length</tt>
           parameters do not hold
 */
- (JavaNioLongBuffer *)getWithLongArray:(IOSLongArray *)dst
                                withInt:(jint)offset
                                withInt:(jint)length;

/*!
 @brief Tells whether or not this buffer is backed by an accessible long
  array.
 <p> If this method returns <tt>true</tt> then the <code>array</code>
  and <code>arrayOffset</code> methods may safely be invoked. 
 </p>
 @return <tt>true</tt> if, and only if, this buffer
           is backed by an array and is not read-only
 */
- (jboolean)hasArray;

/*!
 @brief Returns the current hash code of this buffer.
 <p> The hash code of a long buffer depends only upon its remaining
  elements; that is, upon the elements from <tt>position()</tt> up to, and
  including, the element at <tt>limit()</tt>&nbsp;-&nbsp;<tt>1</tt>.
  
 <p> Because buffer hash codes are content-dependent, it is inadvisable
  to use buffers as keys in hash maps or similar data structures unless it
  is known that their contents will not change.  </p>
 @return The current hash code of this buffer
 */
- (NSUInteger)hash;

/*!
 @brief Tells whether or not this long buffer is direct.
 @return <tt>true</tt> if, and only if, this buffer is direct
 */
- (jboolean)isDirect;

- (JavaNioBuffer *)limitWithInt:(jint)newLimit;

- (JavaNioBuffer *)mark;

/*!
 @brief Retrieves this buffer's byte order.
 <p> The byte order of a long buffer created by allocation or by
  wrapping an existing <tt>long</tt> array is the <code>native order</code>
  of the underlying
  hardware.  The byte order of a long buffer created as a <a href="ByteBuffer.html#views">
 view</a> of a byte buffer is that of the
  byte buffer at the moment that the view is created.  </p>
 @return This buffer's byte order
 */
- (JavaNioByteOrder *)order;

- (JavaNioBuffer *)positionWithInt:(jint)newPosition;

/*!
 @brief Absolute <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> Writes the given long into this buffer at the given
  index. </p>
 @param index The index at which the long will be written
 @param l The long value to be written
 @return This buffer
 @throw IndexOutOfBoundsException
 If <tt>index</tt> is negative
           or not smaller than the buffer's limit
 @throw ReadOnlyBufferException
 If this buffer is read-only
 */
- (JavaNioLongBuffer *)putWithInt:(jint)index
                         withLong:(jlong)l;

/*!
 @brief Relative <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> Writes the given long into this buffer at the current
  position, and then increments the position. </p>
 @param l The long to be written
 @return This buffer
 @throw BufferOverflowException
 If this buffer's current position is not smaller than its limit
 @throw ReadOnlyBufferException
 If this buffer is read-only
 */
- (JavaNioLongBuffer *)putWithLong:(jlong)l;

/*!
 @brief Relative bulk <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> This method transfers the entire content of the given source
  long array into this buffer.  An invocation of this method of the
  form <tt>dst.put(a)</tt> behaves in exactly the same way as the
  invocation 
 @code

      dst.put(a, 0, a.length) 
@endcode
 @param src The source array
 @return This buffer
 @throw BufferOverflowException
 If there is insufficient space in this buffer
 @throw ReadOnlyBufferException
 If this buffer is read-only
 */
- (JavaNioLongBuffer *)putWithLongArray:(IOSLongArray *)src;

/*!
 @brief Relative bulk <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> This method transfers longs into this buffer from the given
  source array.  If there are more longs to be copied from the array
  than remain in this buffer, that is, if 
 <tt>length</tt>&nbsp;<tt>&gt;</tt>&nbsp;<tt>remaining()</tt>, then no
  longs are transferred and a <code>BufferOverflowException</code> is
  thrown. 
 <p> Otherwise, this method copies <tt>length</tt> longs from the
  given array into this buffer, starting at the given offset in the array
  and at the current position of this buffer.  The position of this buffer
  is then incremented by <tt>length</tt>.
  
 <p> In other words, an invocation of this method of the form 
 <tt>dst.put(src,&nbsp;off,&nbsp;len)</tt> has exactly the same effect as
  the loop 
 @code
    for (int i = off; i < off + len; i++)
          dst.put(a[i]); 
 
@endcode
  except that it first checks that there is sufficient space in this
  buffer and it is potentially much more efficient.
 @param src The array from which longs are to be read
 @param offset The offset within the array of the first long to be read;
           must be non-negative and no larger than 
  <tt> array.length </tt>
 @param length The number of longs to be read from the given array;
           must be non-negative and no larger than
            <tt> array.length - offset
  </tt>
 @return This buffer
 @throw BufferOverflowException
 If there is insufficient space in this buffer
 @throw IndexOutOfBoundsException
 If the preconditions on the <tt>offset</tt> and <tt>length</tt>
           parameters do not hold
 @throw ReadOnlyBufferException
 If this buffer is read-only
 */
- (JavaNioLongBuffer *)putWithLongArray:(IOSLongArray *)src
                                withInt:(jint)offset
                                withInt:(jint)length;

/*!
 @brief Relative bulk <i>put</i> method&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> This method transfers the longs remaining in the given source
  buffer into this buffer.  If there are more longs remaining in the
  source buffer than in this buffer, that is, if 
 <tt>src.remaining()</tt>&nbsp;<tt>&gt;</tt>&nbsp;<tt>remaining()</tt>,
  then no longs are transferred and a <code>BufferOverflowException</code>
  is thrown. 
 <p> Otherwise, this method copies 
 <i>n</i>&nbsp;=&nbsp;<tt>src.remaining()</tt> longs from the given
  buffer into this buffer, starting at each buffer's current position.
  The positions of both buffers are then incremented by <i>n</i>.
  
 <p> In other words, an invocation of this method of the form 
 <tt>dst.put(src)</tt> has exactly the same effect as the loop 
 @code

      while (src.hasRemaining())
          dst.put(src.get()); 
@endcode
  except that it first checks that there is sufficient space in this
  buffer and it is potentially much more efficient.
 @param src The source buffer from which longs are to be read;
           must not be this buffer
 @return This buffer
 @throw BufferOverflowException
 If there is insufficient space in this buffer
           for the remaining longs in the source buffer
 @throw IllegalArgumentException
 If the source buffer is this buffer
 @throw ReadOnlyBufferException
 If this buffer is read-only
 */
- (JavaNioLongBuffer *)putWithJavaNioLongBuffer:(JavaNioLongBuffer *)src;

- (JavaNioBuffer *)reset;

- (JavaNioBuffer *)rewind;

/*!
 @brief Creates a new long buffer whose content is a shared subsequence of
  this buffer's content.
 <p> The content of the new buffer will start at this buffer's current
  position.  Changes to this buffer's content will be visible in the new
  buffer, and vice versa; the two buffers' position, limit, and mark
  values will be independent. 
 <p> The new buffer's position will be zero, its capacity and its limit
  will be the number of longs remaining in this buffer, and its mark
  will be undefined.  The new buffer will be direct if, and only if, this
  buffer is direct, and it will be read-only if, and only if, this buffer
  is read-only.  </p>
 @return The new long buffer
 */
- (JavaNioLongBuffer *)slice;

/*!
 @brief Returns a string summarizing the state of this buffer.
 @return A summary string
 */
- (NSString *)description;

/*!
 @brief Wraps a long array into a buffer.
 <p> The new buffer will be backed by the given long array;
  that is, modifications to the buffer will cause the array to be modified
  and vice versa.  The new buffer's capacity and limit will be 
 <tt>array.length</tt>, its position will be zero, and its mark will be
  undefined.  Its <code>backing array</code> will be the
  given array, and its <code>array offset></code> will
  be zero.  </p>
 @param array The array that will back this buffer
 @return The new long buffer
 */
+ (JavaNioLongBuffer *)wrapWithLongArray:(IOSLongArray *)array;

/*!
 @brief Wraps a long array into a buffer.
 <p> The new buffer will be backed by the given long array;
  that is, modifications to the buffer will cause the array to be modified
  and vice versa.  The new buffer's capacity will be 
 <tt>array.length</tt>, its position will be <tt>offset</tt>, its limit
  will be <tt>offset + length</tt>, and its mark will be undefined.  Its 
 <code>backing array</code> will be the given array, and
  its <code>array offset</code> will be zero.  </p>
 @param array The array that will back the new buffer
 @param offset The offset of the subarray to be used; must be non-negative and
           no larger than 
  <tt> array.length </tt> .  The new buffer's position          will be set to this value.
 @param length The length of the subarray to be used;
           must be non-negative and no larger than
            <tt> array.length - offset
  </tt> .          The new buffer's limit will be set to 
  <tt> offset + length </tt> .
 @return The new long buffer
 @throw IndexOutOfBoundsException
 If the preconditions on the <tt>offset</tt> and <tt>length</tt>
           parameters do not hold
 */
+ (JavaNioLongBuffer *)wrapWithLongArray:(IOSLongArray *)array
                                 withInt:(jint)offset
                                 withInt:(jint)length;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)mark
                              withInt:(jint)pos
                              withInt:(jint)lim
                              withInt:(jint)cap;

- (instancetype __nonnull)initWithInt:(jint)mark
                              withInt:(jint)pos
                              withInt:(jint)lim
                              withInt:(jint)cap
                        withLongArray:(IOSLongArray *)hb
                              withInt:(jint)offset;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithInt:(jint)arg0
                              withInt:(jint)arg1
                              withInt:(jint)arg2
                              withInt:(jint)arg3
                              withInt:(jint)arg4 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioLongBuffer)

J2OBJC_FIELD_SETTER(JavaNioLongBuffer, hb_, IOSLongArray *)

FOUNDATION_EXPORT void JavaNioLongBuffer_initWithInt_withInt_withInt_withInt_withLongArray_withInt_(JavaNioLongBuffer *self, jint mark, jint pos, jint lim, jint cap, IOSLongArray *hb, jint offset);

FOUNDATION_EXPORT void JavaNioLongBuffer_initWithInt_withInt_withInt_withInt_(JavaNioLongBuffer *self, jint mark, jint pos, jint lim, jint cap);

FOUNDATION_EXPORT JavaNioLongBuffer *JavaNioLongBuffer_allocateWithInt_(jint capacity);

FOUNDATION_EXPORT JavaNioLongBuffer *JavaNioLongBuffer_wrapWithLongArray_withInt_withInt_(IOSLongArray *array, jint offset, jint length);

FOUNDATION_EXPORT JavaNioLongBuffer *JavaNioLongBuffer_wrapWithLongArray_(IOSLongArray *array);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioLongBuffer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioLongBuffer")
