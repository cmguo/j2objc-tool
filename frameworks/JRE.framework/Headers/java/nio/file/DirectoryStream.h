//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/DirectoryStream.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioFileDirectoryStream")
#ifdef RESTRICT_JavaNioFileDirectoryStream
#define INCLUDE_ALL_JavaNioFileDirectoryStream 0
#else
#define INCLUDE_ALL_JavaNioFileDirectoryStream 1
#endif
#undef RESTRICT_JavaNioFileDirectoryStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileDirectoryStream_) && (INCLUDE_ALL_JavaNioFileDirectoryStream || defined(INCLUDE_JavaNioFileDirectoryStream))
#define JavaNioFileDirectoryStream_

#define RESTRICT_JavaIoCloseable 1
#define INCLUDE_JavaIoCloseable 1
#include <JRE/java/io/Closeable.h>

#define RESTRICT_JavaLangIterable 1
#define INCLUDE_JavaLangIterable 1
#include <JRE/java/lang/Iterable.h>

@protocol JavaUtilIterator;

/*!
 @brief An object to iterate over the entries in a directory.A directory stream
  allows for the convenient use of the for-each construct to iterate over a
  directory.
 <p> <b> While <code>DirectoryStream</code> extends <code>Iterable</code>, it is not a
  general-purpose <code>Iterable</code> as it supports only a single <code>Iterator</code>
 ; invoking the <code>iterator</code> method to obtain a second
  or subsequent iterator throws <code>IllegalStateException</code>. </b>
  
 <p> An important property of the directory stream's <code>Iterator</code> is that
  its <code>hasNext</code> method is guaranteed to read-ahead by
  at least one element. If <code>hasNext</code> method returns <code>true</code>, and is
  followed by a call to the <code>next</code> method, it is guaranteed that the 
 <code>next</code> method will not throw an exception due to an I/O error, or
  because the stream has been <code>closed</code>. The <code>Iterator</code> does
  not support the <code>remove</code> operation. 
 <p> A <code>DirectoryStream</code> is opened upon creation and is closed by
  invoking the <code>close</code> method. Closing a directory stream releases any
  resources associated with the stream. Failure to close the stream may result
  in a resource leak. The try-with-resources statement provides a useful
  construct to ensure that the stream is closed: 
 @code

    Path dir = ...
    try (DirectoryStream&lt;Path&gt; stream = Files.newDirectoryStream(dir)) {
        for (Path entry: stream) {
            ...
        }      }    
  
@endcode
  
 <p> Once a directory stream is closed, then further access to the directory,
  using the <code>Iterator</code>, behaves as if the end of stream has been reached.
  Due to read-ahead, the <code>Iterator</code> may return one or more elements
  after the directory stream has been closed. Once these buffered elements
  have been read, then subsequent calls to the <code>hasNext</code> method returns 
 <code>false</code>, and subsequent calls to the <code>next</code> method will throw 
 <code>NoSuchElementException</code>.
  
 <p> A directory stream is not required to be <i>asynchronously closeable</i>.
  If a thread is blocked on the directory stream's iterator reading from the
  directory, and another thread invokes the <code>close</code> method, then the
  second thread may block until the read operation is complete. 
 <p> If an I/O error is encountered when accessing the directory then it
  causes the <code>Iterator</code>'s <code>hasNext</code> or <code>next</code> methods to
  throw <code>DirectoryIteratorException</code> with the <code>IOException</code> as the
  cause. As stated above, the <code>hasNext</code> method is guaranteed to
  read-ahead by at least one element. This means that if <code>hasNext</code> method
  returns <code>true</code>, and is followed by a call to the <code>next</code> method,
  then it is guaranteed that the <code>next</code> method will not fail with a 
 <code>DirectoryIteratorException</code>.
  
 <p> The elements returned by the iterator are in no specific order. Some file
  systems maintain special links to the directory itself and the directory's
  parent directory. Entries representing these links are not returned by the
  iterator. 
 <p> The iterator is <i>weakly consistent</i>. It is thread safe but does not
  freeze the directory while iterating, so it may (or may not) reflect updates
  to the directory that occur after the <code>DirectoryStream</code> is created. 
 <p> <b>Usage Examples:</b>
  Suppose we want a list of the source files in a directory. This example uses
  both the for-each and try-with-resources constructs. 
 @code

    List&lt;Path&gt; listSourceFiles(Path dir) throws IOException {
        List&lt;Path&gt; result = new ArrayList&lt;&gt;();
        try (DirectoryStream&lt;Path&gt; stream = Files.newDirectoryStream(dir, "*.{c,h,cpp,hpp,java}")) {
            for (Path entry: stream) {
                result.add(entry);
            }
        } catch (DirectoryIteratorException ex) {
            // I/O error encounted during the iteration, the cause is an IOException
            throw ex.getCause();
        }
        return result;
    } 
  
@endcode
 @since 1.7
 - seealso: Files#newDirectoryStream(Path)
 */
@protocol JavaNioFileDirectoryStream < JavaIoCloseable, JavaLangIterable, JavaObject >

/*!
 @brief Returns the iterator associated with this <code>DirectoryStream</code>.
 @return the iterator associated with this <code>DirectoryStream</code>
 @throw IllegalStateException
 if this directory stream is closed or the iterator has already
           been returned
 */
- (id<JavaUtilIterator>)iterator;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileDirectoryStream)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileDirectoryStream)

#endif

#if !defined (JavaNioFileDirectoryStream_Filter_) && (INCLUDE_ALL_JavaNioFileDirectoryStream || defined(INCLUDE_JavaNioFileDirectoryStream_Filter))
#define JavaNioFileDirectoryStream_Filter_

/*!
 @brief An interface that is implemented by objects that decide if a directory
  entry should be accepted or filtered.A <code>Filter</code> is passed as the
  parameter to the <code>Files.newDirectoryStream(Path,DirectoryStream.Filter)</code>
  method when opening a directory to iterate over the entries in the
  directory.
 @since 1.7
 */
@protocol JavaNioFileDirectoryStream_Filter < JavaObject >

/*!
 @brief Decides if the given directory entry should be accepted or filtered.
 @param entry_ the directory entry to be tested
 @return <code>true</code> if the directory entry should be accepted
 @throw IOException
 If an I/O error occurs
 */
- (jboolean)acceptWithId:(id)entry_;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileDirectoryStream_Filter)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileDirectoryStream_Filter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileDirectoryStream")
