//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/SQLWarning.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaSqlSQLWarning")
#ifdef RESTRICT_JavaSqlSQLWarning
#define INCLUDE_ALL_JavaSqlSQLWarning 0
#else
#define INCLUDE_ALL_JavaSqlSQLWarning 1
#endif
#undef RESTRICT_JavaSqlSQLWarning

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSqlSQLWarning_) && (INCLUDE_ALL_JavaSqlSQLWarning || defined(INCLUDE_JavaSqlSQLWarning))
#define JavaSqlSQLWarning_

#define RESTRICT_JavaSqlSQLException 1
#define INCLUDE_JavaSqlSQLException 1
#include <JRE/java/sql/SQLException.h>

@class JavaLangThrowable;

/*!
 @brief <P>An exception that provides information on  database access
  warnings.
 Warnings are silently chained to the object whose method
  caused it to be reported. 
 <P>
  Warnings may be retrieved from <code>Connection</code>, <code>Statement</code>,
  and <code>ResultSet</code> objects.  Trying to retrieve a warning on a
  connection after it has been closed will cause an exception to be thrown.
  Similarly, trying to retrieve a warning on a statement after it has been
  closed or on a result set after it has been closed will cause
  an exception to be thrown. Note that closing a statement also
  closes a result set that it might have produced.
 - seealso: Connection#getWarnings
 - seealso: Statement#getWarnings
 - seealso: ResultSet#getWarnings
 */
@interface JavaSqlSQLWarning : JavaSqlSQLException

#pragma mark Public

/*!
 @brief Constructs a  <code>SQLWarning</code> object.
 The <code>reason</code>, <code>SQLState</code> are initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a <code>SQLWarning</code> object
  with a given <code>reason</code>.The <code>SQLState</code>
  is initialized to <code>null</code> and the vender code is initialized
  to 0.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param reason a description of the warning
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason;

/*!
 @brief Constructs a <code>SQLWarning</code> object
  with a given <code>reason</code> and <code>SQLState</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. The vendor code
  is initialized to 0. 
 <p>
 @param reason a description of the warning
 @param SQLState an XOPEN or SQL:2003 code identifying the warning
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState;

/*!
 @brief Constructs a  <code>SQLWarning</code> object
   with a given <code>reason</code>, <code>SQLState</code>  and 
 <code>vendorCode</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param reason a description of the warning
 @param SQLState an XOPEN or SQL:2003 code identifying the warning
 @param vendorCode a database vendor-specific warning code
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                                   withInt:(jint)vendorCode;

/*!
 @brief Constructs a<code>SQLWarning</code> object
  with a given 
 <code>reason</code>, <code>SQLState</code>, <code>vendorCode</code>
  and  <code>cause</code>.
 <p>
 @param reason a description of the warning
 @param SQLState an XOPEN or SQL:2003 code identifying the warning
 @param vendorCode a database vendor-specific warning code
 @param cause the underlying reason for this  <code> SQLWarning </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                                   withInt:(jint)vendorCode
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLWarning</code> object
  with a given 
 <code>reason</code>, <code>SQLState</code> and  <code>cause</code>.
 The vendor code is initialized to 0. 
 <p>
 @param reason a description of the warning
 @param SQLState an XOPEN or SQL:2003 code identifying the warning
 @param cause the underlying reason for this  <code> SQLWarning </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                              withNSString:(NSString *)SQLState
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLWarning</code> object
  with a given 
 <code>reason</code> and  <code>cause</code>.
 The <code>SQLState</code> is  initialized to <code>null</code>
  and the vendor code is initialized to 0. 
 <p>
 @param reason a description of the warning
 @param cause the underlying reason for this  <code> SQLWarning </code>
   (which is saved for later retrieval by the  <code> getCause() </code>  method);  may be null indicating the cause is non-existent or unknown.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)reason
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLWarning</code> object
  with a given  <code>cause</code>.
 The <code>SQLState</code> is initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>reason</code>  is initialized to <code>null</code> if 
 <code>cause==null</code> or to <code>cause.toString()</code> if 
 <code>cause!=null</code>.
  <p>
 @param cause the underlying reason for this  <code> SQLWarning </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Retrieves the warning chained to this <code>SQLWarning</code> object by 
 <code>setNextWarning</code>.
 @return the next <code>SQLException</code> in the chain; <code>null</code> if none
 - seealso: #setNextWarning
 */
- (JavaSqlSQLWarning *)getNextWarning;

/*!
 @brief Adds a <code>SQLWarning</code> object to the end of the chain.
 @param w the new end of the  <code> SQLException </code>  chain
 - seealso: #getNextWarning
 */
- (void)setNextWarningWithJavaSqlSQLWarning:(JavaSqlSQLWarning *)w;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLWarning)

FOUNDATION_EXPORT void JavaSqlSQLWarning_initWithNSString_withNSString_withInt_(JavaSqlSQLWarning *self, NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLWarning *new_JavaSqlSQLWarning_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLWarning *create_JavaSqlSQLWarning_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT void JavaSqlSQLWarning_initWithNSString_withNSString_(JavaSqlSQLWarning *self, NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT JavaSqlSQLWarning *new_JavaSqlSQLWarning_initWithNSString_withNSString_(NSString *reason, NSString *SQLState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLWarning *create_JavaSqlSQLWarning_initWithNSString_withNSString_(NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT void JavaSqlSQLWarning_initWithNSString_(JavaSqlSQLWarning *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLWarning *new_JavaSqlSQLWarning_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLWarning *create_JavaSqlSQLWarning_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaSqlSQLWarning_init(JavaSqlSQLWarning *self);

FOUNDATION_EXPORT JavaSqlSQLWarning *new_JavaSqlSQLWarning_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLWarning *create_JavaSqlSQLWarning_init(void);

FOUNDATION_EXPORT void JavaSqlSQLWarning_initWithJavaLangThrowable_(JavaSqlSQLWarning *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLWarning *new_JavaSqlSQLWarning_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLWarning *create_JavaSqlSQLWarning_initWithJavaLangThrowable_(JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLWarning_initWithNSString_withJavaLangThrowable_(JavaSqlSQLWarning *self, NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLWarning *new_JavaSqlSQLWarning_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLWarning *create_JavaSqlSQLWarning_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLWarning_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLWarning *self, NSString *reason, NSString *SQLState, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLWarning *new_JavaSqlSQLWarning_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *SQLState, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLWarning *create_JavaSqlSQLWarning_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *SQLState, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLWarning_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLWarning *self, NSString *reason, NSString *SQLState, jint vendorCode, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLWarning *new_JavaSqlSQLWarning_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLWarning *create_JavaSqlSQLWarning_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLWarning)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlSQLWarning")
