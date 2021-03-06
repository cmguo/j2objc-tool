//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/jsr305/build_result/java/javax/annotation/concurrent/NotThreadSafe.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe")
#ifdef RESTRICT_JavaxAnnotationConcurrentNotThreadSafe
#define INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe 0
#else
#define INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe 1
#endif
#undef RESTRICT_JavaxAnnotationConcurrentNotThreadSafe

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationConcurrentNotThreadSafe_) && (INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe || defined(INCLUDE_JavaxAnnotationConcurrentNotThreadSafe))
#define JavaxAnnotationConcurrentNotThreadSafe_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief NotThreadSafe
  
  The class to which this annotation is applied is not thread-safe.This
  annotation primarily exists for clarifying the non-thread-safety of a class
  that might otherwise be assumed to be thread-safe, despite the fact that it
  is a bad idea to assume a class is thread-safe without good reason.
 - seealso: ThreadSafe
 */
@protocol JavaxAnnotationConcurrentNotThreadSafe < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationConcurrentNotThreadSafe : NSObject < JavaxAnnotationConcurrentNotThreadSafe >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationConcurrentNotThreadSafe)

FOUNDATION_EXPORT id<JavaxAnnotationConcurrentNotThreadSafe> create_JavaxAnnotationConcurrentNotThreadSafe(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationConcurrentNotThreadSafe)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationConcurrentNotThreadSafe")
