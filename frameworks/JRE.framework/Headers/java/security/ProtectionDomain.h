//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/ProtectionDomain.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaSecurityProtectionDomain")
#ifdef RESTRICT_JavaSecurityProtectionDomain
#define INCLUDE_ALL_JavaSecurityProtectionDomain 0
#else
#define INCLUDE_ALL_JavaSecurityProtectionDomain 1
#endif
#undef RESTRICT_JavaSecurityProtectionDomain

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityProtectionDomain_) && (INCLUDE_ALL_JavaSecurityProtectionDomain || defined(INCLUDE_JavaSecurityProtectionDomain))
#define JavaSecurityProtectionDomain_

@class IOSObjectArray;
@class JavaLangClassLoader;
@class JavaSecurityCodeSource;
@class JavaSecurityPermission;
@class JavaSecurityPermissionCollection;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityProtectionDomain : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithJavaSecurityCodeSource:(JavaSecurityCodeSource *)codesource
                    withJavaSecurityPermissionCollection:(JavaSecurityPermissionCollection *)permissions;

- (instancetype __nonnull)initWithJavaSecurityCodeSource:(JavaSecurityCodeSource *)codesource
                    withJavaSecurityPermissionCollection:(JavaSecurityPermissionCollection *)permissions
                                 withJavaLangClassLoader:(JavaLangClassLoader *)classloader
                          withJavaSecurityPrincipalArray:(IOSObjectArray *)principals;

- (JavaLangClassLoader *)getClassLoader;

- (JavaSecurityCodeSource *)getCodeSource;

- (JavaSecurityPermissionCollection *)getPermissions;

- (IOSObjectArray *)getPrincipals;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityProtectionDomain)

FOUNDATION_EXPORT void JavaSecurityProtectionDomain_initWithJavaSecurityCodeSource_withJavaSecurityPermissionCollection_(JavaSecurityProtectionDomain *self, JavaSecurityCodeSource *codesource, JavaSecurityPermissionCollection *permissions);

FOUNDATION_EXPORT JavaSecurityProtectionDomain *new_JavaSecurityProtectionDomain_initWithJavaSecurityCodeSource_withJavaSecurityPermissionCollection_(JavaSecurityCodeSource *codesource, JavaSecurityPermissionCollection *permissions) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityProtectionDomain *create_JavaSecurityProtectionDomain_initWithJavaSecurityCodeSource_withJavaSecurityPermissionCollection_(JavaSecurityCodeSource *codesource, JavaSecurityPermissionCollection *permissions);

FOUNDATION_EXPORT void JavaSecurityProtectionDomain_initWithJavaSecurityCodeSource_withJavaSecurityPermissionCollection_withJavaLangClassLoader_withJavaSecurityPrincipalArray_(JavaSecurityProtectionDomain *self, JavaSecurityCodeSource *codesource, JavaSecurityPermissionCollection *permissions, JavaLangClassLoader *classloader, IOSObjectArray *principals);

FOUNDATION_EXPORT JavaSecurityProtectionDomain *new_JavaSecurityProtectionDomain_initWithJavaSecurityCodeSource_withJavaSecurityPermissionCollection_withJavaLangClassLoader_withJavaSecurityPrincipalArray_(JavaSecurityCodeSource *codesource, JavaSecurityPermissionCollection *permissions, JavaLangClassLoader *classloader, IOSObjectArray *principals) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityProtectionDomain *create_JavaSecurityProtectionDomain_initWithJavaSecurityCodeSource_withJavaSecurityPermissionCollection_withJavaLangClassLoader_withJavaSecurityPrincipalArray_(JavaSecurityCodeSource *codesource, JavaSecurityPermissionCollection *permissions, JavaLangClassLoader *classloader, IOSObjectArray *principals);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityProtectionDomain)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityProtectionDomain")
