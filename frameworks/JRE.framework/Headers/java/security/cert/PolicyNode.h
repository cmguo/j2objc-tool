//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/PolicyNode.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertPolicyNode")
#ifdef RESTRICT_JavaSecurityCertPolicyNode
#define INCLUDE_ALL_JavaSecurityCertPolicyNode 0
#else
#define INCLUDE_ALL_JavaSecurityCertPolicyNode 1
#endif
#undef RESTRICT_JavaSecurityCertPolicyNode

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertPolicyNode_) && (INCLUDE_ALL_JavaSecurityCertPolicyNode || defined(INCLUDE_JavaSecurityCertPolicyNode))
#define JavaSecurityCertPolicyNode_

@protocol JavaUtilIterator;
@protocol JavaUtilSet;

/*!
 @brief An immutable valid policy tree node as defined by the PKIX certification
  path validation algorithm.
 <p>One of the outputs of the PKIX certification path validation
  algorithm is a valid policy tree, which includes the policies that
  were determined to be valid, how this determination was reached,
  and any policy qualifiers encountered. This tree is of depth 
 <i>n</i>, where <i>n</i> is the length of the certification
  path that has been validated. 
 <p>Most applications will not need to examine the valid policy tree.
  They can achieve their policy processing goals by setting the
  policy-related parameters in <code>PKIXParameters</code>. However,
  the valid policy tree is available for more sophisticated applications,
  especially those that process policy qualifiers. 
 <p><code>PKIXCertPathValidatorResult.getPolicyTree</code>
  returns the root node of the
  valid policy tree. The tree can be traversed using the 
 <code>getChildren</code> and <code>getParent</code> methods.
  Data about a particular node can be retrieved using other methods of 
 <code>PolicyNode</code>.
  
 <p><b>Concurrent Access</b>
  <p>All <code>PolicyNode</code> objects must be immutable and
  thread-safe. Multiple threads may concurrently invoke the methods defined
  in this class on a single <code>PolicyNode</code> object (or more than one)
  with no ill effects. This stipulation applies to all public fields and
  methods of this class and any added or overridden by subclasses.
 @since 1.4
 @author Sean Mullan
 */
@protocol JavaSecurityCertPolicyNode < JavaObject >

/*!
 @brief Returns the parent of this node, or <code>null</code> if this is the
  root node.
 @return the parent of this node, or <code>null</code> if this is the
  root node
 */
- (id<JavaSecurityCertPolicyNode>)getParent;

/*!
 @brief Returns an iterator over the children of this node.Any attempts to
  modify the children of this node through the 
 <code>Iterator</code>'s remove method must throw an 
 <code>UnsupportedOperationException</code>.
 @return an iterator over the children of this node
 */
- (id<JavaUtilIterator>)getChildren;

/*!
 @brief Returns the depth of this node in the valid policy tree.
 @return the depth of this node (0 for the root node, 1 for its
  children, and so on)
 */
- (jint)getDepth;

/*!
 @brief Returns the valid policy represented by this node.
 @return the <code>String</code> OID of the valid policy
  represented by this node. For the root node, this method always returns
  the special anyPolicy OID: "2.5.29.32.0".
 */
- (NSString *)getValidPolicy;

/*!
 @brief Returns the set of policy qualifiers associated with the
  valid policy represented by this node.
 @return an immutable <code>Set</code> of 
 <code>PolicyQualifierInfo</code>s. For the root node, this
  is always an empty <code>Set</code>.
 */
- (id<JavaUtilSet>)getPolicyQualifiers;

/*!
 @brief Returns the set of expected policies that would satisfy this
  node's valid policy in the next certificate to be processed.
 @return an immutable <code>Set</code> of expected policy 
 <code>String</code> OIDs. For the root node, this method
  always returns a <code>Set</code> with one element, the
  special anyPolicy OID: "2.5.29.32.0".
 */
- (id<JavaUtilSet>)getExpectedPolicies;

/*!
 @brief Returns the criticality indicator of the certificate policy extension
  in the most recently processed certificate.
 @return <code>true</code> if extension marked critical, 
 <code>false</code> otherwise. For the root node, <code>false</code>
  is always returned.
 */
- (jboolean)isCritical;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertPolicyNode)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertPolicyNode)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertPolicyNode")
