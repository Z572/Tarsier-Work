
;; Function distraction (_ZN1A11distractionEf, funcdef_no=2, decl_uid=1393, cgraph_uid=1, symbol_order=0)

Modification phase of node distraction/0
distraction (struct A * const this, float f)
{
  double _1;
  double _2;
  float _5;

  <bb 2> [local count: 1073741824]:
  _1 = (double) f_3(D);
  _2 = _1 + 6.20000000000000017763568394002504646778106689453125e+0;
  f_4 = (float) _2;
  _5 = f_4 * 5.0e-1;
  return _5;

}



;; Function foo (_ZN1A3fooEi, funcdef_no=3, decl_uid=1394, cgraph_uid=2, symbol_order=1)

Modification phase of node foo/1
foo (struct A * const this, int i)
{
  int _2;

  <bb 2> [local count: 1073741824]:
  _2 = i_1(D) + 1;
  return _2;

}



;; Function foo (_ZN1B3fooEi, funcdef_no=4, decl_uid=1398, cgraph_uid=3, symbol_order=2)

Modification phase of node foo/2
foo (struct B * const this, int i)
{
  int _2;

  <bb 2> [local count: 1073741824]:
  _2 = i_1(D) + 2;
  return _2;

}



;; Function get_input (_Z9get_inputv, funcdef_no=5, decl_uid=1399, cgraph_uid=4, symbol_order=5) (executed once)

Modification phase of node get_input/5
__attribute__((noclone, noinline))
get_input ()
{
  <bb 2> [local count: 1073741824]:
  return 1;

}



;; Function __ct_base  (_ZN1AC2Ev, funcdef_no=6, decl_uid=1400, cgraph_uid=5, symbol_order=7) (executed once)

Modification phase of node __ct_base /7
Adjusting mask for param 0 to 0xfffffffffffffff8
Adjusting align: 8, misalign: 0
Setting nonnull for 0
__ct_base  (struct A * const this)
{
  <bb 2> [local count: 1073741824]:
  *this_2(D)._vptr.A = &MEM <int (*__vtbl_ptr_type) ()[4]> [(void *)&_ZTV1A + 16B];
  return;

}



;; Function __ct_base  (_ZN1BC2Ev, funcdef_no=7, decl_uid=1402, cgraph_uid=6, symbol_order=10) (executed once)

Modification phase of node __ct_base /10
Adjusting mask for param 0 to 0xfffffffffffffff8
Adjusting align: 8, misalign: 0
Setting nonnull for 0
__ct_base  (struct B * const this)
{
  struct A * _1;

  <bb 2> [local count: 1073741824]:
  _1 = &this_2(D)->D.1397;
  __ct_base  (_1);
  *this_2(D).D.1397._vptr.A = &MEM <int (*__vtbl_ptr_type) ()[4]> [(void *)&_ZTV1B + 16B];
  return;

}



;; Function middleman.constprop (_ZL9middlemanR1Ai.constprop.0, funcdef_no=1, decl_uid=1407, cgraph_uid=10, symbol_order=33) (executed once)

Modification phase of node middleman.constprop/33
Adjusting mask for param 0 to 0xfffffffffffffff8
Adjusting align: 8, misalign: 0
Setting nonnull for 0
middleman.constprop (struct A & obj, int i)
{
  int (*__vtbl_ptr_type) () * _2;
  int (*__vtbl_ptr_type) () _3;
  int _5;

  <bb 3> [local count: 1073741824]:

  <bb 2> [local count: 1073741824]:
  _2 = obj_1(D)->_vptr.A;
  _3 = MEM[(int (*__vtbl_ptr_type) () *)_2 + 8B];
  _5 = OBJ_TYPE_REF(_3;(struct A)obj_1(D)->1) (obj_1(D), i_4(D));
  return _5;

}



;; Function main (main, funcdef_no=8, decl_uid=1405, cgraph_uid=8, symbol_order=12) (executed once)

Modification phase of node main/12
main (int argc, char * * argv)
{
  struct B b;
  int _1;
  int _5;

  <bb 2> [local count: 1073741824]:
  __ct_comp  (&b);
  _1 = get_input ();
  _5 = middleman (&b.D.1397, _1);
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


