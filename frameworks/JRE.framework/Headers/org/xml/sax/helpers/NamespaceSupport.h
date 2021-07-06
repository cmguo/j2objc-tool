//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/xml/sax/helpers/NamespaceSupport.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxHelpersNamespaceSupport")
#ifdef RESTRICT_OrgXmlSaxHelpersNamespaceSupport
#define INCLUDE_ALL_OrgXmlSaxHelpersNamespaceSupport 0
#else
#define INCLUDE_ALL_OrgXmlSaxHelpersNamespaceSupport 1
#endif
#undef RESTRICT_OrgXmlSaxHelpersNamespaceSupport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgXmlSaxHelpersNamespaceSupport_) && (INCLUDE_ALL_OrgXmlSaxHelpersNamespaceSupport || defined(INCLUDE_OrgXmlSaxHelpersNamespaceSupport))
#define OrgXmlSaxHelpersNamespaceSupport_

@class IOSObjectArray;
@protocol JavaUtilEnumeration;

/*!
 @brief Encapsulate Namespace logic for use by applications using SAX,
  or internally by SAX drivers.
 <blockquote>
  <em>This module, both source code and documentation, is in the
  Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
  See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
  for further information. 
 </blockquote>
  
 <p>This class encapsulates the logic of Namespace processing: it
  tracks the declarations currently in force for each context and
  automatically processes qualified XML names into their Namespace
  parts; it can also be used in reverse for generating XML qnames
  from Namespaces.</p>
  
 <p>Namespace support objects are reusable, but the reset method
  must be invoked between each session.</p>
  
 <p>Here is a simple session:</p>
  
 @code

  String parts[] = new String[3];
  NamespaceSupport support = new NamespaceSupport();
  support.pushContext();
  support.declarePrefix("", "http://www.w3.org/1999/xhtml");
  support.declarePrefix("dc", "http://www.purl.org/dc#");
  parts = support.processName("p", parts, false);
  System.out.println("Namespace URI: " + parts[0]);
  System.out.println("Local name: " + parts[1]);
  System.out.println("Raw name: " + parts[2]);
  parts = support.processName("dc:title", parts, false);
  System.out.println("Namespace URI: " + parts[0]);
  System.out.println("Local name: " + parts[1]);
  System.out.println("Raw name: " + parts[2]);
  support.popContext(); 
  
@endcode
  
 <p>Note that this class is optimized for the use case where most
  elements do not contain Namespace declarations: if the same
  prefix/URI mapping is repeated for each context (for example), this
  class will be somewhat less efficient.</p>
  
 <p>Although SAX drivers (parsers) may choose to use this class to
  implement namespace handling, they are not required to do so.
  Applications must track namespace information themselves if they
  want to use namespace information.
 @since SAX 2.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 */
@interface OrgXmlSaxHelpersNamespaceSupport : NSObject
@property (readonly, copy, class) NSString *XMLNS NS_SWIFT_NAME(XMLNS);
@property (readonly, copy, class) NSString *NSDECL NS_SWIFT_NAME(NSDECL);

#pragma mark Public

/*!
 @brief Create a new Namespace support object.
 */
- (instancetype __nonnull)init;

/*!
 @brief Declare a Namespace prefix.All prefixes must be declared
  before they are referenced.
 For example, a SAX driver (parser)
  would scan an element's attributes
  in two passes:  first for namespace declarations,
  then a second pass using <code>processName()</code> to
  interpret prefixes against (potentially redefined) prefixes. 
 <p>This method declares a prefix in the current Namespace
  context; the prefix will remain in force until this context
  is popped, unless it is shadowed in a descendant context.</p>
  
 <p>To declare the default element Namespace, use the empty string as
  the prefix.</p>
  
 <p>Note that you must <em>not</em> declare a prefix after
  you've pushed and popped another Namespace context, or
  treated the declarations phase as complete by processing
  a prefixed name.</p>
  
 <p>Note that there is an asymmetry in this library: <code>getPrefix</code>
  will not return the "" prefix,
  even if you have declared a default element namespace.
  To check for a default namespace,
  you have to look it up explicitly using <code>getURI</code>.
  This asymmetry exists to make it easier to look up prefixes
  for attribute names, where the default prefix is not allowed.</p>
 @param prefix The prefix to declare, or the empty string to     indicate the default element namespace.  This may never have
      the value "xml" or "xmlns".
 @param uri The Namespace URI to associate with the prefix.
 @return true if the prefix was legal, false otherwise
 - seealso: #processName
 - seealso: #getURI
 - seealso: #getPrefix
 */
- (jboolean)declarePrefixWithNSString:(NSString *)prefix
                         withNSString:(NSString *)uri;

/*!
 @brief Return an enumeration of all prefixes declared in this context.
 <p>The empty (default) prefix will be included in this
  enumeration; note that this behaviour differs from that of 
 <code>getPrefix</code> and <code>getPrefixes</code>.</p>
 @return An enumeration of all prefixes declared in this
          context.
 - seealso: #getPrefixes
 - seealso: #getURI
 */
- (id<JavaUtilEnumeration>)getDeclaredPrefixes;

/*!
 @brief Return one of the prefixes mapped to a Namespace URI.
 <p>If more than one prefix is currently mapped to the same
  URI, this method will make an arbitrary selection; if you
  want all of the prefixes, use the <code>getPrefixes</code>
  method instead.</p>
  
 <p><strong>Note:</strong> this will never return the empty (default) prefix;
  to check for a default prefix, use the <code>getURI</code>
  method with an argument of "".</p>
 @param uri the namespace URI
 @return one of the prefixes currently mapped to the URI supplied,
          or null if none is mapped or if the URI is assigned to
          the default namespace
 - seealso: #getPrefixes(java.lang.String)
 - seealso: #getURI
 */
- (NSString *)getPrefixWithNSString:(NSString *)uri;

/*!
 @brief Return an enumeration of all prefixes whose declarations are
  active in the current context.
 This includes declarations from parent contexts that have
  not been overridden. 
 <p><strong>Note:</strong> if there is a default prefix, it will not be
  returned in this enumeration; check for the default prefix
  using the <code>getURI</code> with an argument of "".</p>
 @return An enumeration of prefixes (never empty).
 - seealso: #getDeclaredPrefixes
 - seealso: #getURI
 */
- (id<JavaUtilEnumeration>)getPrefixes;

/*!
 @brief Return an enumeration of all prefixes for a given URI whose
  declarations are active in the current context.
 This includes declarations from parent contexts that have
  not been overridden. 
 <p>This method returns prefixes mapped to a specific Namespace
  URI.  The xml: prefix will be included.  If you want only one
  prefix that's mapped to the Namespace URI, and you don't care
  which one you get, use the <code>getPrefix</code>
   method instead.</p>
  
 <p><strong>Note:</strong> the empty (default) prefix is <em>never</em> included
  in this enumeration; to check for the presence of a default
  Namespace, use the <code>getURI</code> method with an
  argument of "".</p>
 @param uri The Namespace URI.
 @return An enumeration of prefixes (never empty).
 - seealso: #getPrefix
 - seealso: #getDeclaredPrefixes
 - seealso: #getURI
 */
- (id<JavaUtilEnumeration>)getPrefixesWithNSString:(NSString *)uri;

/*!
 @brief Look up a prefix and get the currently-mapped Namespace URI.
 <p>This method looks up the prefix in the current context.
  Use the empty string ("") for the default Namespace.</p>
 @param prefix The prefix to look up.
 @return The associated Namespace URI, or null if the prefix
          is undeclared in this context.
 - seealso: #getPrefix
 - seealso: #getPrefixes
 */
- (NSString *)getURIWithNSString:(NSString *)prefix;

/*!
 @brief Returns true if namespace declaration attributes are placed into
  a namespace.This behavior is not the default.
 @return true if namespace declaration attributes are enabled, false
          otherwise.
 @since SAX 2.1alpha
 */
- (jboolean)isNamespaceDeclUris;

/*!
 @brief Revert to the previous Namespace context.
 <p>Normally, you should pop the context at the end of each
  XML element.  After popping the context, all Namespace prefix
  mappings that were previously in force are restored.</p>
  
 <p>You must not attempt to declare additional Namespace
  prefixes after popping a context, unless you push another
  context first.</p>
 - seealso: #pushContext
 */
- (void)popContext;

/*!
 @brief Process a raw XML qualified name, after all declarations in the
  current context have been handled by <code>declarePrefix()</code>
 .
 <p>This method processes a raw XML qualified name in the
  current context by removing the prefix and looking it up among
  the prefixes currently declared.  The return value will be the
  array supplied by the caller, filled in as follows:</p>
  
 <dl>
  <dt>parts[0]</dt>
  <dd>The Namespace URI, or an empty string if none is
   in use.</dd>
  <dt>parts[1]</dt>
  <dd>The local name (without prefix).</dd>
  <dt>parts[2]</dt>
  <dd>The original raw name.</dd>
  </dl>
  
 <p>All of the strings in the array will be internalized.  If
  the raw name has a prefix that has not been declared, then
  the return value will be null.</p>
  
 <p>Note that attribute names are processed differently than
  element names: an unprefixed element name will receive the
  default Namespace (if any), while an unprefixed attribute name
  will not.</p>
 @param qName The XML qualified name to be processed.
 @param parts An array supplied by the caller, capable of         holding at least three members.
 @param isAttribute A flag indicating whether this is an         attribute name (true) or an element name (false).
 @return The supplied array holding three internalized strings
         representing the Namespace URI (or empty string), the
         local name, and the XML qualified name; or null if there
         is an undeclared prefix.
 - seealso: #declarePrefix
 - seealso: java.lang.String#intern
 */
- (IOSObjectArray *)processNameWithNSString:(NSString *)qName
                          withNSStringArray:(IOSObjectArray *)parts
                                withBoolean:(jboolean)isAttribute;

/*!
 @brief Start a new Namespace context.
 The new context will automatically inherit
  the declarations of its parent context, but it will also keep
  track of which declarations were made within this context. 
 <p>Event callback code should start a new context once per element.
  This means being ready to call this in either of two places.
  For elements that don't include namespace declarations, the 
 <em>ContentHandler.startElement()</em> callback is the right place.
  For elements with such a declaration, it'd done in the first 
 <em>ContentHandler.startPrefixMapping()</em> callback.
  A boolean flag can be used to
  track whether a context has been started yet.  When either of
  those methods is called, it checks the flag to see if a new context
  needs to be started.  If so, it starts the context and sets the
  flag.  After <em>ContentHandler.startElement()</em>
  does that, it always clears the flag. 
 <p>Normally, SAX drivers would push a new context at the beginning
  of each XML element.  Then they perform a first pass over the
  attributes to process all namespace declarations, making 
 <em>ContentHandler.startPrefixMapping()</em> callbacks.
  Then a second pass is made, to determine the namespace-qualified
  names for all attributes and for the element name.
  Finally all the information for the 
 <em>ContentHandler.startElement()</em> callback is available,
  so it can then be made. 
 <p>The Namespace support object always starts with a base context
  already in force: in this context, only the "xml" prefix is
  declared.</p>
 - seealso: org.xml.sax.ContentHandler
 - seealso: #popContext
 */
- (void)pushContext;

/*!
 @brief Reset this Namespace support object for reuse.
 <p>It is necessary to invoke this method before reusing the
  Namespace support object for a new session.  If namespace
  declaration URIs are to be supported, that flag must also
  be set to a non-default value. 
 </p>
 - seealso: #setNamespaceDeclUris
 */
- (void)reset;

/*!
 @brief Controls whether namespace declaration attributes are placed
  into the <code>NSDECL</code> namespace
  by <code>processName()</code>.This may only be
  changed before any contexts have been pushed.
 @param value the namespace declaration attribute state. A value of true               enables this feature, a value of false disables it.
 @since SAX 2.1alpha
 @throw IllegalStateExceptionwhen attempting to set this
     after any context has been pushed.
 */
- (void)setNamespaceDeclUrisWithBoolean:(jboolean)value;

@end

J2OBJC_STATIC_INIT(OrgXmlSaxHelpersNamespaceSupport)

/*!
 @brief The XML Namespace URI as a constant.
 The value is <code>http://www.w3.org/XML/1998/namespace</code>
  as defined in the "Namespaces in XML" * recommendation. 
 <p>This is the Namespace URI that is automatically mapped
  to the "xml" prefix.</p>
 */
inline NSString *OrgXmlSaxHelpersNamespaceSupport_get_XMLNS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgXmlSaxHelpersNamespaceSupport_XMLNS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgXmlSaxHelpersNamespaceSupport, XMLNS, NSString *)

/*!
 @brief The namespace declaration URI as a constant.
 The value is <code>http://www.w3.org/xmlns/2000/</code>, as defined
  in a backwards-incompatible erratum to the "Namespaces in XML"
  recommendation.  Because that erratum postdated SAX2, SAX2 defaults
  to the original recommendation, and does not normally use this URI. 
 <p>This is the Namespace URI that is optionally applied to 
 <em>xmlns</em> and <em>xmlns:*</em> attributes, which are used to
  declare namespaces.  </p>
 @since SAX 2.1alpha
 - seealso: #setNamespaceDeclUris
 - seealso: #isNamespaceDeclUris
 */
inline NSString *OrgXmlSaxHelpersNamespaceSupport_get_NSDECL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgXmlSaxHelpersNamespaceSupport_NSDECL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgXmlSaxHelpersNamespaceSupport, NSDECL, NSString *)

FOUNDATION_EXPORT void OrgXmlSaxHelpersNamespaceSupport_init(OrgXmlSaxHelpersNamespaceSupport *self);

FOUNDATION_EXPORT OrgXmlSaxHelpersNamespaceSupport *new_OrgXmlSaxHelpersNamespaceSupport_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxHelpersNamespaceSupport *create_OrgXmlSaxHelpersNamespaceSupport_init(void);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersNamespaceSupport)

#endif

#if !defined (OrgXmlSaxHelpersNamespaceSupport_Context_) && (INCLUDE_ALL_OrgXmlSaxHelpersNamespaceSupport || defined(INCLUDE_OrgXmlSaxHelpersNamespaceSupport_Context))
#define OrgXmlSaxHelpersNamespaceSupport_Context_

@class IOSObjectArray;
@class JavaUtilHashtable;
@class OrgXmlSaxHelpersNamespaceSupport;
@protocol JavaUtilEnumeration;

/*!
 @brief Internal class for a single Namespace context.
 <p>This module caches and reuses Namespace contexts,
  so the number allocated
  will be equal to the element depth of the document, not to the total
  number of elements (i.e. 5-10 rather than tens of thousands).
  Also, data structures used to represent contexts are shared when
  possible (child contexts without declarations) to further reduce
  the amount of memory that's consumed. 
 </p>
 */
@interface OrgXmlSaxHelpersNamespaceSupport_Context : NSObject {
 @public
  JavaUtilHashtable *prefixTable_;
  JavaUtilHashtable *uriTable_;
  JavaUtilHashtable *elementNameTable_;
  JavaUtilHashtable *attributeNameTable_;
  NSString *defaultNS_;
  jboolean declsOK_;
}

#pragma mark Package-Private

/*!
 @brief Create the root-level Namespace context.
 */
- (instancetype __nonnull)initWithOrgXmlSaxHelpersNamespaceSupport:(OrgXmlSaxHelpersNamespaceSupport *)outer$;

/*!
 @brief Makes associated state become collectible,
  invalidating this context.
 <code>setParent</code> must be called before
  this context may be used again.
 */
- (void)clear;

/*!
 @brief Declare a Namespace prefix for this context.
 @param prefix The prefix to declare.
 @param uri The associated Namespace URI.
 - seealso: org.xml.sax.helpers.NamespaceSupport#declarePrefix
 */
- (void)declarePrefixWithNSString:(NSString *)prefix
                     withNSString:(NSString *)uri;

/*!
 @brief Return an enumeration of prefixes declared in this context.
 @return An enumeration of prefixes (possibly empty).
 - seealso: org.xml.sax.helpers.NamespaceSupport#getDeclaredPrefixes
 */
- (id<JavaUtilEnumeration>)getDeclaredPrefixes;

/*!
 @brief Look up one of the prefixes associated with a URI in this context.
 <p>Since many prefixes may be mapped to the same URI,
  the return value may be unreliable.</p>
 @param uri The URI to look up.
 @return The associated prefix, or null if none is declared.
 - seealso: org.xml.sax.helpers.NamespaceSupport#getPrefix
 */
- (NSString *)getPrefixWithNSString:(NSString *)uri;

/*!
 @brief Return an enumeration of all prefixes currently in force.
 <p>The default prefix, if in force, is <em>not</em>
  returned, and will have to be checked for separately.</p>
 @return An enumeration of prefixes (never empty).
 - seealso: org.xml.sax.helpers.NamespaceSupport#getPrefixes
 */
- (id<JavaUtilEnumeration>)getPrefixes;

/*!
 @brief Look up the URI associated with a prefix in this context.
 @param prefix The prefix to look up.
 @return The associated Namespace URI, or null if none is
          declared.
 - seealso: org.xml.sax.helpers.NamespaceSupport#getURI
 */
- (NSString *)getURIWithNSString:(NSString *)prefix;

/*!
 @brief Process an XML qualified name in this context.
 @param qName The XML qualified name.
 @param isAttribute true if this is an attribute name.
 @return An array of three strings containing the
          URI part (or empty string), the local part,
          and the raw name, all internalized, or null
          if there is an undeclared prefix.
 - seealso: org.xml.sax.helpers.NamespaceSupport#processName
 */
- (IOSObjectArray *)processNameWithNSString:(NSString *)qName
                                withBoolean:(jboolean)isAttribute;

/*!
 @brief (Re)set the parent of this Namespace context.
 The context must either have been freshly constructed,
  or must have been cleared.
 @param context The parent Namespace context object.
 */
- (void)setParentWithOrgXmlSaxHelpersNamespaceSupport_Context:(OrgXmlSaxHelpersNamespaceSupport_Context *)parent;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersNamespaceSupport_Context)

J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersNamespaceSupport_Context, prefixTable_, JavaUtilHashtable *)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersNamespaceSupport_Context, uriTable_, JavaUtilHashtable *)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersNamespaceSupport_Context, elementNameTable_, JavaUtilHashtable *)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersNamespaceSupport_Context, attributeNameTable_, JavaUtilHashtable *)
J2OBJC_FIELD_SETTER(OrgXmlSaxHelpersNamespaceSupport_Context, defaultNS_, NSString *)

FOUNDATION_EXPORT void OrgXmlSaxHelpersNamespaceSupport_Context_initWithOrgXmlSaxHelpersNamespaceSupport_(OrgXmlSaxHelpersNamespaceSupport_Context *self, OrgXmlSaxHelpersNamespaceSupport *outer$);

FOUNDATION_EXPORT OrgXmlSaxHelpersNamespaceSupport_Context *new_OrgXmlSaxHelpersNamespaceSupport_Context_initWithOrgXmlSaxHelpersNamespaceSupport_(OrgXmlSaxHelpersNamespaceSupport *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxHelpersNamespaceSupport_Context *create_OrgXmlSaxHelpersNamespaceSupport_Context_initWithOrgXmlSaxHelpersNamespaceSupport_(OrgXmlSaxHelpersNamespaceSupport *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersNamespaceSupport_Context)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxHelpersNamespaceSupport")
