/* { dg-options "-I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/g++.dg/compat -Wno-abi" } */
/* { dg-options "-I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/g++.dg/compat -mno-mmx -Wno-abi" { target i?86-*-* x86_64-*-* } } */
/* { dg-options "-I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/g++.dg/compat -fno-common" { target hppa*-*-hpux* powerpc*-*-darwin* *-*-mingw32* *-*-cygwin* } } */
/* { dg-options "-I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/g++.dg/compat -mno-mmx -fno-common -Wno-abi" { target i?86-*-darwin* x86_64-*-darwin* i?86-*-mingw32* x86_64-*-mingw32* i?86-*-cygwin* } } */
/* { dg-options "-I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/g++.dg/compat -mno-base-addresses" { target mmix-*-* } } */
/* { dg-options "-I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/g++.dg/compat -mlongcalls -mtext-section-literals" { target xtensa*-*-* } } */

#include "struct-layout-1.h"

#define TX(n, type, attrs, fields, ops) extern void test##n (void);
#include "t021_test.h"
#undef TX

int main (void)
{
#define TX(n, type, attrs, fields, ops)   test##n ();
#include "t021_test.h"
#undef TX
  if (fails)
    {
      fflush (stdout);
      abort ();
    }
  exit (0);
}
