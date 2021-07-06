//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/text/Collator.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaTextCollator")
#ifdef RESTRICT_JavaTextCollator
#define INCLUDE_ALL_JavaTextCollator 0
#else
#define INCLUDE_ALL_JavaTextCollator 1
#endif
#undef RESTRICT_JavaTextCollator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTextCollator_) && (INCLUDE_ALL_JavaTextCollator || defined(INCLUDE_JavaTextCollator))
#define JavaTextCollator_

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include <JRE/java/util/Comparator.h>

@class IOSObjectArray;
@class JavaTextCollationKey;
@class JavaUtilLocale;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionToDoubleFunction;
@protocol JavaUtilFunctionToIntFunction;
@protocol JavaUtilFunctionToLongFunction;

/*!
 @brief The <code>Collator</code> class performs locale-sensitive 
 <code>String</code> comparison.You use this class to build
  searching and sorting routines for natural language text.
 <p>
  <code>Collator</code> is an abstract base class. Subclasses
  implement specific collation strategies. One subclass, 
 <code>RuleBasedCollator</code>, is currently provided with
  the Java Platform and is applicable to a wide set of languages. Other
  subclasses may be created to handle more specialized needs. 
 <p>
  Like other locale-sensitive classes, you can use the static
  factory method, <code>getInstance</code>, to obtain the appropriate 
 <code>Collator</code> object for a given locale. You will only need
  to look at the subclasses of <code>Collator</code> if you need
  to understand the details of a particular collation strategy or
  if you need to modify that strategy. 
 <p>
  The following example shows how to compare two strings using
  the <code>Collator</code> for the default locale. 
 <blockquote>
  @code
 // Compare two strings in the default locale
  Collator myCollator = Collator.getInstance();
  if( myCollator.compare("abc", "ABC") < 0 )
      System.out.println("abc is less than ABC");
  else
      System.out.println("abc is greater than or equal to ABC"); 
 
@endcode
  </blockquote>
  
 <p>
  You can set a <code>Collator</code>'s <em>strength</em> property
  to determine the level of difference considered significant in
  comparisons. Four strengths are provided: <code>PRIMARY</code>,
  <code>SECONDARY</code>, <code>TERTIARY</code>, and <code>IDENTICAL</code>.
  The exact assignment of strengths to language features is
  locale dependant.  For example, in Czech, "e" and "f" are considered
  primary differences, while "e" and "&#283;" are secondary differences,
  "e" and "E" are tertiary differences and "e" and "e" are identical.
  The following shows how both case and accents could be ignored for
  US English. 
 <blockquote>
  @code

  //Get the Collator for US English and set its strength to PRIMARY
  Collator usCollator = Collator.getInstance(Locale.US);
  usCollator.setStrength(Collator.PRIMARY);
  if( usCollator.compare("abc", "ABC") == 0 ) {
      System.out.println("Strings are equivalent");
  } 
  
@endcode
  </blockquote>
  <p>
  For comparing <code>String</code>s exactly once, the <code>compare</code>
  method provides the best performance. When sorting a list of 
 <code>String</code>s however, it is generally necessary to compare each 
 <code>String</code> multiple times. In this case, <code>CollationKey</code>s
  provide better performance. The <code>CollationKey</code> class converts
  a <code>String</code> to a series of bits that can be compared bitwise
  against other <code>CollationKey</code>s. A <code>CollationKey</code> is
  created by a <code>Collator</code> object for a given <code>String</code>.
  <br>
  <strong>Note:</strong> <code>CollationKey</code>s from different 
 <code>Collator</code>s can not be compared. See the class description
  for <code>CollationKey</code>
  for an example using <code>CollationKey</code>s.
 - seealso: RuleBasedCollator
 - seealso: CollationKey
 - seealso: CollationElementIterator
 - seealso: Locale
 @author Helena Shih, Laura Werner, Richard Gillam
 */
@interface JavaTextCollator : NSObject < JavaUtilComparator, NSCopying >
@property (readonly, class) jint NO_DECOMPOSITION NS_SWIFT_NAME(NO_DECOMPOSITION);
@property (readonly, class) jint CANONICAL_DECOMPOSITION NS_SWIFT_NAME(CANONICAL_DECOMPOSITION);
@property (readonly, class) jint FULL_DECOMPOSITION NS_SWIFT_NAME(FULL_DECOMPOSITION);
@property (readonly, class) jint PRIMARY NS_SWIFT_NAME(PRIMARY);
@property (readonly, class) jint SECONDARY NS_SWIFT_NAME(SECONDARY);
@property (readonly, class) jint TERTIARY NS_SWIFT_NAME(TERTIARY);
@property (readonly, class) jint IDENTICAL NS_SWIFT_NAME(IDENTICAL);

#pragma mark Public

- (instancetype __nonnull)init;

- (id)java_clone;

/*!
 @brief Compares two objects to determine their relative order.The objects must
  be strings.
 @param object1 the first string to compare.
 @param object2 the second string to compare.
 @return a negative value if <code>object1</code> is less than <code>object2</code>,
          0 if they are equal, and a positive value if <code>object1</code> is
          greater than <code>object2</code>.
 @throw ClassCastException
 if <code>object1</code> or <code>object2</code> is not a <code>String</code>.
 */
- (jint)compareWithId:(id)object1
               withId:(id)object2;

/*!
 @brief Compares two strings to determine their relative order.
 @param string1 the first string to compare.
 @param string2 the second string to compare.
 @return a negative value if <code>string1</code> is less than <code>string2</code>,
          0 if they are equal and a positive value if <code>string1</code> is
          greater than <code>string2</code>.
 */
- (jint)compareWithNSString:(NSString *)string1
               withNSString:(NSString *)string2;

/*!
 @brief Compares two strings using the collation rules to determine if they are
  equal.
 @param string1 the first string to compare.
 @param string2 the second string to compare.
 @return <code>true</code> if <code>string1</code> and <code>string2</code> are equal
          using the collation rules, false otherwise.
 */
- (jboolean)equalsWithNSString:(NSString *)string1
                  withNSString:(NSString *)string2;

/*!
 @brief Returns an array of locales for which custom <code>Collator</code> instances
  are available.
 <p>Note that Android does not support user-supplied locale service providers.
 */
+ (IOSObjectArray *)getAvailableLocales;

/*!
 @brief Returns a <code>CollationKey</code> for the specified string for this collator
  with the current decomposition rule and strength value.
 @param string the source string that is converted into a collation key.
 @return the collation key for <code>string</code>.
 */
- (JavaTextCollationKey *)getCollationKeyWithNSString:(NSString *)string;

/*!
 @brief Returns the decomposition rule for this collator.
 @return the decomposition rule, either <code>NO_DECOMPOSITION</code> or
          <code>CANONICAL_DECOMPOSITION</code>. <code>FULL_DECOMPOSITION</code> is
          not supported.
 */
- (jint)getDecomposition;

/*!
 @brief Returns a <code>Collator</code> instance which is appropriate for the user's default 
 <code>Locale</code>.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 */
+ (JavaTextCollator *)getInstance;

/*!
 @brief Returns a <code>Collator</code> instance which is appropriate for <code>locale</code>.
 */
+ (JavaTextCollator *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns the strength value for this collator.
 @return the strength value, either PRIMARY, SECONDARY, TERTIARY or
          IDENTICAL.
 */
- (jint)getStrength;

/*!
 @brief Sets the decomposition rule for this collator.
 @param value the decomposition rule, either 
 <code>NO_DECOMPOSITION</code>  or             <code>CANONICAL_DECOMPOSITION</code>
  . <code>FULL_DECOMPOSITION</code>             is not supported.
 @throw IllegalArgumentException
 if the provided decomposition rule is not valid. This includes
             <code>FULL_DECOMPOSITION</code>.
 */
- (void)setDecompositionWithInt:(jint)value;

/*!
 @brief Sets the strength value for this collator.
 @param value the strength value, either PRIMARY, SECONDARY, TERTIARY, or
              IDENTICAL.
 @throw IllegalArgumentException
 if the provided strength value is not valid.
 */
- (void)setStrengthWithInt:(jint)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextCollator)

/*!
 @brief Constant used to specify the decomposition rule.
 */
inline jint JavaTextCollator_get_NO_DECOMPOSITION(void);
#define JavaTextCollator_NO_DECOMPOSITION 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, NO_DECOMPOSITION, jint)

/*!
 @brief Constant used to specify the decomposition rule.
 */
inline jint JavaTextCollator_get_CANONICAL_DECOMPOSITION(void);
#define JavaTextCollator_CANONICAL_DECOMPOSITION 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, CANONICAL_DECOMPOSITION, jint)

/*!
 @brief Constant used to specify the decomposition rule.This value for
  decomposition is not supported.
 */
inline jint JavaTextCollator_get_FULL_DECOMPOSITION(void);
#define JavaTextCollator_FULL_DECOMPOSITION 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, FULL_DECOMPOSITION, jint)

/*!
 @brief Constant used to specify the collation strength.
 */
inline jint JavaTextCollator_get_PRIMARY(void);
#define JavaTextCollator_PRIMARY 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, PRIMARY, jint)

/*!
 @brief Constant used to specify the collation strength.
 */
inline jint JavaTextCollator_get_SECONDARY(void);
#define JavaTextCollator_SECONDARY 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, SECONDARY, jint)

/*!
 @brief Constant used to specify the collation strength.
 */
inline jint JavaTextCollator_get_TERTIARY(void);
#define JavaTextCollator_TERTIARY 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, TERTIARY, jint)

/*!
 @brief Constant used to specify the collation strength.
 */
inline jint JavaTextCollator_get_IDENTICAL(void);
#define JavaTextCollator_IDENTICAL 3
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextCollator, IDENTICAL, jint)

FOUNDATION_EXPORT void JavaTextCollator_init(JavaTextCollator *self);

FOUNDATION_EXPORT IOSObjectArray *JavaTextCollator_getAvailableLocales(void);

FOUNDATION_EXPORT JavaTextCollator *JavaTextCollator_getInstance(void);

FOUNDATION_EXPORT JavaTextCollator *JavaTextCollator_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextCollator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextCollator")
