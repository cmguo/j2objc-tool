//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/concurrent/ExecutorService.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentExecutorService")
#ifdef RESTRICT_JavaUtilConcurrentExecutorService
#define INCLUDE_ALL_JavaUtilConcurrentExecutorService 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentExecutorService 1
#endif
#undef RESTRICT_JavaUtilConcurrentExecutorService

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilConcurrentExecutorService_) && (INCLUDE_ALL_JavaUtilConcurrentExecutorService || defined(INCLUDE_JavaUtilConcurrentExecutorService))
#define JavaUtilConcurrentExecutorService_

#define RESTRICT_JavaUtilConcurrentExecutor 1
#define INCLUDE_JavaUtilConcurrentExecutor 1
#include <JRE/java/util/concurrent/Executor.h>

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilList;

/*!
 @brief An <code>Executor</code> that provides methods to manage termination and
  methods that can produce a <code>Future</code> for tracking progress of
  one or more asynchronous tasks.
 <p>An <code>ExecutorService</code> can be shut down, which will cause
  it to reject new tasks.  Two different methods are provided for
  shutting down an <code>ExecutorService</code>. The <code>shutdown</code>
  method will allow previously submitted tasks to execute before
  terminating, while the <code>shutdownNow</code> method prevents waiting
  tasks from starting and attempts to stop currently executing tasks.
  Upon termination, an executor has no tasks actively executing, no
  tasks awaiting execution, and no new tasks can be submitted.  An
  unused <code>ExecutorService</code> should be shut down to allow
  reclamation of its resources. 
 <p>Method <code>submit</code> extends base method <code>Executor.execute(Runnable)</code>
  by creating and returning a <code>Future</code>
  that can be used to cancel execution and/or wait for completion.
  Methods <code>invokeAny</code> and <code>invokeAll</code> perform the most
  commonly useful forms of bulk execution, executing a collection of
  tasks and then waiting for at least one, or all, to
  complete. (Class <code>ExecutorCompletionService</code> can be used to
  write customized variants of these methods.) 
 <p>The <code>Executors</code> class provides factory methods for the
  executor services provided in this package. 
 <h3>Usage Examples</h3>
  Here is a sketch of a network service in which threads in a thread
  pool service incoming requests. It uses the preconfigured <code>Executors.newFixedThreadPool</code>
  factory method: 
 @code
  class NetworkService implements Runnable {
    private final ServerSocket serverSocket;
    private final ExecutorService pool;
    public NetworkService(int port, int poolSize)
        throws IOException {
      serverSocket = new ServerSocket(port);
      pool = Executors.newFixedThreadPool(poolSize);
    }
    public void run() { // run the service
      try {
        for (;;) {
          pool.execute(new Handler(serverSocket.accept()));
        }
      } catch (IOException ex) {
        pool.shutdown();
      }    }    }
  class Handler implements Runnable {
    private final Socket socket;
    Handler(Socket socket) { this.socket = socket; }
    public void run() {
      // read and service request on socket
    }  }
 
@endcode
  The following method shuts down an <code>ExecutorService</code> in two phases,
  first by calling <code>shutdown</code> to reject incoming tasks, and then
  calling <code>shutdownNow</code>, if necessary, to cancel any lingering tasks: 
 @code
  void shutdownAndAwaitTermination(ExecutorService pool) {
    pool.shutdown(); // Disable new tasks from being submitted
    try {
      // Wait a while for existing tasks to terminate
      if (!pool.awaitTermination(60, TimeUnit.SECONDS)) {
        pool.shutdownNow(); // Cancel currently executing tasks
        // Wait a while for tasks to respond to being cancelled
        if (!pool.awaitTermination(60, TimeUnit.SECONDS))
            System.err.println("Pool did not terminate");
      }
    } catch (InterruptedException ie) {
      // (Re-)Cancel if current thread also interrupted
      pool.shutdownNow();
      // Preserve interrupt status
      Thread.currentThread().interrupt();
    }  }
 
@endcode
  
 <p>Memory consistency effects: Actions in a thread prior to the
  submission of a <code>Runnable</code> or <code>Callable</code> task to an 
 <code>ExecutorService</code>
  <a href="package-summary.html#MemoryVisibility"><i>happen-before</i></a>
  any actions taken by that task, which in turn <i>happen-before</i> the
  result is retrieved via <code>Future.get()</code>.
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentExecutorService < JavaUtilConcurrentExecutor, JavaObject >

/*!
 @brief Initiates an orderly shutdown in which previously submitted
  tasks are executed, but no new tasks will be accepted.
 Invocation has no additional effect if already shut down. 
 <p>This method does not wait for previously submitted tasks to
  complete execution.  Use <code>awaitTermination</code>
  to do that.
 */
- (void)shutdown;

/*!
 @brief Attempts to stop all actively executing tasks, halts the
  processing of waiting tasks, and returns a list of the tasks
  that were awaiting execution.
 <p>This method does not wait for actively executing tasks to
  terminate.  Use <code>awaitTermination</code> to
  do that. 
 <p>There are no guarantees beyond best-effort attempts to stop
  processing actively executing tasks.  For example, typical
  implementations will cancel via <code>Thread.interrupt</code>, so any
  task that fails to respond to interrupts may never terminate.
 @return list of tasks that never commenced execution
 */
- (id<JavaUtilList>)shutdownNow;

/*!
 @brief Returns <code>true</code> if this executor has been shut down.
 @return <code>true</code> if this executor has been shut down
 */
- (jboolean)isShutdown;

/*!
 @brief Returns <code>true</code> if all tasks have completed following shut down.
 Note that <code>isTerminated</code> is never <code>true</code> unless
  either <code>shutdown</code> or <code>shutdownNow</code> was called first.
 @return <code>true</code> if all tasks have completed following shut down
 */
- (jboolean)isTerminated;

/*!
 @brief Blocks until all tasks have completed execution after a shutdown
  request, or the timeout occurs, or the current thread is
  interrupted, whichever happens first.
 @param timeout the maximum time to wait
 @param unit the time unit of the timeout argument
 @return <code>true</code> if this executor terminated and
          <code>false</code> if the timeout elapsed before termination
 @throw InterruptedExceptionif interrupted while waiting
 */
- (jboolean)awaitTerminationWithLong:(jlong)timeout
      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Submits a value-returning task for execution and returns a
  Future representing the pending results of the task.The
  Future's <code>get</code> method will return the task's result upon
  successful completion.
 <p>
  If you would like to immediately block waiting
  for a task, you can use constructions of the form 
 <code>result = exec.submit(aCallable).get();</code>
  
 <p>Note: The <code>Executors</code> class includes a set of methods
  that can convert some other common closure-like objects,
  for example, <code>java.security.PrivilegedAction</code> to 
 <code>Callable</code> form so they can be submitted.
 @param task the task to submit
 @return a Future representing pending completion of the task
 @throw RejectedExecutionExceptionif the task cannot be
          scheduled for execution
 @throw NullPointerExceptionif the task is null
 */
- (id<JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

/*!
 @brief Submits a Runnable task for execution and returns a Future
  representing that task.The Future's <code>get</code> method will
  return the given result upon successful completion.
 @param task the task to submit
 @param result the result to return
 @return a Future representing pending completion of the task
 @throw RejectedExecutionExceptionif the task cannot be
          scheduled for execution
 @throw NullPointerExceptionif the task is null
 */
- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                    withId:(id)result;

/*!
 @brief Submits a Runnable task for execution and returns a Future
  representing that task.The Future's <code>get</code> method will
  return <code>null</code> upon <em>successful</em> completion.
 @param task the task to submit
 @return a Future representing pending completion of the task
 @throw RejectedExecutionExceptionif the task cannot be
          scheduled for execution
 @throw NullPointerExceptionif the task is null
 */
- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

/*!
 @brief Executes the given tasks, returning a list of Futures holding
  their status and results when all complete.
 <code>Future.isDone</code> is <code>true</code> for each
  element of the returned list.
  Note that a <em>completed</em> task could have
  terminated either normally or by throwing an exception.
  The results of this method are undefined if the given
  collection is modified while this operation is in progress.
 @param tasks the collection of tasks
 @return a list of Futures representing the tasks, in the same
          sequential order as produced by the iterator for the
          given task list, each of which has completed
 @throw InterruptedExceptionif interrupted while waiting, in
          which case unfinished tasks are cancelled
 @throw NullPointerExceptionif tasks or any of its elements are <code>null</code>
 @throw RejectedExecutionExceptionif any task cannot be
          scheduled for execution
 */
- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

/*!
 @brief Executes the given tasks, returning a list of Futures holding
  their status and results
  when all complete or the timeout expires, whichever happens first.
 <code>Future.isDone</code> is <code>true</code> for each
  element of the returned list.
  Upon return, tasks that have not completed are cancelled.
  Note that a <em>completed</em> task could have
  terminated either normally or by throwing an exception.
  The results of this method are undefined if the given
  collection is modified while this operation is in progress.
 @param tasks the collection of tasks
 @param timeout the maximum time to wait
 @param unit the time unit of the timeout argument
 @return a list of Futures representing the tasks, in the same
          sequential order as produced by the iterator for the
          given task list. If the operation did not time out,
          each task will have completed. If it did time out, some
          of these tasks will not have completed.
 @throw InterruptedExceptionif interrupted while waiting, in
          which case unfinished tasks are cancelled
 @throw NullPointerExceptionif tasks, any of its elements, or
          unit are <code>null</code>
 @throw RejectedExecutionExceptionif any task cannot be scheduled
          for execution
 */
- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                                           withLong:(jlong)timeout
                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Executes the given tasks, returning the result
  of one that has completed successfully (i.e., without throwing
  an exception), if any do.Upon normal or exceptional return,
  tasks that have not completed are cancelled.
 The results of this method are undefined if the given
  collection is modified while this operation is in progress.
 @param tasks the collection of tasks
 @return the result returned by one of the tasks
 @throw InterruptedExceptionif interrupted while waiting
 @throw NullPointerExceptionif tasks or any element task
          subject to execution is <code>null</code>
 @throw IllegalArgumentExceptionif tasks is empty
 @throw ExecutionExceptionif no task successfully completes
 @throw RejectedExecutionExceptionif tasks cannot be scheduled
          for execution
 */
- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

/*!
 @brief Executes the given tasks, returning the result
  of one that has completed successfully (i.e., without throwing
  an exception), if any do before the given timeout elapses.
 Upon normal or exceptional return, tasks that have not
  completed are cancelled.
  The results of this method are undefined if the given
  collection is modified while this operation is in progress.
 @param tasks the collection of tasks
 @param timeout the maximum time to wait
 @param unit the time unit of the timeout argument
 @return the result returned by one of the tasks
 @throw InterruptedExceptionif interrupted while waiting
 @throw NullPointerExceptionif tasks, or unit, or any element
          task subject to execution is <code>null</code>
 @throw TimeoutExceptionif the given timeout elapses before
          any task successfully completes
 @throw ExecutionExceptionif no task successfully completes
 @throw RejectedExecutionExceptionif tasks cannot be scheduled
          for execution
 */
- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                             withLong:(jlong)timeout
       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExecutorService)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutorService)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentExecutorService")
