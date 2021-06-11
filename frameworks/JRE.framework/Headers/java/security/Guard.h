//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/Guard.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityGuard")
#ifdef RESTRICT_JavaSecurityGuard
#define INCLUDE_ALL_JavaSecurityGuard 0
#else
#define INCLUDE_ALL_JavaSecurityGuard 1
#endif
#undef RESTRICT_JavaSecurityGuard

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityGuard_) && (INCLUDE_ALL_JavaSecurityGuard || defined(INCLUDE_JavaSecurityGuard))
#define JavaSecurityGuard_

/*!
 @brief <p> This interface represents a guard, which is an object that is used
  to protect access to another object.
 <p>This interface contains a single method, <code>checkGuard</code>,
  with a single <code>object</code> argument. <code>checkGuard</code> is
  invoked (by the GuardedObject <code>getObject</code> method)
  to determine whether or not to allow access to the object.
 - seealso: GuardedObject
 @author Roland Schemers
 @author Li Gong
 */
@protocol JavaSecurityGuard < JavaObject >

/*!
 @brief Determines whether or not to allow access to the guarded object 
 <code>object</code>.Returns silently if access is allowed.
 Otherwise, throws a SecurityException.
 @param object the object being protected by the guard.
 @throw SecurityExceptionif access is denied.
 */
- (void)checkGuardWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityGuard)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityGuard)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityGuard")
