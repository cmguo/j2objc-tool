//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/ThreadLocal.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaLangThreadLocal")
#ifdef RESTRICT_JavaLangThreadLocal
#define INCLUDE_ALL_JavaLangThreadLocal 0
#else
#define INCLUDE_ALL_JavaLangThreadLocal 1
#endif
#undef RESTRICT_JavaLangThreadLocal
#ifdef INCLUDE_JavaLangThreadLocal_SuppliedThreadLocal
#define INCLUDE_JavaLangThreadLocal 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangThreadLocal_) && (INCLUDE_ALL_JavaLangThreadLocal || defined(INCLUDE_JavaLangThreadLocal))
#define JavaLangThreadLocal_

@class JavaLangThread;
@class JavaLangThreadLocal_ThreadLocalMap;
@protocol JavaUtilFunctionSupplier;

/*!
 @brief This class provides thread-local variables.These variables differ from
  their normal counterparts in that each thread that accesses one (via its 
 <code>get</code> or <code>set</code> method) has its own, independently initialized
  copy of the variable.
 <code>ThreadLocal</code> instances are typically private
  static fields in classes that wish to associate state with a thread (e.g.,
  a user ID or Transaction ID). 
 <p>For example, the class below generates unique identifiers local to each
  thread.
  A thread's id is assigned the first time it invokes <code>ThreadId.get()</code>
  and remains unchanged on subsequent calls. 
 @code

  import java.util.concurrent.atomic.AtomicInteger;
  public class ThreadId {
      // Atomic integer containing the next thread ID to be assigned
      private static final AtomicInteger nextId = new AtomicInteger(0);
      // Thread local variable containing each thread's ID
      private static final ThreadLocal&lt;Integer&gt; threadId =
          new ThreadLocal&lt;Integer&gt;() {
                          &#64;Override protected Integer initialValue() {
                  return nextId.getAndIncrement();
          }
      };
      // Returns the current thread's unique ID, assigning it if necessary
      public static int get() {
          return threadId.get();
      }    }    
  
@endcode
  <p>Each thread holds an implicit reference to its copy of a thread-local
  variable as long as the thread is alive and the <code>ThreadLocal</code>
  instance is accessible; after a thread goes away, all of its copies of
  thread-local instances are subject to garbage collection (unless other
  references to these copies exist).
 @author Josh Bloch and Doug Lea
 @since 1.2
 */
@interface JavaLangThreadLocal : NSObject

#pragma mark Public

/*!
 @brief Creates a thread local variable.
 - seealso: #withInitial(java.util.function.Supplier)
 */
- (instancetype __nonnull)init;

/*!
 @brief Returns the value in the current thread's copy of this
  thread-local variable.If the variable has no value for the
  current thread, it is first initialized to the value returned
  by an invocation of the <code>initialValue</code> method.
 @return the current thread's value of this thread-local
 */
- (id __nullable)get;

/*!
 @brief Removes the current thread's value for this thread-local
  variable.If this thread-local variable is subsequently 
 read by the current thread, its value will be
  reinitialized by invoking its <code>initialValue</code> method,
  unless its value is set by the current thread
  in the interim.
 This may result in multiple invocations of the 
 <code>initialValue</code> method in the current thread.
 @since 1.5
 */
- (void)remove;

/*!
 @brief Sets the current thread's copy of this thread-local variable
  to the specified value.Most subclasses will have no need to
  override this method, relying solely on the <code>initialValue</code>
  method to set the values of thread-locals.
 @param value the value to be stored in the current thread's copy of         this thread-local.
 */
- (void)setWithId:(id)value;

/*!
 @brief Creates a thread local variable.The initial value of the variable is
  determined by invoking the <code>get</code> method on the <code>Supplier</code>.
 @param supplier the supplier to be used to determine the initial value
 @return a new thread local variable
 @throw NullPointerExceptionif the specified supplier is null
 @since 1.8
 */
+ (JavaLangThreadLocal *)withInitialWithJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)supplier;

#pragma mark Protected

/*!
 @brief Returns the current thread's "initial value" for this
  thread-local variable.This method will be invoked the first
  time a thread accesses the variable with the <code>get</code>
  method, unless the thread previously invoked the <code>set</code>
  method, in which case the <code>initialValue</code> method will not
  be invoked for the thread.
 Normally, this method is invoked at
  most once per thread, but it may be invoked again in case of
  subsequent invocations of <code>remove</code> followed by <code>get</code>.
  
 <p>This implementation simply returns <code>null</code>; if the
  programmer desires thread-local variables to have an initial
  value other than <code>null</code>, <code>ThreadLocal</code> must be
  subclassed, and this method overridden.  Typically, an
  anonymous inner class will be used.
 @return the initial value for this thread-local
 */
- (id __nullable)initialValue OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

/*!
 @brief Method childValue is visibly defined in subclass
  InheritableThreadLocal, but is internally defined here for the
  sake of providing createInheritedMap factory method without
  needing to subclass the map class in InheritableThreadLocal.
 This technique is preferable to the alternative of embedding
  instanceof tests in methods.
 */
- (id)childValueWithId:(id)parentValue;

/*!
 @brief Factory method to create map of inherited thread locals.
 Designed to be called only from Thread constructor.
 @param parentMap the map associated with parent thread
 @return a map containing the parent's inheritable bindings
 */
+ (JavaLangThreadLocal_ThreadLocalMap *)createInheritedMapWithJavaLangThreadLocal_ThreadLocalMap:(JavaLangThreadLocal_ThreadLocalMap *)parentMap;

/*!
 @brief Create the map associated with a ThreadLocal.Overridden in
  InheritableThreadLocal.
 @param t the current thread
 @param firstValue value for the initial entry of the map
 */
- (void)createMapWithJavaLangThread:(JavaLangThread *)t
                             withId:(id)firstValue;

/*!
 @brief Get the map associated with a ThreadLocal.Overridden in
  InheritableThreadLocal.
 @param t the current thread
 @return the map
 */
- (JavaLangThreadLocal_ThreadLocalMap *)getMapWithJavaLangThread:(JavaLangThread *)t;

@end

J2OBJC_STATIC_INIT(JavaLangThreadLocal)

FOUNDATION_EXPORT JavaLangThreadLocal *JavaLangThreadLocal_withInitialWithJavaUtilFunctionSupplier_(id<JavaUtilFunctionSupplier> supplier);

FOUNDATION_EXPORT void JavaLangThreadLocal_init(JavaLangThreadLocal *self);

FOUNDATION_EXPORT JavaLangThreadLocal *new_JavaLangThreadLocal_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThreadLocal *create_JavaLangThreadLocal_init(void);

FOUNDATION_EXPORT JavaLangThreadLocal_ThreadLocalMap *JavaLangThreadLocal_createInheritedMapWithJavaLangThreadLocal_ThreadLocalMap_(JavaLangThreadLocal_ThreadLocalMap *parentMap);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThreadLocal)

#endif

#if !defined (JavaLangThreadLocal_SuppliedThreadLocal_) && (INCLUDE_ALL_JavaLangThreadLocal || defined(INCLUDE_JavaLangThreadLocal_SuppliedThreadLocal))
#define JavaLangThreadLocal_SuppliedThreadLocal_

@protocol JavaUtilFunctionSupplier;

/*!
 @brief An extension of ThreadLocal that obtains its initial value from
  the specified <code>Supplier</code>.
 */
@interface JavaLangThreadLocal_SuppliedThreadLocal : JavaLangThreadLocal

#pragma mark Protected

- (id)initialValue OBJC_METHOD_FAMILY_NONE;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)supplier;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangThreadLocal_SuppliedThreadLocal)

FOUNDATION_EXPORT void JavaLangThreadLocal_SuppliedThreadLocal_initWithJavaUtilFunctionSupplier_(JavaLangThreadLocal_SuppliedThreadLocal *self, id<JavaUtilFunctionSupplier> supplier);

FOUNDATION_EXPORT JavaLangThreadLocal_SuppliedThreadLocal *new_JavaLangThreadLocal_SuppliedThreadLocal_initWithJavaUtilFunctionSupplier_(id<JavaUtilFunctionSupplier> supplier) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThreadLocal_SuppliedThreadLocal *create_JavaLangThreadLocal_SuppliedThreadLocal_initWithJavaUtilFunctionSupplier_(id<JavaUtilFunctionSupplier> supplier);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThreadLocal_SuppliedThreadLocal)

#endif

#if !defined (JavaLangThreadLocal_ThreadLocalMap_) && (INCLUDE_ALL_JavaLangThreadLocal || defined(INCLUDE_JavaLangThreadLocal_ThreadLocalMap))
#define JavaLangThreadLocal_ThreadLocalMap_

@class JavaLangThreadLocal;

/*!
 @brief ThreadLocalMap is a customized hash map suitable only for
  maintaining thread local values.No operations are exported
  outside of the ThreadLocal class.
 The class is package private to
  allow declaration of fields in class Thread.  To help deal with
  very large and long-lived usages, the hash table entries use
  WeakReferences for keys. However, since reference queues are not
  used, stale entries are guaranteed to be removed only when
  the table starts running out of space.
 */
@interface JavaLangThreadLocal_ThreadLocalMap : NSObject

#pragma mark Package-Private

/*!
 @brief Construct a new map initially containing (firstKey, firstValue).
 ThreadLocalMaps are constructed lazily, so we only create
  one when we have at least one entry to put in it.
 */
- (instancetype __nonnull)initWithJavaLangThreadLocal:(JavaLangThreadLocal *)firstKey
                                               withId:(id)firstValue;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangThreadLocal_ThreadLocalMap)

FOUNDATION_EXPORT void JavaLangThreadLocal_ThreadLocalMap_initWithJavaLangThreadLocal_withId_(JavaLangThreadLocal_ThreadLocalMap *self, JavaLangThreadLocal *firstKey, id firstValue);

FOUNDATION_EXPORT JavaLangThreadLocal_ThreadLocalMap *new_JavaLangThreadLocal_ThreadLocalMap_initWithJavaLangThreadLocal_withId_(JavaLangThreadLocal *firstKey, id firstValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThreadLocal_ThreadLocalMap *create_JavaLangThreadLocal_ThreadLocalMap_initWithJavaLangThreadLocal_withId_(JavaLangThreadLocal *firstKey, id firstValue);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThreadLocal_ThreadLocalMap)

#endif

#if !defined (JavaLangThreadLocal_ThreadLocalMap_Entry_) && (INCLUDE_ALL_JavaLangThreadLocal || defined(INCLUDE_JavaLangThreadLocal_ThreadLocalMap_Entry))
#define JavaLangThreadLocal_ThreadLocalMap_Entry_

#define RESTRICT_JavaLangRefWeakReference 1
#define INCLUDE_JavaLangRefWeakReference 1
#include <JRE/java/lang/ref/WeakReference.h>

@class JavaLangRefReferenceQueue;
@class JavaLangThreadLocal;

/*!
 @brief The entries in this hash map extend WeakReference, using
  its main ref field as the key (which is always a
  ThreadLocal object).Note that null keys (i.e. entry.get()
  == null) mean that the key is no longer referenced, so the
  entry can be expunged from table.
 Such entries are referred to
  as "stale entries" in the code that follows.
 */
@interface JavaLangThreadLocal_ThreadLocalMap_Entry : JavaLangRefWeakReference {
 @public
  /*!
   @brief The value associated with this ThreadLocal.
   */
  id value_;
}

#pragma mark Public

- (JavaLangThreadLocal *)get;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaLangThreadLocal:(JavaLangThreadLocal *)k
                                               withId:(id)v;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithId:(id)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithId:(id)arg0
       withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangThreadLocal_ThreadLocalMap_Entry)

J2OBJC_FIELD_SETTER(JavaLangThreadLocal_ThreadLocalMap_Entry, value_, id)

FOUNDATION_EXPORT void JavaLangThreadLocal_ThreadLocalMap_Entry_initWithJavaLangThreadLocal_withId_(JavaLangThreadLocal_ThreadLocalMap_Entry *self, JavaLangThreadLocal *k, id v);

FOUNDATION_EXPORT JavaLangThreadLocal_ThreadLocalMap_Entry *new_JavaLangThreadLocal_ThreadLocalMap_Entry_initWithJavaLangThreadLocal_withId_(JavaLangThreadLocal *k, id v) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThreadLocal_ThreadLocalMap_Entry *create_JavaLangThreadLocal_ThreadLocalMap_Entry_initWithJavaLangThreadLocal_withId_(JavaLangThreadLocal *k, id v);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThreadLocal_ThreadLocalMap_Entry)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangThreadLocal")
