//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/AbstractQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilAbstractQueue")
#ifdef RESTRICT_JavaUtilAbstractQueue
#define INCLUDE_ALL_JavaUtilAbstractQueue 0
#else
#define INCLUDE_ALL_JavaUtilAbstractQueue 1
#endif
#undef RESTRICT_JavaUtilAbstractQueue

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilAbstractQueue_) && (INCLUDE_ALL_JavaUtilAbstractQueue || defined(INCLUDE_JavaUtilAbstractQueue))
#define JavaUtilAbstractQueue_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "java/util/AbstractCollection.h"

#define RESTRICT_JavaUtilQueue 1
#define INCLUDE_JavaUtilQueue 1
#include "java/util/Queue.h"

@protocol JavaUtilCollection;

/*!
 @brief This class provides skeletal implementations of some <code>Queue</code>
  operations.The implementations in this class are appropriate when
  the base implementation does <em>not</em> allow <code>null</code>
  elements.
 Methods <code>add</code>, <code>remove</code>, and 
 <code>element</code> are based on <code>offer</code>, <code>poll</code>
 , and <code>peek</code>, respectively, but throw
  exceptions instead of indicating failure via <code>false</code> or 
 <code>null</code> returns. 
 <p>A <code>Queue</code> implementation that extends this class must
  minimally define a method <code>Queue.offer</code> which does not permit
  insertion of <code>null</code> elements, along with methods <code>Queue.peek</code>
 , <code>Queue.poll</code>, <code>Collection.size</code>, and 
 <code>Collection.iterator</code>.  Typically, additional methods will be
  overridden as well.  If these requirements cannot be met, consider
  instead subclassing <code>AbstractCollection</code>.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilAbstractQueue : JavaUtilAbstractCollection < JavaUtilQueue >

#pragma mark Public

/*!
 @brief Inserts the specified element into this queue if it is possible to do so
  immediately without violating capacity restrictions, returning 
 <code>true</code> upon success and throwing an <code>IllegalStateException</code>
  if no space is currently available.
 <p>This implementation returns <code>true</code> if <code>offer</code> succeeds,
  else throws an <code>IllegalStateException</code>.
 @param e the element to add
 @return <code>true</code> (as specified by <code>Collection.add</code>)
 @throw IllegalStateExceptionif the element cannot be added at this
          time due to capacity restrictions
 @throw ClassCastExceptionif the class of the specified element
          prevents it from being added to this queue
 @throw NullPointerExceptionif the specified element is null and
          this queue does not permit null elements
 @throw IllegalArgumentExceptionif some property of this element
          prevents it from being added to this queue
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief Adds all of the elements in the specified collection to this
  queue.Attempts to addAll of a queue to itself result in 
 <code>IllegalArgumentException</code>.
 Further, the behavior of
  this operation is undefined if the specified collection is
  modified while the operation is in progress. 
 <p>This implementation iterates over the specified collection,
  and adds each element returned by the iterator to this
  queue, in turn.  A runtime exception encountered while
  trying to add an element (including, in particular, a 
 <code>null</code> element) may result in only some of the elements
  having been successfully added when the associated exception is
  thrown.
 @param c collection containing elements to be added to this queue
 @return <code>true</code> if this queue changed as a result of the call
 @throw ClassCastExceptionif the class of an element of the specified
          collection prevents it from being added to this queue
 @throw NullPointerExceptionif the specified collection contains a
          null element and this queue does not permit null elements,
          or if the specified collection is null
 @throw IllegalArgumentExceptionif some property of an element of the
          specified collection prevents it from being added to this
          queue, or if the specified collection is this queue
 @throw IllegalStateExceptionif not all the elements can be added at
          this time due to insertion restrictions
 - seealso: #add(Object)
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Removes all of the elements from this queue.
 The queue will be empty after this call returns. 
 <p>This implementation repeatedly invokes <code>poll</code> until it
  returns <code>null</code>.
 */
- (void)clear;

/*!
 @brief Retrieves, but does not remove, the head of this queue.This method
  differs from <code>peek</code> only in that it throws an exception if
  this queue is empty.
 <p>This implementation returns the result of <code>peek</code>
  unless the queue is empty.
 @return the head of this queue
 @throw NoSuchElementExceptionif this queue is empty
 */
- (id)element;

/*!
 @brief Retrieves and removes the head of this queue.This method differs
  from <code>poll</code> only in that it throws an exception if this
  queue is empty.
 <p>This implementation returns the result of <code>poll</code>
  unless the queue is empty.
 @return the head of this queue
 @throw NoSuchElementExceptionif this queue is empty
 */
- (id)remove;

#pragma mark Protected

/*!
 @brief Constructor for use by subclasses.
 */
- (instancetype __nonnull)init;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilAbstractQueue)

FOUNDATION_EXPORT void JavaUtilAbstractQueue_init(JavaUtilAbstractQueue *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilAbstractQueue)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilAbstractQueue")
