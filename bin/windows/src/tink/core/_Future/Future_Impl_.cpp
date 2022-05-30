#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_Either
#include <haxe/ds/Either.h>
#endif
#ifndef INCLUDED_tink_core_CallbackLinkRef
#include <tink/core/CallbackLinkRef.h>
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
#ifndef INCLUDED_tink_core__Callback_CallbackLink_Impl_
#include <tink/core/_Callback/CallbackLink_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Callback_LinkPair
#include <tink/core/_Callback/LinkPair.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_Future_Impl_
#include <tink/core/_Future/Future_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Future_NeverFuture
#include <tink/core/_Future/NeverFuture.h>
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
#ifndef INCLUDED_tink_core__Lazy_LazyFunc
#include <tink/core/_Lazy/LazyFunc.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_Lazy_Impl_
#include <tink/core/_Lazy/Lazy_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Outcome_OutcomeMapper_Impl_
#include <tink/core/_Outcome/OutcomeMapper_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_36_get_status,"tink.core._Future.Future_Impl_","get_status",0x92e5f7c7,"tink.core._Future.Future_Impl_.get_status","tink/core/Future.hx",36,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_47__new,"tink.core._Future.Future_Impl_","_new",0x9e4dd52d,"tink.core._Future.Future_Impl_._new","tink/core/Future.hx",47,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_56_handle,"tink.core._Future.Future_Impl_","handle",0x5034ce74,"tink.core._Future.Future_Impl_.handle","tink/core/Future.hx",56,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_63_eager,"tink.core._Future.Future_Impl_","eager",0x519ddc6c,"tink.core._Future.Future_Impl_.eager","tink/core/Future.hx",63,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_69_noise,"tink.core._Future.Future_Impl_","noise",0x897ba24e,"tink.core._Future.Future_Impl_.noise","tink/core/Future.hx",69,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_71_noise,"tink.core._Future.Future_Impl_","noise",0x897ba24e,"tink.core._Future.Future_Impl_.noise","tink/core/Future.hx",71,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_77_first,"tink.core._Future.Future_Impl_","first",0xea568ae4,"tink.core._Future.Future_Impl_.first","tink/core/Future.hx",77,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_84_first,"tink.core._Future.Future_Impl_","first",0xea568ae4,"tink.core._Future.Future_Impl_.first","tink/core/Future.hx",84,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_92_map,"tink.core._Future.Future_Impl_","map",0x637a4850,"tink.core._Future.Future_Impl_.map","tink/core/Future.hx",92,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_94_map,"tink.core._Future.Future_Impl_","map",0x637a4850,"tink.core._Future.Future_Impl_.map","tink/core/Future.hx",94,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_95_map,"tink.core._Future.Future_Impl_","map",0x637a4850,"tink.core._Future.Future_Impl_.map","tink/core/Future.hx",95,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_103_flatMap,"tink.core._Future.Future_Impl_","flatMap",0x7f083817,"tink.core._Future.Future_Impl_.flatMap","tink/core/Future.hx",103,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_106_flatMap,"tink.core._Future.Future_Impl_","flatMap",0x7f083817,"tink.core._Future.Future_Impl_.flatMap","tink/core/Future.hx",106,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_110_flatMap,"tink.core._Future.Future_Impl_","flatMap",0x7f083817,"tink.core._Future.Future_Impl_.flatMap","tink/core/Future.hx",110,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_108_flatMap,"tink.core._Future.Future_Impl_","flatMap",0x7f083817,"tink.core._Future.Future_Impl_.flatMap","tink/core/Future.hx",108,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_120_next,"tink.core._Future.Future_Impl_","next",0xa83144bf,"tink.core._Future.Future_Impl_.next","tink/core/Future.hx",120,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_124_gather,"tink.core._Future.Future_Impl_","gather",0xedd3bcc7,"tink.core._Future.Future_Impl_.gather","tink/core/Future.hx",124,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_130_merge,"tink.core._Future.Future_Impl_","merge",0xef7fb56c,"tink.core._Future.Future_Impl_.merge","tink/core/Future.hx",130,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_135_merge,"tink.core._Future.Future_Impl_","merge",0xef7fb56c,"tink.core._Future.Future_Impl_.merge","tink/core/Future.hx",135,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_133_merge,"tink.core._Future.Future_Impl_","merge",0xef7fb56c,"tink.core._Future.Future_Impl_.merge","tink/core/Future.hx",133,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_150_flatten,"tink.core._Future.Future_Impl_","flatten",0x7f25d378,"tink.core._Future.Future_Impl_.flatten","tink/core/Future.hx",150,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_162_neverToAny,"tink.core._Future.Future_Impl_","neverToAny",0x76c142d1,"tink.core._Future.Future_Impl_.neverToAny","tink/core/Future.hx",162,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_165_ofAny,"tink.core._Future.Future_Impl_","ofAny",0x16d0ecc9,"tink.core._Future.Future_Impl_.ofAny","tink/core/Future.hx",165,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_171_asPromise,"tink.core._Future.Future_Impl_","asPromise",0xf9277f7d,"tink.core._Future.Future_Impl_.asPromise","tink/core/Future.hx",171,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_175_ofMany,"tink.core._Future.Future_Impl_","ofMany",0xe7e2ec22,"tink.core._Future.Future_Impl_.ofMany","tink/core/Future.hx",175,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_183_inParallel,"tink.core._Future.Future_Impl_","inParallel",0x76515098,"tink.core._Future.Future_Impl_.inParallel","tink/core/Future.hx",183,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_190_inSequence,"tink.core._Future.Future_Impl_","inSequence",0xe147c412,"tink.core._Future.Future_Impl_.inSequence","tink/core/Future.hx",190,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_193_many,"tink.core._Future.Future_Impl_","many",0xa784fc6b,"tink.core._Future.Future_Impl_.many","tink/core/Future.hx",193,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_196_processMany,"tink.core._Future.Future_Impl_","processMany",0x9ed78062,"tink.core._Future.Future_Impl_.processMany","tink/core/Future.hx",196,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_219_processMany,"tink.core._Future.Future_Impl_","processMany",0x9ed78062,"tink.core._Future.Future_Impl_.processMany","tink/core/Future.hx",219,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_228_processMany,"tink.core._Future.Future_Impl_","processMany",0x9ed78062,"tink.core._Future.Future_Impl_.processMany","tink/core/Future.hx",228,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_235_processMany,"tink.core._Future.Future_Impl_","processMany",0x9ed78062,"tink.core._Future.Future_Impl_.processMany","tink/core/Future.hx",235,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_252_processMany,"tink.core._Future.Future_Impl_","processMany",0x9ed78062,"tink.core._Future.Future_Impl_.processMany","tink/core/Future.hx",252,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_198_processMany,"tink.core._Future.Future_Impl_","processMany",0x9ed78062,"tink.core._Future.Future_Impl_.processMany","tink/core/Future.hx",198,0x014a8a08)
static const int _hx_array_data_d235b422_42[] = {
	(int)0,
};
static const int _hx_array_data_d235b422_43[] = {
	(int)0,
};
static const bool _hx_array_data_d235b422_44[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_272_lazy,"tink.core._Future.Future_Impl_","lazy",0xa6dbd040,"tink.core._Future.Future_Impl_.lazy","tink/core/Future.hx",272,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_279_sync,"tink.core._Future.Future_Impl_","sync",0xab8e7a27,"tink.core._Future.Future_Impl_.sync","tink/core/Future.hx",279,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_282_isFuture,"tink.core._Future.Future_Impl_","isFuture",0x5870c999,"tink.core._Future.Future_Impl_.isFuture","tink/core/Future.hx",282,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_286_async,"tink.core._Future.Future_Impl_","async",0x0ff711f0,"tink.core._Future.Future_Impl_.async","tink/core/Future.hx",286,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_297_irreversible,"tink.core._Future.Future_Impl_","irreversible",0x7e8b62ea,"tink.core._Future.Future_Impl_.irreversible","tink/core/Future.hx",297,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_303_or,"tink.core._Future.Future_Impl_","or",0xcdef55ef,"tink.core._Future.Future_Impl_.or","tink/core/Future.hx",303,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_309_either,"tink.core._Future.Future_Impl_","either",0xbc51a811,"tink.core._Future.Future_Impl_.either","tink/core/Future.hx",309,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_315_and,"tink.core._Future.Future_Impl_","and",0x6371388b,"tink.core._Future.Future_Impl_.and","tink/core/Future.hx",315,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_318__tryFailingFlatMap,"tink.core._Future.Future_Impl_","_tryFailingFlatMap",0x48c2e727,"tink.core._Future.Future_Impl_._tryFailingFlatMap","tink/core/Future.hx",318,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_324__tryFlatMap,"tink.core._Future.Future_Impl_","_tryFlatMap",0xdaba1b3b,"tink.core._Future.Future_Impl_._tryFlatMap","tink/core/Future.hx",324,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_330__tryFailingMap,"tink.core._Future.Future_Impl_","_tryFailingMap",0x2a4c2f60,"tink.core._Future.Future_Impl_._tryFailingMap","tink/core/Future.hx",330,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_333__tryMap,"tink.core._Future.Future_Impl_","_tryMap",0x5beac974,"tink.core._Future.Future_Impl_._tryMap","tink/core/Future.hx",333,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_336__flatMap,"tink.core._Future.Future_Impl_","_flatMap",0xad4effb0,"tink.core._Future.Future_Impl_._flatMap","tink/core/Future.hx",336,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_339__map,"tink.core._Future.Future_Impl_","_map",0x9e4d0f69,"tink.core._Future.Future_Impl_._map","tink/core/Future.hx",339,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_346_trigger,"tink.core._Future.Future_Impl_","trigger",0xbe097cec,"tink.core._Future.Future_Impl_.trigger","tink/core/Future.hx",346,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_350_delay,"tink.core._Future.Future_Impl_","delay",0xc0dfea37,"tink.core._Future.Future_Impl_.delay","tink/core/Future.hx",350,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_30_boot,"tink.core._Future.Future_Impl_","boot",0xa04a43fe,"tink.core._Future.Future_Impl_.boot","tink/core/Future.hx",30,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_31_boot,"tink.core._Future.Future_Impl_","boot",0xa04a43fe,"tink.core._Future.Future_Impl_.boot","tink/core/Future.hx",31,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_589b450cd6df12cf_32_boot,"tink.core._Future.Future_Impl_","boot",0xa04a43fe,"tink.core._Future.Future_Impl_.boot","tink/core/Future.hx",32,0x014a8a08)
namespace tink{
namespace core{
namespace _Future{

void Future_Impl__obj::__construct() { }

Dynamic Future_Impl__obj::__CreateEmpty() { return new Future_Impl__obj; }

void *Future_Impl__obj::_hx_vtable = 0;

Dynamic Future_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Future_Impl__obj > _hx_result = new Future_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Future_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78864394;
}

::Dynamic Future_Impl__obj::NOISE;

::Dynamic Future_Impl__obj::_hx_NULL;

::Dynamic Future_Impl__obj::NEVER;

 ::tink::core::FutureStatus Future_Impl__obj::get_status(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_36_get_status)
HXDLIN(  36)		return ::tink::core::_Future::FutureObject_obj::getStatus(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,get_status,return )

::Dynamic Future_Impl__obj::_new( ::Dynamic wakeup){
            	HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_47__new)
HXDLIN(  47)		::Dynamic this1 =  ::tink::core::_Future::SuspendableFuture_obj::__alloc( HX_CTX ,wakeup);
HXDLIN(  47)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,_new,return )

::Dynamic Future_Impl__obj::handle(::Dynamic this1, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_56_handle)
HXDLIN(  56)		return ::tink::core::_Future::FutureObject_obj::handle(this1,callback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,handle,return )

::Dynamic Future_Impl__obj::eager(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_63_eager)
HXLINE(  64)		::tink::core::_Future::FutureObject_obj::eager(this1);
HXLINE(  65)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,eager,return )

::Dynamic Future_Impl__obj::noise(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_69_noise)
HXLINE(  70)		bool _hx_tmp;
HXDLIN(  70)		if ((::tink::core::_Future::FutureObject_obj::getStatus(this1)->_hx_getIndex() == 4)) {
HXLINE(  70)			_hx_tmp = true;
            		}
            		else {
HXLINE(  70)			_hx_tmp = false;
            		}
HXDLIN(  70)		if (_hx_tmp) {
HXLINE(  70)			return ::tink::core::_Future::Future_Impl__obj::NEVER;
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			 ::Dynamic _hx_run( ::Dynamic _){
            				HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_71_noise)
HXLINE(  71)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  71)			return ::tink::core::_Future::Future_Impl__obj::map(this1, ::Dynamic(new _hx_Closure_0()),null());
            		}
HXLINE(  70)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,noise,return )

::Dynamic Future_Impl__obj::first(::Dynamic this1,::Dynamic that){
            	HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_77_first)
HXDLIN(  77)		::Dynamic _g = this1;
HXDLIN(  77)		 ::tink::core::FutureStatus _g1 = ::tink::core::_Future::FutureObject_obj::getStatus(_g);
HXDLIN(  77)		switch((int)(_g1->_hx_getIndex())){
            			case (int)3: {
HXLINE(  80)				::Dynamic _g2 = _g1->_hx_getObject(0);
HXLINE(  77)				 ::tink::core::FutureStatus _g3 = ::tink::core::_Future::FutureObject_obj::getStatus(that);
HXDLIN(  77)				switch((int)(_g3->_hx_getIndex())){
            					case (int)3: {
HXLINE(  81)						::Dynamic _g1 = _g3->_hx_getObject(0);
HXLINE(  80)						::Dynamic v = _g;
HXLINE(  82)						return v;
            					}
            					break;
            					case (int)4: {
HXLINE(  80)						::Dynamic v = _g;
HXLINE(  82)						return v;
            					}
            					break;
            					default:{
HXLINE(  80)						::Dynamic v = _g;
HXLINE(  82)						return v;
            					}
            				}
            			}
            			break;
            			case (int)4: {
HXLINE(  78)				::Dynamic v = that;
HXLINE(  82)				return v;
            			}
            			break;
            			default:{
HXDLIN(  77)				 ::tink::core::FutureStatus _g1 = ::tink::core::_Future::FutureObject_obj::getStatus(that);
HXDLIN(  77)				switch((int)(_g1->_hx_getIndex())){
            					case (int)3: {
HXLINE(  81)						::Dynamic _g = _g1->_hx_getObject(0);
HXLINE(  78)						::Dynamic v = that;
HXLINE(  82)						return v;
            					}
            					break;
            					case (int)4: {
HXLINE(  80)						::Dynamic v = _g;
HXLINE(  82)						return v;
            					}
            					break;
            					default:{
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Dynamic,that,::Dynamic,this1) HXARGC(1)
            						::Dynamic _hx_run( ::Dynamic fire){
            							HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_84_first)
HXLINE(  84)							::Dynamic this2 = ::tink::core::_Future::FutureObject_obj::handle(this1,fire);
HXDLIN(  84)							return  ::tink::core::_Callback::LinkPair_obj::__alloc( HX_CTX ,this2,::tink::core::_Future::FutureObject_obj::handle(that,fire));
            						}
            						HX_END_LOCAL_FUNC1(return)

HXLINE(  84)						return  ::tink::core::_Future::SuspendableFuture_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(that,this1)));
            					}
            				}
            			}
            		}
HXLINE(  77)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,first,return )

::Dynamic Future_Impl__obj::map(::Dynamic this1, ::Dynamic f, ::Dynamic gather){
            	HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_92_map)
HXDLIN(  92)		 ::tink::core::FutureStatus _g = ::tink::core::_Future::FutureObject_obj::getStatus(this1);
HXDLIN(  92)		switch((int)(_g->_hx_getIndex())){
            			case (int)3: {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2,::Dynamic,this1, ::Dynamic,f1) HXARGC(0)
            				 ::Dynamic _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_94_map)
HXLINE(  94)					 ::Dynamic f = f1;
HXDLIN(  94)					return f(::tink::core::_Lazy::LazyObject_obj::get(this1));
            				}
            				HX_END_LOCAL_FUNC0(return)

HXLINE(  94)				::Dynamic l = _g->_hx_getObject(0);
HXDLIN(  94)				::Dynamic this1 = l;
HXDLIN(  94)				 ::Dynamic f1 = f;
HXDLIN(  94)				return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyFunc_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_2(this1,f1)),this1));
            			}
            			break;
            			case (int)4: {
HXLINE(  93)				return ::tink::core::_Future::Future_Impl__obj::NEVER;
            			}
            			break;
            			default:{
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::Dynamic,this1, ::Dynamic,f) HXARGC(1)
            				::Dynamic _hx_run( ::Dynamic fire){
            					HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f, ::Dynamic,fire) HXARGC(1)
            					void _hx_run( ::Dynamic v){
            						HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_95_map)
HXLINE(  95)						 ::Dynamic fire1 = fire;
HXDLIN(  95)						fire1(f(v));
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_95_map)
HXLINE(  95)					return ::tink::core::_Future::FutureObject_obj::handle(this1, ::Dynamic(new _hx_Closure_0(f,fire)));
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE(  95)				return  ::tink::core::_Future::SuspendableFuture_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(this1,f)));
            			}
            		}
HXLINE(  92)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Future_Impl__obj,map,return )

::Dynamic Future_Impl__obj::flatMap(::Dynamic this1, ::Dynamic next, ::Dynamic gather){
            	HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_103_flatMap)
HXDLIN( 103)		 ::tink::core::FutureStatus _g = ::tink::core::_Future::FutureObject_obj::getStatus(this1);
HXDLIN( 103)		switch((int)(_g->_hx_getIndex())){
            			case (int)3: {
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_3,::Dynamic,l, ::Dynamic,next) HXARGC(1)
            				::Dynamic _hx_run( ::Dynamic fire){
            					HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,fire) HXARGC(1)
            					void _hx_run( ::Dynamic v){
            						HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_106_flatMap)
HXLINE( 106)						fire(v);
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_106_flatMap)
HXLINE( 106)					 ::Dynamic next1 = next;
HXDLIN( 106)					return ::tink::core::_Future::FutureObject_obj::handle(next1(::tink::core::_Lazy::Lazy_Impl__obj::get(l)), ::Dynamic(new _hx_Closure_2(fire)));
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 105)				::Dynamic l = _g->_hx_getObject(0);
HXLINE( 106)				return  ::tink::core::_Future::SuspendableFuture_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_3(l,next)));
            			}
            			break;
            			case (int)4: {
HXLINE( 104)				return ::tink::core::_Future::Future_Impl__obj::NEVER;
            			}
            			break;
            			default:{
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::Dynamic,this1, ::Dynamic,next) HXARGC(1)
            				::Dynamic _hx_run( ::Dynamic yield){
            					HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,yield, ::tink::core::CallbackLinkRef,inner, ::Dynamic,next) HXARGC(1)
            					void _hx_run( ::Dynamic v){
            						HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_110_flatMap)
HXLINE( 110)						::Dynamic this1 = next(v);
HXDLIN( 110)						::Dynamic outer = ::tink::core::_Future::FutureObject_obj::handle(this1,yield);
HXDLIN( 110)						inner->link = outer;
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_108_flatMap)
HXLINE( 109)					 ::tink::core::CallbackLinkRef inner =  ::tink::core::CallbackLinkRef_obj::__alloc( HX_CTX );
HXLINE( 110)					::Dynamic outer = ::tink::core::_Future::FutureObject_obj::handle(this1, ::Dynamic(new _hx_Closure_0(yield,inner,next)));
HXLINE( 111)					return  ::tink::core::_Callback::LinkPair_obj::__alloc( HX_CTX ,outer,inner);
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 108)				return  ::tink::core::_Future::SuspendableFuture_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(this1,next)));
            			}
            		}
HXLINE( 103)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Future_Impl__obj,flatMap,return )

::Dynamic Future_Impl__obj::next(::Dynamic this1, ::Dynamic n){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_120_next)
HXDLIN( 120)		return ::tink::core::_Future::Future_Impl__obj::flatMap(this1,n,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,next,return )

::Dynamic Future_Impl__obj::gather(::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_124_gather)
HXDLIN( 124)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,gather,return )

::Dynamic Future_Impl__obj::merge(::Dynamic this1,::Dynamic that, ::Dynamic combine){
            	HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_130_merge)
HXDLIN( 130)		 ::tink::core::FutureStatus _g = ::tink::core::_Future::FutureObject_obj::getStatus(this1);
HXDLIN( 130)		 ::tink::core::FutureStatus _g1 = ::tink::core::_Future::FutureObject_obj::getStatus(that);
HXDLIN( 130)		if ((_g->_hx_getIndex() == 4)) {
HXLINE( 131)			return ::tink::core::_Future::Future_Impl__obj::NEVER;
            		}
            		else {
HXDLIN( 130)			if ((_g1->_hx_getIndex() == 4)) {
HXLINE( 131)				return ::tink::core::_Future::Future_Impl__obj::NEVER;
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_1,::Dynamic,this1,::Dynamic,that, ::Dynamic,combine) HXARGC(1)
            				::Dynamic _hx_run( ::Dynamic yield){
            					HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0,::Dynamic,that,::Dynamic,this1, ::Dynamic,yield, ::Dynamic,combine) HXARGC(1)
            					void _hx_run( ::Dynamic v){
            						HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_135_merge)
HXLINE( 135)						 ::tink::core::FutureStatus _g = ::tink::core::_Future::FutureObject_obj::getStatus(this1);
HXDLIN( 135)						 ::tink::core::FutureStatus _g1 = ::tink::core::_Future::FutureObject_obj::getStatus(that);
HXDLIN( 135)						if ((_g->_hx_getIndex() == 3)) {
HXLINE( 135)							if ((_g1->_hx_getIndex() == 3)) {
HXLINE( 136)								::Dynamic b = _g1->_hx_getObject(0);
HXDLIN( 136)								::Dynamic a = _g->_hx_getObject(0);
HXLINE( 137)								 ::Dynamic yield1 = yield;
HXDLIN( 137)								 ::Dynamic combine1 = combine;
HXDLIN( 137)								 ::Dynamic check = ::tink::core::_Lazy::Lazy_Impl__obj::get(a);
HXDLIN( 137)								yield1(combine1(check,::tink::core::_Lazy::Lazy_Impl__obj::get(b)));
            							}
            						}
            					}
            					HX_END_LOCAL_FUNC1((void))

            					HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_133_merge)
HXLINE( 134)					 ::Dynamic check =  ::Dynamic(new _hx_Closure_0(that,this1,yield,combine));
HXLINE( 141)					::Dynamic this2 = ::tink::core::_Future::FutureObject_obj::handle(this1,check);
HXDLIN( 141)					return  ::tink::core::_Callback::LinkPair_obj::__alloc( HX_CTX ,this2,::tink::core::_Future::FutureObject_obj::handle(that,check));
            				}
            				HX_END_LOCAL_FUNC1(return)

HXLINE( 133)				return  ::tink::core::_Future::SuspendableFuture_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_1(this1,that,combine)));
            			}
            		}
HXLINE( 130)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Future_Impl__obj,merge,return )

::Dynamic Future_Impl__obj::flatten(::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::Dynamic _hx_run(::Dynamic v){
            			HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_150_flatten)
HXDLIN( 150)			return v;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_150_flatten)
HXDLIN( 150)		return ::tink::core::_Future::Future_Impl__obj::flatMap(f, ::Dynamic(new _hx_Closure_0()),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,flatten,return )

::Dynamic Future_Impl__obj::neverToAny(::Dynamic l){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_162_neverToAny)
HXDLIN( 162)		return l;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,neverToAny,return )

::Dynamic Future_Impl__obj::ofAny( ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_165_ofAny)
HXDLIN( 165)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,v));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,ofAny,return )

::Dynamic Future_Impl__obj::asPromise(::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_171_asPromise)
HXDLIN( 171)		return s;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,asPromise,return )

::Dynamic Future_Impl__obj::ofMany(::Array< ::Dynamic> futures, ::Dynamic gather){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_175_ofMany)
HXDLIN( 175)		return ::tink::core::_Future::Future_Impl__obj::inSequence(futures);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,ofMany,return )

::Dynamic Future_Impl__obj::inParallel(::Array< ::Dynamic> futures, ::Dynamic concurrency){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_183_inParallel)
HXDLIN( 183)		return ::tink::core::_Future::Future_Impl__obj::many(futures,concurrency);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,inParallel,return )

::Dynamic Future_Impl__obj::inSequence(::Array< ::Dynamic> futures){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_190_inSequence)
HXDLIN( 190)		return ::tink::core::_Future::Future_Impl__obj::many(futures,1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,inSequence,return )

::Dynamic Future_Impl__obj::many(::Array< ::Dynamic> a, ::Dynamic concurrency){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		::cpp::VirtualArray _hx_run( ::tink::core::Outcome o){
            			HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_193_many)
HXDLIN( 193)			return ( (::cpp::VirtualArray)(::tink::core::OutcomeTools_obj::orNull(o)) );
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_193_many)
HXDLIN( 193)		return ::tink::core::_Future::Future_Impl__obj::processMany(a,concurrency,::tink::core::Outcome_obj::Success_dyn(), ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,many,return )

::Dynamic Future_Impl__obj::processMany(::Array< ::Dynamic> a, ::Dynamic concurrency, ::Dynamic fn, ::Dynamic lift){
            	HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_196_processMany)
HXDLIN( 196)		if ((a->length == 0)) {
HXLINE( 197)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,lift(::tink::core::Outcome_obj::Success(::cpp::VirtualArray_obj::__new(0)))));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_4, ::Dynamic,lift,::Array< ::Dynamic>,a, ::Dynamic,fn, ::Dynamic,concurrency) HXARGC(1)
            			::Dynamic _hx_run( ::Dynamic yield){
            				HX_BEGIN_LOCAL_FUNC_S6(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,lift, ::Dynamic,yield,::cpp::VirtualArray,ret,::Array< int >,index,::Array< int >,pending,::Array< bool >,done) HXARGC(0)
            				bool _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_219_processMany)
HXLINE( 219)					if ((index->__get(0) == ret->get_length())) {
HXLINE( 220)						if ((pending->__get(0) == 0)) {
HXLINE( 221)							{
HXLINE( 221)								 ::Dynamic v = lift(::tink::core::Outcome_obj::Success(ret));
HXDLIN( 221)								done[0] = true;
HXDLIN( 221)								yield(v);
            							}
HXLINE( 222)							return true;
            						}
            						else {
HXLINE( 224)							return false;
            						}
            					}
            					else {
HXLINE( 225)						return false;
            					}
HXLINE( 219)					return false;
            				}
            				HX_END_LOCAL_FUNC0(return)

            				HX_BEGIN_LOCAL_FUNC_S11(::hx::LocalFunc,_hx_Closure_3, ::Dynamic,lift,::Array< ::Dynamic>,a, ::Dynamic,yield,::Array< ::Dynamic>,step,::cpp::VirtualArray,ret,::Array< ::Dynamic>,links,::Array< int >,index, ::Dynamic,fn,::Array< int >,pending, ::Dynamic,fireWhenReady,::Array< bool >,done) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_228_processMany)
HXLINE( 228)					bool this1;
HXDLIN( 228)					if (!(done->__get(0))) {
HXLINE( 228)						this1 = !(( (bool)(fireWhenReady()) ));
            					}
            					else {
HXLINE( 228)						this1 = false;
            					}
HXDLIN( 228)					if (this1) {
HXLINE( 229)						while((index->__get(0) < ret->get_length())){
            							HX_BEGIN_LOCAL_FUNC_S8(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,lift, ::Dynamic,yield,::cpp::VirtualArray,ret,::Array< ::Dynamic>,links, ::Dynamic,fn, ::Dynamic,fireWhenReady,int,index1,::Array< bool >,done) HXARGC(1)
            							void _hx_run( ::Dynamic o){
            								HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_235_processMany)
HXLINE( 235)								 ::tink::core::Outcome _g = fn(o);
HXDLIN( 235)								switch((int)(_g->_hx_getIndex())){
            									case (int)0: {
HXLINE( 236)										 ::Dynamic v = _g->_hx_getObject(0);
HXDLIN( 236)										{
HXLINE( 237)											ret->set(index1,v);
HXLINE( 238)											fireWhenReady();
            										}
            									}
            									break;
            									case (int)1: {
HXLINE( 239)										 ::Dynamic e = _g->_hx_getObject(0);
HXDLIN( 239)										{
HXLINE( 240)											{
HXLINE( 240)												int _g1 = 0;
HXDLIN( 240)												while((_g1 < links->length)){
HXLINE( 240)													::Dynamic l = links->__get(_g1);
HXDLIN( 240)													_g1 = (_g1 + 1);
HXLINE( 241)													if (::hx::IsNotNull( l )) {
HXLINE( 241)														::tink::core::LinkObject_obj::cancel(l);
            													}
            												}
            											}
HXLINE( 242)											{
HXLINE( 242)												 ::Dynamic v = lift(::tink::core::Outcome_obj::Failure(e));
HXDLIN( 242)												done[0] = true;
HXDLIN( 242)												yield(v);
            											}
            										}
            									}
            									break;
            								}
            							}
            							HX_END_LOCAL_FUNC1((void))

HXLINE( 231)							int index1 = index[0]++;
HXLINE( 232)							::Dynamic p = a->__get(index1);
HXLINE( 234)							 ::Dynamic check =  ::Dynamic(new _hx_Closure_1(lift,yield,ret,links,fn,fireWhenReady,index1,done));
HXLINE( 245)							{
HXLINE( 245)								 ::tink::core::FutureStatus _g = ::tink::core::_Future::FutureObject_obj::getStatus(p);
HXDLIN( 245)								if ((_g->_hx_getIndex() == 3)) {
HXLINE( 246)									 ::Dynamic _hx_tmp;
HXDLIN( 246)									{
HXLINE( 246)										_hx_tmp = ::tink::core::_Lazy::Lazy_Impl__obj::get(_g->_hx_getObject(0));
HXDLIN( 246)										 ::Dynamic v = _hx_tmp;
HXDLIN( 246)										{
HXLINE( 247)											check(v);
HXLINE( 248)											if (!(done->__get(0))) {
HXLINE( 248)												continue;
            											}
            										}
            									}
            								}
            								else {
            									HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_2, ::Dynamic,check,::Array< ::Dynamic>,step,::Array< int >,pending,::Array< bool >,done) HXARGC(1)
            									void _hx_run( ::Dynamic o){
            										HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_252_processMany)
HXLINE( 253)										pending[0]--;
HXLINE( 254)										check(o);
HXLINE( 255)										if (!(done->__get(0))) {
HXLINE( 255)											step->__get(0)();
            										}
            									}
            									HX_END_LOCAL_FUNC1((void))

HXLINE( 250)									pending[0]++;
HXLINE( 251)									::Array< ::Dynamic> links1 = links;
HXDLIN( 251)									links1->push(::tink::core::_Future::FutureObject_obj::handle(p, ::Dynamic(new _hx_Closure_2(check,step,pending,done))));
            								}
            							}
HXLINE( 259)							goto _hx_goto_33;
            						}
            						_hx_goto_33:;
            					}
            				}
            				HX_END_LOCAL_FUNC0((void))

            				HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_198_processMany)
HXLINE( 199)				::Array< ::Dynamic> links = ::Array_obj< ::Dynamic>::__new();
HXLINE( 200)				::cpp::VirtualArray _g = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 200)				{
HXLINE( 200)					int _g1 = 0;
HXDLIN( 200)					while((_g1 < a->length)){
HXLINE( 200)						::Dynamic x = a->__get(_g1);
HXDLIN( 200)						_g1 = (_g1 + 1);
HXDLIN( 200)						_g->push(null());
            					}
            				}
HXLINE( 199)				::cpp::VirtualArray ret = _g;
HXDLIN( 199)				::Array< int > index = ::Array_obj< int >::fromData( _hx_array_data_d235b422_42,1);
HXDLIN( 199)				::Array< int > pending = ::Array_obj< int >::fromData( _hx_array_data_d235b422_43,1);
HXDLIN( 199)				::Array< bool > done = ::Array_obj< bool >::fromData( _hx_array_data_d235b422_44,1);
HXDLIN( 199)				 ::Dynamic concurrency1;
HXLINE( 204)				if (::hx::IsNull( concurrency )) {
HXLINE( 199)					concurrency1 = a->length;
            				}
            				else {
HXLINE( 206)					 ::Dynamic v = concurrency;
HXLINE( 207)					if (::hx::IsLess( v,1 )) {
HXLINE( 199)						concurrency1 = 1;
            					}
            					else {
HXLINE( 208)						if (::hx::IsGreater( v,a->length )) {
HXLINE( 199)							concurrency1 = a->length;
            						}
            						else {
HXLINE( 199)							concurrency1 = v;
            						}
            					}
            				}
HXLINE( 217)				 ::Dynamic fireWhenReady =  ::Dynamic(new _hx_Closure_0(lift,yield,ret,index,pending,done));
HXLINE( 227)				::Array< ::Dynamic> step = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXDLIN( 227)				step[0] =  ::Dynamic(new _hx_Closure_3(lift,a,yield,step,ret,links,index,fn,pending,fireWhenReady,done));
HXLINE( 262)				{
HXLINE( 262)					int _g2 = 0;
HXDLIN( 262)					 ::Dynamic _g3 = concurrency1;
HXDLIN( 262)					while(::hx::IsLess( _g2,_g3 )){
HXLINE( 262)						_g2 = (_g2 + 1);
HXDLIN( 262)						int i = (_g2 - 1);
HXLINE( 263)						step->__get(0)();
            					}
            				}
HXLINE( 265)				return ::tink::core::_Callback::CallbackLink_Impl__obj::fromMany(links);
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 198)			::Dynamic this1 =  ::tink::core::_Future::SuspendableFuture_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_4(lift,a,fn,concurrency)));
HXDLIN( 198)			return this1;
            		}
HXLINE( 196)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Future_Impl__obj,processMany,return )

::Dynamic Future_Impl__obj::lazy(::Dynamic l){
            	HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_272_lazy)
HXDLIN( 272)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX ,l);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,lazy,return )

::Dynamic Future_Impl__obj::sync( ::Dynamic v){
            	HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_279_sync)
HXDLIN( 279)		return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,v));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,sync,return )

bool Future_Impl__obj::isFuture( ::Dynamic maybeFuture){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_282_isFuture)
HXDLIN( 282)		return ::Std_obj::isOfType(maybeFuture,::hx::ClassOf< ::tink::core::_Future::FutureObject >());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,isFuture,return )

::Dynamic Future_Impl__obj::async( ::Dynamic init, ::Dynamic __o_lazy){
            		 ::Dynamic lazy = __o_lazy;
            		if (::hx::IsNull(__o_lazy)) lazy = false;
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_286_async)
HXLINE( 287)		::Dynamic ret = ::tink::core::_Future::Future_Impl__obj::irreversible(init);
HXLINE( 288)		if (( (bool)(lazy) )) {
HXLINE( 288)			return ret;
            		}
            		else {
HXLINE( 288)			::tink::core::_Future::FutureObject_obj::eager(ret);
HXDLIN( 288)			return ret;
            		}
HXDLIN( 288)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,async,return )

::Dynamic Future_Impl__obj::irreversible( ::Dynamic init){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,init) HXARGC(1)
            		::Dynamic _hx_run( ::Dynamic yield){
            			HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_297_irreversible)
HXDLIN( 297)			init(yield);
HXDLIN( 297)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_297_irreversible)
HXDLIN( 297)		return  ::tink::core::_Future::SuspendableFuture_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0(init)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_Impl__obj,irreversible,return )

::Dynamic Future_Impl__obj::_hx_or(::Dynamic a,::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_303_or)
HXDLIN( 303)		return ::tink::core::_Future::Future_Impl__obj::first(a,b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,_hx_or,return )

::Dynamic Future_Impl__obj::either(::Dynamic a,::Dynamic b){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_309_either)
HXDLIN( 309)		::Dynamic _hx_tmp = ::tink::core::_Future::Future_Impl__obj::map(a,::haxe::ds::Either_obj::Left_dyn(),null());
HXDLIN( 309)		return ::tink::core::_Future::Future_Impl__obj::first(_hx_tmp,::tink::core::_Future::Future_Impl__obj::map(b,::haxe::ds::Either_obj::Right_dyn(),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,either,return )

::Dynamic Future_Impl__obj::_hx_and(::Dynamic a,::Dynamic b){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		 ::tink::core::MPair _hx_run( ::Dynamic a, ::Dynamic b){
            			HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_315_and)
HXDLIN( 315)			 ::tink::core::MPair this1 =  ::tink::core::MPair_obj::__alloc( HX_CTX ,a,b);
HXDLIN( 315)			return this1;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_315_and)
HXDLIN( 315)		return ::tink::core::_Future::Future_Impl__obj::merge(a,b, ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,_hx_and,return )

::Dynamic Future_Impl__obj::_tryFailingFlatMap(::Dynamic f, ::Dynamic map){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,map) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::Outcome o){
            			HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_318__tryFailingFlatMap)
HXDLIN( 318)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE( 319)					 ::Dynamic d = o->_hx_getObject(0);
HXDLIN( 319)					return map(d);
            				}
            				break;
            				case (int)1: {
HXLINE( 320)					 ::Dynamic f = o->_hx_getObject(0);
HXDLIN( 320)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(f)));
            				}
            				break;
            			}
HXLINE( 318)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_318__tryFailingFlatMap)
HXDLIN( 318)		return ::tink::core::_Future::Future_Impl__obj::flatMap(f, ::Dynamic(new _hx_Closure_0(map)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,_tryFailingFlatMap,return )

::Dynamic Future_Impl__obj::_tryFlatMap(::Dynamic f, ::Dynamic map){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,map) HXARGC(1)
            		::Dynamic _hx_run( ::tink::core::Outcome o){
            			HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_324__tryFlatMap)
HXDLIN( 324)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE( 325)					 ::Dynamic d = o->_hx_getObject(0);
HXDLIN( 325)					return ::tink::core::_Future::Future_Impl__obj::map(map(d),::tink::core::Outcome_obj::Success_dyn(),null());
            				}
            				break;
            				case (int)1: {
HXLINE( 326)					 ::Dynamic f = o->_hx_getObject(0);
HXDLIN( 326)					return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(f)));
            				}
            				break;
            			}
HXLINE( 324)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_324__tryFlatMap)
HXDLIN( 324)		return ::tink::core::_Future::Future_Impl__obj::flatMap(f, ::Dynamic(new _hx_Closure_0(map)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,_tryFlatMap,return )

::Dynamic Future_Impl__obj::_tryFailingMap(::Dynamic f, ::Dynamic map){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,map) HXARGC(1)
            		 ::tink::core::Outcome _hx_run( ::tink::core::Outcome o){
            			HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_330__tryFailingMap)
HXDLIN( 330)			return ::tink::core::OutcomeTools_obj::flatMap(o,::tink::core::_Outcome::OutcomeMapper_Impl__obj::withSameError(map));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_330__tryFailingMap)
HXDLIN( 330)		return ::tink::core::_Future::Future_Impl__obj::map(f, ::Dynamic(new _hx_Closure_0(map)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,_tryFailingMap,return )

::Dynamic Future_Impl__obj::_tryMap(::Dynamic f, ::Dynamic map){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,map) HXARGC(1)
            		 ::tink::core::Outcome _hx_run( ::tink::core::Outcome o){
            			HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_333__tryMap)
HXDLIN( 333)			return ::tink::core::OutcomeTools_obj::map(o,map);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_333__tryMap)
HXDLIN( 333)		return ::tink::core::_Future::Future_Impl__obj::map(f, ::Dynamic(new _hx_Closure_0(map)),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,_tryMap,return )

::Dynamic Future_Impl__obj::_flatMap(::Dynamic f, ::Dynamic map){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_336__flatMap)
HXDLIN( 336)		return ::tink::core::_Future::Future_Impl__obj::flatMap(f,map,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,_flatMap,return )

::Dynamic Future_Impl__obj::_map(::Dynamic f, ::Dynamic map){
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_339__map)
HXDLIN( 339)		return ::tink::core::_Future::Future_Impl__obj::map(f,map,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,_map,return )

 ::tink::core::FutureTrigger Future_Impl__obj::trigger(){
            	HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_346_trigger)
HXDLIN( 346)		return  ::tink::core::FutureTrigger_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Future_Impl__obj,trigger,return )

::Dynamic Future_Impl__obj::delay(int ms,::Dynamic value){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,int,ms,::Dynamic,value) HXARGC(1)
            		void _hx_run( ::Dynamic cb){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Dynamic,value, ::Dynamic,cb) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_350_delay)
HXDLIN( 350)				 ::Dynamic cb1 = cb;
HXDLIN( 350)				cb1(::tink::core::_Lazy::Lazy_Impl__obj::get(value));
            			}
            			HX_END_LOCAL_FUNC0((void))

            			HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_350_delay)
HXDLIN( 350)			::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(value,cb)),ms);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_350_delay)
HXDLIN( 350)		::Dynamic this1 = ::tink::core::_Future::Future_Impl__obj::irreversible( ::Dynamic(new _hx_Closure_1(ms,value)));
HXDLIN( 350)		::tink::core::_Future::FutureObject_obj::eager(this1);
HXDLIN( 350)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Future_Impl__obj,delay,return )


Future_Impl__obj::Future_Impl__obj()
{
}

bool Future_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"or") ) { outValue = _hx_or_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"and") ) { outValue = _hx_and_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"many") ) { outValue = many_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lazy") ) { outValue = lazy_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sync") ) { outValue = sync_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_map") ) { outValue = _map_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"eager") ) { outValue = eager_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"noise") ) { outValue = noise_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"first") ) { outValue = first_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofAny") ) { outValue = ofAny_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"async") ) { outValue = async_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"delay") ) { outValue = delay_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { outValue = handle_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"gather") ) { outValue = gather_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofMany") ) { outValue = ofMany_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"either") ) { outValue = either_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flatMap") ) { outValue = flatMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"flatten") ) { outValue = flatten_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_tryMap") ) { outValue = _tryMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"trigger") ) { outValue = trigger_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isFuture") ) { outValue = isFuture_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_flatMap") ) { outValue = _flatMap_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"asPromise") ) { outValue = asPromise_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_status") ) { outValue = get_status_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"neverToAny") ) { outValue = neverToAny_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inParallel") ) { outValue = inParallel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"inSequence") ) { outValue = inSequence_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"processMany") ) { outValue = processMany_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_tryFlatMap") ) { outValue = _tryFlatMap_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"irreversible") ) { outValue = irreversible_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_tryFailingMap") ) { outValue = _tryFailingMap_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_tryFailingFlatMap") ) { outValue = _tryFailingFlatMap_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Future_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Future_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Future_Impl__obj::NOISE,HX_("NOISE",7a,c7,b0,1d)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Future_Impl__obj::_hx_NULL,HX_("NULL",87,66,cf,33)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Future_Impl__obj::NEVER,HX_("NEVER",6c,76,1e,17)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Future_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Future_Impl__obj::NOISE,"NOISE");
	HX_MARK_MEMBER_NAME(Future_Impl__obj::_hx_NULL,"NULL");
	HX_MARK_MEMBER_NAME(Future_Impl__obj::NEVER,"NEVER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Future_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Future_Impl__obj::NOISE,"NOISE");
	HX_VISIT_MEMBER_NAME(Future_Impl__obj::_hx_NULL,"NULL");
	HX_VISIT_MEMBER_NAME(Future_Impl__obj::NEVER,"NEVER");
};

#endif

::hx::Class Future_Impl__obj::__mClass;

static ::String Future_Impl__obj_sStaticFields[] = {
	HX_("NOISE",7a,c7,b0,1d),
	HX_("NULL",87,66,cf,33),
	HX_("NEVER",6c,76,1e,17),
	HX_("get_status",fb,56,83,f6),
	HX_("_new",61,15,1f,3f),
	HX_("handle",a8,83,fd,b7),
	HX_("eager",b8,c9,e4,67),
	HX_("noise",9a,8f,c2,9f),
	HX_("first",30,78,9d,00),
	HX_("map",9c,0a,53,00),
	HX_("flatMap",63,10,de,e6),
	HX_("next",f3,84,02,49),
	HX_("gather",fb,71,9c,55),
	HX_("merge",b8,a2,c6,05),
	HX_("flatten",c4,ab,fb,e6),
	HX_("neverToAny",05,a2,5e,da),
	HX_("ofAny",15,da,17,2d),
	HX_("asPromise",c9,02,5d,64),
	HX_("ofMany",56,a1,ab,4f),
	HX_("inParallel",cc,af,ee,d9),
	HX_("inSequence",46,23,e5,44),
	HX_("many",9f,3c,56,48),
	HX_("processMany",ae,6e,ed,64),
	HX_("lazy",74,10,ad,47),
	HX_("sync",5b,ba,5f,4c),
	HX_("isFuture",cd,33,b8,cb),
	HX_("async",3c,ff,3d,26),
	HX_("irreversible",1e,f7,a5,0b),
	HX_("or",23,61,00,00),
	HX_("either",45,5d,1a,24),
	HX_("and",d7,fa,49,00),
	HX_("_tryFailingFlatMap",5b,9a,60,80),
	HX_("_tryFlatMap",87,09,d0,a0),
	HX_("_tryFailingMap",94,38,5b,22),
	HX_("_tryMap",c0,a1,c0,c3),
	HX_("_flatMap",e4,69,96,20),
	HX_("_map",9d,4f,1e,3f),
	HX_("trigger",38,55,df,25),
	HX_("delay",83,d7,26,d7),
	::String(null())
};

void Future_Impl__obj::__register()
{
	Future_Impl__obj _hx_dummy;
	Future_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Future.Future_Impl_",22,b4,35,d2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Future_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Future_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Future_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Future_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Future_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Future_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Future_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Future_Impl__obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_30_boot)
HXDLIN(  30)		NOISE =  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,null()));
            	}
{
            	HX_STACKFRAME(&_hx_pos_589b450cd6df12cf_31_boot)
HXDLIN(  31)		_hx_NULL = ::tink::core::_Future::Future_Impl__obj::NOISE;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_589b450cd6df12cf_32_boot)
HXDLIN(  32)		NEVER =  ::tink::core::_Future::NeverFuture_obj::__alloc( HX_CTX );
            	}
}

} // end namespace tink
} // end namespace core
} // end namespace _Future
