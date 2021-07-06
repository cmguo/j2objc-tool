//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/xpath/XPathFactory.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxXmlXpathXPathFactory")
#ifdef RESTRICT_JavaxXmlXpathXPathFactory
#define INCLUDE_ALL_JavaxXmlXpathXPathFactory 0
#else
#define INCLUDE_ALL_JavaxXmlXpathXPathFactory 1
#endif
#undef RESTRICT_JavaxXmlXpathXPathFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlXpathXPathFactory_) && (INCLUDE_ALL_JavaxXmlXpathXPathFactory || defined(INCLUDE_JavaxXmlXpathXPathFactory))
#define JavaxXmlXpathXPathFactory_

@class JavaLangClassLoader;
@protocol JavaxXmlXpathXPath;
@protocol JavaxXmlXpathXPathFunctionResolver;
@protocol JavaxXmlXpathXPathVariableResolver;

/*!
 @brief <p>An <code>XPathFactory</code> instance can be used to create 
 <code>javax.xml.xpath.XPath</code> objects.
 </p>
 <p>See <code>newInstance(String uri)</code> for lookup mechanism.</p>
 @author <a href="mailto:Norman.Walsh@@Sun.com">Norman Walsh</a>
 @author <a href="mailto:Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 888889 $, $Date: 2009-12-09 09:43:18 -0800 (Wed, 09 Dec 2009) $
 @since 1.5
 */
@interface JavaxXmlXpathXPathFactory : NSObject
@property (readonly, copy, class) NSString *DEFAULT_PROPERTY_NAME NS_SWIFT_NAME(DEFAULT_PROPERTY_NAME);
@property (readonly, copy, class) NSString *DEFAULT_OBJECT_MODEL_URI NS_SWIFT_NAME(DEFAULT_OBJECT_MODEL_URI);

#pragma mark Public

/*!
 @brief <p>Get the state of the named feature.
 </p>
  
 <p>
  Feature names are fully qualified <code>java.net.URI</code>s.
  Implementations may define their own features.
  An <code>XPathFactoryConfigurationException</code> is thrown if this <code>XPathFactory</code> or the <code>XPath</code>s
  it creates cannot support the feature.
  It is possible for an <code>XPathFactory</code> to expose a feature value but be unable to change its state. 
 </p>
 @param name Feature name.
 @return State of the named feature.
 @throw XPathFactoryConfigurationExceptionif this <code>XPathFactory</code> or the <code>XPath</code>s
    it creates cannot support this feature.
 @throw NullPointerExceptionif <code>name</code> is <code>null</code>.
 */
- (jboolean)getFeatureWithNSString:(NSString *)name;

/*!
 @brief <p>Is specified object model supported by this <code>XPathFactory</code>?
 </p>
 @param objectModel Specifies the object model which the returned  <code> XPathFactory </code>  will understand.
 @return <code>true</code> if <code>XPathFactory</code> supports <code>objectModel</code>, else <code>false</code>.
 @throw NullPointerExceptionIf <code>objectModel</code> is <code>null</code>.
 @throw IllegalArgumentExceptionIf <code>objectModel.length() == 0</code>.
 */
- (jboolean)isObjectModelSupportedWithNSString:(NSString *)objectModel;

/*!
 @brief <p>Get a new <code>XPathFactory</code> instance using the default object model, 
 <code>DEFAULT_OBJECT_MODEL_URI</code>,
  the W3C DOM.
 </p>
  
 <p>This method is functionally equivalent to:</p>
  @code

    newInstance(DEFAULT_OBJECT_MODEL_URI) 
  
@endcode
  
 <p>Since the implementation for the W3C DOM is always available, this method will never fail.</p>
 @return Instance of an <code>XPathFactory</code>.
 */
+ (JavaxXmlXpathXPathFactory *)newInstance OBJC_METHOD_FAMILY_NONE;

/*!
 @brief <p>Get a new <code>XPathFactory</code> instance using the specified object model.
 </p>
  
 <p>To find a <code>XPathFactory</code> object,
  this method looks the following places in the following order where "the class loader" refers to the context class loader:</p>
  <ol>
    <li>
      If the system property <code>DEFAULT_PROPERTY_NAME</code> + ":uri" is present,
      where uri is the parameter to this method, then its value is read as a class name.
      The method will try to create a new instance of this class by using the class loader,
      and returns it if it is successfully created.   
 </li>
    <li>
      ${java.home}/lib/jaxp.properties is read and the value associated with the key being the system property above is looked for.
      If present, the value is processed just like above.   
 </li>
    <li>
      The class loader is asked for service provider provider-configuration files matching <code>javax.xml.xpath.XPathFactory</code>
      in the resource directory META-INF/services.
      See the JAR File Specification for file format and parsing rules.
      Each potential service provider is required to implement the method:     
 @code

        <code>isObjectModelSupported(String objectModel)</code>
          
@endcode
      The first service provider found in class loader order that supports the specified object model is returned.   
 </li>
    <li>
      Platform default <code>XPathFactory</code> is located in a platform specific way.
      There must be a platform default XPathFactory for the W3C DOM, i.e. <code>DEFAULT_OBJECT_MODEL_URI</code>.
    </li>
  </ol>
  <p>If everything fails, an <code>XPathFactoryConfigurationException</code> will be thrown.</p>
  
 <p>Tip for Trouble-shooting:</p>
  <p>See <code>java.util.Properties.load(java.io.InputStream)</code> for exactly how a property file is parsed.
  In particular, colons ':' need to be escaped in a property file, so make sure the URIs are properly escaped in it.
  For example:</p>
  @code

    http\://java.sun.com/jaxp/xpath/dom=org.acme.DomXPathFactory 
  
@endcode
 @param uri Identifies the underlying object model.    The specification only defines the URI 
 <code>DEFAULT_OBJECT_MODEL_URI</code> ,     <code>
  http://java.sun.com/jaxp/xpath/dom </code>  for the W3C DOM,    the org.w3c.dom package, and implementations are free to introduce other URIs for other object models.
 @return Instance of an <code>XPathFactory</code>.
 @throw XPathFactoryConfigurationExceptionIf the specified object model is unavailable.
 @throw NullPointerExceptionIf <code>uri</code> is <code>null</code>.
 @throw IllegalArgumentExceptionIf <code>uri.length() == 0</code>.
 */
+ (JavaxXmlXpathXPathFactory *)newInstanceWithNSString:(NSString *)uri OBJC_METHOD_FAMILY_NONE;

/*!
 @return Instance of an <code>XPathFactory</code>.
 @throw XPathFactoryConfigurationExceptionIf the specified object model is unavailable.
 @throw NullPointerExceptionIf <code>uri</code> is <code>null</code>.
 @throw IllegalArgumentExceptionIf <code>uri.length() == 0</code>.
 */
+ (JavaxXmlXpathXPathFactory *)newInstanceWithNSString:(NSString *)uri
                                          withNSString:(NSString *)factoryClassName
                               withJavaLangClassLoader:(JavaLangClassLoader *)classLoader OBJC_METHOD_FAMILY_NONE;

/*!
 @brief <p>Return a new <code>XPath</code> using the underlying object
  model determined when the <code>XPathFactory</code> was instantiated.
 </p>
 @return New instance of an <code>XPath</code>.
 */
- (id<JavaxXmlXpathXPath>)newXPath OBJC_METHOD_FAMILY_NONE;

/*!
 @brief <p>Set a feature for this <code>XPathFactory</code> and <code>XPath</code>s created by this factory.
 </p>
  
 <p>
  Feature names are fully qualified <code>java.net.URI</code>s.
  Implementations may define their own features.
  An <code>XPathFactoryConfigurationException</code> is thrown if this <code>XPathFactory</code> or the <code>XPath</code>s
   it creates cannot support the feature.
  It is possible for an <code>XPathFactory</code> to expose a feature value but be unable to change its state. 
 </p>
  
 <p>
  All implementations are required to support the <code>javax.xml.XMLConstants.FEATURE_SECURE_PROCESSING</code> feature.
  When the feature is <code>true</code>, any reference to  an external function is an error.
  Under these conditions, the implementation must not call the <code>XPathFunctionResolver</code>
  and must throw an <code>XPathFunctionException</code>.
  </p>
 @param name Feature name.
 @param value Is feature state  <code> true </code>  or  <code> false </code>
  .
 @throw XPathFactoryConfigurationExceptionif this <code>XPathFactory</code> or the <code>XPath</code>s
    it creates cannot support this feature.
 @throw NullPointerExceptionif <code>name</code> is <code>null</code>.
 */
- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

/*!
 @brief <p>Establish a default function resolver.
 </p>
  
 <p>Any <code>XPath</code> objects constructed from this factory will use
  the specified resolver by default.</p>
  
 <p>A <code>NullPointerException</code> is thrown if <code>resolver</code> is <code>null</code>.</p>
 @param resolver XPath function resolver.
 @throw NullPointerExceptionIf <code>resolver</code> is <code>null</code>.
 */
- (void)setXPathFunctionResolverWithJavaxXmlXpathXPathFunctionResolver:(id<JavaxXmlXpathXPathFunctionResolver>)resolver;

/*!
 @brief <p>Establish a default variable resolver.
 </p>
  
 <p>Any <code>XPath</code> objects constructed from this factory will use
  the specified resolver by default.</p>
  
 <p>A <code>NullPointerException</code> is thrown if <code>resolver</code> is <code>null</code>.</p>
 @param resolver Variable resolver.
 @throw NullPointerExceptionIf <code>resolver</code> is <code>null</code>.
 */
- (void)setXPathVariableResolverWithJavaxXmlXpathXPathVariableResolver:(id<JavaxXmlXpathXPathVariableResolver>)resolver;

#pragma mark Protected

/*!
 @brief <p>Protected constructor as <code>newInstance()</code>, <code>newInstance(String uri)</code>
  or <code>newInstance(String uri, String factoryClassName, ClassLoader classLoader)</code>
  should be used to create a new instance of an <code>XPathFactory</code>.
 </p>
 */
- (instancetype __nonnull)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlXpathXPathFactory)

/*!
 @brief <p>The default property name according to the JAXP spec.
 </p>
 */
inline NSString *JavaxXmlXpathXPathFactory_get_DEFAULT_PROPERTY_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlXpathXPathFactory_DEFAULT_PROPERTY_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlXpathXPathFactory, DEFAULT_PROPERTY_NAME, NSString *)

/*!
 @brief <p>Default Object Model URI.
 </p>
 */
inline NSString *JavaxXmlXpathXPathFactory_get_DEFAULT_OBJECT_MODEL_URI(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaxXmlXpathXPathFactory_DEFAULT_OBJECT_MODEL_URI;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaxXmlXpathXPathFactory, DEFAULT_OBJECT_MODEL_URI, NSString *)

FOUNDATION_EXPORT void JavaxXmlXpathXPathFactory_init(JavaxXmlXpathXPathFactory *self);

FOUNDATION_EXPORT JavaxXmlXpathXPathFactory *JavaxXmlXpathXPathFactory_newInstance(void);

FOUNDATION_EXPORT JavaxXmlXpathXPathFactory *JavaxXmlXpathXPathFactory_newInstanceWithNSString_(NSString *uri);

FOUNDATION_EXPORT JavaxXmlXpathXPathFactory *JavaxXmlXpathXPathFactory_newInstanceWithNSString_withNSString_withJavaLangClassLoader_(NSString *uri, NSString *factoryClassName, JavaLangClassLoader *classLoader);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlXpathXPathFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlXpathXPathFactory")
