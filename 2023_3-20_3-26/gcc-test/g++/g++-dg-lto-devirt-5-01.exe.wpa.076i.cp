
IPA structures before propagation:

Jump functions:
  Jump functions of caller  abort/27:
  Jump functions of caller  main/17:
    callsite  main/17 -> abort/27 : 
       no arg info
    callsite  main/17 -> middleman_2/10 : 
       param 0: UNKNOWN
         Context:     Outer type:struct B offset 0
         value: 0x0, mask: 0xfffffffffffffff8
         VR  [1, -1]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
    callsite  main/17 -> get_input/8 : 
       no arg info
    callsite  main/17 -> __ct_comp /16 : 
       param 0: UNKNOWN
         Context:     Outer type:struct B offset 0
         value: 0x0, mask: 0xfffffffffffffff8
         VR  [1, -1]
  Jump functions of caller  __ct_comp /16:
  Jump functions of caller  __ct_base /15:
    callsite  __ct_base /15 -> __ct_base /12 : 
       param 0: ANCESTOR: 0, offset 192
         Context:     Outer type (dynamic):struct B offset 192 Speculative outer type:struct B (or a derived type) at offset 192
         value: 0x0, mask: 0xffffffffffffffff
         VR  [1, -1]
    callsite  __ct_base /15 -> __ct_base /1 : 
       param 0: ANCESTOR: 0, offset 0, agg_preserved
         Context:     Outer type (dynamic):struct B offset 0 Speculative outer type:struct B (or a derived type) at offset 0
         value: 0x0, mask: 0xffffffffffffffff
         VR  [1, -1]
  Jump functions of caller  __ct_base /12:
  Jump functions of caller  get_input/8:
  Jump functions of caller  __ct_base /1:
  Jump functions of caller  middleman_2/10:
    callsite  middleman_2/10 -> middleman_1/9 : 
       param 0: ANCESTOR: 0, offset 192, agg_preserved
         Context:     Outer type (dynamic): (or a derived type) (maybe in construction) offset 192 Speculative outer type:struct B (or a derived type) at offset 192
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  middleman_1/9:
    indirect polymorphic callsite, calling param 0, offset 0
    Outer type (dynamic):struct A (or a derived type) offset 0
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         Context:     Speculative outer type:struct A (or a derived type) at offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  _ZThn24_N1B3fooEi/7:
    callsite  _ZThn24_N1B3fooEi/7 -> *.LTHUNK0/6 : 
       no arg info
  Jump functions of caller  *.LTHUNK0/6:
  Jump functions of caller  foo/5:
  Jump functions of caller  foo/4:
  Jump functions of caller  bar/3:

 Propagating constants:

Not considering main/17 for cloning; no hot calls.
Function get_input/8 is not versionable, reason: not a tree_versionable_function.
Not considering foo/5 for cloning; no hot calls.
Not considering foo/4 for cloning; no hot calls.
Not considering bar/3 for cloning; no hot calls.

overall_size: 76
 - context independent values, size: 14, time_benefit: 2.000000
 - context independent values, size: 11, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: main/17:
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
  Node: __ct_base /15:
    param [0]: VARIABLE
         ctxs:     Outer type:struct B offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         struct B * const [1B, +INF]
        AGGS VARIABLE
  Node: __ct_base /12:
    param [0]: VARIABLE
         ctxs:     Outer type:struct B offset 192 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         struct A * const [1B, +INF]
        AGGS VARIABLE
  Node: get_input/8:
  Node: __ct_base /1:
    param [0]: VARIABLE
         ctxs:     Outer type:struct B offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         struct Distraction * const [1B, +INF]
        AGGS BOTTOM
  Node: middleman_2/10:
    param [0]: VARIABLE
         ctxs:     Outer type:struct B offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         struct B * [1B, +INF]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: middleman_1/9:
    param [0]: VARIABLE
         ctxs:     Outer type:struct B offset 192 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         int VARYING
        virt_call flag set
        AGGS BOTTOM
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: foo/5:
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
  Node: foo/4:
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
  Node: bar/3:
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

 - Creating a specialized node of middleman_1/9 for all known contexts.
ipa-prop: Discovered a virtual call to a known target (middleman_1.constprop/39 -> _ZThn24_N1B3fooEi/7), for stmt with uid 3
Propagated bits info for function middleman_1.constprop/39:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function __ct_base /15:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function __ct_base /12:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function __ct_base /1:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function middleman_2/10:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function middleman_1/9:
 param 0: value = 0x0, mask = 0xfffffffffffffff8

IPA constant propagation end

Reclaiming functions: middleman_1/9
Reclaiming variables:
Clearing address taken flags:
Symbol table:

_ZL11middleman_1P1Ai.constprop.0/39 (middleman_1.constprop) @0x3fbef2c9d8
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Read from file: cp_lto_devirt-5_0.o
  Clone of _ZL11middleman_1P1Ai/9
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local executed_once
  Called by: _ZL11middleman_2P1Bi/10 (1073741824 (estimated locally),1.00 per call) (can throw external) 
  Calls: _ZThn24_N1B3fooEi/7 (1073741824 (estimated locally),1.00 per call) (can throw external) 
abort/27 (abort) @0x3fbef2c5a0
  Type: function
  Visibility: external public visibility_specified
  References: 
  Referring: 
  Availability: not_available
  Unit id: 1
  Function flags:
  Called by: main/17 (0 (precise),0.00 per call) (can throw external) 
  Calls: 
_ZTVN10__cxxabiv121__vmi_class_type_infoE/29 (_ZTVN10__cxxabiv121__vmi_class_type_infoE) @0x3fbef2b500
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public visibility_specified virtual artificial
  References: 
  Referring: _ZTI1B/21 (addr) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: not_available
  Varpool flags: read-only
_ZTI1B/21 (_ZTI1B) @0x3fbef2b480
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTVN10__cxxabiv121__vmi_class_type_infoE/29 (addr) _ZTS1B/22 (addr) _ZTI11Distraction/25 (addr) _ZTI1A/23 (addr) 
  Referring: _ZTV1B/18 (addr) _ZTV1B/18 (addr) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTS1B/22 (_ZTS1B) @0x3fbef2b400
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: _ZTI1B/21 (addr) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTI1A/23 (_ZTI1A) @0x3fbef2b380
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTVN10__cxxabiv117__class_type_infoE/30 (addr) _ZTS1A/24 (addr) 
  Referring: _ZTV1A/19 (addr) _ZTI1B/21 (addr) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTS1A/24 (_ZTS1A) @0x3fbef2b300
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: _ZTI1A/23 (addr) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTVN10__cxxabiv117__class_type_infoE/30 (_ZTVN10__cxxabiv117__class_type_infoE) @0x3fbef2b280
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public visibility_specified virtual artificial
  References: 
  Referring: _ZTI11Distraction/25 (addr) _ZTI1A/23 (addr) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: not_available
  Varpool flags: read-only
_ZTI11Distraction/25 (_ZTI11Distraction) @0x3fbef2b200
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTVN10__cxxabiv117__class_type_infoE/30 (addr) _ZTS11Distraction/26 (addr) 
  Referring: _ZTV11Distraction/20 (addr) _ZTI1B/21 (addr) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTS11Distraction/26 (_ZTS11Distraction) @0x3fbef2b180
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: _ZTI11Distraction/25 (addr) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
main/17 (main) @0x3fbef2c438
  Type: function definition analyzed
  Visibility: externally_visible prevailing_def public
  References: 
  Referring: 
  Read from file: cp_lto_devirt-5_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) only_called_at_startup executed_once
  Called by: 
  Calls: abort/27 (0 (precise),0.00 per call) (can throw external) _ZL11middleman_2P1Bi/10 (1073741824 (estimated locally),1.00 per call) (can throw external) _Z9get_inputv/8 (1073741824 (estimated locally),1.00 per call) _ZN1BC1Ev/16 (1073741824 (estimated locally),1.00 per call) 
_ZN1BC1Ev/16 (__ct_comp ) @0x3fbef2c2d0
  Type: function definition analyzed alias
  Visibility: prevailing_def_ironly artificial
  References: _ZN1BC2Ev/15 (alias) 
  Referring: 
  Read from file: cp_lto_devirt-5_0.o
  Availability: local
  Unit id: 1
  Function flags: local
  Called by: main/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
_ZTV1B/18 (_ZTV1B) @0x3fbef2b100
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly virtual artificial
  References: _ZTI1B/21 (addr) _ZN11Distraction3barEf/3 (addr) _ZN1B3fooEi/5 (addr) _ZTI1B/21 (addr) _ZThn24_N1B3fooEi/7 (addr) 
  Referring: _ZN1BC2Ev/15 (addr) _ZN1BC2Ev/15 (addr) 
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZN1BC2Ev/15 (__ct_base ) @0x3fbef2c168
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTV1B/18 (addr) _ZTV1B/18 (addr) 
  Referring: _ZN1BC1Ev/16 (alias) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local executed_once
  Called by: 
  Calls: _ZN1AC2Ev/12 (1073741824 (estimated locally),1.00 per call) _ZN11DistractionC2Ev/1 (1073741824 (estimated locally),1.00 per call) 
_ZTV1A/19 (_ZTV1A) @0x3fbef2b080
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly virtual artificial
  References: _ZTI1A/23 (addr) _ZN1A3fooEi/4 (addr) 
  Referring: _ZN1AC2Ev/12 (addr) 
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZN1AC2Ev/12 (__ct_base ) @0x3fbef2ae10
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTV1A/19 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-5_0.o
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local executed_once
  Called by: _ZN1BC2Ev/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
_Z9get_inputv/8 (get_input) @0x3fbef2aca8
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Read from file: cp_lto_devirt-5_0.o
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local executed_once
  Called by: main/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
_ZTV11Distraction/20 (_ZTV11Distraction) @0x3fbef2b000
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly virtual artificial
  References: _ZTI11Distraction/25 (addr) _ZN11Distraction3barEf/3 (addr) 
  Referring: _ZN11DistractionC2Ev/1 (addr) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZN11DistractionC2Ev/1 (__ct_base ) @0x3fbef2a9d8
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: _ZTV11Distraction/20 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-5_0.o
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local executed_once
  Called by: _ZN1BC2Ev/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
_ZL11middleman_2P1Bi/10 (middleman_2) @0x3fbef2a870
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Read from file: cp_lto_devirt-5_0.o
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local executed_once
  Called by: main/17 (1073741824 (estimated locally),1.00 per call) (can throw external) 
  Calls: _ZL11middleman_1P1Ai.constprop.0/39 (1073741824 (estimated locally),1.00 per call) (can throw external) 
_ZL11middleman_1P1Ai/9 (middleman_1) @0x3fbef2a708
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Read from file: cp_lto_devirt-5_0.o
  Availability: not_available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) executed_once
  Called by: 
  Calls: 
_ZThn24_N1B3fooEi/7 (_ZThn24_N1B3fooEi) @0x3fbef2a5a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly virtual artificial
  Address is taken.
  References: 
  Referring: _ZTV1B/18 (addr) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: available
  Unit id: 1
  Function flags:
  Thunk fixed offset -24 virtual value 0 indirect_offset 0 has virtual offset 0
  Called by: _ZL11middleman_1P1Ai.constprop.0/39 (1073741824 (estimated locally),1.00 per call) (can throw external) 
  Calls: *.LTHUNK0/6 (can throw external) 
*.LTHUNK0/6 (*.LTHUNK0) @0x3fbef2a438
  Type: function definition analyzed alias
  Visibility: prevailing_def_ironly artificial
  References: _ZN1B3fooEi/5 (alias) 
  Referring: 
  Read from file: cp_lto_devirt-5_0.o
  Availability: available
  Unit id: 1
  Function flags:
  Called by: _ZThn24_N1B3fooEi/7 (can throw external) 
  Calls: 
_ZN1B3fooEi/5 (foo) @0x3fbef2a2d0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly virtual
  Address is taken.
  References: 
  Referring: *.LTHUNK0/6 (alias) _ZTV1B/18 (addr) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: 
  Calls: 
_ZN1A3fooEi/4 (foo) @0x3fbef2a168
  Type: function definition analyzed
  Visibility: prevailing_def_ironly virtual
  Address is taken.
  References: 
  Referring: _ZTV1A/19 (addr) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: 
  Calls: 
_ZN11Distraction3barEf/3 (bar) @0x3fbef2a000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly virtual
  Address is taken.
  References: 
  Referring: _ZTV11Distraction/20 (addr) _ZTV1B/18 (addr) 
  Read from file: cp_lto_devirt-5_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: 
  Calls: 
