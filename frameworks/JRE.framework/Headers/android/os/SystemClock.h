//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/os/SystemClock.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidOsSystemClock")
#ifdef RESTRICT_AndroidOsSystemClock
#define INCLUDE_ALL_AndroidOsSystemClock 0
#else
#define INCLUDE_ALL_AndroidOsSystemClock 1
#endif
#undef RESTRICT_AndroidOsSystemClock

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidOsSystemClock_) && (INCLUDE_ALL_AndroidOsSystemClock || defined(INCLUDE_AndroidOsSystemClock))
#define AndroidOsSystemClock_

/*!
 @brief Core timekeeping facilities.
 <p> Three different clocks are available, and they should not be confused: 
 <ul>
      <li> <p> <code>System.currentTimeMillis()</code>
      is the standard "wall" clock (time and date) expressing milliseconds
      since the epoch.  The wall clock can be set by the user or the phone
      network (see <code>setCurrentTimeMillis</code>), so the time may jump
      backwards or forwards unpredictably.  This clock should only be used
      when correspondence with real-world dates and times is important, such
      as in a calendar or alarm clock application.  Interval or elapsed
      time measurements should use a different clock.     
 <li> <p> <code>uptimeMillis</code> is counted in milliseconds since the
      system was booted.  This clock stops when the system enters deep
      sleep (CPU off, display dark, device waiting for external input),
      but is not affected by clock scaling, idle, or other power saving
      mechanisms.  This is the basis for most interval timing
      such as <code>Thread.sleep(millls)</code>,
      <code>Object.wait(millis)</code>, and
      <code>System.nanoTime()</code>.  This clock is guaranteed
      to be monotonic, and is suitable for interval timing when the
      interval does not span device sleep.  Most methods that accept a
      timestamp value currently expect the <code>uptimeMillis</code> clock.
      <li> <p> <code>elapsedRealtime</code> and <code>elapsedRealtimeNanos</code>
      return the time since the system was booted, and include deep sleep.
      This clock is guaranteed to be monotonic, and continues to tick even
      when the CPU is in power saving modes, so is the recommend basis
      for general purpose interval timing. 
 </ul>
  There are several mechanisms for controlling the timing of events: 
 <ul>
      <li> <p> Standard functions like <code>Thread.sleep(millis)</code>
  and <code>Object.wait(millis)</code>
      are always available.  These functions use the <code>uptimeMillis</code>
      clock; if the device enters sleep, the remainder of the time will be
      postponed until the device wakes up.  These synchronous functions may
      be interrupted with <code>Thread.interrupt()</code>, and
      you must handle <code>InterruptedException</code>.
      <li> <p> <code>SystemClock.sleep(millis)</code> is a utility function
      very similar to <code>Thread.sleep(millis)</code>, but it
      ignores <code>InterruptedException</code>.  Use this function for delays if
      you do not use <code>Thread.interrupt()</code>, as it will
      preserve the interrupted state of the thread. 
 </ul>
 */
@interface AndroidOsSystemClock : NSObject

#pragma mark Public

/*!
 @brief Returns current wall time in  microseconds.
 @return elapsed microseconds in wall time
 */
+ (jlong)currentTimeMicro;

/*!
 @brief Returns milliseconds since boot, including time spent in sleep.
 @return elapsed milliseconds since boot.
 */
+ (jlong)elapsedRealtime;

/*!
 @brief Returns nanoseconds since boot, including time spent in sleep.
 @return elapsed nanoseconds since boot.
 */
+ (jlong)elapsedRealtimeNanos;

/*!
 @brief Sets the current wall time, in milliseconds.Requires the calling
  process to have appropriate permissions.
 @return if the clock was successfully set to the specified time.
 */
+ (jboolean)setCurrentTimeMillisWithLong:(jlong)millis;

/*!
 @brief Waits a given number of milliseconds (of uptimeMillis) before returning.
 Similar to <code>java.lang.Thread.sleep(long)</code>, but does not throw 
 <code>InterruptedException</code>; <code>Thread.interrupt()</code> events are
  deferred until the next interruptible operation.  Does not return until
  at least the specified number of milliseconds has elapsed.
 @param ms to sleep before returning, in milliseconds of uptime.
 */
+ (void)sleepWithLong:(jlong)ms;

/*!
 @brief Returns milliseconds since boot, not counting time spent in deep sleep.
 @return milliseconds of non-sleep uptime since boot.
 */
+ (jlong)uptimeMillis;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidOsSystemClock)

FOUNDATION_EXPORT void AndroidOsSystemClock_sleepWithLong_(jlong ms);

FOUNDATION_EXPORT jboolean AndroidOsSystemClock_setCurrentTimeMillisWithLong_(jlong millis);

FOUNDATION_EXPORT jlong AndroidOsSystemClock_uptimeMillis(void);

FOUNDATION_EXPORT jlong AndroidOsSystemClock_elapsedRealtime(void);

FOUNDATION_EXPORT jlong AndroidOsSystemClock_elapsedRealtimeNanos(void);

FOUNDATION_EXPORT jlong AndroidOsSystemClock_currentTimeMicro(void);

J2OBJC_TYPE_LITERAL_HEADER(AndroidOsSystemClock)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidOsSystemClock")
