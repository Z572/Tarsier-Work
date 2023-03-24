
IPA constant propagation start:
Determining dynamic type for call: OBJ_TYPE_REF(_3;(struct C)this_4(D)->0) (this_4(D));
  Starting walk at: _2 = this_4(D)->_vptr.C;
  instance pointer: this_4(D)  Outer instance pointer: this_4(D) offset: 0 (bits) vtbl reference: this_4(D)->_vptr.C
  Function call may change dynamic type:A::operator== (&a, &D.2035);
  Function call may change dynamic type:B::m_fn1 (_1);
  Function call may change dynamic type:B::m_fn2 (_1);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_3;(struct C)this_4(D)->0) (this_4(D));
  Starting walk at: _2 = this_4(D)->_vptr.C;
  instance pointer: this_4(D)  Outer instance pointer: this_4(D) offset: 0 (bits) vtbl reference: this_4(D)->_vptr.C
  Function call may change dynamic type:A::operator== (&a, &D.2035);
  Function call may change dynamic type:B::m_fn1 (_1);
  Function call may change dynamic type:B::m_fn2 (_1);
  No dynamic type change found.
Determining dynamic type for call: B::m_fn2 (_1);
  Starting walk at: B::m_fn2 (_1);
  instance pointer: _1  Outer instance pointer: this_4(D) offset: 96 (bits) vtbl reference: 
  No dynamic type change found.
Determining dynamic type for call: B::m_fn1 (_1);
  Starting walk at: B::m_fn1 (_1);
  instance pointer: _1  Outer instance pointer: this_4(D) offset: 96 (bits) vtbl reference: 
  Function call may change dynamic type:B::m_fn2 (_1);
  No dynamic type change found.
Determining dynamic type for call: A::operator== (&a, &D.2035);
  Starting walk at: A::operator== (&a, &D.2035);
  instance pointer: &a  Outer instance pointer: a offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:B::m_fn1 (_1);
  Function call may change dynamic type:B::m_fn2 (_1);
Determining dynamic type for call: A::operator== (&a, &D.2035);
  Starting walk at: A::operator== (&a, &D.2035);
  instance pointer: &D.2035  Outer instance pointer: D.2035 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:B::m_fn1 (_1);
  Function call may change dynamic type:B::m_fn2 (_1);
Determining dynamic type for call: C<int, int>::m_fn2 (&b, &D.1998);
  Starting walk at: C<int, int>::m_fn2 (&b, &D.1998);
  instance pointer: &D.1998  Outer instance pointer: D.1998 offset: 0 (bits) vtbl reference: 
