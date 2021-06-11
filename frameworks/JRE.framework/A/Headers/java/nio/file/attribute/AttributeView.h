//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/AttributeView.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributeAttributeView")
#ifdef RESTRICT_JavaNioFileAttributeAttributeView
#define INCLUDE_ALL_JavaNioFileAttributeAttributeView 0
#else
#define INCLUDE_ALL_JavaNioFileAttributeAttributeView 1
#endif
#undef RESTRICT_JavaNioFileAttributeAttributeView

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributeAttributeView_) && (INCLUDE_ALL_JavaNioFileAttributeAttributeView || defined(INCLUDE_JavaNioFileAttributeAttributeView))
#define JavaNioFileAttributeAttributeView_

/*!
 @brief An object that provides a read-only or updatable <em>view</em> of non-opaque
  values associated with an object in a filesystem.This interface is extended
  or implemented by specific attribute views that define the attributes
  supported by the view.
 A specific attribute view will typically define
  type-safe methods to read or update the attributes that it supports.
 @since 1.7
 */
@protocol JavaNioFileAttributeAttributeView < JavaObject >

/*!
 @brief Returns the name of the attribute view.
 @return the name of the attribute view
 */
- (NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileAttributeAttributeView)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributeAttributeView)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributeAttributeView")
