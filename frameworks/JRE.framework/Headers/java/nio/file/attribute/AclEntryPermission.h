//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/AclEntryPermission.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributeAclEntryPermission")
#ifdef RESTRICT_JavaNioFileAttributeAclEntryPermission
#define INCLUDE_ALL_JavaNioFileAttributeAclEntryPermission 0
#else
#define INCLUDE_ALL_JavaNioFileAttributeAclEntryPermission 1
#endif
#undef RESTRICT_JavaNioFileAttributeAclEntryPermission

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributeAclEntryPermission_) && (INCLUDE_ALL_JavaNioFileAttributeAclEntryPermission || defined(INCLUDE_JavaNioFileAttributeAclEntryPermission))
#define JavaNioFileAttributeAclEntryPermission_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaNioFileAttributeAclEntryPermission_Enum) {
  JavaNioFileAttributeAclEntryPermission_Enum_READ_DATA = 0,
  JavaNioFileAttributeAclEntryPermission_Enum_WRITE_DATA = 1,
  JavaNioFileAttributeAclEntryPermission_Enum_APPEND_DATA = 2,
  JavaNioFileAttributeAclEntryPermission_Enum_READ_NAMED_ATTRS = 3,
  JavaNioFileAttributeAclEntryPermission_Enum_WRITE_NAMED_ATTRS = 4,
  JavaNioFileAttributeAclEntryPermission_Enum_EXECUTE = 5,
  JavaNioFileAttributeAclEntryPermission_Enum_DELETE_CHILD = 6,
  JavaNioFileAttributeAclEntryPermission_Enum_READ_ATTRIBUTES = 7,
  JavaNioFileAttributeAclEntryPermission_Enum_WRITE_ATTRIBUTES = 8,
  JavaNioFileAttributeAclEntryPermission_Enum_DELETE = 9,
  JavaNioFileAttributeAclEntryPermission_Enum_READ_ACL = 10,
  JavaNioFileAttributeAclEntryPermission_Enum_WRITE_ACL = 11,
  JavaNioFileAttributeAclEntryPermission_Enum_WRITE_OWNER = 12,
  JavaNioFileAttributeAclEntryPermission_Enum_SYNCHRONIZE = 13,
};

/*!
 @brief Defines the permissions for use with the permissions component of an ACL 
 <code>entry</code>.
 @since 1.7
 */
@interface JavaNioFileAttributeAclEntryPermission : JavaLangEnum
@property (readonly, class, strong) JavaNioFileAttributeAclEntryPermission *LIST_DIRECTORY NS_SWIFT_NAME(LIST_DIRECTORY);
@property (readonly, class, strong) JavaNioFileAttributeAclEntryPermission *ADD_FILE NS_SWIFT_NAME(ADD_FILE);
@property (readonly, class, strong) JavaNioFileAttributeAclEntryPermission *ADD_SUBDIRECTORY NS_SWIFT_NAME(ADD_SUBDIRECTORY);

@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *READ_DATA NS_SWIFT_NAME(READ_DATA);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *WRITE_DATA NS_SWIFT_NAME(WRITE_DATA);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *APPEND_DATA NS_SWIFT_NAME(APPEND_DATA);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *READ_NAMED_ATTRS NS_SWIFT_NAME(READ_NAMED_ATTRS);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *WRITE_NAMED_ATTRS NS_SWIFT_NAME(WRITE_NAMED_ATTRS);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *EXECUTE NS_SWIFT_NAME(EXECUTE);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *DELETE_CHILD NS_SWIFT_NAME(DELETE_CHILD);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *READ_ATTRIBUTES NS_SWIFT_NAME(READ_ATTRIBUTES);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *WRITE_ATTRIBUTES NS_SWIFT_NAME(WRITE_ATTRIBUTES);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *DELETE NS_SWIFT_NAME(DELETE);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *READ_ACL NS_SWIFT_NAME(READ_ACL);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *WRITE_ACL NS_SWIFT_NAME(WRITE_ACL);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *WRITE_OWNER NS_SWIFT_NAME(WRITE_OWNER);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryPermission *SYNCHRONIZE NS_SWIFT_NAME(SYNCHRONIZE);
#pragma mark Public

+ (JavaNioFileAttributeAclEntryPermission *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaNioFileAttributeAclEntryPermission_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaNioFileAttributeAclEntryPermission)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_values_[];

/*!
 @brief Permission to read the data of the file.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_READ_DATA(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, READ_DATA)

/*!
 @brief Permission to modify the file's data.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_WRITE_DATA(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, WRITE_DATA)

/*!
 @brief Permission to append data to a file.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_APPEND_DATA(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, APPEND_DATA)

/*!
 @brief Permission to read the named attributes of a file.
 <p> <a href="http://www.ietf.org/rfc/rfc3530.txt">RFC&nbsp;3530: Network
  File System (NFS) version 4 Protocol</a> defines <em>named attributes</em>
  as opaque files associated with a file in the file system.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_READ_NAMED_ATTRS(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, READ_NAMED_ATTRS)

/*!
 @brief Permission to write the named attributes of a file.
 <p> <a href="http://www.ietf.org/rfc/rfc3530.txt">RFC&nbsp;3530: Network
  File System (NFS) version 4 Protocol</a> defines <em>named attributes</em>
  as opaque files associated with a file in the file system.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_WRITE_NAMED_ATTRS(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, WRITE_NAMED_ATTRS)

/*!
 @brief Permission to execute a file.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_EXECUTE(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, EXECUTE)

/*!
 @brief Permission to delete a file or directory within a directory.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_DELETE_CHILD(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, DELETE_CHILD)

/*!
 @brief The ability to read (non-acl) file attributes.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_READ_ATTRIBUTES(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, READ_ATTRIBUTES)

/*!
 @brief The ability to write (non-acl) file attributes.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_WRITE_ATTRIBUTES(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, WRITE_ATTRIBUTES)

/*!
 @brief Permission to delete the file.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_DELETE(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, DELETE)

/*!
 @brief Permission to read the ACL attribute.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_READ_ACL(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, READ_ACL)

/*!
 @brief Permission to write the ACL attribute.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_WRITE_ACL(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, WRITE_ACL)

/*!
 @brief Permission to change the owner.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_WRITE_OWNER(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, WRITE_OWNER)

/*!
 @brief Permission to access file locally at the server with synchronous reads
  and writes.
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_SYNCHRONIZE(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryPermission, SYNCHRONIZE)

/*!
 @brief Permission to list the entries of a directory (equal to <code>READ_DATA</code>)
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_LIST_DIRECTORY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_LIST_DIRECTORY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioFileAttributeAclEntryPermission, LIST_DIRECTORY, JavaNioFileAttributeAclEntryPermission *)

/*!
 @brief Permission to add a new file to a directory (equal to <code>WRITE_DATA</code>)
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_ADD_FILE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_ADD_FILE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioFileAttributeAclEntryPermission, ADD_FILE, JavaNioFileAttributeAclEntryPermission *)

/*!
 @brief Permission to create a subdirectory to a directory (equal to <code>APPEND_DATA</code>)
 */
inline JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_get_ADD_SUBDIRECTORY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_ADD_SUBDIRECTORY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioFileAttributeAclEntryPermission, ADD_SUBDIRECTORY, JavaNioFileAttributeAclEntryPermission *)

FOUNDATION_EXPORT IOSObjectArray *JavaNioFileAttributeAclEntryPermission_values(void);

FOUNDATION_EXPORT JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaNioFileAttributeAclEntryPermission *JavaNioFileAttributeAclEntryPermission_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributeAclEntryPermission)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributeAclEntryPermission")
