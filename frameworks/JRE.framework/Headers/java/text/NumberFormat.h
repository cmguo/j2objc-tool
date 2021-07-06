//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/text/NumberFormat.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaTextNumberFormat")
#ifdef RESTRICT_JavaTextNumberFormat
#define INCLUDE_ALL_JavaTextNumberFormat 0
#else
#define INCLUDE_ALL_JavaTextNumberFormat 1
#endif
#undef RESTRICT_JavaTextNumberFormat

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTextNumberFormat_) && (INCLUDE_ALL_JavaTextNumberFormat || defined(INCLUDE_JavaTextNumberFormat))
#define JavaTextNumberFormat_

#define RESTRICT_JavaTextFormat 1
#define INCLUDE_JavaTextFormat 1
#include <JRE/java/text/Format.h>

@class IOSObjectArray;
@class JavaLangStringBuffer;
@class JavaMathRoundingMode;
@class JavaTextFieldPosition;
@class JavaTextParsePosition;
@class JavaUtilCurrency;
@class JavaUtilLocale;

/*!
 @brief <code>NumberFormat</code> is the abstract base class for all number
  formats.This class provides the interface for formatting and parsing
  numbers.
 <code>NumberFormat</code> also provides methods for determining
  which locales have number formats, and what their names are. 
 <p>
  <code>NumberFormat</code> helps you to format and parse numbers for any locale.
  Your code can be completely independent of the locale conventions for
  decimal points, thousands-separators, or even the particular decimal
  digits used, or whether the number format is even decimal. 
 <p>
  To format a number for the current Locale, use one of the factory
  class methods: 
 <blockquote>
  @code

   myString = NumberFormat.getInstance().format(myNumber); 
  
@endcode
  </blockquote>
  If you are formatting multiple numbers, it is
  more efficient to get the format and use it multiple times so that
  the system doesn't have to fetch the information about the local
  language and country conventions multiple times. 
 <blockquote>
  @code

  NumberFormat nf = NumberFormat.getInstance();
  for (int i = 0; i < myNumber.length; ++i) {
      output.println(nf.format(myNumber[i]) + "; ");
  } 
  
@endcode
  </blockquote>
  To format a number for a different Locale, specify it in the
  call to <code>getInstance</code>.
  <blockquote>
  @code

  NumberFormat nf = NumberFormat.getInstance(Locale.FRENCH); 
  
@endcode
  </blockquote>
  You can also use a <code>NumberFormat</code> to parse numbers: 
 <blockquote>
  @code

  myNumber = nf.parse(myString); 
  
@endcode
  </blockquote>
  Use <code>getInstance</code> or <code>getNumberInstance</code> to get the
  normal number format. Use <code>getIntegerInstance</code> to get an
  integer number format. Use <code>getCurrencyInstance</code> to get the
  currency number format. And use <code>getPercentInstance</code> to get a
  format for displaying percentages. With this format, a fraction like
  0.53 is displayed as 53%. 
 <p>
  You can also control the display of numbers with such methods as 
 <code>setMinimumFractionDigits</code>.
  If you want even more control over the format or parsing,
  or want to give your users more control,
  you can try casting the <code>NumberFormat</code> you get from the factory methods
  to a <code>DecimalFormat</code>. This will work for the vast majority
  of locales; just remember to put it in a <code>try</code> block in case you
  encounter an unusual one. 
 <p>
  NumberFormat and DecimalFormat are designed such that some controls
  work for formatting and others work for parsing.  The following is
  the detailed description for each these control methods, 
 <p>
  setParseIntegerOnly : only affects parsing, e.g.
  if true,  "3456.78" -> 3456 (and leaves the parse position just after index 6)
  if false, "3456.78" -> 3456.78 (and leaves the parse position just after index 8)
  This is independent of formatting.  If you want to not show a decimal point
  where there might be no digits after the decimal point, use
  setDecimalSeparatorAlwaysShown. 
 <p>
  setDecimalSeparatorAlwaysShown : only affects formatting, and only where
  there might be no digits after the decimal point, such as with a pattern
  like "#,##0.##", e.g.,
  if true,  3456.00 -> "3,456."
  if false, 3456.00 -> "3456"
  This is independent of parsing.  If you want parsing to stop at the decimal
  point, use setParseIntegerOnly. 
 <p>
  You can also use forms of the <code>parse</code> and <code>format</code>
  methods with <code>ParsePosition</code> and <code>FieldPosition</code> to
  allow you to: 
 <ul>
  <li> progressively parse through pieces of a string 
 <li> align the decimal point and other areas 
 </ul>
  For example, you can align numbers in two ways: 
 <ol>
  <li> If you are using a monospaced font with spacing for alignment,
       you can pass the <code>FieldPosition</code> in your format call, with
       <code>field</code> = <code>INTEGER_FIELD</code>. On output,
       <code>getEndIndex</code> will be set to the offset between the
       last character of the integer and the decimal. Add
       (desiredSpaceCount - getEndIndex) spaces at the front of the string. 
 <li> If you are using proportional fonts,
       instead of padding with spaces, measure the width
       of the string in pixels from the start to <code>getEndIndex</code>.
       Then move the pen by
       (desiredPixelWidth - widthToAlignmentPoint) before drawing the text.
       It also works where there is no decimal, but possibly additional
       characters at the end, e.g., with parentheses in negative
       numbers: "(12)" for -12. 
 </ol>
  
 <h4><a name="synchronization">Synchronization</a></h4>
  
 <p>
  Number formats are generally not synchronized.
  It is recommended to create separate format instances for each thread.
  If multiple threads access a format concurrently, it must be synchronized
  externally.
 - seealso: DecimalFormat
 - seealso: ChoiceFormat
 @author Mark Davis
 @author Helena Shih
 */
@interface JavaTextNumberFormat : JavaTextFormat
@property (readonly, class) jint INTEGER_FIELD NS_SWIFT_NAME(INTEGER_FIELD);
@property (readonly, class) jint FRACTION_FIELD NS_SWIFT_NAME(FRACTION_FIELD);
@property (readonly, class) jint currentSerialVersion NS_SWIFT_NAME(currentSerialVersion);
@property (readonly, class) jlong serialVersionUID NS_SWIFT_NAME(serialVersionUID);

#pragma mark Public

/*!
 @brief Overrides Cloneable
 */
- (id __nonnull)java_clone;

/*!
 @brief Overrides equals
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Specialization of format.
 @throw ArithmeticExceptionif rounding is needed with rounding
                    mode being set to RoundingMode.UNNECESSARY
 - seealso: java.text.Format#format
 */
- (NSString * __nonnull)formatWithDouble:(jdouble)number;

/*!
 @brief Specialization of format.
 @throw ArithmeticExceptionif rounding is needed with rounding
                    mode being set to RoundingMode.UNNECESSARY
 - seealso: java.text.Format#format
 */
- (JavaLangStringBuffer * __nonnull)formatWithDouble:(jdouble)number
                            withJavaLangStringBuffer:(JavaLangStringBuffer *)toAppendTo
                           withJavaTextFieldPosition:(JavaTextFieldPosition *)pos;

/*!
 @brief Specialization of format.
 @throw ArithmeticExceptionif rounding is needed with rounding
                    mode being set to RoundingMode.UNNECESSARY
 - seealso: java.text.Format#format
 */
- (NSString * __nonnull)formatWithLong:(jlong)number;

/*!
 @brief Specialization of format.
 @throw ArithmeticExceptionif rounding is needed with rounding
                    mode being set to RoundingMode.UNNECESSARY
 - seealso: java.text.Format#format
 */
- (JavaLangStringBuffer * __nonnull)formatWithLong:(jlong)number
                          withJavaLangStringBuffer:(JavaLangStringBuffer *)toAppendTo
                         withJavaTextFieldPosition:(JavaTextFieldPosition *)pos;

/*!
 @brief Formats a number and appends the resulting text to the given string
  buffer.
 The number can be of any subclass of <code>java.lang.Number</code>.
  <p>
  This implementation extracts the number's value using 
 <code>java.lang.Number.longValue()</code> for all integral type values that
  can be converted to <code>long</code> without loss of information,
  including <code>BigInteger</code> values with a 
 <code>bit length</code> of less than 64,
  and <code>java.lang.Number.doubleValue()</code> for all other types. It
  then calls 
 <code>format(long,java.lang.StringBuffer,java.text.FieldPosition)</code>
  or <code>format(double,java.lang.StringBuffer,java.text.FieldPosition)</code>.
  This may result in loss of magnitude information and precision for 
 <code>BigInteger</code> and <code>BigDecimal</code> values.
 @param number the number to format
 @param toAppendTo the  <code> StringBuffer </code>  to which the formatted
                     text is to be appended
 @param pos On input: an alignment field, if desired.                    On output: the offsets of the alignment field.
 @return the value passed in as <code>toAppendTo</code>
 @throw IllegalArgumentExceptionif <code>number</code> is
                    null or not an instance of <code>Number</code>.
 @throw NullPointerExceptionif <code>toAppendTo</code> or
                    <code>pos</code> is null
 @throw ArithmeticExceptionif rounding is needed with rounding
                    mode being set to RoundingMode.UNNECESSARY
 - seealso: java.text.FieldPosition
 */
- (JavaLangStringBuffer * __nonnull)formatWithId:(id)number
                        withJavaLangStringBuffer:(JavaLangStringBuffer *)toAppendTo
                       withJavaTextFieldPosition:(JavaTextFieldPosition *)pos;

/*!
 @brief Returns an array of all locales for which the 
 <code>get*Instance</code> methods of this class can return
  localized instances.
 The returned array represents the union of locales supported by the Java
  runtime and by installed 
 <code>NumberFormatProvider</code> implementations.
  It must contain at least a <code>Locale</code> instance equal to 
 <code>Locale.US</code>.
 @return An array of locales for which localized
          <code>NumberFormat</code> instances are available.
 */
+ (IOSObjectArray * __nonnull)getAvailableLocales;

/*!
 @brief Gets the currency used by this number format when formatting
  currency values.The initial value is derived in a locale dependent
  way.
 The returned value may be null if no valid
  currency could be determined and no currency has been set using 
 <code>setCurrency</code>.
  <p>
  The default implementation throws 
 <code>UnsupportedOperationException</code>.
 @return the currency used by this number format, or <code>null</code>
 @throw UnsupportedOperationExceptionif the number format class
  doesn't implement currency formatting
 @since 1.4
 */
- (JavaUtilCurrency * __nullable)getCurrency;

/*!
 @brief Returns a currency format for the current default locale.
 */
+ (JavaTextNumberFormat * __nonnull)getCurrencyInstance;

/*!
 @brief Returns a currency format for the specified locale.
 */
+ (JavaTextNumberFormat * __nonnull)getCurrencyInstanceWithJavaUtilLocale:(JavaUtilLocale *)inLocale;

/*!
 @brief Returns a general-purpose number format for the current default locale.
 This is the same as calling 
 <code>getNumberInstance()</code>.
 */
+ (JavaTextNumberFormat * __nonnull)getInstance;

/*!
 @brief Returns a general-purpose number format for the specified locale.
 This is the same as calling 
 <code>getNumberInstance(inLocale)</code>.
 */
+ (JavaTextNumberFormat * __nonnull)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)inLocale;

/*!
 @brief Returns an integer number format for the current default locale.The
  returned number format is configured to round floating point numbers
  to the nearest integer using half-even rounding (see <code>RoundingMode.HALF_EVEN</code>
 ) for formatting,
  and to parse only the integer part of an input string (see <code>isParseIntegerOnly</code>
 ).
 - seealso: #getRoundingMode()
 @return a number format for integer values
 @since 1.4
 */
+ (JavaTextNumberFormat * __nonnull)getIntegerInstance;

/*!
 @brief Returns an integer number format for the specified locale.The
  returned number format is configured to round floating point numbers
  to the nearest integer using half-even rounding (see <code>RoundingMode.HALF_EVEN</code>
 ) for formatting,
  and to parse only the integer part of an input string (see <code>isParseIntegerOnly</code>
 ).
 - seealso: #getRoundingMode()
 @return a number format for integer values
 @since 1.4
 */
+ (JavaTextNumberFormat * __nonnull)getIntegerInstanceWithJavaUtilLocale:(JavaUtilLocale *)inLocale;

/*!
 @brief Returns the maximum number of digits allowed in the fraction portion of a
  number.
 - seealso: #setMaximumFractionDigits
 */
- (jint)getMaximumFractionDigits;

/*!
 @brief Returns the maximum number of digits allowed in the integer portion of a
  number.
 - seealso: #setMaximumIntegerDigits
 */
- (jint)getMaximumIntegerDigits;

/*!
 @brief Returns the minimum number of digits allowed in the fraction portion of a
  number.
 - seealso: #setMinimumFractionDigits
 */
- (jint)getMinimumFractionDigits;

/*!
 @brief Returns the minimum number of digits allowed in the integer portion of a
  number.
 - seealso: #setMinimumIntegerDigits
 */
- (jint)getMinimumIntegerDigits;

/*!
 @brief Returns a general-purpose number format for the current default locale.
 */
+ (JavaTextNumberFormat * __nonnull)getNumberInstance;

/*!
 @brief Returns a general-purpose number format for the specified locale.
 */
+ (JavaTextNumberFormat * __nonnull)getNumberInstanceWithJavaUtilLocale:(JavaUtilLocale *)inLocale;

/*!
 @brief Returns a percentage format for the current default locale.
 */
+ (JavaTextNumberFormat * __nonnull)getPercentInstance;

/*!
 @brief Returns a percentage format for the specified locale.
 */
+ (JavaTextNumberFormat * __nonnull)getPercentInstanceWithJavaUtilLocale:(JavaUtilLocale *)inLocale;

/*!
 @brief Gets the <code>java.math.RoundingMode</code> used in this NumberFormat.
 The default implementation of this method in NumberFormat
  always throws <code>java.lang.UnsupportedOperationException</code>.
  Subclasses which handle different rounding modes should override
  this method.
 @throw UnsupportedOperationExceptionThe default implementation
      always throws this exception
 @return The <code>RoundingMode</code> used for this NumberFormat.
 - seealso: #setRoundingMode(RoundingMode)
 @since 1.6
 */
- (JavaMathRoundingMode * __nonnull)getRoundingMode;

/*!
 @brief Overrides hashCode
 */
- (NSUInteger)hash;

/*!
 @brief Returns true if grouping is used in this format.For example, in the
  English locale, with grouping on, the number 1234567 might be formatted
  as "1,234,567".
 The grouping separator as well as the size of each group
  is locale dependant and is determined by sub-classes of NumberFormat.
 - seealso: #setGroupingUsed
 */
- (jboolean)isGroupingUsed;

/*!
 @brief Returns true if this format will parse numbers as integers only.
 For example in the English locale, with ParseIntegerOnly true, the
  string "1234." would be parsed as the integer value 1234 and parsing
  would stop at the "." character.  Of course, the exact format accepted
  by the parse operation is locale dependant and determined by sub-classes
  of NumberFormat.
 */
- (jboolean)isParseIntegerOnly;

/*!
 @brief Parses text from the beginning of the given string to produce a number.
 The method may not use the entire text of the given string. 
 <p>
  See the <code>parse(String, ParsePosition)</code> method for more information
  on number parsing.
 @param source A  <code> String </code>  whose beginning should be parsed.
 @return A <code>Number</code> parsed from the string.
 @throw ParseExceptionif the beginning of the specified string
             cannot be parsed.
 */
- (NSNumber * __nullable)parseWithNSString:(NSString *)source;

/*!
 @brief Returns a Long if possible (e.g., within the range [Long.MIN_VALUE,
  Long.MAX_VALUE] and with no decimals), otherwise a Double.
 If IntegerOnly is set, will stop at a decimal
  point (or equivalent; e.g., for rational numbers "1 2/3", will stop
  after the 1).
  Does not throw an exception; if no object can be parsed, index is
  unchanged!
 - seealso: java.text.NumberFormat#isParseIntegerOnly
 - seealso: java.text.Format#parseObject
 */
- (NSNumber * __nullable)parseWithNSString:(NSString *)source
                 withJavaTextParsePosition:(JavaTextParsePosition *)parsePosition;

/*!
 @brief Parses text from a string to produce a <code>Number</code>.
 <p>
  The method attempts to parse text starting at the index given by 
 <code>pos</code>.
  If parsing succeeds, then the index of <code>pos</code> is updated
  to the index after the last character used (parsing does not necessarily
  use all characters up to the end of the string), and the parsed
  number is returned. The updated <code>pos</code> can be used to
  indicate the starting point for the next call to this method.
  If an error occurs, then the index of <code>pos</code> is not
  changed, the error index of <code>pos</code> is set to the index of
  the character where the error occurred, and null is returned. 
 <p>
  See the <code>parse(String, ParsePosition)</code> method for more information
  on number parsing.
 @param source A  <code> String </code> , part of which should be parsed.
 @param pos A  <code> ParsePosition </code>  object with index and error
              index information as described above.
 @return A <code>Number</code> parsed from the string. In case of
          error, returns null.
 @throw NullPointerExceptionif <code>pos</code> is null.
 */
- (id __nullable)parseObjectWithNSString:(NSString *)source
               withJavaTextParsePosition:(JavaTextParsePosition *)pos;

/*!
 @brief Sets the currency used by this number format when formatting
  currency values.This does not update the minimum or maximum
  number of fraction digits used by the number format.
 <p>
  The default implementation throws 
 <code>UnsupportedOperationException</code>.
 @param currency the new currency to be used by this number format
 @throw UnsupportedOperationExceptionif the number format class
  doesn't implement currency formatting
 @throw NullPointerExceptionif <code>currency</code> is null
 @since 1.4
 */
- (void)setCurrencyWithJavaUtilCurrency:(JavaUtilCurrency *)currency;

/*!
 @brief Set whether or not grouping will be used in this format.
 - seealso: #isGroupingUsed
 */
- (void)setGroupingUsedWithBoolean:(jboolean)newValue;

/*!
 @brief Sets the maximum number of digits allowed in the fraction portion of a
  number.maximumFractionDigits must be >= minimumFractionDigits.
 If the
  new value for maximumFractionDigits is less than the current value
  of minimumFractionDigits, then minimumFractionDigits will also be set to
  the new value.
 @param newValue the maximum number of fraction digits to be shown; if  less than zero, then zero is used. The concrete subclass may enforce an
   upper limit to this value appropriate to the numeric type being formatted.
 - seealso: #getMaximumFractionDigits
 */
- (void)setMaximumFractionDigitsWithInt:(jint)newValue;

/*!
 @brief Sets the maximum number of digits allowed in the integer portion of a
  number.maximumIntegerDigits must be >= minimumIntegerDigits.
 If the
  new value for maximumIntegerDigits is less than the current value
  of minimumIntegerDigits, then minimumIntegerDigits will also be set to
  the new value.
 @param newValue the maximum number of integer digits to be shown; if  less than zero, then zero is used. The concrete subclass may enforce an
   upper limit to this value appropriate to the numeric type being formatted.
 - seealso: #getMaximumIntegerDigits
 */
- (void)setMaximumIntegerDigitsWithInt:(jint)newValue;

/*!
 @brief Sets the minimum number of digits allowed in the fraction portion of a
  number.minimumFractionDigits must be <= maximumFractionDigits.
 If the
  new value for minimumFractionDigits exceeds the current value
  of maximumFractionDigits, then maximumIntegerDigits will also be set to
  the new value
 @param newValue the minimum number of fraction digits to be shown; if  less than zero, then zero is used. The concrete subclass may enforce an
   upper limit to this value appropriate to the numeric type being formatted.
 - seealso: #getMinimumFractionDigits
 */
- (void)setMinimumFractionDigitsWithInt:(jint)newValue;

/*!
 @brief Sets the minimum number of digits allowed in the integer portion of a
  number.minimumIntegerDigits must be <= maximumIntegerDigits.
 If the
  new value for minimumIntegerDigits exceeds the current value
  of maximumIntegerDigits, then maximumIntegerDigits will also be set to
  the new value
 @param newValue the minimum number of integer digits to be shown; if  less than zero, then zero is used. The concrete subclass may enforce an
   upper limit to this value appropriate to the numeric type being formatted.
 - seealso: #getMinimumIntegerDigits
 */
- (void)setMinimumIntegerDigitsWithInt:(jint)newValue;

/*!
 @brief Sets whether or not numbers should be parsed as integers only.
 - seealso: #isParseIntegerOnly
 */
- (void)setParseIntegerOnlyWithBoolean:(jboolean)value;

/*!
 @brief Sets the <code>java.math.RoundingMode</code> used in this NumberFormat.
 The default implementation of this method in NumberFormat always
  throws <code>java.lang.UnsupportedOperationException</code>.
  Subclasses which handle different rounding modes should override
  this method.
 @throw UnsupportedOperationExceptionThe default implementation
      always throws this exception
 @throw NullPointerExceptionif <code>roundingMode</code> is null
 @param roundingMode The  <code> RoundingMode </code>  to be used
 - seealso: #getRoundingMode()
 @since 1.6
 */
- (void)setRoundingModeWithJavaMathRoundingMode:(JavaMathRoundingMode *)roundingMode;

#pragma mark Protected

/*!
 @brief Sole constructor.
 (For invocation by subclass constructors, typically
  implicit.)
 */
- (instancetype __nonnull)init;

@end

J2OBJC_STATIC_INIT(JavaTextNumberFormat)

/*!
 @brief Field constant used to construct a FieldPosition object.Signifies that
  the position of the integer part of a formatted number should be returned.
 - seealso: java.text.FieldPosition
 */
inline jint JavaTextNumberFormat_get_INTEGER_FIELD(void);
#define JavaTextNumberFormat_INTEGER_FIELD 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextNumberFormat, INTEGER_FIELD, jint)

/*!
 @brief Field constant used to construct a FieldPosition object.Signifies that
  the position of the fraction part of a formatted number should be returned.
 - seealso: java.text.FieldPosition
 */
inline jint JavaTextNumberFormat_get_FRACTION_FIELD(void);
#define JavaTextNumberFormat_FRACTION_FIELD 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextNumberFormat, FRACTION_FIELD, jint)

inline jint JavaTextNumberFormat_get_currentSerialVersion(void);
#define JavaTextNumberFormat_currentSerialVersion 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextNumberFormat, currentSerialVersion, jint)

inline jlong JavaTextNumberFormat_get_serialVersionUID(void);
#define JavaTextNumberFormat_serialVersionUID -2308460125733713944LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaTextNumberFormat, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaTextNumberFormat_init(JavaTextNumberFormat *self);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getInstance(void);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getInstanceWithJavaUtilLocale_(JavaUtilLocale *inLocale);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getNumberInstance(void);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getNumberInstanceWithJavaUtilLocale_(JavaUtilLocale *inLocale);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getIntegerInstance(void);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getIntegerInstanceWithJavaUtilLocale_(JavaUtilLocale *inLocale);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getCurrencyInstance(void);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getCurrencyInstanceWithJavaUtilLocale_(JavaUtilLocale *inLocale);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getPercentInstance(void);

FOUNDATION_EXPORT JavaTextNumberFormat *JavaTextNumberFormat_getPercentInstanceWithJavaUtilLocale_(JavaUtilLocale *inLocale);

FOUNDATION_EXPORT IOSObjectArray *JavaTextNumberFormat_getAvailableLocales(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextNumberFormat)

#endif

#if !defined (JavaTextNumberFormat_Field_) && (INCLUDE_ALL_JavaTextNumberFormat || defined(INCLUDE_JavaTextNumberFormat_Field))
#define JavaTextNumberFormat_Field_

#define RESTRICT_JavaTextFormat 1
#define INCLUDE_JavaTextFormat_Field 1
#include <JRE/java/text/Format.h>

/*!
 @brief Defines constants that are used as attribute keys in the 
 <code>AttributedCharacterIterator</code> returned
  from <code>NumberFormat.formatToCharacterIterator</code> and as
  field identifiers in <code>FieldPosition</code>.
 @since 1.4
 */
@interface JavaTextNumberFormat_Field : JavaTextFormat_Field
@property (readonly, class, strong) JavaTextNumberFormat_Field *INTEGER NS_SWIFT_NAME(INTEGER);
@property (readonly, class, strong) JavaTextNumberFormat_Field *FRACTION NS_SWIFT_NAME(FRACTION);
@property (readonly, class, strong) JavaTextNumberFormat_Field *EXPONENT NS_SWIFT_NAME(EXPONENT);
@property (readonly, class, strong) JavaTextNumberFormat_Field *DECIMAL_SEPARATOR NS_SWIFT_NAME(DECIMAL_SEPARATOR);
@property (readonly, class, strong) JavaTextNumberFormat_Field *SIGN NS_SWIFT_NAME(SIGN);
@property (readonly, class, strong) JavaTextNumberFormat_Field *GROUPING_SEPARATOR NS_SWIFT_NAME(GROUPING_SEPARATOR);
@property (readonly, class, strong) JavaTextNumberFormat_Field *EXPONENT_SYMBOL NS_SWIFT_NAME(EXPONENT_SYMBOL);
@property (readonly, class, strong) JavaTextNumberFormat_Field *PERCENT NS_SWIFT_NAME(PERCENT);
@property (readonly, class, strong) JavaTextNumberFormat_Field *PERMILLE NS_SWIFT_NAME(PERMILLE);
@property (readonly, class, strong) JavaTextNumberFormat_Field *CURRENCY NS_SWIFT_NAME(CURRENCY);
@property (readonly, class, strong) JavaTextNumberFormat_Field *EXPONENT_SIGN NS_SWIFT_NAME(EXPONENT_SIGN);

#pragma mark Protected

/*!
 @brief Creates a Field instance with the specified
  name.
 @param name Name of the attribute
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name;

/*!
 @brief Resolves instances being deserialized to the predefined constants.
 @throw InvalidObjectExceptionif the constant could not be resolved.
 @return resolved NumberFormat.Field constant
 */
- (id __nonnull)readResolve;

@end

J2OBJC_STATIC_INIT(JavaTextNumberFormat_Field)

/*!
 @brief Constant identifying the integer field.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_INTEGER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_INTEGER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, INTEGER, JavaTextNumberFormat_Field *)

/*!
 @brief Constant identifying the fraction field.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_FRACTION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_FRACTION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, FRACTION, JavaTextNumberFormat_Field *)

/*!
 @brief Constant identifying the exponent field.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_EXPONENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_EXPONENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, EXPONENT, JavaTextNumberFormat_Field *)

/*!
 @brief Constant identifying the decimal separator field.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_DECIMAL_SEPARATOR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_DECIMAL_SEPARATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, DECIMAL_SEPARATOR, JavaTextNumberFormat_Field *)

/*!
 @brief Constant identifying the sign field.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_SIGN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_SIGN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, SIGN, JavaTextNumberFormat_Field *)

/*!
 @brief Constant identifying the grouping separator field.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_GROUPING_SEPARATOR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_GROUPING_SEPARATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, GROUPING_SEPARATOR, JavaTextNumberFormat_Field *)

/*!
 @brief Constant identifying the exponent symbol field.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_EXPONENT_SYMBOL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_EXPONENT_SYMBOL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, EXPONENT_SYMBOL, JavaTextNumberFormat_Field *)

/*!
 @brief Constant identifying the percent field.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_PERCENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_PERCENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, PERCENT, JavaTextNumberFormat_Field *)

/*!
 @brief Constant identifying the permille field.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_PERMILLE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_PERMILLE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, PERMILLE, JavaTextNumberFormat_Field *)

/*!
 @brief Constant identifying the currency field.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_CURRENCY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_CURRENCY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, CURRENCY, JavaTextNumberFormat_Field *)

/*!
 @brief Constant identifying the exponent sign field.
 */
inline JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_get_EXPONENT_SIGN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaTextNumberFormat_Field *JavaTextNumberFormat_Field_EXPONENT_SIGN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTextNumberFormat_Field, EXPONENT_SIGN, JavaTextNumberFormat_Field *)

FOUNDATION_EXPORT void JavaTextNumberFormat_Field_initWithNSString_(JavaTextNumberFormat_Field *self, NSString *name);

FOUNDATION_EXPORT JavaTextNumberFormat_Field *new_JavaTextNumberFormat_Field_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextNumberFormat_Field *create_JavaTextNumberFormat_Field_initWithNSString_(NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextNumberFormat_Field)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextNumberFormat")
