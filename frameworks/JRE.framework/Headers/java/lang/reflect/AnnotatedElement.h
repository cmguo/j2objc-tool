//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/reflect/AnnotatedElement.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaLangReflectAnnotatedElement")
#ifdef RESTRICT_JavaLangReflectAnnotatedElement
#define INCLUDE_ALL_JavaLangReflectAnnotatedElement 0
#else
#define INCLUDE_ALL_JavaLangReflectAnnotatedElement 1
#endif
#undef RESTRICT_JavaLangReflectAnnotatedElement

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangReflectAnnotatedElement_) && (INCLUDE_ALL_JavaLangReflectAnnotatedElement || defined(INCLUDE_JavaLangReflectAnnotatedElement))
#define JavaLangReflectAnnotatedElement_

@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangAnnotationAnnotation;

/*!
 @brief Represents an annotated element of the program currently running in this
  VM.This interface allows annotations to be read reflectively.
 All
  annotations returned by methods in this interface are immutable and
  serializable. The arrays returned by methods of this interface may be modified
  by callers without affecting the arrays returned to other callers. 
 <p>Android note: methods that return multiple annotations of different types such as 
 <code>getAnnotations()</code> and <code>getDeclaredAnnotations()</code> can be affected
  by the explicit character-code ordering of annotations types specified by the DEX format.
  Annotations of different types on a single element are not guaranteed to be returned in the order
  they are declared in source. 
 <p>The <code>getAnnotationsByType(Class)</code> and <code>getDeclaredAnnotationsByType(Class)</code>
  methods support multiple
  annotations of the same type on an element. If the argument to
  either method is a repeatable annotation type (JLS 9.6), then the
  method will "look through" a container annotation (JLS 9.7), if
  present, and return any annotations inside the container. Container
  annotations may be generated at compile-time to wrap multiple
  annotations of the argument type. 
 <p>The terms <em>directly present</em>, <em>indirectly present</em>,
  <em>present</em>, and <em>associated</em> are used throughout this
  interface to describe precisely which annotations are returned by
  methods: 
 <ul>
  
 <li> An annotation <i>A</i> is <em>directly present</em> on an
  element <i>E</i> if <i>E</i> is annotated by <i>A</i> in the original source. 
 <li>An annotation <i>A</i> is <em>indirectly present</em> on an
  element <i>E</i> if <i>E</i> is annotated by a container annotation
  of <i>A</i>.
  
 <li>An annotation <i>A</i> is present on an element <i>E</i> if either: 
 <ul>
  
 <li><i>A</i> is directly present on <i>E</i>; or 
 <li>No annotation of <i>A</i> 's type is directly present on 
 <i>E</i>, and <i>E</i> is a class, and <i>A</i> 's type is
  inheritable, and <i>A</i> is present on the superclass of <i>E</i>.
  
 </ul>
  
 <li>An annotation <i>A</i> is <em>associated</em> with an element <i>E</i>
  if either: 
 <ul>
  
 <li><i>A</i> is directly or indirectly present on <i>E</i>; or 
 <li>No annotation of <i>A</i> 's type is directly or indirectly
  present on <i>E</i>, and <i>E</i> is a class, and <i>A</i>'s type
  is inheritable, and <i>A</i> is associated with the superclass of 
 <i>E</i>.
  
 </ul>
  
 </ul>
  
 <p>The table below summarizes which kind of annotation presence
  different methods in this interface examine. 
 <table border>
  <caption>Overview of kind of presence detected by different AnnotatedElement methods</caption>
  <tr><th colspan="2"></th><th colspan="4">Kind of Presence</th>
  <tr><th colspan="2">Method</th><th>Directly Present</th><th>Indirectly Present</th><th>Present</th><th>Associated</th>
  <tr><td align="right"><code>T</code></td><td><code>getAnnotation(Class&lt;T&gt;)</code>
  <td></td><td></td><td>X</td><td></td>
  </tr>
  <tr><td align="right"><code>Annotation[]</code></td><td><code>getAnnotations()</code>
  <td></td><td></td><td>X</td><td></td>
  </tr>
  <tr><td align="right"><code>T[]</code></td><td><code>getAnnotationsByType(Class&lt;T&gt;)</code>
  <td></td><td></td><td></td><td>X</td>
  </tr>
  <tr><td align="right"><code>T</code></td><td><code>getDeclaredAnnotation(Class&lt;T&gt;)</code>
  <td>X</td><td></td><td></td><td></td>
  </tr>
  <tr><td align="right"><code>Annotation[]</code></td><td><code>getDeclaredAnnotations()</code>
  <td>X</td><td></td><td></td><td></td>
  </tr>
  <tr><td align="right"><code>T[]</code></td><td><code>getDeclaredAnnotationsByType(Class&lt;T&gt;)</code>
  <td>X</td><td>X</td><td></td><td></td>
  </tr>
  </table>
  
 <p>For an invocation of <code>get[Declared]AnnotationsByType( Class <
  T >)</code>
 , the order of annotations which are directly or indirectly
  present on an element <i>E</i> is computed as if indirectly present
  annotations on <i>E</i> are directly present on <i>E</i> in place
  of their container annotation, in the order in which they appear in
  the value element of the container annotation. 
 <p>There are several compatibility concerns to keep in mind if an
  annotation type <i>T</i> is originally <em>not</em> repeatable and
  later modified to be repeatable.
  The containing annotation type for <i>T</i> is <i>TC</i>.
  
 <ul>
  
 <li>Modifying <i>T</i> to be repeatable is source and binary
  compatible with existing uses of <i>T</i> and with existing uses
  of <i>TC</i>.
  That is, for source compatibility, source code with annotations of
  type <i>T</i> or of type <i>TC</i> will still compile. For binary
  compatibility, class files with annotations of type <i>T</i> or of
  type <i>TC</i> (or with other kinds of uses of type <i>T</i> or of
  type <i>TC</i>) will link against the modified version of <i>T</i>
  if they linked against the earlier version.
  (An annotation type <i>TC</i> may informally serve as an acting
  containing annotation type before <i>T</i> is modified to be
  formally repeatable. Alternatively, when <i>T</i> is made
  repeatable, <i>TC</i> can be introduced as a new type.) 
 <li>If an annotation type <i>TC</i> is present on an element, and 
 <i>T</i> is modified to be repeatable with <i>TC</i> as its
  containing annotation type then: 
 <ul>
  
 <li>The change to <i>T</i> is behaviorally compatible with respect
  to the <code>get[Declared]Annotation(Class<T>)</code> (called with an
  argument of <i>T</i> or <i>TC</i>) and <code>get[Declared]Annotations()</code>
  methods because the results of the
  methods will not change due to <i>TC</i> becoming the containing
  annotation type for <i>T</i>.
  
 <li>The change to <i>T</i> changes the results of the <code>get[Declared]AnnotationsByType(Class<T>)</code>
  methods called with an
  argument of <i>T</i>, because those methods will now recognize an
  annotation of type <i>TC</i> as a container annotation for <i>T</i>
  and will "look through" it to expose annotations of type <i>T</i>.
  
 </ul>
  
 <li>If an annotation of type <i>T</i> is present on an
  element and <i>T</i> is made repeatable and more annotations of
  type <i>T</i> are added to the element: 
 <ul>
  
 <li> The addition of the annotations of type <i>T</i> is both
  source compatible and binary compatible. 
 <li>The addition of the annotations of type <i>T</i> changes the results
  of the <code>get[Declared]Annotation(Class<T>)</code> methods and <code>get[Declared]Annotations()</code>
  methods, because those methods will now
  only see a container annotation on the element and not see an
  annotation of type <i>T</i>.
  
 <li>The addition of the annotations of type <i>T</i> changes the
  results of the <code>get[Declared]AnnotationsByType(Class<T>)</code>
  methods, because their results will expose the additional
  annotations of type <i>T</i> whereas previously they exposed only a
  single annotation of type <i>T</i>.
  
 </ul>
  
 </ul>
  
 <p>If an annotation returned by a method in this interface contains
  (directly or indirectly) a <code>Class</code>-valued member referring to
  a class that is not accessible in this VM, attempting to read the class
  by calling the relevant Class-returning method on the returned annotation
  will result in a <code>TypeNotPresentException</code>.
  
 <p>Similarly, attempting to read an enum-valued member will result in
  a <code>EnumConstantNotPresentException</code> if the enum constant in the
  annotation is no longer present in the enum type. 
 <p>If an annotation type <i>T</i> is (meta-)annotated with an 
 <code>@@Repeatable</code> annotation whose value element indicates a type 
 <i>TC</i>, but <i>TC</i> does not declare a <code>value()</code> method
  with a return type of <i>T</i><code>[]</code>, then an exception of type 
 <code>java.lang.annotation.AnnotationFormatError</code> is thrown. 
 <p>Finally, attempting to read a member whose definition has evolved
  incompatibly will result in a <code>java.lang.annotation.AnnotationTypeMismatchException</code>
  or an 
 <code>java.lang.annotation.IncompleteAnnotationException</code>.
 - seealso: java.lang.EnumConstantNotPresentException
 - seealso: java.lang.TypeNotPresentException
 - seealso: AnnotationFormatError
 - seealso: java.lang.annotation.AnnotationTypeMismatchException
 - seealso: java.lang.annotation.IncompleteAnnotationException
 @since 1.5
 @author Josh Bloch
 */
@protocol JavaLangReflectAnnotatedElement < JavaObject >

/*!
 @brief Returns true if an annotation for the specified type
  is <em>present</em> on this element, else false.This method
  is designed primarily for convenient access to marker annotations.
 <p>The truth value returned by this method is equivalent to: 
 <code>getAnnotation(annotationClass) != null</code>
  
 <p>The body of the default method is specified to be the code
  above.
 @param annotationClass the Class object corresponding to the         annotation type
 @return true if an annotation for the specified annotation
      type is present on this element, else false
 @throw NullPointerExceptionif the given annotation class is null
 @since 1.5
 */
- (jboolean)isAnnotationPresentWithIOSClass:(IOSClass *)annotationClass;

/*!
 @brief Returns this element's annotation for the specified type if
  such an annotation is <em>present</em>, else null.
 @param annotationClass the Class object corresponding to the         annotation type
 @return this element's annotation for the specified annotation type if
      present on this element, else null
 @throw NullPointerExceptionif the given annotation class is null
 @since 1.5
 */
- (id<JavaLangAnnotationAnnotation> __nullable)getAnnotationWithIOSClass:(IOSClass *)annotationClass;

/*!
 @brief Returns annotations that are <em>present</em> on this element.
 If there are no annotations <em>present</em> on this element, the return
  value is an array of length 0.
  The caller of this method is free to modify the returned array; it will
  have no effect on the arrays returned to other callers.
 @return annotations present on this element
 @since 1.5
 */
- (IOSObjectArray * __nonnull)getAnnotations;

/*!
 @brief Returns annotations that are <em>associated</em> with this element.
 If there are no annotations <em>associated</em> with this element, the return
  value is an array of length 0.
  The difference between this method and <code>getAnnotation(Class)</code>
  is that this method detects if its argument is a <em>repeatable
  annotation type</em> (JLS 9.6), and if so, attempts to find one or
  more annotations of that type by "looking through" a container
  annotation.
  The caller of this method is free to modify the returned array; it will
  have no effect on the arrays returned to other callers.
 @param annotationClass the Class object corresponding to the         annotation type
 @return all this element's annotations for the specified annotation type if
      associated with this element, else an array of length zero
 @throw NullPointerExceptionif the given annotation class is null
 @since 1.8
 */
- (IOSObjectArray *)getAnnotationsByTypeWithIOSClass:(IOSClass *)annotationClass;

/*!
 @brief Returns this element's annotation for the specified type if
  such an annotation is <em>directly present</em>, else null.
 This method ignores inherited annotations. (Returns null if no
  annotations are directly present on this element.)
 @param annotationClass the Class object corresponding to the         annotation type
 @return this element's annotation for the specified annotation type if
      directly present on this element, else null
 @throw NullPointerExceptionif the given annotation class is null
 @since 1.8
 */
- (id<JavaLangAnnotationAnnotation> __nullable)getDeclaredAnnotationWithIOSClass:(IOSClass *)annotationClass;

/*!
 @brief Returns this element's annotation(s) for the specified type if
  such annotations are either <em>directly present</em> or 
 <em>indirectly present</em>.This method ignores inherited
  annotations.
 If there are no specified annotations directly or indirectly
  present on this element, the return value is an array of length
  0.
  The difference between this method and <code>getDeclaredAnnotation(Class)</code>
  is that this method detects if its
  argument is a <em>repeatable annotation type</em> (JLS 9.6), and if so,
  attempts to find one or more annotations of that type by "looking
  through" a container annotation if one is present.
  The caller of this method is free to modify the returned array; it will
  have no effect on the arrays returned to other callers.
 @param annotationClass the Class object corresponding to the         annotation type
 @return all this element's annotations for the specified annotation type if
      directly or indirectly present on this element, else an array of length zero
 @throw NullPointerExceptionif the given annotation class is null
 @since 1.8
 */
- (IOSObjectArray *)getDeclaredAnnotationsByTypeWithIOSClass:(IOSClass *)annotationClass;

/*!
 @brief Returns annotations that are <em>directly present</em> on this element.
 This method ignores inherited annotations.
  If there are no annotations <em>directly present</em> on this element,
  the return value is an array of length 0.
  The caller of this method is free to modify the returned array; it will
  have no effect on the arrays returned to other callers.
 @return annotations directly present on this element
 @since 1.5
 */
- (IOSObjectArray * __nonnull)getDeclaredAnnotations;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectAnnotatedElement)

FOUNDATION_EXPORT jboolean JavaLangReflectAnnotatedElement_isAnnotationPresentWithIOSClass_(id<JavaLangReflectAnnotatedElement> self, IOSClass *annotationClass);

FOUNDATION_EXPORT IOSObjectArray *JavaLangReflectAnnotatedElement_getAnnotationsByTypeWithIOSClass_(id<JavaLangReflectAnnotatedElement> self, IOSClass *annotationClass);

FOUNDATION_EXPORT id<JavaLangAnnotationAnnotation> JavaLangReflectAnnotatedElement_getDeclaredAnnotationWithIOSClass_(id<JavaLangReflectAnnotatedElement> self, IOSClass *annotationClass);

FOUNDATION_EXPORT IOSObjectArray *JavaLangReflectAnnotatedElement_getDeclaredAnnotationsByTypeWithIOSClass_(id<JavaLangReflectAnnotatedElement> self, IOSClass *annotationClass);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectAnnotatedElement)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectAnnotatedElement")
