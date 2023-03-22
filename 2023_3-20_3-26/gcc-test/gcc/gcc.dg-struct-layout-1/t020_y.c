/* { dg-options "-w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat" } */
/* { dg-options "-w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat -Wno-abi" } */
/* { dg-options "-w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat -mno-mmx -Wno-abi" { target i?86-*-* x86_64-*-* } } */
/* { dg-options "-w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat -fno-common" { target hppa*-*-hpux* powerpc*-*-darwin* } } */
/* { dg-options "-w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat -mno-mmx -fno-common -Wno-abi" { target i?86-*-darwin* x86_64-*-darwin* } } */
/* { dg-options "-w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat -mno-base-addresses" { target mmix-*-* } } */
/* { dg-options "-w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/gcc.dg/compat -mlongcalls -mtext-section-literals" { target xtensa*-*-* } } */
#include "struct-layout-1_y1.h"
#include "t020_test.h"
#include "struct-layout-1_y2.h"
#include "t020_test.h"
