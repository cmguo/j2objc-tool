//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/PipedReader.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaIoPipedReader")
#ifdef RESTRICT_JavaIoPipedReader
#define INCLUDE_ALL_JavaIoPipedReader 0
#else
#define INCLUDE_ALL_JavaIoPipedReader 1
#endif
#undef RESTRICT_JavaIoPipedReader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaIoPipedReader_) && (INCLUDE_ALL_JavaIoPipedReader || defined(INCLUDE_JavaIoPipedReader))
#define JavaIoPipedReader_

#define RESTRICT_JavaIoReader 1
#define INCLUDE_JavaIoReader 1
#include <JRE/java/io/Reader.h>

@class IOSCharArray;
@class JavaIoPipedWriter;
@class JavaLangThread;

/*!
 @brief Piped character-input streams.
 @author Mark Reinhold
 @since JDK1.1
 */
@interface JavaIoPipedReader : JavaIoReader {
 @public
  jboolean closedByWriter_;
  jboolean closedByReader_;
  jboolean connected_;
  JavaLangThread *readSide_;
  JavaLangThread *writeSide_;
  /*!
   @brief The circular buffer into which incoming data is placed.
   */
  IOSCharArray *buffer_;
  /*!
   @brief The index of the position in the circular buffer at which the
  next character of data will be stored when received from the connected
  piped writer.
   <code>in&lt;0</code> implies the buffer is empty, 
 <code>in==out</code> implies the buffer is full
   */
  jint in_;
  /*!
   @brief The index of the position in the circular buffer at which the next
  character of data will be read by this piped reader.
   */
  jint out_;
}

#pragma mark Public

/*!
 @brief Creates a <code>PipedReader</code> so
  that it is not yet connected
 .It must be connected
  to a <code>PipedWriter</code>
  before being used.
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a <code>PipedReader</code> so that it is not yet 
 <code>connected</code> and uses
  the specified pipe size for the pipe's buffer.
 It must be  connected
  to a <code>PipedWriter</code>
  before being used.
 @param pipeSize the size of the pipe's buffer.
 @throw IllegalArgumentExceptionif <code>pipeSize <= 0</code>.
 @since 1.6
 */
- (instancetype __nonnull)initWithInt:(jint)pipeSize;

/*!
 @brief Creates a <code>PipedReader</code> so
  that it is connected to the piped writer 
 <code>src</code>.Data written to <code>src</code>
  will then be available as input from this stream.
 @param src the stream to connect to.
 @throw IOExceptionif an I/O error occurs.
 */
- (instancetype __nonnull)initWithJavaIoPipedWriter:(JavaIoPipedWriter *)src;

/*!
 @brief Creates a <code>PipedReader</code> so that it is connected
  to the piped writer <code>src</code> and uses the specified
  pipe size for the pipe's buffer.Data written to <code>src</code>
  will then be  available as input from this stream.
 @param src the stream to connect to.
 @param pipeSize the size of the pipe's buffer.
 @throw IOExceptionif an I/O error occurs.
 @throw IllegalArgumentExceptionif <code>pipeSize <= 0</code>.
 @since 1.6
 */
- (instancetype __nonnull)initWithJavaIoPipedWriter:(JavaIoPipedWriter *)src
                                            withInt:(jint)pipeSize;

/*!
 @brief Closes this piped stream and releases any system resources
  associated with the stream.
 @throw IOExceptionif an I/O error occurs.
 */
- (void)close;

/*!
 @brief Causes this piped reader to be connected
  to the piped  writer <code>src</code>.
 If this object is already connected to some
  other piped writer, an <code>IOException</code>
  is thrown. 
 <p>
  If <code>src</code> is an
  unconnected piped writer and <code>snk</code>
  is an unconnected piped reader, they
  may be connected by either the call: 
 @code
<code>snk.connect(src)</code> 
@endcode
  <p>
  or the call: 
 @code
<code>src.connect(snk)</code> 
@endcode
  <p>
  The two calls have the same effect.
 @param src The piped writer to connect to.
 @throw IOExceptionif an I/O error occurs.
 */
- (void)connectWithJavaIoPipedWriter:(JavaIoPipedWriter *)src;

/*!
 @brief Reads the next character of data from this piped stream.
 If no character is available because the end of the stream
  has been reached, the value <code>-1</code> is returned.
  This method blocks until input data is available, the end of
  the stream is detected, or an exception is thrown.
 @return the next character of data, or <code>-1</code> if the end of the
              stream is reached.
 @throw IOExceptionif the pipe is
           <a href=PipedInputStream.html#BROKEN> <code>broken</code></a>,
           <code>unconnected</code>, closed,
           or an I/O error occurs.
 */
- (jint)read;

/*!
 @brief Reads up to <code>len</code> characters of data from this piped
  stream into an array of characters.Less than <code>len</code> characters
  will be read if the end of the data stream is reached or if 
 <code>len</code> exceeds the pipe's buffer size.
 This method
  blocks until at least one character of input is available.
 @param cbuf the buffer into which the data is read.
 @param off the start offset of the data.
 @param len the maximum number of characters read.
 @return the total number of characters read into the buffer, or
              <code>-1</code> if there is no more data because the end of
              the stream has been reached.
 @throw IOExceptionif the pipe is
                   <a href=PipedInputStream.html#BROKEN> <code>broken</code></a>,
                   <code>unconnected</code>, closed,
                   or an I/O error occurs.
 */
- (jint)readWithCharArray:(IOSCharArray *)cbuf
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Tell whether this stream is ready to be read.A piped character
  stream is ready if the circular buffer is not empty.
 @throw IOExceptionif the pipe is
                   <a href=PipedInputStream.html#BROKEN> <code>broken</code></a>,
                   <code>unconnected</code>, or closed.
 */
- (jboolean)ready;

#pragma mark Package-Private

/*!
 @brief Receives data into an array of characters.This method will
  block until some input is available.
 */
- (void)receiveWithCharArray:(IOSCharArray *)c
                     withInt:(jint)off
                     withInt:(jint)len;

/*!
 @brief Receives a char of data.This method will block if no input is
  available.
 */
- (void)receiveWithInt:(jint)c;

/*!
 @brief Notifies all waiting threads that the last character of data has been
  received.
 */
- (void)receivedLast;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoPipedReader)

J2OBJC_FIELD_SETTER(JavaIoPipedReader, readSide_, JavaLangThread *)
J2OBJC_FIELD_SETTER(JavaIoPipedReader, writeSide_, JavaLangThread *)
J2OBJC_FIELD_SETTER(JavaIoPipedReader, buffer_, IOSCharArray *)

FOUNDATION_EXPORT void JavaIoPipedReader_initWithJavaIoPipedWriter_(JavaIoPipedReader *self, JavaIoPipedWriter *src);

FOUNDATION_EXPORT JavaIoPipedReader *new_JavaIoPipedReader_initWithJavaIoPipedWriter_(JavaIoPipedWriter *src) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPipedReader *create_JavaIoPipedReader_initWithJavaIoPipedWriter_(JavaIoPipedWriter *src);

FOUNDATION_EXPORT void JavaIoPipedReader_initWithJavaIoPipedWriter_withInt_(JavaIoPipedReader *self, JavaIoPipedWriter *src, jint pipeSize);

FOUNDATION_EXPORT JavaIoPipedReader *new_JavaIoPipedReader_initWithJavaIoPipedWriter_withInt_(JavaIoPipedWriter *src, jint pipeSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPipedReader *create_JavaIoPipedReader_initWithJavaIoPipedWriter_withInt_(JavaIoPipedWriter *src, jint pipeSize);

FOUNDATION_EXPORT void JavaIoPipedReader_init(JavaIoPipedReader *self);

FOUNDATION_EXPORT JavaIoPipedReader *new_JavaIoPipedReader_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPipedReader *create_JavaIoPipedReader_init(void);

FOUNDATION_EXPORT void JavaIoPipedReader_initWithInt_(JavaIoPipedReader *self, jint pipeSize);

FOUNDATION_EXPORT JavaIoPipedReader *new_JavaIoPipedReader_initWithInt_(jint pipeSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPipedReader *create_JavaIoPipedReader_initWithInt_(jint pipeSize);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoPipedReader)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoPipedReader")
