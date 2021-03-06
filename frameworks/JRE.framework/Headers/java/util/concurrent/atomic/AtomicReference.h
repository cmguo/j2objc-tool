//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/atomic/AtomicReference.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicReference")
#ifdef RESTRICT_JavaUtilConcurrentAtomicAtomicReference
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicReference 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicReference 1
#endif
#undef RESTRICT_JavaUtilConcurrentAtomicAtomicReference

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentAtomicAtomicReference_) && (INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicReference || defined(INCLUDE_JavaUtilConcurrentAtomicAtomicReference))
#define JavaUtilConcurrentAtomicAtomicReference_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include <JRE/java/io/Serializable.h>

@protocol JavaUtilFunctionBinaryOperator;
@protocol JavaUtilFunctionUnaryOperator;

/*!
 @brief An object reference that may be updated atomically.See the <code>java.util.concurrent.atomic</code>
  package specification for description
  of the properties of atomic variables.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentAtomicAtomicReference : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new AtomicReference with null initial value.
 */
- (instancetype __nonnull)init;

/*!
 @brief Creates a new AtomicReference with the given initial value.
 @param initialValue the initial value
 */
- (instancetype __nonnull)initWithId:(id)initialValue;

/*!
 @brief Atomically updates the current value with the results of
  applying the given function to the current and given values,
  returning the updated value.The function should be
  side-effect-free, since it may be re-applied when attempted
  updates fail due to contention among threads.
 The function
  is applied with the current value as its first argument,
  and the given update as the second argument.
 @param x the update value
 @param accumulatorFunction a side-effect-free function of two arguments
 @return the updated value
 @since 1.8
 */
- (id)accumulateAndGetWithId:(id)x
withJavaUtilFunctionBinaryOperator:(id<JavaUtilFunctionBinaryOperator>)accumulatorFunction;

/*!
 @brief Atomically sets the value to the given updated value
  if the current value <code>==</code> the expected value.
 @param expect the expected value
 @param update the new value
 @return <code>true</code> if successful. False return indicates that
  the actual value was not equal to the expected value.
 */
- (jboolean)compareAndSetWithId:(id)expect
                         withId:(id)update;

/*!
 @brief Gets the current value.
 @return the current value
 */
- (id)get;

/*!
 @brief Atomically updates the current value with the results of
  applying the given function to the current and given values,
  returning the previous value.The function should be
  side-effect-free, since it may be re-applied when attempted
  updates fail due to contention among threads.
 The function
  is applied with the current value as its first argument,
  and the given update as the second argument.
 @param x the update value
 @param accumulatorFunction a side-effect-free function of two arguments
 @return the previous value
 @since 1.8
 */
- (id)getAndAccumulateWithId:(id)x
withJavaUtilFunctionBinaryOperator:(id<JavaUtilFunctionBinaryOperator>)accumulatorFunction;

/*!
 @brief Atomically sets to the given value and returns the old value.
 @param newValue the new value
 @return the previous value
 */
- (id)getAndSetWithId:(id)newValue;

/*!
 @brief Atomically updates the current value with the results of
  applying the given function, returning the previous value.The
  function should be side-effect-free, since it may be re-applied
  when attempted updates fail due to contention among threads.
 @param updateFunction a side-effect-free function
 @return the previous value
 @since 1.8
 */
- (id)getAndUpdateWithJavaUtilFunctionUnaryOperator:(id<JavaUtilFunctionUnaryOperator>)updateFunction;

/*!
 @brief Eventually sets to the given value.
 @param newValue the new value
 @since 1.6
 */
- (void)lazySetWithId:(id)newValue;

/*!
 @brief Sets to the given value.
 @param newValue the new value
 */
- (void)setWithId:(id)newValue;

/*!
 @brief Returns the String representation of the current value.
 @return the String representation of the current value
 */
- (NSString *)description;

/*!
 @brief Atomically updates the current value with the results of
  applying the given function, returning the updated value.The
  function should be side-effect-free, since it may be re-applied
  when attempted updates fail due to contention among threads.
 @param updateFunction a side-effect-free function
 @return the updated value
 @since 1.8
 */
- (id)updateAndGetWithJavaUtilFunctionUnaryOperator:(id<JavaUtilFunctionUnaryOperator>)updateFunction;

/*!
 @brief Atomically sets the value to the given updated value
  if the current value <code>==</code> the expected value.
 <p><a href="package-summary.html#weakCompareAndSet">May fail
  spuriously and does not provide ordering guarantees</a>, so is
  only rarely an appropriate alternative to <code>compareAndSet</code>.
 @param expect the expected value
 @param update the new value
 @return <code>true</code> if successful
 */
- (jboolean)weakCompareAndSetWithId:(id)expect
                             withId:(id)update;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicReference)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicReference_initWithId_(JavaUtilConcurrentAtomicAtomicReference *self, id initialValue);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *new_JavaUtilConcurrentAtomicAtomicReference_initWithId_(id initialValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *create_JavaUtilConcurrentAtomicAtomicReference_initWithId_(id initialValue);

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicReference_init(JavaUtilConcurrentAtomicAtomicReference *self);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *new_JavaUtilConcurrentAtomicAtomicReference_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicReference *create_JavaUtilConcurrentAtomicAtomicReference_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicReference)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicReference")
