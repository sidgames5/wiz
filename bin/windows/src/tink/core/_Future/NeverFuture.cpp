#include <hxcpp.h>

#ifndef INCLUDED_tink_core_FutureStatus
#include <tink/core/FutureStatus.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_NeverFuture
#include <tink/core/_Future/NeverFuture.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eaa572dec62476ff_370_new,"tink.core._Future.NeverFuture","new",0x1f165ec2,"tink.core._Future.NeverFuture.new","tink/core/Future.hx",370,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_eaa572dec62476ff_372_getStatus,"tink.core._Future.NeverFuture","getStatus",0xf1aaf44a,"tink.core._Future.NeverFuture.getStatus","tink/core/Future.hx",372,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_eaa572dec62476ff_373_handle,"tink.core._Future.NeverFuture","handle",0xdb8e9e86,"tink.core._Future.NeverFuture.handle","tink/core/Future.hx",373,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_eaa572dec62476ff_374_eager,"tink.core._Future.NeverFuture","eager",0xa731349a,"tink.core._Future.NeverFuture.eager","tink/core/Future.hx",374,0x014a8a08)
namespace tink{
namespace core{
namespace _Future{

void NeverFuture_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_eaa572dec62476ff_370_new)
            	}

Dynamic NeverFuture_obj::__CreateEmpty() { return new NeverFuture_obj; }

void *NeverFuture_obj::_hx_vtable = 0;

Dynamic NeverFuture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NeverFuture_obj > _hx_result = new NeverFuture_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NeverFuture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10733a9e;
}

static ::tink::core::_Future::FutureObject_obj _hx_tink_core__Future_NeverFuture__hx_tink_core__Future_FutureObject= {
	(  ::tink::core::FutureStatus (::hx::Object::*)())&::tink::core::_Future::NeverFuture_obj::getStatus,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::tink::core::_Future::NeverFuture_obj::handle,
	( void (::hx::Object::*)())&::tink::core::_Future::NeverFuture_obj::eager,
};

void *NeverFuture_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xb1c7c493: return &_hx_tink_core__Future_NeverFuture__hx_tink_core__Future_FutureObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::tink::core::FutureStatus NeverFuture_obj::getStatus(){
            	HX_STACKFRAME(&_hx_pos_eaa572dec62476ff_372_getStatus)
HXDLIN( 372)		return ::tink::core::FutureStatus_obj::NeverEver_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NeverFuture_obj,getStatus,return )

::Dynamic NeverFuture_obj::handle( ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_eaa572dec62476ff_373_handle)
HXDLIN( 373)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(NeverFuture_obj,handle,return )

void NeverFuture_obj::eager(){
            	HX_STACKFRAME(&_hx_pos_eaa572dec62476ff_374_eager)
            	}


HX_DEFINE_DYNAMIC_FUNC0(NeverFuture_obj,eager,(void))


::hx::ObjectPtr< NeverFuture_obj > NeverFuture_obj::__new() {
	::hx::ObjectPtr< NeverFuture_obj > __this = new NeverFuture_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NeverFuture_obj > NeverFuture_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NeverFuture_obj *__this = (NeverFuture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NeverFuture_obj), false, "tink.core._Future.NeverFuture"));
	*(void **)__this = NeverFuture_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NeverFuture_obj::NeverFuture_obj()
{
}

::hx::Val NeverFuture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"eager") ) { return ::hx::Val( eager_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getStatus") ) { return ::hx::Val( getStatus_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NeverFuture_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NeverFuture_obj_sStaticStorageInfo = 0;
#endif

static ::String NeverFuture_obj_sMemberFields[] = {
	HX_("getStatus",68,70,52,82),
	HX_("handle",a8,83,fd,b7),
	HX_("eager",b8,c9,e4,67),
	::String(null()) };

::hx::Class NeverFuture_obj::__mClass;

void NeverFuture_obj::__register()
{
	NeverFuture_obj _hx_dummy;
	NeverFuture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Future.NeverFuture",d0,95,13,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NeverFuture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NeverFuture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NeverFuture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NeverFuture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Future
