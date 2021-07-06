//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/PosixFileAttributes.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributePosixFileAttributes")
#ifdef RESTRICT_JavaNioFileAttributePosixFileAttributes
#define INCLUDE_ALL_JavaNioFileAttributePosixFileAttributes 0
#else
#define INCLUDE_ALL_JavaNioFileAttributePosixFileAttributes 1
#endif
#undef RESTRICT_JavaNioFileAttributePosixFileAttributes

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributePosixFileAttributes_) && (INCLUDE_ALL_JavaNioFileAttributePosixFileAttributes || defined(INCLUDE_JavaNioFileAttributePosixFileAttributes))
#define JavaNioFileAttributePosixFileAttributes_

#define RESTRICT_JavaNioFileAttributeBasicFileAttributes 1
#define INCLUDE_JavaNioFileAttributeBasicFileAttributes 1
#include <JRE/java/nio/file/attribute/BasicFileAttributes.h>

@protocol JavaNioFileAttributeGroupPrincipal;
@protocol JavaNioFileAttributeUserPrincipal;
@protocol JavaUtilSet;

/*!
 @brief File attributes associated with files on file systems used by operating systems
  that implement the Portable Operating System Interface (POSIX) family of
  standards.
 <p> The POSIX attributes of a file are retrieved using a <code>PosixFileAttributeView</code>
  by invoking its <code>readAttributes</code>
  method.
 @since 1.7
 */
@protocol JavaNioFileAttributePosixFileAttributes < JavaNioFileAttributeBasicFileAttributes, JavaObject >

/*!
 @brief Returns the owner of the file.
 @return the file owner
 - seealso: PosixFileAttributeView#setOwner
 */
- (id<JavaNioFileAttributeUserPrincipal>)owner;

/*!
 @brief Returns the group owner of the file.
 @return the file group owner
 - seealso: PosixFileAttributeView#setGroup
 */
- (id<JavaNioFileAttributeGroupPrincipal>)group;

/*!
 @brief Returns the permissions of the file.The file permissions are returned
  as a set of <code>PosixFilePermission</code> elements.
 The returned set is a
  copy of the file permissions and is modifiable. This allows the result
  to be modified and passed to the <code>setPermissions</code>
  method to update the file's permissions.
 @return the file permissions
 - seealso: PosixFileAttributeView#setPermissions
 */
- (id<JavaUtilSet>)permissions;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileAttributePosixFileAttributes)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributePosixFileAttributes)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributePosixFileAttributes")
