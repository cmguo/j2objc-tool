//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/OutputKeys.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformOutputKeys")
#ifdef RESTRICT_JavaxXmlTransformOutputKeys
#define INCLUDE_ALL_JavaxXmlTransformOutputKeys 0
#else
#define INCLUDE_ALL_JavaxXmlTransformOutputKeys 1
#endif
#undef RESTRICT_JavaxXmlTransformOutputKeys

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlTransformOutputKeys_) && (INCLUDE_ALL_JavaxXmlTransformOutputKeys || defined(INCLUDE_JavaxXmlTransformOutputKeys))
#define JavaxXmlTransformOutputKeys_

/*!
 @brief Provides string constants that can be used to set
  output properties for a Transformer, or to retrieve
  output properties from a Transformer or Templates object.
 <p>All the fields in this class are read-only.</p>
 - seealso: <a href="http://www.w3.org/TR/xslt#output">
   section 16 of the XSL Transformations (XSLT) W3C Recommendation</a>
 */
@interface JavaxXmlTransformOutputKeys : NSObject
@property (readonly, copy, class) NSString *METHOD NS_SWIFT_NAME(METHOD);
@property (readonly, copy, class) NSString *VERSION NS_SWIFT_NAME(VERSION);
@property (readonly, copy, class) NSString *ENCODING NS_SWIFT_NAME(ENCODING);
@property (readonly, copy, class) NSString *OMIT_XML_DECLARATION NS_SWIFT_NAME(OMIT_XML_DECLARATION);
@property (readonly, copy, class) NSString *STANDALONE NS_SWIFT_NAME(STANDALONE);
@property (readonly, copy, class) NSString *DOCTYPE_PUBLIC NS_SWIFT_NAME(DOCTYPE_PUBLIC);
@property (readonly, copy, class) NSString *DOCTYPE_SYSTEM NS_SWIFT_NAME(DOCTYPE_SYSTEM);
@property (readonly, copy, class) NSString *CDATA_SECTION_ELEMENTS NS_SWIFT_NAME(CDATA_SECTION_ELEMENTS);
@property (readonly, copy, class) NSString *INDENT NS_SWIFT_NAME(INDENT);
@property (readonly, copy, class) NSString *MEDIA_TYPE NS_SWIFT_NAME(MEDIA_TYPE);

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformOutputKeys)

/*!
 @brief method = "xml" | "html" | "text" | <var>expanded name</var>.
 <p>The value of the method property identifies the overall method that
  should be used for outputting the result tree.  Other non-namespaced
  values may be used, such as "xhtml", but, if accepted, the handling
  of such values is implementation defined.  If any of the method values
  are not accepted and are not namespace qualified,
  then <code>javax.xml.transform.Transformer.setOutputProperty</code>
  or <code>javax.xml.transform.Transformer.setOutputProperties</code> will
  throw a <code>java.lang.IllegalArgumentException</code>.</p>
 - seealso: <a href="http://www.w3.org/TR/xslt#output">
   section 16 of the XSL Transformations (XSLT) W3C Recommendation</a>
 */
inline NSString *JavaxXmlTransformOutputKeys_get_METHOD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformOutputKeys_METHOD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformOutputKeys, METHOD, NSString *)

/*!
 @brief version = <var>nmtoken</var>.
 <p><code>version</code> specifies the version of the output
  method.</p>
  <p>When the output method is "xml", the version value specifies the
  version of XML to be used for outputting the result tree. The default
  value for the xml output method is 1.0. When the output method is
  "html", the version value indicates the version of the HTML.
  The default value for the xml output method is 4.0, which specifies
  that the result should be output as HTML conforming to the HTML 4.0
  Recommendation [HTML].  If the output method is "text", the version
  property is ignored.</p>
 - seealso: <a href="http://www.w3.org/TR/xslt#output">
   section 16 of the XSL Transformations (XSLT) W3C Recommendation</a>
 */
inline NSString *JavaxXmlTransformOutputKeys_get_VERSION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformOutputKeys_VERSION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformOutputKeys, VERSION, NSString *)

/*!
 @brief encoding = <var>string</var>.
 <p><code>encoding</code> specifies the preferred character
  encoding that the Transformer should use to encode sequences of
  characters as sequences of bytes. The value of the encoding property should be
  treated case-insensitively. The value must only contain characters in
  the range #x21 to #x7E (i.e., printable ASCII characters). The value
  should either be a <code>charset</code> registered with the Internet
  Assigned Numbers Authority <a href="#IANA">[IANA]</a>,
  <a href="#RFC2278">[RFC2278]</a> or start with <code>X-</code>.</p>
 - seealso: <a href="http://www.w3.org/TR/xslt#output">
  section 16 of the XSL Transformations (XSLT) W3C Recommendation</a>
 */
inline NSString *JavaxXmlTransformOutputKeys_get_ENCODING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformOutputKeys_ENCODING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformOutputKeys, ENCODING, NSString *)

/*!
 @brief omit-xml-declaration = "yes" | "no".
 <p><code>omit-xml-declaration</code> specifies whether the XSLT
  processor should output an XML declaration; the value must be 
 <code>yes</code> or <code>no</code>.</p>
 - seealso: <a href="http://www.w3.org/TR/xslt#output">
   section 16 of the XSL Transformations (XSLT) W3C Recommendation</a>
 */
inline NSString *JavaxXmlTransformOutputKeys_get_OMIT_XML_DECLARATION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformOutputKeys_OMIT_XML_DECLARATION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformOutputKeys, OMIT_XML_DECLARATION, NSString *)

/*!
 @brief standalone = "yes" | "no".
 <p><code>standalone</code> specifies whether the Transformer
  should output a standalone document declaration; the value must be 
 <code>yes</code> or <code>no</code>.</p>
 - seealso: <a href="http://www.w3.org/TR/xslt#output">
   section 16 of the XSL Transformations (XSLT) W3C Recommendation</a>
 */
inline NSString *JavaxXmlTransformOutputKeys_get_STANDALONE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformOutputKeys_STANDALONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformOutputKeys, STANDALONE, NSString *)

/*!
 @brief doctype-public = <var>string</var>.
 <p>See the documentation for the <code>DOCTYPE_SYSTEM</code> property
  for a description of what the value of the key should be.</p>
 - seealso: <a href="http://www.w3.org/TR/xslt#output">
   section 16 of the XSL Transformations (XSLT) W3C Recommendation</a>
 */
inline NSString *JavaxXmlTransformOutputKeys_get_DOCTYPE_PUBLIC(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformOutputKeys_DOCTYPE_PUBLIC;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformOutputKeys, DOCTYPE_PUBLIC, NSString *)

/*!
 @brief doctype-system = <var>string</var>.
 <p><code>doctype-system</code> specifies the system identifier
  to be used in the document type declaration.</p>
  <p>If the doctype-system property is specified, the xml output method
  should output a document type declaration immediately before the first
  element. The name following &lt;!DOCTYPE should be the name of the first
  element. If doctype-public property is also specified, then the xml
  output method should output PUBLIC followed by the public identifier
  and then the system identifier; otherwise, it should output SYSTEM
  followed by the system identifier. The internal subset should be empty.
  The value of the doctype-public property should be ignored unless the doctype-system
  property is specified.</p>
  <p>If the doctype-public or doctype-system properties are specified,
  then the html output method should output a document type declaration
  immediately before the first element. The name following &lt;!DOCTYPE
  should be HTML or html. If the doctype-public property is specified,
  then the output method should output PUBLIC followed by the specified
  public identifier; if the doctype-system property is also specified,
  it should also output the specified system identifier following the
  public identifier. If the doctype-system property is specified but
  the doctype-public property is not specified, then the output method
  should output SYSTEM followed by the specified system identifier.</p>
  
 <p><code>doctype-system</code> specifies the system identifier
  to be used in the document type declaration.</p>
 - seealso: <a href="http://www.w3.org/TR/xslt#output">
   section 16 of the XSL Transformations (XSLT) W3C Recommendation</a>
 */
inline NSString *JavaxXmlTransformOutputKeys_get_DOCTYPE_SYSTEM(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformOutputKeys_DOCTYPE_SYSTEM;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformOutputKeys, DOCTYPE_SYSTEM, NSString *)

/*!
 @brief cdata-section-elements = <var>expanded names</var>.
 <p><code>cdata-section-elements</code> specifies a whitespace delimited
  list of the names of elements whose text node children should be output
  using CDATA sections. Note that these names must use the format
  described in the section Qualfied Name Representation in 
 <code>javax.xml.transform</code>.</p>
 - seealso: <a href="http://www.w3.org/TR/xslt#output">
   section 16 of the XSL Transformations (XSLT) W3C Recommendation.</a>
 */
inline NSString *JavaxXmlTransformOutputKeys_get_CDATA_SECTION_ELEMENTS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformOutputKeys_CDATA_SECTION_ELEMENTS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformOutputKeys, CDATA_SECTION_ELEMENTS, NSString *)

/*!
 @brief indent = "yes" | "no".
 <p><code>indent</code> specifies whether the Transformer may
  add additional whitespace when outputting the result tree; the value
  must be <code>yes</code> or <code>no</code>.  </p>
 - seealso: <a href="http://www.w3.org/TR/xslt#output">
   section 16 of the XSL Transformations (XSLT) W3C Recommendation</a>
 */
inline NSString *JavaxXmlTransformOutputKeys_get_INDENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformOutputKeys_INDENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformOutputKeys, INDENT, NSString *)

/*!
 @brief media-type = <var>string</var>.
 <p><code>media-type</code> specifies the media type (MIME
  content type) of the data that results from outputting the result
  tree. The <code>charset</code> parameter should not be specified
  explicitly; instead, when the top-level media type is 
 <code>text</code>, a <code>charset</code> parameter should be added
  according to the character encoding actually used by the output
  method.  </p>
 - seealso: <a href="http://www.w3.org/TR/xslt#output">
   section 16 of the XSL Transformations (XSLT) W3C Recommendation</a>
 */
inline NSString *JavaxXmlTransformOutputKeys_get_MEDIA_TYPE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlTransformOutputKeys_MEDIA_TYPE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlTransformOutputKeys, MEDIA_TYPE, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformOutputKeys)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformOutputKeys")
