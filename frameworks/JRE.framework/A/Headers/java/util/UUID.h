//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/UUID.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilUUID")
#ifdef RESTRICT_JavaUtilUUID
#define INCLUDE_ALL_JavaUtilUUID 0
#else
#define INCLUDE_ALL_JavaUtilUUID 1
#endif
#undef RESTRICT_JavaUtilUUID

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilUUID_) && (INCLUDE_ALL_JavaUtilUUID || defined(INCLUDE_JavaUtilUUID))
#define JavaUtilUUID_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class IOSByteArray;

/*!
 @brief A class that represents an immutable universally unique identifier (UUID).
 A UUID represents a 128-bit value. 
 <p> There exist different variants of these global identifiers.  The methods
  of this class are for manipulating the Leach-Salz variant, although the
  constructors allow the creation of any variant of UUID (described below). 
 <p> The layout of a variant 2 (Leach-Salz) UUID is as follows:
  The most significant long consists of the following unsigned fields: 
 @code

  0xFFFFFFFF00000000 time_low
  0x00000000FFFF0000 time_mid
  0x000000000000F000 version
  0x0000000000000FFF time_hi 
  
@endcode
  The least significant long consists of the following unsigned fields: 
 @code

  0xC000000000000000 variant
  0x3FFF000000000000 clock_seq
  0x0000FFFFFFFFFFFF node 
  
@endcode
  
 <p> The variant field contains a value which identifies the layout of the 
 <code>UUID</code>.  The bit layout described above is valid only for a <code>UUID</code>
  with a variant value of 2, which indicates the Leach-Salz variant. 
 <p> The version field holds a value that describes the type of this <code>UUID</code>
 .  There are four different basic types of UUIDs: time-based, DCE
  security, name-based, and randomly generated UUIDs.  These types have a
  version value of 1, 2, 3 and 4, respectively. 
 <p> For more information including algorithms used to create <code>UUID</code>s,
  see <a href="http://www.ietf.org/rfc/rfc4122.txt"> <i>RFC&nbsp;4122: A
  Universally Unique IDentifier (UUID) URN Namespace</i></a>, section 4.2 
 &quot;Algorithms for Creating a Time-Based UUID&quot;.
 @since 1.5
 */
@interface JavaUtilUUID : NSObject < JavaIoSerializable, JavaLangComparable >

#pragma mark Public

/*!
 @brief Constructs a new <code>UUID</code> using the specified data.
 <code>mostSigBits</code>
  is used for the most significant 64 bits of the <code>UUID</code>
  and <code>leastSigBits</code> becomes the least significant 64 bits of the 
 <code>UUID</code>.
 @param mostSigBits The most significant bits of the 
 <code>UUID</code>
 @param leastSigBits The least significant bits of the 
 <code>UUID</code>
 */
- (instancetype __nonnull)initWithLong:(jlong)mostSigBits
                              withLong:(jlong)leastSigBits;

/*!
 @brief The clock sequence value associated with this UUID.
 <p> The 14 bit clock sequence value is constructed from the clock
  sequence field of this UUID.  The clock sequence field is used to
  guarantee temporal uniqueness in a time-based UUID. 
 <p> The <code>clockSequence</code> value is only meaningful in a time-based
  UUID, which has version type 1.  If this UUID is not a time-based UUID
  then this method throws UnsupportedOperationException.
 @return The clock sequence of this <code>UUID</code>
 @throw UnsupportedOperationException
 If this UUID is not a version 1 UUID
 */
- (jint)clockSequence;

/*!
 @brief Compares this UUID with the specified UUID.
 <p> The first of two UUIDs is greater than the second if the most
  significant field in which the UUIDs differ is greater for the first
  UUID.
 @param val<code>UUID</code>
   to which this <code>UUID</code>  is to be compared
 @return -1, 0 or 1 as this <code>UUID</code> is less than, equal to, or
           greater than <code>val</code>
 */
- (jint)compareToWithId:(JavaUtilUUID *)val;

/*!
 @brief Compares this object to the specified object.The result is <code>true</code>
  if and only if the argument is not <code>null</code>, is a <code>UUID</code>
  object, has the same variant, and contains the same value, bit for bit,
  as this <code>UUID</code>.
 @param obj The object to be compared
 @return <code>true</code> if the objects are the same; <code>false</code>
           otherwise
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Creates a <code>UUID</code> from the string standard representation as
  described in the <code>toString</code> method.
 @param name A string that specifies a 
 <code>UUID</code>
 @return A <code>UUID</code> with the specified value
 @throw IllegalArgumentException
 If name does not conform to the string representation as
           described in <code>toString</code>
 */
+ (JavaUtilUUID *)fromStringWithNSString:(NSString *)name;

/*!
 @brief Returns the least significant 64 bits of this UUID's 128 bit value.
 @return The least significant 64 bits of this UUID's 128 bit value
 */
- (jlong)getLeastSignificantBits;

/*!
 @brief Returns the most significant 64 bits of this UUID's 128 bit value.
 @return The most significant 64 bits of this UUID's 128 bit value
 */
- (jlong)getMostSignificantBits;

/*!
 @brief Returns a hash code for this <code>UUID</code>.
 @return A hash code value for this <code>UUID</code>
 */
- (NSUInteger)hash;

/*!
 @brief Static factory to retrieve a type 3 (name based) <code>UUID</code> based on
  the specified byte array.
 @param name A byte array to be used to construct a 
 <code>UUID</code>
 @return A <code>UUID</code> generated from the specified array
 */
+ (JavaUtilUUID *)nameUUIDFromBytesWithByteArray:(IOSByteArray *)name;

/*!
 @brief The node value associated with this UUID.
 <p> The 48 bit node value is constructed from the node field of this
  UUID.  This field is intended to hold the IEEE 802 address of the machine
  that generated this UUID to guarantee spatial uniqueness. 
 <p> The node value is only meaningful in a time-based UUID, which has
  version type 1.  If this UUID is not a time-based UUID then this method
  throws UnsupportedOperationException.
 @return The node value of this <code>UUID</code>
 @throw UnsupportedOperationException
 If this UUID is not a version 1 UUID
 */
- (jlong)node;

/*!
 @brief Static factory to retrieve a type 4 (pseudo randomly generated) UUID.
 The <code>UUID</code> is generated using a cryptographically strong pseudo
  random number generator.
 @return A randomly generated <code>UUID</code>
 */
+ (JavaUtilUUID *)randomUUID;

/*!
 @brief The timestamp value associated with this UUID.
 <p> The 60 bit timestamp value is constructed from the time_low,
  time_mid, and time_hi fields of this <code>UUID</code>.  The resulting
  timestamp is measured in 100-nanosecond units since midnight,
  October 15, 1582 UTC. 
 <p> The timestamp value is only meaningful in a time-based UUID, which
  has version type 1.  If this <code>UUID</code> is not a time-based UUID then
  this method throws UnsupportedOperationException.
 @throw UnsupportedOperationException
 If this UUID is not a version 1 UUID
 @return The timestamp of this <code>UUID</code>.
 */
- (jlong)timestamp;

/*!
 @brief Returns a <code>String</code> object representing this <code>UUID</code>.
 <p> The UUID string representation is as described by this BNF: 
 <blockquote>@code

   UUID                   = <time_low> "-" <time_mid> "-"
                           <time_high_and_version> "-"
                           <variant_and_sequence> "-"
                           <node>
  time_low               = 4*<hexOctet>
  time_mid               = 2*<hexOctet>
  time_high_and_version  = 2*<hexOctet>
  variant_and_sequence   = 2*<hexOctet>
  node                   = 6*<hexOctet>
  hexOctet               = <hexDigit><hexDigit>
  hexDigit               =
        "0" | "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8" | "9"
        | "a" | "b" | "c" | "d" | "e" | "f"
        | "A" | "B" | "C" | "D" | "E" | "F" 
 
@endcode</blockquote>
 @return A string representation of this <code>UUID</code>
 */
- (NSString *)description;

/*!
 @brief The variant number associated with this <code>UUID</code>.The variant
  number describes the layout of the <code>UUID</code>.
 The variant number has the following meaning: 
 <ul>
  <li>0    Reserved for NCS backward compatibility 
 <li>2    <a href="http://www.ietf.org/rfc/rfc4122.txt">IETF&nbsp;RFC&nbsp;4122</a>
  (Leach-Salz), used by this class 
 <li>6    Reserved, Microsoft Corporation backward compatibility 
 <li>7    Reserved for future definition 
 </ul>
 @return The variant number of this <code>UUID</code>
 */
- (jint)variant;

/*!
 @brief The version number associated with this <code>UUID</code>.The version
  number describes how this <code>UUID</code> was generated.
 The version number has the following meaning: 
 <ul>
  <li>1    Time-based UUID 
 <li>2    DCE security UUID 
 <li>3    Name-based UUID 
 <li>4    Randomly generated UUID 
 </ul>
 @return The version number of this <code>UUID</code>
 */
- (jint)version__;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilUUID)

FOUNDATION_EXPORT void JavaUtilUUID_initWithLong_withLong_(JavaUtilUUID *self, jlong mostSigBits, jlong leastSigBits);

FOUNDATION_EXPORT JavaUtilUUID *new_JavaUtilUUID_initWithLong_withLong_(jlong mostSigBits, jlong leastSigBits) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilUUID *create_JavaUtilUUID_initWithLong_withLong_(jlong mostSigBits, jlong leastSigBits);

FOUNDATION_EXPORT JavaUtilUUID *JavaUtilUUID_randomUUID(void);

FOUNDATION_EXPORT JavaUtilUUID *JavaUtilUUID_nameUUIDFromBytesWithByteArray_(IOSByteArray *name);

FOUNDATION_EXPORT JavaUtilUUID *JavaUtilUUID_fromStringWithNSString_(NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilUUID)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilUUID")
