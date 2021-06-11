//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/stream/BaseStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilStreamBaseStream")
#ifdef RESTRICT_JavaUtilStreamBaseStream
#define INCLUDE_ALL_JavaUtilStreamBaseStream 0
#else
#define INCLUDE_ALL_JavaUtilStreamBaseStream 1
#endif
#undef RESTRICT_JavaUtilStreamBaseStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilStreamBaseStream_) && (INCLUDE_ALL_JavaUtilStreamBaseStream || defined(INCLUDE_JavaUtilStreamBaseStream))
#define JavaUtilStreamBaseStream_

#define RESTRICT_JavaLangAutoCloseable 1
#define INCLUDE_JavaLangAutoCloseable 1
#include "java/lang/AutoCloseable.h"

@protocol JavaLangRunnable;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

/*!
 @brief Base interface for streams, which are sequences of elements supporting
  sequential and parallel aggregate operations.The following example
  illustrates an aggregate operation using the stream types <code>Stream</code>
  and <code>IntStream</code>, computing the sum of the weights of the red widgets: 
 @code
    int sum = widgets.stream()
                       .filter(w -> w.getColor() == RED)
                       .mapToInt(w -> w.getWeight())
                       .sum(); 
 
@endcode
  See the class documentation for <code>Stream</code> and the package documentation
  for <a href="package-summary.html">java.util.stream</a> for additional
  specification of streams, stream operations, stream pipelines, and
  parallelism, which governs the behavior of all stream types.
 @since 1.8
 - seealso: Stream
 - seealso: IntStream
 - seealso: LongStream
 - seealso: DoubleStream
 - seealso: <a href="package-summary.html">java.util.stream</a>
 */
@protocol JavaUtilStreamBaseStream < JavaLangAutoCloseable, JavaObject >

/*!
 @brief Returns an iterator for the elements of this stream.
 <p>This is a <a href="package-summary.html#StreamOps">terminal
  operation</a>.
 @return the element iterator for this stream
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Returns a spliterator for the elements of this stream.
 <p>This is a <a href="package-summary.html#StreamOps">terminal
  operation</a>.
 @return the element spliterator for this stream
 */
- (id<JavaUtilSpliterator>)spliterator;

/*!
 @brief Returns whether this stream, if a terminal operation were to be executed,
  would execute in parallel.Calling this method after invoking an
  terminal stream operation method may yield unpredictable results.
 @return <code>true</code> if this stream would execute in parallel if executed
 */
- (jboolean)isParallel;

/*!
 @brief Returns an equivalent stream that is sequential.May return
  itself, either because the stream was already sequential, or because
  the underlying stream state was modified to be sequential.
 <p>This is an <a href="package-summary.html#StreamOps">intermediate
  operation</a>.
 @return a sequential stream
 */
- (id<JavaUtilStreamBaseStream>)sequential;

/*!
 @brief Returns an equivalent stream that is parallel.May return
  itself, either because the stream was already parallel, or because
  the underlying stream state was modified to be parallel.
 <p>This is an <a href="package-summary.html#StreamOps">intermediate
  operation</a>.
 @return a parallel stream
 */
- (id<JavaUtilStreamBaseStream>)parallel;

/*!
 @brief Returns an equivalent stream that is 
 <a href="package-summary.html#Ordering">unordered</a>.May return
  itself, either because the stream was already unordered, or because
  the underlying stream state was modified to be unordered.
 <p>This is an <a href="package-summary.html#StreamOps">intermediate
  operation</a>.
 @return an unordered stream
 */
- (id<JavaUtilStreamBaseStream>)unordered;

/*!
 @brief Returns an equivalent stream with an additional close handler.Close
  handlers are run when the <code>close()</code> method
  is called on the stream, and are executed in the order they were
  added.
 All close handlers are run, even if earlier close handlers throw
  exceptions.  If any close handler throws an exception, the first
  exception thrown will be relayed to the caller of <code>close()</code>, with
  any remaining exceptions added to that exception as suppressed exceptions
  (unless one of the remaining exceptions is the same exception as the
  first exception, since an exception cannot suppress itself.)  May
  return itself. 
 <p>This is an <a href="package-summary.html#StreamOps">intermediate
  operation</a>.
 @param closeHandler A task to execute when the stream is closed
 @return a stream with a handler that is run if the stream is closed
 */
- (id<JavaUtilStreamBaseStream>)onCloseWithJavaLangRunnable:(id<JavaLangRunnable>)closeHandler;

/*!
 @brief Closes this stream, causing all close handlers for this stream pipeline
  to be called.
 - seealso: AutoCloseable#close()
 */
- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamBaseStream)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamBaseStream)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilStreamBaseStream")
