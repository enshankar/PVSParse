//Code generated using pvs2ir2rust
// --- HEADER BEGINS ---
#![allow(
    non_snake_case,
    dead_code,
    non_upper_case_globals,
    non_camel_case_types,
    unused_variables,
    unused_parens,
    unreachable_patterns,
    unused_imports,
    drop_copy
)]

use fxhash::FxHasher;
use ordered_float::NotNan;
use std::borrow::Borrow;
use std::cell::RefCell;
use std::collections::HashMap;
use std::hash::BuildHasherDefault;
use std::hash::Hash;
use std::mem::drop;
use std::rc::Rc;
use std::ops::Deref;

fn Rc_unwrap_or_clone<T: Clone>(rc: Rc<T>) -> T {
    Rc::try_unwrap(rc).unwrap_or_else(|rc| (*rc).clone())
}

trait RegularOrd: Clone + PartialEq + Eq + Hash
where
    Self: std::marker::Sized,
{
}

impl<T> RegularOrd for T where T: Clone + PartialEq + Eq + Hash {}

#[derive(Clone)]
struct funtype<A: RegularOrd, V: RegularOrd> {
    explicit: Rc<dyn Fn(A) -> V>,
    hashtable: Rc<RefCell<HashMap<A, V, BuildHasherDefault<FxHasher>>>>,
}

impl<A: RegularOrd, V: RegularOrd> PartialEq for funtype<A, V> {
    fn eq(&self, other: &Self) -> bool {
        panic!("Can't test equality of two functions")
    }
}
impl<A: RegularOrd, V: RegularOrd> Eq for funtype<A, V> {}

impl<A: RegularOrd, V: RegularOrd> Hash for funtype<A, V> {
    fn hash<H: std::hash::Hasher>(&self, state: &mut H) {
        panic!("Can't have proper ordering for two functions")
    }
}

impl<A: RegularOrd, V: RegularOrd> funtype<A, V> {
    fn new(explicit: Rc<dyn Fn(A) -> V>) -> funtype<A, V> {
        funtype {
            explicit,
            hashtable: Rc::new(RefCell::new(HashMap::default())),
        }
    }
    fn lookup(&self, a: A) -> V {
        match self.hashtable.deref().borrow().get(&a) { // explicit deref due to borrow method name collision
            Some(v) => v.clone(),
            None => (self.explicit)(a),
        }
    }
    fn delete(self, a: A) -> Self {
        match self.hashtable.borrow_mut().remove(&a) {
            Some(x) => {
                drop(x);
            }
            None => {}
        };
        self
    }
    fn update(self, a: A, v: V) -> Self {
        self.hashtable.borrow_mut().insert(a, v);
        self
    }
}

#[derive(Clone, PartialEq, Eq)]
struct arraytype<const N: usize, V: RegularOrd> {
    array : Rc<RefCell<[V; N]>>,
}

impl<const N: usize, V: RegularOrd> Hash for arraytype<N, V> {
    fn hash<H: std::hash::Hasher>(&self, state: &mut H) {
        self.array.deref().borrow().hash(state)
    }
}

impl<const N : usize, V: RegularOrd> arraytype<N, V> {
    fn new(explicit: Rc<dyn Fn(usize) -> V>) -> arraytype<N, V> {
        arraytype {
            array : Rc::new(RefCell::new(core::array::from_fn::<_, N, _>(explicit.deref())))
        }
    }
    fn lookup(&self, a: usize) -> V {
        self.array.deref().borrow()[a].clone()
    }
    fn delete(self, a: usize) -> Self {
        self
    }
    fn update(self, a: usize, v: V) -> Self {
        self.array.borrow_mut()[a] = v;
        self
    }
}
// --- HEADER ENDS ---


type integertypes__uint8 = usize;
type integertypes__uint16 = usize;
type integertypes__uint32 = usize;
type integertypes__uint64 = usize;
#[derive(Clone, PartialEq, Eq, Hash)]
struct bytestrings__bytestring {

length : integertypes__index,

seq : arraytype<268435456, bytestrings__byte>,

}

#[derive(Clone, PartialEq, Eq, Hash)]
struct record_1 {

length : integertypes__index,
seq : arraytype<268435456, bytestrings__byte>,
}


fn rotate__u8rightrotate (ivar_1: integertypes__uint8, ivar_2: usize, ) -> integertypes__uint8 {let ivar_19 : integertypes__uint8 = {let ivar_12 : usize = {let ivar_7 : usize = {8usize};
ivar_7 - ivar_2};
integertypes__u8lshift(ivar_1.clone(),ivar_12,)};
let ivar_20 : integertypes__uint8 = {integertypes__u8rshift(ivar_1,ivar_2,)};
integertypes__u8plus(ivar_19,ivar_20,)}

fn rotate__test_u8rightrotate_0 () -> integertypes__uint8 {let ivar_4 : integertypes__uint8 = {255usize};
let ivar_5 : usize = {5usize};
rotate__u8rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u8rightrotate_1 () -> integertypes__uint8 {let ivar_4 : integertypes__uint8 = {0usize};
let ivar_5 : usize = {3usize};
rotate__u8rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u8rightrotate_2 () -> integertypes__uint8 {let ivar_4 : integertypes__uint8 = {240usize};
let ivar_5 : usize = {7usize};
rotate__u8rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u8rightrotate_3 () -> integertypes__uint8 {let ivar_4 : integertypes__uint8 = {15usize};
let ivar_5 : usize = {2usize};
rotate__u8rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u8rightrotate_4 () -> integertypes__uint8 {let ivar_4 : integertypes__uint8 = {255usize};
let ivar_5 : usize = {8usize};
rotate__u8rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u8rightrotate_5 () -> integertypes__uint8 {let ivar_4 : integertypes__uint8 = {255usize};
let ivar_5 : usize = {0usize};
rotate__u8rightrotate(ivar_4,ivar_5,)}

fn rotate__u16rightrotate (ivar_1: integertypes__uint16, ivar_2: usize, ) -> integertypes__uint16 {let ivar_19 : integertypes__uint16 = {let ivar_12 : usize = {let ivar_7 : usize = {16usize};
ivar_7 - ivar_2};
integertypes__u16lshift(ivar_1.clone(),ivar_12,)};
let ivar_20 : integertypes__uint16 = {integertypes__u16rshift(ivar_1,ivar_2,)};
integertypes__u16plus(ivar_19,ivar_20,)}

fn rotate__test_u16rightrotate_0 () -> integertypes__uint16 {let ivar_4 : integertypes__uint16 = {65535usize};
let ivar_5 : usize = {15usize};
rotate__u16rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u16rightrotate_1 () -> integertypes__uint16 {let ivar_4 : integertypes__uint16 = {61680usize};
let ivar_5 : usize = {13usize};
rotate__u16rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u16rightrotate_2 () -> integertypes__uint16 {let ivar_7 : usize = {240usize};
let ivar_4 : integertypes__uint16 = ivar_7;let ivar_5 : usize = {4usize};
rotate__u16rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u16rightrotate_3 () -> integertypes__uint16 {let ivar_4 : integertypes__uint16 = {3855usize};
let ivar_5 : usize = {9usize};
rotate__u16rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u16rightrotate_4 () -> integertypes__uint16 {let ivar_4 : integertypes__uint16 = {3855usize};
let ivar_5 : usize = {16usize};
rotate__u16rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u16rightrotate_5 () -> integertypes__uint16 {let ivar_4 : integertypes__uint16 = {3855usize};
let ivar_5 : usize = {0usize};
rotate__u16rightrotate(ivar_4,ivar_5,)}

fn rotate__u32rightrotate (ivar_1: integertypes__uint32, ivar_2: usize, ) -> integertypes__uint32 {let ivar_19 : integertypes__uint32 = {let ivar_12 : usize = {let ivar_7 : usize = {32usize};
ivar_7 - ivar_2};
integertypes__u32lshift(ivar_1.clone(),ivar_12,)};
let ivar_20 : integertypes__uint32 = {integertypes__u32rshift(ivar_1,ivar_2,)};
integertypes__u32plus(ivar_19,ivar_20,)}

fn rotate__test_u32rightrotate_0 () -> integertypes__uint32 {let ivar_4 : integertypes__uint32 = {4294967295usize};
let ivar_5 : usize = {31usize};
rotate__u32rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u32rightrotate_1 () -> integertypes__uint32 {let ivar_4 : integertypes__uint32 = {4042322160usize};
let ivar_5 : usize = {23usize};
rotate__u32rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u32rightrotate_2 () -> integertypes__uint32 {let ivar_4 : integertypes__uint32 = {15728880usize};
let ivar_5 : usize = {14usize};
rotate__u32rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u32rightrotate_3 () -> integertypes__uint32 {let ivar_4 : integertypes__uint32 = {252645135usize};
let ivar_5 : usize = {9usize};
rotate__u32rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u32rightrotate_4 () -> integertypes__uint32 {let ivar_4 : integertypes__uint32 = {252645135usize};
let ivar_5 : usize = {32usize};
rotate__u32rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u32rightrotate_5 () -> integertypes__uint32 {let ivar_4 : integertypes__uint32 = {252645135usize};
let ivar_5 : usize = {0usize};
rotate__u32rightrotate(ivar_4,ivar_5,)}

fn rotate__u64rightrotate (ivar_1: integertypes__uint64, ivar_2: usize, ) -> integertypes__uint64 {let ivar_19 : integertypes__uint64 = {let ivar_12 : usize = {let ivar_7 : usize = {64usize};
ivar_7 - ivar_2};
integertypes__u64lshift(ivar_1.clone(),ivar_12,)};
let ivar_20 : integertypes__uint64 = {integertypes__u64rshift(ivar_1,ivar_2,)};
integertypes__u64plus(ivar_19,ivar_20,)}

fn rotate__test_u64rightrotate_0 () -> integertypes__uint64 {let ivar_4 : integertypes__uint64 = {72057594037927935usize};
let ivar_5 : usize = {63usize};
rotate__u64rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u64rightrotate_1 () -> integertypes__uint64 {let ivar_4 : integertypes__uint64 = {1148682822604615920usize};
let ivar_5 : usize = {43usize};
rotate__u64rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u64rightrotate_2 () -> integertypes__uint64 {let ivar_4 : integertypes__uint64 = {67555029245030640usize};
let ivar_5 : usize = {24usize};
rotate__u64rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u64rightrotate_3 () -> integertypes__uint64 {let ivar_4 : integertypes__uint64 = {1085102596360827120usize};
let ivar_5 : usize = {9usize};
rotate__u64rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u64rightrotate_4 () -> integertypes__uint64 {let ivar_4 : integertypes__uint64 = {1085102596360827120usize};
let ivar_5 : usize = {64usize};
rotate__u64rightrotate(ivar_4,ivar_5,)}

fn rotate__test_u64rightrotate_5 () -> integertypes__uint64 {let ivar_4 : integertypes__uint64 = {1085102596360827120usize};
let ivar_5 : usize = {0usize};
rotate__u64rightrotate(ivar_4,ivar_5,)}

fn rotate__u8leftrotate (ivar_1: integertypes__uint8, ivar_2: usize, ) -> integertypes__uint8 {let ivar_19 : integertypes__uint8 = {integertypes__u8lshift(ivar_1.clone(),ivar_2,)};
let ivar_20 : integertypes__uint8 = {let ivar_17 : usize = {let ivar_12 : usize = {8usize};
ivar_12 - ivar_2};
integertypes__u8rshift(ivar_1,ivar_17,)};
integertypes__u8plus(ivar_19,ivar_20,)}

fn rotate__test_u8leftrotate_0 () -> integertypes__uint8 {let ivar_4 : integertypes__uint8 = {255usize};
let ivar_5 : usize = {5usize};
rotate__u8leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u8leftrotate_1 () -> integertypes__uint8 {let ivar_4 : integertypes__uint8 = {0usize};
let ivar_5 : usize = {3usize};
rotate__u8leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u8leftrotate_2 () -> integertypes__uint8 {let ivar_4 : integertypes__uint8 = {240usize};
let ivar_5 : usize = {7usize};
rotate__u8leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u8leftrotate_3 () -> integertypes__uint8 {let ivar_4 : integertypes__uint8 = {15usize};
let ivar_5 : usize = {2usize};
rotate__u8leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u8leftrotate_4 () -> integertypes__uint8 {let ivar_4 : integertypes__uint8 = {255usize};
let ivar_5 : usize = {8usize};
rotate__u8leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u8leftrotate_5 () -> integertypes__uint8 {let ivar_4 : integertypes__uint8 = {255usize};
let ivar_5 : usize = {0usize};
rotate__u8leftrotate(ivar_4,ivar_5,)}

fn rotate__u16leftrotate (ivar_1: integertypes__uint16, ivar_2: usize, ) -> integertypes__uint16 {let ivar_19 : integertypes__uint16 = {integertypes__u16lshift(ivar_1.clone(),ivar_2,)};
let ivar_20 : integertypes__uint16 = {let ivar_17 : usize = {let ivar_12 : usize = {16usize};
ivar_12 - ivar_2};
integertypes__u16rshift(ivar_1,ivar_17,)};
integertypes__u16plus(ivar_19,ivar_20,)}

fn rotate__test_u16leftrotate_0 () -> integertypes__uint16 {let ivar_4 : integertypes__uint16 = {65535usize};
let ivar_5 : usize = {15usize};
rotate__u16leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u16leftrotate_1 () -> integertypes__uint16 {let ivar_4 : integertypes__uint16 = {61680usize};
let ivar_5 : usize = {13usize};
rotate__u16leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u16leftrotate_2 () -> integertypes__uint16 {let ivar_7 : usize = {240usize};
let ivar_4 : integertypes__uint16 = ivar_7;let ivar_5 : usize = {4usize};
rotate__u16leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u16leftrotate_3 () -> integertypes__uint16 {let ivar_4 : integertypes__uint16 = {3855usize};
let ivar_5 : usize = {9usize};
rotate__u16leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u16leftrotate_4 () -> integertypes__uint16 {let ivar_4 : integertypes__uint16 = {3855usize};
let ivar_5 : usize = {16usize};
rotate__u16leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u16leftrotate_5 () -> integertypes__uint16 {let ivar_4 : integertypes__uint16 = {3855usize};
let ivar_5 : usize = {0usize};
rotate__u16leftrotate(ivar_4,ivar_5,)}

fn rotate__u32leftrotate (ivar_1: integertypes__uint32, ivar_2: usize, ) -> integertypes__uint32 {let ivar_19 : integertypes__uint32 = {integertypes__u32lshift(ivar_1.clone(),ivar_2,)};
let ivar_20 : integertypes__uint32 = {let ivar_17 : usize = {let ivar_12 : usize = {32usize};
ivar_12 - ivar_2};
integertypes__u32rshift(ivar_1,ivar_17,)};
integertypes__u32plus(ivar_19,ivar_20,)}

fn rotate__test_u32leftrotate_0 () -> integertypes__uint32 {let ivar_4 : integertypes__uint32 = {4294967295usize};
let ivar_5 : usize = {31usize};
rotate__u32leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u32leftrotate_1 () -> integertypes__uint32 {let ivar_4 : integertypes__uint32 = {4042322160usize};
let ivar_5 : usize = {23usize};
rotate__u32leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u32leftrotate_2 () -> integertypes__uint32 {let ivar_4 : integertypes__uint32 = {15728880usize};
let ivar_5 : usize = {14usize};
rotate__u32leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u32leftrotate_3 () -> integertypes__uint32 {let ivar_4 : integertypes__uint32 = {252645135usize};
let ivar_5 : usize = {9usize};
rotate__u32leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u32leftrotate_4 () -> integertypes__uint32 {let ivar_4 : integertypes__uint32 = {252645135usize};
let ivar_5 : usize = {32usize};
rotate__u32leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u32leftrotate_5 () -> integertypes__uint32 {let ivar_4 : integertypes__uint32 = {252645135usize};
let ivar_5 : usize = {0usize};
rotate__u32leftrotate(ivar_4,ivar_5,)}

fn rotate__u64leftrotate (ivar_1: integertypes__uint64, ivar_2: usize, ) -> integertypes__uint64 {let ivar_19 : integertypes__uint64 = {integertypes__u64lshift(ivar_1.clone(),ivar_2,)};
let ivar_20 : integertypes__uint64 = {let ivar_17 : usize = {let ivar_12 : usize = {64usize};
ivar_12 - ivar_2};
integertypes__u64rshift(ivar_1,ivar_17,)};
integertypes__u64plus(ivar_19,ivar_20,)}

fn rotate__test_u64leftrotate_0 () -> integertypes__uint64 {let ivar_4 : integertypes__uint64 = {72057594037927935usize};
let ivar_5 : usize = {63usize};
rotate__u64leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u64leftrotate_1 () -> integertypes__uint64 {let ivar_4 : integertypes__uint64 = {1148682822604615920usize};
let ivar_5 : usize = {43usize};
rotate__u64leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u64leftrotate_2 () -> integertypes__uint64 {let ivar_4 : integertypes__uint64 = {67555029245030640usize};
let ivar_5 : usize = {24usize};
rotate__u64leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u64leftrotate_3 () -> integertypes__uint64 {let ivar_4 : integertypes__uint64 = {1085102596360827120usize};
let ivar_5 : usize = {9usize};
rotate__u64leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u64leftrotate_4 () -> integertypes__uint64 {let ivar_4 : integertypes__uint64 = {1085102596360827120usize};
let ivar_5 : usize = {64usize};
rotate__u64leftrotate(ivar_4,ivar_5,)}

fn rotate__test_u64leftrotate_5 () -> integertypes__uint64 {let ivar_4 : integertypes__uint64 = {1085102596360827120usize};
let ivar_5 : usize = {0usize};
rotate__u64leftrotate(ivar_4,ivar_5,)}

fn rotate__padright (ivar_1: integertypes__uint8, ) -> funtype<bytestrings__bytestring,bytestrings__bytestring> {funtype::new(Rc::new(move |ivar_3 : bytestrings__bytestring| {let ivar_5 : integertypes__index = ivar_1;let ivar_20 : arraytype<268435456, bytestrings__byte> = {funtype::new(Rc::new(move |ivar_8 : usize| {let ivar_9 : bool = {let ivar_11 : integertypes__index = {ivar_3.length.clone()};
ivar_8 < ivar_11};
if ivar_9 {let ivar_17 : arraytype<268435456, bytestrings__byte> = {ivar_3.seq.clone()};
let ivar_19 : usize = {ivar_8};
ivar_17.lookup(ivar_19)} else {drop(ivar_8);
0usize}}))};
record_1 {length : ivar_5.clone(),seq : ivar_20,}}))}

fn rotate__nbytes (ivar_1: integertypes__uint8, ivar_2: integertypes__uint8, ) -> bytestrings__bytestring {let ivar_4 : integertypes__index = ivar_2;let ivar_9 : arraytype<268435456, bytestrings__byte> = {funtype::new(Rc::new(move |ivar_7 : usize| {ivar_1.clone()}))};
record_1 {length : ivar_4.clone(),seq : ivar_9,}}

fn rotate__u8tobytestring (ivar_1: integertypes__uint8, ) -> bytestrings__bytestring {let ivar_8 : usize = {1usize};
let ivar_2 : integertypes__index = ivar_8;let ivar_7 : arraytype<268435456, bytestrings__byte> = {funtype::new(Rc::new(move |ivar_5 : usize| {ivar_1.clone()}))};
record_1 {length : ivar_2.clone(),seq : ivar_7,}}

fn rotate__test_u8tobytestring_0 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint8 = {255usize};
rotate__u8tobytestring(ivar_3,)}

fn rotate__test_u8tobytestring_1 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint8 = {15usize};
rotate__u8tobytestring(ivar_3,)}

fn rotate__test_u8tobytestring_2 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint8 = {240usize};
rotate__u8tobytestring(ivar_3,)}

fn rotate__test_u8tobytestring_3 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint8 = {0usize};
rotate__u8tobytestring(ivar_3,)}

fn rotate__u16tobytestring (ivar_1: integertypes__uint16, ) -> bytestrings__bytestring {let ivar_26 : usize = {2usize};
let ivar_2 : integertypes__index = ivar_26;let ivar_25 : arraytype<268435456, bytestrings__byte> = {funtype::new(Rc::new(move |ivar_5 : usize| {let ivar_6 : bool = {let ivar_8 : usize = {0usize};
ivar_5 == ivar_8};
if ivar_6 {let ivar_18 : integertypes__uint16 = {let ivar_16 : usize = {8usize};
integertypes__u16rshift(ivar_1.clone(),ivar_16,)};
let ivar_19 : usize = {256usize};
integertypes__u16rem(ivar_18,ivar_19,)} else {let ivar_24 : usize = {256usize};
integertypes__u16rem(ivar_1.clone(),ivar_24,)}}))};
record_1 {length : ivar_2.clone(),seq : ivar_25,}}

fn rotate__test_u16tobytestring_0 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint16 = {65535usize};
rotate__u16tobytestring(ivar_3,)}

fn rotate__test_u16tobytestring_1 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint16 = {3855usize};
rotate__u16tobytestring(ivar_3,)}

fn rotate__test_u16tobytestring_2 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint16 = {61455usize};
rotate__u16tobytestring(ivar_3,)}

fn rotate__test_u16tobytestring_3 () -> bytestrings__bytestring {let ivar_5 : usize = {255usize};
let ivar_3 : integertypes__uint16 = ivar_5;rotate__u16tobytestring(ivar_3,)}

fn rotate__u32tobytestring (ivar_1: integertypes__uint32, ) -> bytestrings__bytestring {let ivar_62 : usize = {4usize};
let ivar_2 : integertypes__index = ivar_62;let ivar_61 : arraytype<268435456, bytestrings__byte> = {funtype::new(Rc::new(move |ivar_5 : usize| {let ivar_6 : bool = {let ivar_8 : usize = {0usize};
ivar_5 == ivar_8};
if ivar_6 {drop(ivar_5);
let ivar_18 : integertypes__uint32 = {let ivar_16 : usize = {24usize};
integertypes__u32rshift(ivar_1.clone(),ivar_16,)};
let ivar_21 : usize = {256usize};
let ivar_19 : usize = ivar_21;integertypes__u32rem(ivar_18,ivar_19,)} else {let ivar_22 : bool = {let ivar_24 : usize = {1usize};
ivar_5 == ivar_24};
if ivar_22 {drop(ivar_5);
let ivar_34 : integertypes__uint32 = {let ivar_32 : usize = {16usize};
integertypes__u32rshift(ivar_1.clone(),ivar_32,)};
let ivar_37 : usize = {256usize};
let ivar_35 : usize = ivar_37;integertypes__u32rem(ivar_34,ivar_35,)} else {let ivar_38 : bool = {let ivar_40 : usize = {2usize};
ivar_5 == ivar_40};
if ivar_38 {let ivar_50 : integertypes__uint32 = {let ivar_48 : usize = {8usize};
integertypes__u32rshift(ivar_1.clone(),ivar_48,)};
let ivar_53 : usize = {256usize};
let ivar_51 : usize = ivar_53;integertypes__u32rem(ivar_50,ivar_51,)} else {let ivar_60 : usize = {256usize};
let ivar_58 : usize = ivar_60;integertypes__u32rem(ivar_1.clone(),ivar_58,)}}}}))};
record_1 {length : ivar_2.clone(),seq : ivar_61,}}

fn rotate__test_u32tobytestring_0 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint32 = {4294967295usize};
rotate__u32tobytestring(ivar_3,)}

fn rotate__test_u32tobytestring_1 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint32 = {252645135usize};
rotate__u32tobytestring(ivar_3,)}

fn rotate__test_u32tobytestring_2 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint32 = {4027576335usize};
rotate__u32tobytestring(ivar_3,)}

fn rotate__test_u32tobytestring_3 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint32 = {16711935usize};
rotate__u32tobytestring(ivar_3,)}

fn rotate__u64tobytestring (ivar_1: integertypes__uint64, ) -> bytestrings__bytestring {let ivar_126 : usize = {8usize};
let ivar_2 : integertypes__index = ivar_126;let ivar_125 : arraytype<268435456, bytestrings__byte> = {funtype::new(Rc::new(move |ivar_5 : usize| {let ivar_6 : bool = {let ivar_8 : usize = {0usize};
ivar_5 == ivar_8};
if ivar_6 {drop(ivar_5);
let ivar_18 : integertypes__uint64 = {let ivar_16 : usize = {56usize};
integertypes__u64rshift(ivar_1.clone(),ivar_16,)};
let ivar_21 : usize = {256usize};
let ivar_19 : usize = ivar_21;integertypes__u64rem(ivar_18,ivar_19,)} else {let ivar_22 : bool = {let ivar_24 : usize = {1usize};
ivar_5 == ivar_24};
if ivar_22 {drop(ivar_5);
let ivar_34 : integertypes__uint64 = {let ivar_32 : usize = {48usize};
integertypes__u64rshift(ivar_1.clone(),ivar_32,)};
let ivar_37 : usize = {256usize};
let ivar_35 : usize = ivar_37;integertypes__u64rem(ivar_34,ivar_35,)} else {let ivar_38 : bool = {let ivar_40 : usize = {2usize};
ivar_5 == ivar_40};
if ivar_38 {drop(ivar_5);
let ivar_50 : integertypes__uint64 = {let ivar_48 : usize = {40usize};
integertypes__u64rshift(ivar_1.clone(),ivar_48,)};
let ivar_53 : usize = {256usize};
let ivar_51 : usize = ivar_53;integertypes__u64rem(ivar_50,ivar_51,)} else {let ivar_54 : bool = {let ivar_56 : usize = {3usize};
ivar_5 == ivar_56};
if ivar_54 {drop(ivar_5);
let ivar_66 : integertypes__uint64 = {let ivar_64 : usize = {32usize};
integertypes__u64rshift(ivar_1.clone(),ivar_64,)};
let ivar_69 : usize = {256usize};
let ivar_67 : usize = ivar_69;integertypes__u64rem(ivar_66,ivar_67,)} else {let ivar_70 : bool = {let ivar_72 : usize = {4usize};
ivar_5 == ivar_72};
if ivar_70 {drop(ivar_5);
let ivar_82 : integertypes__uint64 = {let ivar_80 : usize = {24usize};
integertypes__u64rshift(ivar_1.clone(),ivar_80,)};
let ivar_85 : usize = {256usize};
let ivar_83 : usize = ivar_85;integertypes__u64rem(ivar_82,ivar_83,)} else {let ivar_86 : bool = {let ivar_88 : usize = {5usize};
ivar_5 == ivar_88};
if ivar_86 {drop(ivar_5);
let ivar_98 : integertypes__uint64 = {let ivar_96 : usize = {16usize};
integertypes__u64rshift(ivar_1.clone(),ivar_96,)};
let ivar_101 : usize = {256usize};
let ivar_99 : usize = ivar_101;integertypes__u64rem(ivar_98,ivar_99,)} else {let ivar_102 : bool = {let ivar_104 : usize = {6usize};
ivar_5 == ivar_104};
if ivar_102 {let ivar_114 : integertypes__uint64 = {let ivar_112 : usize = {8usize};
integertypes__u64rshift(ivar_1.clone(),ivar_112,)};
let ivar_117 : usize = {256usize};
let ivar_115 : usize = ivar_117;integertypes__u64rem(ivar_114,ivar_115,)} else {let ivar_124 : usize = {256usize};
let ivar_122 : usize = ivar_124;integertypes__u64rem(ivar_1.clone(),ivar_122,)}}}}}}}}))};
record_1 {length : ivar_2.clone(),seq : ivar_125,}}

fn rotate__test_u64tobytestring_0 () -> bytestrings__bytestring {let ivar_17 : integertypes__uint64 = {let ivar_12 : integertypes__uint64 = {let ivar_10 : usize = {4294967295usize};
let ivar_7 : integertypes__uint64 = ivar_10;let ivar_8 : usize = {32usize};
integertypes__u64lshift(ivar_7,ivar_8,)};
let ivar_15 : usize = {4294967295usize};
let ivar_13 : integertypes__uint64 = ivar_15;integertypes__u64plus(ivar_12,ivar_13,)};
rotate__u64tobytestring(ivar_17,)}

fn rotate__test_u64tobytestring_1 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint64 = {1034834473200usize};
rotate__u64tobytestring(ivar_3,)}

fn rotate__test_u64tobytestring_2 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint64 = {16496952672000usize};
rotate__u64tobytestring(ivar_3,)}

fn rotate__test_u64tobytestring_3 () -> bytestrings__bytestring {let ivar_3 : integertypes__uint64 = {68452085775usize};
rotate__u64tobytestring(ivar_3,)}


//fn main(){}