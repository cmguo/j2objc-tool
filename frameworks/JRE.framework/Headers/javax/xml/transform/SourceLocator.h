//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/SourceLocator.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformSourceLocator")
#ifdef RESTRICT_JavaxXmlTransformSourceLocator
#define INCLUDE_ALL_JavaxXmlTransformSourceLocator 0
#else
#define INCLUDE_ALL_JavaxXmlTransformSourceLocator 1
#endif
#undef RESTRICT_JavaxXmlTransformSourceLocator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxXmlTransformSourceLocator_) && (INCLUDE_ALL_JavaxXmlTransformSourceLocator || defined(INCLUDE_JavaxXmlTransformSourceLocator))
#define JavaxXmlTransformSourceLocator_

/*!
 @brief This interface is primarily for the purposes of reporting where
  an error occurred in the XML source or transformation instructions.
 */
@protocol JavaxXmlTransformSourceLocator < JavaObject >

/*!
 @brief Return the public identifier for the current document event.
 <p>The return value is the public identifier of the document
  entity or of the external parsed entity in which the markup that
  triggered the event appears.</p>
 @return A string containing the public identifier, or
          null if none is available.
 - seealso: #getSystemId
 */
- (NSString *)getPublicId;

/*!
 @brief Return the system identifier for the current document event.
 <p>The return value is the system identifier of the document
  entity or of the external parsed entity in which the markup that
  triggered the event appears.</p>
  
 <p>If the system identifier is a URL, the parser must resolve it
  fully before passing it to the application.</p>
 @return A string containing the system identifier, or null
          if none is available.
 - seealso: #getPublicId
 */
- (NSString *)getSystemId;

/*!
 @brief Return the line number where the current document event ends.
 <p><strong>Warning:</strong> The return value from the method
  is intended only as an approximation for the sake of error
  reporting; it is not intended to provide sufficient information
  to edit the character content of the original XML document.</p>
  
 <p>The return value is an approximation of the line number
  in the document entity or external parsed entity where the
  markup that triggered the event appears.</p>
 @return The line number, or -1 if none is available.
 - seealso: #getColumnNumber
 */
- (jint)getLineNumber;

/*!
 @brief Return the character position where the current document event ends.
 <p><strong>Warning:</strong> The return value from the method
  is intended only as an approximation for the sake of error
  reporting; it is not intended to provide sufficient information
  to edit the character content of the original XML document.</p>
  
 <p>The return value is an approximation of the column number
  in the document entity or external parsed entity where the
  markup that triggered the event appears.</p>
 @return The column number, or -1 if none is available.
 - seealso: #getLineNumber
 */
- (jint)getColumnNumber;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformSourceLocator)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformSourceLocator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformSourceLocator")
