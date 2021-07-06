//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/w3c/dom/NameList.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_OrgW3cDomNameList")
#ifdef RESTRICT_OrgW3cDomNameList
#define INCLUDE_ALL_OrgW3cDomNameList 0
#else
#define INCLUDE_ALL_OrgW3cDomNameList 1
#endif
#undef RESTRICT_OrgW3cDomNameList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (OrgW3cDomNameList_) && (INCLUDE_ALL_OrgW3cDomNameList || defined(INCLUDE_OrgW3cDomNameList))
#define OrgW3cDomNameList_

/*!
 @brief The <code>NameList</code> interface provides the abstraction of an ordered
  collection of parallel pairs of name and namespace values (which could be
  null values), without defining or constraining how this collection is
  implemented.The items in the <code>NameList</code> are accessible via an
  integral index, starting from 0.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 @since DOM Level 3
 */
@protocol OrgW3cDomNameList < JavaObject >

/*!
 @brief Returns the <code>index</code>th name item in the collection.
 @param index Index into the collection.
 @return The name at the <code>index</code>th position in the
    <code>NameList</code>, or <code>null</code> if there is no name for
    the specified index or if the index is out of range.
 */
- (NSString *)getNameWithInt:(jint)index;

/*!
 @brief Returns the <code>index</code>th namespaceURI item in the collection.
 @param index Index into the collection.
 @return The namespace URI at the <code>index</code>th position in the
    <code>NameList</code>, or <code>null</code> if there is no name for
    the specified index or if the index is out of range.
 */
- (NSString *)getNamespaceURIWithInt:(jint)index;

/*!
 @brief The number of pairs (name and namespaceURI) in the list.The range of
  valid child node indices is 0 to <code>length-1</code> inclusive.
 */
- (jint)getLength;

/*!
 @brief Test if a name is part of this <code>NameList</code>.
 @param str The name to look for.
 @return <code>true</code> if the name has been found,
    <code>false</code> otherwise.
 */
- (jboolean)containsWithNSString:(NSString *)str;

/*!
 @brief Test if the pair namespaceURI/name is part of this 
 <code>NameList</code>.
 @param namespaceURI The namespace URI to look for.
 @param name The name to look for.
 @return <code>true</code> if the pair namespaceURI/name has been
    found, <code>false</code> otherwise.
 */
- (jboolean)containsNSWithNSString:(NSString *)namespaceURI
                      withNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomNameList)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomNameList)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomNameList")
