//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/Double.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaLangDouble")
#ifdef RESTRICT_JavaLangDouble
#define INCLUDE_ALL_JavaLangDouble 0
#else
#define INCLUDE_ALL_JavaLangDouble 1
#endif
#undef RESTRICT_JavaLangDouble

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangDouble_) && (INCLUDE_ALL_JavaLangDouble || defined(INCLUDE_JavaLangDouble))
#define JavaLangDouble_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include <JRE/java/lang/Comparable.h>

@class IOSClass;

/*!
 @brief The <code>Double</code> class wraps a value of the primitive type 
 <code>double</code> in an object.An object of type 
 <code>Double</code> contains a single field whose type is 
 <code>double</code>.
 <p>In addition, this class provides several methods for converting a 
 <code>double</code> to a <code>String</code> and a 
 <code>String</code> to a <code>double</code>, as well as other
  constants and methods useful when dealing with a 
 <code>double</code>.
 @author Lee Boynton
 @author Arthur van Hoff
 @author Joseph D. Darcy
 @since JDK1.0
 */
@interface JavaLangDouble : NSNumber < JavaLangComparable >
@property (readonly, class) jdouble POSITIVE_INFINITY NS_SWIFT_NAME(POSITIVE_INFINITY);
@property (readonly, class) jdouble NEGATIVE_INFINITY NS_SWIFT_NAME(NEGATIVE_INFINITY);
@property (readonly, class) jdouble NaN NS_SWIFT_NAME(NaN);
@property (readonly, class) jdouble MAX_VALUE NS_SWIFT_NAME(MAX_VALUE);
@property (readonly, class) jdouble MIN_NORMAL NS_SWIFT_NAME(MIN_NORMAL);
@property (readonly, class) jdouble MIN_VALUE NS_SWIFT_NAME(MIN_VALUE);
@property (readonly, class) jint MAX_EXPONENT NS_SWIFT_NAME(MAX_EXPONENT);
@property (readonly, class) jint MIN_EXPONENT NS_SWIFT_NAME(MIN_EXPONENT);
@property (readonly, class) jint SIZE NS_SWIFT_NAME(SIZE);
@property (readonly, class) jint BYTES NS_SWIFT_NAME(BYTES);
@property (readonly, class, strong) IOSClass *TYPE NS_SWIFT_NAME(TYPE);

#pragma mark Public

/*!
 @brief Constructs a newly allocated <code>Double</code> object that
  represents the primitive <code>double</code> argument.
 @param value the value to be represented by the <code>Double</code> .
 */
- (instancetype __nonnull)initWithDouble:(jdouble)value;

/*!
 @brief Constructs a newly allocated <code>Double</code> object that
  represents the floating-point value of type <code>double</code>
  represented by the string.The string is converted to a 
 <code>double</code> value as if by the <code>valueOf</code> method.
 @param s a string to be converted to a <code>Double</code> .
 @throw NumberFormatExceptionif the string does not contain a
             parsable number.
 - seealso: java.lang.Double#valueOf(java.lang.String)
 */
- (instancetype __nonnull)initWithNSString:(NSString *)s;

/*!
 @brief Returns the value of this <code>Double</code> as a <code>byte</code>
  after a narrowing primitive conversion.
 @return the <code>double</code> value represented by this object
           converted to type <code>byte</code>
 @since JDK1.1
 */
- (jbyte)charValue;

/*!
 @brief Compares the two specified <code>double</code> values.The sign
  of the integer value returned is the same as that of the
  integer that would be returned by the call: 
 @code

     new Double(d1).compareTo(new Double(d2)) 
  
@endcode
 @param d1 the first <code>double</code>  to compare
 @param d2 the second <code>double</code>  to compare
 @return the value <code>0</code> if <code>d1</code> is
           numerically equal to <code>d2</code>; a value less than
           <code>0</code> if <code>d1</code> is numerically less than
           <code>d2</code>; and a value greater than <code>0</code>
           if <code>d1</code> is numerically greater than
           <code>d2</code>.
 @since 1.4
 */
+ (jint)compareWithDouble:(jdouble)d1
               withDouble:(jdouble)d2;

/*!
 @brief Compares two <code>Double</code> objects numerically.There
  are two ways in which comparisons performed by this method
  differ from those performed by the Java language numerical
  comparison operators (<code><, <=, ==, >=, ></code>)
  when applied to primitive <code>double</code> values: 
 <ul><li>
           <code>Double.NaN</code> is considered by this method
           to be equal to itself and greater than all other          
 <code>double</code> values (including
           <code>Double.POSITIVE_INFINITY</code>).
 <li>
           <code>0.0d</code> is considered by this method to be greater
           than <code>-0.0d</code>.
  </ul>
  This ensures that the <i>natural ordering</i> of 
 <code>Double</code> objects imposed by this method is <i>consistent
  with equals</i>.
 @param anotherDouble the <code>Double</code>  to be compared.
 @return the value <code>0</code> if <code>anotherDouble</code> is
           numerically equal to this <code>Double</code>; a value
           less than <code>0</code> if this <code>Double</code>
           is numerically less than <code>anotherDouble</code>;
           and a value greater than <code>0</code> if this
           <code>Double</code> is numerically greater than
           <code>anotherDouble</code>.
 @since 1.2
 */
- (jint)compareToWithId:(JavaLangDouble *)anotherDouble;

/*!
 @brief Returns a representation of the specified floating-point value
  according to the IEEE 754 floating-point "double
  format" bit layout.
 <p>Bit 63 (the bit that is selected by the mask 
 <code>0x8000000000000000L</code>) represents the sign of the
  floating-point number. Bits
  62-52 (the bits that are selected by the mask 
 <code>0x7ff0000000000000L</code>) represent the exponent. Bits 51-0
  (the bits that are selected by the mask 
 <code>0x000fffffffffffffL</code>) represent the significand
  (sometimes called the mantissa) of the floating-point number. 
 <p>If the argument is positive infinity, the result is 
 <code>0x7ff0000000000000L</code>.
  
 <p>If the argument is negative infinity, the result is 
 <code>0xfff0000000000000L</code>.
  
 <p>If the argument is NaN, the result is 
 <code>0x7ff8000000000000L</code>.
  
 <p>In all cases, the result is a <code>long</code> integer that, when
  given to the <code>longBitsToDouble(long)</code> method, will produce a
  floating-point value the same as the argument to 
 <code>doubleToLongBits</code> (except all NaN values are
  collapsed to a single "canonical" NaN value).
 @param value a <code>double</code>  precision floating-point number.
 @return the bits that represent the floating-point number.
 */
+ (jlong)doubleToLongBitsWithDouble:(jdouble)value;

/*!
 @brief Returns a representation of the specified floating-point value
  according to the IEEE 754 floating-point "double
  format" bit layout, preserving Not-a-Number (NaN) values.
 <p>Bit 63 (the bit that is selected by the mask 
 <code>0x8000000000000000L</code>) represents the sign of the
  floating-point number. Bits
  62-52 (the bits that are selected by the mask 
 <code>0x7ff0000000000000L</code>) represent the exponent. Bits 51-0
  (the bits that are selected by the mask 
 <code>0x000fffffffffffffL</code>) represent the significand
  (sometimes called the mantissa) of the floating-point number. 
 <p>If the argument is positive infinity, the result is 
 <code>0x7ff0000000000000L</code>.
  
 <p>If the argument is negative infinity, the result is 
 <code>0xfff0000000000000L</code>.
  
 <p>If the argument is NaN, the result is the <code>long</code>
  integer representing the actual NaN value.  Unlike the 
 <code>doubleToLongBits</code> method, 
 <code>doubleToRawLongBits</code> does not collapse all the bit
  patterns encoding a NaN to a single "canonical" NaN
  value. 
 <p>In all cases, the result is a <code>long</code> integer that,
  when given to the <code>longBitsToDouble(long)</code> method, will
  produce a floating-point value the same as the argument to 
 <code>doubleToRawLongBits</code>.
 @param value a <code>double</code>  precision floating-point number.
 @return the bits that represent the floating-point number.
 @since 1.3
 */
+ (jlong)doubleToRawLongBitsWithDouble:(jdouble)value;

/*!
 @brief Returns the <code>double</code> value of this <code>Double</code> object.
 @return the <code>double</code> value represented by this object
 */
- (jdouble)doubleValue;

/*!
 @brief Compares this object against the specified object.The result
  is <code>true</code> if and only if the argument is not 
 <code>null</code> and is a <code>Double</code> object that
  represents a <code>double</code> that has the same value as the 
 <code>double</code> represented by this object.
 For this
  purpose, two <code>double</code> values are considered to be
  the same if and only if the method <code>doubleToLongBits(double)</code>
  returns the identical 
 <code>long</code> value when applied to each. 
 <p>Note that in most cases, for two instances of class 
 <code>Double</code>, <code>d1</code> and <code>d2</code>, the
  value of <code>d1.equals(d2)</code> is <code>true</code> if and
  only if 
 <blockquote>
   <code>d1.doubleValue() == d2.doubleValue()</code>
  </blockquote>
  
 <p>also has the value <code>true</code>. However, there are two
  exceptions: 
 <ul>
  <li>If <code>d1</code> and <code>d2</code> both represent
      <code>Double.NaN</code>, then the <code>equals</code> method
      returns <code>true</code>, even though
      <code>Double.NaN==Double.NaN</code> has the value
      <code>false</code>.
  <li>If <code>d1</code> represents <code>+0.0</code> while
      <code>d2</code> represents <code>-0.0</code>, or vice versa,
      the <code>equal</code> test has the value <code>false</code>,
      even though <code>+0.0==-0.0</code> has the value <code>true</code>.
  </ul>
  This definition allows hash tables to operate properly.
 @param obj the object to compare with.
 @return <code>true</code> if the objects are the same;
           <code>false</code> otherwise.
 - seealso: java.lang.Double#doubleToLongBits(double)
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns the value of this <code>Double</code> as a <code>float</code>
  after a narrowing primitive conversion.
 @return the <code>double</code> value represented by this object
           converted to type <code>float</code>
 @since JDK1.0
 */
- (jfloat)floatValue;

/*!
 @brief Returns a hash code for this <code>Double</code> object.The
  result is the exclusive OR of the two halves of the 
 <code>long</code> integer bit representation, exactly as
  produced by the method <code>doubleToLongBits(double)</code>, of
  the primitive <code>double</code> value represented by this 
 <code>Double</code> object.
 That is, the hash code is the value
  of the expression: 
 <blockquote>
   <code>(int)(v^(v>>>32))</code>
  </blockquote>
  where <code>v</code> is defined by: 
 <blockquote>
   <code>long v = Double.doubleToLongBits(this.doubleValue());</code>
  </blockquote>
 @return a <code>hash code</code> value for this object.
 */
- (NSUInteger)hash;

/*!
 @brief Returns a hash code for a <code>double</code> value; compatible with 
 <code>Double.hashCode()</code>.
 @param value the value to hash
 @return a hash code value for a <code>double</code> value.
 @since 1.8
 */
+ (jint)hashCodeWithDouble:(jdouble)value;

/*!
 @brief Returns the value of this <code>Double</code> as an <code>int</code>
  after a narrowing primitive conversion.
 @return the <code>double</code> value represented by this object
           converted to type <code>int</code>
 */
- (jint)intValue;

/*!
 @brief Returns <code>true</code> if the argument is a finite floating-point
  value; returns <code>false</code> otherwise (for NaN and infinity
  arguments).
 @param d the <code>double</code>  value to be tested
 @return <code>true</code> if the argument is a finite
  floating-point value, <code>false</code> otherwise.
 @since 1.8
 */
+ (jboolean)isFiniteWithDouble:(jdouble)d;

/*!
 @brief Returns <code>true</code> if this <code>Double</code> value is
  infinitely large in magnitude, <code>false</code> otherwise.
 @return <code>true</code> if the value represented by this object is
           positive infinity or negative infinity;          
 <code>false</code> otherwise.
 */
- (jboolean)isInfinite;

/*!
 @brief Returns <code>true</code> if the specified number is infinitely
  large in magnitude, <code>false</code> otherwise.
 @param v the value to be tested.
 @return <code>true</code> if the value of the argument is positive
           infinity or negative infinity; <code>false</code> otherwise.
 */
+ (jboolean)isInfiniteWithDouble:(jdouble)v;

/*!
 @brief Returns <code>true</code> if this <code>Double</code> value is
  a Not-a-Number (NaN), <code>false</code> otherwise.
 @return <code>true</code> if the value represented by this object is
           NaN; <code>false</code> otherwise.
 */
- (jboolean)isNaN;

/*!
 @brief Returns <code>true</code> if the specified number is a
  Not-a-Number (NaN) value, <code>false</code> otherwise.
 @param v the value to be tested.
 @return <code>true</code> if the value of the argument is NaN;
           <code>false</code> otherwise.
 */
+ (jboolean)isNaNWithDouble:(jdouble)v;

/*!
 @brief Returns the <code>double</code> value corresponding to a given
  bit representation.
 The argument is considered to be a representation of a
  floating-point value according to the IEEE 754 floating-point
  "double format" bit layout. 
 <p>If the argument is <code>0x7ff0000000000000L</code>, the result
  is positive infinity. 
 <p>If the argument is <code>0xfff0000000000000L</code>, the result
  is negative infinity. 
 <p>If the argument is any value in the range 
 <code>0x7ff0000000000001L</code> through 
 <code>0x7fffffffffffffffL</code> or in the range 
 <code>0xfff0000000000001L</code> through 
 <code>0xffffffffffffffffL</code>, the result is a NaN.  No IEEE
  754 floating-point operation provided by Java can distinguish
  between two NaN values of the same type with different bit
  patterns.  Distinct values of NaN are only distinguishable by
  use of the <code>Double.doubleToRawLongBits</code> method. 
 <p>In all other cases, let <i>s</i>, <i>e</i>, and <i>m</i> be three
  values that can be computed from the argument: 
 <blockquote>@code
 int s = ((bits >> 63) == 0) ? 1 : -1;
  int e = (int)((bits >> 52) & 0x7ffL);
  long m = (e == 0) ?
                  (bits & 0xfffffffffffffL) << 1 :
                  (bits & 0xfffffffffffffL) | 0x10000000000000L; 
 
@endcode</blockquote>
  Then the floating-point result equals the value of the mathematical
  expression <i>s</i>&middot;<i>m</i>&middot;2<sup><i>e</i>-1075</sup>.
  
 <p>Note that this method may not be able to return a 
 <code>double</code> NaN with exactly same bit pattern as the 
 <code>long</code> argument.  IEEE 754 distinguishes between two
  kinds of NaNs, quiet NaNs and <i>signaling NaNs</i>.  The
  differences between the two kinds of NaN are generally not
  visible in Java.  Arithmetic operations on signaling NaNs turn
  them into quiet NaNs with a different, but often similar, bit
  pattern.  However, on some processors merely copying a
  signaling NaN also performs that conversion.  In particular,
  copying a signaling NaN to return it to the calling method
  may perform this conversion.  So <code>longBitsToDouble</code>
  may not be able to return a <code>double</code> with a
  signaling NaN bit pattern.  Consequently, for some 
 <code>long</code> values, 
 <code>doubleToRawLongBits(longBitsToDouble(start))</code> may 
 <i>not</i> equal <code>start</code>.  Moreover, which
  particular bit patterns represent signaling NaNs is platform
  dependent; although all NaN bit patterns, quiet or signaling,
  must be in the NaN range identified above.
 @param bits any <code>long</code>  integer.
 @return the <code>double</code> floating-point value with the same
           bit pattern.
 */
+ (jdouble)longBitsToDoubleWithLong:(jlong)bits;

/*!
 @brief Returns the value of this <code>Double</code> as a <code>long</code>
  after a narrowing primitive conversion.
 @return the <code>double</code> value represented by this object
           converted to type <code>long</code>
 */
- (jlong)longLongValue;

/*!
 @brief Returns the greater of two <code>double</code> values
  as if by calling <code>Math.max</code>.
 @param a the first operand
 @param b the second operand
 @return the greater of <code>a</code> and <code>b</code>
 - seealso: java.util.function.BinaryOperator
 @since 1.8
 */
+ (jdouble)maxWithDouble:(jdouble)a
              withDouble:(jdouble)b;

/*!
 @brief Returns the smaller of two <code>double</code> values
  as if by calling <code>Math.min</code>.
 @param a the first operand
 @param b the second operand
 @return the smaller of <code>a</code> and <code>b</code>.
 - seealso: java.util.function.BinaryOperator
 @since 1.8
 */
+ (jdouble)minWithDouble:(jdouble)a
              withDouble:(jdouble)b;

/*!
 @brief Returns a new <code>double</code> initialized to the value
  represented by the specified <code>String</code>, as performed
  by the <code>valueOf</code> method of class 
 <code>Double</code>.
 @param s the string to be parsed.
 @return the <code>double</code> value represented by the string
          argument.
 @throw NullPointerExceptionif the string is null
 @throw NumberFormatExceptionif the string does not contain
          a parsable <code>double</code>.
 - seealso: java.lang.Double#valueOf(String)
 @since 1.2
 */
+ (jdouble)parseDoubleWithNSString:(NSString *)s;

/*!
 @brief Returns the value of this <code>Double</code> as a <code>short</code>
  after a narrowing primitive conversion.
 @return the <code>double</code> value represented by this object
           converted to type <code>short</code>
 @since JDK1.1
 */
- (jshort)shortValue;

/*!
 @brief Adds two <code>double</code> values together as per the + operator.
 @param a the first operand
 @param b the second operand
 @return the sum of <code>a</code> and <code>b</code>
 - seealso: java.util.function.BinaryOperator
 @since 1.8
 */
+ (jdouble)sumWithDouble:(jdouble)a
              withDouble:(jdouble)b;

/*!
 @brief Returns a hexadecimal string representation of the 
 <code>double</code> argument.All characters mentioned below
  are ASCII characters.
 <ul>
  <li>If the argument is NaN, the result is the string
      "<code>NaN</code>".
  <li>Otherwise, the result is a string that represents the sign
  and magnitude of the argument. If the sign is negative, the
  first character of the result is '<code>-</code>'
  (<code>'\u002D'</code>); if the sign is positive, no sign
  character appears in the result. As for the magnitude <i>m</i>:
  
 <ul>
  <li>If <i>m</i> is infinity, it is represented by the string 
 <code>"Infinity"</code>; thus, positive infinity produces the
  result <code>"Infinity"</code> and negative infinity produces
  the result <code>"-Infinity"</code>.
  
 <li>If <i>m</i> is zero, it is represented by the string 
 <code>"0x0.0p0"</code>; thus, negative zero produces the result 
 <code>"-0x0.0p0"</code> and positive zero produces the result 
 <code>"0x0.0p0"</code>.
  
 <li>If <i>m</i> is a <code>double</code> value with a
  normalized representation, substrings are used to represent the
  significand and exponent fields.  The significand is
  represented by the characters <code>"0x1."</code>
  followed by a lowercase hexadecimal representation of the rest
  of the significand as a fraction.  Trailing zeros in the
  hexadecimal representation are removed unless all the digits
  are zero, in which case a single zero is used. Next, the
  exponent is represented by <code>"p"</code> followed
  by a decimal string of the unbiased exponent as if produced by
  a call to <code>Integer.toString</code> on the
  exponent value. 
 <li>If <i>m</i> is a <code>double</code> value with a subnormal
  representation, the significand is represented by the
  characters <code>"0x0."</code> followed by a
  hexadecimal representation of the rest of the significand as a
  fraction.  Trailing zeros in the hexadecimal representation are
  removed. Next, the exponent is represented by 
 <code>"p-1022"</code>.  Note that there must be at
  least one nonzero digit in a subnormal significand. 
 </ul>
  
 </ul>
  
 <table border>
  <caption>Examples</caption>
  <tr><th>Floating-point Value</th><th>Hexadecimal String</th>
  <tr><td><code>1.0</code></td> <td><code>0x1.0p0</code></td>
  <tr><td><code>-1.0</code></td>        <td><code>-0x1.0p0</code></td>
  <tr><td><code>2.0</code></td> <td><code>0x1.0p1</code></td>
  <tr><td><code>3.0</code></td> <td><code>0x1.8p1</code></td>
  <tr><td><code>0.5</code></td> <td><code>0x1.0p-1</code></td>
  <tr><td><code>0.25</code></td>        <td><code>0x1.0p-2</code></td>
  <tr><td><code>Double.MAX_VALUE</code></td>
      <td><code>0x1.fffffffffffffp1023</code></td>
  <tr><td><code>Minimum Normal Value</code></td>
      <td><code>0x1.0p-1022</code></td>
  <tr><td><code>Maximum Subnormal Value</code></td>
      <td><code>0x0.fffffffffffffp-1022</code></td>
  <tr><td><code>Double.MIN_VALUE</code></td>
      <td><code>0x0.0000000000001p-1022</code></td>
  </table>
 @param d the <code>double</code>  to be converted.
 @return a hex string representation of the argument.
 @since 1.5
 @author Joseph D. Darcy
 */
+ (NSString * __nonnull)toHexStringWithDouble:(jdouble)d;

/*!
 @brief Returns a string representation of this <code>Double</code> object.
 The primitive <code>double</code> value represented by this
  object is converted to a string exactly as if by the method 
 <code>toString</code> of one argument.
 @return a <code>String</code> representation of this object.
 - seealso: java.lang.Double#toString(double)
 */
- (NSString * __nonnull)description;

/*!
 @brief Returns a string representation of the <code>double</code>
  argument.All characters mentioned below are ASCII characters.
 <ul>
  <li>If the argument is NaN, the result is the string
      "<code>NaN</code>".
  <li>Otherwise, the result is a string that represents the sign and
  magnitude (absolute value) of the argument. If the sign is negative,
  the first character of the result is '<code>-</code>'
  (<code>'\u002D'</code>); if the sign is positive, no sign character
  appears in the result. As for the magnitude <i>m</i>:
  <ul>
  <li>If <i>m</i> is infinity, it is represented by the characters 
 <code>"Infinity"</code>; thus, positive infinity produces the result 
 <code>"Infinity"</code> and negative infinity produces the result 
 <code>"-Infinity"</code>.
  
 <li>If <i>m</i> is zero, it is represented by the characters 
 <code>"0.0"</code>; thus, negative zero produces the result 
 <code>"-0.0"</code> and positive zero produces the result 
 <code>"0.0"</code>.
  
 <li>If <i>m</i> is greater than or equal to 10<sup>-3</sup> but less
  than 10<sup>7</sup>, then it is represented as the integer part of 
 <i>m</i>, in decimal form with no leading zeroes, followed by
  '<code>.</code>' (<code>'\u002E'</code>), followed by one or
  more decimal digits representing the fractional part of <i>m</i>.
  
 <li>If <i>m</i> is less than 10<sup>-3</sup> or greater than or
  equal to 10<sup>7</sup>, then it is represented in so-called
  "computerized scientific notation." Let <i>n</i> be the unique
  integer such that 10<sup><i>n</i></sup> &le; <i>m</i> &lt;
  10<sup><i>n</i>+1</sup>; then let <i>a</i> be the
  mathematically exact quotient of <i>m</i> and
  10<sup><i>n</i></sup> so that 1 &le; <i>a</i> &lt; 10. The
  magnitude is then represented as the integer part of <i>a</i>,
  as a single decimal digit, followed by '<code>.</code>'
  (<code>'\u002E'</code>), followed by decimal digits
  representing the fractional part of <i>a</i>, followed by the
  letter '<code>E</code>' (<code>'\u0045'</code>), followed
  by a representation of <i>n</i> as a decimal integer, as
  produced by the method <code>Integer.toString(int)</code>.
  </ul>
  </ul>
  How many digits must be printed for the fractional part of 
 <i>m</i> or <i>a</i>? There must be at least one digit to represent
  the fractional part, and beyond that as many, but only as many, more
  digits as are needed to uniquely distinguish the argument value from
  adjacent values of type <code>double</code>. That is, suppose that 
 <i>x</i> is the exact mathematical value represented by the decimal
  representation produced by this method for a finite nonzero argument 
 <i>d</i>. Then <i>d</i> must be the <code>double</code> value nearest
  to <i>x</i>; or if two <code>double</code> values are equally close
  to <i>x</i>, then <i>d</i> must be one of them and the least
  significant bit of the significand of <i>d</i> must be <code>0</code>.
  
 <p>To create localized string representations of a floating-point
  value, use subclasses of <code>java.text.NumberFormat</code>.
 @param d the <code>double</code>  to be converted.
 @return a string representation of the argument.
 */
+ (NSString * __nonnull)toStringWithDouble:(jdouble)d;

/*!
 @brief Returns a <code>Double</code> instance representing the specified 
 <code>double</code> value.
 If a new <code>Double</code> instance is not required, this method
  should generally be used in preference to the constructor 
 <code>Double(double)</code>, as this method is likely to yield
  significantly better space and time performance by caching
  frequently requested values.
 @param d a double value.
 @return a <code>Double</code> instance representing <code>d</code>.
 @since 1.5
 */
+ (JavaLangDouble * __nonnull)valueOfWithDouble:(jdouble)d;

/*!
 @brief Returns a <code>Double</code> object holding the 
 <code>double</code> value represented by the argument string 
 <code>s</code>.
 <p>If <code>s</code> is <code>null</code>, then a 
 <code>NullPointerException</code> is thrown. 
 <p>Leading and trailing whitespace characters in <code>s</code>
  are ignored.  Whitespace is removed as if by the <code>String.trim</code>
  method; that is, both ASCII space and control
  characters are removed. The rest of <code>s</code> should
  constitute a <i>FloatValue</i> as described by the lexical
  syntax rules: 
 <blockquote>
  <dl>
  <dt><i>FloatValue:</i>
  <dd><i>Sign<sub>opt</sub></i> <code>NaN</code>
  <dd><i>Sign<sub>opt</sub></i> <code>Infinity</code>
  <dd><i>Sign<sub>opt</sub> FloatingPointLiteral</i>
  <dd><i>Sign<sub>opt</sub> HexFloatingPointLiteral</i>
  <dd><i>SignedInteger</i>
  </dl>
  
 <dl>
  <dt><i>HexFloatingPointLiteral</i>:
  <dd> <i>HexSignificand BinaryExponent FloatTypeSuffix<sub>opt</sub></i>
  </dl>
  
 <dl>
  <dt><i>HexSignificand:</i>
  <dd><i>HexNumeral</i>
  <dd><i>HexNumeral</i> <code>.</code>
  <dd><code>0x</code> <i>HexDigits<sub>opt</sub>
      </i><code>.</code><i> HexDigits</i>
  <dd><code>0X</code><i> HexDigits<sub>opt</sub>
      </i><code>.</code> <i>HexDigits</i>
  </dl>
  
 <dl>
  <dt><i>BinaryExponent:</i>
  <dd><i>BinaryExponentIndicator SignedInteger</i>
  </dl>
  
 <dl>
  <dt><i>BinaryExponentIndicator:</i>
  <dd><code>p</code>
  <dd><code>P</code>
  </dl>
  
 </blockquote>
  where <i>Sign</i>, <i>FloatingPointLiteral</i>,
  <i>HexNumeral</i>, <i>HexDigits</i>, <i>SignedInteger</i> and 
 <i>FloatTypeSuffix</i> are as defined in the lexical structure
  sections of 
 <cite>The Java&trade; Language Specification</cite>,
  except that underscores are not accepted between digits.
  If <code>s</code> does not have the form of
  a <i>FloatValue</i>, then a <code>NumberFormatException</code>
  is thrown. Otherwise, <code>s</code> is regarded as
  representing an exact decimal value in the usual
  "computerized scientific notation" or as an exact
  hexadecimal value; this exact numerical value is then
  conceptually converted to an "infinitely precise"
  binary value that is then rounded to type <code>double</code>
  by the usual round-to-nearest rule of IEEE 754 floating-point
  arithmetic, which includes preserving the sign of a zero
  value.
  Note that the round-to-nearest rule also implies overflow and
  underflow behaviour; if the exact value of <code>s</code> is large
  enough in magnitude (greater than or equal to (<code>MAX_VALUE</code>
  + <code>ulp(MAX_VALUE)</code>/2),
  rounding to <code>double</code> will result in an infinity and if the
  exact value of <code>s</code> is small enough in magnitude (less
  than or equal to <code>MIN_VALUE</code>/2), rounding to float will
  result in a zero.
  Finally, after rounding a <code>Double</code> object representing
  this <code>double</code> value is returned. 
 <p> To interpret localized string representations of a
  floating-point value, use subclasses of <code>java.text.NumberFormat</code>
 .
  
 <p>Note that trailing format specifiers, specifiers that
  determine the type of a floating-point literal
  (<code>1.0f</code> is a <code>float</code> value; 
 <code>1.0d</code> is a <code>double</code> value), do 
 <em>not</em> influence the results of this method.  In other
  words, the numerical value of the input string is converted
  directly to the target floating-point type.  The two-step
  sequence of conversions, string to <code>float</code> followed
  by <code>float</code> to <code>double</code>, is <em>not</em>
  equivalent to converting a string directly to 
 <code>double</code>. For example, the <code>float</code>
  literal <code>0.1f</code> is equal to the <code>double</code>
  value <code>0.10000000149011612</code>; the <code>float</code>
  literal <code>0.1f</code> represents a different numerical
  value than the <code>double</code> literal 
 <code>0.1</code>. (The numerical value 0.1 cannot be exactly
  represented in a binary floating-point number.) 
 <p>To avoid calling this method on an invalid string and having
  a <code>NumberFormatException</code> be thrown, the regular
  expression below can be used to screen the input string: 
 @code
 final String Digits     = "(\\p{Digit}+)";
   final String HexDigits  = "(\\p{XDigit}+)";
   // an exponent is 'e' or 'E' followed by an optionally
   // signed decimal integer.
   final String Exp        = "[eE][+-]?"+Digits;
   final String fpRegex    =
       ("[\\x00-\\x20]*"+  // Optional leading "whitespace"
        "[+-]?(" + // Optional sign character
        "NaN|" +           // "NaN" string
        "Infinity|" +      // "Infinity" string
        // A decimal floating-point string representing a finite positive
        // number without a leading sign has at most five basic pieces:
        // Digits . Digits ExponentPart FloatTypeSuffix       //
        // Since this method allows integer-only strings as input
        // in addition to strings of floating-point literals, the
        // two sub-patterns below are simplifications of the grammar
        // productions from section 3.10.2 of
        // The Java Language Specification.
        // Digits ._opt Digits_opt ExponentPart_opt FloatTypeSuffix_opt
        "((("+Digits+"(\\.)?("+Digits+"?)("+Exp+")?)|"+
        // . Digits ExponentPart_opt FloatTypeSuffix_opt
        "(\\.("+Digits+")("+Exp+")?)|"+
        // Hexadecimal strings
        "((" +
         // 0[xX] HexDigits ._opt BinaryExponent FloatTypeSuffix_opt
         "(0[xX]" + HexDigits + "(\\.)?)|" +
         // 0[xX] HexDigits_opt . HexDigits BinaryExponent FloatTypeSuffix_opt
         "(0[xX]" + HexDigits + "?(\\.)" + HexDigits + ")" +
         ")[pP][+-]?" + Digits + "))" +
        "[fFdD]?))" +
        "[\\x00-\\x20]*");// Optional trailing "whitespace"
   if (Pattern.matches(fpRegex, myString))
       Double.valueOf(myString); // Will not throw NumberFormatException
   else {
       // Perform suitable alternative action
   } 
 
@endcode
 @param s the string to be parsed.
 @return a <code>Double</code> object holding the value
              represented by the <code>String</code> argument.
 @throw NumberFormatExceptionif the string does not contain a
              parsable number.
 */
+ (JavaLangDouble * __nonnull)valueOfWithNSString:(NSString *)s;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaLangDouble)

/*!
 @brief A constant holding the positive infinity of type 
 <code>double</code>.It is equal to the value returned by 
 <code>Double.longBitsToDouble(0x7ff0000000000000L)</code>.
 */
inline jdouble JavaLangDouble_get_POSITIVE_INFINITY(void);
#define JavaLangDouble_POSITIVE_INFINITY INFINITY
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangDouble, POSITIVE_INFINITY, jdouble)

/*!
 @brief A constant holding the negative infinity of type 
 <code>double</code>.It is equal to the value returned by 
 <code>Double.longBitsToDouble(0xfff0000000000000L)</code>.
 */
inline jdouble JavaLangDouble_get_NEGATIVE_INFINITY(void);
#define JavaLangDouble_NEGATIVE_INFINITY -INFINITY
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangDouble, NEGATIVE_INFINITY, jdouble)

/*!
 @brief A constant holding a Not-a-Number (NaN) value of type 
 <code>double</code>.It is equivalent to the value returned by 
 <code>Double.longBitsToDouble(0x7ff8000000000000L)</code>.
 */
inline jdouble JavaLangDouble_get_NaN(void);
#define JavaLangDouble_NaN NAN
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangDouble, NaN, jdouble)

/*!
 @brief A constant holding the largest positive finite value of type 
 <code>double</code>,
  (2-2<sup>-52</sup>)&middot;2<sup>1023</sup>.It is equal to
  the hexadecimal floating-point literal 
 <code>0x1.fffffffffffffP+1023</code> and also equal to 
 <code>Double.longBitsToDouble(0x7fefffffffffffffL)</code>.
 */
inline jdouble JavaLangDouble_get_MAX_VALUE(void);
#define JavaLangDouble_MAX_VALUE __DBL_MAX__
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangDouble, MAX_VALUE, jdouble)

/*!
 @brief A constant holding the smallest positive normal value of type 
 <code>double</code>, 2<sup>-1022</sup>.It is equal to the
  hexadecimal floating-point literal <code>0x1.0p-1022</code> and also
  equal to <code>Double.longBitsToDouble(0x0010000000000000L)</code>.
 @since 1.6
 */
inline jdouble JavaLangDouble_get_MIN_NORMAL(void);
#define JavaLangDouble_MIN_NORMAL __DBL_MIN__
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangDouble, MIN_NORMAL, jdouble)

/*!
 @brief A constant holding the smallest positive nonzero value of type 
 <code>double</code>, 2<sup>-1074</sup>.It is equal to the
  hexadecimal floating-point literal 
 <code>0x0.0000000000001P-1022</code> and also equal to 
 <code>Double.longBitsToDouble(0x1L)</code>.
 */
inline jdouble JavaLangDouble_get_MIN_VALUE(void);
#define JavaLangDouble_MIN_VALUE 4.9E-324
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangDouble, MIN_VALUE, jdouble)

/*!
 @brief Maximum exponent a finite <code>double</code> variable may have.
 It is equal to the value returned by 
 <code>Math.getExponent(Double.MAX_VALUE)</code>.
 @since 1.6
 */
inline jint JavaLangDouble_get_MAX_EXPONENT(void);
#define JavaLangDouble_MAX_EXPONENT 1023
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangDouble, MAX_EXPONENT, jint)

/*!
 @brief Minimum exponent a normalized <code>double</code> variable may
  have.It is equal to the value returned by 
 <code>Math.getExponent(Double.MIN_NORMAL)</code>.
 @since 1.6
 */
inline jint JavaLangDouble_get_MIN_EXPONENT(void);
#define JavaLangDouble_MIN_EXPONENT -1022
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangDouble, MIN_EXPONENT, jint)

/*!
 @brief The number of bits used to represent a <code>double</code> value.
 @since 1.5
 */
inline jint JavaLangDouble_get_SIZE(void);
#define JavaLangDouble_SIZE 64
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangDouble, SIZE, jint)

/*!
 @brief The number of bytes used to represent a <code>double</code> value.
 @since 1.8
 */
inline jint JavaLangDouble_get_BYTES(void);
#define JavaLangDouble_BYTES 8
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangDouble, BYTES, jint)

/*!
 @brief The <code>Class</code> instance representing the primitive type 
 <code>double</code>.
 @since JDK1.1
 */
inline IOSClass *JavaLangDouble_get_TYPE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSClass *JavaLangDouble_TYPE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaLangDouble, TYPE, IOSClass *)

FOUNDATION_EXPORT NSString *JavaLangDouble_toStringWithDouble_(jdouble d);

FOUNDATION_EXPORT NSString *JavaLangDouble_toHexStringWithDouble_(jdouble d);

FOUNDATION_EXPORT JavaLangDouble *JavaLangDouble_valueOfWithNSString_(NSString *s);

FOUNDATION_EXPORT JavaLangDouble *JavaLangDouble_valueOfWithDouble_(jdouble d);

FOUNDATION_EXPORT jdouble JavaLangDouble_parseDoubleWithNSString_(NSString *s);

FOUNDATION_EXPORT jboolean JavaLangDouble_isNaNWithDouble_(jdouble v);

FOUNDATION_EXPORT jboolean JavaLangDouble_isInfiniteWithDouble_(jdouble v);

FOUNDATION_EXPORT jboolean JavaLangDouble_isFiniteWithDouble_(jdouble d);

FOUNDATION_EXPORT void JavaLangDouble_initWithDouble_(JavaLangDouble *self, jdouble value);

FOUNDATION_EXPORT JavaLangDouble *new_JavaLangDouble_initWithDouble_(jdouble value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangDouble *create_JavaLangDouble_initWithDouble_(jdouble value);

FOUNDATION_EXPORT void JavaLangDouble_initWithNSString_(JavaLangDouble *self, NSString *s);

FOUNDATION_EXPORT JavaLangDouble *new_JavaLangDouble_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangDouble *create_JavaLangDouble_initWithNSString_(NSString *s);

FOUNDATION_EXPORT jint JavaLangDouble_hashCodeWithDouble_(jdouble value);

FOUNDATION_EXPORT jlong JavaLangDouble_doubleToLongBitsWithDouble_(jdouble value);

FOUNDATION_EXPORT jlong JavaLangDouble_doubleToRawLongBitsWithDouble_(jdouble value);

FOUNDATION_EXPORT jdouble JavaLangDouble_longBitsToDoubleWithLong_(jlong bits);

FOUNDATION_EXPORT jint JavaLangDouble_compareWithDouble_withDouble_(jdouble d1, jdouble d2);

FOUNDATION_EXPORT jdouble JavaLangDouble_sumWithDouble_withDouble_(jdouble a, jdouble b);

FOUNDATION_EXPORT jdouble JavaLangDouble_maxWithDouble_withDouble_(jdouble a, jdouble b);

FOUNDATION_EXPORT jdouble JavaLangDouble_minWithDouble_withDouble_(jdouble a, jdouble b);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangDouble)

BOXED_INC_AND_DEC(Double, doubleValue, JavaLangDouble)
BOXED_COMPOUND_ASSIGN_ARITHMETIC(Double, doubleValue, jdouble, JavaLangDouble)
BOXED_COMPOUND_ASSIGN_FPMOD(Double, doubleValue, jdouble, JavaLangDouble)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangDouble")
