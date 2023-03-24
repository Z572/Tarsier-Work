/* { dg-options "-std=c++14 -DCXX14_VS_CXX17 -w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/g++.dg/compat -Wno-abi" } */
/* { dg-options "-std=c++14 -DCXX14_VS_CXX17 -w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/g++.dg/compat -mno-mmx -Wno-abi" { target i?86-*-* x86_64-*-* } } */
/* { dg-options "-std=c++14 -DCXX14_VS_CXX17 -w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/g++.dg/compat -fno-common" { target hppa*-*-hpux* powerpc*-*-darwin* *-*-mingw32* *-*-cygwin* } } */
/* { dg-options "-std=c++14 -DCXX14_VS_CXX17 -w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/g++.dg/compat -mno-mmx -fno-common -Wno-abi" { target i?86-*-darwin* x86_64-*-darwin* i?86-*-mingw32* x86_64-*-mingw32* i?86-*-cygwin* } } */
/* { dg-options "-std=c++14 -DCXX14_VS_CXX17 -w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/g++.dg/compat -mno-base-addresses" { target mmix-*-* } } */
/* { dg-options "-std=c++14 -DCXX14_VS_CXX17 -w -I/home/openeuler/rpmbuild/BUILD/gcc-10.3.0/gcc/testsuite/g++.dg/compat -mlongcalls -mtext-section-literals" { target xtensa*-*-* } } */

#include "struct-layout-1_x1.h"
#include "t042_test.h"
#include "struct-layout-1_x2.h"
#include "t042_test.h"
