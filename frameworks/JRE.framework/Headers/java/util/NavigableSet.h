//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/NavigableSet.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaUtilNavigableSet")
#ifdef RESTRICT_JavaUtilNavigableSet
#define INCLUDE_ALL_JavaUtilNavigableSet 0
#else
#define INCLUDE_ALL_JavaUtilNavigableSet 1
#endif
#undef RESTRICT_JavaUtilNavigableSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilNavigableSet_) && (INCLUDE_ALL_JavaUtilNavigableSet || defined(INCLUDE_JavaUtilNavigableSet))
#define JavaUtilNavigableSet_

#define RESTRICT_JavaUtilSortedSet 1
#define INCLUDE_JavaUtilSortedSet 1
#include <JRE/java/util/SortedSet.h>

@protocol JavaUtilIterator;

/*!
 @brief A <code>SortedSet</code> extended with navigation methods reporting
  closest matches for given search targets.Methods <code>lower</code>,
  <code>floor</code>, <code>ceiling</code>, and <code>higher</code> return elements
  respectively less than, less than or equal, greater than or equal,
  and greater than a given element, returning <code>null</code> if there
  is no such element.
 <p>A <code>NavigableSet</code> may be accessed and traversed in either
  ascending or descending order.  The <code>descendingSet</code> method
  returns a view of the set with the senses of all relational and
  directional methods inverted. The performance of ascending
  operations and views is likely to be faster than that of descending
  ones.  This interface additionally defines methods <code>pollFirst</code>
  and <code>pollLast</code> that return and remove the lowest
  and highest element, if one exists, else returning <code>null</code>.
  Methods 
 <code>subSet(E, boolean, E, boolean)</code>,
  <code>headSet(E, boolean)</code>, and 
 <code>tailSet(E, boolean)</code>
  differ from the like-named <code>SortedSet</code> methods in accepting
  additional arguments describing whether lower and upper bounds are
  inclusive versus exclusive.  Subsets of any <code>NavigableSet</code>
  must implement the <code>NavigableSet</code> interface. 
 <p>The return values of navigation methods may be ambiguous in
  implementations that permit <code>null</code> elements. However, even
  in this case the result can be disambiguated by checking 
 <code>contains(null)</code>. To avoid such issues, implementations of
  this interface are encouraged to <em>not</em> permit insertion of 
 <code>null</code> elements. (Note that sorted sets of <code>Comparable</code>
  elements intrinsically do not permit <code>null</code>.)
  
 <p>Methods
  <code>subSet(E, E)</code>,
  <code>headSet(E)</code>, and 
 <code>tailSet(E)</code>
  are specified to return <code>SortedSet</code> to allow existing
  implementations of <code>SortedSet</code> to be compatibly retrofitted to
  implement <code>NavigableSet</code>, but extensions and implementations
  of this interface are encouraged to override these methods to return 
 <code>NavigableSet</code>.
 @author Doug Lea
 @author Josh Bloch
 @since 1.6
 */
@protocol JavaUtilNavigableSet < JavaUtilSortedSet, JavaObject >

/*!
 @brief Returns the greatest element in this set strictly less than the
  given element, or <code>null</code> if there is no such element.
 @param e the value to match
 @return the greatest element less than <code>e</code>,
          or <code>null</code> if there is no such element
 @throw ClassCastExceptionif the specified element cannot be
          compared with the elements currently in the set
 @throw NullPointerExceptionif the specified element is null
          and this set does not permit null elements
 */
- (id)lowerWithId:(id)e;

/*!
 @brief Returns the greatest element in this set less than or equal to
  the given element, or <code>null</code> if there is no such element.
 @param e the value to match
 @return the greatest element less than or equal to <code>e</code>,
          or <code>null</code> if there is no such element
 @throw ClassCastExceptionif the specified element cannot be
          compared with the elements currently in the set
 @throw NullPointerExceptionif the specified element is null
          and this set does not permit null elements
 */
- (id)floorWithId:(id)e;

/*!
 @brief Returns the least element in this set greater than or equal to
  the given element, or <code>null</code> if there is no such element.
 @param e the value to match
 @return the least element greater than or equal to <code>e</code>,
          or <code>null</code> if there is no such element
 @throw ClassCastExceptionif the specified element cannot be
          compared with the elements currently in the set
 @throw NullPointerExceptionif the specified element is null
          and this set does not permit null elements
 */
- (id)ceilingWithId:(id)e;

/*!
 @brief Returns the least element in this set strictly greater than the
  given element, or <code>null</code> if there is no such element.
 @param e the value to match
 @return the least element greater than <code>e</code>,
          or <code>null</code> if there is no such element
 @throw ClassCastExceptionif the specified element cannot be
          compared with the elements currently in the set
 @throw NullPointerExceptionif the specified element is null
          and this set does not permit null elements
 */
- (id)higherWithId:(id)e;

/*!
 @brief Retrieves and removes the first (lowest) element,
  or returns <code>null</code> if this set is empty.
 @return the first element, or <code>null</code> if this set is empty
 */
- (id)pollFirst;

/*!
 @brief Retrieves and removes the last (highest) element,
  or returns <code>null</code> if this set is empty.
 @return the last element, or <code>null</code> if this set is empty
 */
- (id)pollLast;

/*!
 @brief Returns an iterator over the elements in this set, in ascending order.
 @return an iterator over the elements in this set, in ascending order
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Returns a reverse order view of the elements contained in this set.
 The descending set is backed by this set, so changes to the set are
  reflected in the descending set, and vice-versa.  If either set is
  modified while an iteration over either set is in progress (except
  through the iterator's own <code>remove</code> operation), the results of
  the iteration are undefined. 
 <p>The returned set has an ordering equivalent to 
 <code>Collections.reverseOrder</code><code>(comparator())</code>.
  The expression <code>s.descendingSet().descendingSet()</code> returns a
  view of <code>s</code> essentially equivalent to <code>s</code>.
 @return a reverse order view of this set
 */
- (id<JavaUtilNavigableSet>)descendingSet;

/*!
 @brief Returns an iterator over the elements in this set, in descending order.
 Equivalent in effect to <code>descendingSet().iterator()</code>.
 @return an iterator over the elements in this set, in descending order
 */
- (id<JavaUtilIterator>)descendingIterator;

/*!
 @brief Returns a view of the portion of this set whose elements range from 
 <code>fromElement</code> to <code>toElement</code>.If <code>fromElement</code> and 
 <code>toElement</code> are equal, the returned set is empty unless <code>fromInclusive</code>
  and <code>toInclusive</code> are both true.
 The returned set
  is backed by this set, so changes in the returned set are reflected in
  this set, and vice-versa.  The returned set supports all optional set
  operations that this set supports. 
 <p>The returned set will throw an <code>IllegalArgumentException</code>
  on an attempt to insert an element outside its range.
 @param fromElement low endpoint of the returned set
 @param fromInclusive<code>true</code>  if the low endpoint         is to be included in the returned view
 @param toElement high endpoint of the returned set
 @param toInclusive<code>true</code>  if the high endpoint         is to be included in the returned view
 @return a view of the portion of this set whose elements range from
          <code>fromElement</code>, inclusive, to <code>toElement</code>, exclusive
 @throw ClassCastExceptionif <code>fromElement</code> and
          <code>toElement</code> cannot be compared to one another using this
          set's comparator (or, if the set has no comparator, using
          natural ordering).  Implementations may, but are not required
          to, throw this exception if <code>fromElement</code> or
          <code>toElement</code> cannot be compared to elements currently in
          the set.
 @throw NullPointerExceptionif <code>fromElement</code> or
          <code>toElement</code> is null and this set does
          not permit null elements
 @throw IllegalArgumentExceptionif <code>fromElement</code> is
          greater than <code>toElement</code>; or if this set itself
          has a restricted range, and <code>fromElement</code> or
          <code>toElement</code> lies outside the bounds of the range.
 */
- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toElement
                             withBoolean:(jboolean)toInclusive;

/*!
 @brief Returns a view of the portion of this set whose elements are less than
  (or equal to, if <code>inclusive</code> is true) <code>toElement</code>.The
  returned set is backed by this set, so changes in the returned set are
  reflected in this set, and vice-versa.
 The returned set supports all
  optional set operations that this set supports. 
 <p>The returned set will throw an <code>IllegalArgumentException</code>
  on an attempt to insert an element outside its range.
 @param toElement high endpoint of the returned set
 @param inclusive<code>true</code>  if the high endpoint         is to be included in the returned view
 @return a view of the portion of this set whose elements are less than
          (or equal to, if <code>inclusive</code> is true) <code>toElement</code>
 @throw ClassCastExceptionif <code>toElement</code> is not compatible
          with this set's comparator (or, if the set has no comparator,
          if <code>toElement</code> does not implement <code>Comparable</code>).
          Implementations may, but are not required to, throw this
          exception if <code>toElement</code> cannot be compared to elements
          currently in the set.
 @throw NullPointerExceptionif <code>toElement</code> is null and
          this set does not permit null elements
 @throw IllegalArgumentExceptionif this set itself has a
          restricted range, and <code>toElement</code> lies outside the
          bounds of the range
 */
- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement
                              withBoolean:(jboolean)inclusive;

/*!
 @brief Returns a view of the portion of this set whose elements are greater
  than (or equal to, if <code>inclusive</code> is true) <code>fromElement</code>.
 The returned set is backed by this set, so changes in the returned set
  are reflected in this set, and vice-versa.  The returned set supports
  all optional set operations that this set supports. 
 <p>The returned set will throw an <code>IllegalArgumentException</code>
  on an attempt to insert an element outside its range.
 @param fromElement low endpoint of the returned set
 @param inclusive<code>true</code>  if the low endpoint         is to be included in the returned view
 @return a view of the portion of this set whose elements are greater
          than or equal to <code>fromElement</code>
 @throw ClassCastExceptionif <code>fromElement</code> is not compatible
          with this set's comparator (or, if the set has no comparator,
          if <code>fromElement</code> does not implement <code>Comparable</code>).
          Implementations may, but are not required to, throw this
          exception if <code>fromElement</code> cannot be compared to elements
          currently in the set.
 @throw NullPointerExceptionif <code>fromElement</code> is null
          and this set does not permit null elements
 @throw IllegalArgumentExceptionif this set itself has a
          restricted range, and <code>fromElement</code> lies outside the
          bounds of the range
 */
- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement
                              withBoolean:(jboolean)inclusive;

/*!
 @brief <p>Equivalent to <code>subSet(fromElement, true, toElement, false)</code>.
 @throw ClassCastException
 @throw NullPointerException
 @throw IllegalArgumentException
 */
- (id<JavaUtilSortedSet>)subSetWithId:(id)fromElement
                               withId:(id)toElement;

/*!
 @brief <p>Equivalent to <code>headSet(toElement, false)</code>.
 @throw ClassCastException
 @throw NullPointerException
 @throw IllegalArgumentException
 */
- (id<JavaUtilSortedSet>)headSetWithId:(id)toElement;

/*!
 @brief <p>Equivalent to <code>tailSet(fromElement, true)</code>.
 @throw ClassCastException
 @throw NullPointerException
 @throw IllegalArgumentException
 */
- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromElement;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilNavigableSet)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilNavigableSet)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilNavigableSet")
