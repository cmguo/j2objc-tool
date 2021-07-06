//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/Throwable.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaLangThrowable")
#ifdef RESTRICT_JavaLangThrowable
#define INCLUDE_ALL_JavaLangThrowable 0
#else
#define INCLUDE_ALL_JavaLangThrowable 1
#endif
#undef RESTRICT_JavaLangThrowable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangThrowable_) && (INCLUDE_ALL_JavaLangThrowable || defined(INCLUDE_JavaLangThrowable))
#define JavaLangThrowable_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include <JRE/java/io/Serializable.h>

@class IOSObjectArray;
@class JavaIoPrintStream;
@class JavaIoPrintWriter;

/*!
 @brief The <code>Throwable</code> class is the superclass of all errors and
  exceptions in the Java language.Only objects that are instances of this
  class (or one of its subclasses) are thrown by the Java Virtual Machine or
  can be thrown by the Java <code>throw</code> statement.
 Similarly, only
  this class or one of its subclasses can be the argument type in a 
 <code>catch</code> clause.
  For the purposes of compile-time checking of exceptions, <code>Throwable</code>
  and any subclass of <code>Throwable</code> that is not also a
  subclass of either <code>RuntimeException</code> or <code>Error</code> are
  regarded as checked exceptions. 
 <p>Instances of two subclasses, <code>java.lang.Error</code> and 
 <code>java.lang.Exception</code>, are conventionally used to indicate
  that exceptional situations have occurred. Typically, these instances
  are freshly created in the context of the exceptional situation so
  as to include relevant information (such as stack trace data). 
 <p>A throwable contains a snapshot of the execution stack of its
  thread at the time it was created. It can also contain a message
  string that gives more information about the error. Over time, a
  throwable can suppress other
  throwables from being propagated.  Finally, the throwable can also
  contain a <i>cause</i>: another throwable that caused this
  throwable to be constructed.  The recording of this causal information
  is referred to as the <i>chained exception</i> facility, as the
  cause can, itself, have a cause, and so on, leading to a "chain" of
  exceptions, each caused by another. 
 <p>One reason that a throwable may have a cause is that the class that
  throws it is built atop a lower layered abstraction, and an operation on
  the upper layer fails due to a failure in the lower layer.  It would be bad
  design to let the throwable thrown by the lower layer propagate outward, as
  it is generally unrelated to the abstraction provided by the upper layer.
  Further, doing so would tie the API of the upper layer to the details of
  its implementation, assuming the lower layer's exception was a checked
  exception.  Throwing a "wrapped exception" (i.e., an exception containing a
  cause) allows the upper layer to communicate the details of the failure to
  its caller without incurring either of these shortcomings.  It preserves
  the flexibility to change the implementation of the upper layer without
  changing its API (in particular, the set of exceptions thrown by its
  methods). 
 <p>A second reason that a throwable may have a cause is that the method
  that throws it must conform to a general-purpose interface that does not
  permit the method to throw the cause directly.  For example, suppose
  a persistent collection conforms to the <code>Collection</code>
  interface, and that its persistence is implemented atop 
 <code>java.io</code>.  Suppose the internals of the <code>add</code> method
  can throw an <code>IOException</code>.  The implementation
  can communicate the details of the <code>IOException</code> to its caller
  while conforming to the <code>Collection</code> interface by wrapping the 
 <code>IOException</code> in an appropriate unchecked exception.  (The
  specification for the persistent collection should indicate that it is
  capable of throwing such exceptions.) 
 <p>A cause can be associated with a throwable in two ways: via a
  constructor that takes the cause as an argument, or via the 
 <code>initCause(Throwable)</code> method.  New throwable classes that
  wish to allow causes to be associated with them should provide constructors
  that take a cause and delegate (perhaps indirectly) to one of the 
 <code>Throwable</code> constructors that takes a cause.
  Because the <code>initCause</code> method is public, it allows a cause to be
  associated with any throwable, even a "legacy throwable" whose
  implementation predates the addition of the exception chaining mechanism to 
 <code>Throwable</code>.
  
 <p>By convention, class <code>Throwable</code> and its subclasses have two
  constructors, one that takes no arguments and one that takes a 
 <code>String</code> argument that can be used to produce a detail message.
  Further, those subclasses that might likely have a cause associated with
  them should have two more constructors, one that takes a 
 <code>Throwable</code> (the cause), and one that takes a 
 <code>String</code> (the detail message) and a <code>Throwable</code> (the
  cause).
  J2ObjC: Throwable extends the Objective-C Foundation class NSException.
 @author unascribed
 @author Josh Bloch (Added exception chaining and programmatic access to
           stack trace in 1.4.)
 @since JDK1.0
 */
@interface JavaLangThrowable : NSException < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new throwable with <code>null</code> as its detail message.
 The cause is not initialized, and may subsequently be initialized by a
  call to <code>initCause</code>.
  
 <p>The <code>fillInStackTrace()</code> method is called to initialize
  the stack trace data in the newly created throwable.
 */
- (instancetype __nonnull)init;

/*!
 @brief Constructs a new throwable with the specified detail message.The
  cause is not initialized, and may subsequently be initialized by
  a call to <code>initCause</code>.
 <p>The <code>fillInStackTrace()</code> method is called to initialize
  the stack trace data in the newly created throwable.
 @param message the detail message. The detail message is saved for           later retrieval by the 
 <code>getMessage()</code>  method.
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message;

/*!
 @brief Constructs a new throwable with the specified detail message and
  cause.
 <p>Note that the detail message associated with 
 <code>cause</code> is <i>not</i> automatically incorporated in
  this throwable's detail message. 
 <p>The <code>fillInStackTrace()</code> method is called to initialize
  the stack trace data in the newly created throwable.
 @param message the detail message (which is saved for later retrieval          by the 
 <code>getMessage()</code>  method).
 @param cause the cause (which is saved for later retrieval by the          
 <code>getCause()</code>  method).  (A <code>null</code>  value is          permitted, and indicates that the cause is nonexistent or
           unknown.)
 @since 1.4
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a new throwable with the specified cause and a detail
  message of <code>(cause==null ?
 null : cause.toString())</code> (which
  typically contains the class and detail message of <code>cause</code>).
 This constructor is useful for throwables that are little more than
  wrappers for other throwables (for example, <code>java.security.PrivilegedActionException</code>
 ).
  
 <p>The <code>fillInStackTrace()</code> method is called to initialize
  the stack trace data in the newly created throwable.
 @param cause the cause (which is saved for later retrieval by the          
 <code>getCause()</code>  method).  (A <code>null</code>  value is          permitted, and indicates that the cause is nonexistent or
           unknown.)
 @since 1.4
 */
- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Appends the specified exception to the exceptions that were
  suppressed in order to deliver this exception.This method is
  thread-safe and typically called (automatically and implicitly)
  by the <code>try</code>-with-resources statement.
 <p>The suppression behavior is enabled <em>unless</em> disabled 
 via
  a constructor
 .  When suppression is disabled, this method does
  nothing other than to validate its argument. 
 <p>Note that when one exception causes
  another exception, the first
  exception is usually caught and then the second exception is
  thrown in response.  In other words, there is a causal
  connection between the two exceptions.
  In contrast, there are situations where two independent
  exceptions can be thrown in sibling code blocks, in particular
  in the <code>try</code> block of a <code>try</code>-with-resources
  statement and the compiler-generated <code>finally</code> block
  which closes the resource.
  In these situations, only one of the thrown exceptions can be
  propagated.  In the <code>try</code>-with-resources statement, when
  there are two such exceptions, the exception originating from the 
 <code>try</code> block is propagated and the exception from the 
 <code>finally</code> block is added to the list of exceptions
  suppressed by the exception from the <code>try</code> block.  As an
  exception unwinds the stack, it can accumulate multiple
  suppressed exceptions. 
 <p>An exception may have suppressed exceptions while also being
  caused by another exception.  Whether or not an exception has a
  cause is semantically known at the time of its creation, unlike
  whether or not an exception will suppress other exceptions
  which is typically only determined after an exception is
  thrown. 
 <p>Note that programmer written code is also able to take
  advantage of calling this method in situations where there are
  multiple sibling exceptions and only one can be propagated.
 @param exception the exception to be added to the list of         suppressed exceptions
 @throw IllegalArgumentExceptionif <code>exception</code> is this
          throwable; a throwable cannot suppress itself.
 @throw NullPointerExceptionif <code>exception</code> is <code>null</code>
 @since 1.7
 */
- (void)addSuppressedWithJavaLangThrowable:(JavaLangThrowable *)exception;

/*!
 @brief Fills in the execution stack trace.This method records within this 
 <code>Throwable</code> object information about the current state of
  the stack frames for the current thread.
 <p>If the stack trace of this <code>Throwable</code> is not
  writable
 , calling this method has no effect.
 @return a reference to this <code>Throwable</code> instance.
 - seealso: java.lang.Throwable#printStackTrace()
 */
- (JavaLangThrowable * __nonnull)fillInStackTrace;

/*!
 @brief Returns the cause of this throwable or <code>null</code> if the
  cause is nonexistent or unknown.
 (The cause is the throwable that
  caused this throwable to get thrown.) 
 <p>This implementation returns the cause that was supplied via one of
  the constructors requiring a <code>Throwable</code>, or that was set after
  creation with the <code>initCause(Throwable)</code> method.  While it is
  typically unnecessary to override this method, a subclass can override
  it to return a cause set by some other means.  This is appropriate for
  a "legacy chained throwable" that predates the addition of chained
  exceptions to <code>Throwable</code>.  Note that it is <i>not</i>
  necessary to override any of the <code>PrintStackTrace</code> methods,
  all of which invoke the <code>getCause</code> method to determine the
  cause of a throwable.
 @return the cause of this throwable or <code>null</code> if the
           cause is nonexistent or unknown.
 @since 1.4
 */
- (JavaLangThrowable * __nullable)getCause;

/*!
 @brief Creates a localized description of this throwable.
 Subclasses may override this method in order to produce a
  locale-specific message.  For subclasses that do not override this
  method, the default implementation returns the same result as 
 <code>getMessage()</code>.
 @return The localized description of this throwable.
 @since JDK1.1
 */
- (NSString * __nullable)getLocalizedMessage;

/*!
 @brief Returns the detail message string of this throwable.
 @return the detail message string of this <code>Throwable</code> instance
           (which may be <code>null</code>).
 */
- (NSString * __nullable)getMessage;

/*!
 @brief Provides programmatic access to the stack trace information printed by 
 <code>printStackTrace()</code>.Returns an array of stack trace elements,
  each representing one stack frame.
 The zeroth element of the array
  (assuming the array's length is non-zero) represents the top of the
  stack, which is the last method invocation in the sequence.  Typically,
  this is the point at which this throwable was created and thrown.
  The last element of the array (assuming the array's length is non-zero)
  represents the bottom of the stack, which is the first method invocation
  in the sequence. 
 <p>Some virtual machines may, under some circumstances, omit one
  or more stack frames from the stack trace.  In the extreme case,
  a virtual machine that has no stack trace information concerning
  this throwable is permitted to return a zero-length array from this
  method.  Generally speaking, the array returned by this method will
  contain one element for every frame that would be printed by 
 <code>printStackTrace</code>.  Writes to the returned array do not
  affect future calls to this method.
 @return an array of stack trace elements representing the stack trace
          pertaining to this throwable.
 @since 1.4
 */
- (IOSObjectArray * __nonnull)getStackTrace;

/*!
 @brief Returns an array containing all of the exceptions that were
  suppressed, typically by the <code>try</code>-with-resources
  statement, in order to deliver this exception.
 If no exceptions were suppressed or suppression is
  disabled
 , an empty array is returned.  This method is
  thread-safe.  Writes to the returned array do not affect future
  calls to this method.
 @return an array containing all of the exceptions that were
          suppressed to deliver this exception.
 @since 1.7
 */
- (IOSObjectArray * __nonnull)getSuppressed;

/*!
 @brief Initializes the <i>cause</i> of this throwable to the specified value.
 (The cause is the throwable that caused this throwable to get thrown.) 
 <p>This method can be called at most once.  It is generally called from
  within the constructor, or immediately after creating the
  throwable.  If this throwable was created
  with <code>Throwable(Throwable)</code> or 
 <code>Throwable(String,Throwable)</code>, this method cannot be called
  even once. 
 <p>An example of using this method on a legacy throwable type
  without other support for setting the cause is: 
 @code

  try {
      lowLevelOp();
  } catch (LowLevelException le) {
      throw (HighLevelException)
            new HighLevelException().initCause(le); // Legacy constructor
  } 
  
@endcode
 @param cause the cause (which is saved for later retrieval by the          
 <code>getCause()</code>  method).  (A <code>null</code>  value is          permitted, and indicates that the cause is nonexistent or
           unknown.)
 @return a reference to this <code>Throwable</code> instance.
 @throw IllegalArgumentExceptionif <code>cause</code> is this
          throwable.  (A throwable cannot be its own cause.)
 @throw IllegalStateExceptionif this throwable was
          created with <code>Throwable(Throwable)</code> or
          <code>Throwable(String,Throwable)</code>, or this method has already
          been called on this throwable.
 @since 1.4
 */
- (JavaLangThrowable * __nonnull)initCauseWithJavaLangThrowable:(JavaLangThrowable *)cause OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Prints this throwable and its backtrace to the
  standard error stream.This method prints a stack trace for this 
 <code>Throwable</code> object on the error output stream that is
  the value of the field <code>System.err</code>.
 The first line of
  output contains the result of the <code>toString()</code> method for
  this object.  Remaining lines represent data previously recorded by
  the method <code>fillInStackTrace()</code>. The format of this
  information depends on the implementation, but the following
  example may be regarded as typical: 
 <blockquote>@code

  java.lang.NullPointerException
          at MyClass.mash(MyClass.java:9)
          at MyClass.crunch(MyClass.java:6)
          at MyClass.main(MyClass.java:3) 
  
@endcode</blockquote>
  This example was produced by running the program: 
 @code

  class MyClass {
      public static void main(String[] args) {
          crunch(null);
      }
      static void crunch(int[] a) {
          mash(a);
      }
      static void mash(int[] b) {
          System.out.println(b[0]);
      }    }    
  
@endcode
  The backtrace for a throwable with an initialized, non-null cause
  should generally include the backtrace for the cause.  The format
  of this information depends on the implementation, but the following
  example may be regarded as typical: 
 @code

  HighLevelException: MidLevelException: LowLevelException
          at Junk.a(Junk.java:13)
          at Junk.main(Junk.java:4)
  Caused by: MidLevelException: LowLevelException
          at Junk.c(Junk.java:23)
          at Junk.b(Junk.java:17)
          at Junk.a(Junk.java:11)
          ... 1 more
  Caused by: LowLevelException
          at Junk.e(Junk.java:30)
          at Junk.d(Junk.java:27)
          at Junk.c(Junk.java:21)
          ... 3 more 
  
@endcode
  Note the presence of lines containing the characters <code>"..."</code>.
  These lines indicate that the remainder of the stack trace for this
  exception matches the indicated number of frames from the bottom of the
  stack trace of the exception that was caused by this exception (the
  "enclosing" exception).  This shorthand can greatly reduce the length
  of the output in the common case where a wrapped exception is thrown
  from same method as the "causative exception" is caught.  The above
  example was produced by running the program: 
 @code

  public class Junk {
      public static void main(String args[]) {
          try {
              a();
          } catch(HighLevelException e) {
              e.printStackTrace();
          }        }
      static void a() throws HighLevelException {
          try {
              b();
          } catch(MidLevelException e) {
              throw new HighLevelException(e);
          }        }
      static void b() throws MidLevelException {
          c();
      }
      static void c() throws MidLevelException {
          try {
              d();
          } catch(LowLevelException e) {
              throw new MidLevelException(e);
          }        }
      static void d() throws LowLevelException {
         e();
      }
      static void e() throws LowLevelException {
          throw new LowLevelException();
      }    }
  class HighLevelException extends Exception {
      HighLevelException(Throwable cause) { super(cause); } }
  class MidLevelException extends Exception {
      MidLevelException(Throwable cause)  { super(cause); } }
  class LowLevelException extends Exception {
  } 
  
@endcode
  As of release 7, the platform supports the notion of 
 <i>suppressed exceptions</i> (in conjunction with the <code>try</code>
 -with-resources statement). Any exceptions that were
  suppressed in order to deliver an exception are printed out
  beneath the stack trace.  The format of this information
  depends on the implementation, but the following example may be
  regarded as typical: 
 @code

  Exception in thread "main" java.lang.Exception: Something happened
   at Foo.bar(Foo.java:10)
   at Foo.main(Foo.java:5)
   Suppressed: Resource$CloseFailException: Resource ID = 0
           at Resource.close(Resource.java:26)
           at Foo.bar(Foo.java:9)
           ... 1 more 
  
@endcode
  Note that the "... n more" notation is used on suppressed exceptions
  just at it is used on causes. Unlike causes, suppressed exceptions are
  indented beyond their "containing exceptions." 
 <p>An exception can have both a cause and one or more suppressed
  exceptions: 
 @code

  Exception in thread "main" java.lang.Exception: Main block
   at Foo3.main(Foo3.java:7)
   Suppressed: Resource$CloseFailException: Resource ID = 2
           at Resource.close(Resource.java:26)
           at Foo3.main(Foo3.java:5)
   Suppressed: Resource$CloseFailException: Resource ID = 1
           at Resource.close(Resource.java:26)
           at Foo3.main(Foo3.java:5)
  Caused by: java.lang.Exception: I did it
   at Foo3.main(Foo3.java:8) 
  
@endcode
  Likewise, a suppressed exception can have a cause: 
 @code

  Exception in thread "main" java.lang.Exception: Main block
   at Foo4.main(Foo4.java:6)
   Suppressed: Resource2$CloseFailException: Resource ID = 1
           at Resource2.close(Resource2.java:20)
           at Foo4.main(Foo4.java:5)
   Caused by: java.lang.Exception: Rats, you caught me
           at Resource2$CloseFailException.<init>(Resource2.java:45)
           ... 2 more 
  
@endcode
 */
- (void)printStackTrace;

/*!
 @brief Prints this throwable and its backtrace to the specified print stream.
 @param s<code>PrintStream</code>  to use for output
 */
- (void)printStackTraceWithJavaIoPrintStream:(JavaIoPrintStream *)s;

/*!
 @brief Prints this throwable and its backtrace to the specified
  print writer.
 @param s<code>PrintWriter</code>  to use for output
 @since JDK1.1
 */
- (void)printStackTraceWithJavaIoPrintWriter:(JavaIoPrintWriter *)s;

/*!
 @brief Sets the stack trace elements that will be returned by 
 <code>getStackTrace()</code> and printed by <code>printStackTrace()</code>
  and related methods.
 This method, which is designed for use by RPC frameworks and other
  advanced systems, allows the client to override the default
  stack trace that is either generated by <code>fillInStackTrace()</code>
  when a throwable is constructed or deserialized when a throwable is
  read from a serialization stream. 
 <p>If the stack trace of this <code>Throwable</code> is not
  writable
 , calling this method has no effect other than
  validating its argument.
 @param stackTrace the stack trace elements to be associated with  this 
 <code>Throwable</code> .  The specified array is copied by this  call; changes in the specified array after the method invocation
   returns will have no affect on this 
 <code>Throwable</code> 's stack  trace.
 @throw NullPointerExceptionif <code>stackTrace</code> is
          <code>null</code> or if any of the elements of
          <code>stackTrace</code> are <code>null</code>
 @since 1.4
 */
- (void)setStackTraceWithJavaLangStackTraceElementArray:(IOSObjectArray *)stackTrace;

/*!
 @brief Returns a short description of this throwable.
 The result is the concatenation of: 
 <ul>
  <li> the name of the class of this object 
 <li> ": " (a colon and a space) 
 <li> the result of invoking this object's <code>getLocalizedMessage</code>
       method 
 </ul>
  If <code>getLocalizedMessage</code> returns <code>null</code>, then just
  the class name is returned.
 @return a string representation of this throwable.
 */
- (NSString * __nonnull)description;

#pragma mark Protected

/*!
 @brief Constructs a new throwable with the specified detail message,
  cause, suppression enabled or
  disabled, and writable stack trace enabled or disabled.If
  suppression is disabled, <code>getSuppressed</code> for this object
  will return a zero-length array and calls to <code>addSuppressed</code>
  that would otherwise append an exception to the
  suppressed list will have no effect.
 If the writable stack
  trace is false, this constructor will not call <code>fillInStackTrace()</code>
 , a <code>null</code> will be written to the 
 <code>stackTrace</code> field, and subsequent calls to <code>fillInStackTrace</code>
  and <code>setStackTrace(StackTraceElement[])</code>
  will not set the stack
  trace.  If the writable stack trace is false, <code>getStackTrace</code>
  will return a zero length array. 
 <p>Note that the other constructors of <code>Throwable</code> treat
  suppression as being enabled and the stack trace as being
  writable.  Subclasses of <code>Throwable</code> should document any
  conditions under which suppression is disabled and document
  conditions under which the stack trace is not writable.
  Disabling of suppression should only occur in exceptional
  circumstances where special requirements exist, such as a
  virtual machine reusing exception objects under low-memory
  situations.  Circumstances where a given exception object is
  repeatedly caught and rethrown, such as to implement control
  flow between two sub-systems, is another situation where
  immutable throwable objects would be appropriate.
 @param message the detail message.
 @param cause the cause.  (A <code>null</code>  value is permitted,
   and indicates that the cause is nonexistent or unknown.)
 @param enableSuppression whether or not suppression is enabled or disabled
 @param writableStackTrace whether or not the stack trace should be                            writable
 - seealso: OutOfMemoryError
 - seealso: NullPointerException
 - seealso: ArithmeticException
 @since 1.7
 */
- (instancetype __nonnull)initWithNSString:(NSString *)message
                     withJavaLangThrowable:(JavaLangThrowable *)cause
                               withBoolean:(jboolean)enableSuppression
                               withBoolean:(jboolean)writableStackTrace;

#pragma mark Package-Private

@end

J2OBJC_STATIC_INIT(JavaLangThrowable)

FOUNDATION_EXPORT void JavaLangThrowable_init(JavaLangThrowable *self);

FOUNDATION_EXPORT JavaLangThrowable *new_JavaLangThrowable_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThrowable *create_JavaLangThrowable_init(void);

FOUNDATION_EXPORT void JavaLangThrowable_initWithNSString_(JavaLangThrowable *self, NSString *message);

FOUNDATION_EXPORT JavaLangThrowable *new_JavaLangThrowable_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThrowable *create_JavaLangThrowable_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaLangThrowable_initWithNSString_withJavaLangThrowable_(JavaLangThrowable *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangThrowable *new_JavaLangThrowable_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThrowable *create_JavaLangThrowable_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaLangThrowable_initWithJavaLangThrowable_(JavaLangThrowable *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaLangThrowable *new_JavaLangThrowable_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThrowable *create_JavaLangThrowable_initWithJavaLangThrowable_(JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaLangThrowable_initWithNSString_withJavaLangThrowable_withBoolean_withBoolean_(JavaLangThrowable *self, NSString *message, JavaLangThrowable *cause, jboolean enableSuppression, jboolean writableStackTrace);

FOUNDATION_EXPORT JavaLangThrowable *new_JavaLangThrowable_initWithNSString_withJavaLangThrowable_withBoolean_withBoolean_(NSString *message, JavaLangThrowable *cause, jboolean enableSuppression, jboolean writableStackTrace) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThrowable *create_JavaLangThrowable_initWithNSString_withJavaLangThrowable_withBoolean_withBoolean_(NSString *message, JavaLangThrowable *cause, jboolean enableSuppression, jboolean writableStackTrace);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThrowable)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangThrowable")
