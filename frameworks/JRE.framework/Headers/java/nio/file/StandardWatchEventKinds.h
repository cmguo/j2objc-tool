//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/StandardWatchEventKinds.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioFileStandardWatchEventKinds")
#ifdef RESTRICT_JavaNioFileStandardWatchEventKinds
#define INCLUDE_ALL_JavaNioFileStandardWatchEventKinds 0
#else
#define INCLUDE_ALL_JavaNioFileStandardWatchEventKinds 1
#endif
#undef RESTRICT_JavaNioFileStandardWatchEventKinds

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileStandardWatchEventKinds_) && (INCLUDE_ALL_JavaNioFileStandardWatchEventKinds || defined(INCLUDE_JavaNioFileStandardWatchEventKinds))
#define JavaNioFileStandardWatchEventKinds_

@protocol JavaNioFileWatchEvent_Kind;

/*!
 @brief Defines the <em>standard</em> event kinds.
 @since 1.7
 */
@interface JavaNioFileStandardWatchEventKinds : NSObject
@property (readonly, class, strong) id<JavaNioFileWatchEvent_Kind> OVERFLOW_ NS_SWIFT_NAME(OVERFLOW_);
@property (readonly, class, strong) id<JavaNioFileWatchEvent_Kind> ENTRY_CREATE NS_SWIFT_NAME(ENTRY_CREATE);
@property (readonly, class, strong) id<JavaNioFileWatchEvent_Kind> ENTRY_DELETE NS_SWIFT_NAME(ENTRY_DELETE);
@property (readonly, class, strong) id<JavaNioFileWatchEvent_Kind> ENTRY_MODIFY NS_SWIFT_NAME(ENTRY_MODIFY);

@end

J2OBJC_STATIC_INIT(JavaNioFileStandardWatchEventKinds)

/*!
 @brief A special event to indicate that events may have been lost or
  discarded.
 <p> The <code>context</code> for this event is
  implementation specific and may be <code>null</code>. The event <code>count</code>
  may be greater than <code>1</code>.
 - seealso: WatchService
 */
inline id<JavaNioFileWatchEvent_Kind> JavaNioFileStandardWatchEventKinds_get_OVERFLOW(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaNioFileWatchEvent_Kind> JavaNioFileStandardWatchEventKinds_OVERFLOW;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioFileStandardWatchEventKinds, OVERFLOW, id<JavaNioFileWatchEvent_Kind>)

/*!
 @brief Directory entry created.
 <p> When a directory is registered for this event then the <code>WatchKey</code>
  is queued when it is observed that an entry is created in the directory
  or renamed into the directory. The event <code>count</code>
  for this event is always <code>1</code>.
 */
inline id<JavaNioFileWatchEvent_Kind> JavaNioFileStandardWatchEventKinds_get_ENTRY_CREATE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaNioFileWatchEvent_Kind> JavaNioFileStandardWatchEventKinds_ENTRY_CREATE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioFileStandardWatchEventKinds, ENTRY_CREATE, id<JavaNioFileWatchEvent_Kind>)

/*!
 @brief Directory entry deleted.
 <p> When a directory is registered for this event then the <code>WatchKey</code>
  is queued when it is observed that an entry is deleted or renamed out of
  the directory. The event <code>count</code> for this event
  is always <code>1</code>.
 */
inline id<JavaNioFileWatchEvent_Kind> JavaNioFileStandardWatchEventKinds_get_ENTRY_DELETE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaNioFileWatchEvent_Kind> JavaNioFileStandardWatchEventKinds_ENTRY_DELETE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioFileStandardWatchEventKinds, ENTRY_DELETE, id<JavaNioFileWatchEvent_Kind>)

/*!
 @brief Directory entry modified.
 <p> When a directory is registered for this event then the <code>WatchKey</code>
  is queued when it is observed that an entry in the directory has been
  modified. The event <code>count</code> for this event is 
 <code>1</code> or greater.
 */
inline id<JavaNioFileWatchEvent_Kind> JavaNioFileStandardWatchEventKinds_get_ENTRY_MODIFY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaNioFileWatchEvent_Kind> JavaNioFileStandardWatchEventKinds_ENTRY_MODIFY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioFileStandardWatchEventKinds, ENTRY_MODIFY, id<JavaNioFileWatchEvent_Kind>)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileStandardWatchEventKinds)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileStandardWatchEventKinds")
