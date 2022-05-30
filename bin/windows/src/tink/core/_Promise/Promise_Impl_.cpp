#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_tink_core_FutureStatus
#include <tink/core/FutureStatus.h>
#endif
#ifndef INCLUDED_tink_core_FutureTrigger
#include <tink/core/FutureTrigger.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_MPair
#include <tink/core/MPair.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_OutcomeTools
#include <tink/core/OutcomeTools.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_Future_Impl_
#include <tink/core/_Future/Future_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Future_SuspendableFuture
#include <tink/core/_Future/SuspendableFuture.h>
#endif
#ifndef INCLUDED_tink_core__Future_SyncFuture
#include <tink/core/_Future/SyncFuture.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_Computable
#include <tink/core/_Lazy/Computable.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyConst
#include <tink/core/_Lazy/LazyConst.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_Lazy_Impl_
#include <tink/core/_Lazy/Lazy_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Promise_Promise_Impl_
#include <tink/core/_Promise/Promise_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_29__new,"tink.core._Promise.Promise_Impl_","_new",0x1816e7f3,"tink.core._Promise.Promise_Impl_._new","tink/core/Promise.hx",29,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_28__new,"tink.core._Promise.Promise_Impl_","_new",0x1816e7f3,"tink.core._Promise.Promise_Impl_._new","tink/core/Promise.hx",28,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_32_eager,"tink.core._Promise.Promise_Impl_","eager",0x67c536e6,"tink.core._Promise.Promise_Impl_.eager","tink/core/Promise.hx",32,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_35_map,"tink.core._Promise.Promise_Impl_","map",0x4f5c304a,"tink.core._Promise.Promise_Impl_.map","tink/core/Promise.hx",35,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_38_flatMap,"tink.core._Promise.Promise_Impl_","flatMap",0xf196a511,"tink.core._Promise.Promise_Impl_.flatMap","tink/core/Promise.hx",38,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_41_tryRecover,"tink.core._Promise.Promise_Impl_","tryRecover",0xd7458abb,"tink.core._Promise.Promise_Impl_.tryRecover","tink/core/Promise.hx",41,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_47_recover,"tink.core._Promise.Promise_Impl_","recover",0x3bb6e752,"tink.core._Promise.Promise_Impl_.recover","tink/core/Promise.hx",47,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_53_mapError,"tink.core._Promise.Promise_Impl_","mapError",0x4135bf1e,"tink.core._Promise.Promise_Impl_.mapError","tink/core/Promise.hx",53,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_59_handle,"tink.core._Promise.Promise_Impl_","handle",0x9c7c9eba,"tink.core._Promise.Promise_Impl_.handle","tink/core/Promise.hx",59,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_62_noise,"tink.core._Promise.Promise_Impl_","noise",0x9fa2fcc8,"tink.core._Promise.Promise_Impl_.noise","tink/core/Promise.hx",62,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_64_noise,"tink.core._Promise.Promise_Impl_","noise",0x9fa2fcc8,"tink.core._Promise.Promise_Impl_.noise","tink/core/Promise.hx",64,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_67_isSuccess,"tink.core._Promise.Promise_Impl_","isSuccess",0x55d63f27,"tink.core._Promise.Promise_Impl_.isSuccess","tink/core/Promise.hx",67,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_70_next,"tink.core._Promise.Promise_Impl_","next",0x21fa5785,"tink.core._Promise.Promise_Impl_.next","tink/core/Promise.hx",70,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_76_swap,"tink.core._Promise.Promise_Impl_","swap",0x2555fd25,"tink.core._Promise.Promise_Impl_.swap","tink/core/Promise.hx",76,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_79_swapError,"tink.core._Promise.Promise_Impl_","swapError",0x82607863,"tink.core._Promise.Promise_Impl_.swapError","tink/core/Promise.hx",79,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_82_merge,"tink.core._Promise.Promise_Impl_","merge",0x05a70fe6,"tink.core._Promise.Promise_Impl_.merge","tink/core/Promise.hx",82,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_85_merge,"tink.core._Promise.Promise_Impl_","merge",0x05a70fe6,"tink.core._Promise.Promise_Impl_.merge","tink/core/Promise.hx",85,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_89_and,"tink.core._Promise.Promise_Impl_","and",0x4f532085,"tink.core._Promise.Promise_Impl_.and","tink/core/Promise.hx",89,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_114_iterate,"tink.core._Promise.Promise_Impl_","iterate",0xed890ea8,"tink.core._Promise.Promise_Impl_.iterate","tink/core/Promise.hx",114,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_115_iterate,"tink.core._Promise.Promise_Impl_","iterate",0xed890ea8,"tink.core._Promise.Promise_Impl_.iterate","tink/core/Promise.hx",115,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_117_iterate,"tink.core._Promise.Promise_Impl_","iterate",0xed890ea8,"tink.core._Promise.Promise_Impl_.iterate","tink/core/Promise.hx",117,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_111_iterate,"tink.core._Promise.Promise_Impl_","iterate",0xed890ea8,"tink.core._Promise.Promise_Impl_.iterate","tink/core/Promise.hx",111,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_172_retry,"tink.core._Promise.Promise_Impl_","retry",0xe6a98496,"tink.core._Promise.Promise_Impl_.retry","tink/core/Promise.hx",172,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_178_retry,"tink.core._Promise.Promise_Impl_","retry",0xe6a98496,"tink.core._Promise.Promise_Impl_.retry","tink/core/Promise.hx",178,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_177_retry,"tink.core._Promise.Promise_Impl_","retry",0xe6a98496,"tink.core._Promise.Promise_Impl_.retry","tink/core/Promise.hx",177,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_175_retry,"tink.core._Promise.Promise_Impl_","retry",0xe6a98496,"tink.core._Promise.Promise_Impl_.retry","tink/core/Promise.hx",175,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_171_retry,"tink.core._Promise.Promise_Impl_","retry",0xe6a98496,"tink.core._Promise.Promise_Impl_.retry","tink/core/Promise.hx",171,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_198_ofSpecific,"tink.core._Promise.Promise_Impl_","ofSpecific",0x9083d8fb,"tink.core._Promise.Promise_Impl_.ofSpecific","tink/core/Promise.hx",198,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_201_fromNever,"tink.core._Promise.Promise_Impl_","fromNever",0xe742c4f0,"tink.core._Promise.Promise_Impl_.fromNever","tink/core/Promise.hx",201,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_204_ofTrigger,"tink.core._Promise.Promise_Impl_","ofTrigger",0xcd80190f,"tink.core._Promise.Promise_Impl_.ofTrigger","tink/core/Promise.hx",204,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_207_ofHappyTrigger,"tink.core._Promise.Promise_Impl_","ofHappyTrigger",0x32bcecc1,"tink.core._Promise.Promise_Impl_.ofHappyTrigger","tink/core/Promise.hx",207,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_210_ofFuture,"tink.core._Promise.Promise_Impl_","ofFuture",0x5d195c4c,"tink.core._Promise.Promise_Impl_.ofFuture","tink/core/Promise.hx",210,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_213_ofOutcome,"tink.core._Promise.Promise_Impl_","ofOutcome",0x83707c69,"tink.core._Promise.Promise_Impl_.ofOutcome","tink/core/Promise.hx",213,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_216_ofError,"tink.core._Promise.Promise_Impl_","ofError",0xe1451bdf,"tink.core._Promise.Promise_Impl_.ofError","tink/core/Promise.hx",216,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_219_ofData,"tink.core._Promise.Promise_Impl_","ofData",0x2e37d5f3,"tink.core._Promise.Promise_Impl_.ofData","tink/core/Promise.hx",219,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_223_lazy,"tink.core._Promise.Promise_Impl_","lazy",0x20a4e306,"tink.core._Promise.Promise_Impl_.lazy","tink/core/Promise.hx",223,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_227_inParallel,"tink.core._Promise.Promise_Impl_","inParallel",0x98cdbbde,"tink.core._Promise.Promise_Impl_.inParallel","tink/core/Promise.hx",227,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_230_many,"tink.core._Promise.Promise_Impl_","many",0x214e0f31,"tink.core._Promise.Promise_Impl_.many","tink/core/Promise.hx",230,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_234_inSequence,"tink.core._Promise.Promise_Impl_","inSequence",0x03c42f58,"tink.core._Promise.Promise_Impl_.inSequence","tink/core/Promise.hx",234,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_253_cache,"tink.core._Promise.Promise_Impl_","cache",0x40f50770,"tink.core._Promise.Promise_Impl_.cache","tink/core/Promise.hx",253,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_240_cache,"tink.core._Promise.Promise_Impl_","cache",0x40f50770,"tink.core._Promise.Promise_Impl_.cache","tink/core/Promise.hx",240,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_245_cache,"tink.core._Promise.Promise_Impl_","cache",0x40f50770,"tink.core._Promise.Promise_Impl_.cache","tink/core/Promise.hx",245,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_244_cache,"tink.core._Promise.Promise_Impl_","cache",0x40f50770,"tink.core._Promise.Promise_Impl_.cache","tink/core/Promise.hx",244,0x59ef4bb6)
static const bool _hx_array_data_1351971c_59[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_238_cache,"tink.core._Promise.Promise_Impl_","cache",0x40f50770,"tink.core._Promise.Promise_Impl_.cache","tink/core/Promise.hx",238,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_263_lift,"tink.core._Promise.Promise_Impl_","lift",0x20aae39d,"tink.core._Promise.Promise_Impl_.lift","tink/core/Promise.hx",263,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_270_trigger,"tink.core._Promise.Promise_Impl_","trigger",0x3097e9e6,"tink.core._Promise.Promise_Impl_.trigger","tink/core/Promise.hx",270,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_274_resolve,"tink.core._Promise.Promise_Impl_","resolve",0x7218a79a,"tink.core._Promise.Promise_Impl_.resolve","tink/core/Promise.hx",274,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_278_reject,"tink.core._Promise.Promise_Impl_","reject",0xe7046c71,"tink.core._Promise.Promise_Impl_.reject","tink/core/Promise.hx",278,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_24_boot,"tink.core._Promise.Promise_Impl_","boot",0x1a1356c4,"tink.core._Promise.Promise_Impl_.boot","tink/core/Promise.hx",24,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_25_boot,"tink.core._Promise.Promise_Impl_","boot",0x1a1356c4,"tink.core._Promise.Promise_Impl_.boot","tink/core/Promise.hx",25,0x59ef4bb6)
HX_LOCAL_STACK_FRAME(_hx_pos_113c0f6d76f4dafd_26_boot,"tink.core._Promise.Promise_Impl_","boot",0x1a1356c4,"tink.core._Promise.Promise_Impl_.boot","tink/core/Promise.hx",26,0x59ef4bb6)
namespace tink{
namespace core{
namespace _Promise{

void Promise_Impl__obj::__construct() { }

Dynamic Promise_Impl__obj::__CreateEmpty() { return new Promise_Impl__obj; }

void *Promise_Impl__obj::_hx_vtable = 0;

Dynamic Promise_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Promise_Impl__obj > _hx_result = new Promise_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Promise_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x03edc1ee;
}

::Dynamic Promise_Impl__obj::NOISE;

::Dynamic Promise_Impl__obj::_hx_NULL;

::Dynamic Promise_Impl__obj::NEVER;

::Dynamic Promise_Impl__obj::_new( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic cb){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,cb) HXARGC(1)
            			void _hx_run( ::Dynamic v){
            				HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_29__new)
HXLINE(  29)				cb(::tink::core::Outcome_obj::Success(v));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,cb) HXARGC(1)
            			void _hx_run( ::tink::core::TypedError e){
            				HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_29__new)
HXLINE(  29)				cb(::tink::core::Outcome_obj::Failure(e));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_29__new)
HXLINE(  29)			return f( ::Dynamic(new _hx_Closure_0(cb)), ::Dynamic(new _hx_Closure_1(cb)));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_28__new)
HXLINE(  29)		::Dynamic this1 =  ::tink::core::_Future::SuspendableFuture_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_2(f)));
HXLINE(  28)		::Dynamic this2 = this1;
HXDLIN(  28)		return this2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,_new,return )

::Dynamic Promise_Impl__obj::eager(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_32_eager)
HXDLIN(  32)		::tink::core::_Future::FutureObject_obj::eager(this1);
HXDLIN(  32)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,eager,return )

::Dynamic Promise_Impl__obj::map(::Dynamic this1, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_35_map)
HXDLIN(  35)		return ::tink::core::_Future::Future_Impl__obj::map(this1,f,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promise_Impl__obj,map,return )

::Dynamic Promise_Impl__obj::flatMap(::Dynamic this1, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_38_flatMap)
HXDLIN(  38)		return ::tink::core::_Future::Future_Impl__obj::flatMap(this1,f,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promise_Impl__obj,flatMap,return )

::Dynamic Promise_Impl__obj::tryRecover(::Dynamic this1, ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::Outcome o){
            			HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_41_tryRecover)
HXDLIN(  41)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE(  42)					 ::Dynamic d = o->_hx_getObject(0);
HXDLIN(  42)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,o));
            				}
            				break;
            				case (int)1: {
HXLINE(  43)					 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN(  43)					return f(e);
            				}
            				break;
            			}
HXLINE(  41)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_41_tryRecover)
HXDLIN(  41)		return ::tink::core::_Future::Future_Impl__obj::flatMap(this1, ::Dynamic(new _hx_Closure_0(f)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promise_Impl__obj,tryRecover,return )

::Dynamic Promise_Impl__obj::recover(::Dynamic this1, ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::Outcome o){
            			HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_47_recover)
HXDLIN(  47)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE(  48)					 ::Dynamic d = o->_hx_getObject(0);
HXDLIN(  48)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,d));
            				}
            				break;
            				case (int)1: {
HXLINE(  49)					 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN(  49)					return f(e);
            				}
            				break;
            			}
HXLINE(  47)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_47_recover)
HXDLIN(  47)		return ::tink::core::_Future::Future_Impl__obj::flatMap(this1, ::Dynamic(new _hx_Closure_0(f)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promise_Impl__obj,recover,return )

::Dynamic Promise_Impl__obj::mapError(::Dynamic this1, ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		 ::tink::core::Outcome _hx_run( ::tink::core::Outcome o){
            			HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_53_mapError)
HXDLIN(  53)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE(  54)					 ::Dynamic _g = o->_hx_getObject(0);
HXDLIN(  54)					return o;
            				}
            				break;
            				case (int)1: {
HXLINE(  55)					 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN(  55)					return ::tink::core::Outcome_obj::Failure(f(e));
            				}
            				break;
            			}
HXLINE(  53)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_53_mapError)
HXDLIN(  53)		return ::tink::core::_Future::Future_Impl__obj::map(this1, ::Dynamic(new _hx_Closure_0(f)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promise_Impl__obj,mapError,return )

::Dynamic Promise_Impl__obj::handle(::Dynamic this1, ::Dynamic cb){
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_59_handle)
HXDLIN(  59)		return ::tink::core::_Future::FutureObject_obj::handle(this1,cb);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promise_Impl__obj,handle,return )

::Dynamic Promise_Impl__obj::noise(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_62_noise)
HXLINE(  63)		bool _hx_tmp;
HXDLIN(  63)		if ((::tink::core::_Future::FutureObject_obj::getStatus(this1)->_hx_getIndex() == 4)) {
HXLINE(  63)			_hx_tmp = true;
            		}
            		else {
HXLINE(  63)			_hx_tmp = false;
            		}
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  63)			return ::tink::core::_Promise::Promise_Impl__obj::NEVER;
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			::Dynamic _hx_run( ::Dynamic v){
            				HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_64_noise)
HXLINE(  64)				return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(null())));
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  64)			return ::tink::core::_Promise::Promise_Impl__obj::next(this1, ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE(  63)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,noise,return )

::Dynamic Promise_Impl__obj::isSuccess(::Dynamic this1){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		bool _hx_run( ::tink::core::Outcome o){
            			HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_67_isSuccess)
HXDLIN(  67)			return ::tink::core::OutcomeTools_obj::isSuccess(o);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_67_isSuccess)
HXDLIN(  67)		return ::tink::core::_Future::Future_Impl__obj::map(this1, ::Dynamic(new _hx_Closure_0()),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,isSuccess,return )

::Dynamic Promise_Impl__obj::next(::Dynamic this1, ::Dynamic f, ::Dynamic gather){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::Outcome o){
            			HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_70_next)
HXDLIN(  70)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE(  71)					 ::Dynamic d = o->_hx_getObject(0);
HXDLIN(  71)					return f(d);
            				}
            				break;
            				case (int)1: {
HXLINE(  72)					 ::tink::core::TypedError f = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN(  72)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(f)));
            				}
            				break;
            			}
HXLINE(  70)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_70_next)
HXDLIN(  70)		return ::tink::core::_Future::Future_Impl__obj::flatMap(this1, ::Dynamic(new _hx_Closure_0(f)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Promise_Impl__obj,next,return )

::Dynamic Promise_Impl__obj::swap(::Dynamic this1, ::Dynamic v){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,v) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic _){
            			HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_76_swap)
HXDLIN(  76)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(v)));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_76_swap)
HXDLIN(  76)		return ::tink::core::_Promise::Promise_Impl__obj::next(this1, ::Dynamic(new _hx_Closure_0(v)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promise_Impl__obj,swap,return )

::Dynamic Promise_Impl__obj::swapError(::Dynamic this1, ::tink::core::TypedError e){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tink::core::TypedError,e) HXARGC(1)
            		 ::tink::core::TypedError _hx_run( ::tink::core::TypedError _){
            			HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_79_swapError)
HXDLIN(  79)			return e;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_79_swapError)
HXDLIN(  79)		return ::tink::core::_Promise::Promise_Impl__obj::mapError(this1, ::Dynamic(new _hx_Closure_0(e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promise_Impl__obj,swapError,return )

::Dynamic Promise_Impl__obj::merge(::Dynamic this1,::Dynamic other, ::Dynamic merger, ::Dynamic gather){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,merger) HXARGC(2)
            		::Dynamic _hx_run( ::tink::core::Outcome a, ::tink::core::Outcome b){
            			HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_82_merge)
HXDLIN(  82)			switch((int)(a->_hx_getIndex())){
            				case (int)0: {
HXLINE(  83)					 ::Dynamic _g = a->_hx_getObject(0);
HXLINE(  82)					switch((int)(b->_hx_getIndex())){
            						case (int)0: {
HXLINE(  83)							 ::Dynamic b1 = b->_hx_getObject(0);
HXDLIN(  83)							 ::Dynamic a = _g;
HXDLIN(  83)							return merger(a,b1);
            						}
            						break;
            						case (int)1: {
HXLINE(  84)							 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(b->_hx_getObject(0)) );
HXDLIN(  84)							return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(e)));
            						}
            						break;
            					}
            				}
            				break;
            				case (int)1: {
HXLINE(  84)					 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(a->_hx_getObject(0)) );
HXDLIN(  84)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(e)));
            				}
            				break;
            			}
HXLINE(  82)			return null();
            		}
            		HX_END_LOCAL_FUNC2(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		::Dynamic _hx_run(::Dynamic o){
            			HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_85_merge)
HXLINE(  85)			return o;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_82_merge)
HXDLIN(  82)		return ::tink::core::_Future::Future_Impl__obj::flatMap(::tink::core::_Future::Future_Impl__obj::merge(this1,other, ::Dynamic(new _hx_Closure_0(merger))), ::Dynamic(new _hx_Closure_1()),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Promise_Impl__obj,merge,return )

::Dynamic Promise_Impl__obj::_hx_and(::Dynamic a,::Dynamic b){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		::Dynamic _hx_run( ::Dynamic a, ::Dynamic b){
            			HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_89_and)
HXDLIN(  89)			 ::tink::core::MPair this1 =  ::tink::core::MPair_obj::__alloc( HX_CTX ,a,b);
HXDLIN(  89)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(this1)));
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_89_and)
HXDLIN(  89)		return ::tink::core::_Promise::Promise_Impl__obj::merge(a,b, ::Dynamic(new _hx_Closure_0()),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promise_Impl__obj,_hx_and,return )

::Dynamic Promise_Impl__obj::iterate( ::Dynamic promises, ::Dynamic yield,::Dynamic fallback){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_3, ::Dynamic,yield,::Dynamic,fallback, ::Dynamic,promises) HXARGC(1)
            		void _hx_run( ::Dynamic cb){
            			HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,yield,::Array< ::Dynamic>,next,::Dynamic,fallback, ::Dynamic,cb, ::Dynamic,iter) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_114_iterate)
HXLINE( 114)				if (( (bool)(iter->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )) {
            					HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,yield,::Array< ::Dynamic>,next, ::Dynamic,cb) HXARGC(1)
            					void _hx_run( ::tink::core::Outcome o){
            						HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_115_iterate)
HXLINE( 115)						switch((int)(o->_hx_getIndex())){
            							case (int)0: {
            								HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,next, ::Dynamic,cb) HXARGC(1)
            								void _hx_run( ::tink::core::Outcome o){
            									HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_117_iterate)
HXLINE( 117)									switch((int)(o->_hx_getIndex())){
            										case (int)0: {
HXLINE( 119)											 ::haxe::ds::Option _g = o->_hx_getObject(0);
HXDLIN( 119)											switch((int)(_g->_hx_getIndex())){
            												case (int)0: {
HXLINE( 118)													 ::Dynamic ret = _g->_hx_getObject(0);
HXDLIN( 118)													cb(::tink::core::Outcome_obj::Success(ret));
            												}
            												break;
            												case (int)1: {
HXLINE( 119)													next->__get(0)();
            												}
            												break;
            											}
            										}
            										break;
            										case (int)1: {
HXLINE( 120)											 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN( 120)											cb(::tink::core::Outcome_obj::Failure(e));
            										}
            										break;
            									}
            								}
            								HX_END_LOCAL_FUNC1((void))

HXLINE( 116)								 ::Dynamic v = o->_hx_getObject(0);
HXLINE( 117)								::tink::core::_Future::FutureObject_obj::handle(yield(v), ::Dynamic(new _hx_Closure_0(next,cb)));
            							}
            							break;
            							case (int)1: {
HXLINE( 122)								 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXLINE( 123)								cb(::tink::core::Outcome_obj::Failure(e));
            							}
            							break;
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE( 115)					::tink::core::_Future::FutureObject_obj::handle(iter->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)(), ::Dynamic(new _hx_Closure_1(yield,next,cb)));
            				}
            				else {
HXLINE( 126)					::tink::core::_Future::FutureObject_obj::handle(fallback,cb);
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_111_iterate)
HXLINE( 112)			 ::Dynamic iter = promises->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXLINE( 113)			::Array< ::Dynamic> next = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN( 113)			next[0] =  ::Dynamic(new _hx_Closure_2(yield,next,fallback,cb,iter));
HXLINE( 128)			next->__get(0)();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_111_iterate)
HXDLIN( 111)		return ::tink::core::_Future::Future_Impl__obj::irreversible( ::Dynamic(new _hx_Closure_3(yield,fallback,promises)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Promise_Impl__obj,iterate,return )

::Dynamic Promise_Impl__obj::retry( ::Dynamic gen, ::Dynamic next){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		Float _hx_run(){
            			HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_172_retry)
HXLINE( 172)			return ( ::__time_stamp() * ( (Float)(1000) ));
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_4,Float,start,::Array< ::Dynamic>,attempt, ::Dynamic,stamp, ::Dynamic,next, ::Dynamic,gen) HXARGC(1)
            		::Dynamic _hx_run(int count){
            			HX_BEGIN_LOCAL_FUNC_S5(::hx::LocalFunc,_hx_Closure_2,Float,start,::Array< ::Dynamic>,attempt, ::Dynamic,stamp, ::Dynamic,next,int,count) HXARGC(1)
            			::Dynamic _hx_run( ::tink::core::TypedError error){
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,attempt,int,count) HXARGC(1)
            				::Dynamic _hx_run( ::Dynamic _){
            					HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_178_retry)
HXLINE( 178)					return attempt->__get(0)((count + 1));
            				}
            				HX_END_LOCAL_FUNC1(return)

            				HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_177_retry)
HXLINE( 177)				 ::Dynamic next1 = next;
HXDLIN( 177)				int count1 = count;
HXDLIN( 177)				Float f = ( (Float)(stamp()) );
HXDLIN( 177)				return ::tink::core::_Promise::Promise_Impl__obj::next(next1( ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("elapsed",3c,98,c0,ba),(f - start))
            					->setFixed(1,HX_("attempt",0d,c9,98,30),count1)
            					->setFixed(2,HX_("error",c8,cb,29,73),error))), ::Dynamic(new _hx_Closure_1(attempt,count)),null());
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::Dynamic,f) HXARGC(1)
            			::Dynamic _hx_run( ::tink::core::Outcome o){
            				HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_175_retry)
HXLINE( 175)				switch((int)(o->_hx_getIndex())){
            					case (int)0: {
HXLINE( 175)						 ::Dynamic d = o->_hx_getObject(0);
HXDLIN( 175)						return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,o));
            					}
            					break;
            					case (int)1: {
HXLINE( 175)						 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(o->_hx_getObject(0)) );
HXDLIN( 175)						return f(e);
            					}
            					break;
            				}
HXDLIN( 175)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_175_retry)
HXLINE( 175)			 ::Dynamic f =  ::Dynamic(new _hx_Closure_2(start,attempt,stamp,next,count));
HXDLIN( 175)			return ::tink::core::_Future::Future_Impl__obj::flatMap(gen(), ::Dynamic(new _hx_Closure_3(f)),null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_171_retry)
HXLINE( 172)		 ::Dynamic stamp =  ::Dynamic(new _hx_Closure_0());
HXLINE( 173)		Float start = ( (Float)(stamp()) );
HXLINE( 174)		::Array< ::Dynamic> attempt = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN( 174)		attempt[0] =  ::Dynamic(new _hx_Closure_4(start,attempt,stamp,next,gen));
HXDLIN( 174)		return attempt->__get(0)(1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promise_Impl__obj,retry,return )

::Dynamic Promise_Impl__obj::ofSpecific(::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_198_ofSpecific)
HXDLIN( 198)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,ofSpecific,return )

::Dynamic Promise_Impl__obj::fromNever(::Dynamic l){
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_201_fromNever)
HXDLIN( 201)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,fromNever,return )

::Dynamic Promise_Impl__obj::ofTrigger( ::tink::core::FutureTrigger f){
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_204_ofTrigger)
HXDLIN( 204)		return f;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,ofTrigger,return )

::Dynamic Promise_Impl__obj::ofHappyTrigger( ::tink::core::FutureTrigger f){
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_207_ofHappyTrigger)
HXDLIN( 207)		return ::tink::core::_Future::Future_Impl__obj::map(f,::tink::core::Outcome_obj::Success_dyn(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,ofHappyTrigger,return )

::Dynamic Promise_Impl__obj::ofFuture(::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_210_ofFuture)
HXDLIN( 210)		return ::tink::core::_Future::Future_Impl__obj::map(f,::tink::core::Outcome_obj::Success_dyn(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,ofFuture,return )

::Dynamic Promise_Impl__obj::ofOutcome( ::tink::core::Outcome o){
            	HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_213_ofOutcome)
HXDLIN( 213)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,o));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,ofOutcome,return )

::Dynamic Promise_Impl__obj::ofError( ::tink::core::TypedError e){
            	HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_216_ofError)
HXDLIN( 216)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,ofError,return )

::Dynamic Promise_Impl__obj::ofData( ::Dynamic d){
            	HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_219_ofData)
HXDLIN( 219)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(d)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,ofData,return )

::Dynamic Promise_Impl__obj::lazy(::Dynamic p){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Dynamic,p) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic cb){
            			HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_223_lazy)
HXDLIN( 223)			return ::tink::core::_Future::FutureObject_obj::handle(::tink::core::_Lazy::Lazy_Impl__obj::get(p),cb);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_223_lazy)
HXDLIN( 223)		::Dynamic this1 =  ::tink::core::_Future::SuspendableFuture_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(p)));
HXDLIN( 223)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,lazy,return )

::Dynamic Promise_Impl__obj::inParallel(::Array< ::Dynamic> a, ::Dynamic concurrency){
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_227_inParallel)
HXDLIN( 227)		return ::tink::core::_Promise::Promise_Impl__obj::many(a,concurrency);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promise_Impl__obj,inParallel,return )

::Dynamic Promise_Impl__obj::many(::Array< ::Dynamic> a, ::Dynamic concurrency){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::tink::core::Outcome _hx_run( ::tink::core::Outcome o){
            			HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_230_many)
HXDLIN( 230)			return o;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		 ::tink::core::Outcome _hx_run( ::tink::core::Outcome o){
            			HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_230_many)
HXDLIN( 230)			return o;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_230_many)
HXDLIN( 230)		return ::tink::core::_Future::Future_Impl__obj::processMany(a,concurrency, ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Promise_Impl__obj,many,return )

::Dynamic Promise_Impl__obj::inSequence(::Array< ::Dynamic> a){
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_234_inSequence)
HXDLIN( 234)		return ::tink::core::_Promise::Promise_Impl__obj::many(a,1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,inSequence,return )

 ::Dynamic Promise_Impl__obj::cache( ::Dynamic gen){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3,::Array< ::Dynamic>,p, ::Dynamic,gen) HXARGC(0)
            		::Dynamic _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2,::Array< ::Dynamic>,p) HXARGC(1)
            			 ::tink::core::Outcome _hx_run( ::tink::core::Outcome o){
            				HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_253_cache)
HXLINE( 254)				if (!(::tink::core::OutcomeTools_obj::isSuccess(o))) {
HXLINE( 254)					p[0] = null();
            				}
HXLINE( 255)				return o;
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_240_cache)
HXLINE( 241)			::Dynamic ret = p->__get(0);
HXLINE( 242)			if (::hx::IsNull( ret )) {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::Array< bool >,sync,::Array< ::Dynamic>,p) HXARGC(1)
            				::Dynamic _hx_run( ::tink::core::MPair o){
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< bool >,sync,::Array< ::Dynamic>,p) HXARGC(1)
            					void _hx_run( ::Dynamic _){
            						HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_245_cache)
HXLINE( 246)						sync[0] = true;
HXLINE( 247)						p[0] = null();
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_244_cache)
HXLINE( 245)					::tink::core::_Future::FutureObject_obj::handle(o->b, ::Dynamic(new _hx_Closure_0(sync,p)));
HXLINE( 249)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(o->a)));
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 243)				::Array< bool > sync = ::Array_obj< bool >::fromData( _hx_array_data_1351971c_59,1);
HXLINE( 244)				ret = ::tink::core::_Promise::Promise_Impl__obj::next(gen(), ::Dynamic(new _hx_Closure_1(sync,p)),null());
HXLINE( 251)				if (!(sync->__get(0))) {
HXLINE( 251)					p[0] = ret;
            				}
            			}
HXLINE( 253)			return ::tink::core::_Future::Future_Impl__obj::map(ret, ::Dynamic(new _hx_Closure_2(p)),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_238_cache)
HXLINE( 239)		::Array< ::Dynamic> p = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE( 240)		return  ::Dynamic(new _hx_Closure_3(p,gen));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,cache,return )

::Dynamic Promise_Impl__obj::lift(::Dynamic p){
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_263_lift)
HXDLIN( 263)		return p;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,lift,return )

 ::tink::core::FutureTrigger Promise_Impl__obj::trigger(){
            	HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_270_trigger)
HXDLIN( 270)		 ::tink::core::FutureTrigger this1 =  ::tink::core::FutureTrigger_obj::__alloc( HX_CTX );
HXDLIN( 270)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Promise_Impl__obj,trigger,return )

::Dynamic Promise_Impl__obj::resolve( ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_274_resolve)
HXDLIN( 274)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(v)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,resolve,return )

::Dynamic Promise_Impl__obj::reject( ::tink::core::TypedError e){
            	HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_278_reject)
HXDLIN( 278)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(e)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Promise_Impl__obj,reject,return )


Promise_Impl__obj::Promise_Impl__obj()
{
}

bool Promise_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"and") ) { outValue = _hx_and_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"swap") ) { outValue = swap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lazy") ) { outValue = lazy_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"many") ) { outValue = many_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lift") ) { outValue = lift_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"eager") ) { outValue = eager_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"noise") ) { outValue = noise_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"retry") ) { outValue = retry_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = cache_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { outValue = handle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofData") ) { outValue = ofData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reject") ) { outValue = reject_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flatMap") ) { outValue = flatMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"recover") ) { outValue = recover_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"iterate") ) { outValue = iterate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofError") ) { outValue = ofError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"trigger") ) { outValue = trigger_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolve") ) { outValue = resolve_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapError") ) { outValue = mapError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofFuture") ) { outValue = ofFuture_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isSuccess") ) { outValue = isSuccess_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"swapError") ) { outValue = swapError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"fromNever") ) { outValue = fromNever_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofTrigger") ) { outValue = ofTrigger_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofOutcome") ) { outValue = ofOutcome_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tryRecover") ) { outValue = tryRecover_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofSpecific") ) { outValue = ofSpecific_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inParallel") ) { outValue = inParallel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inSequence") ) { outValue = inSequence_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ofHappyTrigger") ) { outValue = ofHappyTrigger_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Promise_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Promise_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Promise_Impl__obj::NOISE,HX_("NOISE",7a,c7,b0,1d)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Promise_Impl__obj::_hx_NULL,HX_("NULL",87,66,cf,33)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Promise_Impl__obj::NEVER,HX_("NEVER",6c,76,1e,17)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Promise_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promise_Impl__obj::NOISE,"NOISE");
	HX_MARK_MEMBER_NAME(Promise_Impl__obj::_hx_NULL,"NULL");
	HX_MARK_MEMBER_NAME(Promise_Impl__obj::NEVER,"NEVER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Promise_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promise_Impl__obj::NOISE,"NOISE");
	HX_VISIT_MEMBER_NAME(Promise_Impl__obj::_hx_NULL,"NULL");
	HX_VISIT_MEMBER_NAME(Promise_Impl__obj::NEVER,"NEVER");
};

#endif

::hx::Class Promise_Impl__obj::__mClass;

static ::String Promise_Impl__obj_sStaticFields[] = {
	HX_("NOISE",7a,c7,b0,1d),
	HX_("NULL",87,66,cf,33),
	HX_("NEVER",6c,76,1e,17),
	HX_("_new",61,15,1f,3f),
	HX_("eager",b8,c9,e4,67),
	HX_("map",9c,0a,53,00),
	HX_("flatMap",63,10,de,e6),
	HX_("tryRecover",a9,7e,66,18),
	HX_("recover",a4,52,fe,30),
	HX_("mapError",8c,3b,6c,ea),
	HX_("handle",a8,83,fd,b7),
	HX_("noise",9a,8f,c2,9f),
	HX_("isSuccess",f9,a2,4c,bc),
	HX_("next",f3,84,02,49),
	HX_("swap",93,2a,5e,4c),
	HX_("swapError",35,dc,d6,e8),
	HX_("merge",b8,a2,c6,05),
	HX_("and",d7,fa,49,00),
	HX_("iterate",fa,79,d0,e2),
	HX_("retry",68,17,c9,e6),
	HX_("ofSpecific",e9,cc,a4,d1),
	HX_("fromNever",c2,28,b9,4d),
	HX_("ofTrigger",e1,7c,f6,33),
	HX_("ofHappyTrigger",af,6f,31,ec),
	HX_("ofFuture",ba,d8,4f,06),
	HX_("ofOutcome",3b,e0,e6,e9),
	HX_("ofError",31,87,8c,d6),
	HX_("ofData",e1,ba,b8,49),
	HX_("lazy",74,10,ad,47),
	HX_("inParallel",cc,af,ee,d9),
	HX_("many",9f,3c,56,48),
	HX_("inSequence",46,23,e5,44),
	HX_("cache",42,9a,14,41),
	HX_("lift",0b,11,b3,47),
	HX_("trigger",38,55,df,25),
	HX_("resolve",ec,12,60,67),
	HX_("reject",5f,51,85,02),
	::String(null())
};

void Promise_Impl__obj::__register()
{
	Promise_Impl__obj _hx_dummy;
	Promise_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Promise.Promise_Impl_",1c,97,51,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Promise_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Promise_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Promise_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Promise_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Promise_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Promise_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Promise_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Promise_Impl__obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_24_boot)
HXDLIN(  24)		NOISE =  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(null())));
            	}
{
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_25_boot)
HXDLIN(  25)		_hx_NULL = ::tink::core::_Promise::Promise_Impl__obj::NOISE;
            	}
{
            	HX_STACKFRAME(&_hx_pos_113c0f6d76f4dafd_26_boot)
HXDLIN(  26)		NEVER = ::tink::core::_Future::Future_Impl__obj::NEVER;
            	}
}

} // end namespace tink
} // end namespace core
} // end namespace _Promise
