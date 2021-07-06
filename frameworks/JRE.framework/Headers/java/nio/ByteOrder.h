//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/ByteOrder.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioByteOrder")
#ifdef RESTRICT_JavaNioByteOrder
#define INCLUDE_ALL_JavaNioByteOrder 0
#else
#define INCLUDE_ALL_JavaNioByteOrder 1
#endif
#undef RESTRICT_JavaNioByteOrder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioByteOrder_) && (INCLUDE_ALL_JavaNioByteOrder || defined(INCLUDE_JavaNioByteOrder))
#define JavaNioByteOrder_

/*!
 @brief A typesafe enumeration for byte orders.
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 */
@interface JavaNioByteOrder : NSObject
@property (readonly, class, strong) JavaNioByteOrder *BIG_ENDIAN_ NS_SWIFT_NAME(BIG_ENDIAN_);
@property (readonly, class, strong) JavaNioByteOrder *LITTLE_ENDIAN_ NS_SWIFT_NAME(LITTLE_ENDIAN_);

#pragma mark Public

/*!
 @brief Retrieves the native byte order of the underlying platform.
 <p> This method is defined so that performance-sensitive Java code can
  allocate direct buffers with the same byte order as the hardware.
  Native code libraries are often more efficient when such buffers are
  used.  </p>
 @return The native byte order of the hardware upon which this Java
           virtual machine is running
 */
+ (JavaNioByteOrder *)nativeOrder;

/*!
 @brief Constructs a string describing this object.
 <p> This method returns the string <tt>"BIG_ENDIAN"</tt> for <code>BIG_ENDIAN</code>
  and <tt>"LITTLE_ENDIAN"</tt> for <code>LITTLE_ENDIAN</code>.
  </p>
 @return The specified string
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaNioByteOrder)

/*!
 @brief Constant denoting big-endian byte order.In this order, the bytes of a
  multibyte value are ordered from most significant to least significant.
 */
inline JavaNioByteOrder *JavaNioByteOrder_get_BIG_ENDIAN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioByteOrder *JavaNioByteOrder_BIG_ENDIAN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioByteOrder, BIG_ENDIAN, JavaNioByteOrder *)

/*!
 @brief Constant denoting little-endian byte order.In this order, the bytes of
  a multibyte value are ordered from least significant to most
  significant.
 */
inline JavaNioByteOrder *JavaNioByteOrder_get_LITTLE_ENDIAN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioByteOrder *JavaNioByteOrder_LITTLE_ENDIAN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioByteOrder, LITTLE_ENDIAN, JavaNioByteOrder *)

FOUNDATION_EXPORT JavaNioByteOrder *JavaNioByteOrder_nativeOrder(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioByteOrder)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioByteOrder")
