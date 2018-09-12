//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/xml/sax/InputSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxInputSource")
#ifdef RESTRICT_OrgXmlSaxInputSource
#define INCLUDE_ALL_OrgXmlSaxInputSource 0
#else
#define INCLUDE_ALL_OrgXmlSaxInputSource 1
#endif
#undef RESTRICT_OrgXmlSaxInputSource

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgXmlSaxInputSource_) && (INCLUDE_ALL_OrgXmlSaxInputSource || defined(INCLUDE_OrgXmlSaxInputSource))
#define OrgXmlSaxInputSource_

@class JavaIoInputStream;
@class JavaIoReader;

/*!
 @brief A single input source for an XML entity.
 <blockquote>
  <em>This module, both source code and documentation, is in the
  Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
  See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
  for further information. 
 </blockquote>
  
 <p>This class allows a SAX application to encapsulate information
  about an input source in a single object, which may include
  a public identifier, a system identifier, a byte stream (possibly
  with a specified encoding), and/or a character stream.</p>
  
 <p>There are two places that the application can deliver an
  input source to the parser: as the argument to the Parser.parse
  method, or as the return value of the EntityResolver.resolveEntity
  method.</p>
  
 <p>The SAX parser will use the InputSource object to determine how
  to read XML input.  If there is a character stream available, the
  parser will read that stream directly, disregarding any text
  encoding declaration found in that stream.
  If there is no character stream, but there is
  a byte stream, the parser will use that byte stream, using the
  encoding specified in the InputSource or else (if no encoding is
  specified) autodetecting the character encoding using an algorithm
  such as the one in the XML specification.  If neither a character
  stream nor a
  byte stream is available, the parser will attempt to open a URI
  connection to the resource identified by the system
  identifier.</p>
  
 <p>An InputSource object belongs to the application: the SAX parser
  shall never modify it in any way (it may modify a copy if
  necessary).  However, standard processing of both byte and
  character streams is to close them on as part of end-of-parse cleanup,
  so applications should not attempt to re-use such streams after they
  have been handed to a parser.  </p>
 @since SAX 1.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.XMLReader
 - seealso: org.xml.sax.EntityResolver
 - seealso: java.io.InputStream
 - seealso: java.io.Reader
 */
@interface OrgXmlSaxInputSource : NSObject

#pragma mark Public

/*!
 @brief Zero-argument default constructor.
 - seealso: #setPublicId
 - seealso: #setSystemId
 - seealso: #setByteStream
 - seealso: #setCharacterStream
 - seealso: #setEncoding
 */
- (instancetype __nonnull)init;

/*!
 @brief Create a new input source with a byte stream.
 <p>Application writers should use setSystemId() to provide a base
  for resolving relative URIs, may use setPublicId to include a
  public identifier, and may use setEncoding to specify the object's
  character encoding.</p>
 @param byteStream The raw byte stream containing the document.
 - seealso: #setPublicId
 - seealso: #setSystemId
 - seealso: #setEncoding
 - seealso: #setByteStream
 - seealso: #setCharacterStream
 */
- (instancetype __nonnull)initWithJavaIoInputStream:(JavaIoInputStream *)byteStream;

/*!
 @brief Create a new input source with a character stream.
 <p>Application writers should use setSystemId() to provide a base
  for resolving relative URIs, and may use setPublicId to include a
  public identifier.</p>
  
 <p>The character stream shall not include a byte order mark.</p>
 @param characterStream The raw character stream containing the document.
 - seealso: #setPublicId
 - seealso: #setSystemId
 - seealso: #setByteStream
 - seealso: #setCharacterStream
 */
- (instancetype __nonnull)initWithJavaIoReader:(JavaIoReader *)characterStream;

/*!
 @brief Create a new input source with a system identifier.
 <p>Applications may use setPublicId to include a
  public identifier as well, or setEncoding to specify
  the character encoding, if known.</p>
  
 <p>If the system identifier is a URL, it must be fully
  resolved (it may not be a relative URL).</p>
 @param systemId The system identifier (URI).
 - seealso: #setPublicId
 - seealso: #setSystemId
 - seealso: #setByteStream
 - seealso: #setEncoding
 - seealso: #setCharacterStream
 */
- (instancetype __nonnull)initWithNSString:(NSString *)systemId;

/*!
 @brief Get the byte stream for this input source.
 <p>The getEncoding method will return the character
  encoding for this byte stream, or null if unknown.</p>
 @return The byte stream, or null if none was supplied.
 - seealso: #getEncoding
 - seealso: #setByteStream
 */
- (JavaIoInputStream *)getByteStream;

/*!
 @brief Get the character stream for this input source.
 @return The character stream, or null if none was supplied.
 - seealso: #setCharacterStream
 */
- (JavaIoReader *)getCharacterStream;

/*!
 @brief Get the character encoding for a byte stream or URI.
 This value will be ignored when the application provides a
  character stream.
 @return The encoding, or null if none was supplied.
 - seealso: #setByteStream
 - seealso: #getSystemId
 - seealso: #getByteStream
 */
- (NSString *)getEncoding;

/*!
 @brief Get the public identifier for this input source.
 @return The public identifier, or null if none was supplied.
 - seealso: #setPublicId
 */
- (NSString *)getPublicId;

/*!
 @brief Get the system identifier for this input source.
 <p>The getEncoding method will return the character encoding
  of the object pointed to, or null if unknown.</p>
  
 <p>If the system ID is a URL, it will be fully resolved.</p>
 @return The system identifier, or null if none was supplied.
 - seealso: #setSystemId
 - seealso: #getEncoding
 */
- (NSString *)getSystemId;

/*!
 @brief Set the byte stream for this input source.
 <p>The SAX parser will ignore this if there is also a character
  stream specified, but it will use a byte stream in preference
  to opening a URI connection itself.</p>
  
 <p>If the application knows the character encoding of the
  byte stream, it should set it with the setEncoding method.</p>
 @param byteStream A byte stream containing an XML document or         other entity.
 - seealso: #setEncoding
 - seealso: #getByteStream
 - seealso: #getEncoding
 - seealso: java.io.InputStream
 */
- (void)setByteStreamWithJavaIoInputStream:(JavaIoInputStream *)byteStream;

/*!
 @brief Set the character stream for this input source.
 <p>If there is a character stream specified, the SAX parser
  will ignore any byte stream and will not attempt to open
  a URI connection to the system identifier.</p>
 @param characterStream The character stream containing the         XML document or other entity.
 - seealso: #getCharacterStream
 - seealso: java.io.Reader
 */
- (void)setCharacterStreamWithJavaIoReader:(JavaIoReader *)characterStream;

/*!
 @brief Set the character encoding, if known.
 <p>The encoding must be a string acceptable for an
  XML encoding declaration (see section 4.3.3 of the XML 1.0
  recommendation).</p>
  
 <p>This method has no effect when the application provides a
  character stream.</p>
 @param encoding A string describing the character encoding.
 - seealso: #setSystemId
 - seealso: #setByteStream
 - seealso: #getEncoding
 */
- (void)setEncodingWithNSString:(NSString *)encoding;

/*!
 @brief Set the public identifier for this input source.
 <p>The public identifier is always optional: if the application
  writer includes one, it will be provided as part of the
  location information.</p>
 @param publicId The public identifier as a string.
 - seealso: #getPublicId
 - seealso: org.xml.sax.Locator
 - seealso: org.xml.sax.SAXParseException
 */
- (void)setPublicIdWithNSString:(NSString *)publicId;

/*!
 @brief Set the system identifier for this input source.
 <p>The system identifier is optional if there is a byte stream
  or a character stream, but it is still useful to provide one,
  since the application can use it to resolve relative URIs
  and can include it in error messages and warnings (the parser
  will attempt to open a connection to the URI only if
  there is no byte stream or character stream specified).</p>
  
 <p>If the application knows the character encoding of the
  object pointed to by the system identifier, it can register
  the encoding using the setEncoding method.</p>
  
 <p>If the system identifier is a URL, it must be fully
  resolved (it may not be a relative URL).</p>
 @param systemId The system identifier as a string.
 - seealso: #setEncoding
 - seealso: #getSystemId
 - seealso: org.xml.sax.Locator
 - seealso: org.xml.sax.SAXParseException
 */
- (void)setSystemIdWithNSString:(NSString *)systemId;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxInputSource)

FOUNDATION_EXPORT void OrgXmlSaxInputSource_init(OrgXmlSaxInputSource *self);

FOUNDATION_EXPORT OrgXmlSaxInputSource *new_OrgXmlSaxInputSource_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxInputSource *create_OrgXmlSaxInputSource_init(void);

FOUNDATION_EXPORT void OrgXmlSaxInputSource_initWithNSString_(OrgXmlSaxInputSource *self, NSString *systemId);

FOUNDATION_EXPORT OrgXmlSaxInputSource *new_OrgXmlSaxInputSource_initWithNSString_(NSString *systemId) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxInputSource *create_OrgXmlSaxInputSource_initWithNSString_(NSString *systemId);

FOUNDATION_EXPORT void OrgXmlSaxInputSource_initWithJavaIoInputStream_(OrgXmlSaxInputSource *self, JavaIoInputStream *byteStream);

FOUNDATION_EXPORT OrgXmlSaxInputSource *new_OrgXmlSaxInputSource_initWithJavaIoInputStream_(JavaIoInputStream *byteStream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxInputSource *create_OrgXmlSaxInputSource_initWithJavaIoInputStream_(JavaIoInputStream *byteStream);

FOUNDATION_EXPORT void OrgXmlSaxInputSource_initWithJavaIoReader_(OrgXmlSaxInputSource *self, JavaIoReader *characterStream);

FOUNDATION_EXPORT OrgXmlSaxInputSource *new_OrgXmlSaxInputSource_initWithJavaIoReader_(JavaIoReader *characterStream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxInputSource *create_OrgXmlSaxInputSource_initWithJavaIoReader_(JavaIoReader *characterStream);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxInputSource)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxInputSource")
