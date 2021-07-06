//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/AbstractExecutorService.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentAbstractExecutorService")
#ifdef RESTRICT_JavaUtilConcurrentAbstractExecutorService
#define INCLUDE_ALL_JavaUtilConcurrentAbstractExecutorService 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentAbstractExecutorService 1
#endif
#undef RESTRICT_JavaUtilConcurrentAbstractExecutorService

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentAbstractExecutorService_) && (INCLUDE_ALL_JavaUtilConcurrentAbstractExecutorService || defined(INCLUDE_JavaUtilConcurrentAbstractExecutorService))
#define JavaUtilConcurrentAbstractExecutorService_

#define RESTRICT_JavaUtilConcurrentExecutorService 1
#define INCLUDE_JavaUtilConcurrentExecutorService 1
#include <JRE/java/util/concurrent/ExecutorService.h>

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilConcurrentRunnableFuture;
@protocol JavaUtilList;

/*!
 @brief Provides default implementations of <code>ExecutorService</code>
  execution methods.This class implements the <code>submit</code>,
  <code>invokeAny</code> and <code>invokeAll</code> methods using a 
 <code>RunnableFuture</code> returned by <code>newTaskFor</code>, which defaults
  to the <code>FutureTask</code> class provided in this package.
 For example,
  the implementation of <code>submit(Runnable)</code> creates an
  associated <code>RunnableFuture</code> that is executed and
  returned. Subclasses may override the <code>newTaskFor</code> methods
  to return <code>RunnableFuture</code> implementations other than 
 <code>FutureTask</code>.
  
 <p><b>Extension example</b>. Here is a sketch of a class
  that customizes <code>ThreadPoolExecutor</code> to use
  a <code>CustomTask</code> class instead of the default <code>FutureTask</code>:
  @code
  public class CustomThreadPoolExecutor extends ThreadPoolExecutor {
    static class CustomTask<V> implements RunnableFuture<V> {...}
    protected <V> RunnableFuture<V> newTaskFor(Callable<V> c) {
        return new CustomTask<V>(c);
    }
    protected <V> RunnableFuture<V> newTaskFor(Runnable r, V v) {
        return new CustomTask<V>(r, v);
    }
    // ... add constructors, etc.
  }
 
@endcode
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentAbstractExecutorService : NSObject < JavaUtilConcurrentExecutorService >

#pragma mark Public

- (instancetype __nonnull)init;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                                           withLong:(jlong)timeout
                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                             withLong:(jlong)timeout
       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @throw RejectedExecutionException
 @throw NullPointerException
 */
- (id<JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

/*!
 @throw RejectedExecutionException
 @throw NullPointerException
 */
- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

/*!
 @throw RejectedExecutionException
 @throw NullPointerException
 */
- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                    withId:(id)result;

#pragma mark Protected

/*!
 @brief Returns a <code>RunnableFuture</code> for the given callable task.
 @param callable the callable task being wrapped
 @return a <code>RunnableFuture</code> which, when run, will call the
  underlying callable and which, as a <code>Future</code>, will yield
  the callable's result as its result and provide for
  cancellation of the underlying task
 @since 1.6
 */
- (id<JavaUtilConcurrentRunnableFuture>)newTaskForWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns a <code>RunnableFuture</code> for the given runnable and default
  value.
 @param runnable the runnable task being wrapped
 @param value the default value for the returned future
 @return a <code>RunnableFuture</code> which, when run, will run the
  underlying runnable and which, as a <code>Future</code>, will yield
  the given value as its result and provide for cancellation of
  the underlying task
 @since 1.6
 */
- (id<JavaUtilConcurrentRunnableFuture>)newTaskForWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                                                withId:(id)value OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAbstractExecutorService)

FOUNDATION_EXPORT void JavaUtilConcurrentAbstractExecutorService_init(JavaUtilConcurrentAbstractExecutorService *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAbstractExecutorService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentAbstractExecutorService")
