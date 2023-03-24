
;; Function foo (_ZN1A3fooEi, funcdef_no=2, decl_uid=1393, cgraph_uid=1, symbol_order=0)

Modification phase of node foo/0
foo (struct A * const this, int i)
{
  int _2;

  <bb 2> [local count: 1073741824]:
  _2 = i_1(D) + 1;
  return _2;

}



;; Function foo (_ZN1B3fooEi, funcdef_no=3, decl_uid=1397, cgraph_uid=2, symbol_order=1)

Modification phase of node foo/1
foo (struct B * const this, int i)
{
  int _2;

  <bb 2> [local count: 1073741824]:
  _2 = i_1(D) + 2;
  return _2;

}



;; Function get_input (_Z9get_inputv, funcdef_no=4, decl_uid=1398, cgraph_uid=3, symbol_order=4) (executed once)

Modification phase of node get_input/4
__attribute__((noclone, noinline))
get_input ()
{
  <bb 2> [local count: 1073741824]:
  return 1;

}



;; Function __ct_base  (_ZN1AC2Ev, funcdef_no=5, decl_uid=1399, cgraph_uid=4, symbol_order=6) (executed once)

Modification phase of node __ct_base /6
Adjusting mask for param 0 to 0xfffffffffffffff8
Adjusting align: 8, misalign: 0
Setting nonnull for 0
__ct_base  (struct A * const this)
{
  <bb 2> [local count: 1073741824]:
  *this_2(D)._vptr.A = &MEM <int (*__vtbl_ptr_type) ()[3]> [(void *)&_ZTV1A + 16B];
  return;

}



;; Function __ct_base  (_ZN1BC2Ev, funcdef_no=6, decl_uid=1401, cgraph_uid=5, symbol_order=9) (executed once)

Modification phase of node __ct_base /9
Adjusting mask for param 0 to 0xfffffffffffffff8
Adjusting align: 8, misalign: 0
Setting nonnull for 0
__ct_base  (struct B * const this)
{
  struct A * _1;

  <bb 2> [local count: 1073741824]:
  _1 = &this_2(D)->D.1396;
  __ct_base  (_1);
  *this_2(D).D.1396._vptr.A = &MEM <int (*__vtbl_ptr_type) ()[3]> [(void *)&_ZTV1B + 16B];
  return;

}



;; Function middleman.constprop (_ZL9middlemanP1Ai.constprop.0, funcdef_no=1, decl_uid=1406, cgraph_uid=9, symbol_order=32) (executed once)

Modification phase of node middleman.constprop/32
Adjusting mask for param 0 to 0xfffffffffffffff8
Adjusting align: 8, misalign: 0
Setting nonnull for 0
middleman.constprop (struct A * obj, int i)
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



;; Function main (main, funcdef_no=7, decl_uid=1404, cgraph_uid=7, symbol_order=11) (executed once)

Modification phase of node main/11
main (int argc, char * * argv)
{
  struct B b;
  int _1;
  int _5;

  <bb 2> [local count: 1073741824]:
  __ct_comp  (&b);
  _1 = get_input ();
  _5 = middleman (&b.D.1396, _1);
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


