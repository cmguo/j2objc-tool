//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: openjdk/src/share/classes/java/lang/reflect/AnnotatedArrayType.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaLangReflectAnnotatedArrayType")
#ifdef RESTRICT_JavaLangReflectAnnotatedArrayType
#define INCLUDE_ALL_JavaLangReflectAnnotatedArrayType 0
#else
#define INCLUDE_ALL_JavaLangReflectAnnotatedArrayType 1
#endif
#undef RESTRICT_JavaLangReflectAnnotatedArrayType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangReflectAnnotatedArrayType_) && (INCLUDE_ALL_JavaLangReflectAnnotatedArrayType || defined(INCLUDE_JavaLangReflectAnnotatedArrayType))
#define JavaLangReflectAnnotatedArrayType_

#define RESTRICT_JavaLangReflectAnnotatedType 1
#define INCLUDE_JavaLangReflectAnnotatedType 1
#include <JRE/java/lang/reflect/AnnotatedType.h>

/*!
 @brief <code>AnnotatedArrayType</code> represents the potentially annotated use of an
  array type, whose component type may itself represent the annotated use of a
  type.
 @since 1.8
 */
@protocol JavaLangReflectAnnotatedArrayType < JavaLangReflectAnnotatedType, JavaObject >

/*!
 @brief Returns the potentially annotated generic component type of this array type.
 @return the potentially annotated generic component type of this array type
 */
- (id<JavaLangReflectAnnotatedType>)getAnnotatedGenericComponentType;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectAnnotatedArrayType)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectAnnotatedArrayType)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectAnnotatedArrayType")
