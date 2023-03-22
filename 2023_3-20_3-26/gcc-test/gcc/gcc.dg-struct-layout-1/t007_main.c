/* { dg-require-effective-target int32plus } */
/* { dg-options "-I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat" } */
/* { dg-options "-I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat -Wno-abi" } */
/* { dg-options "-I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat -mno-mmx -Wno-abi" { target i?86-*-* x86_64-*-* } } */
/* { dg-options "-I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat -fno-common" { target hppa*-*-hpux* powerpc*-*-darwin* } } */
/* { dg-options "-I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat -mno-mmx -fno-common -Wno-abi" { target i?86-*-darwin* x86_64-*-darwin* } } */
/* { dg-options "-I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat -mno-base-addresses" { target mmix-*-* } } */
/* { dg-options "-I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat -mlongcalls -mtext-section-literals" { target xtensa*-*-* } } */
/* { dg-prune-output ".*-Wno-abi.*" } */
/* { dg-prune-output ".*Offset of packed bit-field.*" } */
#include "struct-layout-1.h"

#define TX(n, type, attrs, fields, ops) extern void test##n (void);
#include "t007_test.h"
#undef TX

int main (void)
{
#define TX(n, type, attrs, fields, ops)   test##n ();
#include "t007_test.h"
#undef TX
  exit (fails != 0);
}
