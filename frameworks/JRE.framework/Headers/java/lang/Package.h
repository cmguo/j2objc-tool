//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/Package.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangPackage")
#ifdef RESTRICT_JavaLangPackage
#define INCLUDE_ALL_JavaLangPackage 0
#else
#define INCLUDE_ALL_JavaLangPackage 1
#endif
#undef RESTRICT_JavaLangPackage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaLangPackage_) && (INCLUDE_ALL_JavaLangPackage || defined(INCLUDE_JavaLangPackage))
#define JavaLangPackage_

#define RESTRICT_JavaLangReflectAnnotatedElement 1
#define INCLUDE_JavaLangReflectAnnotatedElement 1
#include "java/lang/reflect/AnnotatedElement.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangClassLoader;
@class JavaNetURL;
@protocol JavaLangAnnotationAnnotation;

/*!
 @brief <code>Package</code> objects contain version information
  about the implementation and specification of a Java package.
 This versioning information is retrieved and made available
  by the <code>ClassLoader</code> instance that
  loaded the class(es).  Typically, it is stored in the manifest that is
  distributed with the classes. 
 <p>The set of classes that make up the package may implement a
  particular specification and if so the specification title, version number,
  and vendor strings identify that specification.
  An application can ask if the package is
  compatible with a particular version, see the <code>isCompatibleWith</code>
  method for details. 
 <p>Specification version numbers use a syntax that consists of nonnegative
  decimal integers separated by periods ".", for example "2.0" or
  "1.2.3.4.5.6.7".  This allows an extensible number to be used to represent
  major, minor, micro, etc. versions.  The version specification is described
  by the following formal grammar: 
 <blockquote>
  <dl>
  <dt><i>SpecificationVersion:</i>
  <dd><i>Digits RefinedVersion<sub>opt</sub></i>
  <dt><i>RefinedVersion:</i>
  <dd><code>.</code> <i>Digits</i>
  <dd><code>.</code> <i>Digits RefinedVersion</i>
  
 <dt><i>Digits:</i>
  <dd><i>Digit</i>
  <dd><i>Digits</i>
  
 <dt><i>Digit:</i>
  <dd>any character for which <code>Character.isDigit</code> returns <code>true</code>,
  e.g. 0, 1, 2, ... 
 </dl>
  </blockquote>
  
 <p>The implementation title, version, and vendor strings identify an
  implementation and are made available conveniently to enable accurate
  reporting of the packages involved when a problem occurs. The contents
  all three implementation strings are vendor specific. The
  implementation version strings have no specified syntax and should
  only be compared for equality with desired version identifiers. 
 <p>Within each <code>ClassLoader</code> instance all classes from the same
  java package have the same Package object.  The static methods allow a package
  to be found by name or the set of all packages known to the current class
  loader to be found.
 - seealso: ClassLoader#definePackage
 */
@interface JavaLangPackage : NSObject < JavaLangReflectAnnotatedElement >

#pragma mark Public

/*!
 @throw NullPointerException
 @since 1.5
 */
- (id<JavaLangAnnotationAnnotation>)getAnnotationWithIOSClass:(IOSClass *)annotationClass;

/*!
 @since 1.5
 */
- (IOSObjectArray *)getAnnotations;

/*!
 @throw NullPointerException
 @since 1.8
 */
- (IOSObjectArray *)getAnnotationsByTypeWithIOSClass:(IOSClass *)annotationClass;

/*!
 @throw NullPointerException
 @since 1.8
 */
- (id<JavaLangAnnotationAnnotation>)getDeclaredAnnotationWithIOSClass:(IOSClass *)annotationClass;

/*!
 @since 1.5
 */
- (IOSObjectArray *)getDeclaredAnnotations;

/*!
 @throw NullPointerException
 @since 1.8
 */
- (IOSObjectArray *)getDeclaredAnnotationsByTypeWithIOSClass:(IOSClass *)annotationClass;

/*!
 @brief Return the title of this package.
 @return the title of the implementation, null is returned if it is not known.
 */
- (NSString *)getImplementationTitle;

/*!
 @brief Returns the name of the organization,
  vendor or company that provided this implementation.
 @return the vendor that implemented this package..
 */
- (NSString *)getImplementationVendor;

/*!
 @brief Return the version of this implementation.It consists of any string
  assigned by the vendor of this implementation and does
  not have any particular syntax specified or expected by the Java
  runtime.
 It may be compared for equality with other
  package version strings used for this implementation
  by this vendor for this package.
 @return the version of the implementation, null is returned if it is not known.
 */
- (NSString *)getImplementationVersion;

/*!
 @brief Return the name of this package.
 @return The fully-qualified name of this package as defined in section 6.5.3 of
           <cite>The Java&trade; Language Specification</cite>,
           for example, <code>java.lang</code>
 */
- (NSString *)getName;

/*!
 @brief Find a package by name in the callers <code>ClassLoader</code> instance.
 The callers <code>ClassLoader</code> instance is used to find the package
  instance corresponding to the named class. If the callers 
 <code>ClassLoader</code> instance is null then the set of packages loaded
  by the system <code>ClassLoader</code> instance is searched to find the
  named package. <p>
  Packages have attributes for versions and specifications only if the class
  loader created the package instance with the appropriate attributes. Typically,
  those attributes are defined in the manifests that accompany the classes.
 @param name a package name, for example, java.lang.
 @return the package of the requested name. It may be null if no package
           information is available from the archive or codebase.
 */
+ (JavaLangPackage *)getPackageWithNSString:(NSString *)packageName;

/*!
 @brief Get all the packages currently known for the caller's <code>ClassLoader</code>
  instance.Those packages correspond to classes loaded via or accessible by
  name to that <code>ClassLoader</code> instance.
 If the caller's 
 <code>ClassLoader</code> instance is the bootstrap <code>ClassLoader</code>
  instance, which may be represented by <code>null</code> in some implementations,
  only packages corresponding to classes loaded by the bootstrap 
 <code>ClassLoader</code> instance will be returned.
 @return a new array of packages known to the callers <code>ClassLoader</code>
  instance.  An zero length array is returned if none are known.
 */
+ (IOSObjectArray *)getPackages;

/*!
 @brief Return the title of the specification that this package implements.
 @return the specification title, null is returned if it is not known.
 */
- (NSString *)getSpecificationTitle;

/*!
 @brief Return the name of the organization, vendor,
  or company that owns and maintains the specification
  of the classes that implement this package.
 @return the specification vendor, null is returned if it is not known.
 */
- (NSString *)getSpecificationVendor;

/*!
 @brief Returns the version number of the specification
  that this package implements.
 This version string must be a sequence of nonnegative decimal
  integers separated by "."'s and may have leading zeros.
  When version strings are compared the most significant
  numbers are compared.
 @return the specification version, null is returned if it is not known.
 */
- (NSString *)getSpecificationVersion;

/*!
 @brief Return the hash code computed from the package name.
 @return the hash code computed from the package name.
 */
- (NSUInteger)hash;

/*!
 @throw NullPointerException
 @since 1.5
 */
- (jboolean)isAnnotationPresentWithIOSClass:(IOSClass *)annotationClass;

/*!
 @brief Compare this package's specification version with a
  desired version.It returns true if
  this packages specification version number is greater than or equal
  to the desired version number.
 <p>
  Version numbers are compared by sequentially comparing corresponding
  components of the desired and specification strings.
  Each component is converted as a decimal integer and the values
  compared.
  If the specification value is greater than the desired
  value true is returned. If the value is less false is returned.
  If the values are equal the period is skipped and the next pair of
  components is compared.
 @param desired the version string of the desired version.
 @return true if this package's version number is greater
           than or equal to the desired version number
 @throw NumberFormatExceptionif the desired or current version
           is not of the correct dotted form.
 */
- (jboolean)isCompatibleWithWithNSString:(NSString *)desired;

/*!
 @brief Returns true if this package is sealed.
 @return true if the package is sealed, false otherwise
 */
- (jboolean)isSealed;

/*!
 @brief Returns true if this package is sealed with respect to the specified
  code source url.
 @param url the code source url
 @return true if this package is sealed with respect to url
 */
- (jboolean)isSealedWithJavaNetURL:(JavaNetURL *)url;

/*!
 @brief Returns the string representation of this Package.
 Its value is the string "package " and the package name.
  If the package title is defined it is appended.
  If the package version is defined it is appended.
 @return the string representation of the package.
 */
- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Construct a package instance with the specified version
  information.
 @param name the name of the package
 @param spectitle the title of the specification
 @param specversion the version of the specification
 @param specvendor the organization that maintains the specification
 @param impltitle the title of the implementation
 @param implversion the version of the implementation
 @param implvendor the organization that maintains the implementation
 */
- (instancetype __nonnull)initWithNSString:(NSString *)name
                              withNSString:(NSString *)spectitle
                              withNSString:(NSString *)specversion
                              withNSString:(NSString *)specvendor
                              withNSString:(NSString *)impltitle
                              withNSString:(NSString *)implversion
                              withNSString:(NSString *)implvendor
                            withJavaNetURL:(JavaNetURL *)sealbase
                   withJavaLangClassLoader:(JavaLangClassLoader *)loader;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangPackage)

FOUNDATION_EXPORT JavaLangPackage *JavaLangPackage_getPackageWithNSString_(NSString *packageName);

FOUNDATION_EXPORT IOSObjectArray *JavaLangPackage_getPackages(void);

FOUNDATION_EXPORT void JavaLangPackage_initWithNSString_withNSString_withNSString_withNSString_withNSString_withNSString_withNSString_withJavaNetURL_withJavaLangClassLoader_(JavaLangPackage *self, NSString *name, NSString *spectitle, NSString *specversion, NSString *specvendor, NSString *impltitle, NSString *implversion, NSString *implvendor, JavaNetURL *sealbase, JavaLangClassLoader *loader);

FOUNDATION_EXPORT JavaLangPackage *new_JavaLangPackage_initWithNSString_withNSString_withNSString_withNSString_withNSString_withNSString_withNSString_withJavaNetURL_withJavaLangClassLoader_(NSString *name, NSString *spectitle, NSString *specversion, NSString *specvendor, NSString *impltitle, NSString *implversion, NSString *implvendor, JavaNetURL *sealbase, JavaLangClassLoader *loader) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangPackage *create_JavaLangPackage_initWithNSString_withNSString_withNSString_withNSString_withNSString_withNSString_withNSString_withJavaNetURL_withJavaLangClassLoader_(NSString *name, NSString *spectitle, NSString *specversion, NSString *specvendor, NSString *impltitle, NSString *implversion, NSString *implvendor, JavaNetURL *sealbase, JavaLangClassLoader *loader);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangPackage)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangPackage")
