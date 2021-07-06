//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: openjdk/src/share/classes/java/math/RoundingMode.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaMathRoundingMode")
#ifdef RESTRICT_JavaMathRoundingMode
#define INCLUDE_ALL_JavaMathRoundingMode 0
#else
#define INCLUDE_ALL_JavaMathRoundingMode 1
#endif
#undef RESTRICT_JavaMathRoundingMode

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaMathRoundingMode_) && (INCLUDE_ALL_JavaMathRoundingMode || defined(INCLUDE_JavaMathRoundingMode))
#define JavaMathRoundingMode_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include <JRE/java/lang/Enum.h>

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaMathRoundingMode_Enum) {
  JavaMathRoundingMode_Enum_UP = 0,
  JavaMathRoundingMode_Enum_DOWN = 1,
  JavaMathRoundingMode_Enum_CEILING = 2,
  JavaMathRoundingMode_Enum_FLOOR = 3,
  JavaMathRoundingMode_Enum_HALF_UP = 4,
  JavaMathRoundingMode_Enum_HALF_DOWN = 5,
  JavaMathRoundingMode_Enum_HALF_EVEN = 6,
  JavaMathRoundingMode_Enum_UNNECESSARY = 7,
};

/*!
 @brief Specifies a <i>rounding behavior</i> for numerical operations
  capable of discarding precision.Each rounding mode indicates how
  the least significant returned digit of a rounded result is to be
  calculated.
 If fewer digits are returned than the digits needed to
  represent the exact numerical result, the discarded digits will be
  referred to as the <i>discarded fraction</i> regardless the digits'
  contribution to the value of the number.  In other words,
  considered as a numerical value, the discarded fraction could have
  an absolute value greater than one. 
 <p>Each rounding mode description includes a table listing how
  different two-digit decimal values would round to a one digit
  decimal value under the rounding mode in question.  The result
  column in the tables could be gotten by creating a 
 <code>BigDecimal</code> number with the specified value, forming a 
 <code>MathContext</code> object with the proper settings
  (<code>precision</code> set to <code>1</code>, and the 
 <code>roundingMode</code> set to the rounding mode in question), and
  calling <code>round</code> on this number with the
  proper <code>MathContext</code>.  A summary table showing the results
  of these rounding operations for all rounding modes appears below.
 <table border>
  <caption><b>Summary of Rounding Operations Under Different Rounding Modes</b></caption>
  <tr><th></th><th colspan=8>Result of rounding input to one digit with the given
                            rounding mode</th>
  <tr valign=top>
  <th>Input Number</th>         <th><code>UP</code></th>
                                            <th><code>DOWN</code></th>
                                                         <th><code>CEILING</code></th>
                                                                        <th><code>FLOOR</code></th>
                                                                                     <th><code>HALF_UP</code></th>
                                                                                                    <th><code>HALF_DOWN</code></th>
                                                                                                                     <th><code>HALF_EVEN</code></th>
                                                                                                                                      <th><code>UNNECESSARY</code></th>
  
 <tr align=right><td>5.5</td>  <td>6</td>  <td>5</td>    <td>6</td>    <td>5</td>  <td>6</td>      <td>5</td>       <td>6</td>       <td>throw <code>ArithmeticException</code></td>
  <tr align=right><td>2.5</td>  <td>3</td>  <td>2</td>    <td>3</td>    <td>2</td>  <td>3</td>      <td>2</td>       <td>2</td>       <td>throw <code>ArithmeticException</code></td>
  <tr align=right><td>1.6</td>  <td>2</td>  <td>1</td>    <td>2</td>    <td>1</td>  <td>2</td>      <td>2</td>       <td>2</td>       <td>throw <code>ArithmeticException</code></td>
  <tr align=right><td>1.1</td>  <td>2</td>  <td>1</td>    <td>2</td>    <td>1</td>  <td>1</td>      <td>1</td>       <td>1</td>       <td>throw <code>ArithmeticException</code></td>
  <tr align=right><td>1.0</td>  <td>1</td>  <td>1</td>    <td>1</td>    <td>1</td>  <td>1</td>      <td>1</td>       <td>1</td>       <td>1</td>
  <tr align=right><td>-1.0</td> <td>-1</td> <td>-1</td>   <td>-1</td>   <td>-1</td> <td>-1</td>     <td>-1</td>      <td>-1</td>      <td>-1</td>
  <tr align=right><td>-1.1</td> <td>-2</td> <td>-1</td>   <td>-1</td>   <td>-2</td> <td>-1</td>     <td>-1</td>      <td>-1</td>      <td>throw <code>ArithmeticException</code></td>
  <tr align=right><td>-1.6</td> <td>-2</td> <td>-1</td>   <td>-1</td>   <td>-2</td> <td>-2</td>     <td>-2</td>      <td>-2</td>      <td>throw <code>ArithmeticException</code></td>
  <tr align=right><td>-2.5</td> <td>-3</td> <td>-2</td>   <td>-2</td>   <td>-3</td> <td>-3</td>     <td>-2</td>      <td>-2</td>      <td>throw <code>ArithmeticException</code></td>
  <tr align=right><td>-5.5</td> <td>-6</td> <td>-5</td>   <td>-5</td>   <td>-6</td> <td>-6</td>     <td>-5</td>      <td>-6</td>      <td>throw <code>ArithmeticException</code></td>
 </table>
  
 <p>This <code>enum</code> is intended to replace the integer-based
  enumeration of rounding mode constants in <code>BigDecimal</code>
  (<code>BigDecimal.ROUND_UP</code>, <code>BigDecimal.ROUND_DOWN</code>,
  etc. ).
 - seealso: BigDecimal
 - seealso: MathContext
 @author Josh Bloch
 @author Mike Cowlishaw
 @author Joseph D. Darcy
 @since 1.5
 */
@interface JavaMathRoundingMode : JavaLangEnum {
 @public
  jint oldMode_;
}

@property (readonly, class, nonnull) JavaMathRoundingMode *UP NS_SWIFT_NAME(UP);
@property (readonly, class, nonnull) JavaMathRoundingMode *DOWN NS_SWIFT_NAME(DOWN);
@property (readonly, class, nonnull) JavaMathRoundingMode *CEILING NS_SWIFT_NAME(CEILING);
@property (readonly, class, nonnull) JavaMathRoundingMode *FLOOR NS_SWIFT_NAME(FLOOR);
@property (readonly, class, nonnull) JavaMathRoundingMode *HALF_UP NS_SWIFT_NAME(HALF_UP);
@property (readonly, class, nonnull) JavaMathRoundingMode *HALF_DOWN NS_SWIFT_NAME(HALF_DOWN);
@property (readonly, class, nonnull) JavaMathRoundingMode *HALF_EVEN NS_SWIFT_NAME(HALF_EVEN);
@property (readonly, class, nonnull) JavaMathRoundingMode *UNNECESSARY NS_SWIFT_NAME(UNNECESSARY);
#pragma mark Public

/*!
 @brief Returns the <code>RoundingMode</code> object corresponding to a
  legacy integer rounding mode constant in <code>BigDecimal</code>.
 @param rm legacy integer rounding mode to convert
 @return <code>RoundingMode</code> corresponding to the given integer.
 @throw IllegalArgumentExceptioninteger is out of range
 */
+ (JavaMathRoundingMode *)valueOfWithInt:(jint)rm;

+ (JavaMathRoundingMode *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaMathRoundingMode_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaMathRoundingMode)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaMathRoundingMode *JavaMathRoundingMode_values_[];

/*!
 @brief Rounding mode to round away from zero.Always increments the
  digit prior to a non-zero discarded fraction.
 Note that this
  rounding mode never decreases the magnitude of the calculated
  value.
 <p>Example:
 <table border>
  <caption><b>Rounding mode UP Examples</b></caption>
 <tr valign=top><th>Input Number</th>
     <th>Input rounded to one digit<br> with <code>UP</code> rounding
 <tr align=right><td>5.5</td>  <td>6</td>
 <tr align=right><td>2.5</td>  <td>3</td>
 <tr align=right><td>1.6</td>  <td>2</td>
 <tr align=right><td>1.1</td>  <td>2</td>
 <tr align=right><td>1.0</td>  <td>1</td>
 <tr align=right><td>-1.0</td> <td>-1</td>
 <tr align=right><td>-1.1</td> <td>-2</td>
 <tr align=right><td>-1.6</td> <td>-2</td>
 <tr align=right><td>-2.5</td> <td>-3</td>
 <tr align=right><td>-5.5</td> <td>-6</td>
 </table>
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_UP(void);
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, UP)

/*!
 @brief Rounding mode to round towards zero.Never increments the digit
  prior to a discarded fraction (i.e., truncates).
 Note that this
  rounding mode never increases the magnitude of the calculated value.
 <p>Example:
 <table border>
  <caption><b>Rounding mode DOWN Examples</b></caption>
 <tr valign=top><th>Input Number</th>
     <th>Input rounded to one digit<br> with <code>DOWN</code> rounding
 <tr align=right><td>5.5</td>  <td>5</td>
 <tr align=right><td>2.5</td>  <td>2</td>
 <tr align=right><td>1.6</td>  <td>1</td>
 <tr align=right><td>1.1</td>  <td>1</td>
 <tr align=right><td>1.0</td>  <td>1</td>
 <tr align=right><td>-1.0</td> <td>-1</td>
 <tr align=right><td>-1.1</td> <td>-1</td>
 <tr align=right><td>-1.6</td> <td>-1</td>
 <tr align=right><td>-2.5</td> <td>-2</td>
 <tr align=right><td>-5.5</td> <td>-5</td>
 </table>
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_DOWN(void);
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, DOWN)

/*!
 @brief Rounding mode to round towards positive infinity.If the
  result is positive, behaves as for <code>RoundingMode.UP</code>;
  if negative, behaves as for <code>RoundingMode.DOWN</code>.
 Note
  that this rounding mode never decreases the calculated value.
 <p>Example:
 <table border>
  <caption><b>Rounding mode CEILING Examples</b></caption>
 <tr valign=top><th>Input Number</th>
     <th>Input rounded to one digit<br> with <code>CEILING</code> rounding
 <tr align=right><td>5.5</td>  <td>6</td>
 <tr align=right><td>2.5</td>  <td>3</td>
 <tr align=right><td>1.6</td>  <td>2</td>
 <tr align=right><td>1.1</td>  <td>2</td>
 <tr align=right><td>1.0</td>  <td>1</td>
 <tr align=right><td>-1.0</td> <td>-1</td>
 <tr align=right><td>-1.1</td> <td>-1</td>
 <tr align=right><td>-1.6</td> <td>-1</td>
 <tr align=right><td>-2.5</td> <td>-2</td>
 <tr align=right><td>-5.5</td> <td>-5</td>
 </table>
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_CEILING(void);
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, CEILING)

/*!
 @brief Rounding mode to round towards negative infinity.If the
  result is positive, behave as for <code>RoundingMode.DOWN</code>;
  if negative, behave as for <code>RoundingMode.UP</code>.
 Note that
  this rounding mode never increases the calculated value.
 <p>Example:
 <table border>
  <caption><b>Rounding mode FLOOR Examples</b></caption>
 <tr valign=top><th>Input Number</th>
     <th>Input rounded to one digit<br> with <code>FLOOR</code> rounding
 <tr align=right><td>5.5</td>  <td>5</td>
 <tr align=right><td>2.5</td>  <td>2</td>
 <tr align=right><td>1.6</td>  <td>1</td>
 <tr align=right><td>1.1</td>  <td>1</td>
 <tr align=right><td>1.0</td>  <td>1</td>
 <tr align=right><td>-1.0</td> <td>-1</td>
 <tr align=right><td>-1.1</td> <td>-2</td>
 <tr align=right><td>-1.6</td> <td>-2</td>
 <tr align=right><td>-2.5</td> <td>-3</td>
 <tr align=right><td>-5.5</td> <td>-6</td>
 </table>
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_FLOOR(void);
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, FLOOR)

/*!
 @brief Rounding mode to round towards &quot;nearest neighbor&quot;
  unless both neighbors are equidistant, in which case round up.
 Behaves as for <code>RoundingMode.UP</code> if the discarded
  fraction is &ge; 0.5; otherwise, behaves as for 
 <code>RoundingMode.DOWN</code>.  Note that this is the rounding
  mode commonly taught at school.
 <p>Example:
 <table border>
  <caption><b>Rounding mode HALF_UP Examples</b></caption>
 <tr valign=top><th>Input Number</th>
     <th>Input rounded to one digit<br> with <code>HALF_UP</code> rounding
 <tr align=right><td>5.5</td>  <td>6</td>
 <tr align=right><td>2.5</td>  <td>3</td>
 <tr align=right><td>1.6</td>  <td>2</td>
 <tr align=right><td>1.1</td>  <td>1</td>
 <tr align=right><td>1.0</td>  <td>1</td>
 <tr align=right><td>-1.0</td> <td>-1</td>
 <tr align=right><td>-1.1</td> <td>-1</td>
 <tr align=right><td>-1.6</td> <td>-2</td>
 <tr align=right><td>-2.5</td> <td>-3</td>
 <tr align=right><td>-5.5</td> <td>-6</td>
 </table>
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_HALF_UP(void);
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, HALF_UP)

/*!
 @brief Rounding mode to round towards &quot;nearest neighbor&quot;
  unless both neighbors are equidistant, in which case round
  down.Behaves as for <code>RoundingMode.UP</code> if the discarded
  fraction is &gt; 0.5; otherwise, behaves as for 
 <code>RoundingMode.DOWN</code>.
 <p>Example:
 <table border>
  <caption><b>Rounding mode HALF_DOWN Examples</b></caption>
 <tr valign=top><th>Input Number</th>
     <th>Input rounded to one digit<br> with <code>HALF_DOWN</code> rounding
 <tr align=right><td>5.5</td>  <td>5</td>
 <tr align=right><td>2.5</td>  <td>2</td>
 <tr align=right><td>1.6</td>  <td>2</td>
 <tr align=right><td>1.1</td>  <td>1</td>
 <tr align=right><td>1.0</td>  <td>1</td>
 <tr align=right><td>-1.0</td> <td>-1</td>
 <tr align=right><td>-1.1</td> <td>-1</td>
 <tr align=right><td>-1.6</td> <td>-2</td>
 <tr align=right><td>-2.5</td> <td>-2</td>
 <tr align=right><td>-5.5</td> <td>-5</td>
 </table>
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_HALF_DOWN(void);
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, HALF_DOWN)

/*!
 @brief Rounding mode to round towards the &quot;nearest neighbor&quot;
  unless both neighbors are equidistant, in which case, round
  towards the even neighbor.Behaves as for 
 <code>RoundingMode.HALF_UP</code> if the digit to the left of the
  discarded fraction is odd; behaves as for 
 <code>RoundingMode.HALF_DOWN</code> if it's even.
 Note that this
  is the rounding mode that statistically minimizes cumulative
  error when applied repeatedly over a sequence of calculations.
  It is sometimes known as &quot;Banker&apos;s rounding,&quot; and is
  chiefly used in the USA.  This rounding mode is analogous to
  the rounding policy used for <code>float</code> and <code>double</code>
  arithmetic in Java.
 <p>Example:
 <table border>
  <caption><b>Rounding mode HALF_EVEN Examples</b></caption>
 <tr valign=top><th>Input Number</th>
     <th>Input rounded to one digit<br> with <code>HALF_EVEN</code> rounding
 <tr align=right><td>5.5</td>  <td>6</td>
 <tr align=right><td>2.5</td>  <td>2</td>
 <tr align=right><td>1.6</td>  <td>2</td>
 <tr align=right><td>1.1</td>  <td>1</td>
 <tr align=right><td>1.0</td>  <td>1</td>
 <tr align=right><td>-1.0</td> <td>-1</td>
 <tr align=right><td>-1.1</td> <td>-1</td>
 <tr align=right><td>-1.6</td> <td>-2</td>
 <tr align=right><td>-2.5</td> <td>-2</td>
 <tr align=right><td>-5.5</td> <td>-6</td>
 </table>
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_HALF_EVEN(void);
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, HALF_EVEN)

/*!
 @brief Rounding mode to assert that the requested operation has an exact
  result, hence no rounding is necessary.If this rounding mode is
  specified on an operation that yields an inexact result, an 
 <code>ArithmeticException</code> is thrown.
 <p>Example:
 <table border>
  <caption><b>Rounding mode UNNECESSARY Examples</b></caption>
 <tr valign=top><th>Input Number</th>
     <th>Input rounded to one digit<br> with <code>UNNECESSARY</code> rounding
 <tr align=right><td>5.5</td>  <td>throw <code>ArithmeticException</code></td>
 <tr align=right><td>2.5</td>  <td>throw <code>ArithmeticException</code></td>
 <tr align=right><td>1.6</td>  <td>throw <code>ArithmeticException</code></td>
 <tr align=right><td>1.1</td>  <td>throw <code>ArithmeticException</code></td>
 <tr align=right><td>1.0</td>  <td>1</td>
 <tr align=right><td>-1.0</td> <td>-1</td>
 <tr align=right><td>-1.1</td> <td>throw <code>ArithmeticException</code></td>
 <tr align=right><td>-1.6</td> <td>throw <code>ArithmeticException</code></td>
 <tr align=right><td>-2.5</td> <td>throw <code>ArithmeticException</code></td>
 <tr align=right><td>-5.5</td> <td>throw <code>ArithmeticException</code></td>
 </table>
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_UNNECESSARY(void);
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, UNNECESSARY)

FOUNDATION_EXPORT JavaMathRoundingMode *JavaMathRoundingMode_valueOfWithInt_(jint rm);

FOUNDATION_EXPORT IOSObjectArray *JavaMathRoundingMode_values(void);

FOUNDATION_EXPORT JavaMathRoundingMode *JavaMathRoundingMode_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaMathRoundingMode *JavaMathRoundingMode_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaMathRoundingMode)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaMathRoundingMode")
