
;; Function __ct_base  (_ZN11DistractionC2Ev, funcdef_no=2, decl_uid=1394, cgraph_uid=1, symbol_order=1) (executed once)

Modification phase of node __ct_base /1
Adjusting mask for param 0 to 0xfffffffffffffff8
Adjusting align: 8, misalign: 0
Setting nonnull for 0
__ct_base  (struct Distraction * const this)
{
  <bb 2> [local count: 1073741824]:
  *this_2(D) ={v} {CLOBBER};
  *this_2(D)._vptr.Distraction = &MEM <int (*__vtbl_ptr_type) ()[3]> [(void *)&_ZTV11Distraction + 16B];
  *this_2(D).f = 8.30000019073486328125e+0;
  *this_2(D).d = 1.0199999999999999289457264239899814128875732421875e+1;
  return;

}



;; Function bar (_ZN11Distraction3barEf, funcdef_no=3, decl_uid=1395, cgraph_uid=2, symbol_order=3)

Modification phase of node bar/3
bar (struct Distraction * const this, float z)
{
  float _1;
  float _2;
  float _7;

  <bb 2> [local count: 1073741824]:
  _1 = this_4(D)->f;
  _2 = _1 + z_5(D);
  this_4(D)->f = _2;
  _7 = _2 * 5.0e-1;
  return _7;

}



;; Function foo (_ZN1A3fooEi, funcdef_no=4, decl_uid=1400, cgraph_uid=3, symbol_order=4)

Modification phase of node foo/4
foo (struct A * const this, int i)
{
  int _2;

  <bb 2> [local count: 1073741824]:
  _2 = i_1(D) + 1;
  return _2;

}



;; Function foo (_ZN1B3fooEi, funcdef_no=5, decl_uid=1405, cgraph_uid=4, symbol_order=5)

Modification phase of node foo/5
foo (struct B * const this, int i)
{
  int _2;

  <bb 2> [local count: 1073741824]:
  _2 = i_1(D) + 2;
  return _2;

}



;; Function get_input (_Z9get_inputv, funcdef_no=7, decl_uid=1408, cgraph_uid=7, symbol_order=8) (executed once)

Modification phase of node get_input/8
__attribute__((noclone, noinline))
get_input ()
{
  <bb 2> [local count: 1073741824]:
  return 1;

}



;; Function __ct_base  (_ZN1AC2Ev, funcdef_no=8, decl_uid=1410, cgraph_uid=9, symbol_order=12) (executed once)

Modification phase of node __ct_base /12
Adjusting mask for param 0 to 0xfffffffffffffff8
Adjusting align: 8, misalign: 0
Setting nonnull for 0
__ct_base  (struct A * const this)
{
  <bb 2> [local count: 1073741824]:
  *this_2(D)._vptr.A = &MEM <int (*__vtbl_ptr_type) ()[3]> [(void *)&_ZTV1A + 16B];
  return;

}



;; Function __ct_base  (_ZN1BC2Ev, funcdef_no=9, decl_uid=1412, cgraph_uid=10, symbol_order=15) (executed once)

Modification phase of node __ct_base /15
Adjusting mask for param 0 to 0xfffffffffffffff8
Adjusting align: 8, misalign: 0
Setting nonnull for 0
__ct_base  (struct B * const this)
{
  struct Distraction * _1;
  struct A * _2;

  <bb 2> [local count: 1073741824]:
  _1 = &this_3(D)->D.1404;
  __ct_base  (_1);
  _2 = &this_3(D)->D.1403;
  __ct_base  (_2);
  *this_3(D).D.1404._vptr.Distraction = &MEM <int (*__vtbl_ptr_type) ()[7]> [(void *)&_ZTV1B + 16B];
  *this_3(D).D.1403._vptr.A = &MEM <int (*__vtbl_ptr_type) ()[7]> [(void *)&_ZTV1B + 48B];
  return;

}



;; Function middleman_1.constprop (_ZL11middleman_1P1Ai.constprop.0, funcdef_no=1, decl_uid=1417, cgraph_uid=14, symbol_order=39) (executed once)

Modification phase of node middleman_1.constprop/39
Adjusting mask for param 0 to 0xfffffffffffffff8
Adjusting align: 8, misalign: 0
middleman_1.constprop (struct A * obj, int i)
{
  int (*__vtbl_ptr_type) () * _2;
  int (*__vtbl_ptr_type) () _3;
  int _5;

  <bb 3> [local count: 1073741824]:

  <bb 2> [local count: 1073741824]:
  _2 = obj_1(D)->_vptr.A;
  _3 = *_2;
  _5 = OBJ_TYPE_REF(_3;(struct A)obj_1(D)->0) (obj_1(D), i_4(D));
  return _5;

}



;; Function middleman_2 (_ZL11middleman_2P1Bi, funcdef_no=10, decl_uid=1409, cgraph_uid=8, symbol_order=10) (executed once)

Modification phase of node middleman_2/10
Adjusting mask for param 0 to 0xfffffffffffffff8
Adjusting align: 8, misalign: 0
Setting nonnull for 0
middleman_2 (struct B * obj, int i)
{
  struct A * _1;
  struct A * _3;
  int _7;

  <bb 2> [local count: 1073741824]:
  if (obj_2(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619281]:
  _3 = &obj_2(D)->D.1403;

  <bb 4> [local count: 1073741824]:
  # _1 = PHI <0B(2), _3(3)>
  _7 = middleman_1 (_1, i_5(D));
  return _7;

}



;; Function main (main, funcdef_no=11, decl_uid=1415, cgraph_uid=12, symbol_order=17) (executed once)

Modification phase of node main/17
main (int argc, char * * argv)
{
  struct B b;
  int _1;
  int _5;

  <bb 2> [local count: 1073741824]:
  __ct_comp  (&b);
  _1 = get_input ();
  _5 = middleman_2 (&b, _1);
  if (_5 != 3)
    goto <bb 3>; [0.00%]
  else
    goto <bb 4>; [100.00%]

  <bb 3> [count: 0]:
  abort ();

  <bb 4> [local count: 1073741824]:
  b ={v} {CLOBBER};
  return 0;

}


