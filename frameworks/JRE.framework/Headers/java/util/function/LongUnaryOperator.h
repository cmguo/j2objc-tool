//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/LongUnaryOperator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionLongUnaryOperator")
#ifdef RESTRICT_JavaUtilFunctionLongUnaryOperator
#define INCLUDE_ALL_JavaUtilFunctionLongUnaryOperator 0
#else
#define INCLUDE_ALL_JavaUtilFunctionLongUnaryOperator 1
#endif
#undef RESTRICT_JavaUtilFunctionLongUnaryOperator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionLongUnaryOperator_) && (INCLUDE_ALL_JavaUtilFunctionLongUnaryOperator || defined(INCLUDE_JavaUtilFunctionLongUnaryOperator))
#define JavaUtilFunctionLongUnaryOperator_

/*!
 @brief Represents an operation on a single <code>long</code>-valued operand that produces
  a <code>long</code>-valued result.This is the primitive type specialization of 
 <code>UnaryOperator</code> for <code>long</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>applyAsLong(long)</code>.
 - seealso: UnaryOperator
 @since 1.8
 */
@protocol JavaUtilFunctionLongUnaryOperator < JavaObject >

/*!
 @brief Applies this operator to the given operand.
 @param operand the operand
 @return the operator result
 */
- (jlong)applyAsLongWithLong:(jlong)operand;

/*!
 @brief Returns a composed operator that first applies the <code>before</code>
  operator to its input, and then applies this operator to the result.
 If evaluation of either operator throws an exception, it is relayed to
  the caller of the composed operator.
 @param before the operator to apply before this operator is applied
 @return a composed operator that first applies the <code>before</code>
  operator and then applies this operator
 @throw NullPointerExceptionif before is null
 - seealso: #andThen(LongUnaryOperator)
 */
- (id<JavaUtilFunctionLongUnaryOperator>)composeWithJavaUtilFunctionLongUnaryOperator:(id<JavaUtilFunctionLongUnaryOperator>)before;

/*!
 @brief Returns a composed operator that first applies this operator to
  its input, and then applies the <code>after</code> operator to the result.
 If evaluation of either operator throws an exception, it is relayed to
  the caller of the composed operator.
 @param after the operator to apply after this operator is applied
 @return a composed operator that first applies this operator and then
  applies the <code>after</code> operator
 @throw NullPointerExceptionif after is null
 - seealso: #compose(LongUnaryOperator)
 */
- (id<JavaUtilFunctionLongUnaryOperator>)andThenWithJavaUtilFunctionLongUnaryOperator:(id<JavaUtilFunctionLongUnaryOperator>)after;

@end

@interface JavaUtilFunctionLongUnaryOperator : NSObject

/*!
 @brief Returns a unary operator that always returns its input argument.
 @return a unary operator that always returns its input argument
 */
+ (id<JavaUtilFunctionLongUnaryOperator>)identity;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionLongUnaryOperator)

FOUNDATION_EXPORT id<JavaUtilFunctionLongUnaryOperator> JavaUtilFunctionLongUnaryOperator_composeWithJavaUtilFunctionLongUnaryOperator_(id<JavaUtilFunctionLongUnaryOperator> self, id<JavaUtilFunctionLongUnaryOperator> before);

FOUNDATION_EXPORT id<JavaUtilFunctionLongUnaryOperator> JavaUtilFunctionLongUnaryOperator_andThenWithJavaUtilFunctionLongUnaryOperator_(id<JavaUtilFunctionLongUnaryOperator> self, id<JavaUtilFunctionLongUnaryOperator> after);

FOUNDATION_EXPORT id<JavaUtilFunctionLongUnaryOperator> JavaUtilFunctionLongUnaryOperator_identity(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionLongUnaryOperator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionLongUnaryOperator")
