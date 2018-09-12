//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/Extension.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertExtension")
#ifdef RESTRICT_JavaSecurityCertExtension
#define INCLUDE_ALL_JavaSecurityCertExtension 0
#else
#define INCLUDE_ALL_JavaSecurityCertExtension 1
#endif
#undef RESTRICT_JavaSecurityCertExtension

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaSecurityCertExtension_) && (INCLUDE_ALL_JavaSecurityCertExtension || defined(INCLUDE_JavaSecurityCertExtension))
#define JavaSecurityCertExtension_

@class IOSByteArray;
@class JavaIoOutputStream;

/*!
 @brief This interface represents an X.509 extension.
 <p>
  Extensions provide a means of associating additional attributes with users
  or public keys and for managing a certification hierarchy.  The extension
  format also allows communities to define private extensions to carry
  information unique to those communities. 
 <p>
  Each extension contains an object identifier, a criticality setting
  indicating whether it is a critical or a non-critical extension, and
  and an ASN.1 DER-encoded value. Its ASN.1 definition is: 
 @code

      Extension ::= SEQUENCE {
          extnId        OBJECT IDENTIFIER,
          critical      BOOLEAN DEFAULT FALSE,
          extnValue     OCTET STRING
                  -- contains a DER encoding of a value
                  -- of the type registered for use with
                  -- the extnId object identifier value
      } 
  
@endcode
  
 <p>
  This interface is designed to provide access to a single extension,
  unlike <code>java.security.cert.X509Extension</code> which is more suitable
  for accessing a set of extensions.
 @since 1.7
 */
@protocol JavaSecurityCertExtension < JavaObject >

/*!
 @brief Gets the extensions's object identifier.
 @return the object identifier as a String
 */
- (NSString *)getId;

/*!
 @brief Gets the extension's criticality setting.
 @return true if this is a critical extension.
 */
- (jboolean)isCritical;

/*!
 @brief Gets the extensions's DER-encoded value.Note, this is the bytes
  that are encoded as an OCTET STRING.
 It does not include the OCTET
  STRING tag and length.
 @return a copy of the extension's value, or <code>null</code> if no
     extension value is present.
 */
- (IOSByteArray *)getValue;

/*!
 @brief Generates the extension's DER encoding and writes it to the output
  stream.
 @param outArg the output stream
 @throw IOExceptionon encoding or output error.
 @throw NullPointerExceptionif <code>out</code> is <code>null</code>.
 */
- (void)encodeWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertExtension)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertExtension)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertExtension")
