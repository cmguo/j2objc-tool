//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/TextUtils.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_AndroidTextTextUtils")
#ifdef RESTRICT_AndroidTextTextUtils
#define INCLUDE_ALL_AndroidTextTextUtils 0
#else
#define INCLUDE_ALL_AndroidTextTextUtils 1
#endif
#undef RESTRICT_AndroidTextTextUtils
#ifdef INCLUDE_AndroidTextTextUtils_SimpleStringSplitter
#define INCLUDE_AndroidTextTextUtils_StringSplitter 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidTextTextUtils_) && (INCLUDE_ALL_AndroidTextTextUtils || defined(INCLUDE_AndroidTextTextUtils))
#define AndroidTextTextUtils_

@class IOSCharArray;
@class IOSClass;
@class IOSObjectArray;
@class JavaUtilRegexPattern;
@protocol AndroidTextSpannable;
@protocol AndroidTextSpanned;
@protocol AndroidUtilPrinter;
@protocol JavaLangCharSequence;
@protocol JavaLangIterable;

@interface AndroidTextTextUtils : NSObject
@property (readonly, class) jint ALIGNMENT_SPAN NS_SWIFT_NAME(ALIGNMENT_SPAN);
@property (readonly, class) jint FIRST_SPAN NS_SWIFT_NAME(FIRST_SPAN);
@property (readonly, class) jint FOREGROUND_COLOR_SPAN NS_SWIFT_NAME(FOREGROUND_COLOR_SPAN);
@property (readonly, class) jint RELATIVE_SIZE_SPAN NS_SWIFT_NAME(RELATIVE_SIZE_SPAN);
@property (readonly, class) jint SCALE_X_SPAN NS_SWIFT_NAME(SCALE_X_SPAN);
@property (readonly, class) jint STRIKETHROUGH_SPAN NS_SWIFT_NAME(STRIKETHROUGH_SPAN);
@property (readonly, class) jint UNDERLINE_SPAN NS_SWIFT_NAME(UNDERLINE_SPAN);
@property (readonly, class) jint STYLE_SPAN NS_SWIFT_NAME(STYLE_SPAN);
@property (readonly, class) jint BULLET_SPAN NS_SWIFT_NAME(BULLET_SPAN);
@property (readonly, class) jint QUOTE_SPAN NS_SWIFT_NAME(QUOTE_SPAN);
@property (readonly, class) jint LEADING_MARGIN_SPAN NS_SWIFT_NAME(LEADING_MARGIN_SPAN);
@property (readonly, class) jint URL_SPAN NS_SWIFT_NAME(URL_SPAN);
@property (readonly, class) jint BACKGROUND_COLOR_SPAN NS_SWIFT_NAME(BACKGROUND_COLOR_SPAN);
@property (readonly, class) jint TYPEFACE_SPAN NS_SWIFT_NAME(TYPEFACE_SPAN);
@property (readonly, class) jint SUPERSCRIPT_SPAN NS_SWIFT_NAME(SUPERSCRIPT_SPAN);
@property (readonly, class) jint SUBSCRIPT_SPAN NS_SWIFT_NAME(SUBSCRIPT_SPAN);
@property (readonly, class) jint ABSOLUTE_SIZE_SPAN NS_SWIFT_NAME(ABSOLUTE_SIZE_SPAN);
@property (readonly, class) jint TEXT_APPEARANCE_SPAN NS_SWIFT_NAME(TEXT_APPEARANCE_SPAN);
@property (readonly, class) jint ANNOTATION NS_SWIFT_NAME(ANNOTATION);
@property (readonly, class) jint SUGGESTION_SPAN NS_SWIFT_NAME(SUGGESTION_SPAN);
@property (readonly, class) jint SPELL_CHECK_SPAN NS_SWIFT_NAME(SPELL_CHECK_SPAN);
@property (readonly, class) jint SUGGESTION_RANGE_SPAN NS_SWIFT_NAME(SUGGESTION_RANGE_SPAN);
@property (readonly, class) jint EASY_EDIT_SPAN NS_SWIFT_NAME(EASY_EDIT_SPAN);
@property (readonly, class) jint LOCALE_SPAN NS_SWIFT_NAME(LOCALE_SPAN);
@property (readonly, class) jint LAST_SPAN NS_SWIFT_NAME(LAST_SPAN);
@property (readonly, class) jint CAP_MODE_CHARACTERS NS_SWIFT_NAME(CAP_MODE_CHARACTERS);
@property (readonly, class) jint CAP_MODE_WORDS NS_SWIFT_NAME(CAP_MODE_WORDS);
@property (readonly, class) jint CAP_MODE_SENTENCES NS_SWIFT_NAME(CAP_MODE_SENTENCES);

#pragma mark Public

/*!
 @brief Returns a CharSequence concatenating the specified CharSequences,
  retaining their spans if any.
 */
+ (id<JavaLangCharSequence>)concatWithJavaLangCharSequenceArray:(IOSObjectArray *)text;

/*!
 @brief Copies the spans from the region <code>start...end</code> in 
 <code>source</code> to the region 
 <code>destoff...destoff+end-start</code> in <code>dest</code>.
 Spans in <code>source</code> that begin before <code>start</code>
  or end after <code>end</code> but overlap this range are trimmed
  as if they began at <code>start</code> or ended at <code>end</code>.
 @throw IndexOutOfBoundsExceptionif any of the copied spans
  are out of range in <code>dest</code>.
 */
+ (void)copySpansFromWithAndroidTextSpanned:(id<AndroidTextSpanned>)source
                                    withInt:(jint)start
                                    withInt:(jint)end
                               withIOSClass:(IOSClass *)kind
                   withAndroidTextSpannable:(id<AndroidTextSpannable>)dest
                                    withInt:(jint)destoff OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Does a comma-delimited list 'delimitedString' contain a certain item?
 (without allocating memory)
 */
+ (jboolean)delimitedStringContainsWithNSString:(NSString *)delimitedString
                                       withChar:(jchar)delimiter
                                   withNSString:(NSString *)item;

/*!
 @brief Debugging tool to print the spans in a CharSequence.The output will
  be printed one span per line.
 If the CharSequence is not a Spanned,
  then the entire string will be printed on a single line.
 */
+ (void)dumpSpansWithJavaLangCharSequence:(id<JavaLangCharSequence>)cs
                   withAndroidUtilPrinter:(id<AndroidUtilPrinter>)printer
                             withNSString:(NSString *)prefix;

/*!
 @brief Returns true if a and b are equal, including if they are both null.
 <p><i>Note: In platform versions 1.1 and earlier, this method only worked well if
  both the arguments were instances of String.</i></p>
 @param a first CharSequence to check
 @param b second CharSequence to check
 @return true if a and b are equal
 */
+ (jboolean)equalsWithJavaLangCharSequence:(id<JavaLangCharSequence>)a
                  withJavaLangCharSequence:(id<JavaLangCharSequence>)b;

/*!
 @brief Return a new CharSequence in which each of the source strings is
  replaced by the corresponding element of the destinations.
 TODO(tball): enable if SpannableStringBuilder is ever implemented,
                  which requires android.graphics support.
     public static CharSequence replace(CharSequence template,
                                        String[] sources,
                                        CharSequence[] destinations) {
         SpannableStringBuilder tb = new SpannableStringBuilder(template);
         for (int i = 0; i < sources.length; i++) {
             int where = indexOf(tb, sources[i]);
             if (where >= 0)
                 tb.setSpan(sources[i], where, where + sources[i].length(),
                            Spanned.SPAN_EXCLUSIVE_EXCLUSIVE);
         }
         for (int i = 0; i < sources.length; i++) {
             int start = tb.getSpanStart(sources[i]);
             int end = tb.getSpanEnd(sources[i]);
             if (start >= 0) {
                 tb.replace(start, end, destinations[i]);
             }        }
         return tb;
     }
     /\**
  Replace instances of "^1", "^2", etc. in the 
 <code>template</code> CharSequence with the corresponding 
 <code>values</code>.  "^^" is used to produce a single caret in
  the output.  Only up to 9 replacement values are supported,
  "^10" will be produce the first replacement value followed by a
  '0'.
 @param template_ the input text containing "^1"-style  placeholder values.  This object is not modified; a copy is
   returned.
 @param values CharSequences substituted into the template.  The  first is substituted for "^1", the second for "^2", and so on.
 @return the new CharSequence produced by doing the replacement
 @throw IllegalArgumentExceptionif the template requests a
  value that was not provided, or if more than 9 values are
  provided.
 */
+ (id<JavaLangCharSequence>)expandTemplateWithJavaLangCharSequence:(id<JavaLangCharSequence>)template_
                                     withJavaLangCharSequenceArray:(IOSObjectArray *)values;

/*!
 @brief Determine what caps mode should be in effect at the current offset in
  the text.Only the mode bits set in <var>reqModes</var> will be
  checked.
 Note that the caps mode flags here are explicitly defined
  to match those in <code>InputType</code>.
 @param cs The text that should be checked for caps modes.
 @param off Location in the text at which to check.
 @param reqModes The modes to be checked: may be any combination of  
 <code>CAP_MODE_CHARACTERS</code> , <code>CAP_MODE_WORDS</code> , and  <code>CAP_MODE_SENTENCES</code>
  .
 @return Returns the actual capitalization modes that can be in effect
  at the current position, which is any combination of 
 <code>CAP_MODE_CHARACTERS</code>, <code>CAP_MODE_WORDS</code>, and 
 <code>CAP_MODE_SENTENCES</code>.
 */
+ (jint)getCapsModeWithJavaLangCharSequence:(id<JavaLangCharSequence>)cs
                                    withInt:(jint)off
                                    withInt:(jint)reqModes;

+ (void)getCharsWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                 withInt:(jint)start
                                 withInt:(jint)end
                           withCharArray:(IOSCharArray *)dest
                                 withInt:(jint)destoff;

+ (jint)getOffsetAfterWithJavaLangCharSequence:(id<JavaLangCharSequence>)text
                                       withInt:(jint)offset;

+ (jint)getOffsetBeforeWithJavaLangCharSequence:(id<JavaLangCharSequence>)text
                                        withInt:(jint)offset;

/*!
 @brief Returns the length that the specified CharSequence would have if
  spaces and control characters were trimmed from the start and end,
  as by <code>String.trim</code>.
 */
+ (jint)getTrimmedLengthWithJavaLangCharSequence:(id<JavaLangCharSequence>)s;

/*!
 @brief Html-encode the string.
 @param s the string to be encoded
 @return the encoded string
 */
+ (NSString *)htmlEncodeWithNSString:(NSString *)s;

+ (jint)indexOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                               withChar:(jchar)ch;

+ (jint)indexOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                               withChar:(jchar)ch
                                withInt:(jint)start;

+ (jint)indexOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                               withChar:(jchar)ch
                                withInt:(jint)start
                                withInt:(jint)end;

+ (jint)indexOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
               withJavaLangCharSequence:(id<JavaLangCharSequence>)needle;

+ (jint)indexOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
               withJavaLangCharSequence:(id<JavaLangCharSequence>)needle
                                withInt:(jint)start;

+ (jint)indexOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
               withJavaLangCharSequence:(id<JavaLangCharSequence>)needle
                                withInt:(jint)start
                                withInt:(jint)end;

/*!
 @brief Returns whether the given CharSequence contains only digits.
 */
+ (jboolean)isDigitsOnlyWithJavaLangCharSequence:(id<JavaLangCharSequence>)str;

/*!
 @brief Returns true if the string is null or 0-length.
 @param str the string to be examined
 @return true if str is null or zero length
 */
+ (jboolean)isEmptyWithJavaLangCharSequence:(id<JavaLangCharSequence>)str;

/*!
 @brief Returns whether this character is a printable character.
 */
+ (jboolean)isGraphicWithChar:(jchar)c;

/*!
 @brief Returns whether the given CharSequence contains any printable characters.
 */
+ (jboolean)isGraphicWithJavaLangCharSequence:(id<JavaLangCharSequence>)str;

/*!
 */
+ (jboolean)isPrintableAsciiWithChar:(jchar)c;

/*!
 */
+ (jboolean)isPrintableAsciiOnlyWithJavaLangCharSequence:(id<JavaLangCharSequence>)str;

/*!
 @brief Returns a string containing the tokens joined by delimiters.
 @param tokens an array objects to be joined. Strings will be formed from      the objects by calling object.toString().
 */
+ (NSString *)joinWithJavaLangCharSequence:(id<JavaLangCharSequence>)delimiter
                      withJavaLangIterable:(id<JavaLangIterable>)tokens;

/*!
 @brief Returns a string containing the tokens joined by delimiters.
 @param tokens an array objects to be joined. Strings will be formed from      the objects by calling object.toString().
 */
+ (NSString *)joinWithJavaLangCharSequence:(id<JavaLangCharSequence>)delimiter
                         withNSObjectArray:(IOSObjectArray *)tokens;

/*!
 @brief Returns list of multiple <code>CharSequence</code> joined into a single 
 <code>CharSequence</code> separated by localized delimiter such as ", ".
 */
+ (id<JavaLangCharSequence>)joinWithJavaLangIterable:(id<JavaLangIterable>)list;

+ (jint)lastIndexOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                   withChar:(jchar)ch;

+ (jint)lastIndexOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                   withChar:(jchar)ch
                                    withInt:(jint)last;

+ (jint)lastIndexOfWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                   withChar:(jchar)ch
                                    withInt:(jint)start
                                    withInt:(jint)last;

/*!
 @brief Pack 2 int values into a long, useful as a return value for a range
 - seealso: #unpackRangeStartFromLong(long)
 - seealso: #unpackRangeEndFromLong(long)
 */
+ (jlong)packRangeInLongWithInt:(jint)start
                        withInt:(jint)end;

+ (jboolean)regionMatchesWithJavaLangCharSequence:(id<JavaLangCharSequence>)one
                                          withInt:(jint)toffset
                         withJavaLangCharSequence:(id<JavaLangCharSequence>)two
                                          withInt:(jint)ooffset
                                          withInt:(jint)len;

/*!
 @brief Removes empty spans from the <code>spans</code> array.
 When parsing a Spanned using <code>Spanned.nextSpanTransition(int, int, Class)</code>, empty spans
  will (correctly) create span transitions, and calling getSpans on a slice of text bounded by
  one of these transitions will (correctly) include the empty overlapping span.
  However, these empty spans should not be taken into account when layouting or rendering the
  string and this method provides a way to filter getSpans' results accordingly.
 @param spans A list of spans retrieved using <code>Spanned.getSpans(int, int, Class)</code>  from
   the  <code> spanned </code>
 @param spanned The Spanned from which spans were extracted
 @return A subset of spans where empty spans (<code>Spanned.getSpanStart(Object)</code>  == 
 <code>Spanned.getSpanEnd(Object)</code> have been removed. The initial order is preserved
 */
+ (IOSObjectArray *)removeEmptySpansWithNSObjectArray:(IOSObjectArray *)spans
                               withAndroidTextSpanned:(id<AndroidTextSpanned>)spanned
                                         withIOSClass:(IOSClass *)klass;

/*!
 @brief Splits a string on a pattern.String.split() returns [''] when the string to be
  split is empty.
 This returns []. This does not remove any empty strings from the result.
 @param text the string to split
 @param pattern the regular expression to match
 @return an array of strings. The array will be empty if text is empty
 @throw NullPointerExceptionif expression or text is null
 */
+ (IOSObjectArray *)splitWithNSString:(NSString *)text
             withJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

/*!
 @brief String.split() returns [''] when the string to be split is empty.This returns [].
 This does
  not remove any empty strings from the result. For example split("a,", ","  ) returns {"a", ""}.
 @param text the string to split
 @param expression the regular expression to match
 @return an array of strings. The array will be empty if text is empty
 @throw NullPointerExceptionif expression or text is null
 */
+ (IOSObjectArray *)splitWithNSString:(NSString *)text
                         withNSString:(NSString *)expression;

+ (id<JavaLangCharSequence>)stringOrSpannedStringWithJavaLangCharSequence:(id<JavaLangCharSequence>)source;

/*!
 @brief Create a new String object containing the given range of characters
  from the source string.This is different than simply calling 
 <code>CharSequence.subSequence</code>
  in that it does not preserve any style runs in the source sequence,
  allowing a more efficient implementation.
 */
+ (NSString *)substringWithJavaLangCharSequence:(id<JavaLangCharSequence>)source
                                        withInt:(jint)start
                                        withInt:(jint)end;

/*!
 @brief Get the end value from a range packed in a long by <code>packRangeInLong(int, int)</code>
 - seealso: #unpackRangeStartFromLong(long)
 - seealso: #packRangeInLong(int, int)
 */
+ (jint)unpackRangeEndFromLongWithLong:(jlong)range;

/*!
 @brief Get the start value from a range packed in a long by <code>packRangeInLong(int, int)</code>
 - seealso: #unpackRangeEndFromLong(long)
 - seealso: #packRangeInLong(int, int)
 */
+ (jint)unpackRangeStartFromLongWithLong:(jlong)range;

#pragma mark Package-Private

+ (jboolean)doesNotNeedBidiWithCharArray:(IOSCharArray *)text
                                 withInt:(jint)start
                                 withInt:(jint)len;

+ (jboolean)doesNotNeedBidiWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                            withInt:(jint)start
                                            withInt:(jint)end;

+ (IOSCharArray *)obtainWithInt:(jint)len;

+ (void)recycleWithCharArray:(IOSCharArray *)temp;

@end

J2OBJC_STATIC_INIT(AndroidTextTextUtils)

/*!
 */
inline jint AndroidTextTextUtils_get_ALIGNMENT_SPAN(void);
#define AndroidTextTextUtils_ALIGNMENT_SPAN 1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, ALIGNMENT_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_FIRST_SPAN(void);
#define AndroidTextTextUtils_FIRST_SPAN 1
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, FIRST_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_FOREGROUND_COLOR_SPAN(void);
#define AndroidTextTextUtils_FOREGROUND_COLOR_SPAN 2
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, FOREGROUND_COLOR_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_RELATIVE_SIZE_SPAN(void);
#define AndroidTextTextUtils_RELATIVE_SIZE_SPAN 3
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, RELATIVE_SIZE_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_SCALE_X_SPAN(void);
#define AndroidTextTextUtils_SCALE_X_SPAN 4
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, SCALE_X_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_STRIKETHROUGH_SPAN(void);
#define AndroidTextTextUtils_STRIKETHROUGH_SPAN 5
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, STRIKETHROUGH_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_UNDERLINE_SPAN(void);
#define AndroidTextTextUtils_UNDERLINE_SPAN 6
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, UNDERLINE_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_STYLE_SPAN(void);
#define AndroidTextTextUtils_STYLE_SPAN 7
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, STYLE_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_BULLET_SPAN(void);
#define AndroidTextTextUtils_BULLET_SPAN 8
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, BULLET_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_QUOTE_SPAN(void);
#define AndroidTextTextUtils_QUOTE_SPAN 9
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, QUOTE_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_LEADING_MARGIN_SPAN(void);
#define AndroidTextTextUtils_LEADING_MARGIN_SPAN 10
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, LEADING_MARGIN_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_URL_SPAN(void);
#define AndroidTextTextUtils_URL_SPAN 11
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, URL_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_BACKGROUND_COLOR_SPAN(void);
#define AndroidTextTextUtils_BACKGROUND_COLOR_SPAN 12
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, BACKGROUND_COLOR_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_TYPEFACE_SPAN(void);
#define AndroidTextTextUtils_TYPEFACE_SPAN 13
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, TYPEFACE_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_SUPERSCRIPT_SPAN(void);
#define AndroidTextTextUtils_SUPERSCRIPT_SPAN 14
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, SUPERSCRIPT_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_SUBSCRIPT_SPAN(void);
#define AndroidTextTextUtils_SUBSCRIPT_SPAN 15
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, SUBSCRIPT_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_ABSOLUTE_SIZE_SPAN(void);
#define AndroidTextTextUtils_ABSOLUTE_SIZE_SPAN 16
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, ABSOLUTE_SIZE_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_TEXT_APPEARANCE_SPAN(void);
#define AndroidTextTextUtils_TEXT_APPEARANCE_SPAN 17
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, TEXT_APPEARANCE_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_ANNOTATION(void);
#define AndroidTextTextUtils_ANNOTATION 18
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, ANNOTATION, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_SUGGESTION_SPAN(void);
#define AndroidTextTextUtils_SUGGESTION_SPAN 19
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, SUGGESTION_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_SPELL_CHECK_SPAN(void);
#define AndroidTextTextUtils_SPELL_CHECK_SPAN 20
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, SPELL_CHECK_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_SUGGESTION_RANGE_SPAN(void);
#define AndroidTextTextUtils_SUGGESTION_RANGE_SPAN 21
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, SUGGESTION_RANGE_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_EASY_EDIT_SPAN(void);
#define AndroidTextTextUtils_EASY_EDIT_SPAN 22
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, EASY_EDIT_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_LOCALE_SPAN(void);
#define AndroidTextTextUtils_LOCALE_SPAN 23
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, LOCALE_SPAN, jint)

/*!
 */
inline jint AndroidTextTextUtils_get_LAST_SPAN(void);
#define AndroidTextTextUtils_LAST_SPAN 23
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, LAST_SPAN, jint)

/*!
 @brief Capitalization mode for <code>getCapsMode</code>: capitalize all
  characters.This value is explicitly defined to be the same as 
 <code>InputType.TYPE_TEXT_FLAG_CAP_CHARACTERS</code>.
 */
inline jint AndroidTextTextUtils_get_CAP_MODE_CHARACTERS(void);
#define AndroidTextTextUtils_CAP_MODE_CHARACTERS 4096
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, CAP_MODE_CHARACTERS, jint)

/*!
 @brief Capitalization mode for <code>getCapsMode</code>: capitalize the first
  character of all words.This value is explicitly defined to be the same as 
 <code>InputType.TYPE_TEXT_FLAG_CAP_WORDS</code>.
 */
inline jint AndroidTextTextUtils_get_CAP_MODE_WORDS(void);
#define AndroidTextTextUtils_CAP_MODE_WORDS 8192
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, CAP_MODE_WORDS, jint)

/*!
 @brief Capitalization mode for <code>getCapsMode</code>: capitalize the first
  character of each sentence.This value is explicitly defined to be the same as 
 <code>InputType.TYPE_TEXT_FLAG_CAP_SENTENCES</code>.
 */
inline jint AndroidTextTextUtils_get_CAP_MODE_SENTENCES(void);
#define AndroidTextTextUtils_CAP_MODE_SENTENCES 16384
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextTextUtils, CAP_MODE_SENTENCES, jint)

FOUNDATION_EXPORT void AndroidTextTextUtils_getCharsWithJavaLangCharSequence_withInt_withInt_withCharArray_withInt_(id<JavaLangCharSequence> s, jint start, jint end, IOSCharArray *dest, jint destoff);

FOUNDATION_EXPORT jint AndroidTextTextUtils_indexOfWithJavaLangCharSequence_withChar_(id<JavaLangCharSequence> s, jchar ch);

FOUNDATION_EXPORT jint AndroidTextTextUtils_indexOfWithJavaLangCharSequence_withChar_withInt_(id<JavaLangCharSequence> s, jchar ch, jint start);

FOUNDATION_EXPORT jint AndroidTextTextUtils_indexOfWithJavaLangCharSequence_withChar_withInt_withInt_(id<JavaLangCharSequence> s, jchar ch, jint start, jint end);

FOUNDATION_EXPORT jint AndroidTextTextUtils_lastIndexOfWithJavaLangCharSequence_withChar_(id<JavaLangCharSequence> s, jchar ch);

FOUNDATION_EXPORT jint AndroidTextTextUtils_lastIndexOfWithJavaLangCharSequence_withChar_withInt_(id<JavaLangCharSequence> s, jchar ch, jint last);

FOUNDATION_EXPORT jint AndroidTextTextUtils_lastIndexOfWithJavaLangCharSequence_withChar_withInt_withInt_(id<JavaLangCharSequence> s, jchar ch, jint start, jint last);

FOUNDATION_EXPORT jint AndroidTextTextUtils_indexOfWithJavaLangCharSequence_withJavaLangCharSequence_(id<JavaLangCharSequence> s, id<JavaLangCharSequence> needle);

FOUNDATION_EXPORT jint AndroidTextTextUtils_indexOfWithJavaLangCharSequence_withJavaLangCharSequence_withInt_(id<JavaLangCharSequence> s, id<JavaLangCharSequence> needle, jint start);

FOUNDATION_EXPORT jint AndroidTextTextUtils_indexOfWithJavaLangCharSequence_withJavaLangCharSequence_withInt_withInt_(id<JavaLangCharSequence> s, id<JavaLangCharSequence> needle, jint start, jint end);

FOUNDATION_EXPORT jboolean AndroidTextTextUtils_regionMatchesWithJavaLangCharSequence_withInt_withJavaLangCharSequence_withInt_withInt_(id<JavaLangCharSequence> one, jint toffset, id<JavaLangCharSequence> two, jint ooffset, jint len);

FOUNDATION_EXPORT NSString *AndroidTextTextUtils_substringWithJavaLangCharSequence_withInt_withInt_(id<JavaLangCharSequence> source, jint start, jint end);

FOUNDATION_EXPORT id<JavaLangCharSequence> AndroidTextTextUtils_joinWithJavaLangIterable_(id<JavaLangIterable> list);

FOUNDATION_EXPORT NSString *AndroidTextTextUtils_joinWithJavaLangCharSequence_withNSObjectArray_(id<JavaLangCharSequence> delimiter, IOSObjectArray *tokens);

FOUNDATION_EXPORT NSString *AndroidTextTextUtils_joinWithJavaLangCharSequence_withJavaLangIterable_(id<JavaLangCharSequence> delimiter, id<JavaLangIterable> tokens);

FOUNDATION_EXPORT IOSObjectArray *AndroidTextTextUtils_splitWithNSString_withNSString_(NSString *text, NSString *expression);

FOUNDATION_EXPORT IOSObjectArray *AndroidTextTextUtils_splitWithNSString_withJavaUtilRegexPattern_(NSString *text, JavaUtilRegexPattern *pattern);

FOUNDATION_EXPORT id<JavaLangCharSequence> AndroidTextTextUtils_stringOrSpannedStringWithJavaLangCharSequence_(id<JavaLangCharSequence> source);

FOUNDATION_EXPORT jboolean AndroidTextTextUtils_isEmptyWithJavaLangCharSequence_(id<JavaLangCharSequence> str);

FOUNDATION_EXPORT jint AndroidTextTextUtils_getTrimmedLengthWithJavaLangCharSequence_(id<JavaLangCharSequence> s);

FOUNDATION_EXPORT jboolean AndroidTextTextUtils_equalsWithJavaLangCharSequence_withJavaLangCharSequence_(id<JavaLangCharSequence> a, id<JavaLangCharSequence> b);

FOUNDATION_EXPORT void AndroidTextTextUtils_dumpSpansWithJavaLangCharSequence_withAndroidUtilPrinter_withNSString_(id<JavaLangCharSequence> cs, id<AndroidUtilPrinter> printer, NSString *prefix);

FOUNDATION_EXPORT id<JavaLangCharSequence> AndroidTextTextUtils_expandTemplateWithJavaLangCharSequence_withJavaLangCharSequenceArray_(id<JavaLangCharSequence> template_, IOSObjectArray *values);

FOUNDATION_EXPORT jint AndroidTextTextUtils_getOffsetBeforeWithJavaLangCharSequence_withInt_(id<JavaLangCharSequence> text, jint offset);

FOUNDATION_EXPORT jint AndroidTextTextUtils_getOffsetAfterWithJavaLangCharSequence_withInt_(id<JavaLangCharSequence> text, jint offset);

FOUNDATION_EXPORT void AndroidTextTextUtils_copySpansFromWithAndroidTextSpanned_withInt_withInt_withIOSClass_withAndroidTextSpannable_withInt_(id<AndroidTextSpanned> source, jint start, jint end, IOSClass *kind, id<AndroidTextSpannable> dest, jint destoff);

FOUNDATION_EXPORT jboolean AndroidTextTextUtils_doesNotNeedBidiWithJavaLangCharSequence_withInt_withInt_(id<JavaLangCharSequence> s, jint start, jint end);

FOUNDATION_EXPORT jboolean AndroidTextTextUtils_doesNotNeedBidiWithCharArray_withInt_withInt_(IOSCharArray *text, jint start, jint len);

FOUNDATION_EXPORT IOSCharArray *AndroidTextTextUtils_obtainWithInt_(jint len);

FOUNDATION_EXPORT void AndroidTextTextUtils_recycleWithCharArray_(IOSCharArray *temp);

FOUNDATION_EXPORT NSString *AndroidTextTextUtils_htmlEncodeWithNSString_(NSString *s);

FOUNDATION_EXPORT id<JavaLangCharSequence> AndroidTextTextUtils_concatWithJavaLangCharSequenceArray_(IOSObjectArray *text);

FOUNDATION_EXPORT jboolean AndroidTextTextUtils_isGraphicWithJavaLangCharSequence_(id<JavaLangCharSequence> str);

FOUNDATION_EXPORT jboolean AndroidTextTextUtils_isGraphicWithChar_(jchar c);

FOUNDATION_EXPORT jboolean AndroidTextTextUtils_isDigitsOnlyWithJavaLangCharSequence_(id<JavaLangCharSequence> str);

FOUNDATION_EXPORT jboolean AndroidTextTextUtils_isPrintableAsciiWithChar_(jchar c);

FOUNDATION_EXPORT jboolean AndroidTextTextUtils_isPrintableAsciiOnlyWithJavaLangCharSequence_(id<JavaLangCharSequence> str);

FOUNDATION_EXPORT jint AndroidTextTextUtils_getCapsModeWithJavaLangCharSequence_withInt_withInt_(id<JavaLangCharSequence> cs, jint off, jint reqModes);

FOUNDATION_EXPORT jboolean AndroidTextTextUtils_delimitedStringContainsWithNSString_withChar_withNSString_(NSString *delimitedString, jchar delimiter, NSString *item);

FOUNDATION_EXPORT IOSObjectArray *AndroidTextTextUtils_removeEmptySpansWithNSObjectArray_withAndroidTextSpanned_withIOSClass_(IOSObjectArray *spans, id<AndroidTextSpanned> spanned, IOSClass *klass);

FOUNDATION_EXPORT jlong AndroidTextTextUtils_packRangeInLongWithInt_withInt_(jint start, jint end);

FOUNDATION_EXPORT jint AndroidTextTextUtils_unpackRangeStartFromLongWithLong_(jlong range);

FOUNDATION_EXPORT jint AndroidTextTextUtils_unpackRangeEndFromLongWithLong_(jlong range);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextTextUtils)

#endif

#if !defined (AndroidTextTextUtils_StringSplitter_) && (INCLUDE_ALL_AndroidTextTextUtils || defined(INCLUDE_AndroidTextTextUtils_StringSplitter))
#define AndroidTextTextUtils_StringSplitter_

#define RESTRICT_JavaLangIterable 1
#define INCLUDE_JavaLangIterable 1
#include <JRE/java/lang/Iterable.h>

/*!
 @brief An interface for splitting strings according to rules that are opaque to the user of this
  interface.This also has less overhead than split, which uses regular expressions and
  allocates an array to hold the results.
 <p>The most efficient way to use this class is: 
 @code

  // Once
  TextUtils.StringSplitter splitter = new TextUtils.SimpleStringSplitter(delimiter);
  // Once per string to split
  splitter.setString(string);
  for (String s : splitter) {
      ...
  } 
  
@endcode
 */
@protocol AndroidTextTextUtils_StringSplitter < JavaLangIterable, JavaObject >

- (void)setStringWithNSString:(NSString *)string;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextTextUtils_StringSplitter)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextTextUtils_StringSplitter)

#endif

#if !defined (AndroidTextTextUtils_SimpleStringSplitter_) && (INCLUDE_ALL_AndroidTextTextUtils || defined(INCLUDE_AndroidTextTextUtils_SimpleStringSplitter))
#define AndroidTextTextUtils_SimpleStringSplitter_

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include <JRE/java/util/Iterator.h>

@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilSpliterator;

/*!
 @brief A simple string splitter.
 <p>If the final character in the string to split is the delimiter then no empty string will
  be returned for the empty string after that delimeter. That is, splitting <tt>"a,b,"</tt> on
  comma will return <tt>"a", "b"</tt>, not <tt>"a", "b", ""</tt>.
 */
@interface AndroidTextTextUtils_SimpleStringSplitter : NSObject < AndroidTextTextUtils_StringSplitter, JavaUtilIterator >

#pragma mark Public

/*!
 @brief Initializes the splitter.setString may be called later.
 @param delimiter the delimeter on which to split
 */
- (instancetype __nonnull)initWithChar:(jchar)delimiter;

- (jboolean)hasNext;

- (id<JavaUtilIterator>)iterator;

- (NSString *)next;

- (void)remove;

/*!
 @brief Sets the string to split
 @param string the string to split
 */
- (void)setStringWithNSString:(NSString *)string;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextTextUtils_SimpleStringSplitter)

FOUNDATION_EXPORT void AndroidTextTextUtils_SimpleStringSplitter_initWithChar_(AndroidTextTextUtils_SimpleStringSplitter *self, jchar delimiter);

FOUNDATION_EXPORT AndroidTextTextUtils_SimpleStringSplitter *new_AndroidTextTextUtils_SimpleStringSplitter_initWithChar_(jchar delimiter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidTextTextUtils_SimpleStringSplitter *create_AndroidTextTextUtils_SimpleStringSplitter_initWithChar_(jchar delimiter);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextTextUtils_SimpleStringSplitter)

#endif

#if !defined (AndroidTextTextUtils_TruncateAt_) && (INCLUDE_ALL_AndroidTextTextUtils || defined(INCLUDE_AndroidTextTextUtils_TruncateAt))
#define AndroidTextTextUtils_TruncateAt_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include <JRE/java/lang/Enum.h>

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, AndroidTextTextUtils_TruncateAt_Enum) {
  AndroidTextTextUtils_TruncateAt_Enum_START = 0,
  AndroidTextTextUtils_TruncateAt_Enum_MIDDLE = 1,
  AndroidTextTextUtils_TruncateAt_Enum_END = 2,
  AndroidTextTextUtils_TruncateAt_Enum_MARQUEE = 3,
  AndroidTextTextUtils_TruncateAt_Enum_END_SMALL = 4,
};

@interface AndroidTextTextUtils_TruncateAt : JavaLangEnum

@property (readonly, class, nonnull) AndroidTextTextUtils_TruncateAt *START NS_SWIFT_NAME(START);
@property (readonly, class, nonnull) AndroidTextTextUtils_TruncateAt *MIDDLE NS_SWIFT_NAME(MIDDLE);
@property (readonly, class, nonnull) AndroidTextTextUtils_TruncateAt *END NS_SWIFT_NAME(END);
@property (readonly, class, nonnull) AndroidTextTextUtils_TruncateAt *MARQUEE NS_SWIFT_NAME(MARQUEE);
@property (readonly, class, nonnull) AndroidTextTextUtils_TruncateAt *END_SMALL NS_SWIFT_NAME(END_SMALL);
#pragma mark Public

+ (AndroidTextTextUtils_TruncateAt *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (AndroidTextTextUtils_TruncateAt_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(AndroidTextTextUtils_TruncateAt)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT AndroidTextTextUtils_TruncateAt *AndroidTextTextUtils_TruncateAt_values_[];

inline AndroidTextTextUtils_TruncateAt *AndroidTextTextUtils_TruncateAt_get_START(void);
J2OBJC_ENUM_CONSTANT(AndroidTextTextUtils_TruncateAt, START)

inline AndroidTextTextUtils_TruncateAt *AndroidTextTextUtils_TruncateAt_get_MIDDLE(void);
J2OBJC_ENUM_CONSTANT(AndroidTextTextUtils_TruncateAt, MIDDLE)

inline AndroidTextTextUtils_TruncateAt *AndroidTextTextUtils_TruncateAt_get_END(void);
J2OBJC_ENUM_CONSTANT(AndroidTextTextUtils_TruncateAt, END)

inline AndroidTextTextUtils_TruncateAt *AndroidTextTextUtils_TruncateAt_get_MARQUEE(void);
J2OBJC_ENUM_CONSTANT(AndroidTextTextUtils_TruncateAt, MARQUEE)

/*!
 */
inline AndroidTextTextUtils_TruncateAt *AndroidTextTextUtils_TruncateAt_get_END_SMALL(void);
J2OBJC_ENUM_CONSTANT(AndroidTextTextUtils_TruncateAt, END_SMALL)

FOUNDATION_EXPORT IOSObjectArray *AndroidTextTextUtils_TruncateAt_values(void);

FOUNDATION_EXPORT AndroidTextTextUtils_TruncateAt *AndroidTextTextUtils_TruncateAt_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT AndroidTextTextUtils_TruncateAt *AndroidTextTextUtils_TruncateAt_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextTextUtils_TruncateAt)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidTextTextUtils")
