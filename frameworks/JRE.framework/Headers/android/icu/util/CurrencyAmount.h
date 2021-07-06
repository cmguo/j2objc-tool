//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/external/icu/android_icu4j/src/main/java/android/icu/util/CurrencyAmount.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_AndroidIcuUtilCurrencyAmount")
#ifdef RESTRICT_AndroidIcuUtilCurrencyAmount
#define INCLUDE_ALL_AndroidIcuUtilCurrencyAmount 0
#else
#define INCLUDE_ALL_AndroidIcuUtilCurrencyAmount 1
#endif
#undef RESTRICT_AndroidIcuUtilCurrencyAmount

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (AndroidIcuUtilCurrencyAmount_) && (INCLUDE_ALL_AndroidIcuUtilCurrencyAmount || defined(INCLUDE_AndroidIcuUtilCurrencyAmount))
#define AndroidIcuUtilCurrencyAmount_

#define RESTRICT_AndroidIcuUtilMeasure 1
#define INCLUDE_AndroidIcuUtilMeasure 1
#include <JRE/android/icu/util/Measure.h>

@class AndroidIcuUtilCurrency;
@class AndroidIcuUtilMeasureUnit;

/*!
 @brief An amount of currency, consisting of a Number and a Currency.
 CurrencyAmount objects are immutable.
 - seealso: java.lang.Number
 - seealso: Currency
 @author Alan Liu
 */
@interface AndroidIcuUtilCurrencyAmount : AndroidIcuUtilMeasure

#pragma mark Public

/*!
 @brief Constructs a new object given a double value and a currency.
 @param number a double value
 @param currency the currency
 */
- (instancetype __nonnull)initWithDouble:(jdouble)number
              withAndroidIcuUtilCurrency:(AndroidIcuUtilCurrency *)currency;

/*!
 @brief Constructs a new object given a number and a currency.
 @param number the number
 @param currency the currency
 */
- (instancetype __nonnull)initWithNSNumber:(NSNumber *)number
                withAndroidIcuUtilCurrency:(AndroidIcuUtilCurrency *)currency;

/*!
 @brief Returns the currency of this object.
 @return this object's Currency
 */
- (AndroidIcuUtilCurrency *)getCurrency;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)initWithNSNumber:(NSNumber *)arg0
             withAndroidIcuUtilMeasureUnit:(AndroidIcuUtilMeasureUnit *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidIcuUtilCurrencyAmount)

FOUNDATION_EXPORT void AndroidIcuUtilCurrencyAmount_initWithNSNumber_withAndroidIcuUtilCurrency_(AndroidIcuUtilCurrencyAmount *self, NSNumber *number, AndroidIcuUtilCurrency *currency);

FOUNDATION_EXPORT AndroidIcuUtilCurrencyAmount *new_AndroidIcuUtilCurrencyAmount_initWithNSNumber_withAndroidIcuUtilCurrency_(NSNumber *number, AndroidIcuUtilCurrency *currency) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilCurrencyAmount *create_AndroidIcuUtilCurrencyAmount_initWithNSNumber_withAndroidIcuUtilCurrency_(NSNumber *number, AndroidIcuUtilCurrency *currency);

FOUNDATION_EXPORT void AndroidIcuUtilCurrencyAmount_initWithDouble_withAndroidIcuUtilCurrency_(AndroidIcuUtilCurrencyAmount *self, jdouble number, AndroidIcuUtilCurrency *currency);

FOUNDATION_EXPORT AndroidIcuUtilCurrencyAmount *new_AndroidIcuUtilCurrencyAmount_initWithDouble_withAndroidIcuUtilCurrency_(jdouble number, AndroidIcuUtilCurrency *currency) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidIcuUtilCurrencyAmount *create_AndroidIcuUtilCurrencyAmount_initWithDouble_withAndroidIcuUtilCurrency_(jdouble number, AndroidIcuUtilCurrency *currency);

J2OBJC_TYPE_LITERAL_HEADER(AndroidIcuUtilCurrencyAmount)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidIcuUtilCurrencyAmount")
