//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/dom/DOMLocator.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformDomDOMLocator")
#ifdef RESTRICT_JavaxXmlTransformDomDOMLocator
#define INCLUDE_ALL_JavaxXmlTransformDomDOMLocator 0
#else
#define INCLUDE_ALL_JavaxXmlTransformDomDOMLocator 1
#endif
#undef RESTRICT_JavaxXmlTransformDomDOMLocator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlTransformDomDOMLocator_) && (INCLUDE_ALL_JavaxXmlTransformDomDOMLocator || defined(INCLUDE_JavaxXmlTransformDomDOMLocator))
#define JavaxXmlTransformDomDOMLocator_

#define RESTRICT_JavaxXmlTransformSourceLocator 1
#define INCLUDE_JavaxXmlTransformSourceLocator 1
#include <JRE/javax/xml/transform/SourceLocator.h>

@protocol OrgW3cDomNode;

/*!
 @brief Indicates the position of a node in a source DOM, intended
  primarily for error reporting.To use a DOMLocator, the receiver of an
  error must downcast the <code>javax.xml.transform.SourceLocator</code>
  object returned by an exception.
 A <code>javax.xml.transform.Transformer</code>
  may use this object for purposes other than error reporting, for instance,
  to indicate the source node that originated a result node.
 */
@protocol JavaxXmlTransformDomDOMLocator < JavaxXmlTransformSourceLocator, JavaObject >

/*!
 @brief Return the node where the event occurred.
 @return The node that is the location for the event.
 */
- (id<OrgW3cDomNode>)getOriginatingNode;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformDomDOMLocator)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformDomDOMLocator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformDomDOMLocator")
