//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/Selection.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_AndroidTextSelection")
#ifdef RESTRICT_AndroidTextSelection
#define INCLUDE_ALL_AndroidTextSelection 0
#else
#define INCLUDE_ALL_AndroidTextSelection 1
#endif
#undef RESTRICT_AndroidTextSelection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidTextSelection_) && (INCLUDE_ALL_AndroidTextSelection || defined(INCLUDE_AndroidTextSelection))
#define AndroidTextSelection_

@protocol AndroidTextSpannable;
@protocol JavaLangCharSequence;

/*!
 @brief Utility class for manipulating cursors and selections in CharSequences.
 A cursor is a selection where the start and end are at the same offset.
 */
@interface AndroidTextSelection : NSObject
@property (readonly, class, strong) id SELECTION_START NS_SWIFT_NAME(SELECTION_START);
@property (readonly, class, strong) id SELECTION_END NS_SWIFT_NAME(SELECTION_END);

#pragma mark Public

/*!
 @brief Move the selection edge to offset <code>index</code>.
 */
+ (void)extendSelectionWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                        withInt:(jint)index;

/*!
 @brief Return the offset of the selection edge or cursor, or -1 if
  there is no selection or cursor.
 */
+ (jint)getSelectionEndWithJavaLangCharSequence:(id<JavaLangCharSequence>)text;

/*!
 @brief Return the offset of the selection anchor or cursor, or -1 if
  there is no selection or cursor.
 */
+ (jint)getSelectionStartWithJavaLangCharSequence:(id<JavaLangCharSequence>)text;

/*!
 @brief Remove the selection or cursor, if any, from the text.
 */
+ (void)removeSelectionWithAndroidTextSpannable:(id<AndroidTextSpannable>)text;

/*!
 @brief Select the entire text.
 */
+ (void)selectAllWithAndroidTextSpannable:(id<AndroidTextSpannable>)text;

/*!
 @brief Move the cursor to offset <code>index</code>.
 */
+ (void)setSelectionWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                     withInt:(jint)index;

/*!
 @brief Set the selection anchor to <code>start</code> and the selection edge
  to <code>stop</code>.
 */
+ (void)setSelectionWithAndroidTextSpannable:(id<AndroidTextSpannable>)text
                                     withInt:(jint)start
                                     withInt:(jint)stop;

@end

J2OBJC_STATIC_INIT(AndroidTextSelection)

inline id AndroidTextSelection_get_SELECTION_START(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id AndroidTextSelection_SELECTION_START;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidTextSelection, SELECTION_START, id)

inline id AndroidTextSelection_get_SELECTION_END(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id AndroidTextSelection_SELECTION_END;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidTextSelection, SELECTION_END, id)

FOUNDATION_EXPORT jint AndroidTextSelection_getSelectionStartWithJavaLangCharSequence_(id<JavaLangCharSequence> text);

FOUNDATION_EXPORT jint AndroidTextSelection_getSelectionEndWithJavaLangCharSequence_(id<JavaLangCharSequence> text);

FOUNDATION_EXPORT void AndroidTextSelection_setSelectionWithAndroidTextSpannable_withInt_withInt_(id<AndroidTextSpannable> text, jint start, jint stop);

FOUNDATION_EXPORT void AndroidTextSelection_setSelectionWithAndroidTextSpannable_withInt_(id<AndroidTextSpannable> text, jint index);

FOUNDATION_EXPORT void AndroidTextSelection_selectAllWithAndroidTextSpannable_(id<AndroidTextSpannable> text);

FOUNDATION_EXPORT void AndroidTextSelection_extendSelectionWithAndroidTextSpannable_withInt_(id<AndroidTextSpannable> text, jint index);

FOUNDATION_EXPORT void AndroidTextSelection_removeSelectionWithAndroidTextSpannable_(id<AndroidTextSpannable> text);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextSelection)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidTextSelection")
