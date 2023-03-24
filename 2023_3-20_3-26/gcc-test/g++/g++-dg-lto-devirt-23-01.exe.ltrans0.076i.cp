
;; Function m_fn1 (_ZN13MultiTermDocs5m_fn1EPi, funcdef_no=4, decl_uid=1397, cgraph_uid=1, symbol_order=19)

Modification phase of node m_fn1/19
m_fn1 (struct MultiTermDocs * const this, int * D.1466)
{
  <bb 2> [local count: 1073741824]:
  return 0B;

}



;; Function __dt_comp  (_ZN1CD1Ev, funcdef_no=5, decl_uid=1407, cgraph_uid=7, symbol_order=38)

Modification phase of node __dt_comp /38
__dt_comp  (struct C * const this)
{
  struct MultiTermDocs * _1;

  <bb 2> [local count: 1073741824]:
  this_3(D)->D.1400._vptr.MultiTermDocs = &MEM <int (*__vtbl_ptr_type) ()[6]> [(void *)&_ZTV1C + 24B];
  _1 = &this_3(D)->D.1400;
  __dt_base  (_1, &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]);
  *this_3(D) ={v} {CLOBBER};
  return;

}



;; Function m_fn1 (_ZN1C5m_fn1EPi, funcdef_no=8, decl_uid=1401, cgraph_uid=2, symbol_order=25) (unlikely executed)

Modification phase of node m_fn1/25
m_fn1 (struct C * const this, int * D.1490)
{
  <bb 2> [count: 0]:
  abort ();

}



;; Function __dt_del  (_ZN1CD0Ev, funcdef_no=9, decl_uid=1411, cgraph_uid=13, symbol_order=39)

Modification phase of node __dt_del /39
__dt_del  (struct C * const this)
{
  <bb 2> [local count: 1073741824]:
  __dt_comp  (this_2(D));
  operator delete (this_2(D), 16);
  return;

}



;; Function main (main, funcdef_no=10, decl_uid=1402, cgraph_uid=3, symbol_order=32) (executed once)

Modification phase of node main/32
main ()
{
  struct C c;

  <bb 2> [local count: 1073741824]:
  __ct_comp  (&c);
  __dt_comp  (&c);
  c ={v} {CLOBBER};
  return 0;

}


