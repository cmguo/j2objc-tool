//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/temporal/JulianFields.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaTimeTemporalJulianFields")
#ifdef RESTRICT_JavaTimeTemporalJulianFields
#define INCLUDE_ALL_JavaTimeTemporalJulianFields 0
#else
#define INCLUDE_ALL_JavaTimeTemporalJulianFields 1
#endif
#undef RESTRICT_JavaTimeTemporalJulianFields

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeTemporalJulianFields_) && (INCLUDE_ALL_JavaTimeTemporalJulianFields || defined(INCLUDE_JavaTimeTemporalJulianFields))
#define JavaTimeTemporalJulianFields_

@protocol JavaTimeTemporalTemporalField;

/*!
 @brief A set of date fields that provide access to Julian Days.
 <p>
  The Julian Day is a standard way of expressing date and time commonly used in the scientific community.
  It is expressed as a decimal number of whole days where days start at midday.
  This class represents variations on Julian Days that count whole days from midnight. 
 <p>
  The fields are implemented relative to <code>EPOCH_DAY</code>.
  The fields are supported, and can be queried and set if <code>EPOCH_DAY</code> is available.
  The fields work with all chronologies.
 @since 1.8
 */
@interface JavaTimeTemporalJulianFields : NSObject
@property (readonly, class, strong) id<JavaTimeTemporalTemporalField> JULIAN_DAY NS_SWIFT_NAME(JULIAN_DAY);
@property (readonly, class, strong) id<JavaTimeTemporalTemporalField> MODIFIED_JULIAN_DAY NS_SWIFT_NAME(MODIFIED_JULIAN_DAY);
@property (readonly, class, strong) id<JavaTimeTemporalTemporalField> RATA_DIE NS_SWIFT_NAME(RATA_DIE);

@end

J2OBJC_STATIC_INIT(JavaTimeTemporalJulianFields)

/*!
 @brief Julian Day field.
 <p>
  This is an integer-based version of the Julian Day Number.
  Julian Day is a well-known system that represents the count of whole days since day 0,
  which is defined to be January 1, 4713 BCE in the Julian calendar, and -4713-11-24 Gregorian.
  The field  has "JulianDay" as 'name', and 'DAYS' as 'baseUnit'.
  The field always refers to the local date-time, ignoring the offset or zone. 
 <p>
  For date-times, 'JULIAN_DAY.getFrom()' assumes the same value from
  midnight until just before the next midnight.
  When 'JULIAN_DAY.adjustInto()' is applied to a date-time, the time of day portion remains unaltered.
  'JULIAN_DAY.adjustInto()' and 'JULIAN_DAY.getFrom()' only apply to <code>Temporal</code> objects that
  can be converted into <code>ChronoField.EPOCH_DAY</code>.
  An <code>UnsupportedTemporalTypeException</code> is thrown for any other type of object. 
 <p>
  In the resolving phase of parsing, a date can be created from a Julian Day field. In 
 strict mode and smart mode
  the Julian Day value is validated against the range of valid values.
  In lenient mode no validation occurs. 
 <h3>Astronomical and Scientific Notes</h3>
  The standard astronomical definition uses a fraction to indicate the time-of-day,
  thus 3.25 would represent the time 18:00, since days start at midday.
  This implementation uses an integer and days starting at midnight.
  The integer value for the Julian Day Number is the astronomical Julian Day value at midday
  of the date in question.
  This amounts to the astronomical Julian Day, rounded to an integer <code>JDN = floor(JD + 0.5)</code>.
  
 @code

   | ISO date          |  Julian Day Number | Astronomical Julian Day |
   | 1970-01-01T00:00  |         2,440,588  |         2,440,587.5     |
   | 1970-01-01T06:00  |         2,440,588  |         2,440,587.75    |
   | 1970-01-01T12:00  |         2,440,588  |         2,440,588.0     |
   | 1970-01-01T18:00  |         2,440,588  |         2,440,588.25    |
   | 1970-01-02T00:00  |         2,440,589  |         2,440,588.5     |
   | 1970-01-02T06:00  |         2,440,589  |         2,440,588.75    |
   | 1970-01-02T12:00  |         2,440,589  |         2,440,589.0     | 
  
@endcode
  <p>
  Julian Days are sometimes taken to imply Universal Time or UTC, but this
  implementation always uses the Julian Day number for the local date,
  regardless of the offset or time-zone.
 */
inline id<JavaTimeTemporalTemporalField> JavaTimeTemporalJulianFields_get_JULIAN_DAY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaTimeTemporalTemporalField> JavaTimeTemporalJulianFields_JULIAN_DAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTimeTemporalJulianFields, JULIAN_DAY, id<JavaTimeTemporalTemporalField>)

/*!
 @brief Modified Julian Day field.
 <p>
  This is an integer-based version of the Modified Julian Day Number.
  Modified Julian Day (MJD) is a well-known system that counts days continuously.
  It is defined relative to astronomical Julian Day as  <code>MJD = JD - 2400000.5</code>.
  Each Modified Julian Day runs from midnight to midnight.
  The field always refers to the local date-time, ignoring the offset or zone. 
 <p>
  For date-times, 'MODIFIED_JULIAN_DAY.getFrom()' assumes the same value from
  midnight until just before the next midnight.
  When 'MODIFIED_JULIAN_DAY.adjustInto()' is applied to a date-time, the time of day portion remains unaltered.
  'MODIFIED_JULIAN_DAY.adjustInto()' and 'MODIFIED_JULIAN_DAY.getFrom()' only apply to <code>Temporal</code> objects
  that can be converted into <code>ChronoField.EPOCH_DAY</code>.
  An <code>UnsupportedTemporalTypeException</code> is thrown for any other type of object. 
 <p>
  This implementation is an integer version of MJD with the decimal part rounded to floor. 
 <p>
  In the resolving phase of parsing, a date can be created from a Modified Julian Day field. In 
 strict mode and smart mode
  the Modified Julian Day value is validated against the range of valid values.
  In lenient mode no validation occurs. 
 <h3>Astronomical and Scientific Notes</h3>
  @code

   | ISO date          | Modified Julian Day |      Decimal MJD |
   | 1970-01-01T00:00  |             40,587  |       40,587.0   |
   | 1970-01-01T06:00  |             40,587  |       40,587.25  |
   | 1970-01-01T12:00  |             40,587  |       40,587.5   |
   | 1970-01-01T18:00  |             40,587  |       40,587.75  |
   | 1970-01-02T00:00  |             40,588  |       40,588.0   |
   | 1970-01-02T06:00  |             40,588  |       40,588.25  |
   | 1970-01-02T12:00  |             40,588  |       40,588.5   | 
  
@endcode
  Modified Julian Days are sometimes taken to imply Universal Time or UTC, but this
  implementation always uses the Modified Julian Day for the local date,
  regardless of the offset or time-zone.
 */
inline id<JavaTimeTemporalTemporalField> JavaTimeTemporalJulianFields_get_MODIFIED_JULIAN_DAY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaTimeTemporalTemporalField> JavaTimeTemporalJulianFields_MODIFIED_JULIAN_DAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTimeTemporalJulianFields, MODIFIED_JULIAN_DAY, id<JavaTimeTemporalTemporalField>)

/*!
 @brief Rata Die field.
 <p>
  Rata Die counts whole days continuously starting day 1 at midnight at the beginning of 0001-01-01 (ISO).
  The field always refers to the local date-time, ignoring the offset or zone. 
 <p>
  For date-times, 'RATA_DIE.getFrom()' assumes the same value from
  midnight until just before the next midnight.
  When 'RATA_DIE.adjustInto()' is applied to a date-time, the time of day portion remains unaltered.
  'RATA_DIE.adjustInto()' and 'RATA_DIE.getFrom()' only apply to <code>Temporal</code> objects
  that can be converted into <code>ChronoField.EPOCH_DAY</code>.
  An <code>UnsupportedTemporalTypeException</code> is thrown for any other type of object. 
 <p>
  In the resolving phase of parsing, a date can be created from a Rata Die field. In 
 strict mode and smart mode
  the Rata Die value is validated against the range of valid values.
  In lenient mode no validation occurs.
 */
inline id<JavaTimeTemporalTemporalField> JavaTimeTemporalJulianFields_get_RATA_DIE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaTimeTemporalTemporalField> JavaTimeTemporalJulianFields_RATA_DIE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaTimeTemporalJulianFields, RATA_DIE, id<JavaTimeTemporalTemporalField>)

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeTemporalJulianFields)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTimeTemporalJulianFields")
