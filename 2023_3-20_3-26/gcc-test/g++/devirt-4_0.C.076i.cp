
IPA constant propagation start:
Determining dynamic type for call: A::A (_1);
  Starting walk at: A::A (_1);
  instance pointer: _1  Outer instance pointer: this_2(D) offset: 0 (bits) vtbl reference: 
  No dynamic type change found.
Determining dynamic type for call: _5 = middleman_1 (obj_2(D), i_3(D));
  Starting walk at: _5 = middleman_1 (obj_2(D), i_3(D));
  instance pointer: obj_2(D)  Outer instance pointer: obj_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _7 = OBJ_TYPE_REF(_2;(struct A)obj_4(D)->0) (obj_4(D), i_5(D));
  Starting walk at: _1 = obj_4(D)->_vptr.A;
  instance pointer: obj_4(D)  Outer instance pointer: obj_4(D) offset: 0 (bits) vtbl reference: obj_4(D)->_vptr.A
  No dynamic type change found.
Determining dynamic type for call: _7 = OBJ_TYPE_REF(_2;(struct A)obj_4(D)->0) (obj_4(D), i_5(D));
  Starting walk at: _1 = obj_4(D)->_vptr.A;
  instance pointer: obj_4(D)  Outer instance pointer: obj_4(D) offset: 0 (bits) vtbl reference: obj_4(D)->_vptr.A
