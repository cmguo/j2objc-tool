//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/URLDecoder.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNetURLDecoder")
#ifdef RESTRICT_JavaNetURLDecoder
#define INCLUDE_ALL_JavaNetURLDecoder 0
#else
#define INCLUDE_ALL_JavaNetURLDecoder 1
#endif
#undef RESTRICT_JavaNetURLDecoder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetURLDecoder_) && (INCLUDE_ALL_JavaNetURLDecoder || defined(INCLUDE_JavaNetURLDecoder))
#define JavaNetURLDecoder_

/*!
 @brief Utility class for HTML form decoding.This class contains static methods
  for decoding a String from the <CODE>application/x-www-form-urlencoded</CODE>
  MIME format.
 <p>
  The conversion process is the reverse of that used by the URLEncoder class. It is assumed
  that all characters in the encoded string are one of the following: 
 &quot;<code>a</code>&quot; through &quot;<code>z</code>&quot;,
  &quot;<code>A</code>&quot; through &quot;<code>Z</code>&quot;,
  &quot;<code>0</code>&quot; through &quot;<code>9</code>&quot;, and 
 &quot;<code>-</code>&quot;, &quot;<code>_</code>&quot;,
  &quot;<code>.</code>&quot;, and &quot;<code>*</code>&quot;. The
  character &quot;<code>%</code>&quot; is allowed but is interpreted
  as the start of a special escaped sequence. 
 <p>
  The following rules are applied in the conversion: 
 <ul>
  <li>The alphanumeric characters &quot;<code>a</code>&quot; through
      &quot;<code>z</code>&quot;, &quot;<code>A</code>&quot; through
      &quot;<code>Z</code>&quot; and &quot;<code>0</code>&quot;
      through &quot;<code>9</code>&quot; remain the same. 
 <li>The special characters &quot;<code>.</code>&quot;,
      &quot;<code>-</code>&quot;, &quot;<code>*</code>&quot;, and
      &quot;<code>_</code>&quot; remain the same. 
 <li>The plus sign &quot;<code>+</code>&quot; is converted into a
      space character &quot; &nbsp; &quot; . 
 <li>A sequence of the form "<i><code>%xy</code></i>" will be
      treated as representing a byte where <i>xy</i> is the two-digit
      hexadecimal representation of the 8 bits. Then, all substrings
      that contain one or more of these byte sequences consecutively
      will be replaced by the character(s) whose encoding would result
      in those consecutive bytes.
      The encoding scheme used to decode these characters may be specified,
      or if unspecified, the default encoding of the platform will be used. 
 </ul>
  <p>
  There are two possible ways in which this decoder could deal with
  illegal strings.  It could either leave illegal characters alone or
  it could throw an <code>java.lang.IllegalArgumentException</code>.
  Which approach the decoder takes is left to the
  implementation.
 @author Mark Chamness
 @author Michael McCloskey
 @since 1.2
 */
@interface JavaNetURLDecoder : NSObject
@property (copy, class) NSString *dfltEncName NS_SWIFT_NAME(dfltEncName);

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Decodes a <code>x-www-form-urlencoded</code> string.
 The platform's default encoding is used to determine what characters
  are represented by any consecutive sequences of the form
  "<i><code>%xy</code></i>".
 @param s the <code>String</code>  to decode
 @return the newly decoded <code>String</code>
 */
+ (NSString *)decodeWithNSString:(NSString *)s __attribute__((deprecated));

/*!
 @brief Decodes a <code>application/x-www-form-urlencoded</code> string using a specific
  encoding scheme.
 The supplied encoding is used to determine
  what characters are represented by any consecutive sequences of the
  form "<i><code>%xy</code></i>".
  <p>
  <em><strong>Note:</strong> The <a href="http://www.w3.org/TR/html40/appendix/notes.html#non-ascii-chars">
  World Wide Web Consortium Recommendation</a> states that
  UTF-8 should be used. Not doing so may introduce
  incompatibilities.</em>
 @param s the <code>String</code>  to decode
 @param enc The name of a supported     
  <a href="../lang/package-summary.html#charenc"> character     encoding
  </a> .
 @return the newly decoded <code>String</code>
 @throw UnsupportedEncodingException
 If character encoding needs to be consulted, but
              named character encoding is not supported
 - seealso: URLEncoder#encode(java.lang.String, java.lang.String)
 @since 1.4
 */
+ (NSString *)decodeWithNSString:(NSString *)s
                    withNSString:(NSString *)enc;

@end

J2OBJC_STATIC_INIT(JavaNetURLDecoder)

inline NSString *JavaNetURLDecoder_get_dfltEncName(void);
inline NSString *JavaNetURLDecoder_set_dfltEncName(NSString *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaNetURLDecoder_dfltEncName;
J2OBJC_STATIC_FIELD_OBJ(JavaNetURLDecoder, dfltEncName, NSString *)

FOUNDATION_EXPORT void JavaNetURLDecoder_init(JavaNetURLDecoder *self);

FOUNDATION_EXPORT JavaNetURLDecoder *new_JavaNetURLDecoder_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURLDecoder *create_JavaNetURLDecoder_init(void);

FOUNDATION_EXPORT NSString *JavaNetURLDecoder_decodeWithNSString_(NSString *s);

FOUNDATION_EXPORT NSString *JavaNetURLDecoder_decodeWithNSString_withNSString_(NSString *s, NSString *enc);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURLDecoder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetURLDecoder")
