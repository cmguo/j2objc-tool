//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/EnumMap.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaUtilEnumMap")
#ifdef RESTRICT_JavaUtilEnumMap
#define INCLUDE_ALL_JavaUtilEnumMap 0
#else
#define INCLUDE_ALL_JavaUtilEnumMap 1
#endif
#undef RESTRICT_JavaUtilEnumMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilEnumMap_) && (INCLUDE_ALL_JavaUtilEnumMap || defined(INCLUDE_JavaUtilEnumMap))
#define JavaUtilEnumMap_

#define RESTRICT_JavaUtilAbstractMap 1
#define INCLUDE_JavaUtilAbstractMap 1
#include <JRE/java/util/AbstractMap.h>

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include <JRE/java/io/Serializable.h>

@class IOSClass;
@class JavaLangEnum;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

/*!
 @brief A specialized <code>Map</code> implementation for use with enum type keys.All
  of the keys in an enum map must come from a single enum type that is
  specified, explicitly or implicitly, when the map is created.
 Enum maps
  are represented internally as arrays.  This representation is extremely
  compact and efficient. 
 <p>Enum maps are maintained in the <i>natural order</i> of their keys
  (the order in which the enum constants are declared).  This is reflected
  in the iterators returned by the collections views (<code>keySet()</code>,
  <code>entrySet()</code>, and <code>values()</code>).
  
 <p>Iterators returned by the collection views are <i>weakly consistent</i>:
  they will never throw <code>ConcurrentModificationException</code> and they may
  or may not show the effects of any modifications to the map that occur while
  the iteration is in progress. 
 <p>Null keys are not permitted.  Attempts to insert a null key will
  throw <code>NullPointerException</code>.  Attempts to test for the
  presence of a null key or to remove one will, however, function properly.
  Null values are permitted. 
 <P>Like most collection implementations <tt>EnumMap</tt> is not
  synchronized. If multiple threads access an enum map concurrently, and at
  least one of the threads modifies the map, it should be synchronized
  externally.  This is typically accomplished by synchronizing on some
  object that naturally encapsulates the enum map.  If no such object exists,
  the map should be "wrapped" using the <code>Collections.synchronizedMap</code>
  method.  This is best done at creation time, to prevent accidental
  unsynchronized access: 
 @code

      Map&lt;EnumKey, V&gt; m
          = Collections.synchronizedMap(new EnumMap&lt;EnumKey, V&gt;(...));
   
@endcode
  
 <p>Implementation note: All basic operations execute in constant time.
  They are likely (though not guaranteed) to be faster than their 
 <code>HashMap</code> counterparts. 
 <p>This class is a member of the 
 <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/collections/index.html">
  Java Collections Framework</a>.
 @author Josh Bloch
 - seealso: EnumSet
 @since 1.5
 */
@interface JavaUtilEnumMap : JavaUtilAbstractMap < JavaIoSerializable, NSCopying >

#pragma mark Public

/*!
 @brief Creates an empty enum map with the specified key type.
 @param keyType the class object of the key type for this enum map
 @throw NullPointerExceptionif <tt>keyType</tt> is null
 */
- (instancetype __nonnull)initWithIOSClass:(IOSClass *)keyType;

/*!
 @brief Creates an enum map with the same key type as the specified enum
  map, initially containing the same mappings (if any).
 @param m the enum map from which to initialize this enum map
 @throw NullPointerExceptionif <tt>m</tt> is null
 */
- (instancetype __nonnull)initWithJavaUtilEnumMap:(JavaUtilEnumMap *)m;

/*!
 @brief Creates an enum map initialized from the specified map.If the
  specified map is an <tt>EnumMap</tt> instance, this constructor behaves
  identically to <code>EnumMap(EnumMap)</code>.
 Otherwise, the specified map
  must contain at least one mapping (in order to determine the new
  enum map's key type).
 @param m the map from which to initialize this enum map
 @throw IllegalArgumentExceptionif <tt>m</tt> is not an
      <tt>EnumMap</tt> instance and contains no mappings
 @throw NullPointerExceptionif <tt>m</tt> is null
 */
- (instancetype __nonnull)initWithJavaUtilMap:(id<JavaUtilMap>)m;

/*!
 @brief Removes all mappings from this map.
 */
- (void)clear;

/*!
 @brief Returns a shallow copy of this enum map.
 (The values themselves
  are not cloned.
 @return a shallow copy of this enum map
 */
- (JavaUtilEnumMap *)java_clone;

/*!
 @brief Returns <tt>true</tt> if this map contains a mapping for the specified
  key.
 @param key the key whose presence in this map is to be tested
 @return <tt>true</tt> if this map contains a mapping for the specified
             key
 */
- (jboolean)containsKeyWithId:(id)key;

/*!
 @brief Returns <tt>true</tt> if this map maps one or more keys to the
  specified value.
 @param value the value whose presence in this map is to be tested
 @return <tt>true</tt> if this map maps one or more keys to this value
 */
- (jboolean)containsValueWithId:(id)value;

/*!
 @brief Returns a <code>Set</code> view of the mappings contained in this map.
 The returned set obeys the general contract outlined in 
 <code>Map.keySet()</code>.  The set's iterator will return the
  mappings in the order their keys appear in map, which is their
  natural order (the order in which the enum constants are declared).
 @return a set view of the mappings contained in this enum map
 */
- (id<JavaUtilSet>)entrySet;

/*!
 @brief Compares the specified object with this map for equality.Returns
  <tt>true</tt> if the given object is also a map and the two maps
  represent the same mappings, as specified in the <code>Map.equals(Object)</code>
  contract.
 @param o the object to be compared for equality with this map
 @return <tt>true</tt> if the specified object is equal to this map
 */
- (jboolean)isEqual:(id)o;

/*!
 @brief Returns the value to which the specified key is mapped,
  or <code>null</code> if this map contains no mapping for the key.
 <p>More formally, if this map contains a mapping from a key 
 <code>k</code> to a value <code>v</code> such that <code>(key == k)</code>,
  then this method returns <code>v</code>; otherwise it returns 
 <code>null</code>.  (There can be at most one such mapping.) 
 <p>A return value of <code>null</code> does not <i>necessarily</i>
  indicate that the map contains no mapping for the key; it's also
  possible that the map explicitly maps the key to <code>null</code>.
  The <code>containsKey</code> operation may be used to
  distinguish these two cases.
 */
- (id)getWithId:(id)key;

/*!
 @brief Returns the hash code value for this map.The hash code of a map is
  defined to be the sum of the hash codes of each entry in the map.
 */
- (NSUInteger)hash;

/*!
 @brief Returns a <code>Set</code> view of the keys contained in this map.
 The returned set obeys the general contract outlined in 
 <code>Map.keySet()</code>.  The set's iterator will return the keys
  in their natural order (the order in which the enum constants
  are declared).
 @return a set view of the keys contained in this enum map
 */
- (id<JavaUtilSet>)keySet;

/*!
 @brief Associates the specified value with the specified key in this map.
 If the map previously contained a mapping for this key, the old
  value is replaced.
 @param key the key with which the specified value is to be associated
 @param value the value to be associated with the specified key
 @return the previous value associated with specified key, or
      <tt>null</tt> if there was no mapping for key.  (A <tt>null</tt>
      return can also indicate that the map previously associated     
 <tt>null</tt> with the specified key.)
 @throw NullPointerExceptionif the specified key is null
 */
- (id)putWithId:(JavaLangEnum *)key
         withId:(id)value;

/*!
 @brief Copies all of the mappings from the specified map to this map.
 These mappings will replace any mappings that this map had for
  any of the keys currently in the specified map.
 @param m the mappings to be stored in this map
 @throw NullPointerExceptionthe specified map is null, or if
      one or more keys in the specified map are null
 */
- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)m;

/*!
 @brief Removes the mapping for this key from this map if present.
 @param key the key whose mapping is to be removed from the map
 @return the previous value associated with specified key, or
      <tt>null</tt> if there was no entry for key.  (A <tt>null</tt>
      return can also indicate that the map previously associated     
 <tt>null</tt> with the specified key.)
 */
- (id)removeWithId:(id)key;

/*!
 @brief Returns the number of key-value mappings in this map.
 @return the number of key-value mappings in this map
 */
- (jint)size;

/*!
 @brief Returns a <code>Collection</code> view of the values contained in this map.
 The returned collection obeys the general contract outlined in 
 <code>Map.values()</code>.  The collection's iterator will return the
  values in the order their corresponding keys appear in map,
  which is their natural order (the order in which the enum constants
  are declared).
 @return a collection view of the values contained in this map
 */
- (id<JavaUtilCollection>)values;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(JavaUtilEnumMap)

FOUNDATION_EXPORT void JavaUtilEnumMap_initWithIOSClass_(JavaUtilEnumMap *self, IOSClass *keyType);

FOUNDATION_EXPORT JavaUtilEnumMap *new_JavaUtilEnumMap_initWithIOSClass_(IOSClass *keyType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilEnumMap *create_JavaUtilEnumMap_initWithIOSClass_(IOSClass *keyType);

FOUNDATION_EXPORT void JavaUtilEnumMap_initWithJavaUtilEnumMap_(JavaUtilEnumMap *self, JavaUtilEnumMap *m);

FOUNDATION_EXPORT JavaUtilEnumMap *new_JavaUtilEnumMap_initWithJavaUtilEnumMap_(JavaUtilEnumMap *m) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilEnumMap *create_JavaUtilEnumMap_initWithJavaUtilEnumMap_(JavaUtilEnumMap *m);

FOUNDATION_EXPORT void JavaUtilEnumMap_initWithJavaUtilMap_(JavaUtilEnumMap *self, id<JavaUtilMap> m);

FOUNDATION_EXPORT JavaUtilEnumMap *new_JavaUtilEnumMap_initWithJavaUtilMap_(id<JavaUtilMap> m) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilEnumMap *create_JavaUtilEnumMap_initWithJavaUtilMap_(id<JavaUtilMap> m);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilEnumMap)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilEnumMap")
