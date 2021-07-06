//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/IntUnaryOperator.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionIntUnaryOperator")
#ifdef RESTRICT_JavaUtilFunctionIntUnaryOperator
#define INCLUDE_ALL_JavaUtilFunctionIntUnaryOperator 0
#else
#define INCLUDE_ALL_JavaUtilFunctionIntUnaryOperator 1
#endif
#undef RESTRICT_JavaUtilFunctionIntUnaryOperator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionIntUnaryOperator_) && (INCLUDE_ALL_JavaUtilFunctionIntUnaryOperator || defined(INCLUDE_JavaUtilFunctionIntUnaryOperator))
#define JavaUtilFunctionIntUnaryOperator_

/*!
 @brief Represents an operation on a single <code>int</code>-valued operand that produces
  an <code>int</code>-valued result.This is the primitive type specialization of 
 <code>UnaryOperator</code> for <code>int</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>applyAsInt(int)</code>.
 - seealso: UnaryOperator
 @since 1.8
 */
@protocol JavaUtilFunctionIntUnaryOperator < JavaObject >

/*!
 @brief Applies this operator to the given operand.
 @param operand the operand
 @return the operator result
 */
- (jint)applyAsIntWithInt:(jint)operand;

/*!
 @brief Returns a composed operator that first applies the <code>before</code>
  operator to its input, and then applies this operator to the result.
 If evaluation of either operator throws an exception, it is relayed to
  the caller of the composed operator.
 @param before the operator to apply before this operator is applied
 @return a composed operator that first applies the <code>before</code>
  operator and then applies this operator
 @throw NullPointerExceptionif before is null
 - seealso: #andThen(IntUnaryOperator)
 */
- (id<JavaUtilFunctionIntUnaryOperator>)composeWithJavaUtilFunctionIntUnaryOperator:(id<JavaUtilFunctionIntUnaryOperator>)before;

/*!
 @brief Returns a composed operator that first applies this operator to
  its input, and then applies the <code>after</code> operator to the result.
 If evaluation of either operator throws an exception, it is relayed to
  the caller of the composed operator.
 @param after the operator to apply after this operator is applied
 @return a composed operator that first applies this operator and then
  applies the <code>after</code> operator
 @throw NullPointerExceptionif after is null
 - seealso: #compose(IntUnaryOperator)
 */
- (id<JavaUtilFunctionIntUnaryOperator>)andThenWithJavaUtilFunctionIntUnaryOperator:(id<JavaUtilFunctionIntUnaryOperator>)after;

@end

@interface JavaUtilFunctionIntUnaryOperator : NSObject

/*!
 @brief Returns a unary operator that always returns its input argument.
 @return a unary operator that always returns its input argument
 */
+ (id<JavaUtilFunctionIntUnaryOperator>)identity;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionIntUnaryOperator)

FOUNDATION_EXPORT id<JavaUtilFunctionIntUnaryOperator> JavaUtilFunctionIntUnaryOperator_composeWithJavaUtilFunctionIntUnaryOperator_(id<JavaUtilFunctionIntUnaryOperator> self, id<JavaUtilFunctionIntUnaryOperator> before);

FOUNDATION_EXPORT id<JavaUtilFunctionIntUnaryOperator> JavaUtilFunctionIntUnaryOperator_andThenWithJavaUtilFunctionIntUnaryOperator_(id<JavaUtilFunctionIntUnaryOperator> self, id<JavaUtilFunctionIntUnaryOperator> after);

FOUNDATION_EXPORT id<JavaUtilFunctionIntUnaryOperator> JavaUtilFunctionIntUnaryOperator_identity(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionIntUnaryOperator)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionIntUnaryOperator")
