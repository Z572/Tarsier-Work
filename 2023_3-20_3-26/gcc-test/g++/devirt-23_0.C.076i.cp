
IPA constant propagation start:
Determining dynamic type for call: C::~C (this_2(D));
  Starting walk at: C::~C (this_2(D));
  instance pointer: this_2(D)  Outer instance pointer: this_2(D) offset: 0 (bits) vtbl reference: 
  No dynamic type change found.
Determining dynamic type for call: operator delete (this_2(D), 16);
  Starting walk at: operator delete (this_2(D), 16);
  instance pointer: this_2(D)  Outer instance pointer: this_2(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:C::~C (this_2(D));
  No dynamic type change found.
Determining dynamic type for call: MultiTermDocs::~MultiTermDocs (_1, &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]);
  Starting walk at: MultiTermDocs::~MultiTermDocs (_1, &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]);
  instance pointer: _1  Outer instance pointer: this_3(D) offset: 0 (bits) vtbl reference: 
  Checking vtbl store: this_3(D)->D.2871._vptr.MultiTermDocs = &MEM <int (*__vtbl_ptr_type) ()[6]> [(void *)&_ZTV1C + 24B];
  Recording type: struct C at offset 0
  Determined dynamic type.
Determining dynamic type for call: MultiTermDocs::~MultiTermDocs (_1, &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]);
  Starting walk at: MultiTermDocs::~MultiTermDocs (_1, &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]);
  instance pointer: &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]  Outer instance pointer: _ZTT1C offset: 64 (bits) vtbl reference: 
Determining dynamic type for call: MultiTermDocs::MultiTermDocs (_1, &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]);
  Starting walk at: MultiTermDocs::MultiTermDocs (_1, &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]);
  instance pointer: _1  Outer instance pointer: this_4(D) offset: 0 (bits) vtbl reference: 
  No dynamic type change found.
Determining dynamic type for call: MultiTermDocs::MultiTermDocs (_1, &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]);
  Starting walk at: MultiTermDocs::MultiTermDocs (_1, &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]);
  instance pointer: &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]  Outer instance pointer: _ZTT1C offset: 64 (bits) vtbl reference: 
Determining dynamic type for call: MultiTermDocs::wrap (this_4(D));
  Starting walk at: MultiTermDocs::wrap (this_4(D));
  instance pointer: this_4(D)  Outer instance pointer: this_4(D) offset: 0 (bits) vtbl reference: 
  Checking vtbl store: this_4(D)->_vptr.MultiTermDocs = _1;
    Failed to lookup binfo
  Unanalyzed store may change type.
Determining dynamic type for call: OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _1 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _3 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _5 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _7 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _9 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_12;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _11 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_14;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _13 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_12;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_16;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _15 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_14;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_12;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_18;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _17 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_16;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_14;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_12;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _1 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _3 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
Determining dynamic type for call: OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _5 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
Determining dynamic type for call: OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _7 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
Determining dynamic type for call: OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _9 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
Determining dynamic type for call: OBJ_TYPE_REF(_12;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _11 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_12;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: OBJ_TYPE_REF(_12;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
Determining dynamic type for call: OBJ_TYPE_REF(_14;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _13 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_12;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_14;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: OBJ_TYPE_REF(_14;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OBJ_TYPE_REF(_12;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
Determining dynamic type for call: OBJ_TYPE_REF(_16;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _15 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_14;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_12;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_16;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: OBJ_TYPE_REF(_16;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OBJ_TYPE_REF(_14;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_12;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
Determining dynamic type for call: OBJ_TYPE_REF(_18;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: _17 = this_20(D)->_vptr.MultiTermDocs;
  instance pointer: this_20(D)  Outer instance pointer: this_20(D) offset: 0 (bits) vtbl reference: this_20(D)->_vptr.MultiTermDocs
  Function call may change dynamic type:OBJ_TYPE_REF(_16;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_14;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_12;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  No dynamic type change found.
Determining dynamic type for call: OBJ_TYPE_REF(_18;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Starting walk at: OBJ_TYPE_REF(_18;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OBJ_TYPE_REF(_16;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_14;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_12;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_10;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_8;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_6;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_4;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
  Function call may change dynamic type:OBJ_TYPE_REF(_2;(struct MultiTermDocs)this_20(D)->0) (this_20(D), 0B);
