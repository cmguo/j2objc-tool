//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/PosixFilePermissions.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributePosixFilePermissions")
#ifdef RESTRICT_JavaNioFileAttributePosixFilePermissions
#define INCLUDE_ALL_JavaNioFileAttributePosixFilePermissions 0
#else
#define INCLUDE_ALL_JavaNioFileAttributePosixFilePermissions 1
#endif
#undef RESTRICT_JavaNioFileAttributePosixFilePermissions

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributePosixFilePermissions_) && (INCLUDE_ALL_JavaNioFileAttributePosixFilePermissions || defined(INCLUDE_JavaNioFileAttributePosixFilePermissions))
#define JavaNioFileAttributePosixFilePermissions_

@protocol JavaNioFileAttributeFileAttribute;
@protocol JavaUtilSet;

/*!
 @brief This class consists exclusively of static methods that operate on sets of 
 <code>PosixFilePermission</code> objects.
 @since 1.7
 */
@interface JavaNioFileAttributePosixFilePermissions : NSObject

#pragma mark Public

/*!
 @brief Creates a <code>FileAttribute</code>, encapsulating a copy of the given file
  permissions, suitable for passing to the <code>createFile</code>
  or <code>createDirectory</code>
  methods.
 @param perms the set of permissions
 @return an attribute encapsulating the given file permissions with
           <code>name</code> <code>"posix:permissions"</code>
 @throw ClassCastException
 if the set contains elements that are not of type <code>PosixFilePermission</code>
 */
+ (id<JavaNioFileAttributeFileAttribute>)asFileAttributeWithJavaUtilSet:(id<JavaUtilSet>)perms;

/*!
 @brief Returns the set of permissions corresponding to a given <code>String</code>
  representation.
 <p> The <code>perms</code> parameter is a <code>String</code> representing the
  permissions. It has 9 characters that are interpreted as three sets of
  three. The first set refers to the owner's permissions; the next to the
  group permissions and the last to others. Within each set, the first
  character is <code>'r'</code> to indicate permission to read, the second
  character is <code>'w'</code> to indicate permission to write, and the third
  character is <code>'x'</code> for execute permission. Where a permission is
  not set then the corresponding character is set to <code>'-'</code>.
  
 <p> <b>Usage Example:</b>
  Suppose we require the set of permissions that indicate the owner has read,
  write, and execute permissions, the group has read and execute permissions
  and others have none. 
 @code

    Set&lt;PosixFilePermission&gt; perms = PosixFilePermissions.fromString("rwxr-x---"); 
  
@endcode
 @param perms string representing a set of permissions
 @return the resulting set of permissions
 @throw IllegalArgumentException
 if the string cannot be converted to a set of permissions
 - seealso: #toString(Set)
 */
+ (id<JavaUtilSet>)fromStringWithNSString:(NSString *)perms;

/*!
 @brief Returns the <code>String</code> representation of a set of permissions.It
  is guaranteed that the returned <code>String</code> can be parsed by the 
 <code>fromString</code> method.
 <p> If the set contains <code>null</code> or elements that are not of type 
 <code>PosixFilePermission</code> then these elements are ignored.
 @param perms the set of permissions
 @return the string representation of the permission set
 */
+ (NSString *)toStringWithJavaUtilSet:(id<JavaUtilSet>)perms;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileAttributePosixFilePermissions)

FOUNDATION_EXPORT NSString *JavaNioFileAttributePosixFilePermissions_toStringWithJavaUtilSet_(id<JavaUtilSet> perms);

FOUNDATION_EXPORT id<JavaUtilSet> JavaNioFileAttributePosixFilePermissions_fromStringWithNSString_(NSString *perms);

FOUNDATION_EXPORT id<JavaNioFileAttributeFileAttribute> JavaNioFileAttributePosixFilePermissions_asFileAttributeWithJavaUtilSet_(id<JavaUtilSet> perms);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributePosixFilePermissions)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributePosixFilePermissions")
