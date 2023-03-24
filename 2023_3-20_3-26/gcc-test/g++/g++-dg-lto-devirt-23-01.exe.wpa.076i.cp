
IPA structures before propagation:

Jump functions:
  Jump functions of caller  operator delete/50:
  Jump functions of caller  abort/48:
  Jump functions of caller  main/32:
    callsite  main/32 -> __dt_comp /38 : 
       param 0: UNKNOWN
         Context:     Outer type:struct C offset 0
         value: 0x0, mask: 0xfffffffffffffff8
         VR  [1, -1]
    callsite  main/32 -> __ct_comp /31 : 
       param 0: UNKNOWN
         Context:     Outer type:struct C offset 0
         value: 0x0, mask: 0xfffffffffffffff8
         VR  [1, -1]
  Jump functions of caller  __ct_comp /31:
    callsite  __ct_comp /31 -> __ct_base /27 : 
       param 0: ANCESTOR: 0, offset 0, agg_preserved
         Context:     Outer type (dynamic):struct C offset 0
         value: 0x0, mask: 0xffffffffffffffff
         VR  [1, -1]
       param 1: CONST: &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]
         value: 0x0, mask: 0xfffffffffffffff8
         VR  [1, -1]
  Jump functions of caller  __ct_base /27:
  Jump functions of caller  __dt_del /39:
    callsite  __dt_del /39 -> operator delete/50 : 
       no arg info
    callsite  __dt_del /39 -> __dt_comp /38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         Context:     Outer type (dynamic):struct C offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
  Jump functions of caller  __dt_comp /38:
    callsite  __dt_comp /38 -> __dt_base /22 : 
       param 0: ANCESTOR: 0, offset 0
         Context:     Outer type (dynamic):struct C offset 0
         value: 0x0, mask: 0xffffffffffffffff
         VR  [1, -1]
       param 1: CONST: &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]
         value: 0x0, mask: 0xfffffffffffffff8
         VR  [1, -1]
  Jump functions of caller  __gxx_personality_v0/49:
  Jump functions of caller  __dt_base /22:
    callsite  __dt_base /22 -> wrap/20 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Context:     Outer type (dynamic):struct MultiTermDocs (maybe in construction) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
  Jump functions of caller  wrap/20:
    indirect polymorphic callsite, calling param 0, offset 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
       param 0: PASS THROUGH: 0, op nop_expr
         Context:     Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffffffffffff0
         Unknown VR
    indirect polymorphic callsite, calling param 0, offset 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
       param 0: PASS THROUGH: 0, op nop_expr
         Context:     Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffffffffffff0
         Unknown VR
    indirect polymorphic callsite, calling param 0, offset 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
       param 0: PASS THROUGH: 0, op nop_expr
         Context:     Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffffffffffff0
         Unknown VR
    indirect polymorphic callsite, calling param 0, offset 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
       param 0: PASS THROUGH: 0, op nop_expr
         Context:     Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffffffffffff0
         Unknown VR
    indirect polymorphic callsite, calling param 0, offset 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
       param 0: PASS THROUGH: 0, op nop_expr
         Context:     Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffffffffffff0
         Unknown VR
    indirect polymorphic callsite, calling param 0, offset 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
       param 0: PASS THROUGH: 0, op nop_expr
         Context:     Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffffffffffff0
         Unknown VR
    indirect polymorphic callsite, calling param 0, offset 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
       param 0: PASS THROUGH: 0, op nop_expr
         Context:     Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffffffffffff0
         Unknown VR
    indirect polymorphic callsite, calling param 0, offset 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
       param 0: PASS THROUGH: 0, op nop_expr
         Context:     Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffffffffffff0
         Unknown VR
    indirect polymorphic callsite, calling param 0, offset 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         Context:     Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffffffffffff0
         Unknown VR
  Jump functions of caller  m_fn1/25:
    callsite  m_fn1/25 -> abort/48 : 
       no arg info
  Jump functions of caller  m_fn1/19:

 Propagating constants:

Not considering __dt_del /39 for cloning; no hot calls.
Considering __dt_comp /38 for cloning.
Not considering m_fn1/25 for cloning; optimizing it for size.
Not considering m_fn1/19 for cloning; no hot calls.

overall_size: 113
 - context independent values, size: 4, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 6, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: main/32:
  Node: __ct_comp /31:
    param [0]: VARIABLE
         ctxs:     Outer type:struct C offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         struct C * const [1B, +INF]
        AGGS VARIABLE
  Node: __ct_base /27:
    param [0]: VARIABLE
         ctxs:     Outer type:struct C offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         struct MultiTermDocs * const [1B, +INF]
        AGGS BOTTOM
    param [1]: &MEM <const void *[2]> [(void *)&_ZTT1C + 8B] [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         const void * * [1B, +INF]
        AGGS VARIABLE
  Node: __dt_del /39:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: __dt_comp /38:
    param [0]: VARIABLE
         ctxs: VARIABLE
                   Outer type:struct C offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
                   Outer type (dynamic):struct C offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: __dt_base /22:
    param [0]: VARIABLE
         ctxs: VARIABLE
                   Outer type:struct C offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
                   Outer type (dynamic):struct C offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits unusable (BOTTOM)
         struct MultiTermDocs * const [1B, +INF]
        AGGS VARIABLE
    param [1]: &MEM <const void *[2]> [(void *)&_ZTT1C + 8B] [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         const void * * [1B, +INF]
        AGGS VARIABLE
  Node: wrap/20:
    param [0]: VARIABLE
         ctxs:     Outer type (dynamic):struct MultiTermDocs (maybe in construction) offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits unusable (BOTTOM)
         struct MultiTermDocs * const [1B, +INF]
        virt_call flag set
        AGGS VARIABLE
  Node: m_fn1/25:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
  Node: m_fn1/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM
    param [1]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         int VARYING
        AGGS BOTTOM

IPA decision stage:

 - Creating a specialized node of __ct_base /27 for all known contexts.
    replacing param #1 const void * * with const &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]
 - Creating a specialized node of __dt_base /22 for all known contexts.
    replacing param #1 const void * * with const &MEM <const void *[2]> [(void *)&_ZTT1C + 8B]
Propagated bits info for function __dt_base .constprop/70:
 param 1: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function __ct_base .constprop/69:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
 param 1: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function __ct_comp /31:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function __ct_base /27:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
 param 1: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function __dt_base /22:
 param 1: value = 0x0, mask = 0xfffffffffffffff8

IPA constant propagation end

Reclaiming functions: __ct_base /27 __dt_base /22
Reclaiming variables:
Clearing address taken flags:
Symbol table:

_ZN13MultiTermDocsD2Ev.constprop.0/70 (__dt_base .constprop) @0x3fefc27b40
  Type: function definition analyzed
  Visibility:
  References: __gxx_personality_v0/49 (addr) _ZTT1C/34 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-23_0.o
  Clone of _ZN13MultiTermDocsD2Ev/22
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local
  Called by: _ZN1CD1Ev/38 (1073741824 (estimated locally),1.00 per call) 
  Calls: _ZN13MultiTermDocs4wrapEv/20 (1073741824 (estimated locally),1.00 per call) 
_ZN13MultiTermDocsC2Ev.constprop.0/69 (__ct_base .constprop) @0x3fefc27870
  Type: function definition analyzed
  Visibility: artificial
  References: _ZTT1C/34 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-23_0.o
  Clone of _ZN13MultiTermDocsC2Ev/27
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local executed_once
  Called by: _ZN1CC1Ev/31 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
_ZdlPvm/50 (operator delete) @0x3fefc27000
  Type: function
  Visibility: external public visibility_specified artificial
  References: 
  Referring: 
  Availability: not_available
  Unit id: 1
  Function flags: replaceable_operator_delete
  Called by: _ZN1CD0Ev/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
abort/48 (abort) @0x3fefc25e10
  Type: function
  Visibility: external public visibility_specified
  References: 
  Referring: 
  Availability: not_available
  Unit id: 1
  Function flags:
  Called by: _ZN1C5m_fn1EPi/25 (0 (precise),0.00 per call) 
  Calls: 
_ZTC1C0_13MultiTermDocs/35 (_ZTC1C0_13MultiTermDocs) @0x3fefc26500
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly virtual artificial
  References: _ZTI13MultiTermDocs/44 (addr) _ZN13MultiTermDocs5m_fn1EPi/19 (addr) 
  Referring: _ZTT1C/34 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTI1C/42 (_ZTI1C) @0x3fefc26480
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTVN10__cxxabiv121__vmi_class_type_infoE/51 (addr) _ZTS1C/43 (addr) _ZTI13MultiTermDocs/44 (addr) 
  Referring: _ZTV1C/33 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTS1C/43 (_ZTS1C) @0x3fefc26400
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: _ZTI1C/42 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTVN10__cxxabiv121__vmi_class_type_infoE/51 (_ZTVN10__cxxabiv121__vmi_class_type_infoE) @0x3fefc26380
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public visibility_specified virtual artificial
  References: 
  Referring: _ZTI13MultiTermDocs/44 (addr) _ZTI1C/42 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: not_available
  Varpool flags: read-only
_ZTI13MultiTermDocs/44 (_ZTI13MultiTermDocs) @0x3fefc26300
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTVN10__cxxabiv121__vmi_class_type_infoE/51 (addr) _ZTS13MultiTermDocs/45 (addr) _ZTI1B/46 (addr) 
  Referring: _ZTI1C/42 (addr) _ZTC1C0_13MultiTermDocs/35 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTS13MultiTermDocs/45 (_ZTS13MultiTermDocs) @0x3fefc26280
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: _ZTI13MultiTermDocs/44 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTVN10__cxxabiv117__class_type_infoE/52 (_ZTVN10__cxxabiv117__class_type_infoE) @0x3fefc26200
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public visibility_specified virtual artificial
  References: 
  Referring: _ZTI1B/46 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: not_available
  Varpool flags: read-only
_ZTI1B/46 (_ZTI1B) @0x3fefc26180
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTVN10__cxxabiv117__class_type_infoE/52 (addr) _ZTS1B/47 (addr) 
  Referring: _ZTI13MultiTermDocs/44 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTS1B/47 (_ZTS1B) @0x3fefc26100
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: _ZTI1B/46 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
main/32 (main) @0x3fefc25ca8
  Type: function definition analyzed
  Visibility: externally_visible prevailing_def public
  References: 
  Referring: 
  Read from file: cp_lto_devirt-23_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) only_called_at_startup executed_once
  Called by: 
  Calls: _ZN1CD1Ev/38 (1073741824 (estimated locally),1.00 per call) _ZN1CC1Ev/31 (1073741824 (estimated locally),1.00 per call) 
_ZN1CC1Ev/31 (__ct_comp ) @0x3fefc25b40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTT1C/34 (addr) _ZTV1C/33 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-23_0.o
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local executed_once
  Called by: main/32 (1073741824 (estimated locally),1.00 per call) 
  Calls: _ZN13MultiTermDocsC2Ev.constprop.0/69 (1073741824 (estimated locally),1.00 per call) 
_ZN13MultiTermDocsC2Ev/27 (__ct_base ) @0x3fefc259d8
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Read from file: cp_lto_devirt-23_0.o
  Availability: not_available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) executed_once
  Called by: 
  Calls: 
_ZN1CD0Ev/39 (__dt_del ) @0x3fefc25870
  Type: function definition analyzed
  Visibility: prevailing_def_ironly virtual artificial
  Address is taken.
  References: 
  Referring: _ZTV1C/33 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: 
  Calls: _ZdlPvm/50 (1073741824 (estimated locally),1.00 per call) _ZN1CD1Ev/38 (1073741824 (estimated locally),1.00 per call) 
_ZTT1C/34 (_ZTT1C) @0x3fefc26080
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly virtual artificial
  References: _ZTV1C/33 (addr) _ZTC1C0_13MultiTermDocs/35 (addr) 
  Referring: _ZN1CD1Ev/38 (addr) _ZN1CC1Ev/31 (addr) _ZN13MultiTermDocsC2Ev.constprop.0/69 (addr) _ZN13MultiTermDocsD2Ev.constprop.0/70 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTV1C/33 (_ZTV1C) @0x3fefc26000
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly virtual artificial
  References: _ZTI1C/42 (addr) _ZN1C5m_fn1EPi/25 (addr) _ZN1CD1Ev/38 (addr) _ZN1CD0Ev/39 (addr) 
  Referring: _ZN1CD1Ev/38 (addr) _ZTT1C/34 (addr) _ZN1CC1Ev/31 (addr) 
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZN1CD1Ev/38 (__dt_comp ) @0x3fefc25708
  Type: function definition analyzed
  Visibility: prevailing_def_ironly virtual artificial
  Address is taken.
  References: _ZTV1C/33 (addr) _ZTT1C/34 (addr) 
  Referring: _ZTV1C/33 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: main/32 (1073741824 (estimated locally),1.00 per call) _ZN1CD0Ev/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: _ZN13MultiTermDocsD2Ev.constprop.0/70 (1073741824 (estimated locally),1.00 per call) 
__gxx_personality_v0/49 (__gxx_personality_v0) @0x3fefc255a0
  Type: function
  Visibility: external public artificial
  Address is taken.
  References: 
  Referring: _ZN13MultiTermDocsD2Ev.constprop.0/70 (addr) 
  Availability: not_available
  Unit id: 1
  Function flags:
  Called by: 
  Calls: 
_ZN13MultiTermDocsD2Ev/22 (__dt_base ) @0x3fefc25438
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Read from file: cp_lto_devirt-23_0.o
  Availability: not_available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: 
  Calls: 
_ZN13MultiTermDocs4wrapEv/20 (wrap) @0x3fefc252d0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Read from file: cp_lto_devirt-23_0.o
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local
  Called by: _ZN13MultiTermDocsD2Ev.constprop.0/70 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Polymorphic indirect call of type struct MultiTermDocs token:0(1073741824 (estimated locally),1.00 per call) (can throw external)  of param:0 Num speculative call targets: 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
   Polymorphic indirect call of type struct MultiTermDocs token:0(1073741824 (estimated locally),1.00 per call) (can throw external)  of param:0 Num speculative call targets: 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
   Polymorphic indirect call of type struct MultiTermDocs token:0(1073741824 (estimated locally),1.00 per call) (can throw external)  of param:0 Num speculative call targets: 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
   Polymorphic indirect call of type struct MultiTermDocs token:0(1073741824 (estimated locally),1.00 per call) (can throw external)  of param:0 Num speculative call targets: 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
   Polymorphic indirect call of type struct MultiTermDocs token:0(1073741824 (estimated locally),1.00 per call) (can throw external)  of param:0 Num speculative call targets: 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
   Polymorphic indirect call of type struct MultiTermDocs token:0(1073741824 (estimated locally),1.00 per call) (can throw external)  of param:0 Num speculative call targets: 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
   Polymorphic indirect call of type struct MultiTermDocs token:0(1073741824 (estimated locally),1.00 per call) (can throw external)  of param:0 Num speculative call targets: 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
   Polymorphic indirect call of type struct MultiTermDocs token:0(1073741824 (estimated locally),1.00 per call) (can throw external)  of param:0 Num speculative call targets: 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
   Polymorphic indirect call of type struct MultiTermDocs token:0(1073741824 (estimated locally),1.00 per call) (can throw external)  of param:0 Num speculative call targets: 0
    Outer type (dynamic):struct MultiTermDocs (or a derived type) offset 0
_ZN1C5m_fn1EPi/25 (m_fn1) @0x3fefc25168
  Type: function definition analyzed
  Visibility: prevailing_def_ironly virtual
  Address is taken.
  References: 
  Referring: _ZTV1C/33 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: available
  Unit id: 1
  Function flags: count:0 (precise) indirect_call_target unlikely_executed
  Called by: 
  Calls: abort/48 (0 (precise),0.00 per call) 
_ZN13MultiTermDocs5m_fn1EPi/19 (m_fn1) @0x3fefc25000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly virtual
  Address is taken.
  References: 
  Referring: _ZTC1C0_13MultiTermDocs/35 (addr) 
  Read from file: cp_lto_devirt-23_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: 
  Calls: 
