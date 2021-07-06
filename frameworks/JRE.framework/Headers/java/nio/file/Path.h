//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/Path.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioFilePath")
#ifdef RESTRICT_JavaNioFilePath
#define INCLUDE_ALL_JavaNioFilePath 0
#else
#define INCLUDE_ALL_JavaNioFilePath 1
#endif
#undef RESTRICT_JavaNioFilePath

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFilePath_) && (INCLUDE_ALL_JavaNioFilePath || defined(INCLUDE_JavaNioFilePath))
#define JavaNioFilePath_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include <JRE/java/lang/Comparable.h>

#define RESTRICT_JavaLangIterable 1
#define INCLUDE_JavaLangIterable 1
#include <JRE/java/lang/Iterable.h>

#define RESTRICT_JavaNioFileWatchable 1
#define INCLUDE_JavaNioFileWatchable 1
#include <JRE/java/nio/file/Watchable.h>

@class IOSObjectArray;
@class JavaIoFile;
@class JavaNetURI;
@class JavaNioFileFileSystem;
@protocol JavaNioFileWatchKey;
@protocol JavaNioFileWatchService;
@protocol JavaUtilIterator;

/*!
 @brief An object that may be used to locate a file in a file system.It will
  typically represent a system dependent file path.
 <p> A <code>Path</code> represents a path that is hierarchical and composed of a
  sequence of directory and file name elements separated by a special separator
  or delimiter. A <em>root component</em>, that identifies a file system
  hierarchy, may also be present. The name element that is <em>farthest</em>
  from the root of the directory hierarchy is the name of a file or directory.
  The other name elements are directory names. A <code>Path</code> can represent a
  root, a root and a sequence of names, or simply one or more name elements.
  A <code>Path</code> is considered to be an <i>empty path</i> if it consists
  solely of one name element that is empty. Accessing a file using an 
 <i>empty path</i> is equivalent to accessing the default directory of the
  file system. <code>Path</code> defines the <code>getFileName</code>,
  <code>getParent</code>, <code>getRoot</code>, and <code>subpath</code>
  methods to access the path components or a subsequence of its name
  elements. 
 <p> In addition to accessing the components of a path, a <code>Path</code> also
  defines the <code>resolve</code> and <code>resolveSibling</code>
  methods to combine paths. The <code>relativize</code>
  method that can be used to construct a relative path between two paths.
  Paths can be <code>compared</code>, and tested against each other using
  the <code>startsWith</code> and <code>endsWith</code> methods. 
 <p> This interface extends <code>Watchable</code> interface so that a directory
  located by a path can be <code>registered</code> with a <code>WatchService</code>
  and entries in the directory watched. </p>
  
 <p> <b>WARNING:</b> This interface is only intended to be implemented by
  those developing custom file system implementations. Methods may be added to
  this interface in future releases. </p>
  
 <h2>Accessing Files</h2>
  <p> Paths may be used with the <code>Files</code> class to operate on files,
  directories, and other types of files. For example, suppose we want a <code>java.io.BufferedReader</code>
  to read text from a file "<code>access.log</code>". The
  file is located in a directory "<code>logs</code>" relative to the current working
  directory and is UTF-8 encoded. 
 @code

      Path path = FileSystems.getDefault().getPath("logs", "access.log");
      BufferedReader reader = Files.newBufferedReader(path, StandardCharsets.UTF_8); 
  
@endcode
  
 <a name="interop"></a><h2>Interoperability</h2>
  <p> Paths associated with the default <code>provider</code>
  are generally interoperable
  with the <code>java.io.File</code> class. Paths created by other
  providers are unlikely to be interoperable with the abstract path names
  represented by <code>java.io.File</code>. The <code>toPath</code>
  method may be used to obtain a <code>Path</code> from the abstract path name
  represented by a <code>java.io.File</code> object. The resulting <code>Path</code> can
  be used to operate on the same file as the <code>java.io.File</code> object. In
  addition, the <code>toFile</code> method is useful to construct a <code>File</code>
  from the <code>String</code> representation of a <code>Path</code>.
  
 <h2>Concurrency</h2>
  <p> Implementations of this interface are immutable and safe for use by
  multiple concurrent threads.
 @since 1.7
 - seealso: Paths
 */
@protocol JavaNioFilePath < JavaLangComparable, JavaLangIterable, JavaNioFileWatchable, JavaObject >

/*!
 @brief Returns the file system that created this object.
 @return the file system that created this object
 */
- (JavaNioFileFileSystem *)getFileSystem;

/*!
 @brief Tells whether or not this path is absolute.
 <p> An absolute path is complete in that it doesn't need to be combined
  with other path information in order to locate a file.
 @return <code>true</code> if, and only if, this path is absolute
 */
- (jboolean)isAbsolute;

/*!
 @brief Returns the root component of this path as a <code>Path</code> object,
  or <code>null</code> if this path does not have a root component.
 @return a path representing the root component of this path,
           or <code>null</code>
 */
- (id<JavaNioFilePath>)getRoot;

/*!
 @brief Returns the name of the file or directory denoted by this path as a 
 <code>Path</code> object.The file name is the <em>farthest</em> element from
  the root in the directory hierarchy.
 @return a path representing the name of the file or directory, or
           <code>null</code> if this path has zero elements
 */
- (id<JavaNioFilePath>)getFileName;

/*!
 @brief Returns the <em>parent path</em>, or <code>null</code> if this path does not
  have a parent.
 <p> The parent of this path object consists of this path's root
  component, if any, and each element in the path except for the 
 <em>farthest</em> from the root in the directory hierarchy. This method
  does not access the file system; the path or its parent may not exist.
  Furthermore, this method does not eliminate special names such as "."
  and ".." that may be used in some implementations. On UNIX for example,
  the parent of "<code>/a/b/c</code>" is "<code>/a/b</code>", and the parent of 
 <code>"x/y/.</code>" is "<code>x/y</code>". This method may be used with the <code>normalize</code>
  method, to eliminate redundant names, for cases where 
 <em>shell-like</em> navigation is required. 
 <p> If this path has one or more elements, and no root component, then
  this method is equivalent to evaluating the expression: 
 <blockquote>@code

  subpath(0,&nbsp;getNameCount()-1);
   
@endcode</blockquote>
 @return a path representing the path's parent
 */
- (id<JavaNioFilePath>)getParent;

/*!
 @brief Returns the number of name elements in the path.
 @return the number of elements in the path, or <code>0</code> if this path
           only represents a root component
 */
- (jint)getNameCount;

/*!
 @brief Returns a name element of this path as a <code>Path</code> object.
 <p> The <code>index</code> parameter is the index of the name element to return.
  The element that is <em>closest</em> to the root in the directory hierarchy
  has index <code>0</code>. The element that is <em>farthest</em> from the root
  has index <code>count</code><code>-1</code>.
 @param index the index of the element
 @return the name element
 @throw IllegalArgumentException
 if <code>index</code> is negative, <code>index</code> is greater than or
           equal to the number of elements, or this path has zero name
           elements
 */
- (id<JavaNioFilePath>)getNameWithInt:(jint)index;

/*!
 @brief Returns a relative <code>Path</code> that is a subsequence of the name
  elements of this path.
 <p> The <code>beginIndex</code> and <code>endIndex</code> parameters specify the
  subsequence of name elements. The name that is <em>closest</em> to the root
  in the directory hierarchy has index <code>0</code>. The name that is 
 <em>farthest</em> from the root has index <code>count</code>
 <code>-1</code>. The returned <code>Path</code> object has the name elements
  that begin at <code>beginIndex</code> and extend to the element at index <code>endIndex-1</code>
 .
 @param beginIndex the index of the first element, inclusive
 @param endIndex the index of the last element, exclusive
 @return a new <code>Path</code> object that is a subsequence of the name
           elements in this <code>Path</code>
 @throw IllegalArgumentException
 if <code>beginIndex</code> is negative, or greater than or equal to
           the number of elements. If <code>endIndex</code> is less than or
           equal to <code>beginIndex</code>, or larger than the number of elements.
 */
- (id<JavaNioFilePath>)subpathWithInt:(jint)beginIndex
                              withInt:(jint)endIndex;

/*!
 @brief Tests if this path starts with the given path.
 <p> This path <em>starts</em> with the given path if this path's root
  component <em>starts</em> with the root component of the given path,
  and this path starts with the same name elements as the given path.
  If the given path has more name elements than this path then <code>false</code>
  is returned. 
 <p> Whether or not the root component of this path starts with the root
  component of the given path is file system specific. If this path does
  not have a root component and the given path has a root component then
  this path does not start with the given path. 
 <p> If the given path is associated with a different <code>FileSystem</code>
  to this path then <code>false</code> is returned.
 @param other the given path
 @return <code>true</code> if this path starts with the given path; otherwise
           <code>false</code>
 */
- (jboolean)startsWithWithJavaNioFilePath:(id<JavaNioFilePath>)other;

/*!
 @brief Tests if this path starts with a <code>Path</code>, constructed by converting
  the given path string, in exactly the manner specified by the <code>startsWith(Path)</code>
  method.On UNIX for example, the path
  "<code>foo/bar</code>" starts with "<code>foo</code>" and "<code>foo/bar</code>".
 It
  does not start with "<code>f</code>" or "<code>fo</code>".
 @param other the given path string
 @return <code>true</code> if this path starts with the given path; otherwise
           <code>false</code>
 @throw InvalidPathException
 If the path string cannot be converted to a Path.
 */
- (jboolean)startsWithWithNSString:(NSString *)other;

/*!
 @brief Tests if this path ends with the given path.
 <p> If the given path has <em>N</em> elements, and no root component,
  and this path has <em>N</em> or more elements, then this path ends with
  the given path if the last <em>N</em> elements of each path, starting at
  the element farthest from the root, are equal. 
 <p> If the given path has a root component then this path ends with the
  given path if the root component of this path <em>ends with</em> the root
  component of the given path, and the corresponding elements of both paths
  are equal. Whether or not the root component of this path ends with the
  root component of the given path is file system specific. If this path
  does not have a root component and the given path has a root component
  then this path does not end with the given path. 
 <p> If the given path is associated with a different <code>FileSystem</code>
  to this path then <code>false</code> is returned.
 @param other the given path
 @return <code>true</code> if this path ends with the given path; otherwise
           <code>false</code>
 */
- (jboolean)endsWithWithJavaNioFilePath:(id<JavaNioFilePath>)other;

/*!
 @brief Tests if this path ends with a <code>Path</code>, constructed by converting
  the given path string, in exactly the manner specified by the <code>endsWith(Path)</code>
  method.On UNIX for example, the path
  "<code>foo/bar</code>" ends with "<code>foo/bar</code>" and "<code>bar</code>".
 It does
  not end with "<code>r</code>" or "<code>/bar</code>". Note that trailing separators
  are not taken into account, and so invoking this method on the <code>Path</code>
 "<code>foo/bar</code>" with the <code>String</code> "<code>bar/</code>" returns 
 <code>true</code>.
 @param other the given path string
 @return <code>true</code> if this path ends with the given path; otherwise
           <code>false</code>
 @throw InvalidPathException
 If the path string cannot be converted to a Path.
 */
- (jboolean)endsWithWithNSString:(NSString *)other;

/*!
 @brief Returns a path that is this path with redundant name elements eliminated.
 <p> The precise definition of this method is implementation dependent but
  in general it derives from this path, a path that does not contain 
 <em>redundant</em> name elements. In many file systems, the "<code>.</code>"
  and "<code>..</code>" are special names used to indicate the current directory
  and parent directory. In such file systems all occurrences of "<code>.</code>"
  are considered redundant. If a "<code>..</code>" is preceded by a
  non-"<code>..</code>" name then both names are considered redundant (the
  process to identify such names is repeated until it is no longer
  applicable). 
 <p> This method does not access the file system; the path may not locate
  a file that exists. Eliminating "<code>..</code>" and a preceding name from a
  path may result in the path that locates a different file than the original
  path. This can arise when the preceding name is a symbolic link.
 @return the resulting path or this path if it does not contain
           redundant name elements; an empty path is returned if this path
           does have a root component and all name elements are redundant
 - seealso: #getParent
 - seealso: #toRealPath
 */
- (id<JavaNioFilePath>)normalize;

/*!
 @brief Resolve the given path against this path.
 <p> If the <code>other</code> parameter is an <code>absolute</code>
  path then this method trivially returns <code>other</code>. If <code>other</code>
  is an <i>empty path</i> then this method trivially returns this path.
  Otherwise this method considers this path to be a directory and resolves
  the given path against this path. In the simplest case, the given path
  does not have a <code>root</code> component, in which case this method 
 <em>joins</em> the given path to this path and returns a resulting path
  that <code>ends</code> with the given path. Where the given path has
  a root component then resolution is highly implementation dependent and
  therefore unspecified.
 @param other the path to resolve against this path
 @return the resulting path
 - seealso: #relativize
 */
- (id<JavaNioFilePath>)resolveWithJavaNioFilePath:(id<JavaNioFilePath>)other;

/*!
 @brief Converts a given path string to a <code>Path</code> and resolves it against
  this <code>Path</code> in exactly the manner specified by the <code>resolve</code>
  method.For example, suppose that the name
  separator is "<code>/</code>" and a path represents "<code>foo/bar</code>", then
  invoking this method with the path string "<code>gus</code>" will result in
  the <code>Path</code> "<code>foo/bar/gus</code>".
 @param other the path string to resolve against this path
 @return the resulting path
 @throw InvalidPathException
 if the path string cannot be converted to a Path.
 - seealso: FileSystem#getPath
 */
- (id<JavaNioFilePath>)resolveWithNSString:(NSString *)other;

/*!
 @brief Resolves the given path against this path's <code>parent</code>
  path.This is useful where a file name needs to be <i>replaced</i> with
  another file name.
 For example, suppose that the name separator is
  "<code>/</code>" and a path represents "<code>dir1/dir2/foo</code>", then invoking
  this method with the <code>Path</code> "<code>bar</code>" will result in the <code>Path</code>
  "<code>dir1/dir2/bar</code>". If this path does not have a parent path,
  or <code>other</code> is <code>absolute</code>, then this method
  returns <code>other</code>. If <code>other</code> is an empty path then this method
  returns this path's parent, or where this path doesn't have a parent, the
  empty path.
 @param other the path to resolve against this path's parent
 @return the resulting path
 - seealso: #resolve(Path)
 */
- (id<JavaNioFilePath>)resolveSiblingWithJavaNioFilePath:(id<JavaNioFilePath>)other;

/*!
 @brief Converts a given path string to a <code>Path</code> and resolves it against
  this path's <code>parent</code> path in exactly the manner
  specified by the <code>resolveSibling</code> method.
 @param other the path string to resolve against this path's parent
 @return the resulting path
 @throw InvalidPathException
 if the path string cannot be converted to a Path.
 - seealso: FileSystem#getPath
 */
- (id<JavaNioFilePath>)resolveSiblingWithNSString:(NSString *)other;

/*!
 @brief Constructs a relative path between this path and a given path.
 <p> Relativization is the inverse of <code>resolution</code>.
  This method attempts to construct a <code>relative</code> path
  that when <code>resolved</code> against this path, yields a
  path that locates the same file as the given path. For example, on UNIX,
  if this path is <code>"/a/b"</code> and the given path is <code>"/a/b/c/d"</code>
  then the resulting relative path would be <code>"c/d"</code>. Where this
  path and the given path do not have a <code>root</code> component,
  then a relative path can be constructed. A relative path cannot be
  constructed if only one of the paths have a root component. Where both
  paths have a root component then it is implementation dependent if a
  relative path can be constructed. If this path and the given path are 
 <code>equal</code> then an <i>empty path</i> is returned. 
 <p> For any two <code>normalized</code> paths <i>p</i> and 
 <i>q</i>, where <i>q</i> does not have a root component, 
 <blockquote>
    <i>p</i><tt>.relativize(</tt><i>p</i><tt>.resolve(</tt><i>q</i><tt>)).equals(</tt><i>q</i><tt>)</tt>
  </blockquote>
  
 <p> When symbolic links are supported, then whether the resulting path,
  when resolved against this path, yields a path that can be used to locate
  the <code>same</code> file as <code>other</code> is implementation
  dependent. For example, if this path is  <code>"/a/b"</code> and the given
  path is <code>"/a/x"</code> then the resulting relative path may be <code>"../x"</code>
 . If <code>"b"</code> is a symbolic link then is implementation
  dependent if <code>"a/b/../x"</code> would locate the same file as <code>"/a/x"</code>.
 @param other the path to relativize against this path
 @return the resulting relative path, or an empty path if both paths are
           equal
 @throw IllegalArgumentException
 if <code>other</code> is not a <code>Path</code> that can be relativized
           against this path
 */
- (id<JavaNioFilePath>)relativizeWithJavaNioFilePath:(id<JavaNioFilePath>)other;

/*!
 @brief Returns a URI to represent this path.
 <p> This method constructs an absolute <code>URI</code> with a <code>scheme</code>
  equal to the URI scheme that identifies the
  provider. The exact form of the scheme specific part is highly provider
  dependent. 
 <p> In the case of the default provider, the URI is hierarchical with
  a <code>path</code> component that is absolute. The query and
  fragment components are undefined. Whether the authority component is
  defined or not is implementation dependent. There is no guarantee that
  the <code>URI</code> may be used to construct a <code>java.io.File</code>.
  In particular, if this path represents a Universal Naming Convention (UNC)
  path, then the UNC server name may be encoded in the authority component
  of the resulting URI. In the case of the default provider, and the file
  exists, and it can be determined that the file is a directory, then the
  resulting <code>URI</code> will end with a slash. 
 <p> The default provider provides a similar <em>round-trip</em> guarantee
  to the <code>java.io.File</code> class. For a given <code>Path</code> <i>p</i> it
  is guaranteed that 
 <blockquote><tt>
  <code>Paths.get</code>(</tt><i>p</i><tt>.toUri()).equals(</tt><i>p</i>
  <tt>.<code>toAbsolutePath</code>())</tt>
  </blockquote>
  so long as the original <code>Path</code>, the <code>URI</code>, and the new <code>Path</code>
  are all created in (possibly different invocations of) the same
  Java virtual machine. Whether other providers make any guarantees is
  provider specific and therefore unspecified. 
 <p> When a file system is constructed to access the contents of a file
  as a file system then it is highly implementation specific if the returned
  URI represents the given path in the file system or it represents a 
 <em>compound</em> URI that encodes the URI of the enclosing file system.
  A format for compound URIs is not defined in this release; such a scheme
  may be added in a future release.
 @return the URI representing this path
 @throw java.io.IOError
 if an I/O error occurs obtaining the absolute path, or where a
           file system is constructed to access the contents of a file as
           a file system, and the URI of the enclosing file system cannot be
           obtained
 @throw SecurityException
 In the case of the default provider, and a security manager
           is installed, the <code>toAbsolutePath</code> method
           throws a security exception.
 */
- (JavaNetURI *)toUri;

/*!
 @brief Returns a <code>Path</code> object representing the absolute path of this
  path.
 <p> If this path is already <code>absolute</code> then this
  method simply returns this path. Otherwise, this method resolves the path
  in an implementation dependent manner, typically by resolving the path
  against a file system default directory. Depending on the implementation,
  this method may throw an I/O error if the file system is not accessible.
 @return a <code>Path</code> object representing the absolute path
 @throw java.io.IOError
 if an I/O error occurs
 @throw SecurityException
 In the case of the default provider, a security manager
           is installed, and this path is not absolute, then the security
           manager's <code>checkPropertyAccess</code>
  method is invoked to check access to the
           system property <code>user.dir</code>
 */
- (id<JavaNioFilePath>)toAbsolutePath;

/*!
 @brief Returns the <em>real</em> path of an existing file.
 <p> The precise definition of this method is implementation dependent but
  in general it derives from this path, an <code>absolute</code>
  path that locates the <code>same</code> file as this path, but
  with name elements that represent the actual name of the directories
  and the file. For example, where filename comparisons on a file system
  are case insensitive then the name elements represent the names in their
  actual case. Additionally, the resulting path has redundant name
  elements removed. 
 <p> If this path is relative then its absolute path is first obtained,
  as if by invoking the <code>toAbsolutePath</code> method. 
 <p> The <code>options</code> array may be used to indicate how symbolic links
  are handled. By default, symbolic links are resolved to their final
  target. If the option <code>NOFOLLOW_LINKS</code> is
  present then this method does not resolve symbolic links.
  Some implementations allow special names such as "<code>..</code>" to refer to
  the parent directory. When deriving the <em>real path</em>, and a
  "<code>..</code>" (or equivalent) is preceded by a non-"<code>..</code>" name then
  an implementation will typically cause both names to be removed. When
  not resolving symbolic links and the preceding name is a symbolic link
  then the names are only removed if it guaranteed that the resulting path
  will locate the same file as this path.
 @param options options indicating how symbolic links are handled
 @return an absolute path represent the <em>real</em> path of the file
           located by this object
 @throw IOException
 if the file does not exist or an I/O error occurs
 @throw SecurityException
 In the case of the default provider, and a security manager
           is installed, its <code>checkRead</code>
           method is invoked to check read access to the file, and where
           this path is not absolute, its <code>checkPropertyAccess</code>
  method is invoked to check access to the
           system property <code>user.dir</code>
 */
- (id<JavaNioFilePath>)toRealPathWithJavaNioFileLinkOptionArray:(IOSObjectArray *)options;

/*!
 @brief Returns a <code>File</code> object representing this path.Where this <code>Path</code>
  is associated with the default provider, then this method is
  equivalent to returning a <code>File</code> object constructed with the 
 <code>String</code> representation of this path.
 <p> If this path was created by invoking the <code>File</code> <code>toPath</code>
  method then there is no guarantee that the <code>File</code>
  object returned by this method is <code>equal</code> to the
  original <code>File</code>.
 @return a <code>File</code> object representing this path
 @throw UnsupportedOperationException
 if this <code>Path</code> is not associated with the default provider
 */
- (JavaIoFile *)toFile;

/*!
 @brief Registers the file located by this path with a watch service.
 <p> In this release, this path locates a directory that exists. The
  directory is registered with the watch service so that entries in the
  directory can be watched. The <code>events</code> parameter is the events to
  register and may contain the following events: 
 <ul>
    <li><code>ENTRY_CREATE</code> -
        entry created or moved into the directory</li>
    <li><code>ENTRY_DELETE</code> -
         entry deleted or moved out of the directory</li>
    <li><code>ENTRY_MODIFY</code> -
         entry in directory was modified</li>
  </ul>
  
 <p> The <code>context</code> for these events is the
  relative path between the directory located by this path, and the path
  that locates the directory entry that is created, deleted, or modified. 
 <p> The set of events may include additional implementation specific
  event that are not defined by the enum <code>StandardWatchEventKinds</code>
  
 <p> The <code>modifiers</code> parameter specifies <em>modifiers</em> that
  qualify how the directory is registered. This release does not define any 
 <em>standard</em> modifiers. It may contain implementation specific modifiers. 
 <p> Where a file is registered with a watch service by means of a symbolic
  link then it is implementation specific if the watch continues to depend
  on the existence of the symbolic link after it is registered.
 @param watcher the watch service to which this object is to be registered
 @param events the events for which this object should be registered
 @param modifiers the modifiers, if any, that modify how the object is registered
 @return a key representing the registration of this object with the
           given watch service
 @throw UnsupportedOperationException
 if unsupported events or modifiers are specified
 @throw IllegalArgumentException
 if an invalid combination of events or modifiers is specified
 @throw ClosedWatchServiceException
 if the watch service is closed
 @throw NotDirectoryException
 if the file is registered to watch the entries in a directory
           and the file is not a directory  <i>(optional specific exception)</i>
 @throw IOException
 if an I/O error occurs
 @throw SecurityException
 In the case of the default provider, and a security manager is
           installed, the <code>checkRead</code>
           method is invoked to check read access to the file.
 */
- (id<JavaNioFileWatchKey>)register__WithJavaNioFileWatchService:(id<JavaNioFileWatchService>)watcher
                             withJavaNioFileWatchEvent_KindArray:(IOSObjectArray *)events
                         withJavaNioFileWatchEvent_ModifierArray:(IOSObjectArray *)modifiers;

/*!
 @brief Registers the file located by this path with a watch service.
 <p> An invocation of this method behaves in exactly the same way as the invocation 
 @code

      watchable.<code>register</code>(watcher, events, new WatchEvent.Modifier[0]); 
  
@endcode
  
 <p> <b>Usage Example:</b>
  Suppose we wish to register a directory for entry create, delete, and modify
  events: 
 @code

      Path dir = ...
      WatchService watcher = ...
      WatchKey key = dir.register(watcher, ENTRY_CREATE, ENTRY_DELETE, ENTRY_MODIFY); 
  
@endcode
 @param watcher The watch service to which this object is to be registered
 @param events The events for which this object should be registered
 @return A key representing the registration of this object with the
           given watch service
 @throw UnsupportedOperationException
 If unsupported events are specified
 @throw IllegalArgumentException
 If an invalid combination of events is specified
 @throw ClosedWatchServiceException
 If the watch service is closed
 @throw NotDirectoryException
 If the file is registered to watch the entries in a directory
           and the file is not a directory  <i>(optional specific exception)</i>
 @throw IOException
 If an I/O error occurs
 @throw SecurityException
 In the case of the default provider, and a security manager is
           installed, the <code>checkRead</code>
           method is invoked to check read access to the file.
 */
- (id<JavaNioFileWatchKey>)register__WithJavaNioFileWatchService:(id<JavaNioFileWatchService>)watcher
                             withJavaNioFileWatchEvent_KindArray:(IOSObjectArray *)events;

/*!
 @brief Returns an iterator over the name elements of this path.
 <p> The first element returned by the iterator represents the name
  element that is closest to the root in the directory hierarchy, the
  second element is the next closest, and so on. The last element returned
  is the name of the file or directory denoted by this path. The <code>root</code>
  component, if present, is not returned by the iterator.
 @return an iterator over the name elements of this path.
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Compares two abstract paths lexicographically.The ordering defined by
  this method is provider specific, and in the case of the default
  provider, platform specific.
 This method does not access the file system
  and neither file is required to exist. 
 <p> This method may not be used to compare paths that are associated
  with different file system providers.
 @param other the path compared to this path.
 @return zero if the argument is <code>equal</code> to this path, a
           value less than zero if this path is lexicographically less than
           the argument, or a value greater than zero if this path is
           lexicographically greater than the argument
 @throw ClassCastException
 if the paths are associated with different providers
 */
- (jint)compareToWithId:(id<JavaNioFilePath>)other;

/*!
 @brief Tests this path for equality with the given object.
 <p> If the given object is not a Path, or is a Path associated with a
  different <code>FileSystem</code>, then this method returns <code>false</code>.
  
 <p> Whether or not two path are equal depends on the file system
  implementation. In some cases the paths are compared without regard
  to case, and others are case sensitive. This method does not access the
  file system and the file is not required to exist. Where required, the 
 <code>isSameFile</code> method may be used to check if two
  paths locate the same file. 
 <p> This method satisfies the general contract of the <code>Object.equals</code>
  method. </p>
 @param other the object to which this object is to be compared
 @return <code>true</code> if, and only if, the given object is a <code>Path</code>
           that is identical to this <code>Path</code>
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Computes a hash code for this path.
 <p> The hash code is based upon the components of the path, and
  satisfies the general contract of the <code>Object.hashCode</code>
  method.
 @return the hash-code value for this path
 */
- (NSUInteger)hash;

/*!
 @brief Returns the string representation of this path.
 <p> If this path was created by converting a path string using the 
 <code>getPath</code> method then the path string returned
  by this method may differ from the original String used to create the path. 
 <p> The returned path string uses the default name <code>separator</code>
  to separate names in the path.
 @return the string representation of this path
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFilePath)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFilePath)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFilePath")
