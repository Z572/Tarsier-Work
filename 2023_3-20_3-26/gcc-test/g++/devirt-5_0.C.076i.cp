
IPA constant propagation start:
Determining dynamic type for call: Distraction::Distraction (_1);
  Starting walk at: Distraction::Distraction (_1);
  instance pointer: _1  Outer instance pointer: this_3(D) offset: 0 (bits) vtbl reference: 
  No dynamic type change found.
Determining dynamic type for call: A::A (_2);
  Starting walk at: A::A (_2);
  instance pointer: _2  Outer instance pointer: this_3(D) offset: 192 (bits) vtbl reference: 
  Checking constructor call: Distraction::Distraction (_1);
  Function call may change dynamic type:Distraction::Distraction (_1);
  No dynamic type change found.
Determining dynamic type for call: _7 = middleman_1 (iftmp.1_1, i_5(D));
  Starting walk at: _7 = middleman_1 (iftmp.1_1, i_5(D));
  instance pointer: iftmp.1_1  Outer instance pointer: obj_2(D) offset: 192 (bits) vtbl reference: 
Determining dynamic type for call: _7 = OBJ_TYPE_REF(_2;(struct A)obj_4(D)->0) (obj_4(D), i_5(D));
  Starting walk at: _1 = obj_4(D)->_vptr.A;
  instance pointer: obj_4(D)  Outer instance pointer: obj_4(D) offset: 0 (bits) vtbl reference: obj_4(D)->_vptr.A
  No dynamic type change found.
Determining dynamic type for call: _7 = OBJ_TYPE_REF(_2;(struct A)obj_4(D)->0) (obj_4(D), i_5(D));
  Starting walk at: _1 = obj_4(D)->_vptr.A;
  instance pointer: obj_4(D)  Outer instance pointer: obj_4(D) offset: 0 (bits) vtbl reference: obj_4(D)->_vptr.A
