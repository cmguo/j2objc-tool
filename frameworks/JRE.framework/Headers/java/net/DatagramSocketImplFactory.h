//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/DatagramSocketImplFactory.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNetDatagramSocketImplFactory")
#ifdef RESTRICT_JavaNetDatagramSocketImplFactory
#define INCLUDE_ALL_JavaNetDatagramSocketImplFactory 0
#else
#define INCLUDE_ALL_JavaNetDatagramSocketImplFactory 1
#endif
#undef RESTRICT_JavaNetDatagramSocketImplFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNetDatagramSocketImplFactory_) && (INCLUDE_ALL_JavaNetDatagramSocketImplFactory || defined(INCLUDE_JavaNetDatagramSocketImplFactory))
#define JavaNetDatagramSocketImplFactory_

@class JavaNetDatagramSocketImpl;

/*!
 @brief This interface defines a factory for datagram socket implementations.It
  is used by the classes <code>DatagramSocket</code> to create actual socket
  implementations.
 @author Yingxian Wang
 - seealso: java.net.DatagramSocket
 @since 1.3
 */
@protocol JavaNetDatagramSocketImplFactory < JavaObject >

/*!
 @brief Creates a new <code>DatagramSocketImpl</code> instance.
 @return a new instance of <code>DatagramSocketImpl</code>.
 - seealso: java.net.DatagramSocketImpl
 */
- (JavaNetDatagramSocketImpl *)createDatagramSocketImpl;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetDatagramSocketImplFactory)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetDatagramSocketImplFactory)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetDatagramSocketImplFactory")
