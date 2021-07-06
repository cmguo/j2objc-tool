//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/w3c/dom/UserDataHandler.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_OrgW3cDomUserDataHandler")
#ifdef RESTRICT_OrgW3cDomUserDataHandler
#define INCLUDE_ALL_OrgW3cDomUserDataHandler 0
#else
#define INCLUDE_ALL_OrgW3cDomUserDataHandler 1
#endif
#undef RESTRICT_OrgW3cDomUserDataHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgW3cDomUserDataHandler_) && (INCLUDE_ALL_OrgW3cDomUserDataHandler || defined(INCLUDE_OrgW3cDomUserDataHandler))
#define OrgW3cDomUserDataHandler_

@protocol OrgW3cDomNode;

/*!
 @brief When associating an object to a key on a node using 
 <code>Node.setUserData()</code> the application can provide a handler
  that gets called when the node the object is associated to is being
  cloned, imported, or renamed.This can be used by the application to
  implement various behaviors regarding the data it associates to the DOM
  nodes.
 This interface defines that handler. 
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 @since DOM Level 3
 */
@protocol OrgW3cDomUserDataHandler < JavaObject >

/*!
 @brief This method is called whenever the node for which this handler is
  registered is imported or cloned.
 <br> DOM applications must not raise exceptions in a 
 <code>UserDataHandler</code>. The effect of throwing exceptions from
  the handler is DOM implementation dependent.
 @param operation Specifies the type of operation that is being    performed on the node.
 @param key Specifies the key for which this handler is being called.
 @param data Specifies the data for which this handler is being called.
 @param src Specifies the node being cloned, adopted, imported, or    renamed. This is 
  <code> null </code>  when the node is being deleted.
 @param dst Specifies the node newly created if any, or    
  <code> null </code> .
 */
- (void)handleWithShort:(jshort)operation
           withNSString:(NSString *)key
                 withId:(id)data
      withOrgW3cDomNode:(id<OrgW3cDomNode>)src
      withOrgW3cDomNode:(id<OrgW3cDomNode>)dst;

@end

@interface OrgW3cDomUserDataHandler : NSObject
@property (readonly, class) jshort NODE_CLONED NS_SWIFT_NAME(NODE_CLONED);
@property (readonly, class) jshort NODE_IMPORTED NS_SWIFT_NAME(NODE_IMPORTED);
@property (readonly, class) jshort NODE_DELETED NS_SWIFT_NAME(NODE_DELETED);
@property (readonly, class) jshort NODE_RENAMED NS_SWIFT_NAME(NODE_RENAMED);
@property (readonly, class) jshort NODE_ADOPTED NS_SWIFT_NAME(NODE_ADOPTED);

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomUserDataHandler)

/*!
 @brief The node is cloned, using <code>Node.cloneNode()</code>.
 */
inline jshort OrgW3cDomUserDataHandler_get_NODE_CLONED(void);
#define OrgW3cDomUserDataHandler_NODE_CLONED 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomUserDataHandler, NODE_CLONED, jshort)

/*!
 @brief The node is imported, using <code>Document.importNode()</code>.
 */
inline jshort OrgW3cDomUserDataHandler_get_NODE_IMPORTED(void);
#define OrgW3cDomUserDataHandler_NODE_IMPORTED 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomUserDataHandler, NODE_IMPORTED, jshort)

/*!
 @brief The node is deleted.
 <p><b>Note:</b> This may not be supported or may not be reliable in
  certain environments, such as Java, where the implementation has no
  real control over when objects are actually deleted.
 */
inline jshort OrgW3cDomUserDataHandler_get_NODE_DELETED(void);
#define OrgW3cDomUserDataHandler_NODE_DELETED 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomUserDataHandler, NODE_DELETED, jshort)

/*!
 @brief The node is renamed, using <code>Document.renameNode()</code>.
 */
inline jshort OrgW3cDomUserDataHandler_get_NODE_RENAMED(void);
#define OrgW3cDomUserDataHandler_NODE_RENAMED 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomUserDataHandler, NODE_RENAMED, jshort)

/*!
 @brief The node is adopted, using <code>Document.adoptNode()</code>.
 */
inline jshort OrgW3cDomUserDataHandler_get_NODE_ADOPTED(void);
#define OrgW3cDomUserDataHandler_NODE_ADOPTED 5
J2OBJC_STATIC_FIELD_CONSTANT(OrgW3cDomUserDataHandler, NODE_ADOPTED, jshort)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomUserDataHandler)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomUserDataHandler")
