//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/Consumer.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionConsumer")
#ifdef RESTRICT_JavaUtilFunctionConsumer
#define INCLUDE_ALL_JavaUtilFunctionConsumer 0
#else
#define INCLUDE_ALL_JavaUtilFunctionConsumer 1
#endif
#undef RESTRICT_JavaUtilFunctionConsumer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilFunctionConsumer_) && (INCLUDE_ALL_JavaUtilFunctionConsumer || defined(INCLUDE_JavaUtilFunctionConsumer))
#define JavaUtilFunctionConsumer_

/*!
 @brief Represents an operation that accepts a single input argument and returns no
  result.Unlike most other functional interfaces, <code>Consumer</code> is expected
  to operate via side-effects.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>accept(Object)</code>.
 @since 1.8
 */
@protocol JavaUtilFunctionConsumer < JavaObject >

/*!
 @brief Performs this operation on the given argument.
 @param t the input argument
 */
- (void)acceptWithId:(id)t;

/*!
 @brief Returns a composed <code>Consumer</code> that performs, in sequence, this
  operation followed by the <code>after</code> operation.If performing either
  operation throws an exception, it is relayed to the caller of the
  composed operation.
 If performing this operation throws an exception,
  the <code>after</code> operation will not be performed.
 @param after the operation to perform after this operation
 @return a composed <code>Consumer</code> that performs in sequence this
  operation followed by the <code>after</code> operation
 @throw NullPointerExceptionif <code>after</code> is null
 */
- (id<JavaUtilFunctionConsumer>)andThenWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)after;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionConsumer)

FOUNDATION_EXPORT id<JavaUtilFunctionConsumer> JavaUtilFunctionConsumer_andThenWithJavaUtilFunctionConsumer_(id<JavaUtilFunctionConsumer> self, id<JavaUtilFunctionConsumer> after);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionConsumer)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionConsumer")
