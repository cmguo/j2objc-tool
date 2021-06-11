//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/temporal/TemporalAmount.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTimeTemporalTemporalAmount")
#ifdef RESTRICT_JavaTimeTemporalTemporalAmount
#define INCLUDE_ALL_JavaTimeTemporalTemporalAmount 0
#else
#define INCLUDE_ALL_JavaTimeTemporalTemporalAmount 1
#endif
#undef RESTRICT_JavaTimeTemporalTemporalAmount

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeTemporalTemporalAmount_) && (INCLUDE_ALL_JavaTimeTemporalTemporalAmount || defined(INCLUDE_JavaTimeTemporalTemporalAmount))
#define JavaTimeTemporalTemporalAmount_

@protocol JavaTimeTemporalTemporal;
@protocol JavaTimeTemporalTemporalUnit;
@protocol JavaUtilList;

/*!
 @brief Framework-level interface defining an amount of time, such as
  "6 hours", "8 days" or "2 years and 3 months".
 <p>
  This is the base interface type for amounts of time.
  An amount is distinct from a date or time-of-day in that it is not tied
  to any specific point on the time-line. 
 <p>
  The amount can be thought of as a <code>Map</code> of <code>TemporalUnit</code> to 
 <code>long</code>, exposed via <code>getUnits()</code> and <code>get(TemporalUnit)</code>.
  A simple case might have a single unit-value pair, such as "6 hours".
  A more complex case may have multiple unit-value pairs, such as
  "7 years, 3 months and 5 days". 
 <p>
  There are two common implementations. 
 <code>Period</code> is a date-based implementation, storing years, months and days. 
 <code>Duration</code> is a time-based implementation, storing seconds and nanoseconds,
  but providing some access using other duration based units such as minutes,
  hours and fixed 24-hour days. 
 <p>
  This interface is a framework-level interface that should not be widely
  used in application code. Instead, applications should create and pass
  around instances of concrete types, such as <code>Period</code> and <code>Duration</code>.
 @since 1.8
 */
@protocol JavaTimeTemporalTemporalAmount < JavaObject >

/*!
 @brief Returns the value of the requested unit.
 The units returned from <code>getUnits()</code> uniquely define the
  value of the <code>TemporalAmount</code>.  A value must be returned
  for each unit listed in <code>getUnits</code>.
 @param unit the <code>TemporalUnit</code>  for which to return the value
 @return the long value of the unit
 @throw DateTimeExceptionif a value for the unit cannot be obtained
 @throw UnsupportedTemporalTypeExceptionif the <code>unit</code> is not supported
 */
- (jlong)getWithJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @brief Returns the list of units uniquely defining the value of this TemporalAmount.
 The list of <code>TemporalUnits</code> is defined by the implementation class.
  The list is a snapshot of the units at the time <code>getUnits</code>
  is called and is not mutable.
  The units are ordered from longest duration to the shortest duration
  of the unit.
 @return the List of <code>TemporalUnits</code>; not null
 */
- (id<JavaUtilList>)getUnits;

/*!
 @brief Adds to the specified temporal object.
 <p>
  Adds the amount to the specified temporal object using the logic
  encapsulated in the implementing class. 
 <p>
  There are two equivalent ways of using this method.
  The first is to invoke this method directly.
  The second is to use <code>Temporal.plus(TemporalAmount)</code>:
  @code

    // These two lines are equivalent, but the second approach is recommended
    dateTime = amount.addTo(dateTime);
    dateTime = dateTime.plus(adder); 
  
@endcode
  It is recommended to use the second approach, <code>plus(TemporalAmount)</code>,
  as it is a lot clearer to read in code.
 @param temporal the temporal object to add the amount to, not null
 @return an object of the same observable type with the addition made, not null
 @throw DateTimeExceptionif unable to add
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (id<JavaTimeTemporalTemporal>)addToWithJavaTimeTemporalTemporal:(id<JavaTimeTemporalTemporal>)temporal;

/*!
 @brief Subtracts this object from the specified temporal object.
 <p>
  Subtracts the amount from the specified temporal object using the logic
  encapsulated in the implementing class. 
 <p>
  There are two equivalent ways of using this method.
  The first is to invoke this method directly.
  The second is to use <code>Temporal.minus(TemporalAmount)</code>:
  @code

    // these two lines are equivalent, but the second approach is recommended
    dateTime = amount.subtractFrom(dateTime);
    dateTime = dateTime.minus(amount); 
  
@endcode
  It is recommended to use the second approach, <code>minus(TemporalAmount)</code>,
  as it is a lot clearer to read in code.
 @param temporal the temporal object to subtract the amount from, not null
 @return an object of the same observable type with the subtraction made, not null
 @throw DateTimeExceptionif unable to subtract
 @throw ArithmeticExceptionif numeric overflow occurs
 */
- (id<JavaTimeTemporalTemporal>)subtractFromWithJavaTimeTemporalTemporal:(id<JavaTimeTemporalTemporal>)temporal;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeTemporalTemporalAmount)

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeTemporalTemporalAmount)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTimeTemporalTemporalAmount")
