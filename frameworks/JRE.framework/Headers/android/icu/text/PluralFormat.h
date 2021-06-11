//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/text/PluralFormat.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidIcuTextPluralFormat")
#ifdef RESTRICT_AndroidIcuTextPluralFormat
#define INCLUDE_ALL_AndroidIcuTextPluralFormat 0
#else
#define INCLUDE_ALL_AndroidIcuTextPluralFormat 1
#endif
#undef RESTRICT_AndroidIcuTextPluralFormat

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuTextPluralFormat_) && (INCLUDE_ALL_AndroidIcuTextPluralFormat || defined(INCLUDE_AndroidIcuTextPluralFormat))
#define AndroidIcuTextPluralFormat_

#define RESTRICT_AndroidIcuTextUFormat 1
#define INCLUDE_AndroidIcuTextUFormat 1
#include "android/icu/text/UFormat.h"

@class AndroidIcuTextMessagePattern;
@class AndroidIcuTextNumberFormat;
@class AndroidIcuTextPluralRules;
@class AndroidIcuTextPluralRules_PluralType;
@class AndroidIcuUtilULocale;
@class JavaLangStringBuffer;
@class JavaTextFieldPosition;
@class JavaTextParsePosition;
@class JavaUtilLocale;
@protocol AndroidIcuTextPluralFormat_PluralSelector;
@protocol AndroidIcuTextRbnfLenientScanner;

/*!
 @brief <code>PluralFormat</code> supports the creation of internationalized
  messages with plural inflection.It is based on <i>plural
  selection</i>, i.e. the caller specifies messages for each
  plural case that can appear in the user's language and the 
 <code>PluralFormat</code> selects the appropriate message based on
  the number.
 <h3>The Problem of Plural Forms in Internationalized Messages</h3>
  <p>
  Different languages have different ways to inflect
  plurals. Creating internationalized messages that include plural
  forms is only feasible when the framework is able to handle plural
  forms of <i>all</i> languages correctly. <code>ChoiceFormat</code>
  doesn't handle this well, because it attaches a number interval to
  each message and selects the message whose interval contains a
  given number. This can only handle a finite number of
  intervals. But in some languages, like Polish, one plural case
  applies to infinitely many intervals (e.g., the paucal case applies to
  numbers ending with 2, 3, or 4 except those ending with 12, 13, or
  14). Thus <code>ChoiceFormat</code> is not adequate. 
 <p>
  <code>PluralFormat</code> deals with this by breaking the problem
  into two parts: 
 <ul>
  <li>It uses <code>PluralRules</code> that can define more complex
      conditions for a plural case than just a single interval. These plural
      rules define both what plural cases exist in a language, and to
      which numbers these cases apply. 
 <li>It provides predefined plural rules for many languages. Thus, the programmer
      need not worry about the plural cases of a language and
      does not have to define the plural cases; they can simply
      use the predefined keywords. The whole plural formatting of messages can
      be done using localized patterns from resource bundles. For predefined plural
      rules, see the CLDR <i>Language Plural Rules</i> page at
     http://unicode.org/repos/cldr-tmp/trunk/diff/supplemental/language_plural_rules.html 
 </ul>
  
 <h4>Usage of <code>PluralFormat</code></h4>
  <p>Note: Typically, plural formatting is done via <code>MessageFormat</code>
  with a <code>plural</code> argument type,
  rather than using a stand-alone <code>PluralFormat</code>.
  <p>
  This discussion assumes that you use <code>PluralFormat</code> with
  a predefined set of plural rules. You can create one using one of
  the constructors that takes a <code>ULocale</code> object. To
  specify the message pattern, you can either pass it to the
  constructor or set it explicitly using the 
 <code>applyPattern()</code> method. The <code>format()</code>
  method takes a number object and selects the message of the
  matching plural case. This message will be returned. 
 <h5>Patterns and Their Interpretation</h5>
  <p>
  The pattern text defines the message output for each plural case of the
  specified locale. Syntax: 
 <blockquote>@code

  pluralStyle = [offsetValue] (selector '{' message '}')+
  offsetValue = "offset:" number
  selector = explicitValue | keyword
  explicitValue = '=' number  // adjacent, no white space in between
  keyword = [^[[:Pattern_Syntax:][:Pattern_White_Space:]]]+
  message: see <code>MessageFormat</code>
   
@endcode</blockquote>
  Pattern_White_Space between syntax elements is ignored, except
  between the {curly braces} and their sub-message,
  and between the '=' and the number of an explicitValue. 
 <p>
  There are 6 predefined case keywords in CLDR/ICU - 'zero', 'one', 'two', 'few', 'many' and
  'other'. You always have to define a message text for the default plural case
  "<code>other</code>" which is contained in every rule set.
  If you do not specify a message text for a particular plural case, the
  message text of the plural case "<code>other</code>" gets assigned to this
  plural case. 
 <p>
  When formatting, the input number is first matched against the explicitValue clauses.
  If there is no exact-number match, then a keyword is selected by calling
  the <code>PluralRules</code> with the input number <em>minus the offset</em>.
  (The offset defaults to 0 if it is omitted from the pattern string.)
  If there is no clause with that keyword, then the "other" clauses is returned. 
 <p>
  An unquoted pound sign (<code>#</code>) in the selected sub-message
  itself (i.e., outside of arguments nested in the sub-message)
  is replaced by the input number minus the offset.
  The number-minus-offset value is formatted using a 
 <code>NumberFormat</code> for the <code>PluralFormat</code>'s locale. If you
  need special number formatting, you have to use a <code>MessageFormat</code>
  and explicitly specify a <code>NumberFormat</code> argument. 
 <strong>Note:</strong> That argument is formatting without subtracting the offset!
  If you need a custom format and have a non-zero offset, then you need to pass the
  number-minus-offset value as a separate parameter. 
 <p>For a usage example, see the <code>MessageFormat</code> class documentation. 
 <h4>Defining Custom Plural Rules</h4>
  <p>If you need to use <code>PluralFormat</code> with custom rules, you can
  create a <code>PluralRules</code> object and pass it to 
 <code>PluralFormat</code>'s constructor. If you also specify a locale in this
  constructor, this locale will be used to format the number in the message
  texts. 
 <p>
  For more information about <code>PluralRules</code>, see 
 <code>PluralRules</code>.
 @author tschumann (Tim Schumann)
 */
@interface AndroidIcuTextPluralFormat : AndroidIcuTextUFormat

#pragma mark Public

/*!
 @brief Creates a new cardinal-number <code>PluralFormat</code> for the default <code>FORMAT</code> locale.
 This locale will be used to get the set of plural rules and for standard
  number formatting.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a new cardinal-number <code>PluralFormat</code> for a given 
 <code>java.util.Locale</code>.
 @param locale the  <code> PluralFormat </code>  will be configured with
          rules for this locale. This locale will also be used for standard         number formatting.
 */
- (instancetype __nonnull)initWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Creates a new cardinal-number <code>PluralFormat</code> for a given set of rules.
 The standard number formatting will be done using the given locale.
 @param locale the default number formatting will be done using this         locale.
 @param rules defines the behavior of the  <code> PluralFormat </code>
          object.
 */
- (instancetype __nonnull)initWithJavaUtilLocale:(JavaUtilLocale *)locale
                   withAndroidIcuTextPluralRules:(AndroidIcuTextPluralRules *)rules;

/*!
 @brief Creates a new <code>PluralFormat</code> for the plural type.
 The standard number formatting will be done using the given <code>java.util.Locale</code>.
 @param locale the default number formatting will be done using this         locale.
 @param type The plural type (e.g., cardinal or ordinal).
 */
- (instancetype __nonnull)initWithJavaUtilLocale:(JavaUtilLocale *)locale
        withAndroidIcuTextPluralRules_PluralType:(AndroidIcuTextPluralRules_PluralType *)type;

/*!
 @brief Creates a new cardinal-number <code>PluralFormat</code> for a given set of rules.
 The standard number formatting will be done using the default <code>FORMAT</code> locale.
 @param rules defines the behavior of the  <code> PluralFormat </code>
          object.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)initWithAndroidIcuTextPluralRules:(AndroidIcuTextPluralRules *)rules;

/*!
 @brief Creates a new cardinal-number <code>PluralFormat</code> for a given set of rules and a
  pattern.
 The standard number formatting will be done using the default <code>FORMAT</code> locale.
 @param rules defines the behavior of the  <code> PluralFormat </code>
          object.
 @param pattern the pattern for this  <code> PluralFormat </code>
  .
 @throw IllegalArgumentExceptionif the pattern is invalid.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)initWithAndroidIcuTextPluralRules:(AndroidIcuTextPluralRules *)rules
                                               withNSString:(NSString *)pattern;

/*!
 @brief Creates a new cardinal-number <code>PluralFormat</code> for a given pattern string.
 The default <code>FORMAT</code> locale will be used to get the set of plural rules and for
  standard number formatting.
 @param pattern the pattern for this  <code> PluralFormat </code>
  .
 @throw IllegalArgumentExceptionif the pattern is invalid.
 - seealso: Category#FORMAT
 */
- (instancetype __nonnull)initWithNSString:(NSString *)pattern;

/*!
 @brief Creates a new cardinal-number <code>PluralFormat</code> for a given locale.
 @param ulocale the  <code> PluralFormat </code>  will be configured with
          rules for this locale. This locale will also be used for standard         number formatting.
 */
- (instancetype __nonnull)initWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)ulocale;

/*!
 @brief Creates a new cardinal-number <code>PluralFormat</code> for a given set of rules.
 The standard number formatting will be done using the given locale.
 @param ulocale the default number formatting will be done using this         locale.
 @param rules defines the behavior of the  <code> PluralFormat </code>
          object.
 */
- (instancetype __nonnull)initWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)ulocale
                          withAndroidIcuTextPluralRules:(AndroidIcuTextPluralRules *)rules;

/*!
 @brief Creates a new cardinal-number <code>PluralFormat</code> for a given set of rules, a
  pattern and a locale.
 @param ulocale the  <code> PluralFormat </code>  will be configured with
          rules for this locale. This locale will also be used for standard         number formatting.
 @param rules defines the behavior of the  <code> PluralFormat </code>
          object.
 @param pattern the pattern for this  <code> PluralFormat </code>
  .
 @throw IllegalArgumentExceptionif the pattern is invalid.
 */
- (instancetype __nonnull)initWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)ulocale
                          withAndroidIcuTextPluralRules:(AndroidIcuTextPluralRules *)rules
                                           withNSString:(NSString *)pattern;

/*!
 @brief Creates a new <code>PluralFormat</code> for the plural type.
 The standard number formatting will be done using the given locale.
 @param ulocale the default number formatting will be done using this         locale.
 @param type The plural type (e.g., cardinal or ordinal).
 */
- (instancetype __nonnull)initWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)ulocale
               withAndroidIcuTextPluralRules_PluralType:(AndroidIcuTextPluralRules_PluralType *)type;

/*!
 @brief Creates a new <code>PluralFormat</code> for a plural type, a
  pattern and a locale.
 @param ulocale the  <code> PluralFormat </code>  will be configured with
          rules for this locale. This locale will also be used for standard         number formatting.
 @param type The plural type (e.g., cardinal or ordinal).
 @param pattern the pattern for this  <code> PluralFormat </code>
  .
 @throw IllegalArgumentExceptionif the pattern is invalid.
 */
- (instancetype __nonnull)initWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)ulocale
               withAndroidIcuTextPluralRules_PluralType:(AndroidIcuTextPluralRules_PluralType *)type
                                           withNSString:(NSString *)pattern;

/*!
 @brief Creates a new cardinal-number <code>PluralFormat</code> for a given pattern string and
  locale.
 The locale will be used to get the set of plural rules and for
  standard number formatting. 
 <p>Example code:external/icu/android_icu4j/src/samples/java/android/icu/samples/text/pluralformat/PluralFormatSample.java PluralFormatExample
 @param ulocale the  <code> PluralFormat </code>  will be configured with
          rules for this locale. This locale will also be used for standard         number formatting.
 @param pattern the pattern for this  <code> PluralFormat </code>
  .
 @throw IllegalArgumentExceptionif the pattern is invalid.
 */
- (instancetype __nonnull)initWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)ulocale
                                           withNSString:(NSString *)pattern;

/*!
 @brief Sets the pattern used by this plural format.
 The method parses the pattern and creates a map of format strings
  for the plural rules.
  Patterns and their interpretation are specified in the class description.
 @param pattern the pattern for this plural format.
 @throw IllegalArgumentExceptionif the pattern is invalid.
 */
- (void)applyPatternWithNSString:(NSString *)pattern;

/*!
 */
- (jboolean)isEqual:(id)rhs;

/*!
 @brief Returns true if this equals the provided PluralFormat.
 @param rhs the PluralFormat to compare against
 @return true if this equals rhs
 */
- (jboolean)equalsWithAndroidIcuTextPluralFormat:(AndroidIcuTextPluralFormat *)rhs;

/*!
 @brief Formats a plural message for a given number.
 @param number a number for which the plural message should be formatted.         If no pattern has been applied to this
          
  <code> PluralFormat </code>  object yet, the formatted number will         be returned.
 @return the string containing the formatted plural message.
 */
- (NSString *)formatWithDouble:(jdouble)number;

/*!
 @brief Formats a plural message for a given number and appends the formatted
  message to the given <code>StringBuffer</code>.
 @param number a number object (instance of  <code> Number </code>  for which
          the plural message should be formatted. If no pattern has been         applied to this 
  <code> PluralFormat </code>  object yet, the         formatted number will be returned.
          Note: If this object is not an instance of 
  <code> Number </code> ,               the 
  <code> toAppendTo </code>  will not be modified.
 @param toAppendTo the formatted message will be appended to this         
  <code> StringBuffer </code> .
 @param pos will be ignored by this method.
 @return the string buffer passed in as toAppendTo, with formatted text
          appended.
 @throw IllegalArgumentExceptionif number is not an instance of Number
 */
- (JavaLangStringBuffer *)formatWithId:(id)number
              withJavaLangStringBuffer:(JavaLangStringBuffer *)toAppendTo
             withJavaTextFieldPosition:(JavaTextFieldPosition *)pos;

/*!
 */
- (NSUInteger)hash;

/*!
 @brief This method is not yet supported by <code>PluralFormat</code>.
 @param text the string to be parsed.
 @param parsePosition defines the position where parsing is to begin,  and upon return, the position where parsing left off.  If the position
   has not changed upon return, then parsing failed.
 @return nothing because this method is not yet implemented.
 @throw UnsupportedOperationExceptionwill always be thrown by this method.
 */
- (NSNumber *)parseWithNSString:(NSString *)text
      withJavaTextParsePosition:(JavaTextParsePosition *)parsePosition;

/*!
 @brief This method is not yet supported by <code>PluralFormat</code>.
 @param source the string to be parsed.
 @param pos defines the position where parsing is to begin,  and upon return, the position where parsing left off.  If the position
   has not changed upon return, then parsing failed.
 @return nothing because this method is not yet implemented.
 @throw UnsupportedOperationExceptionwill always be thrown by this method.
 */
- (id)parseObjectWithNSString:(NSString *)source
    withJavaTextParsePosition:(JavaTextParsePosition *)pos;

/*!
 @brief Sets the locale used by this <code>PluraFormat</code> object.
 Note: Calling this method resets this <code>PluraFormat</code> object,
      i.e., a pattern that was applied previously will be removed,
      and the NumberFormat is set to the default number format for
      the locale.  The resulting format behaves the same as one
      constructed from <code>PluralFormat(ULocale, PluralRules.PluralType)</code>
      with PluralType.CARDINAL.
 @param ulocale the  <code> ULocale </code>  used to configure the
       formatter. If  <code> ulocale </code>  is  <code> null </code> , the
       default  <code> FORMAT </code>  locale will be used.
 - seealso: Category#FORMAT
 */
- (void)setLocaleWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)ulocale __attribute__((deprecated));

/*!
 @brief Sets the number format used by this formatter.You only need to
  call this if you want a different number format than the default
  formatter for the locale.
 @param format the number format to use.
 */
- (void)setNumberFormatWithAndroidIcuTextNumberFormat:(AndroidIcuTextNumberFormat *)format;

/*!
 @brief Returns the pattern for this PluralFormat.
 @return the pattern string
 */
- (NSString *)toPattern;

/*!
 */
- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Creates a new <code>PluralFormat</code> for a plural type, a
  pattern and a locale.
 @param ulocale the  <code> PluralFormat </code>  will be configured with
          rules for this locale. This locale will also be used for standard         number formatting.
 @param type The plural type (e.g., cardinal or ordinal).
 @param pattern the pattern for this  <code> PluralFormat </code>
  .
 @param numberFormat The number formatter to use.
 @throw IllegalArgumentExceptionif the pattern is invalid.
 */
- (instancetype __nonnull)initWithAndroidIcuUtilULocale:(AndroidIcuUtilULocale *)ulocale
               withAndroidIcuTextPluralRules_PluralType:(AndroidIcuTextPluralRules_PluralType *)type
                                           withNSString:(NSString *)pattern
                         withAndroidIcuTextNumberFormat:(AndroidIcuTextNumberFormat *)numberFormat;

/*!
 @brief Finds the PluralFormat sub-message for the given number, or the "other" sub-message.
 @param pattern A MessagePattern.
 @param partIndex the index of the first PluralFormat argument style part.
 @param selector the PluralSelector for mapping the number (minus offset) to a keyword.
 @param context worker object for the selector.
 @param number a number to be matched to one of the PluralFormat argument's explicit values,         or mapped via the PluralSelector.
 @return the sub-message start part index.
 */
+ (jint)findSubMessageWithAndroidIcuTextMessagePattern:(AndroidIcuTextMessagePattern *)pattern
                                               withInt:(jint)partIndex
         withAndroidIcuTextPluralFormat_PluralSelector:(id<AndroidIcuTextPluralFormat_PluralSelector>)selector
                                                withId:(id)context
                                            withDouble:(jdouble)number;

/*!
 @brief This method returns the PluralRules type found from parsing.
 @param source the string to be parsed.
 @param pos defines the position where parsing is to begin,  and upon return, the position where parsing left off.  If the position
   is a negative index, then parsing failed.
 @return Returns the PluralRules type. For example, it could be "zero", "one", "two", "few", "many" or "other")
 */
- (NSString *)parseTypeWithNSString:(NSString *)source
withAndroidIcuTextRbnfLenientScanner:(id<AndroidIcuTextRbnfLenientScanner>)scanner
          withJavaTextFieldPosition:(JavaTextFieldPosition *)pos;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuTextPluralFormat)

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_init(AndroidIcuTextPluralFormat *self);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_init(void);

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_(AndroidIcuTextPluralFormat *self, AndroidIcuUtilULocale *ulocale);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *ulocale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_(AndroidIcuUtilULocale *ulocale);

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_initWithJavaUtilLocale_(AndroidIcuTextPluralFormat *self, JavaUtilLocale *locale);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_initWithJavaUtilLocale_(JavaUtilLocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_initWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_initWithAndroidIcuTextPluralRules_(AndroidIcuTextPluralFormat *self, AndroidIcuTextPluralRules *rules);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_initWithAndroidIcuTextPluralRules_(AndroidIcuTextPluralRules *rules) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_initWithAndroidIcuTextPluralRules_(AndroidIcuTextPluralRules *rules);

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_(AndroidIcuTextPluralFormat *self, AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules *rules);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_(AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules *rules) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_(AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules *rules);

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_initWithJavaUtilLocale_withAndroidIcuTextPluralRules_(AndroidIcuTextPluralFormat *self, JavaUtilLocale *locale, AndroidIcuTextPluralRules *rules);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_initWithJavaUtilLocale_withAndroidIcuTextPluralRules_(JavaUtilLocale *locale, AndroidIcuTextPluralRules *rules) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_initWithJavaUtilLocale_withAndroidIcuTextPluralRules_(JavaUtilLocale *locale, AndroidIcuTextPluralRules *rules);

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_PluralType_(AndroidIcuTextPluralFormat *self, AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules_PluralType *type);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_PluralType_(AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules_PluralType *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_PluralType_(AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules_PluralType *type);

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_initWithJavaUtilLocale_withAndroidIcuTextPluralRules_PluralType_(AndroidIcuTextPluralFormat *self, JavaUtilLocale *locale, AndroidIcuTextPluralRules_PluralType *type);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_initWithJavaUtilLocale_withAndroidIcuTextPluralRules_PluralType_(JavaUtilLocale *locale, AndroidIcuTextPluralRules_PluralType *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_initWithJavaUtilLocale_withAndroidIcuTextPluralRules_PluralType_(JavaUtilLocale *locale, AndroidIcuTextPluralRules_PluralType *type);

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_initWithNSString_(AndroidIcuTextPluralFormat *self, NSString *pattern);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_initWithNSString_(NSString *pattern) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_initWithNSString_(NSString *pattern);

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withNSString_(AndroidIcuTextPluralFormat *self, AndroidIcuUtilULocale *ulocale, NSString *pattern);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withNSString_(AndroidIcuUtilULocale *ulocale, NSString *pattern) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withNSString_(AndroidIcuUtilULocale *ulocale, NSString *pattern);

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_initWithAndroidIcuTextPluralRules_withNSString_(AndroidIcuTextPluralFormat *self, AndroidIcuTextPluralRules *rules, NSString *pattern);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_initWithAndroidIcuTextPluralRules_withNSString_(AndroidIcuTextPluralRules *rules, NSString *pattern) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_initWithAndroidIcuTextPluralRules_withNSString_(AndroidIcuTextPluralRules *rules, NSString *pattern);

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_withNSString_(AndroidIcuTextPluralFormat *self, AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules *rules, NSString *pattern);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_withNSString_(AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules *rules, NSString *pattern) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_withNSString_(AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules *rules, NSString *pattern);

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_PluralType_withNSString_(AndroidIcuTextPluralFormat *self, AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules_PluralType *type, NSString *pattern);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_PluralType_withNSString_(AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules_PluralType *type, NSString *pattern) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_PluralType_withNSString_(AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules_PluralType *type, NSString *pattern);

FOUNDATION_EXPORT void AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_PluralType_withNSString_withAndroidIcuTextNumberFormat_(AndroidIcuTextPluralFormat *self, AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules_PluralType *type, NSString *pattern, AndroidIcuTextNumberFormat *numberFormat);

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *new_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_PluralType_withNSString_withAndroidIcuTextNumberFormat_(AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules_PluralType *type, NSString *pattern, AndroidIcuTextNumberFormat *numberFormat) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuTextPluralFormat *create_AndroidIcuTextPluralFormat_initWithAndroidIcuUtilULocale_withAndroidIcuTextPluralRules_PluralType_withNSString_withAndroidIcuTextNumberFormat_(AndroidIcuUtilULocale *ulocale, AndroidIcuTextPluralRules_PluralType *type, NSString *pattern, AndroidIcuTextNumberFormat *numberFormat);

FOUNDATION_EXPORT jint AndroidIcuTextPluralFormat_findSubMessageWithAndroidIcuTextMessagePattern_withInt_withAndroidIcuTextPluralFormat_PluralSelector_withId_withDouble_(AndroidIcuTextMessagePattern *pattern, jint partIndex, id<AndroidIcuTextPluralFormat_PluralSelector> selector, id context, jdouble number);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextPluralFormat)

#endif

#if !defined (AndroidIcuTextPluralFormat_PluralSelector_) && (INCLUDE_ALL_AndroidIcuTextPluralFormat || defined(INCLUDE_AndroidIcuTextPluralFormat_PluralSelector))
#define AndroidIcuTextPluralFormat_PluralSelector_

/*!
 @brief Interface for selecting PluralFormat keywords for numbers.
 The PluralRules class was intended to implement this interface,
  but there is no public API that uses a PluralSelector,
  only MessageFormat and PluralFormat have PluralSelector implementations.
  Therefore, PluralRules is not marked to implement this non-public interface,
  to avoid confusing users.
 */
@protocol AndroidIcuTextPluralFormat_PluralSelector < JavaObject >

/*!
 @brief Given a number, returns the appropriate PluralFormat keyword.
 @param context worker object for the selector.
 @param number The number to be plural-formatted.
 @return The selected PluralFormat keyword.
 */
- (NSString *)selectWithId:(id)context
                withDouble:(jdouble)number;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuTextPluralFormat_PluralSelector)

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuTextPluralFormat_PluralSelector)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidIcuTextPluralFormat")
