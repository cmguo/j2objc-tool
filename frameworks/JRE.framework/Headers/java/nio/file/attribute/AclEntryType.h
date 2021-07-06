//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/AclEntryType.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributeAclEntryType")
#ifdef RESTRICT_JavaNioFileAttributeAclEntryType
#define INCLUDE_ALL_JavaNioFileAttributeAclEntryType 0
#else
#define INCLUDE_ALL_JavaNioFileAttributeAclEntryType 1
#endif
#undef RESTRICT_JavaNioFileAttributeAclEntryType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributeAclEntryType_) && (INCLUDE_ALL_JavaNioFileAttributeAclEntryType || defined(INCLUDE_JavaNioFileAttributeAclEntryType))
#define JavaNioFileAttributeAclEntryType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include <JRE/java/lang/Enum.h>

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaNioFileAttributeAclEntryType_Enum) {
  JavaNioFileAttributeAclEntryType_Enum_ALLOW = 0,
  JavaNioFileAttributeAclEntryType_Enum_DENY = 1,
  JavaNioFileAttributeAclEntryType_Enum_AUDIT = 2,
  JavaNioFileAttributeAclEntryType_Enum_ALARM = 3,
};

/*!
 @brief A typesafe enumeration of the access control entry types.
 @since 1.7
 */
@interface JavaNioFileAttributeAclEntryType : JavaLangEnum

@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryType *ALLOW NS_SWIFT_NAME(ALLOW);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryType *DENY NS_SWIFT_NAME(DENY);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryType *AUDIT NS_SWIFT_NAME(AUDIT);
@property (readonly, class, nonnull) JavaNioFileAttributeAclEntryType *ALARM NS_SWIFT_NAME(ALARM);
#pragma mark Public

+ (JavaNioFileAttributeAclEntryType *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaNioFileAttributeAclEntryType_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaNioFileAttributeAclEntryType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaNioFileAttributeAclEntryType *JavaNioFileAttributeAclEntryType_values_[];

/*!
 @brief Explicitly grants access to a file or directory.
 */
inline JavaNioFileAttributeAclEntryType *JavaNioFileAttributeAclEntryType_get_ALLOW(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryType, ALLOW)

/*!
 @brief Explicitly denies access to a file or directory.
 */
inline JavaNioFileAttributeAclEntryType *JavaNioFileAttributeAclEntryType_get_DENY(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryType, DENY)

/*!
 @brief Log, in a system dependent way, the access specified in the
  permissions component of the ACL entry.
 */
inline JavaNioFileAttributeAclEntryType *JavaNioFileAttributeAclEntryType_get_AUDIT(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryType, AUDIT)

/*!
 @brief Generate an alarm, in a system dependent way, the access specified in the
  permissions component of the ACL entry.
 */
inline JavaNioFileAttributeAclEntryType *JavaNioFileAttributeAclEntryType_get_ALARM(void);
J2OBJC_ENUM_CONSTANT(JavaNioFileAttributeAclEntryType, ALARM)

FOUNDATION_EXPORT IOSObjectArray *JavaNioFileAttributeAclEntryType_values(void);

FOUNDATION_EXPORT JavaNioFileAttributeAclEntryType *JavaNioFileAttributeAclEntryType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaNioFileAttributeAclEntryType *JavaNioFileAttributeAclEntryType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributeAclEntryType)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributeAclEntryType")
