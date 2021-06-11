//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Objects.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilObjects")
#ifdef RESTRICT_JavaUtilObjects
#define INCLUDE_ALL_JavaUtilObjects 0
#else
#define INCLUDE_ALL_JavaUtilObjects 1
#endif
#undef RESTRICT_JavaUtilObjects

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilObjects_) && (INCLUDE_ALL_JavaUtilObjects || defined(INCLUDE_JavaUtilObjects))
#define JavaUtilObjects_

@class IOSObjectArray;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionSupplier;

/*!
 @brief This class consists of <code>static</code> utility methods for operating
  on objects, or checking certain conditions before operation.These utilities
  include <code>null</code>-safe or <code>null</code>-tolerant methods for computing the
  hash code of an object, returning a string for an object, comparing two
  objects, and checking if indexes or sub-range values are out-of-bounds.
 @since 1.7
 */
@interface JavaUtilObjects : NSObject

#pragma mark Public

/*!
 @brief Returns 0 if the arguments are identical and <code>c.compare(a, b)</code>
  otherwise.
 Consequently, if both arguments are <code>null</code> 0
  is returned. 
 <p>Note that if one of the arguments is <code>null</code>, a <code>NullPointerException</code>
  may or may not be thrown depending on
  what ordering policy, if any, the <code>Comparator</code>
  chooses to have for <code>null</code> values.
 @param a an object
 @param b an object to be compared with <code>a</code>
 @param c the <code>Comparator</code>  to compare the first two arguments
 @return 0 if the arguments are identical and <code>c.compare(a, b)</code>
  otherwise.
 - seealso: Comparable
 - seealso: Comparator
 */
+ (jint)compareWithId:(id)a
               withId:(id)b
withJavaUtilComparator:(id<JavaUtilComparator>)c;

/*!
 @brief Returns <code>true</code> if the arguments are deeply equal to each other
  and <code>false</code> otherwise.
 Two <code>null</code> values are deeply equal.  If both arguments are
  arrays, the algorithm in <code>Arrays.deepEquals</code>
  is used to determine equality.
  Otherwise, equality is determined by using the <code>equals</code>
  method of the first argument.
 @param a an object
 @param b an object to be compared with <code>a</code>  for deep equality
 @return <code>true</code> if the arguments are deeply equal to each other
  and <code>false</code> otherwise
 - seealso: Arrays#deepEquals(Object[], Object[])
 - seealso: Objects#equals(Object, Object)
 */
+ (jboolean)deepEqualsWithId:(id)a
                      withId:(id)b;

/*!
 @brief Returns <code>true</code> if the arguments are equal to each other
  and <code>false</code> otherwise.
 Consequently, if both arguments are <code>null</code>, <code>true</code>
  is returned and if exactly one argument is <code>null</code>, <code>false</code>
  is returned.  Otherwise, equality is determined by using
  the <code>equals</code> method of the first
  argument.
 @param a an object
 @param b an object to be compared with <code>a</code>  for equality
 @return <code>true</code> if the arguments are equal to each other
  and <code>false</code> otherwise
 - seealso: Object#equals(Object)
 */
+ (jboolean)equalsWithId:(id)a
                  withId:(id)b;

/*!
 @brief Generates a hash code for a sequence of input values.The hash
  code is generated as if all the input values were placed into an
  array, and that array were hashed by calling <code>Arrays.hashCode(Object[])</code>
 .
 <p>This method is useful for implementing <code>Object.hashCode()</code>
  on objects containing multiple fields. For
  example, if an object that has three fields, <code>x</code>, <code>y</code>
 , and <code>z</code>, one could write: 
 <blockquote>@code

   &#064;Override public int hashCode() {
      return Objects.hash(x, y, z);
  } 
  
@endcode</blockquote>
  
 <b>Warning: When a single object reference is supplied, the returned
  value does not equal the hash code of that object reference.</b> This
  value can be computed by calling <code>hashCode(Object)</code>.
 @param values the values to be hashed
 @return a hash value of the sequence of input values
 - seealso: Arrays#hashCode(Object[])
 - seealso: List#hashCode
 */
+ (jint)hash__WithNSObjectArray:(IOSObjectArray *)values;

/*!
 @brief Returns the hash code of a non-<code>null</code> argument and 0 for
  a <code>null</code> argument.
 @param o an object
 @return the hash code of a non-<code>null</code> argument and 0 for
  a <code>null</code> argument
 - seealso: Object#hashCode
 */
+ (jint)hashCodeWithId:(id)o;

/*!
 @brief Returns <code>true</code> if the provided reference is <code>null</code> otherwise
  returns <code>false</code>.
 @param obj a reference to be checked against <code>null</code>
 @return <code>true</code> if the provided reference is <code>null</code> otherwise 
 <code>false</code>
 - seealso: java.util.function.Predicate
 @since 1.8
 */
+ (jboolean)isNullWithId:(id)obj;

/*!
 @brief Returns <code>true</code> if the provided reference is non-<code>null</code>
  otherwise returns <code>false</code>.
 @param obj a reference to be checked against <code>null</code>
 @return <code>true</code> if the provided reference is non-<code>null</code>
  otherwise <code>false</code>
 - seealso: java.util.function.Predicate
 @since 1.8
 */
+ (jboolean)nonNullWithId:(id)obj;

/*!
 @brief Checks that the specified object reference is not <code>null</code>.This
  method is designed primarily for doing parameter validation in methods
  and constructors, as demonstrated below: 
 <blockquote>@code

  public Foo(Bar bar) {
      this.bar = Objects.requireNonNull(bar);
  } 
  
@endcode</blockquote>
 @param obj the object reference to check for nullity
 @return <code>obj</code> if not <code>null</code>
 @throw NullPointerExceptionif <code>obj</code> is <code>null</code>
 */
+ (id __nonnull)requireNonNullWithId:(id)obj;

/*!
 @brief Checks that the specified object reference is not <code>null</code> and
  throws a customized <code>NullPointerException</code> if it is.This method
  is designed primarily for doing parameter validation in methods and
  constructors with multiple parameters, as demonstrated below: 
 <blockquote>@code

  public Foo(Bar bar, Baz baz) {
      this.bar = Objects.requireNonNull(bar, "bar must not be null");
      this.baz = Objects.requireNonNull(baz, "baz must not be null");
  } 
  
@endcode</blockquote>
 @param obj the object reference to check for nullity
 @param message detail message to be used in the event that a <code>NullPointerException</code>
   is thrown
 @return <code>obj</code> if not <code>null</code>
 @throw NullPointerExceptionif <code>obj</code> is <code>null</code>
 */
+ (id __nonnull)requireNonNullWithId:(id)obj
                        withNSString:(NSString *)message;

/*!
 @brief Checks that the specified object reference is not <code>null</code> and
  throws a customized <code>NullPointerException</code> if it is.
 <p>Unlike the method <code>requireNonNull(Object, String)</code>,
  this method allows creation of the message to be deferred until
  after the null check is made. While this may confer a
  performance advantage in the non-null case, when deciding to
  call this method care should be taken that the costs of
  creating the message supplier are less than the cost of just
  creating the string message directly.
 @param obj the object reference to check for nullity
 @param messageSupplier supplier of the detail message to be  used in the event that a 
 <code>NullPointerException</code>  is thrown
 @return <code>obj</code> if not <code>null</code>
 @throw NullPointerExceptionif <code>obj</code> is <code>null</code>
 @since 1.8
 */
+ (id __nonnull)requireNonNullWithId:(id)obj
        withJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)messageSupplier;

/*!
 @brief Returns the first argument if it is non-<code>null</code> and
  otherwise returns the non-<code>null</code> second argument.
 @param obj an object
 @param defaultObj a non-<code>null</code>  object to return if the first argument
                     is <code>null</code>
 @return the first argument if it is non-<code>null</code> and
         otherwise the second argument if it is non-<code>null</code>
 @throw NullPointerExceptionif both <code>obj</code> is null and
         <code>defaultObj</code> is <code>null</code>
 @since 9
 */
+ (id)requireNonNullElseWithId:(id)obj
                        withId:(id)defaultObj;

/*!
 @brief Returns the first argument if it is non-<code>null</code> and otherwise
  returns the non-<code>null</code> value of <code>supplier.get()</code>.
 @param obj an object
 @param supplier of a non-<code>null</code>  object to return if the first argument
                   is <code>null</code>
 @return the first argument if it is non-<code>null</code> and otherwise
          the value from <code>supplier.get()</code> if it is non-<code>null</code>
 @throw NullPointerExceptionif both <code>obj</code> is null and
         either the <code>supplier</code> is <code>null</code> or
         the <code>supplier.get()</code> value is <code>null</code>
 @since 9
 */
+ (id)requireNonNullElseGetWithId:(id)obj
     withJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)supplier;

/*!
 @brief Returns the result of calling <code>toString</code> for a non-<code>null</code>
  argument and <code>"null"</code> for a <code>null</code> argument.
 @param o an object
 @return the result of calling <code>toString</code> for a non-<code>null</code>
  argument and <code>"null"</code> for a <code>null</code> argument
 - seealso: Object#toString
 - seealso: String#valueOf(Object)
 */
+ (NSString * __nonnull)toStringWithId:(id)o;

/*!
 @brief Returns the result of calling <code>toString</code> on the first
  argument if the first argument is not <code>null</code> and returns
  the second argument otherwise.
 @param o an object
 @param nullDefault string to return if the first argument is         
 <code>null</code>
 @return the result of calling <code>toString</code> on the first
  argument if it is not <code>null</code> and the second argument
  otherwise.
 - seealso: Objects#toString(Object)
 */
+ (NSString * __nonnull)toStringWithId:(id)o
                          withNSString:(NSString *)nullDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilObjects)

FOUNDATION_EXPORT jboolean JavaUtilObjects_equalsWithId_withId_(id a, id b);

FOUNDATION_EXPORT jboolean JavaUtilObjects_deepEqualsWithId_withId_(id a, id b);

FOUNDATION_EXPORT jint JavaUtilObjects_hashCodeWithId_(id o);

FOUNDATION_EXPORT jint JavaUtilObjects_hash__WithNSObjectArray_(IOSObjectArray *values);

FOUNDATION_EXPORT NSString *JavaUtilObjects_toStringWithId_(id o);

FOUNDATION_EXPORT NSString *JavaUtilObjects_toStringWithId_withNSString_(id o, NSString *nullDefault);

FOUNDATION_EXPORT jint JavaUtilObjects_compareWithId_withId_withJavaUtilComparator_(id a, id b, id<JavaUtilComparator> c);

FOUNDATION_EXPORT id JavaUtilObjects_requireNonNullWithId_(id obj);

FOUNDATION_EXPORT id JavaUtilObjects_requireNonNullWithId_withNSString_(id obj, NSString *message);

FOUNDATION_EXPORT jboolean JavaUtilObjects_isNullWithId_(id obj);

FOUNDATION_EXPORT jboolean JavaUtilObjects_nonNullWithId_(id obj);

FOUNDATION_EXPORT id JavaUtilObjects_requireNonNullElseWithId_withId_(id obj, id defaultObj);

FOUNDATION_EXPORT id JavaUtilObjects_requireNonNullElseGetWithId_withJavaUtilFunctionSupplier_(id obj, id<JavaUtilFunctionSupplier> supplier);

FOUNDATION_EXPORT id JavaUtilObjects_requireNonNullWithId_withJavaUtilFunctionSupplier_(id obj, id<JavaUtilFunctionSupplier> messageSupplier);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilObjects)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilObjects")
