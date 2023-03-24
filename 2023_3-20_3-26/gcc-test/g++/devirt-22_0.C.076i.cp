
IPA constant propagation start:
Determining dynamic type for call: C::operator[] (p2_3(D), 0);
  Starting walk at: C::operator[] (p2_3(D), 0);
  instance pointer: p2_3(D)  Outer instance pointer: p2_3(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:C::operator[] (p2_3(D), 0);
  Function call may change dynamic type:C::operator[] (p1_5(D), 0);
  Function call may change dynamic type:C::operator[] (p2_3(D), 0);
Determining dynamic type for call: C::operator[] (p1_5(D), 0);
  Starting walk at: C::operator[] (p1_5(D), 0);
  instance pointer: p1_5(D)  Outer instance pointer: p1_5(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:C::operator[] (p2_3(D), 0);
  Function call may change dynamic type:C::operator[] (p2_3(D), 0);
  Function call may change dynamic type:C::operator[] (p1_5(D), 0);
  Function call may change dynamic type:C::operator[] (p2_3(D), 0);
Determining dynamic type for call: C::operator[] (p2_3(D), 0);
  Starting walk at: C::operator[] (p2_3(D), 0);
  instance pointer: p2_3(D)  Outer instance pointer: p2_3(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:C::operator[] (p1_5(D), 0);
  Function call may change dynamic type:C::operator[] (p2_3(D), 0);
  Function call may change dynamic type:C::operator[] (p2_3(D), 0);
  Function call may change dynamic type:C::operator[] (p1_5(D), 0);
  Function call may change dynamic type:C::operator[] (p2_3(D), 0);
Determining dynamic type for call: OBJ_TYPE_REF(_2;(struct C)this_4(D)->0) (this_4(D));
  Starting walk at: _1 = this_4(D)->_vptr.C;
  instance pointer: this_4(D)  Outer instance pointer: this_4(D) offset: 0 (bits) vtbl reference: this_4(D)->_vptr.C
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_2;(struct C)this_4(D)->0) (this_4(D));
  Starting walk at: _1 = this_4(D)->_vptr.C;
  instance pointer: this_4(D)  Outer instance pointer: this_4(D) offset: 0 (bits) vtbl reference: this_4(D)->_vptr.C
  No dynamic type change found.
Determining dynamic type for call: _8 = B::operator[] (this_4(D), p1_6(D));
  Starting walk at: _8 = B::operator[] (this_4(D), p1_6(D));
  instance pointer: this_4(D)  Outer instance pointer: this_4(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct C)this_4(D)->0) (this_4(D));
  No dynamic type change found.
