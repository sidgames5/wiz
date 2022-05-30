#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
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
#ifndef INCLUDED_tink_core__Outcome_OutcomeMapper_Impl_
#include <tink/core/_Outcome/OutcomeMapper_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_24_sure,"tink.core.OutcomeTools","sure",0x05340847,"tink.core.OutcomeTools.sure","tink/core/Outcome.hx",24,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_39_toOption,"tink.core.OutcomeTools","toOption",0xa8e46fc2,"tink.core.OutcomeTools.toOption","tink/core/Outcome.hx",39,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_49_orNull,"tink.core.OutcomeTools","orNull",0x551b8d3c,"tink.core.OutcomeTools.orNull","tink/core/Outcome.hx",49,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_56_orUse,"tink.core.OutcomeTools","orUse",0x38a74b32,"tink.core.OutcomeTools.orUse","tink/core/Outcome.hx",56,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_63_or,"tink.core.OutcomeTools","or",0x586f9415,"tink.core.OutcomeTools.or","tink/core/Outcome.hx",63,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_73_orTry,"tink.core.OutcomeTools","orTry",0x38a68826,"tink.core.OutcomeTools.orTry","tink/core/Outcome.hx",73,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_82_equals,"tink.core.OutcomeTools","equals",0xdbdb8231,"tink.core.OutcomeTools.equals","tink/core/Outcome.hx",82,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_92_map,"tink.core.OutcomeTools","map",0x09306b6a,"tink.core.OutcomeTools.map","tink/core/Outcome.hx",92,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_104_isSuccess,"tink.core.OutcomeTools","isSuccess",0xcbb79247,"tink.core.OutcomeTools.isSuccess","tink/core/Outcome.hx",104,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_115_flatMap,"tink.core.OutcomeTools","flatMap",0x3676f031,"tink.core.OutcomeTools.flatMap","tink/core/Outcome.hx",115,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_123_swap,"tink.core.OutcomeTools","swap",0x05357e05,"tink.core.OutcomeTools.swap","tink/core/Outcome.hx",123,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_131_next,"tink.core.OutcomeTools","next",0x01d9d865,"tink.core.OutcomeTools.next","tink/core/Outcome.hx",131,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_142_attempt,"tink.core.OutcomeTools","attempt",0x8031a8db,"tink.core.OutcomeTools.attempt","tink/core/Outcome.hx",142,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_a4f72dfe848dfefe_147_flatten,"tink.core.OutcomeTools","flatten",0x36948b92,"tink.core.OutcomeTools.flatten","tink/core/Outcome.hx",147,0x825b551f)
namespace tink{
namespace core{

void OutcomeTools_obj::__construct() { }

Dynamic OutcomeTools_obj::__CreateEmpty() { return new OutcomeTools_obj; }

void *OutcomeTools_obj::_hx_vtable = 0;

Dynamic OutcomeTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutcomeTools_obj > _hx_result = new OutcomeTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OutcomeTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2617517e;
}

 ::Dynamic OutcomeTools_obj::sure( ::tink::core::Outcome outcome){
            	HX_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_24_sure)
HXDLIN(  24)		switch((int)(outcome->_hx_getIndex())){
            			case (int)0: {
HXLINE(  25)				 ::Dynamic data = outcome->_hx_getObject(0);
HXLINE(  26)				return data;
            			}
            			break;
            			case (int)1: {
HXLINE(  27)				 ::Dynamic failure = outcome->_hx_getObject(0);
HXLINE(  28)				 ::tink::core::TypedError _g = ::tink::core::TypedError_obj::asError(failure);
HXLINE(  29)				if (::hx::IsNull( _g )) {
HXLINE(  29)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(failure));
            				}
            				else {
HXLINE(  30)					 ::tink::core::TypedError e = _g;
HXDLIN(  30)					return e->throwSelf();
            				}
            			}
            			break;
            		}
HXLINE(  24)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OutcomeTools_obj,sure,return )

 ::haxe::ds::Option OutcomeTools_obj::toOption( ::tink::core::Outcome outcome){
            	HX_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_39_toOption)
HXDLIN(  39)		switch((int)(outcome->_hx_getIndex())){
            			case (int)0: {
HXLINE(  40)				 ::Dynamic data = outcome->_hx_getObject(0);
HXDLIN(  40)				return ::haxe::ds::Option_obj::Some(data);
            			}
            			break;
            			case (int)1: {
HXLINE(  41)				 ::Dynamic _g = outcome->_hx_getObject(0);
HXDLIN(  41)				return ::haxe::ds::Option_obj::None_dyn();
            			}
            			break;
            		}
HXLINE(  39)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OutcomeTools_obj,toOption,return )

 ::Dynamic OutcomeTools_obj::orNull( ::tink::core::Outcome outcome){
            	HX_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_49_orNull)
HXDLIN(  49)		switch((int)(outcome->_hx_getIndex())){
            			case (int)0: {
HXLINE(  50)				 ::Dynamic data = outcome->_hx_getObject(0);
HXDLIN(  50)				return data;
            			}
            			break;
            			case (int)1: {
HXLINE(  51)				 ::Dynamic _g = outcome->_hx_getObject(0);
HXDLIN(  51)				return null();
            			}
            			break;
            		}
HXLINE(  49)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OutcomeTools_obj,orNull,return )

 ::Dynamic OutcomeTools_obj::orUse( ::tink::core::Outcome outcome,::Dynamic fallback){
            	HX_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_56_orUse)
HXDLIN(  56)		return ::tink::core::OutcomeTools_obj::_hx_or(outcome,fallback);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OutcomeTools_obj,orUse,return )

 ::Dynamic OutcomeTools_obj::_hx_or( ::tink::core::Outcome outcome,::Dynamic fallback){
            	HX_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_63_or)
HXDLIN(  63)		switch((int)(outcome->_hx_getIndex())){
            			case (int)0: {
HXLINE(  64)				 ::Dynamic data = outcome->_hx_getObject(0);
HXDLIN(  64)				return data;
            			}
            			break;
            			case (int)1: {
HXLINE(  65)				 ::Dynamic _g = outcome->_hx_getObject(0);
HXDLIN(  65)				return ::tink::core::_Lazy::Lazy_Impl__obj::get(fallback);
            			}
            			break;
            		}
HXLINE(  63)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OutcomeTools_obj,_hx_or,return )

 ::tink::core::Outcome OutcomeTools_obj::orTry( ::tink::core::Outcome outcome,::Dynamic fallback){
            	HX_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_73_orTry)
HXDLIN(  73)		switch((int)(outcome->_hx_getIndex())){
            			case (int)0: {
HXLINE(  74)				 ::Dynamic _g = outcome->_hx_getObject(0);
HXDLIN(  74)				return outcome;
            			}
            			break;
            			case (int)1: {
HXLINE(  75)				 ::Dynamic _g = outcome->_hx_getObject(0);
HXDLIN(  75)				return ::tink::core::_Lazy::Lazy_Impl__obj::get(fallback);
            			}
            			break;
            		}
HXLINE(  73)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OutcomeTools_obj,orTry,return )

bool OutcomeTools_obj::equals( ::tink::core::Outcome outcome, ::Dynamic to){
            	HX_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_82_equals)
HXDLIN(  82)		switch((int)(outcome->_hx_getIndex())){
            			case (int)0: {
HXLINE(  83)				 ::Dynamic data = outcome->_hx_getObject(0);
HXDLIN(  83)				return ::hx::IsEq( data,to );
            			}
            			break;
            			case (int)1: {
HXLINE(  84)				 ::Dynamic _g = outcome->_hx_getObject(0);
HXDLIN(  84)				return false;
            			}
            			break;
            		}
HXLINE(  82)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OutcomeTools_obj,equals,return )

 ::tink::core::Outcome OutcomeTools_obj::map( ::tink::core::Outcome outcome, ::Dynamic transform){
            	HX_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_92_map)
HXDLIN(  92)		switch((int)(outcome->_hx_getIndex())){
            			case (int)0: {
HXLINE(  93)				 ::Dynamic a = outcome->_hx_getObject(0);
HXLINE(  94)				return ::tink::core::Outcome_obj::Success(transform(a));
            			}
            			break;
            			case (int)1: {
HXLINE(  95)				 ::Dynamic f = outcome->_hx_getObject(0);
HXLINE(  96)				return ::tink::core::Outcome_obj::Failure(f);
            			}
            			break;
            		}
HXLINE(  92)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OutcomeTools_obj,map,return )

bool OutcomeTools_obj::isSuccess( ::tink::core::Outcome outcome){
            	HX_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_104_isSuccess)
HXDLIN( 104)		if ((outcome->_hx_getIndex() == 0)) {
HXLINE( 105)			 ::Dynamic _g = outcome->_hx_getObject(0);
HXDLIN( 105)			return true;
            		}
            		else {
HXLINE( 106)			return false;
            		}
HXLINE( 104)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OutcomeTools_obj,isSuccess,return )

 ::tink::core::Outcome OutcomeTools_obj::flatMap( ::tink::core::Outcome o, ::Dynamic mapper){
            	HX_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_115_flatMap)
HXDLIN( 115)		return ::tink::core::_Outcome::OutcomeMapper_Impl__obj::apply(mapper,o);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OutcomeTools_obj,flatMap,return )

 ::tink::core::Outcome OutcomeTools_obj::swap( ::tink::core::Outcome outcome, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_123_swap)
HXDLIN( 123)		switch((int)(outcome->_hx_getIndex())){
            			case (int)0: {
HXLINE( 124)				 ::Dynamic a = outcome->_hx_getObject(0);
HXLINE( 125)				return ::tink::core::Outcome_obj::Success(v);
            			}
            			break;
            			case (int)1: {
HXLINE( 126)				 ::Dynamic f = outcome->_hx_getObject(0);
HXLINE( 127)				return ::tink::core::Outcome_obj::Failure(f);
            			}
            			break;
            		}
HXLINE( 123)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OutcomeTools_obj,swap,return )

::Dynamic OutcomeTools_obj::next( ::tink::core::Outcome outcome, ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_131_next)
HXDLIN( 131)		switch((int)(outcome->_hx_getIndex())){
            			case (int)0: {
HXLINE( 132)				 ::Dynamic v = outcome->_hx_getObject(0);
HXDLIN( 132)				return f(v);
            			}
            			break;
            			case (int)1: {
HXLINE( 133)				 ::tink::core::TypedError e = ( ( ::tink::core::TypedError)(outcome->_hx_getObject(0)) );
HXDLIN( 133)				return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Failure(e)));
            			}
            			break;
            		}
HXLINE( 131)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OutcomeTools_obj,next,return )

 ::tink::core::Outcome OutcomeTools_obj::attempt( ::Dynamic f, ::Dynamic report){
            	HX_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_142_attempt)
HXDLIN( 142)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXDLIN( 142)			return ::tink::core::Outcome_obj::Success(f());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 143)				{
HXLINE( 143)					null();
            				}
HXDLIN( 143)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 144)				return ::tink::core::Outcome_obj::Failure(report(e));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 142)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OutcomeTools_obj,attempt,return )

 ::tink::core::Outcome OutcomeTools_obj::flatten( ::tink::core::Outcome o){
            	HX_STACKFRAME(&_hx_pos_a4f72dfe848dfefe_147_flatten)
HXDLIN( 147)		switch((int)(o->_hx_getIndex())){
            			case (int)0: {
HXLINE( 149)				 ::tink::core::Outcome _g = o->_hx_getObject(0);
HXDLIN( 149)				switch((int)(_g->_hx_getIndex())){
            					case (int)0: {
HXLINE( 148)						 ::Dynamic d = _g->_hx_getObject(0);
HXDLIN( 148)						return ::tink::core::Outcome_obj::Success(d);
            					}
            					break;
            					case (int)1: {
HXLINE( 149)						 ::Dynamic f = _g->_hx_getObject(0);
HXDLIN( 149)						return ::tink::core::Outcome_obj::Failure(f);
            					}
            					break;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 149)				 ::Dynamic f = o->_hx_getObject(0);
HXDLIN( 149)				return ::tink::core::Outcome_obj::Failure(f);
            			}
            			break;
            		}
HXLINE( 147)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OutcomeTools_obj,flatten,return )


OutcomeTools_obj::OutcomeTools_obj()
{
}

bool OutcomeTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"or") ) { outValue = _hx_or_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { outValue = map_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sure") ) { outValue = sure_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"swap") ) { outValue = swap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"next") ) { outValue = next_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"orUse") ) { outValue = orUse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"orTry") ) { outValue = orTry_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"orNull") ) { outValue = orNull_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flatMap") ) { outValue = flatMap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"attempt") ) { outValue = attempt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"flatten") ) { outValue = flatten_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toOption") ) { outValue = toOption_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isSuccess") ) { outValue = isSuccess_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OutcomeTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OutcomeTools_obj_sStaticStorageInfo = 0;
#endif

::hx::Class OutcomeTools_obj::__mClass;

static ::String OutcomeTools_obj_sStaticFields[] = {
	HX_("sure",d5,b4,5c,4c),
	HX_("toOption",50,7b,b9,52),
	HX_("orNull",4a,f9,32,39),
	HX_("orUse",e4,9a,15,35),
	HX_("or",23,61,00,00),
	HX_("orTry",d8,d7,14,35),
	HX_("equals",3f,ee,f2,bf),
	HX_("map",9c,0a,53,00),
	HX_("isSuccess",f9,a2,4c,bc),
	HX_("flatMap",63,10,de,e6),
	HX_("swap",93,2a,5e,4c),
	HX_("next",f3,84,02,49),
	HX_("attempt",0d,c9,98,30),
	HX_("flatten",c4,ab,fb,e6),
	::String(null())
};

void OutcomeTools_obj::__register()
{
	OutcomeTools_obj _hx_dummy;
	OutcomeTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.OutcomeTools",3c,c2,61,dd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OutcomeTools_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OutcomeTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OutcomeTools_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutcomeTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutcomeTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
