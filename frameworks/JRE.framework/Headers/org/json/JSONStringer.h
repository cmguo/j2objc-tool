//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/json/src/main/java/org/json/JSONStringer.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_OrgJsonJSONStringer")
#ifdef RESTRICT_OrgJsonJSONStringer
#define INCLUDE_ALL_OrgJsonJSONStringer 0
#else
#define INCLUDE_ALL_OrgJsonJSONStringer 1
#endif
#undef RESTRICT_OrgJsonJSONStringer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgJsonJSONStringer_) && (INCLUDE_ALL_OrgJsonJSONStringer || defined(INCLUDE_OrgJsonJSONStringer))
#define OrgJsonJSONStringer_

@class JavaLangStringBuilder;
@class OrgJsonJSONStringer_Scope;

/*!
 @brief Implements <code>JSONObject.toString</code> and <code>JSONArray.toString</code>.Most
  application developers should use those methods directly and disregard this
  API.
 For example:@code

  JSONObject object = ...
  String json = object.toString();
@endcode
  
 <p>Stringers only encode well-formed JSON strings. In particular: 
 <ul>
    <li>The stringer must have exactly one top-level array or object.
    <li>Lexical scopes must be balanced: every call to <code>array</code> must
        have a matching call to <code>endArray</code> and every call to <code>object</code>
  must have a matching call to <code>endObject</code>.
    <li>Arrays may not contain keys (property names).
    <li>Objects must alternate keys (property names) and values.
    <li>Values are inserted with either literal <code>value</code>
        calls, or by nesting arrays or objects. 
 </ul>
  Calls that would result in a malformed JSON string will fail with a 
 <code>JSONException</code>.
  
 <p>This class provides no facility for pretty-printing (ie. indenting)
  output. To encode indented output, use <code>JSONObject.toString(int)</code> or 
 <code>JSONArray.toString(int)</code>.
  
 <p>Some implementations of the API support at most 20 levels of nesting.
  Attempts to create more than 20 levels of nesting may fail with a <code>JSONException</code>
 .
  
 <p>Each stringer may be used to encode a single top level value. Instances of
  this class are not thread safe. Although this class is nonfinal, it was not
  designed for inheritance and should not be subclassed. In particular,
  self-use by overrideable methods is not specified. See <i>Effective Java</i>
  Item 17, "Design and Document or inheritance or else prohibit it" for further
  information.
 */
@interface OrgJsonJSONStringer : NSObject {
 @public
  /*!
   @brief The output data, containing at most one top-level array or object.
   */
  JavaLangStringBuilder *out_;
}

#pragma mark Public

- (instancetype __nonnull)init;

/*!
 @brief Begins encoding a new array.Each call to this method must be paired with
  a call to <code>endArray</code>.
 @return this stringer.
 */
- (OrgJsonJSONStringer *)array;

/*!
 @brief Ends encoding the current array.
 @return this stringer.
 */
- (OrgJsonJSONStringer *)endArray;

/*!
 @brief Ends encoding the current object.
 @return this stringer.
 */
- (OrgJsonJSONStringer *)endObject;

/*!
 @brief Encodes the key (property name) to this stringer.
 @param name the name of the forthcoming value. May not be null.
 @return this stringer.
 */
- (OrgJsonJSONStringer *)keyWithNSString:(NSString *)name;

/*!
 @brief Begins encoding a new object.Each call to this method must be paired
  with a call to <code>endObject</code>.
 @return this stringer.
 */
- (OrgJsonJSONStringer *)object;

/*!
 @brief Returns the encoded JSON string.
 <p>If invoked with unterminated arrays or unclosed objects, this method's
  return value is undefined. 
 <p><strong>Warning:</strong> although it contradicts the general contract
  of <code>Object.toString</code>, this method returns null if the stringer
  contains no data.
 */
- (NSString *)description;

/*!
 @brief Encodes <code>value</code> to this stringer.
 @return this stringer.
 */
- (OrgJsonJSONStringer *)valueWithBoolean:(jboolean)value;

/*!
 @brief Encodes <code>value</code> to this stringer.
 @param value a finite value. May not be <code>NaNs</code>  or
       <code>infinities</code> .
 @return this stringer.
 */
- (OrgJsonJSONStringer *)valueWithDouble:(jdouble)value;

/*!
 @brief Encodes <code>value</code> to this stringer.
 @return this stringer.
 */
- (OrgJsonJSONStringer *)valueWithLong:(jlong)value;

/*!
 @brief Encodes <code>value</code>.
 @param value a <code>JSONObject</code> , <code>JSONArray</code> , String, Boolean,
       Integer, Long, Double or null. May not be <code>NaNs</code>      or 
 <code>infinities</code> .
 @return this stringer.
 */
- (OrgJsonJSONStringer *)valueWithId:(id)value;

#pragma mark Package-Private

- (instancetype __nonnull)initWithInt:(jint)indentSpaces;

/*!
 @brief Closes the current scope by appending any necessary whitespace and the
  given bracket.
 */
- (OrgJsonJSONStringer *)closeWithOrgJsonJSONStringer_Scope:(OrgJsonJSONStringer_Scope *)empty
                              withOrgJsonJSONStringer_Scope:(OrgJsonJSONStringer_Scope *)nonempty
                                               withNSString:(NSString *)closeBracket;

/*!
 @brief Enters a new scope by appending any necessary whitespace and the given
  bracket.
 */
- (OrgJsonJSONStringer *)openWithOrgJsonJSONStringer_Scope:(OrgJsonJSONStringer_Scope *)empty
                                              withNSString:(NSString *)openBracket;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJsonJSONStringer)

J2OBJC_FIELD_SETTER(OrgJsonJSONStringer, out_, JavaLangStringBuilder *)

FOUNDATION_EXPORT void OrgJsonJSONStringer_init(OrgJsonJSONStringer *self);

FOUNDATION_EXPORT OrgJsonJSONStringer *new_OrgJsonJSONStringer_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsonJSONStringer *create_OrgJsonJSONStringer_init(void);

FOUNDATION_EXPORT void OrgJsonJSONStringer_initWithInt_(OrgJsonJSONStringer *self, jint indentSpaces);

FOUNDATION_EXPORT OrgJsonJSONStringer *new_OrgJsonJSONStringer_initWithInt_(jint indentSpaces) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJsonJSONStringer *create_OrgJsonJSONStringer_initWithInt_(jint indentSpaces);

J2OBJC_TYPE_LITERAL_HEADER(OrgJsonJSONStringer)

#endif

#if !defined (OrgJsonJSONStringer_Scope_) && (INCLUDE_ALL_OrgJsonJSONStringer || defined(INCLUDE_OrgJsonJSONStringer_Scope))
#define OrgJsonJSONStringer_Scope_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include <JRE/java/lang/Enum.h>

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, OrgJsonJSONStringer_Scope_Enum) {
  OrgJsonJSONStringer_Scope_Enum_EMPTY_ARRAY = 0,
  OrgJsonJSONStringer_Scope_Enum_NONEMPTY_ARRAY = 1,
  OrgJsonJSONStringer_Scope_Enum_EMPTY_OBJECT = 2,
  OrgJsonJSONStringer_Scope_Enum_DANGLING_KEY = 3,
  OrgJsonJSONStringer_Scope_Enum_NONEMPTY_OBJECT = 4,
  OrgJsonJSONStringer_Scope_Enum_NULL = 5,
};

/*!
 @brief Lexical scoping elements within this stringer, necessary to insert the
  appropriate separator characters (ie.commas and colons) and to detect
  nesting errors.
 */
@interface OrgJsonJSONStringer_Scope : JavaLangEnum

@property (readonly, class, nonnull) OrgJsonJSONStringer_Scope *EMPTY_ARRAY NS_SWIFT_NAME(EMPTY_ARRAY);
@property (readonly, class, nonnull) OrgJsonJSONStringer_Scope *NONEMPTY_ARRAY NS_SWIFT_NAME(NONEMPTY_ARRAY);
@property (readonly, class, nonnull) OrgJsonJSONStringer_Scope *EMPTY_OBJECT NS_SWIFT_NAME(EMPTY_OBJECT);
@property (readonly, class, nonnull) OrgJsonJSONStringer_Scope *DANGLING_KEY NS_SWIFT_NAME(DANGLING_KEY);
@property (readonly, class, nonnull) OrgJsonJSONStringer_Scope *NONEMPTY_OBJECT NS_SWIFT_NAME(NONEMPTY_OBJECT);
@property (readonly, class, nonnull) OrgJsonJSONStringer_Scope *NULL_ NS_SWIFT_NAME(NULL_);
#pragma mark Public

+ (OrgJsonJSONStringer_Scope *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (OrgJsonJSONStringer_Scope_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(OrgJsonJSONStringer_Scope)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgJsonJSONStringer_Scope *OrgJsonJSONStringer_Scope_values_[];

/*!
 @brief An array with no elements requires no separators or newlines before
  it is closed.
 */
inline OrgJsonJSONStringer_Scope *OrgJsonJSONStringer_Scope_get_EMPTY_ARRAY(void);
J2OBJC_ENUM_CONSTANT(OrgJsonJSONStringer_Scope, EMPTY_ARRAY)

/*!
 @brief A array with at least one value requires a comma and newline before
  the next element.
 */
inline OrgJsonJSONStringer_Scope *OrgJsonJSONStringer_Scope_get_NONEMPTY_ARRAY(void);
J2OBJC_ENUM_CONSTANT(OrgJsonJSONStringer_Scope, NONEMPTY_ARRAY)

/*!
 @brief An object with no keys or values requires no separators or newlines
  before it is closed.
 */
inline OrgJsonJSONStringer_Scope *OrgJsonJSONStringer_Scope_get_EMPTY_OBJECT(void);
J2OBJC_ENUM_CONSTANT(OrgJsonJSONStringer_Scope, EMPTY_OBJECT)

/*!
 @brief An object whose most recent element is a key.The next element must
  be a value.
 */
inline OrgJsonJSONStringer_Scope *OrgJsonJSONStringer_Scope_get_DANGLING_KEY(void);
J2OBJC_ENUM_CONSTANT(OrgJsonJSONStringer_Scope, DANGLING_KEY)

/*!
 @brief An object with at least one name/value pair requires a comma and
  newline before the next element.
 */
inline OrgJsonJSONStringer_Scope *OrgJsonJSONStringer_Scope_get_NONEMPTY_OBJECT(void);
J2OBJC_ENUM_CONSTANT(OrgJsonJSONStringer_Scope, NONEMPTY_OBJECT)

/*!
 @brief A special bracketless array needed by JSONStringer.join() and
  JSONObject.quote() only.Not used for JSON encoding.
 */
inline OrgJsonJSONStringer_Scope *OrgJsonJSONStringer_Scope_get_NULL(void);
J2OBJC_ENUM_CONSTANT(OrgJsonJSONStringer_Scope, NULL)

FOUNDATION_EXPORT IOSObjectArray *OrgJsonJSONStringer_Scope_values(void);

FOUNDATION_EXPORT OrgJsonJSONStringer_Scope *OrgJsonJSONStringer_Scope_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgJsonJSONStringer_Scope *OrgJsonJSONStringer_Scope_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgJsonJSONStringer_Scope)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJsonJSONStringer")
