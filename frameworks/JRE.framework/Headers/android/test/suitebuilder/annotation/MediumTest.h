//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/test/suitebuilder/annotation/MediumTest.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_AndroidTestSuitebuilderAnnotationMediumTest")
#ifdef RESTRICT_AndroidTestSuitebuilderAnnotationMediumTest
#define INCLUDE_ALL_AndroidTestSuitebuilderAnnotationMediumTest 0
#else
#define INCLUDE_ALL_AndroidTestSuitebuilderAnnotationMediumTest 1
#endif
#undef RESTRICT_AndroidTestSuitebuilderAnnotationMediumTest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidTestSuitebuilderAnnotationMediumTest_) && (INCLUDE_ALL_AndroidTestSuitebuilderAnnotationMediumTest || defined(INCLUDE_AndroidTestSuitebuilderAnnotationMediumTest))
#define AndroidTestSuitebuilderAnnotationMediumTest_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include <JRE/java/lang/annotation/Annotation.h>

@class IOSClass;

/*!
 @brief Marks a test that should run as part of the medium tests.
 */
@protocol AndroidTestSuitebuilderAnnotationMediumTest < JavaLangAnnotationAnnotation >

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

@interface AndroidTestSuitebuilderAnnotationMediumTest : NSObject < AndroidTestSuitebuilderAnnotationMediumTest >

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTestSuitebuilderAnnotationMediumTest)

FOUNDATION_EXPORT id<AndroidTestSuitebuilderAnnotationMediumTest> create_AndroidTestSuitebuilderAnnotationMediumTest(void);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTestSuitebuilderAnnotationMediumTest)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidTestSuitebuilderAnnotationMediumTest")
