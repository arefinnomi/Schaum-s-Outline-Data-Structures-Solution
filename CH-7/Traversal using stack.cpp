                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                <?xml version="1.0" encoding="utf-8"?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html lang="en-US" xmlns="http://www.w3.org/1999/xhtml" xml:lang=
"en-US">
<head>
<title>Subjects, Principals, Authentication, and
Credentials</title>
<link rel="stylesheet" type="text/css" href="../../../../../technotes/css/guide.css" />
</head>
<body>
<!-- STATIC HEADER -->

<!-- header start -->
<div id="javaseheader">
<div id="javaseheaderlogo">
<img src="../../../../../images/javalogo.gif"
alt="Java logo" />
</div>
<div id="javaseheaderindex">

<a href=
"../../../../../index.html">Documentation Contents</a>
</div>
<div class="clear"></div>
</div>

<!-- header end -->


<h2>Subjects, Principals, Authentication, and Credentials</h2>
<p>To authorize access to resources, applications first need to
authenticate the source of the request. The JAAS framework defines
the term <b><i>subject</i></b> to represent the source of a
request. A subject may be any entity, such as a person or service.
A subject is represented by the <a href=
"../../../../../api/javax/security/auth/Subject.html"><code>javax.security.auth.Subject</code></a>
class.</p>
<p><b><i>Authentication</i></b> represents the process by which the
identity of a subject is verified, and must be performed in a
secure fashion; otherwise a perpetrator may impersonate others to
gain access to a system. Authentication typically involves the
subject demonstrating some form of evidence to prove its identity.
Such evidence may be information only the subject would likely know
or have (such as a password or fingerprint), or it may be
information only the subject could produce (such as signed data
using a private key).</p>
<p>Once authenticated, a Subject is populated with associated
identities, or <b><i>Principals</i></b> (of type <a href=
"../../../../../api/java/security/Principal.html"><code>java.security.Principal</code></a>).
A Subject may have 