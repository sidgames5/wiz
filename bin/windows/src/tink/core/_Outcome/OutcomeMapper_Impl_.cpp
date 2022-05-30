#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Either
#include <haxe/ds/Either.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core__Outcome_OutcomeMapper_Impl_
#include <tink/core/_Outcome/OutcomeMapper_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_13ed7cb4e28833f6_154__new,"tink.core._Outcome.OutcomeMapper_Impl_","_new",0x3fdda404,"tink.core._Outcome.OutcomeMapper_Impl_._new","tink/core/Outcome.hx",154,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_13ed7cb4e28833f6_156_apply,"tink.core._Outcome.OutcomeMapper_Impl_","apply",0xca39c56b,"tink.core._Outcome.OutcomeMapper_Impl_.apply","tink/core/Outcome.hx",156,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_13ed7cb4e28833f6_160_withSameError,"tink.core._Outcome.OutcomeMapper_Impl_","withSameError",0xc9da2499,"tink.core._Outcome.OutcomeMapper_Impl_.withSameError","tink/core/Outcome.hx",160,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_13ed7cb4e28833f6_159_withSameError,"tink.core._Outcome.OutcomeMapper_Impl_","withSameError",0xc9da2499,"tink.core._Outcome.OutcomeMapper_Impl_.withSameError","tink/core/Outcome.hx",159,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_13ed7cb4e28833f6_169_withEitherError,"tink.core._Outcome.OutcomeMapper_Impl_","withEitherError",0x421d161a,"tink.core._Outcome.OutcomeMapper_Impl_.withEitherError","tink/core/Outcome.hx",169,0x825b551f)
HX_LOCAL_STACK_FRAME(_hx_pos_13ed7cb4e28833f6_168_withEitherError,"tink.core._Outcome.OutcomeMapper_Impl_","withEitherError",0x421d161a,"tink.core._Outcome.OutcomeMapper_Impl_.withEitherError","tink/core/Outcome.hx",168,0x825b551f)
namespace tink{
namespace core{
namespace _Outcome{

void OutcomeMapper_Impl__obj::__construct() { }

Dynamic OutcomeMapper_Impl__obj::__CreateEmpty() { return new OutcomeMapper_Impl__obj; }

void *OutcomeMapper_Impl__obj::_hx_vtable = 0;

Dynamic OutcomeMapper_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OutcomeMapper_Impl__obj > _hx_result = new OutcomeMapper_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OutcomeMapper_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3602302f;
}

 ::Dynamic OutcomeMapper_Impl__obj::_new( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_13ed7cb4e28833f6_154__new)
HXDLIN( 154)		 ::Dynamic this1 =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("f",66,00,00,00),f));
HXDLIN( 154)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OutcomeMapper_Impl__obj,_new,return )

 ::tink::core::Outcome OutcomeMapper_Impl__obj::apply( ::Dynamic this1, ::tink::core::Outcome o){
            	HX_STACKFRAME(&_hx_pos_13ed7cb4e28833f6_156_apply)
HXDLIN( 156)		return this1->__Field(HX_("f",66,00,00,00),::hx::paccDynamic)(o);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OutcomeMapper_Impl__obj,apply,return )

 ::Dynamic OutcomeMapper_Impl__obj::withSameError( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		 ::tink::core::Outcome _hx_run( ::tink::core::Outcome o){
            			HX_STACKFRAME(&_hx_pos_13ed7cb4e28833f6_160_withSameError)
HXLINE( 160)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE( 161)					 ::Dynamic d = o->_hx_getObject(0);
HXDLIN( 161)					return f(d);
            				}
            				break;
            				case (int)1: {
HXLINE( 162)					 ::Dynamic f = o->_hx_getObject(0);
HXDLIN( 162)					return ::tink::core::Outcome_obj::Failure(f);
            				}
            				break;
            			}
HXLINE( 160)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_13ed7cb4e28833f6_159_withSameError)
HXDLIN( 159)		return ::tink::core::_Outcome::OutcomeMapper_Impl__obj::_new( ::Dynamic(new _hx_Closure_0(f)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OutcomeMapper_Impl__obj,withSameError,return )

 ::Dynamic OutcomeMapper_Impl__obj::withEitherError( ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		 ::tink::core::Outcome _hx_run( ::tink::core::Outcome o){
            			HX_STACKFRAME(&_hx_pos_13ed7cb4e28833f6_169_withEitherError)
HXLINE( 169)			switch((int)(o->_hx_getIndex())){
            				case (int)0: {
HXLINE( 170)					 ::Dynamic d = o->_hx_getObject(0);
HXLINE( 171)					 ::tink::core::Outcome _g = f(d);
HXDLIN( 171)					switch((int)(_g->_hx_getIndex())){
            						case (int)0: {
HXLINE( 172)							 ::Dynamic d = _g->_hx_getObject(0);
HXDLIN( 172)							return ::tink::core::Outcome_obj::Success(d);
            						}
            						break;
            						case (int)1: {
HXLINE( 173)							 ::Dynamic f = _g->_hx_getObject(0);
HXDLIN( 173)							return ::tink::core::Outcome_obj::Failure(::haxe::ds::Either_obj::Right(f));
            						}
            						break;
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 175)					 ::Dynamic f = o->_hx_getObject(0);
HXDLIN( 175)					return ::tink::core::Outcome_obj::Failure(::haxe::ds::Either_obj::Left(f));
            				}
            				break;
            			}
HXLINE( 169)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_13ed7cb4e28833f6_168_withEitherError)
HXDLIN( 168)		return ::tink::core::_Outcome::OutcomeMapper_Impl__obj::_new( ::Dynamic(new _hx_Closure_0(f)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OutcomeMapper_Impl__obj,withEitherError,return )


OutcomeMapper_Impl__obj::OutcomeMapper_Impl__obj()
{
}

bool OutcomeMapper_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { outValue = apply_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"withSameError") ) { outValue = withSameError_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"withEitherError") ) { outValue = withEitherError_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OutcomeMapper_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OutcomeMapper_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class OutcomeMapper_Impl__obj::__mClass;

static ::String OutcomeMapper_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("apply",6e,85,3b,24),
	HX_("withSameError",9c,1f,70,14),
	HX_("withEitherError",dd,17,6a,da),
	::String(null())
};

void OutcomeMapper_Impl__obj::__register()
{
	OutcomeMapper_Impl__obj _hx_dummy;
	OutcomeMapper_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Outcome.OutcomeMapper_Impl_",ab,54,46,b7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OutcomeMapper_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OutcomeMapper_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OutcomeMapper_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OutcomeMapper_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OutcomeMapper_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Outcome
