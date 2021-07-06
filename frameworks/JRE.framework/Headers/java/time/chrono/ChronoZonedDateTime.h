//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/chrono/ChronoZonedDateTime.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaTimeChronoChronoZonedDateTime")
#ifdef RESTRICT_JavaTimeChronoChronoZonedDateTime
#define INCLUDE_ALL_JavaTimeChronoChronoZonedDateTime 0
#else
#define INCLUDE_ALL_JavaTimeChronoChronoZonedDateTime 1
#endif
#undef RESTRICT_JavaTimeChronoChronoZonedDateTime

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeChronoChronoZonedDateTime_) && (INCLUDE_ALL_JavaTimeChronoChronoZonedDateTime || defined(INCLUDE_JavaTimeChronoChronoZonedDateTime))
#define JavaTimeChronoChronoZonedDateTime_

#define RESTRICT_JavaTimeTemporalTemporal 1
#define INCLUDE_JavaTimeTemporalTemporal 1
#include <JRE/java/time/temporal/Temporal.h>

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include <JRE/java/lang/Comparable.h>

@class JavaTimeFormatDateTimeFormatter;
@class JavaTimeInstant;
@class JavaTimeLocalTime;
@class JavaTimeTemporalValueRange;
@class JavaTimeZoneId;
@class JavaTimeZoneOffset;
@protocol JavaTimeChronoChronoLocalDate;
@protocol JavaTimeChronoChronoLocalDateTime;
@protocol JavaTimeChronoChronology;
@protocol JavaTimeTemporalTemporalAccessor;
@protocol JavaTimeTemporalTemporalAdjuster;
@protocol JavaTimeTemporalTemporalAmount;
@protocol JavaTimeTemporalTemporalField;
@protocol JavaTimeTemporalTemporalQuery;
@protocol JavaTimeTemporalTemporalUnit;
@protocol JavaUtilComparator;

/*!
 @brief A date-time with a time-zone in an arbitrary chronology,
  intended for advanced globalization use cases.
 <p>
  <b>Most applications should declare method signatures, fields and variables
  as <code>ZonedDateTime</code>, not this interface.</b>
  <p>
  A <code>ChronoZonedDateTime</code> is the abstract representation of an offset date-time
  where the <code>Chronology chronology</code>, or calendar system, is pluggable.
  The date-time is defined in terms of fields expressed by <code>TemporalField</code>,
  where most common implementations are defined in <code>ChronoField</code>.
  The chronology defines how the calendar system operates and the meaning of
  the standard fields. 
 <h3>When to use this interface</h3>
  The design of the API encourages the use of <code>ZonedDateTime</code> rather than this
  interface, even in the case where the application needs to deal with multiple
  calendar systems. The rationale for this is explored in detail in <code>ChronoLocalDate</code>.
  <p>
  Ensure that the discussion in <code>ChronoLocalDate</code> has been read and understood
  before using this interface.
 @since 1.8
 */
@protocol JavaTimeChronoChronoZonedDateTime < JavaTimeTemporalTemporal, JavaLangComparable, JavaObject >

- (JavaTimeTemporalValueRange *)rangeWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

- (jint)getWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

- (jlong)getLongWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Gets the local date part of this date-time.
 <p>
  This returns a local date with the same year, month and day
  as this date-time.
 @return the date part of this date-time, not null
 */
- (id<JavaTimeChronoChronoLocalDate>)toLocalDate;

/*!
 @brief Gets the local time part of this date-time.
 <p>
  This returns a local time with the same hour, minute, second and
  nanosecond as this date-time.
 @return the time part of this date-time, not null
 */
- (JavaTimeLocalTime *)toLocalTime;

/*!
 @brief Gets the local date-time part of this date-time.
 <p>
  This returns a local date with the same year, month and day
  as this date-time.
 @return the local date-time part of this date-time, not null
 */
- (id<JavaTimeChronoChronoLocalDateTime>)toLocalDateTime;

/*!
 @brief Gets the chronology of this date-time.
 <p>
  The <code>Chronology</code> represents the calendar system in use.
  The era and other fields in <code>ChronoField</code> are defined by the chronology.
 @return the chronology, not null
 */
- (id<JavaTimeChronoChronology>)getChronology;

/*!
 @brief Gets the zone offset, such as '+01:00'.
 <p>
  This is the offset of the local date-time from UTC/Greenwich.
 @return the zone offset, not null
 */
- (JavaTimeZoneOffset *)getOffset;

/*!
 @brief Gets the zone ID, such as 'Europe/Paris'.
 <p>
  This returns the stored time-zone id used to determine the time-zone rules.
 @return the zone ID, not null
 */
- (JavaTimeZoneId *)getZone;

/*!
 @brief Returns a copy of this date-time changing the zone offset to the
  earlier of the two valid offsets at a local time-line overlap.
 <p>
  This method only has any effect when the local time-line overlaps, such as
  at an autumn daylight savings cutover. In this scenario, there are two
  valid offsets for the local date-time. Calling this method will return
  a zoned date-time with the earlier of the two selected. 
 <p>
  If this method is called when it is not an overlap, <code>this</code>
  is returned. 
 <p>
  This instance is immutable and unaffected by this method call.
 @return a <code>ChronoZonedDateTime</code> based on this date-time with the earlier offset, not null
 @throw DateTimeExceptionif no rules can be found for the zone
 @throw DateTimeExceptionif no rules are valid for this date-time
 */
- (id<JavaTimeChronoChronoZonedDateTime>)withEarlierOffsetAtOverlap;

/*!
 @brief Returns a copy of this date-time changing the zone offset to the
  later of the two valid offsets at a local time-line overlap.
 <p>
  This method only has any effect when the local time-line overlaps, such as
  at an autumn daylight savings cutover. In this scenario, there are two
  valid offsets for the local date-time. Calling this method will return
  a zoned date-time with the later of the two selected. 
 <p>
  If this method is called when it is not an overlap, <code>this</code>
  is returned. 
 <p>
  This instance is immutable and unaffected by this method call.
 @return a <code>ChronoZonedDateTime</code> based on this date-time with the later offset, not null
 @throw DateTimeExceptionif no rules can be found for the zone
 @throw DateTimeExceptionif no rules are valid for this date-time
 */
- (id<JavaTimeChronoChronoZonedDateTime>)withLaterOffsetAtOverlap;

/*!
 @brief Returns a copy of this date-time with a different time-zone,
  retaining the local date-time if possible.
 <p>
  This method changes the time-zone and retains the local date-time.
  The local date-time is only changed if it is invalid for the new zone. 
 <p>
  To change the zone and adjust the local date-time,
  use <code>withZoneSameInstant(ZoneId)</code>.
  <p>
  This instance is immutable and unaffected by this method call.
 @param zone the time-zone to change to, not null
 @return a <code>ChronoZonedDateTime</code> based on this date-time with the requested zone, not null
 */
- (id<JavaTimeChronoChronoZonedDateTime>)withZoneSameLocalWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

/*!
 @brief Returns a copy of this date-time with a different time-zone,
  retaining the instant.
 <p>
  This method changes the time-zone and retains the instant.
  This normally results in a change to the local date-time. 
 <p>
  This method is based on retaining the same instant, thus gaps and overlaps
  in the local time-line have no effect on the result. 
 <p>
  To change the offset while keeping the local time,
  use <code>withZoneSameLocal(ZoneId)</code>.
 @param zone the time-zone to change to, not null
 @return a <code>ChronoZonedDateTime</code> based on this date-time with the requested zone, not null
 @throw DateTimeExceptionif the result exceeds the supported date range
 */
- (id<JavaTimeChronoChronoZonedDateTime>)withZoneSameInstantWithJavaTimeZoneId:(JavaTimeZoneId *)zone;

/*!
 @brief Checks if the specified field is supported.
 <p>
  This checks if the specified field can be queried on this date-time.
  If false, then calling the <code>range</code>,
  <code>get</code> and <code>with(TemporalField, long)</code>
  methods will throw an exception. 
 <p>
  The set of supported fields is defined by the chronology and normally includes
  all <code>ChronoField</code> fields. 
 <p>
  If the field is not a <code>ChronoField</code>, then the result of this method
  is obtained by invoking <code>TemporalField.isSupportedBy(TemporalAccessor)</code>
  passing <code>this</code> as the argument.
  Whether the field is supported is determined by the field.
 @param field the field to check, null returns false
 @return true if the field can be queried, false if not
 */
- (jboolean)isSupportedWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field;

/*!
 @brief Checks if the specified unit is supported.
 <p>
  This checks if the specified unit can be added to or subtracted from this date-time.
  If false, then calling the <code>plus(long, TemporalUnit)</code> and 
 <code>minus</code> methods will throw an exception. 
 <p>
  The set of supported units is defined by the chronology and normally includes
  all <code>ChronoUnit</code> units except <code>FOREVER</code>.
  <p>
  If the unit is not a <code>ChronoUnit</code>, then the result of this method
  is obtained by invoking <code>TemporalUnit.isSupportedBy(Temporal)</code>
  passing <code>this</code> as the argument.
  Whether the unit is supported is determined by the unit.
 @param unit the unit to check, null returns false
 @return true if the unit can be added/subtracted, false if not
 */
- (jboolean)isSupportedWithJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @throw DateTimeException
 @throw ArithmeticException
 */
- (id<JavaTimeChronoChronoZonedDateTime>)withWithJavaTimeTemporalTemporalAdjuster:(id<JavaTimeTemporalTemporalAdjuster>)adjuster;

/*!
 @throw DateTimeException
 @throw ArithmeticException
 */
- (id<JavaTimeChronoChronoZonedDateTime>)withWithJavaTimeTemporalTemporalField:(id<JavaTimeTemporalTemporalField>)field
                                                                      withLong:(jlong)newValue;

/*!
 @throw DateTimeException
 @throw ArithmeticException
 */
- (id<JavaTimeChronoChronoZonedDateTime>)plusWithJavaTimeTemporalTemporalAmount:(id<JavaTimeTemporalTemporalAmount>)amount;

/*!
 @throw DateTimeException
 @throw ArithmeticException
 */
- (id<JavaTimeChronoChronoZonedDateTime>)plusWithLong:(jlong)amountToAdd
                     withJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @throw DateTimeException
 @throw ArithmeticException
 */
- (id<JavaTimeChronoChronoZonedDateTime>)minusWithJavaTimeTemporalTemporalAmount:(id<JavaTimeTemporalTemporalAmount>)amount;

/*!
 @throw DateTimeException
 @throw ArithmeticException
 */
- (id<JavaTimeChronoChronoZonedDateTime>)minusWithLong:(jlong)amountToSubtract
                      withJavaTimeTemporalTemporalUnit:(id<JavaTimeTemporalTemporalUnit>)unit;

/*!
 @brief Queries this date-time using the specified query.
 <p>
  This queries this date-time using the specified query strategy object.
  The <code>TemporalQuery</code> object defines the logic to be used to
  obtain the result. Read the documentation of the query to understand
  what the result of this method will be. 
 <p>
  The result of this method is obtained by invoking the 
 <code>TemporalQuery.queryFrom(TemporalAccessor)</code> method on the
  specified query passing <code>this</code> as the argument.
 @param query the query to invoke, not null
 @return the query result, null may be returned (defined by the query)
 @throw DateTimeExceptionif unable to query (defined by the query)
 @throw ArithmeticExceptionif numeric overflow occurs (defined by the query)
 */
- (id)queryWithJavaTimeTemporalTemporalQuery:(id<JavaTimeTemporalTemporalQuery>)query;

/*!
 @brief Formats this date-time using the specified formatter.
 <p>
  This date-time will be passed to the formatter to produce a string. 
 <p>
  The default implementation must behave as follows: 
 @code

   return formatter.format(this); 
  
@endcode
 @param formatter the formatter to use, not null
 @return the formatted date-time string, not null
 @throw DateTimeExceptionif an error occurs during printing
 */
- (NSString *)formatWithJavaTimeFormatDateTimeFormatter:(JavaTimeFormatDateTimeFormatter *)formatter;

/*!
 @brief Converts this date-time to an <code>Instant</code>.
 <p>
  This returns an <code>Instant</code> representing the same point on the
  time-line as this date-time. The calculation combines the 
 local date-time and 
 offset.
 @return an <code>Instant</code> representing the same instant, not null
 */
- (JavaTimeInstant *)toInstant;

/*!
 @brief Converts this date-time to the number of seconds from the epoch
  of 1970-01-01T00:00:00Z.
 <p>
  This uses the local date-time and 
 offset to calculate the epoch-second value,
  which is the number of elapsed seconds from 1970-01-01T00:00:00Z.
  Instants on the time-line after the epoch are positive, earlier are negative.
 @return the number of seconds from the epoch of 1970-01-01T00:00:00Z
 */
- (jlong)toEpochSecond;

/*!
 @brief Compares this date-time to another date-time, including the chronology.
 <p>
  The comparison is based first on the instant, then on the local date-time,
  then on the zone ID, then on the chronology.
  It is "consistent with equals", as defined by <code>Comparable</code>.
  <p>
  If all the date-time objects being compared are in the same chronology, then the
  additional chronology stage is not required. 
 <p>
  This default implementation performs the comparison defined above.
 @param other the other date-time to compare to, not null
 @return the comparator value, negative if less, positive if greater
 */
- (jint)compareToWithId:(id<JavaTimeChronoChronoZonedDateTime>)other;

/*!
 @brief Checks if the instant of this date-time is before that of the specified date-time.
 <p>
  This method differs from the comparison in <code>compareTo</code> in that it
  only compares the instant of the date-time. This is equivalent to using 
 <code>dateTime1.toInstant().isBefore(dateTime2.toInstant());</code>.
  <p>
  This default implementation performs the comparison based on the epoch-second
  and nano-of-second.
 @param other the other date-time to compare to, not null
 @return true if this point is before the specified date-time
 */
- (jboolean)isBeforeWithJavaTimeChronoChronoZonedDateTime:(id<JavaTimeChronoChronoZonedDateTime>)other;

/*!
 @brief Checks if the instant of this date-time is after that of the specified date-time.
 <p>
  This method differs from the comparison in <code>compareTo</code> in that it
  only compares the instant of the date-time. This is equivalent to using 
 <code>dateTime1.toInstant().isAfter(dateTime2.toInstant());</code>.
  <p>
  This default implementation performs the comparison based on the epoch-second
  and nano-of-second.
 @param other the other date-time to compare to, not null
 @return true if this is after the specified date-time
 */
- (jboolean)isAfterWithJavaTimeChronoChronoZonedDateTime:(id<JavaTimeChronoChronoZonedDateTime>)other;

/*!
 @brief Checks if the instant of this date-time is equal to that of the specified date-time.
 <p>
  This method differs from the comparison in <code>compareTo</code> and <code>equals</code>
  in that it only compares the instant of the date-time. This is equivalent to using 
 <code>dateTime1.toInstant().equals(dateTime2.toInstant());</code>.
  <p>
  This default implementation performs the comparison based on the epoch-second
  and nano-of-second.
 @param other the other date-time to compare to, not null
 @return true if the instant equals the instant of the specified date-time
 */
- (jboolean)isEqualWithJavaTimeChronoChronoZonedDateTime:(id<JavaTimeChronoChronoZonedDateTime>)other;

/*!
 @brief Checks if this date-time is equal to another date-time.
 <p>
  The comparison is based on the offset date-time and the zone.
  To compare for the same instant on the time-line, use <code>compareTo</code>.
  Only objects of type <code>ChronoZonedDateTime</code> are compared, other types return false.
 @param obj the object to check, null returns false
 @return true if this is equal to the other date-time
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief A hash code for this date-time.
 @return a suitable hash code
 */
- (NSUInteger)hash;

/*!
 @brief Outputs this date-time as a <code>String</code>.
 <p>
  The output will include the full zoned date-time.
 @return a string representation of this date-time, not null
 */
- (NSString *)description;

@end

@interface JavaTimeChronoChronoZonedDateTime : NSObject

/*!
 @brief Gets a comparator that compares <code>ChronoZonedDateTime</code> in
  time-line order ignoring the chronology.
 <p>
  This comparator differs from the comparison in <code>compareTo</code> in that it
  only compares the underlying instant and not the chronology.
  This allows dates in different calendar systems to be compared based
  on the position of the date-time on the instant time-line.
  The underlying comparison is equivalent to comparing the epoch-second and nano-of-second.
 @return a comparator that compares in time-line order ignoring the chronology
 - seealso: #isAfter
 - seealso: #isBefore
 - seealso: #isEqual
 */
+ (id<JavaUtilComparator>)timeLineOrder;

/*!
 @brief Obtains an instance of <code>ChronoZonedDateTime</code> from a temporal object.
 <p>
  This creates a zoned date-time based on the specified temporal.
  A <code>TemporalAccessor</code> represents an arbitrary set of date and time information,
  which this factory converts to an instance of <code>ChronoZonedDateTime</code>.
  <p>
  The conversion extracts and combines the chronology, date, time and zone
  from the temporal object. The behavior is equivalent to using 
 <code>Chronology.zonedDateTime(TemporalAccessor)</code> with the extracted chronology.
  Implementations are permitted to perform optimizations such as accessing
  those fields that are equivalent to the relevant objects. 
 <p>
  This method matches the signature of the functional interface <code>TemporalQuery</code>
  allowing it to be used as a query via method reference, <code>ChronoZonedDateTime::from</code>.
 @param temporal the temporal object to convert, not null
 @return the date-time, not null
 @throw DateTimeExceptionif unable to convert to a <code>ChronoZonedDateTime</code>
 - seealso: Chronology#zonedDateTime(TemporalAccessor)
 */
+ (id<JavaTimeChronoChronoZonedDateTime>)fromWithJavaTimeTemporalTemporalAccessor:(id<JavaTimeTemporalTemporalAccessor>)temporal;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeChronoChronoZonedDateTime)

FOUNDATION_EXPORT id<JavaUtilComparator> JavaTimeChronoChronoZonedDateTime_timeLineOrder(void);

FOUNDATION_EXPORT id<JavaTimeChronoChronoZonedDateTime> JavaTimeChronoChronoZonedDateTime_fromWithJavaTimeTemporalTemporalAccessor_(id<JavaTimeTemporalTemporalAccessor> temporal);

FOUNDATION_EXPORT JavaTimeTemporalValueRange *JavaTimeChronoChronoZonedDateTime_rangeWithJavaTimeTemporalTemporalField_(id<JavaTimeChronoChronoZonedDateTime> self, id<JavaTimeTemporalTemporalField> field);

FOUNDATION_EXPORT jint JavaTimeChronoChronoZonedDateTime_getWithJavaTimeTemporalTemporalField_(id<JavaTimeChronoChronoZonedDateTime> self, id<JavaTimeTemporalTemporalField> field);

FOUNDATION_EXPORT jlong JavaTimeChronoChronoZonedDateTime_getLongWithJavaTimeTemporalTemporalField_(id<JavaTimeChronoChronoZonedDateTime> self, id<JavaTimeTemporalTemporalField> field);

FOUNDATION_EXPORT id<JavaTimeChronoChronoLocalDate> JavaTimeChronoChronoZonedDateTime_toLocalDate(id<JavaTimeChronoChronoZonedDateTime> self);

FOUNDATION_EXPORT JavaTimeLocalTime *JavaTimeChronoChronoZonedDateTime_toLocalTime(id<JavaTimeChronoChronoZonedDateTime> self);

FOUNDATION_EXPORT id<JavaTimeChronoChronology> JavaTimeChronoChronoZonedDateTime_getChronology(id<JavaTimeChronoChronoZonedDateTime> self);

FOUNDATION_EXPORT jboolean JavaTimeChronoChronoZonedDateTime_isSupportedWithJavaTimeTemporalTemporalUnit_(id<JavaTimeChronoChronoZonedDateTime> self, id<JavaTimeTemporalTemporalUnit> unit);

FOUNDATION_EXPORT id<JavaTimeChronoChronoZonedDateTime> JavaTimeChronoChronoZonedDateTime_withWithJavaTimeTemporalTemporalAdjuster_(id<JavaTimeChronoChronoZonedDateTime> self, id<JavaTimeTemporalTemporalAdjuster> adjuster);

FOUNDATION_EXPORT id<JavaTimeChronoChronoZonedDateTime> JavaTimeChronoChronoZonedDateTime_plusWithJavaTimeTemporalTemporalAmount_(id<JavaTimeChronoChronoZonedDateTime> self, id<JavaTimeTemporalTemporalAmount> amount);

FOUNDATION_EXPORT id<JavaTimeChronoChronoZonedDateTime> JavaTimeChronoChronoZonedDateTime_minusWithJavaTimeTemporalTemporalAmount_(id<JavaTimeChronoChronoZonedDateTime> self, id<JavaTimeTemporalTemporalAmount> amount);

FOUNDATION_EXPORT id<JavaTimeChronoChronoZonedDateTime> JavaTimeChronoChronoZonedDateTime_minusWithLong_withJavaTimeTemporalTemporalUnit_(id<JavaTimeChronoChronoZonedDateTime> self, jlong amountToSubtract, id<JavaTimeTemporalTemporalUnit> unit);

FOUNDATION_EXPORT id JavaTimeChronoChronoZonedDateTime_queryWithJavaTimeTemporalTemporalQuery_(id<JavaTimeChronoChronoZonedDateTime> self, id<JavaTimeTemporalTemporalQuery> query);

FOUNDATION_EXPORT NSString *JavaTimeChronoChronoZonedDateTime_formatWithJavaTimeFormatDateTimeFormatter_(id<JavaTimeChronoChronoZonedDateTime> self, JavaTimeFormatDateTimeFormatter *formatter);

FOUNDATION_EXPORT JavaTimeInstant *JavaTimeChronoChronoZonedDateTime_toInstant(id<JavaTimeChronoChronoZonedDateTime> self);

FOUNDATION_EXPORT jlong JavaTimeChronoChronoZonedDateTime_toEpochSecond(id<JavaTimeChronoChronoZonedDateTime> self);

FOUNDATION_EXPORT jint JavaTimeChronoChronoZonedDateTime_compareToWithJavaTimeChronoChronoZonedDateTime_(id<JavaTimeChronoChronoZonedDateTime> self, id<JavaTimeChronoChronoZonedDateTime> other);

FOUNDATION_EXPORT jboolean JavaTimeChronoChronoZonedDateTime_isBeforeWithJavaTimeChronoChronoZonedDateTime_(id<JavaTimeChronoChronoZonedDateTime> self, id<JavaTimeChronoChronoZonedDateTime> other);

FOUNDATION_EXPORT jboolean JavaTimeChronoChronoZonedDateTime_isAfterWithJavaTimeChronoChronoZonedDateTime_(id<JavaTimeChronoChronoZonedDateTime> self, id<JavaTimeChronoChronoZonedDateTime> other);

FOUNDATION_EXPORT jboolean JavaTimeChronoChronoZonedDateTime_isEqualWithJavaTimeChronoChronoZonedDateTime_(id<JavaTimeChronoChronoZonedDateTime> self, id<JavaTimeChronoChronoZonedDateTime> other);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeChronoChronoZonedDateTime)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTimeChronoChronoZonedDateTime")
