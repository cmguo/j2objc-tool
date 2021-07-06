//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/lang/UCharacterCategory.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_AndroidIcuLangUCharacterCategory")
#ifdef RESTRICT_AndroidIcuLangUCharacterCategory
#define INCLUDE_ALL_AndroidIcuLangUCharacterCategory 0
#else
#define INCLUDE_ALL_AndroidIcuLangUCharacterCategory 1
#endif
#undef RESTRICT_AndroidIcuLangUCharacterCategory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuLangUCharacterCategory_) && (INCLUDE_ALL_AndroidIcuLangUCharacterCategory || defined(INCLUDE_AndroidIcuLangUCharacterCategory))
#define AndroidIcuLangUCharacterCategory_

#define RESTRICT_AndroidIcuLangUCharacterEnums 1
#define INCLUDE_AndroidIcuLangUCharacterEnums_ECharacterCategory 1
#include <JRE/android/icu/lang/UCharacterEnums.h>

/*!
 @brief Enumerated Unicode category types from the UnicodeData.txt file.
 Used as return results from <a href=UCharacter.html>UCharacter</a>
  Equivalent to icu's UCharCategory.
  Refer to <a href="http://www.unicode.org/Public/UNIDATA/UCD.html">
  Unicode Consortium</a> for more information about UnicodeData.txt. 
 <p>
  <em>NOTE:</em> the UCharacterCategory values are <em>not</em> compatible with
  those returned by java.lang.Character.getType.  UCharacterCategory values
  match the ones used in ICU4C, while java.lang.Character type
  values, though similar, skip the value 17.</p>
  <p>
  This class is not subclassable 
 </p>
 @author Syn Wee Quek
 */
@interface AndroidIcuLangUCharacterCategory : NSObject < AndroidIcuLangUCharacterEnums_ECharacterCategory >

#pragma mark Public

/*!
 @brief Gets the name of the argument category
 @param category to retrieve name
 @return category name
 */
+ (NSString *)toStringWithInt:(jint)category;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuLangUCharacterCategory)

FOUNDATION_EXPORT NSString *AndroidIcuLangUCharacterCategory_toStringWithInt_(jint category);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuLangUCharacterCategory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidIcuLangUCharacterCategory")
