--- a/gcc/cp/cfns.h.orig	2009-04-21 19:03:23 UTC
+++ b/gcc/cp/cfns.h
@@ -53,6 +53,9 @@ __inline
 static unsigned int hash (const char *, unsigned int);
 #ifdef __GNUC__
 __inline
+#ifdef __GNUC_STDC_INLINE__
+__attribute__ ((__gnu_inline__))
+#endif
 #endif
 const char * libc_name_p (const char *, unsigned int);
 /* maximum key range = 391, duplicates = 0 */
@@ -96,7 +99,7 @@ hash (register const char *str, register
       400, 400, 400, 400, 400, 400, 400, 400, 400, 400,
       400, 400, 400, 400, 400, 400, 400
     };
-  register int hval = len;
+  register int hval = (int) len;
 
   switch (hval)
     {
