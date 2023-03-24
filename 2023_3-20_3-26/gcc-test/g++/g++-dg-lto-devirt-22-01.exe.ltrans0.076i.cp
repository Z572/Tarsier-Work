
;; Function m_fn1 (_ZN1C5m_fn1Ev, funcdef_no=4, decl_uid=1397, cgraph_uid=4, symbol_order=0)

Modification phase of node m_fn1/0
m_fn1 (struct C * const this)
{
  <bb 2> [local count: 1073741824]:
  return 0;

}



;; Function lookupSourceDone (_Z16lookupSourceDonev, funcdef_no=8, decl_uid=1393, cgraph_uid=1, symbol_order=8)

Modification phase of node lookupSourceDone/8
lookupSourceDone ()
{
  <bb 2> [local count: 1073741824]:
  operator[] (&b, 0);
  return;

}



;; Function update_sources (_Z14update_sourcesv, funcdef_no=9, decl_uid=1399, cgraph_uid=6, symbol_order=9)

Modification phase of node update_sources/9
update_sources ()
{
  int * _1;

  <bb 2> [local count: 1073741824]:
  _1 = e;
  if (_1 != 0B)
    goto <bb 3>; [0.04%]
  else
    goto <bb 4>; [99.96%]

  <bb 3> [local count: 429496]:
  _Z14update_sourcesv.part.0 ();

  <bb 4> [local count: 1073312329]:
  return;

}


