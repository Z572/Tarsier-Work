
;; Function m_fn1 (_ZN1CIiiE5m_fn1Ev, funcdef_no=0, decl_uid=1399, cgraph_uid=5, symbol_order=7)

Modification phase of node m_fn1/7
m_fn1 (struct C * const this)
{
  <bb 2> [local count: 1073741824]:
  return;

}



;; Function fn1 (_Z3fn1v, funcdef_no=5, decl_uid=1395, cgraph_uid=1, symbol_order=4)

Modification phase of node fn1/4
fn1 ()
{
  const int D.1448;

  <bb 2> [local count: 1073741824]:
  D.1448 = 0;
  m_fn2 (&b, &D.1448);
  D.1448 ={v} {CLOBBER};
  return;

}



;; Function _GLOBAL__sub_I_b (_GLOBAL__sub_I_b, funcdef_no=6, decl_uid=1401, cgraph_uid=7, symbol_order=12) (executed once)

Modification phase of node _GLOBAL__sub_I_b/12
_GLOBAL__sub_I_b ()
{
  <bb 2> [local count: 1073741824]:
  b._vptr.C = &MEM <int (*__vtbl_ptr_type) ()[3]> [(void *)&_ZTV1CIiiE + 16B];
  return;

}


