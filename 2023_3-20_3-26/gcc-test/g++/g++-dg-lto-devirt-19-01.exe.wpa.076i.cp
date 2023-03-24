
IPA structures before propagation:

Jump functions:
  Jump functions of caller  m_fn2/14:
  Jump functions of caller  m_fn1/15:
  Jump functions of caller  operator==/16:
  Jump functions of caller  _GLOBAL__sub_I_b/12:
  Jump functions of caller  fn1/4:
    callsite  fn1/4 -> m_fn2/6 : 
       param 0: CONST: &b
         Context:     Outer type:struct C offset 0
         value: 0x0, mask: 0xfffffffffffffff8
         VR  [1, -1]
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, type: const int, CONST: 0
         value: 0x0, mask: 0xfffffffffffffffc
         VR  [1, -1]
  Jump functions of caller  m_fn2/6:
    callsite  m_fn2/6 -> m_fn1/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Context:     Outer type (dynamic):struct C (or a derived type) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
    callsite  m_fn2/6 -> operator==/16 : 
       no arg info
    callsite  m_fn2/6 -> m_fn1/15 : 
       no arg info
    callsite  m_fn2/6 -> m_fn2/14 : 
       no arg info
    indirect polymorphic callsite, calling param 0, offset 0
    Outer type (dynamic):struct C (or a derived type) offset 0
       param 0: PASS THROUGH: 0, op nop_expr
         Context:     Outer type (dynamic):struct C (or a derived type) offset 0
         value: 0x0, mask: 0xffffffffffffffff
         Unknown VR
  Jump functions of caller  m_fn1/7:

 Propagating constants:

Considering m_fn2/6 for cloning.
Considering m_fn1/7 for cloning.

overall_size: 30
 - context independent values, size: 17, time_benefit: 1.000000
 - context independent values, size: 2, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: _GLOBAL__sub_I_b/12:
  Node: fn1/4:
  Node: m_fn2/6:
    param [0]: VARIABLE
               &b [loc_time: 34, loc_size: 16, prop_time: 2, prop_size: 3]
         ctxs: VARIABLE
                   Outer type:struct C offset 0 [loc_time: 33, loc_size: 16, prop_time: 0, prop_size: 0]
         Bits unusable (BOTTOM)
         int VARYING
        virt_call flag set
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE
        ref offset 0: 0 [loc_time: 1, loc_size: 18, prop_time: 0, prop_size: 0]
  Node: m_fn1/7:
    param [0]: VARIABLE
               &b [loc_time: 2, loc_size: 3, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
                   Outer type:struct C offset 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         Bits unusable (BOTTOM)
         int VARYING
        AGGS VARIABLE

IPA decision stage:

  Creating a specialized node of m_fn2/6.
    replacing param #0 struct C * const with const &b
ipa-prop: Discovered a virtual call to a known target (m_fn2.constprop/21 -> m_fn1/7), for stmt with uid 8
Speculative call turned into direct call.
  Creating a specialized node of m_fn1/7.
    replacing param #0 struct C * const with const &b

IPA constant propagation end

Reclaiming functions: m_fn2/6
Reclaiming variables:
Clearing address taken flags:
Symbol table:

_ZN1CIiiE5m_fn1Ev.constprop.0/22 (m_fn1.constprop) @0x3fc21282d0
  Type: function definition analyzed
  Visibility:
  References: b/3 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-19_0.o
  Clone of _ZN1CIiiE5m_fn1Ev/7
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local
  Called by: _ZN1CIiiE5m_fn2ERKi.constprop.0/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
_ZN1CIiiE5m_fn2ERKi.constprop.0/21 (m_fn2.constprop) @0x3fc2122ca8
  Type: function definition analyzed
  Visibility:
  References: _ZZN1CIiiE5m_fn2ERKiE1m/5 (addr) b/3 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-19_0.o
  Clone of _ZN1CIiiE5m_fn2ERKi/6
  Availability: local
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) local
  Called by: _Z3fn1v/4 (1073741824 (estimated locally),1.00 per call) (can throw external) 
  Calls: _ZN1B5m_fn2Ev/14 (1073741824 (estimated locally),1.00 per call) (can throw external) _ZN1B5m_fn1Ev/15 (1073741824 (estimated locally),1.00 per call) (can throw external) _ZN1AeqERKS_/16 (1073741824 (estimated locally),1.00 per call) (can throw external) _ZN1CIiiE5m_fn1Ev.constprop.0/22 (1073741824 (estimated locally),1.00 per call) 
_ZN1B5m_fn2Ev/14 (m_fn2) @0x3fc2122870
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Unit id: 1
  Function flags:
  Called by: _ZN1CIiiE5m_fn2ERKi.constprop.0/21 (1073741824 (estimated locally),1.00 per call) (can throw external) 
  Calls: 
_ZN1B5m_fn1Ev/15 (m_fn1) @0x3fc2122708
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Unit id: 1
  Function flags:
  Called by: _ZN1CIiiE5m_fn2ERKi.constprop.0/21 (1073741824 (estimated locally),1.00 per call) (can throw external) 
  Calls: 
_ZN1AeqERKS_/16 (operator==) @0x3fc21225a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Unit id: 1
  Function flags:
  Called by: _ZN1CIiiE5m_fn2ERKi.constprop.0/21 (1073741824 (estimated locally),1.00 per call) (can throw external) 
  Calls: 
_ZTVN10__cxxabiv117__class_type_infoE/17 (_ZTVN10__cxxabiv117__class_type_infoE) @0x3fc2123280
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public visibility_specified virtual artificial
  References: 
  Referring: _ZTI1CIiiE/9 (addr) 
  Read from file: cp_lto_devirt-19_0.o
  Availability: not_available
  Varpool flags: read-only
_ZTI1CIiiE/9 (_ZTI1CIiiE) @0x3fc2123200
  Type: variable definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public weak comdat comdat_group:_ZTI1CIiiE one_only artificial
  References: _ZTVN10__cxxabiv117__class_type_infoE/17 (addr) _ZTS1CIiiE/10 (addr) 
  Referring: _ZTV1CIiiE/8 (addr) 
  Read from file: cp_lto_devirt-19_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTS1CIiiE/10 (_ZTS1CIiiE) @0x3fc2123180
  Type: variable definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public weak comdat comdat_group:_ZTS1CIiiE one_only artificial
  References: 
  Referring: _ZTI1CIiiE/9 (addr) 
  Read from file: cp_lto_devirt-19_0.o
  Availability: available
  Varpool flags: initialized read-only const-value-known
_ZTV1CIiiE/8 (_ZTV1CIiiE) @0x3fc2123100
  Type: variable definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public weak comdat comdat_group:_ZTV1CIiiE one_only virtual artificial
  References: _ZTI1CIiiE/9 (addr) _ZN1CIiiE5m_fn1Ev/7 (addr) 
  Referring: _GLOBAL__sub_I_b/12 (addr) 
  Availability: available
  Varpool flags: initialized read-only const-value-known
_GLOBAL__sub_I_b/12 (_GLOBAL__sub_I_b) @0x3fc2122438
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial constructor
  References: b/3 (write) _ZTV1CIiiE/8 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-19_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally) only_called_at_startup static_constructor (priority:65535) executed_once
  Called by: 
  Calls: 
b/3 (b) @0x3fc2123080
  Type: variable definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public
  References: 
  Referring: _Z3fn1v/4 (addr) _GLOBAL__sub_I_b/12 (write) _ZN1CIiiE5m_fn2ERKi.constprop.0/21 (addr) _ZN1CIiiE5m_fn1Ev.constprop.0/22 (addr) 
  Read from file: cp_lto_devirt-19_0.o
  Availability: available
  Varpool flags:
_Z3fn1v/4 (fn1) @0x3fc21222d0
  Type: function definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public
  References: b/3 (addr) 
  Referring: 
  Read from file: cp_lto_devirt-19_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: 
  Calls: _ZN1CIiiE5m_fn2ERKi.constprop.0/21 (1073741824 (estimated locally),1.00 per call) (can throw external) 
_ZZN1CIiiE5m_fn2ERKiE1m/5 (m) @0x3fc2123000
  Type: variable definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public weak comdat comdat_group:_ZZN1CIiiE5m_fn2ERKiE1m one_only
  References: 
  Referring: _ZN1CIiiE5m_fn2ERKi.constprop.0/21 (addr) 
  Read from file: cp_lto_devirt-19_0.o
  Availability: available
  Varpool flags:
_ZN1CIiiE5m_fn2ERKi/6 (m_fn2) @0x3fc2122168
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: externally_visible prevailing_def_ironly_exp public weak comdat comdat_group:_ZN1CIiiE5m_fn2ERKi one_only
  References: 
  Referring: 
  Read from file: cp_lto_devirt-19_0.o
  Availability: not_available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: 
  Calls: 
_ZN1CIiiE5m_fn1Ev/7 (m_fn1) @0x3fc2122000
  Type: function definition analyzed
  Visibility: externally_visible prevailing_def_ironly_exp public weak comdat comdat_group:_ZN1CIiiE5m_fn1Ev one_only virtual
  Address is taken.
  References: 
  Referring: _ZTV1CIiiE/8 (addr) 
  Read from file: cp_lto_devirt-19_0.o
  Availability: available
  Unit id: 1
  Function flags: count:1073741824 (estimated locally)
  Called by: 
  Calls: 
