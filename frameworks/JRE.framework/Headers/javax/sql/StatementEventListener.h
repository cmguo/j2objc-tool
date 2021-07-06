//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/sql/StatementEventListener.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxSqlStatementEventListener")
#ifdef RESTRICT_JavaxSqlStatementEventListener
#define INCLUDE_ALL_JavaxSqlStatementEventListener 0
#else
#define INCLUDE_ALL_JavaxSqlStatementEventListener 1
#endif
#undef RESTRICT_JavaxSqlStatementEventListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSqlStatementEventListener_) && (INCLUDE_ALL_JavaxSqlStatementEventListener || defined(INCLUDE_JavaxSqlStatementEventListener))
#define JavaxSqlStatementEventListener_

#define RESTRICT_JavaUtilEventListener 1
#define INCLUDE_JavaUtilEventListener 1
#include <JRE/java/util/EventListener.h>

@class JavaxSqlStatementEvent;

/*!
 @brief An object that registers to be notified of events that occur on PreparedStatements
  that are in the Statement pool.
 <p>
  The JDBC 3.0 specification added the maxStatements 
 <code>ConnectionPooledDataSource</code> property to provide a standard mechanism for
  enabling the pooling of <code>PreparedStatements</code>
  and to specify the size of the statement
  pool.  However, there was no way for a driver to notify an external
  statement pool when a <code>PreparedStatement</code> becomes invalid.  For some databases, a
  statement becomes invalid if a DDL operation is performed that affects the
  table.  For example an application may create a temporary table to do some work
  on the table and then destroy it.  It may later recreate the same table when
  it is needed again.  Some databases will invalidate any prepared statements
  that reference the temporary table when the table is dropped. 
 <p>
  Similar to the methods defined in the <code>ConnectionEventListener</code> interface,
  the driver will call the <code>StatementEventListener.statementErrorOccurred</code>
  method prior to throwing any exceptions when it detects a statement is invalid.
  The driver will also call the <code>StatementEventListener.statementClosed</code>
  method when a <code>PreparedStatement</code> is closed. 
 <p>
  Methods which allow a component to register a StatementEventListener with a 
 <code>PooledConnection</code> have been added to the <code>PooledConnection</code> interface. 
 <p>
 @since 1.6
 */
@protocol JavaxSqlStatementEventListener < JavaUtilEventListener, JavaObject >

/*!
 @brief The driver calls this method on all <code>StatementEventListener</code>s registered on the connection when it detects that a 
 <code>PreparedStatement</code> is closed.
 @param event an event object describing the source of  the event and that the 
  <code> PreparedStatement </code>  was closed.
 @since 1.6
 */
- (void)statementClosedWithJavaxSqlStatementEvent:(JavaxSqlStatementEvent *)event;

/*!
 @brief The driver calls this method on all <code>StatementEventListener</code>s
  registered on the connection when it detects that a 
 <code>PreparedStatement</code> is invalid.The driver calls this method
  just before it throws the <code>SQLException</code>,
  contained in the given event, to the application.
 <p>
 @param event an event object describing the source of the event,                                       the statement that is invalid and the exception the
                                        driver is about to throw.  The source of the event is
                                        the 
  <code> PooledConnection </code>  which the invalid  <code> PreparedStatement </code>  is associated with.   <p>
 @since 1.6
 */
- (void)statementErrorOccurredWithJavaxSqlStatementEvent:(JavaxSqlStatementEvent *)event;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSqlStatementEventListener)

J2OBJC_TYPE_LITERAL_HEADER(JavaxSqlStatementEventListener)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxSqlStatementEventListener")
