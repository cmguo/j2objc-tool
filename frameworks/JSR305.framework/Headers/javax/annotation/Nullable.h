//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/jsr305/build_result/java/javax/annotation/Nullable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationNullable")
#ifdef RESTRICT_JavaxAnnotationNullable
#define INCLUDE_ALL_JavaxAnnotationNullable 0
#else
#define INCLUDE_ALL_JavaxAnnotationNullable 1
#endif
#undef RESTRICT_JavaxAnnotationNullable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationNullable_) && (INCLUDE_ALL_JavaxAnnotationNullable || defined(INCLUDE_JavaxAnnotationNullable))
#define JavaxAnnotationNullable_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol JavaxAnnotationNullable < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface JavaxAnnotationNullable : NSObject < JavaxAnnotationNullable >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationNullable)

FOUNDATION_EXPORT id<JavaxAnnotationNullable> create_JavaxAnnotationNullable(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationNullable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationNullable")
