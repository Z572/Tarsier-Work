
IPA structures before propagation:

Jump functions:
  Jump functions of caller  operator[]/18:
  Jump functions of caller  update_sources/9:
    callsite  update_sources/9 -> _Z14update_sourcesv.part.0/20 : 
       no arg info
  Jump functions of caller  lookupSourceDone/8:
    callsite  lookupSourceDone/8 -> operator[]/1 : 
       param 0: CONST: &b
         Context:     Outer type:struct C offset 0
         value: 0x0, mask: 0xfffffffffffffff8
         VR  [1, -1]
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  _Z14update_sourcesv.part.0/20:
    callsite  _Z14update_sourcesv.part.0/20 -> sort/7 : 
       param 0: UNKNOWN
         Aggregate passed by reference:
           offset: 0, type: int (*__vtbl_ptr_type) () *, CONST: &MEM <int (*__vtbl_ptr_type) ()[3]> [(void *)&_ZTV1C + 16B]
         Context:     Outer type:struct C offset 0
         value: 0x0, mask: 0xfffffffffffffff8
         VR  [1, -1]
       param 1: CONST: &b
         Context:     Outer type:struct C offset 0
         value: 0x0, mask: 0xfffffffffffffff8
         VR  [1, -1]
  Jump functions of caller  sort/7:
    callsite  sort/7 -> operator[]/1 : 
       param 0: PASS THROUGH: 1, op nop_expr
         Context:     Speculative outer type:struct C (or a derived type) at offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  sort/7 -> operator[]/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Context:     Speculative outer type:struct C (or a derived type) at offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  sort/7 -> operator[]/1 : 
       param 0: PASS THROUGH: 1, op nop_expr
         Context:     Speculative outer type:struct C (or a derived type) at offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  operator[]/1:
    callsite  operator[]/1 -> m_fn1/0 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         Context:     Outer type (dynamic):struct C (or a derived type) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
    callsite  operator[]/1 -> operator[]/18 : 
       no arg info
    indirect polymorphic callsite, calling param 0, offset 0
    Outer type (dynamic):struct C (or a derived type) offset 0
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         Context:     Outer type (dynamic):struct C (or a derived type) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
  Jump functions of caller  m_fn1/0:

 Propagating constants:

Considering operator[]/1 for cloning.
Considering m_fn1/0 for cloning.

overall_size: 46
 - context independent values, size: 10, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 2, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: update_sources/9:
  Node: lookupSourceDone/8:
  Node: _Z14update_sourcesv.part.0/20:
  Node: sort/7:
    param [0]: VARIABLE
         ctxs:     Outer type:struct C offset 0 [loc_time: 0, loc_size: 0, prop_time: 32, prop_size: 13]
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         struct C & [1, +INF]
        ref offset 0: &MEM <int (*__vtbl_ptr_type) ()[3]> [(void *)&_ZTV1C + 16B] [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
    param [1]: &b [loc_time: 0, loc_size: 0, prop_time: 70, prop_size: 32]
         ctxs:     Outer type:struct C offset 0 [loc_time: 0, loc_size: 0, prop_time: 64, prop_size: 26]
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         struct C & [1, +INF]
        AGGS VARIABLE
  Node: operator[]/1:
    param [0]: VARIABLE
               &b [loc_time: 33, loc_size: 13, prop_time: 2, prop_size: 3]
         ctxs: VARIABLE
                   Outer type:struct C offset 0 [loc_time: 32, loc_size: 13, prop_time: 0, prop_size: 0]
         Bits unusable (BOTTOM)
         int VARYING
        virt_call flag set
        AGGS VARIABLE
    param [1]: VARIABLE
               0 [loc_time: 1, loc_size: 15, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: m_fn1/0:
    param [0]: VARIABLE
               &b [loc_time: 2, loc_size: 3, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
                   Outer type:struct C offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of sort/7 for all known contexts.
    replacing param #1 struct C & with const &b
  Creating a specialized node of operator[]/1.
    replacing param #0 struct C * const with const &b
    replacing param #1 int with const 0
ipa-prop: Discovered a virtual call to a known target (operator[].constprop/34 -> m_fn1/0), for stmt with uid 3
Speculative call turned into direct call.
  Creating a specialized node of operator[]/1.
    replacing param #1 int with const 0
ipa-prop: Discovered a virtual call to a known target (operator[].constprop/35 -> m_fn1/0), for stmt with uid 3
Speculative call turned into direct call.
  Creating a specialized node of m_fn1/0.
    replacing param #0 struct C * const with const &b
Propagated bits info for function sort.constprop/33:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
 param 1: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function sort/7:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
 param 1: value = 0x0, mask = 0xfffffffffffffff8

IPA constant propagation end

Reclaiming functions: sort/7 operator[]/1
Reclaiming variables:
Clearing address taken flags:
Symbol table:

_ZN1C5m_fn1Ev.constprop.0/36 (m_fn1.constprop) @0x3fee2ff708
  Type: function definition analyzed
  Visibility:
  References: b/5 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-22_0.o
  Clone of _ZN1C5m_fn1Ev/0
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local
  Called by: _ZN1CixEi.constprop.0/34 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
_ZN1CixEi.constprop.1/35 (operator[].constprop) @0x3fee2ff9d8
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Read from file: cp_lto_devirt-22_0.o
  Clone of _ZN1CixEi/1
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local
  Called by: _ZL4sortR1CS0_.constprop.0/33 (1073741824 (estimated locally),101.00 per call) (can throw external) 
  Calls: _ZN1BixEi/18 (1073741824 (estimated locally),1.00 per call) (can throw external) _ZN1C5m_fn1Ev/0 (1073741824 (estimated locally),1.00 per call) 
_ZN1CixEi.constprop.0/34 (operator[].constprop) @0x3fee2ff438
  Type: function definition analyzed
  Visibility:
  References: b/5 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-22_0.o
  Clone of _ZN1CixEi/1
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local
  Called by: _Z16lookupSourceDonev/8 (1073741824 (estimated locally),1.00 per call) (can throw external) _ZL4sortR1CS0_.constprop.0/33 (1073741824 (estimated locally),101.00 per call) (can throw external) _ZL4sortR1CS0_.constprop.0/33 (1073741824 (estimated locally),101.00 per call) (can throw external) 
  Calls: _ZN1BixEi/18 (1073741824 (estimated locally),1.00 per call) (can throw external) _ZN1C5m_fn1Ev.constprop.0/36 (1073741824 (estimated locally),1.00 per call) 
_ZL4sortR1CS0_.constprop.0/33 (sort.constprop) @0x3fee2ff000
  Type: function definition analyzed
  Visibility:
  References: b/5 (addr) _ZTV1C/10 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-22_0.o
  Clone of _ZL4sortR1CS0_/7
  Availability: local
  Unit id: 1
  Function flags: count:10631108 (estimated locally) local executed_once
  Called by: _Z14update_sourcesv.part.0/20 (1073741824 (estimated locally),1.00 per call) (can throw external) 
  Calls: _ZN1CixEi.constprop.0/34 (1073741824 (estimated locally),101.00 per call) (can throw external) _ZN1CixEi.constprop.1/35 (1073741824 (estimated locally),101.00 per call) (can throw external) _ZN1CixEi.constprop.0/34 (1073741824 (estimated locally),101.00 per call) (can throw external) 
_ZN1BixEi/18 (operator[]) @0x3fee2fa870
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Unit id: 1
  Function flags:
  Called by: _ZN1CixEi.constprop.1/35 (1073741824 (estimated locally),1.00 per call) (can throw external) _ZN1CixEi.constprop.0/34 (1073741824 (estimated locally),1.00 per call) (can throw external) 
  Calls: 
_ZTVN10__cxxabiv121__vmi_class_type_infoE/15 (_ZTVN10__cxxabiv121__vmi_class_type_infoE) @0x3fee2fb400
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public visibility_specified virtual artificial
  References: 
  Referring: _ZTI1C/11 (addr) 
  Read from file: cp_lto_devirt-22_0.o
  Availability: not_available
  Varpool flags: read-only
_ZTI1C/11 (_ZTI1C) @0x3fee2fb380
  Type: variable definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public weak comdat comdat_group:_ZTI1C one_only artificial
  References: _ZTVN10__cxxabiv121__vmi_class_type_infoE/15 (addr) _ZTS1C/12 (addr) _ZTI1B/13 (addr) 
  Referring: _ZTV1C/10 (addr) 
  Read from file: cp_lto_devirt-22_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTS1C/12 (_ZTS1C) @0x3fee2fb300
  Type: variable definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public weak comdat comdat_group:_ZTS1C one_only artificial
  References: 
  Referring: _ZTI1C/11 (addr) 
  Read from file: cp_lto_devirt-22_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTVN10__cxxabiv117__class_type_infoE/16 (_ZTVN10__cxxabiv117__class_type_infoE) @0x3fee2fb280
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public visibility_specified virtual artificial
  References: 
  Referring: _ZTI1B/13 (addr) 
  Read from file: cp_lto_devirt-22_0.o
  Availability: not_available
  Varpool flags: read-only
_ZTI1B/13 (_ZTI1B) @0x3fee2fb200
  Type: variable definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public weak comdat comdat_group:_ZTI1B one_only artificial
  References: _ZTVN10__cxxabiv117__class_type_infoE/16 (addr) _ZTS1B/14 (addr) 
  Referring: _ZTI1C/11 (addr) 
  Read from file: cp_lto_devirt-22_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTS1B/14 (_ZTS1B) @0x3fee2fb180
  Type: variable definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public weak comdat comdat_group:_ZTS1B one_only artificial
  References: 
  Referring: _ZTI1B/13 (addr) 
  Read from file: cp_lto_devirt-22_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
e/6 (e) @0x3fee2fb100
  Type: variable definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public
  References: 
  Referring: _Z14update_sourcesv/9 (read) 
  Read from file: cp_lto_devirt-22_0.o
  Availability: available
  Varpool flags:
_Z14update_sourcesv/9 (update_sources) @0x3fee2fa708
  Type: function definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public
  References: e/6 (read) 
  Referring: 
  Read from file: cp_lto_devirt-22_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: 
  Calls: _Z14update_sourcesv.part.0/20 (429496 (estimated locally),0.00 per call) (can throw external) 
_Z16lookupSourceDonev/8 (lookupSourceDone) @0x3fee2fa5a0
  Type: function definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public
  References: b/5 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-22_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: 
  Calls: _ZN1CixEi.constprop.0/34 (1073741824 (estimated locally),1.00 per call) (can throw external) 
b/5 (b) @0x3fee2fb080
  Type: variable definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public
  References: _ZTV1C/10 (addr) 
  Referring: _Z14update_sourcesv.part.0/20 (addr) _Z16lookupSourceDonev/8 (addr) _ZL4sortR1CS0_.constprop.0/33 (addr) _ZN1CixEi.constprop.0/34 (addr) _ZN1C5m_fn1Ev.constprop.0/36 (addr) 
  Read from file: cp_lto_devirt-22_0.o
  Availability: available
  Varpool flags: initialized
_ZTV1C/10 (_ZTV1C) @0x3fee2fb000
  Type: variable definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public weak comdat comdat_group:_ZTV1C one_only virtual artificial
  References: _ZTI1C/11 (addr) _ZN1C5m_fn1Ev/0 (addr) 
  Referring: _Z14update_sourcesv.part.0/20 (addr) b/5 (addr) _ZL4sortR1CS0_.constprop.0/33 (addr) 
  Availability: available
  Varpool flags: initialized read-only const-value-known
_Z14update_sourcesv.part.0/20 (_Z14update_sourcesv.part.0) @0x3fee2fa438
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTV1C/10 (addr) b/5 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-22_0.o
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local split_part
  Called by: _Z14update_sourcesv/9 (429496 (estimated locally),0.00 per call) (can throw external) 
  Calls: _ZL4sortR1CS0_.constprop.0/33 (1073741824 (estimated locally),1.00 per call) (can throw external) 
_ZL4sortR1CS0_/7 (sort) @0x3fee2fa2d0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Read from file: cp_lto_devirt-22_0.o
  Availability: not_available
  Unit id: 1
  Function flags: count:10631108 (estimated locally) executed_once
  Called by: 
  Calls: 
_ZN1CixEi/1 (operator[]) @0x3fee2fa168
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: externally_visible prevailing_def_ironly_exp public weak comdat comdat_group:_ZN1CixEi one_only
  References: 
  Referring: 
  Read from file: cp_lto_devirt-22_0.o
  Availability: not_available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: 
  Calls: 
_ZN1C5m_fn1Ev/0 (m_fn1) @0x3fee2fa000
  Type: function definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public weak comdat comdat_group:_ZN1C5m_fn1Ev one_only virtual
  Address is taken.
  References: 
  Referring: _ZTV1C/10 (addr) 
  Read from file: cp_lto_devirt-22_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: _ZN1CixEi.constprop.1/35 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
