//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/EventListenerProxy.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaUtilEventListenerProxy")
#ifdef RESTRICT_JavaUtilEventListenerProxy
#define INCLUDE_ALL_JavaUtilEventListenerProxy 0
#else
#define INCLUDE_ALL_JavaUtilEventListenerProxy 1
#endif
#undef RESTRICT_JavaUtilEventListenerProxy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilEventListenerProxy_) && (INCLUDE_ALL_JavaUtilEventListenerProxy || defined(INCLUDE_JavaUtilEventListenerProxy))
#define JavaUtilEventListenerProxy_

#define RESTRICT_JavaUtilEventListener 1
#define INCLUDE_JavaUtilEventListener 1
#include <JRE/java/util/EventListener.h>

/*!
 @brief An abstract wrapper class for an <code>EventListener</code> class
  which associates a set of additional parameters with the listener.
 Subclasses must provide the storage and accessor methods
  for the additional arguments or parameters. 
 <p>
  For example, a bean which supports named properties
  would have a two argument method signature for adding a 
 <code>PropertyChangeListener</code> for a property: 
 @code

  public void addPropertyChangeListener(String propertyName,
                                        PropertyChangeListener listener) 
  
@endcode
  If the bean also implemented the zero argument get listener method: 
 @code

  public PropertyChangeListener[] getPropertyChangeListeners() 
  
@endcode
  then the array may contain inner <code>PropertyChangeListeners</code>
  which are also <code>PropertyChangeListenerProxy</code> objects. 
 <p>
  If the calling method is interested in retrieving the named property
  then it would have to test the element to see if it is a proxy class.
 @since 1.4
 */
@interface JavaUtilEventListenerProxy : NSObject < JavaUtilEventListener >

#pragma mark Public

/*!
 @brief Creates a proxy for the specified listener.
 @param listener the listener object
 */
- (instancetype __nonnull)initWithJavaUtilEventListener:(id<JavaUtilEventListener>)listener;

/*!
 @brief Returns the listener associated with the proxy.
 @return the listener associated with the proxy
 */
- (id<JavaUtilEventListener>)getListener;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilEventListenerProxy)

FOUNDATION_EXPORT void JavaUtilEventListenerProxy_initWithJavaUtilEventListener_(JavaUtilEventListenerProxy *self, id<JavaUtilEventListener> listener);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilEventListenerProxy)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilEventListenerProxy")
