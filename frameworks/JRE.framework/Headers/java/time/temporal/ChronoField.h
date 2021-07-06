//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/temporal/ChronoField.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaTimeTemporalChronoField")
#ifdef RESTRICT_JavaTimeTemporalChronoField
#define INCLUDE_ALL_JavaTimeTemporalChronoField 0
#else
#define INCLUDE_ALL_JavaTimeTemporalChronoField 1
#endif
#undef RESTRICT_JavaTimeTemporalChronoField

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeTemporalChronoField_) && (INCLUDE_ALL_JavaTimeTemporalChronoField || defined(INCLUDE_JavaTimeTemporalChronoField))
#define JavaTimeTemporalChronoField_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include <JRE/java/lang/Enum.h>

#define RESTRICT_JavaTimeTemporalTemporalField 1
#define INCLUDE_JavaTimeTemporalTemporalField 1
#include <JRE/java/time/temporal/TemporalField.h>

@class IOSObjectArray;
@class JavaTimeFormatResolverStyle;
@class JavaTimeTemporalValueRange;
@class JavaUtilLocale;
@protocol JavaTimeTemporalTemporal;
@protocol JavaTimeTemporalTemporalAccessor;
@protocol JavaTimeTemporalTemporalUnit;
@protocol JavaUtilMap;

typedef NS_ENUM(NSUInteger, JavaTimeTemporalChronoField_Enum) {
  JavaTimeTemporalChronoField_Enum_NANO_OF_SECOND = 0,
  JavaTimeTemporalChronoField_Enum_NANO_OF_DAY = 1,
  JavaTimeTemporalChronoField_Enum_MICRO_OF_SECOND = 2,
  JavaTimeTemporalChronoField_Enum_MICRO_OF_DAY = 3,
  JavaTimeTemporalChronoField_Enum_MILLI_OF_SECOND = 4,
  JavaTimeTemporalChronoField_Enum_MILLI_OF_DAY = 5,
  JavaTimeTemporalChronoField_Enum_SECOND_OF_MINUTE = 6,
  JavaTimeTemporalChronoField_Enum_SECOND_OF_DAY = 7,
  JavaTimeTemporalChronoField_Enum_MINUTE_OF_HOUR = 8,
  JavaTimeTemporalChronoField_Enum_MINUTE_OF_DAY = 9,
  JavaTimeTemporalChronoField_Enum_HOUR_OF_AMPM = 10,
  JavaTimeTemporalChronoField_Enum_CLOCK_HOUR_OF_AMPM = 11,
  JavaTimeTemporalChronoField_Enum_HOUR_OF_DAY = 12,
  JavaTimeTemporalChronoField_Enum_CLOCK_HOUR_OF_DAY = 13,
  JavaTimeTemporalChronoField_Enum_AMPM_OF_DAY = 14,
  JavaTimeTemporalChronoField_Enum_DAY_OF_WEEK = 15,
  JavaTimeTemporalChronoField_Enum_ALIGNED_DAY_OF_WEEK_IN_MONTH = 16,
  JavaTimeTemporalChronoField_Enum_ALIGNED_DAY_OF_WEEK_IN_YEAR = 17,
  JavaTimeTemporalChronoField_Enum_DAY_OF_MONTH = 18,
  JavaTimeTemporalChronoField_Enum_DAY_OF_YEAR = 19,
  JavaTimeTemporalChronoField_Enum_EPOCH_DAY = 20,
  JavaTimeTemporalChronoField_Enum_ALIGNED_WEEK_OF_MONTH = 21,
  JavaTimeTemporalChronoField_Enum_ALIGNED_WEEK_OF_YEAR = 22,
  JavaTimeTemporalChronoField_Enum_MONTH_OF_YEAR = 23,
  JavaTimeTemporalChronoField_Enum_PROLEPTIC_MONTH = 24,
  JavaTimeTemporalChronoField_Enum_YEAR_OF_ERA = 25,
  JavaTimeTemporalChronoField_Enum_YEAR = 26,
  JavaTimeTemporalChronoField_Enum_ERA = 27,
  JavaTimeTemporalChronoField_Enum_INSTANT_SECONDS = 28,
  JavaTimeTemporalChronoField_Enum_OFFSET_SECONDS = 29,
};

/*!
 @brief A standard set of fields.
 <p>
  This set of fields provide field-based access to manipulate a date, time or date-time.
  The standard set of fields can be extended by implementing <code>TemporalField</code>.
  <p>
  These fields are intended to be applicable in multiple calendar systems.
  For example, most non-ISO calendar systems define dates as a year, month and day,
  just with slightly different rules.
  The documentation of each field explains how it operates.
 @since 1.8
 */
@interface JavaTimeTemporalChronoField : JavaLangEnum < JavaTimeTemporalTemporalField >

@property (readonly, class, nonnull) JavaTimeTemporalChronoField *NANO_OF_SECOND NS_SWIFT_NAME(NANO_OF_SECOND);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *NANO_OF_DAY NS_SWIFT_NAME(NANO_OF_DAY);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *MICRO_OF_SECOND NS_SWIFT_NAME(MICRO_OF_SECOND);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *MICRO_OF_DAY NS_SWIFT_NAME(MICRO_OF_DAY);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *MILLI_OF_SECOND NS_SWIFT_NAME(MILLI_OF_SECOND);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *MILLI_OF_DAY NS_SWIFT_NAME(MILLI_OF_DAY);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *SECOND_OF_MINUTE NS_SWIFT_NAME(SECOND_OF_MINUTE);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *SECOND_OF_DAY NS_SWIFT_NAME(SECOND_OF_DAY);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *MINUTE_OF_HOUR NS_SWIFT_NAME(MINUTE_OF_HOUR);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *MINUTE_OF_DAY NS_SWIFT_NAME(MINUTE_OF_DAY);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *HOUR_OF_AMPM NS_SWIFT_NAME(HOUR_OF_AMPM);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *CLOCK_HOUR_OF_AMPM NS_SWIFT_NAME(CLOCK_HOUR_OF_AMPM);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *HOUR_OF_DAY NS_SWIFT_NAME(HOUR_OF_DAY);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *CLOCK_HOUR_OF_DAY NS_SWIFT_NAME(CLOCK_HOUR_OF_DAY);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *AMPM_OF_DAY NS_SWIFT_NAME(AMPM_OF_DAY);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *DAY_OF_WEEK NS_SWIFT_NAME(DAY_OF_WEEK);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *ALIGNED_DAY_OF_WEEK_IN_MONTH NS_SWIFT_NAME(ALIGNED_DAY_OF_WEEK_IN_MONTH);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *ALIGNED_DAY_OF_WEEK_IN_YEAR NS_SWIFT_NAME(ALIGNED_DAY_OF_WEEK_IN_YEAR);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *DAY_OF_MONTH NS_SWIFT_NAME(DAY_OF_MONTH);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *DAY_OF_YEAR NS_SWIFT_NAME(DAY_OF_YEAR);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *EPOCH_DAY NS_SWIFT_NAME(EPOCH_DAY);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *ALIGNED_WEEK_OF_MONTH NS_SWIFT_NAME(ALIGNED_WEEK_OF_MONTH);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *ALIGNED_WEEK_OF_YEAR NS_SWIFT_NAME(ALIGNED_WEEK_OF_YEAR);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *MONTH_OF_YEAR NS_SWIFT_NAME(MONTH_OF_YEAR);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *PROLEPTIC_MONTH NS_SWIFT_NAME(PROLEPTIC_MONTH);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *YEAR_OF_ERA NS_SWIFT_NAME(YEAR_OF_ERA);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *YEAR NS_SWIFT_NAME(YEAR);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *ERA NS_SWIFT_NAME(ERA);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *INSTANT_SECONDS NS_SWIFT_NAME(INSTANT_SECONDS);
@property (readonly, class, nonnull) JavaTimeTemporalChronoField *OFFSET_SECONDS NS_SWIFT_NAME(OFFSET_SECONDS);
#pragma mark Public

- (id<JavaTimeTemporalTemporal>)adjustIntoWithJavaTimeTemporalTemporal:(id<JavaTimeTemporalTemporal>)temporal
                                                              withLong:(jlong)newValue;

/*!
 @brief Checks that the specified value is valid and fits in an <code>int</code>.
 <p>
  This validates that the value is within the outer range of valid values
  returned by <code>range()</code>.
  It also checks that all valid values are within the bounds of an <code>int</code>.
  <p>
  This method checks against the range of the field in the ISO-8601 calendar system.
  This range may be incorrect for other calendar systems.
  Use <code>Chronology.range(ChronoField)</code> to access the correct range
  for a different calendar system.
 @param value the value to check
 @return the value that was passed in
 */
- (jint)checkValidIntValueWithLong:(jlong)value;

/*!
 @brief Checks that the specified value is valid for this field.
 <p>
  This validates that the value is within the outer range of valid values
  returned by <code>range()</code>.
  <p>
  This method checks against the range of the field in the ISO-8601 calendar system.
  This range may be incorrect for other calendar systems.
  Use <code>Chronology.range(ChronoField)</code> to access the correct range
  for a different calendar system.
 @param value the value to check
 @return the value that was passed in
 */
- (jlong)checkValidValueWithLong:(jlong)value;

- (id<JavaTimeTemporalTemporalUnit>)getBaseUnit;

- (NSString *)getDisplayNameWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (jlong)getFromWithJavaTimeTemporalTemporalAccessor:(id<JavaTimeTemporalTemporalAccessor>)temporal;

- (id<JavaTimeTemporalTemporalUnit>)getRangeUnit;

/*!
 @brief Checks if this field represents a component of a date.
 <p>
  Fields from day-of-week to era are date-based.
 @return true if it is a component of a date
 */
- (jboolean)isDateBased;

- (jboolean)isSupportedByWithJavaTimeTemporalTemporalAccessor:(id<JavaTimeTemporalTemporalAccessor>)temporal;

/*!
 @brief Checks if this field represents a component of a time.
 <p>
  Fields from nano-of-second to am-pm-of-day are time-based.
 @return true if it is a component of a time
 */
- (jboolean)isTimeBased;

/*!
 @brief Gets the range of valid values for the field.
 <p>
  All fields can be expressed as a <code>long</code> integer.
  This method returns an object that describes the valid range for that value. 
 <p>
  This method returns the range of the field in the ISO-8601 calendar system.
  This range may be incorrect for other calendar systems.
  Use <code>Chronology.range(ChronoField)</code> to access the correct range
  for a different calendar system. 
 <p>
  Note that the result only describes the minimum and maximum valid values
  and it is important not to read too much into them. For example, there
  could be values within the range that are invalid for the field.
 @return the range of valid values for the field, not null
 */
- (JavaTimeTemporalValueRange *)range;

- (JavaTimeTemporalValueRange *)rangeRefinedByWithJavaTimeTemporalTemporalAccessor:(id<JavaTimeTemporalTemporalAccessor>)temporal;

- (NSString *)description;

+ (JavaTimeTemporalChronoField *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaTimeTemporalChronoField_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaTimeTemporalChronoField)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_values_[];

/*!
 @brief The nano-of-second.
 <p>
  This counts the nanosecond within the second, from 0 to 999,999,999.
  This field has the same meaning for all calendar systems. 
 <p>
  This field is used to represent the nano-of-second handling any fraction of the second.
  Implementations of <code>TemporalAccessor</code> should provide a value for this field if
  they can return a value for <code>SECOND_OF_MINUTE</code>, <code>SECOND_OF_DAY</code> or 
 <code>INSTANT_SECONDS</code> filling unknown precision with zero. 
 <p>
  When this field is used for setting a value, it should set as much precision as the
  object stores, using integer division to remove excess precision.
  For example, if the <code>TemporalAccessor</code> stores time to millisecond precision,
  then the nano-of-second must be divided by 1,000,000 before replacing the milli-of-second. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated in strict and smart mode but not in lenient mode.
  The field is resolved in combination with <code>MILLI_OF_SECOND</code> and <code>MICRO_OF_SECOND</code>.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_NANO_OF_SECOND(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, NANO_OF_SECOND)

/*!
 @brief The nano-of-day.
 <p>
  This counts the nanosecond within the day, from 0 to (24 * 60 * 60 * 1,000,000,000) - 1.
  This field has the same meaning for all calendar systems. 
 <p>
  This field is used to represent the nano-of-day handling any fraction of the second.
  Implementations of <code>TemporalAccessor</code> should provide a value for this field if
  they can return a value for <code>SECOND_OF_DAY</code> filling unknown precision with zero. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated in strict and smart mode but not in lenient mode.
  The value is split to form <code>NANO_OF_SECOND</code>, <code>SECOND_OF_MINUTE</code>,
  <code>MINUTE_OF_HOUR</code> and <code>HOUR_OF_DAY</code> fields.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_NANO_OF_DAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, NANO_OF_DAY)

/*!
 @brief The micro-of-second.
 <p>
  This counts the microsecond within the second, from 0 to 999,999.
  This field has the same meaning for all calendar systems. 
 <p>
  This field is used to represent the micro-of-second handling any fraction of the second.
  Implementations of <code>TemporalAccessor</code> should provide a value for this field if
  they can return a value for <code>SECOND_OF_MINUTE</code>, <code>SECOND_OF_DAY</code> or 
 <code>INSTANT_SECONDS</code> filling unknown precision with zero. 
 <p>
  When this field is used for setting a value, it should behave in the same way as setting 
 <code>NANO_OF_SECOND</code> with the value multiplied by 1,000. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated in strict and smart mode but not in lenient mode.
  The field is resolved in combination with <code>MILLI_OF_SECOND</code> to produce 
 <code>NANO_OF_SECOND</code>.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_MICRO_OF_SECOND(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, MICRO_OF_SECOND)

/*!
 @brief The micro-of-day.
 <p>
  This counts the microsecond within the day, from 0 to (24 * 60 * 60 * 1,000,000) - 1.
  This field has the same meaning for all calendar systems. 
 <p>
  This field is used to represent the micro-of-day handling any fraction of the second.
  Implementations of <code>TemporalAccessor</code> should provide a value for this field if
  they can return a value for <code>SECOND_OF_DAY</code> filling unknown precision with zero. 
 <p>
  When this field is used for setting a value, it should behave in the same way as setting 
 <code>NANO_OF_DAY</code> with the value multiplied by 1,000. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated in strict and smart mode but not in lenient mode.
  The value is split to form <code>MICRO_OF_SECOND</code>, <code>SECOND_OF_MINUTE</code>,
  <code>MINUTE_OF_HOUR</code> and <code>HOUR_OF_DAY</code> fields.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_MICRO_OF_DAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, MICRO_OF_DAY)

/*!
 @brief The milli-of-second.
 <p>
  This counts the millisecond within the second, from 0 to 999.
  This field has the same meaning for all calendar systems. 
 <p>
  This field is used to represent the milli-of-second handling any fraction of the second.
  Implementations of <code>TemporalAccessor</code> should provide a value for this field if
  they can return a value for <code>SECOND_OF_MINUTE</code>, <code>SECOND_OF_DAY</code> or 
 <code>INSTANT_SECONDS</code> filling unknown precision with zero. 
 <p>
  When this field is used for setting a value, it should behave in the same way as setting 
 <code>NANO_OF_SECOND</code> with the value multiplied by 1,000,000. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated in strict and smart mode but not in lenient mode.
  The field is resolved in combination with <code>MICRO_OF_SECOND</code> to produce 
 <code>NANO_OF_SECOND</code>.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_MILLI_OF_SECOND(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, MILLI_OF_SECOND)

/*!
 @brief The milli-of-day.
 <p>
  This counts the millisecond within the day, from 0 to (24 * 60 * 60 * 1,000) - 1.
  This field has the same meaning for all calendar systems. 
 <p>
  This field is used to represent the milli-of-day handling any fraction of the second.
  Implementations of <code>TemporalAccessor</code> should provide a value for this field if
  they can return a value for <code>SECOND_OF_DAY</code> filling unknown precision with zero. 
 <p>
  When this field is used for setting a value, it should behave in the same way as setting 
 <code>NANO_OF_DAY</code> with the value multiplied by 1,000,000. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated in strict and smart mode but not in lenient mode.
  The value is split to form <code>MILLI_OF_SECOND</code>, <code>SECOND_OF_MINUTE</code>,
  <code>MINUTE_OF_HOUR</code> and <code>HOUR_OF_DAY</code> fields.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_MILLI_OF_DAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, MILLI_OF_DAY)

/*!
 @brief The second-of-minute.
 <p>
  This counts the second within the minute, from 0 to 59.
  This field has the same meaning for all calendar systems. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated in strict and smart mode but not in lenient mode.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_SECOND_OF_MINUTE(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, SECOND_OF_MINUTE)

/*!
 @brief The second-of-day.
 <p>
  This counts the second within the day, from 0 to (24 * 60 * 60) - 1.
  This field has the same meaning for all calendar systems. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated in strict and smart mode but not in lenient mode.
  The value is split to form <code>SECOND_OF_MINUTE</code>, <code>MINUTE_OF_HOUR</code>
  and <code>HOUR_OF_DAY</code> fields.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_SECOND_OF_DAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, SECOND_OF_DAY)

/*!
 @brief The minute-of-hour.
 <p>
  This counts the minute within the hour, from 0 to 59.
  This field has the same meaning for all calendar systems. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated in strict and smart mode but not in lenient mode.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_MINUTE_OF_HOUR(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, MINUTE_OF_HOUR)

/*!
 @brief The minute-of-day.
 <p>
  This counts the minute within the day, from 0 to (24 * 60) - 1.
  This field has the same meaning for all calendar systems. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated in strict and smart mode but not in lenient mode.
  The value is split to form <code>MINUTE_OF_HOUR</code> and <code>HOUR_OF_DAY</code> fields.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_MINUTE_OF_DAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, MINUTE_OF_DAY)

/*!
 @brief The hour-of-am-pm.
 <p>
  This counts the hour within the AM/PM, from 0 to 11.
  This is the hour that would be observed on a standard 12-hour digital clock.
  This field has the same meaning for all calendar systems. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated from 0 to 11 in strict and smart mode.
  In lenient mode the value is not validated. It is combined with 
 <code>AMPM_OF_DAY</code> to form <code>HOUR_OF_DAY</code> by multiplying
  the {AMPM_OF_DAY} value by 12.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_HOUR_OF_AMPM(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, HOUR_OF_AMPM)

/*!
 @brief The clock-hour-of-am-pm.
 <p>
  This counts the hour within the AM/PM, from 1 to 12.
  This is the hour that would be observed on a standard 12-hour analog wall clock.
  This field has the same meaning for all calendar systems. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated from 1 to 12 in strict mode and from
  0 to 12 in smart mode. In lenient mode the value is not validated.
  The field is converted to an <code>HOUR_OF_AMPM</code> with the same value,
  unless the value is 12, in which case it is converted to 0.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_CLOCK_HOUR_OF_AMPM(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, CLOCK_HOUR_OF_AMPM)

/*!
 @brief The hour-of-day.
 <p>
  This counts the hour within the day, from 0 to 23.
  This is the hour that would be observed on a standard 24-hour digital clock.
  This field has the same meaning for all calendar systems. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated in strict and smart mode but not in lenient mode.
  The field is combined with <code>MINUTE_OF_HOUR</code>, <code>SECOND_OF_MINUTE</code> and 
 <code>NANO_OF_SECOND</code> to produce a <code>LocalTime</code>.
  In lenient mode, any excess days are added to the parsed date, or
  made available via <code>java.time.format.DateTimeFormatter.parsedExcessDays()</code>.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_HOUR_OF_DAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, HOUR_OF_DAY)

/*!
 @brief The clock-hour-of-day.
 <p>
  This counts the hour within the AM/PM, from 1 to 24.
  This is the hour that would be observed on a 24-hour analog wall clock.
  This field has the same meaning for all calendar systems. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated from 1 to 24 in strict mode and from
  0 to 24 in smart mode. In lenient mode the value is not validated.
  The field is converted to an <code>HOUR_OF_DAY</code> with the same value,
  unless the value is 24, in which case it is converted to 0.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_CLOCK_HOUR_OF_DAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, CLOCK_HOUR_OF_DAY)

/*!
 @brief The am-pm-of-day.
 <p>
  This counts the AM/PM within the day, from 0 (AM) to 1 (PM).
  This field has the same meaning for all calendar systems. 
 <p>
  When parsing this field it behaves equivalent to the following:
  The value is validated from 0 to 1 in strict and smart mode.
  In lenient mode the value is not validated. It is combined with 
 <code>HOUR_OF_AMPM</code> to form <code>HOUR_OF_DAY</code> by multiplying
  the {AMPM_OF_DAY} value by 12.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_AMPM_OF_DAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, AMPM_OF_DAY)

/*!
 @brief The day-of-week, such as Tuesday.
 <p>
  This represents the standard concept of the day of the week.
  In the default ISO calendar system, this has values from Monday (1) to Sunday (7).
  The <code>DayOfWeek</code> class can be used to interpret the result. 
 <p>
  Most non-ISO calendar systems also define a seven day week that aligns with ISO.
  Those calendar systems must also use the same numbering system, from Monday (1) to
  Sunday (7), which allows <code>DayOfWeek</code> to be used. 
 <p>
  Calendar systems that do not have a standard seven day week should implement this field
  if they have a similar concept of named or numbered days within a period similar
  to a week. It is recommended that the numbering starts from 1.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_DAY_OF_WEEK(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, DAY_OF_WEEK)

/*!
 @brief The aligned day-of-week within a month.
 <p>
  This represents concept of the count of days within the period of a week
  where the weeks are aligned to the start of the month.
  This field is typically used with <code>ALIGNED_WEEK_OF_MONTH</code>.
  <p>
  For example, in a calendar systems with a seven day week, the first aligned-week-of-month
  starts on day-of-month 1, the second aligned-week starts on day-of-month 8, and so on.
  Within each of these aligned-weeks, the days are numbered from 1 to 7 and returned
  as the value of this field.
  As such, day-of-month 1 to 7 will have aligned-day-of-week values from 1 to 7.
  And day-of-month 8 to 14 will repeat this with aligned-day-of-week values from 1 to 7. 
 <p>
  Calendar systems that do not have a seven day week should typically implement this
  field in the same way, but using the alternate week length.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_ALIGNED_DAY_OF_WEEK_IN_MONTH(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, ALIGNED_DAY_OF_WEEK_IN_MONTH)

/*!
 @brief The aligned day-of-week within a year.
 <p>
  This represents concept of the count of days within the period of a week
  where the weeks are aligned to the start of the year.
  This field is typically used with <code>ALIGNED_WEEK_OF_YEAR</code>.
  <p>
  For example, in a calendar systems with a seven day week, the first aligned-week-of-year
  starts on day-of-year 1, the second aligned-week starts on day-of-year 8, and so on.
  Within each of these aligned-weeks, the days are numbered from 1 to 7 and returned
  as the value of this field.
  As such, day-of-year 1 to 7 will have aligned-day-of-week values from 1 to 7.
  And day-of-year 8 to 14 will repeat this with aligned-day-of-week values from 1 to 7. 
 <p>
  Calendar systems that do not have a seven day week should typically implement this
  field in the same way, but using the alternate week length.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_ALIGNED_DAY_OF_WEEK_IN_YEAR(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, ALIGNED_DAY_OF_WEEK_IN_YEAR)

/*!
 @brief The day-of-month.
 <p>
  This represents the concept of the day within the month.
  In the default ISO calendar system, this has values from 1 to 31 in most months.
  April, June, September, November have days from 1 to 30, while February has days
  from 1 to 28, or 29 in a leap year. 
 <p>
  Non-ISO calendar systems should implement this field using the most recognized
  day-of-month values for users of the calendar system.
  Normally, this is a count of days from 1 to the length of the month.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_DAY_OF_MONTH(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, DAY_OF_MONTH)

/*!
 @brief The day-of-year.
 <p>
  This represents the concept of the day within the year.
  In the default ISO calendar system, this has values from 1 to 365 in standard
  years and 1 to 366 in leap years. 
 <p>
  Non-ISO calendar systems should implement this field using the most recognized
  day-of-year values for users of the calendar system.
  Normally, this is a count of days from 1 to the length of the year. 
 <p>
  Note that a non-ISO calendar system may have year numbering system that changes
  at a different point to the natural reset in the month numbering. An example
  of this is the Japanese calendar system where a change of era, which resets
  the year number to 1, can happen on any date. The era and year reset also cause
  the day-of-year to be reset to 1, but not the month-of-year or day-of-month.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_DAY_OF_YEAR(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, DAY_OF_YEAR)

/*!
 @brief The epoch-day, based on the Java epoch of 1970-01-01 (ISO).
 <p>
  This field is the sequential count of days where 1970-01-01 (ISO) is zero.
  Note that this uses the <i>local</i> time-line, ignoring offset and time-zone. 
 <p>
  This field is strictly defined to have the same meaning in all calendar systems.
  This is necessary to ensure interoperation between calendars.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_EPOCH_DAY(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, EPOCH_DAY)

/*!
 @brief The aligned week within a month.
 <p>
  This represents concept of the count of weeks within the period of a month
  where the weeks are aligned to the start of the month.
  This field is typically used with <code>ALIGNED_DAY_OF_WEEK_IN_MONTH</code>.
  <p>
  For example, in a calendar systems with a seven day week, the first aligned-week-of-month
  starts on day-of-month 1, the second aligned-week starts on day-of-month 8, and so on.
  Thus, day-of-month values 1 to 7 are in aligned-week 1, while day-of-month values
  8 to 14 are in aligned-week 2, and so on. 
 <p>
  Calendar systems that do not have a seven day week should typically implement this
  field in the same way, but using the alternate week length.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_ALIGNED_WEEK_OF_MONTH(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, ALIGNED_WEEK_OF_MONTH)

/*!
 @brief The aligned week within a year.
 <p>
  This represents concept of the count of weeks within the period of a year
  where the weeks are aligned to the start of the year.
  This field is typically used with <code>ALIGNED_DAY_OF_WEEK_IN_YEAR</code>.
  <p>
  For example, in a calendar systems with a seven day week, the first aligned-week-of-year
  starts on day-of-year 1, the second aligned-week starts on day-of-year 8, and so on.
  Thus, day-of-year values 1 to 7 are in aligned-week 1, while day-of-year values
  8 to 14 are in aligned-week 2, and so on. 
 <p>
  Calendar systems that do not have a seven day week should typically implement this
  field in the same way, but using the alternate week length.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_ALIGNED_WEEK_OF_YEAR(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, ALIGNED_WEEK_OF_YEAR)

/*!
 @brief The month-of-year, such as March.
 <p>
  This represents the concept of the month within the year.
  In the default ISO calendar system, this has values from January (1) to December (12). 
 <p>
  Non-ISO calendar systems should implement this field using the most recognized
  month-of-year values for users of the calendar system.
  Normally, this is a count of months starting from 1.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_MONTH_OF_YEAR(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, MONTH_OF_YEAR)

/*!
 @brief The proleptic-month based, counting months sequentially from year 0.
 <p>
  This field is the sequential count of months where the first month
  in proleptic-year zero has the value zero.
  Later months have increasingly larger values.
  Earlier months have increasingly small values.
  There are no gaps or breaks in the sequence of months.
  Note that this uses the <i>local</i> time-line, ignoring offset and time-zone. 
 <p>
  In the default ISO calendar system, June 2012 would have the value 
 <code>(2012 * 12 + 6 - 1)</code>. This field is primarily for internal use. 
 <p>
  Non-ISO calendar systems must implement this field as per the definition above.
  It is just a simple zero-based count of elapsed months from the start of proleptic-year 0.
  All calendar systems with a full proleptic-year definition will have a year zero.
  If the calendar system has a minimum year that excludes year zero, then one must
  be extrapolated in order for this method to be defined.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_PROLEPTIC_MONTH(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, PROLEPTIC_MONTH)

/*!
 @brief The year within the era.
 <p>
  This represents the concept of the year within the era.
  This field is typically used with <code>ERA</code>.
  <p>
  The standard mental model for a date is based on three concepts - year, month and day.
  These map onto the <code>YEAR</code>, <code>MONTH_OF_YEAR</code> and <code>DAY_OF_MONTH</code> fields.
  Note that there is no reference to eras.
  The full model for a date requires four concepts - era, year, month and day. These map onto
  the <code>ERA</code>, <code>YEAR_OF_ERA</code>, <code>MONTH_OF_YEAR</code> and <code>DAY_OF_MONTH</code> fields.
  Whether this field or <code>YEAR</code> is used depends on which mental model is being used.
  See <code>ChronoLocalDate</code> for more discussion on this topic. 
 <p>
  In the default ISO calendar system, there are two eras defined, 'BCE' and 'CE'.
  The era 'CE' is the one currently in use and year-of-era runs from 1 to the maximum value.
  The era 'BCE' is the previous era, and the year-of-era runs backwards. 
 <p>
  For example, subtracting a year each time yield the following:<br>
  - year-proleptic 2  = 'CE' year-of-era 2<br>
  - year-proleptic 1  = 'CE' year-of-era 1<br>
  - year-proleptic 0  = 'BCE' year-of-era 1<br>
  - year-proleptic -1 = 'BCE' year-of-era 2<br>
  <p>
  Note that the ISO-8601 standard does not actually define eras.
  Note also that the ISO eras do not align with the well-known AD/BC eras due to the
  change between the Julian and Gregorian calendar systems. 
 <p>
  Non-ISO calendar systems should implement this field using the most recognized
  year-of-era value for users of the calendar system.
  Since most calendar systems have only two eras, the year-of-era numbering approach
  will typically be the same as that used by the ISO calendar system.
  The year-of-era value should typically always be positive, however this is not required.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_YEAR_OF_ERA(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, YEAR_OF_ERA)

/*!
 @brief The proleptic year, such as 2012.
 <p>
  This represents the concept of the year, counting sequentially and using negative numbers.
  The proleptic year is not interpreted in terms of the era.
  See <code>YEAR_OF_ERA</code> for an example showing the mapping from proleptic year to year-of-era. 
 <p>
  The standard mental model for a date is based on three concepts - year, month and day.
  These map onto the <code>YEAR</code>, <code>MONTH_OF_YEAR</code> and <code>DAY_OF_MONTH</code> fields.
  Note that there is no reference to eras.
  The full model for a date requires four concepts - era, year, month and day. These map onto
  the <code>ERA</code>, <code>YEAR_OF_ERA</code>, <code>MONTH_OF_YEAR</code> and <code>DAY_OF_MONTH</code> fields.
  Whether this field or <code>YEAR_OF_ERA</code> is used depends on which mental model is being used.
  See <code>ChronoLocalDate</code> for more discussion on this topic. 
 <p>
  Non-ISO calendar systems should implement this field as follows.
  If the calendar system has only two eras, before and after a fixed date, then the
  proleptic-year value must be the same as the year-of-era value for the later era,
  and increasingly negative for the earlier era.
  If the calendar system has more than two eras, then the proleptic-year value may be
  defined with any appropriate value, although defining it to be the same as ISO may be
  the best option.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_YEAR(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, YEAR)

/*!
 @brief The era.
 <p>
  This represents the concept of the era, which is the largest division of the time-line.
  This field is typically used with <code>YEAR_OF_ERA</code>.
  <p>
  In the default ISO calendar system, there are two eras defined, 'BCE' and 'CE'.
  The era 'CE' is the one currently in use and year-of-era runs from 1 to the maximum value.
  The era 'BCE' is the previous era, and the year-of-era runs backwards.
  See <code>YEAR_OF_ERA</code> for a full example. 
 <p>
  Non-ISO calendar systems should implement this field to define eras.
  The value of the era that was active on 1970-01-01 (ISO) must be assigned the value 1.
  Earlier eras must have sequentially smaller values.
  Later eras must have sequentially larger values,
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_ERA(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, ERA)

/*!
 @brief The instant epoch-seconds.
 <p>
  This represents the concept of the sequential count of seconds where
  1970-01-01T00:00Z (ISO) is zero.
  This field may be used with <code>NANO_OF_SECOND</code> to represent the fraction of the second. 
 <p>
  An <code>Instant</code> represents an instantaneous point on the time-line.
  On their own, an instant has insufficient information to allow a local date-time to be obtained.
  Only when paired with an offset or time-zone can the local date or time be calculated. 
 <p>
  This field is strictly defined to have the same meaning in all calendar systems.
  This is necessary to ensure interoperation between calendars.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_INSTANT_SECONDS(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, INSTANT_SECONDS)

/*!
 @brief The offset from UTC/Greenwich.
 <p>
  This represents the concept of the offset in seconds of local time from UTC/Greenwich. 
 <p>
  A <code>ZoneOffset</code> represents the period of time that local time differs from UTC/Greenwich.
  This is usually a fixed number of hours and minutes.
  It is equivalent to the <code>total amount</code> of the offset in seconds.
  For example, during the winter Paris has an offset of <code>+01:00</code>, which is 3600 seconds. 
 <p>
  This field is strictly defined to have the same meaning in all calendar systems.
  This is necessary to ensure interoperation between calendars.
 */
inline JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_get_OFFSET_SECONDS(void);
J2OBJC_ENUM_CONSTANT(JavaTimeTemporalChronoField, OFFSET_SECONDS)

FOUNDATION_EXPORT IOSObjectArray *JavaTimeTemporalChronoField_values(void);

FOUNDATION_EXPORT JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaTimeTemporalChronoField *JavaTimeTemporalChronoField_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeTemporalChronoField)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTimeTemporalChronoField")
