//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/Runnable.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaLangRunnable")
#ifdef RESTRICT_JavaLangRunnable
#define INCLUDE_ALL_JavaLangRunnable 0
#else
#define INCLUDE_ALL_JavaLangRunnable 1
#endif
#undef RESTRICT_JavaLangRunnable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangRunnable_) && (INCLUDE_ALL_JavaLangRunnable || defined(INCLUDE_JavaLangRunnable))
#define JavaLangRunnable_

/*!
 @brief The <code>Runnable</code> interface should be implemented by any
  class whose instances are intended to be executed by a thread.The
  class must define a method of no arguments called <code>run</code>.
 <p>
  This interface is designed to provide a common protocol for objects that
  wish to execute code while they are active. For example, 
 <code>Runnable</code> is implemented by class <code>Thread</code>.
  Being active simply means that a thread has been started and has not
  yet been stopped. 
 <p>
  In addition, <code>Runnable</code> provides the means for a class to be
  active while not subclassing <code>Thread</code>. A class that implements 
 <code>Runnable</code> can run without subclassing <code>Thread</code>
  by instantiating a <code>Thread</code> instance and passing itself in
  as the target.  In most cases, the <code>Runnable</code> interface should
  be used if you are only planning to override the <code>run()</code>
  method and no other <code>Thread</code> methods.
  This is important because classes should not be subclassed
  unless the programmer intends on modifying or enhancing the fundamental
  behavior of the class.
 @author Arthur van Hoff
 - seealso: java.lang.Thread
 - seealso: java.util.concurrent.Callable
 @since JDK1.0
 */
@protocol JavaLangRunnable < JavaObject >

/*!
 @brief When an object implementing interface <code>Runnable</code> is used
  to create a thread, starting the thread causes the object's 
 <code>run</code> method to be called in that separately executing
  thread.
 <p>
  The general contract of the method <code>run</code> is that it may
  take any action whatsoever.
 - seealso: java.lang.Thread#run()
 */
- (void)run;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRunnable)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRunnable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangRunnable")
