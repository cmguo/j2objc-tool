//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/DosFileAttributes.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributeDosFileAttributes")
#ifdef RESTRICT_JavaNioFileAttributeDosFileAttributes
#define INCLUDE_ALL_JavaNioFileAttributeDosFileAttributes 0
#else
#define INCLUDE_ALL_JavaNioFileAttributeDosFileAttributes 1
#endif
#undef RESTRICT_JavaNioFileAttributeDosFileAttributes

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributeDosFileAttributes_) && (INCLUDE_ALL_JavaNioFileAttributeDosFileAttributes || defined(INCLUDE_JavaNioFileAttributeDosFileAttributes))
#define JavaNioFileAttributeDosFileAttributes_

#define RESTRICT_JavaNioFileAttributeBasicFileAttributes 1
#define INCLUDE_JavaNioFileAttributeBasicFileAttributes 1
#include <JRE/java/nio/file/attribute/BasicFileAttributes.h>

/*!
 @brief File attributes associated with a file in a file system that supports
  legacy "DOS" attributes.
 <p> <b>Usage Example:</b>
  @code

     Path file = ...
     DosFileAttributes attrs = Files.readAttributes(file, DosFileAttributes.class); 
  
@endcode
 @since 1.7
 */
@protocol JavaNioFileAttributeDosFileAttributes < JavaNioFileAttributeBasicFileAttributes, JavaObject >

/*!
 @brief Returns the value of the read-only attribute.
 <p> This attribute is often used as a simple access control mechanism
  to prevent files from being deleted or updated. Whether the file system
  or platform does any enforcement to prevent <em>read-only</em> files
  from being updated is implementation specific.
 @return the value of the read-only attribute
 */
- (jboolean)isReadOnly;

/*!
 @brief Returns the value of the hidden attribute.
 <p> This attribute is often used to indicate if the file is visible to
  users.
 @return the value of the hidden attribute
 */
- (jboolean)isHidden;

/*!
 @brief Returns the value of the archive attribute.
 <p> This attribute is typically used by backup programs.
 @return the value of the archive attribute
 */
- (jboolean)isArchive;

/*!
 @brief Returns the value of the system attribute.
 <p> This attribute is often used to indicate that the file is a component
  of the operating system.
 @return the value of the system attribute
 */
- (jboolean)isSystem;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileAttributeDosFileAttributes)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributeDosFileAttributes)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributeDosFileAttributes")
