//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/file/attribute/AclFileAttributeView.java
//

#include <JRE/J2ObjC_header.h>

#pragma push_macro("INCLUDE_ALL_JavaNioFileAttributeAclFileAttributeView")
#ifdef RESTRICT_JavaNioFileAttributeAclFileAttributeView
#define INCLUDE_ALL_JavaNioFileAttributeAclFileAttributeView 0
#else
#define INCLUDE_ALL_JavaNioFileAttributeAclFileAttributeView 1
#endif
#undef RESTRICT_JavaNioFileAttributeAclFileAttributeView

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaNioFileAttributeAclFileAttributeView_) && (INCLUDE_ALL_JavaNioFileAttributeAclFileAttributeView || defined(INCLUDE_JavaNioFileAttributeAclFileAttributeView))
#define JavaNioFileAttributeAclFileAttributeView_

#define RESTRICT_JavaNioFileAttributeFileOwnerAttributeView 1
#define INCLUDE_JavaNioFileAttributeFileOwnerAttributeView 1
#include <JRE/java/nio/file/attribute/FileOwnerAttributeView.h>

@protocol JavaUtilList;

/*!
 @brief A file attribute view that supports reading or updating a file's Access
  Control Lists (ACL) or file owner attributes.
 <p> ACLs are used to specify access rights to file system objects. An ACL is
  an ordered list of <code>access-control-entries</code>, each specifying a 
 <code>UserPrincipal</code> and the level of access for that user principal. This
  file attribute view defines the <code>getAcl</code>, and <code>setAcl</code>
  methods to read and write ACLs based on the ACL
  model specified in <a href="http://www.ietf.org/rfc/rfc3530.txt"><i>RFC&nbsp;3530:
  Network File System (NFS) version 4 Protocol</i></a>. This file attribute view
  is intended for file system implementations that support the NFSv4 ACL model
  or have a <em>well-defined</em> mapping between the NFSv4 ACL model and the ACL
  model used by the file system. The details of such mapping are implementation
  dependent and are therefore unspecified. 
 <p> This class also extends <code>FileOwnerAttributeView</code> so as to define
  methods to get and set the file owner. 
 <p> When a file system provides access to a set of <code>file-systems</code>
  that are not homogeneous then only some of the file systems may
  support ACLs. The <code>supportsFileAttributeView</code>
  method can be used to test if a file system
  supports ACLs. 
 <h2>Interoperability</h2>
  RFC&nbsp;3530 allows for special user identities to be used on platforms that
  support the POSIX defined access permissions. The special user identities
  are "<code>OWNER@@</code>", "<code>GROUP@@</code>", and "<code>EVERYONE@@</code>". When both
  the <code>AclFileAttributeView</code> and the <code>PosixFileAttributeView</code>
  are supported then these special user identities may be included in ACL <code>entries</code>
  that are read or written. The file system's <code>UserPrincipalLookupService</code>
  may be used to obtain a <code>UserPrincipal</code>
  to represent these special identities by invoking the <code>lookupPrincipalByName</code>
  method. 
 <p> <b>Usage Example:</b>
  Suppose we wish to add an entry to an existing ACL to grant "joe" access: 
 @code

      // lookup "joe"
      UserPrincipal joe = file.getFileSystem().getUserPrincipalLookupService()
          .lookupPrincipalByName("joe");
      // get view
      AclFileAttributeView view = Files.getFileAttributeView(file, AclFileAttributeView.class);
      // create ACE to give "joe" read access
      AclEntry entry = AclEntry.newBuilder()
          .setType(AclEntryType.ALLOW)
          .setPrincipal(joe)
          .setPermissions(AclEntryPermission.READ_DATA, AclEntryPermission.READ_ATTRIBUTES)
          .build();
      // read ACL, insert ACE, re-write ACL
      List&lt;AclEntry&gt; acl = view.getAcl();
      acl.add(0, entry);   // insert before any DENY entries
      view.setAcl(acl); 
  
@endcode
  
 <h2> Dynamic Access </h2>
  <p> Where dynamic access to file attributes is required, the attributes
  supported by this attribute view are as follows: 
 <blockquote>
  <table border="1" cellpadding="8" summary="Supported attributes">
    <tr>
      <th> Name </th>
      <th> Type </th>
    </tr>
    <tr>
      <td> "acl" </td>
      <td> <code>List</code>&lt;<code>AclEntry</code>&gt; </td>
    </tr>
    <tr>
      <td> "owner" </td>
      <td> <code>UserPrincipal</code> </td>
    </tr>
  </table>
  </blockquote>
  
 <p> The <code>getAttribute</code> method may be used to read
  the ACL or owner attributes as if by invoking the <code>getAcl</code> or 
 <code>getOwner</code> methods. 
 <p> The <code>setAttribute</code> method may be used to
  update the ACL or owner attributes as if by invoking the <code>setAcl</code>
  or <code>setOwner</code> methods. 
 <h2> Setting the ACL when creating a file </h2>
  
 <p> Implementations supporting this attribute view may also support setting
  the initial ACL when creating a file or directory. The initial ACL
  may be provided to methods such as <code>createFile</code> or <code>createDirectory</code>
  as an <code>FileAttribute</code> with <code>name</code>
  <code>"acl:acl"</code> and a <code>value</code>
  that is the list of <code>AclEntry</code> objects. 
 <p> Where an implementation supports an ACL model that differs from the NFSv4
  defined ACL model then setting the initial ACL when creating the file must
  translate the ACL to the model supported by the file system. Methods that
  create a file should reject (by throwing <code>IOException</code>)
  any attempt to create a file that would be less secure as a result of the
  translation.
 @since 1.7
 */
@protocol JavaNioFileAttributeAclFileAttributeView < JavaNioFileAttributeFileOwnerAttributeView, JavaObject >

/*!
 @brief Returns the name of the attribute view.Attribute views of this type
  have the name <code>"acl"</code>.
 */
- (NSString *)name;

/*!
 @brief Reads the access control list.
 <p> When the file system uses an ACL model that differs from the NFSv4
  defined ACL model, then this method returns an ACL that is the translation
  of the ACL to the NFSv4 ACL model. 
 <p> The returned list is modifiable so as to facilitate changes to the
  existing ACL. The <code>setAcl</code> method is used to update
  the file's ACL attribute.
 @return an ordered list of <code>entries</code> representing the
           ACL
 @throw IOException
 if an I/O error occurs
 @throw SecurityException
 In the case of the default provider, a security manager is
           installed, and it denies <code>RuntimePermission</code><tt>("accessUserInformation")</tt>
           or its <code>checkRead</code> method
           denies read access to the file.
 */
- (id<JavaUtilList>)getAcl;

/*!
 @brief Updates (replace) the access control list.
 <p> Where the file system supports Access Control Lists, and it uses an
  ACL model that differs from the NFSv4 defined ACL model, then this method
  must translate the ACL to the model supported by the file system. This
  method should reject (by throwing <code>IOException</code>) any
  attempt to write an ACL that would appear to make the file more secure
  than would be the case if the ACL were updated. Where an implementation
  does not support a mapping of <code>AclEntryType.AUDIT</code> or <code>AclEntryType.ALARM</code>
  entries, then this method ignores these entries when
  writing the ACL. 
 <p> If an ACL entry contains a <code>user-principal</code>
  that is not associated with the same provider as this attribute view then 
 <code>ProviderMismatchException</code> is thrown. Additional validation, if
  any, is implementation dependent. 
 <p> If the file system supports other security related file attributes
  (such as a file <code>access-permissions</code>
  for example), the updating the access control list
  may also cause these security related attributes to be updated.
 @param acl the new access control list
 @throw IOException
 if an I/O error occurs or the ACL is invalid
 @throw SecurityException
 In the case of the default provider, a security manager is
           installed, it denies <code>RuntimePermission</code><tt>("accessUserInformation")</tt>
           or its <code>checkWrite</code>
           method denies write access to the file.
 */
- (void)setAclWithJavaUtilList:(id<JavaUtilList>)acl;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioFileAttributeAclFileAttributeView)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioFileAttributeAclFileAttributeView)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioFileAttributeAclFileAttributeView")
