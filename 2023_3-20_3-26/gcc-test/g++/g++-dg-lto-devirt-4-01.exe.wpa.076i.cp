
IPA structures before propagation:

Jump functions:
  Jump functions of caller  abort/22:
  Jump functions of caller  main/12:
    callsite  main/12 -> abort/22 : 
       no arg info
    callsite  main/12 -> middleman_2/5 : 
       param 0: UNKNOWN
         Context:     Outer type:struct B offset 0
         value: 0x0, mask: 0xfffffffffffffff8
         VR  [1, -1]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
    callsite  main/12 -> get_input/3 : 
       no arg info
    callsite  main/12 -> __ct_comp /11 : 
       param 0: UNKNOWN
         Context:     Outer type:struct B offset 0
         value: 0x0, mask: 0xfffffffffffffff8
         VR  [1, -1]
  Jump functions of caller  __ct_comp /11:
  Jump functions of caller  __ct_base /10:
    callsite  __ct_base /10 -> __ct_base /7 : 
       param 0: ANCESTOR: 0, offset 0, agg_preserved
         Context:     Outer type (dynamic):struct B offset 0 Speculative outer type:struct B (or a derived type) at offset 0
         value: 0x0, mask: 0xffffffffffffffff
         VR  [1, -1]
  Jump functions of caller  __ct_base /7:
  Jump functions of caller  get_input/3:
  Jump functions of caller  middleman_2/5:
    callsite  middleman_2/5 -> middleman_1/4 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         Context:     Speculative outer type:struct B (or a derived type) at offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  middleman_1/4:
    indirect polymorphic callsite, calling param 0, offset 0
    Outer type (dynamic):struct A (or a derived type) offset 0
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         Context:     Speculative outer type:struct A (or a derived type) at offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffffffffffffffffffffffffffffffffffffffffffff
         Unknown VR
  Jump functions of caller  foo/2:
  Jump functions of caller  foo/1:
  Jump functions of caller  foo/0:

 Propagating constants:

Not considering main/12 for cloning; no hot calls.
Function get_input/3 is not versionable, reason: not a tree_versionable_function.
Not considering foo/1 for cloning; no hot calls.
Not considering foo/0 for cloning; no hot calls.

overall_size: 53
 - context independent values, size: 14, time_benefit: 2.000000
 - context independent values, size: 11, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: main/12:
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
  Node: __ct_base /10:
    param [0]: VARIABLE
         ctxs:     Outer type:struct B offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         struct B * const [1B, +INF]
        AGGS VARIABLE
  Node: __ct_base /7:
    param [0]: VARIABLE
         ctxs:     Outer type:struct B offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         struct A * const [1B, +INF]
        AGGS BOTTOM
  Node: get_input/3:
  Node: middleman_2/5:
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
  Node: middleman_1/4:
    param [0]: VARIABLE
         ctxs:     Outer type:struct B offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits: value = 0x0, mask = 0xfffffffffffffff8
         struct A * [1B, +INF]
        virt_call flag set
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
  Node: foo/1:
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
  Node: foo/0:
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

 - Creating a specialized node of middleman_1/4 for all known contexts.
ipa-prop: Discovered a virtual call to a known target (middleman_1.constprop/33 -> foo/1), for stmt with uid 3
Propagated bits info for function middleman_1.constprop/33:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function __ct_base /10:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function __ct_base /7:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function middleman_2/5:
 param 0: value = 0x0, mask = 0xfffffffffffffff8
Propagated bits info for function middleman_1/4:
 param 0: value = 0x0, mask = 0xfffffffffffffff8

IPA constant propagation end

Reclaiming functions: middleman_1/4 foo/2
Reclaiming variables:
Clearing address taken flags:
Symbol table:

_ZL11middleman_1P1Ai.constprop.0/33 (middleman_1.constprop) @0x3fbad84438
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Read from file: cp_lto_devirt-4_0.o
  Clone of _ZL11middleman_1P1Ai/4
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local executed_once
  Called by: _ZL11middleman_2P1Bi/5 (1073741824 (estimated locally),1.00 per call) (can throw external) 
  Calls: _ZN1B3fooEi/1 (1073741824 (estimated locally),1.00 per call) (can throw external) 
abort/22 (abort) @0x3fbad84000
  Type: function
  Visibility: external public visibility_specified
  References: 
  Referring: 
  Availability: not_available
  Unit id: 1
  Function flags:
  Called by: main/12 (0 (precise),0.00 per call) (can throw external) 
  Calls: 
_ZTVN10__cxxabiv120__si_class_type_infoE/24 (_ZTVN10__cxxabiv120__si_class_type_infoE) @0x3fbad83380
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public visibility_specified virtual artificial
  References: 
  Referring: _ZTI1B/18 (addr) 
  Read from file: cp_lto_devirt-4_0.o
  Availability: not_available
  Varpool flags: read-only
_ZTI1B/18 (_ZTI1B) @0x3fbad83300
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTVN10__cxxabiv120__si_class_type_infoE/24 (addr) _ZTS1B/19 (addr) _ZTI1A/20 (addr) 
  Referring: _ZTV1B/14 (addr) 
  Read from file: cp_lto_devirt-4_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTS1B/19 (_ZTS1B) @0x3fbad83280
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: _ZTI1B/18 (addr) 
  Read from file: cp_lto_devirt-4_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTVN10__cxxabiv117__class_type_infoE/25 (_ZTVN10__cxxabiv117__class_type_infoE) @0x3fbad83200
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public visibility_specified virtual artificial
  References: 
  Referring: _ZTI1A/20 (addr) 
  Read from file: cp_lto_devirt-4_0.o
  Availability: not_available
  Varpool flags: read-only
_ZTI1A/20 (_ZTI1A) @0x3fbad83180
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTVN10__cxxabiv117__class_type_infoE/25 (addr) _ZTS1A/21 (addr) 
  Referring: _ZTV1A/15 (addr) _ZTI1B/18 (addr) 
  Read from file: cp_lto_devirt-4_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTS1A/21 (_ZTS1A) @0x3fbad83100
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: _ZTI1A/20 (addr) 
  Read from file: cp_lto_devirt-4_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
main/12 (main) @0x3fbad82e10
  Type: function definition analyzed
  Visibility: externally_visible prevailing_def public
  References: 
  Referring: 
  Read from file: cp_lto_devirt-4_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) only_called_at_startup executed_once
  Called by: 
  Calls: abort/22 (0 (precise),0.00 per call) (can throw external) _ZL11middleman_2P1Bi/5 (1073741824 (estimated locally),1.00 per call) (can throw external) _Z9get_inputv/3 (1073741824 (estimated locally),1.00 per call) _ZN1BC1Ev/11 (1073741824 (estimated locally),1.00 per call) 
_ZN1BC1Ev/11 (__ct_comp ) @0x3fbad82ca8
  Type: function definition analyzed alias
  Visibility: prevailing_def_ironly artificial
  References: _ZN1BC2Ev/10 (alias) 
  Referring: 
  Read from file: cp_lto_devirt-4_0.o
  Availability: local
  Unit id: 1
  Function flags: local
  Called by: main/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
_ZTV1B/14 (_ZTV1B) @0x3fbad83080
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly virtual artificial
  References: _ZTI1B/18 (addr) _ZN1B3fooEi/1 (addr) 
  Referring: _ZN1BC2Ev/10 (addr) 
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZN1BC2Ev/10 (__ct_base ) @0x3fbad82b40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTV1B/14 (addr) 
  Referring: _ZN1BC1Ev/11 (alias) 
  Read from file: cp_lto_devirt-4_0.o
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local executed_once
  Called by: 
  Calls: _ZN1AC2Ev/7 (1073741824 (estimated locally),1.00 per call) 
_ZTV1A/15 (_ZTV1A) @0x3fbad83000
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly virtual artificial
  References: _ZTI1A/20 (addr) _ZN1A3fooEi/0 (addr) 
  Referring: _ZN1AC2Ev/7 (addr) 
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZN1AC2Ev/7 (__ct_base ) @0x3fbad82870
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: _ZTV1A/15 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-4_0.o
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local executed_once
  Called by: _ZN1BC2Ev/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
_Z9get_inputv/3 (get_input) @0x3fbad82708
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Read from file: cp_lto_devirt-4_0.o
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local executed_once
  Called by: main/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
_ZL11middleman_2P1Bi/5 (middleman_2) @0x3fbad825a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Read from file: cp_lto_devirt-4_0.o
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local executed_once
  Called by: main/12 (1073741824 (estimated locally),1.00 per call) (can throw external) 
  Calls: _ZL11middleman_1P1Ai.constprop.0/33 (1073741824 (estimated locally),1.00 per call) (can throw external) 
_ZL11middleman_1P1Ai/4 (middleman_1) @0x3fbad82438
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Read from file: cp_lto_devirt-4_0.o
  Availability: not_available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) executed_once
  Called by: 
  Calls: 
_ZN1B3fooEi/1 (foo) @0x3fbad82168
  Type: function definition analyzed
  Visibility: prevailing_def_ironly virtual
  Address is taken.
  References: 
  Referring: _ZTV1B/14 (addr) 
  Read from file: cp_lto_devirt-4_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: _ZL11middleman_1P1Ai.constprop.0/33 (1073741824 (estimated locally),1.00 per call) (can throw external) 
  Calls: 
_ZN1A3fooEi/0 (foo) @0x3fbad82000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly virtual
  Address is taken.
  References: 
  Referring: _ZTV1A/15 (addr) 
  Read from file: cp_lto_devirt-4_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: 
  Calls: 
