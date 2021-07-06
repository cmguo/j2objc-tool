//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/Permissions.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaSecurityPermissions")
#ifdef RESTRICT_JavaSecurityPermissions
#define INCLUDE_ALL_JavaSecurityPermissions 0
#else
#define INCLUDE_ALL_JavaSecurityPermissions 1
#endif
#undef RESTRICT_JavaSecurityPermissions

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityPermissions_) && (INCLUDE_ALL_JavaSecurityPermissions || defined(INCLUDE_JavaSecurityPermissions))
#define JavaSecurityPermissions_

#define RESTRICT_JavaSecurityPermissionCollection 1
#define INCLUDE_JavaSecurityPermissionCollection 1
#include <JRE/java/security/PermissionCollection.h>

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include <JRE/java/io/Serializable.h>

@class JavaSecurityPermission;
@protocol JavaUtilEnumeration;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityPermissions : JavaSecurityPermissionCollection < JavaIoSerializable >

#pragma mark Public

- (instancetype __nonnull)init;

- (void)addWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (id<JavaUtilEnumeration>)elements;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPermissions)

FOUNDATION_EXPORT void JavaSecurityPermissions_init(JavaSecurityPermissions *self);

FOUNDATION_EXPORT JavaSecurityPermissions *new_JavaSecurityPermissions_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityPermissions *create_JavaSecurityPermissions_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPermissions)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityPermissions")
