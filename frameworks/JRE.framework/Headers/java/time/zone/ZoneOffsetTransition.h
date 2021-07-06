//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/time/zone/ZoneOffsetTransition.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaTimeZoneZoneOffsetTransition")
#ifdef RESTRICT_JavaTimeZoneZoneOffsetTransition
#define INCLUDE_ALL_JavaTimeZoneZoneOffsetTransition 0
#else
#define INCLUDE_ALL_JavaTimeZoneZoneOffsetTransition 1
#endif
#undef RESTRICT_JavaTimeZoneZoneOffsetTransition

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaTimeZoneZoneOffsetTransition_) && (INCLUDE_ALL_JavaTimeZoneZoneOffsetTransition || defined(INCLUDE_JavaTimeZoneZoneOffsetTransition))
#define JavaTimeZoneZoneOffsetTransition_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include <JRE/java/lang/Comparable.h>

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include <JRE/java/io/Serializable.h>

@class JavaTimeDuration;
@class JavaTimeInstant;
@class JavaTimeLocalDateTime;
@class JavaTimeZoneOffset;
@protocol JavaIoDataInput;
@protocol JavaIoDataOutput;
@protocol JavaUtilList;

/*!
 @brief A transition between two offsets caused by a discontinuity in the local time-line.
 <p>
  A transition between two offsets is normally the result of a daylight savings cutover.
  The discontinuity is normally a gap in spring and an overlap in autumn. 
 <code>ZoneOffsetTransition</code> models the transition between the two offsets. 
 <p>
  Gaps occur where there are local date-times that simply do not exist.
  An example would be when the offset changes from <code>+03:00</code> to <code>+04:00</code>.
  This might be described as 'the clocks will move forward one hour tonight at 1am'. 
 <p>
  Overlaps occur where there are local date-times that exist twice.
  An example would be when the offset changes from <code>+04:00</code> to <code>+03:00</code>.
  This might be described as 'the clocks will move back one hour tonight at 2am'.
 @since 1.8
 */
@interface JavaTimeZoneZoneOffsetTransition : NSObject < JavaLangComparable, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Compares this transition to another based on the transition instant.
 <p>
  This compares the instants of each transition.
  The offsets are ignored, making this order inconsistent with equals.
 @param transition the transition to compare to, not null
 @return the comparator value, negative if less, positive if greater
 */
- (jint)compareToWithId:(JavaTimeZoneZoneOffsetTransition *)transition;

/*!
 @brief Checks if this object equals another.
 <p>
  The entire state of the object is compared.
 @param other the other object to compare to, null returns false
 @return true if equal
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Gets the local transition date-time, as would be expressed with the 'after' offset.
 <p>
  This is the first date-time after the discontinuity, when the new offset applies. 
 <p>
  The combination of the 'before' date-time and offset represents the same instant
  as the 'after' date-time and offset.
 @return the transition date-time expressed with the after offset, not null
 */
- (JavaTimeLocalDateTime *)getDateTimeAfter;

/*!
 @brief Gets the local transition date-time, as would be expressed with the 'before' offset.
 <p>
  This is the date-time where the discontinuity begins expressed with the 'before' offset.
  At this instant, the 'after' offset is actually used, therefore the combination of this
  date-time and the 'before' offset will never occur. 
 <p>
  The combination of the 'before' date-time and offset represents the same instant
  as the 'after' date-time and offset.
 @return the transition date-time expressed with the before offset, not null
 */
- (JavaTimeLocalDateTime *)getDateTimeBefore;

/*!
 @brief Gets the duration of the transition.
 <p>
  In most cases, the transition duration is one hour, however this is not always the case.
  The duration will be positive for a gap and negative for an overlap.
  Time-zones are second-based, so the nanosecond part of the duration will be zero.
 @return the duration of the transition, positive for gaps, negative for overlaps
 */
- (JavaTimeDuration *)getDuration;

/*!
 @brief Gets the transition instant.
 <p>
  This is the instant of the discontinuity, which is defined as the first
  instant that the 'after' offset applies. 
 <p>
  The methods <code>getInstant()</code>, <code>getDateTimeBefore()</code> and <code>getDateTimeAfter()</code>
  all represent the same instant.
 @return the transition instant, not null
 */
- (JavaTimeInstant *)getInstant;

/*!
 @brief Gets the offset after the transition.
 <p>
  This is the offset in use on and after the instant of the transition.
 @return the offset after the transition, not null
 */
- (JavaTimeZoneOffset *)getOffsetAfter;

/*!
 @brief Gets the offset before the transition.
 <p>
  This is the offset in use before the instant of the transition.
 @return the offset before the transition, not null
 */
- (JavaTimeZoneOffset *)getOffsetBefore;

/*!
 @brief Returns a suitable hash code.
 @return the hash code
 */
- (NSUInteger)hash;

/*!
 @brief Does this transition represent a gap in the local time-line.
 <p>
  Gaps occur where there are local date-times that simply do not exist.
  An example would be when the offset changes from <code>+01:00</code> to <code>+02:00</code>.
  This might be described as 'the clocks will move forward one hour tonight at 1am'.
 @return true if this transition is a gap, false if it is an overlap
 */
- (jboolean)isGap;

/*!
 @brief Does this transition represent an overlap in the local time-line.
 <p>
  Overlaps occur where there are local date-times that exist twice.
  An example would be when the offset changes from <code>+02:00</code> to <code>+01:00</code>.
  This might be described as 'the clocks will move back one hour tonight at 2am'.
 @return true if this transition is an overlap, false if it is a gap
 */
- (jboolean)isOverlap;

/*!
 @brief Checks if the specified offset is valid during this transition.
 <p>
  This checks to see if the given offset will be valid at some point in the transition.
  A gap will always return false.
  An overlap will return true if the offset is either the before or after offset.
 @param offset the offset to check, null returns false
 @return true if the offset is valid during the transition
 */
- (jboolean)isValidOffsetWithJavaTimeZoneOffset:(JavaTimeZoneOffset *)offset;

/*!
 @brief Obtains an instance defining a transition between two offsets.
 <p>
  Applications should normally obtain an instance from <code>ZoneRules</code>.
  This factory is only intended for use when creating <code>ZoneRules</code>.
 @param transition the transition date-time at the transition, which never   actually occurs, expressed local to the before offset, not null
 @param offsetBefore the offset before the transition, not null
 @param offsetAfter the offset at and after the transition, not null
 @return the transition, not null
 @throw IllegalArgumentExceptionif <code>offsetBefore</code> and <code>offsetAfter</code>
          are equal, or <code>transition.getNano()</code> returns non-zero value
 */
+ (JavaTimeZoneZoneOffsetTransition *)ofWithJavaTimeLocalDateTime:(JavaTimeLocalDateTime *)transition
                                           withJavaTimeZoneOffset:(JavaTimeZoneOffset *)offsetBefore
                                           withJavaTimeZoneOffset:(JavaTimeZoneOffset *)offsetAfter;

/*!
 @brief Gets the transition instant as an epoch second.
 @return the transition epoch second
 */
- (jlong)toEpochSecond;

/*!
 @brief Returns a string describing this object.
 @return a string for debugging, not null
 */
- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Creates an instance defining a transition between two offsets.
 @param transition the transition date-time with the offset before the transition, not null
 @param offsetBefore the offset before the transition, not null
 @param offsetAfter the offset at and after the transition, not null
 */
- (instancetype __nonnull)initWithJavaTimeLocalDateTime:(JavaTimeLocalDateTime *)transition
                                 withJavaTimeZoneOffset:(JavaTimeZoneOffset *)offsetBefore
                                 withJavaTimeZoneOffset:(JavaTimeZoneOffset *)offsetAfter;

/*!
 @brief Creates an instance from epoch-second and offsets.
 @param epochSecond the transition epoch-second
 @param offsetBefore the offset before the transition, not null
 @param offsetAfter the offset at and after the transition, not null
 */
- (instancetype __nonnull)initWithLong:(jlong)epochSecond
                withJavaTimeZoneOffset:(JavaTimeZoneOffset *)offsetBefore
                withJavaTimeZoneOffset:(JavaTimeZoneOffset *)offsetAfter;

/*!
 @brief Gets the valid offsets during this transition.
 <p>
  A gap will return an empty list, while an overlap will return both offsets.
 @return the list of valid offsets
 */
- (id<JavaUtilList>)getValidOffsets;

/*!
 @brief Reads the state from the stream.
 @param inArg the input stream, not null
 @return the created object, not null
 @throw IOExceptionif an error occurs
 */
+ (JavaTimeZoneZoneOffsetTransition *)readExternalWithJavaIoDataInput:(id<JavaIoDataInput>)inArg;

/*!
 @brief Writes the state to the stream.
 @param outArg the output stream, not null
 @throw IOExceptionif an error occurs
 */
- (void)writeExternalWithJavaIoDataOutput:(id<JavaIoDataOutput>)outArg;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTimeZoneZoneOffsetTransition)

FOUNDATION_EXPORT JavaTimeZoneZoneOffsetTransition *JavaTimeZoneZoneOffsetTransition_ofWithJavaTimeLocalDateTime_withJavaTimeZoneOffset_withJavaTimeZoneOffset_(JavaTimeLocalDateTime *transition, JavaTimeZoneOffset *offsetBefore, JavaTimeZoneOffset *offsetAfter);

FOUNDATION_EXPORT void JavaTimeZoneZoneOffsetTransition_initWithJavaTimeLocalDateTime_withJavaTimeZoneOffset_withJavaTimeZoneOffset_(JavaTimeZoneZoneOffsetTransition *self, JavaTimeLocalDateTime *transition, JavaTimeZoneOffset *offsetBefore, JavaTimeZoneOffset *offsetAfter);

FOUNDATION_EXPORT JavaTimeZoneZoneOffsetTransition *new_JavaTimeZoneZoneOffsetTransition_initWithJavaTimeLocalDateTime_withJavaTimeZoneOffset_withJavaTimeZoneOffset_(JavaTimeLocalDateTime *transition, JavaTimeZoneOffset *offsetBefore, JavaTimeZoneOffset *offsetAfter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTimeZoneZoneOffsetTransition *create_JavaTimeZoneZoneOffsetTransition_initWithJavaTimeLocalDateTime_withJavaTimeZoneOffset_withJavaTimeZoneOffset_(JavaTimeLocalDateTime *transition, JavaTimeZoneOffset *offsetBefore, JavaTimeZoneOffset *offsetAfter);

FOUNDATION_EXPORT void JavaTimeZoneZoneOffsetTransition_initWithLong_withJavaTimeZoneOffset_withJavaTimeZoneOffset_(JavaTimeZoneZoneOffsetTransition *self, jlong epochSecond, JavaTimeZoneOffset *offsetBefore, JavaTimeZoneOffset *offsetAfter);

FOUNDATION_EXPORT JavaTimeZoneZoneOffsetTransition *new_JavaTimeZoneZoneOffsetTransition_initWithLong_withJavaTimeZoneOffset_withJavaTimeZoneOffset_(jlong epochSecond, JavaTimeZoneOffset *offsetBefore, JavaTimeZoneOffset *offsetAfter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTimeZoneZoneOffsetTransition *create_JavaTimeZoneZoneOffsetTransition_initWithLong_withJavaTimeZoneOffset_withJavaTimeZoneOffset_(jlong epochSecond, JavaTimeZoneOffset *offsetBefore, JavaTimeZoneOffset *offsetAfter);

FOUNDATION_EXPORT JavaTimeZoneZoneOffsetTransition *JavaTimeZoneZoneOffsetTransition_readExternalWithJavaIoDataInput_(id<JavaIoDataInput> inArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaTimeZoneZoneOffsetTransition)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTimeZoneZoneOffsetTransition")
