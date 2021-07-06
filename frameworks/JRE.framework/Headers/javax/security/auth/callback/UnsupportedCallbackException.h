//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/security/auth/callback/UnsupportedCallbackException.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaxSecurityAuthCallbackUnsupportedCallbackException")
#ifdef RESTRICT_JavaxSecurityAuthCallbackUnsupportedCallbackException
#define INCLUDE_ALL_JavaxSecurityAuthCallbackUnsupportedCallbackException 0
#else
#define INCLUDE_ALL_JavaxSecurityAuthCallbackUnsupportedCallbackException 1
#endif
#undef RESTRICT_JavaxSecurityAuthCallbackUnsupportedCallbackException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxSecurityAuthCallbackUnsupportedCallbackException_) && (INCLUDE_ALL_JavaxSecurityAuthCallbackUnsupportedCallbackException || defined(INCLUDE_JavaxSecurityAuthCallbackUnsupportedCallbackException))
#define JavaxSecurityAuthCallbackUnsupportedCallbackException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include <JRE/java/lang/Exception.h>

@class JavaLangThrowable;
@protocol JavaxSecurityAuthCallbackCallback;

/*!
 @brief Signals that a <code>CallbackHandler</code> does not
  recognize a particular <code>Callback</code>.
 */
@interface JavaxSecurityAuthCallbackUnsupportedCallbackException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a <code>UnsupportedCallbackException</code>
  with no detail message.
 <p>
 @param callback the unrecognized <code>Callback</code> .
 */
- (instancetype __nonnull)initWithJavaxSecurityAuthCallbackCallback:(id<JavaxSecurityAuthCallbackCallback>)callback;

/*!
 @brief Constructs a UnsupportedCallbackException with the specified detail
  message.A detail message is a String that describes this particular
  exception.
 <p>
 @param callback the unrecognized <code>Callback</code> .  <p>
 @param msg the detail message.
 */
- (instancetype __nonnull)initWithJavaxSecurityAuthCallbackCallback:(id<JavaxSecurityAuthCallbackCallback>)callback
                                                       withNSString:(NSString *)msg;

/*!
 @brief Get the unrecognized <code>Callback</code>.
 <p>
 @return the unrecognized <code>Callback</code>.
 */
- (id<JavaxSecurityAuthCallbackCallback>)getCallback;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

- (instancetype __nonnull)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype __nonnull)initWithNSString:(NSString *)arg0
                     withJavaLangThrowable:(JavaLangThrowable *)arg1
                               withBoolean:(jboolean)arg2
                               withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityAuthCallbackUnsupportedCallbackException)

FOUNDATION_EXPORT void JavaxSecurityAuthCallbackUnsupportedCallbackException_initWithJavaxSecurityAuthCallbackCallback_(JavaxSecurityAuthCallbackUnsupportedCallbackException *self, id<JavaxSecurityAuthCallbackCallback> callback);

FOUNDATION_EXPORT JavaxSecurityAuthCallbackUnsupportedCallbackException *new_JavaxSecurityAuthCallbackUnsupportedCallbackException_initWithJavaxSecurityAuthCallbackCallback_(id<JavaxSecurityAuthCallbackCallback> callback) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityAuthCallbackUnsupportedCallbackException *create_JavaxSecurityAuthCallbackUnsupportedCallbackException_initWithJavaxSecurityAuthCallbackCallback_(id<JavaxSecurityAuthCallbackCallback> callback);

FOUNDATION_EXPORT void JavaxSecurityAuthCallbackUnsupportedCallbackException_initWithJavaxSecurityAuthCallbackCallback_withNSString_(JavaxSecurityAuthCallbackUnsupportedCallbackException *self, id<JavaxSecurityAuthCallbackCallback> callback, NSString *msg);

FOUNDATION_EXPORT JavaxSecurityAuthCallbackUnsupportedCallbackException *new_JavaxSecurityAuthCallbackUnsupportedCallbackException_initWithJavaxSecurityAuthCallbackCallback_withNSString_(id<JavaxSecurityAuthCallbackCallback> callback, NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxSecurityAuthCallbackUnsupportedCallbackException *create_JavaxSecurityAuthCallbackUnsupportedCallbackException_initWithJavaxSecurityAuthCallbackCallback_withNSString_(id<JavaxSecurityAuthCallbackCallback> callback, NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityAuthCallbackUnsupportedCallbackException)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxSecurityAuthCallbackUnsupportedCallbackException")
