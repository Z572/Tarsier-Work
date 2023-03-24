/* { dg-do run { xfail { powerpc*-*-aix* } } } */
/* { dg-options "-w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/objc.dg/gnu-encoding -fgnu-runtime" } */
#include <objc/runtime.h> 
#include "struct-layout-1.h"

int fails; 
#define TX(n, type, attrs, fields, ops)                         \
type S##n { fields } attrs;                                     \
void test##n (void)                                             \
{                                                               \
  char *encoding = @encode (type S##n);				\
  if (objc_sizeof_type (encoding) != sizeof(type S##n)) 	\
    {   	                                                \
      fails ++;                                                 \
      printf(#type " { " #fields "} size is %u, but is calulated as %u\n", \
      	      sizeof(type S##n), objc_sizeof_type (encoding));  \
    }           	                                        \
  if (objc_alignof_type (encoding) != __alignof__ (type S##n)) 	\
    {   	                                                \
      fails ++;                                                 \
      printf(#type " { " #fields "} align is %u, but is calulated as %u\n", \
      	      __alignof__ (type S##n), objc_alignof_type (encoding));  \
    }           	                                        \
}
#include "t002_test.h"
#undef TX

int main (void)
{
#define TX(n, type, attrs, fields, ops)   test##n ();
#include "t002_test.h"
#undef TX
  if (fails)
    {
      fflush (stdout);
      abort ();
    }
  exit (0);
}
