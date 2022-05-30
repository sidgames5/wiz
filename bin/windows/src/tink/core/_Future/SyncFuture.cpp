#include <hxcpp.h>

#ifndef INCLUDED_tink_core_FutureStatus
#include <tink/core/FutureStatus.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core__Callback_Callback_Impl_
#include <tink/core/_Callback/Callback_Impl_.h>
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
#ifndef INCLUDED_tink_core__Lazy_LazyObject
#include <tink/core/_Lazy/LazyObject.h>
#endif
#ifndef INCLUDED_tink_core__Lazy_Lazy_Impl_
#include <tink/core/_Lazy/Lazy_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_448922c2a2e83979_385_new,"tink.core._Future.SyncFuture","new",0xec623daf,"tink.core._Future.SyncFuture.new","tink/core/Future.hx",385,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_448922c2a2e83979_382_getStatus,"tink.core._Future.SyncFuture","getStatus",0x659042f7,"tink.core._Future.SyncFuture.getStatus","tink/core/Future.hx",382,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_448922c2a2e83979_387_handle,"tink.core._Future.SyncFuture","handle",0x892911b9,"tink.core._Future.SyncFuture.handle","tink/core/Future.hx",387,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_448922c2a2e83979_393_eager,"tink.core._Future.SyncFuture","eager",0x466468c7,"tink.core._Future.SyncFuture.eager","tink/core/Future.hx",393,0x014a8a08)
namespace tink{
namespace core{
namespace _Future{

void SyncFuture_obj::__construct(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_448922c2a2e83979_385_new)
HXDLIN( 385)		this->value = value;
            	}

Dynamic SyncFuture_obj::__CreateEmpty() { return new SyncFuture_obj; }

void *SyncFuture_obj::_hx_vtable = 0;

Dynamic SyncFuture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SyncFuture_obj > _hx_result = new SyncFuture_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SyncFuture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x03763767;
}

static ::tink::core::_Future::FutureObject_obj _hx_tink_core__Future_SyncFuture__hx_tink_core__Future_FutureObject= {
	(  ::tink::core::FutureStatus (::hx::Object::*)())&::tink::core::_Future::SyncFuture_obj::getStatus,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::tink::core::_Future::SyncFuture_obj::handle,
	( void (::hx::Object::*)())&::tink::core::_Future::SyncFuture_obj::eager,
};

void *SyncFuture_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xb1c7c493: return &_hx_tink_core__Future_SyncFuture__hx_tink_core__Future_FutureObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::tink::core::FutureStatus SyncFuture_obj::getStatus(){
            	HX_STACKFRAME(&_hx_pos_448922c2a2e83979_382_getStatus)
HXDLIN( 382)		return ::tink::core::FutureStatus_obj::Ready(this->value);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SyncFuture_obj,getStatus,return )

::Dynamic SyncFuture_obj::handle( ::Dynamic cb){
            	HX_STACKFRAME(&_hx_pos_448922c2a2e83979_387_handle)
HXLINE( 388)		::tink::core::_Callback::Callback_Impl__obj::invoke(cb,::tink::core::_Lazy::Lazy_Impl__obj::get(this->value));
HXLINE( 389)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SyncFuture_obj,handle,return )

void SyncFuture_obj::eager(){
            	HX_STACKFRAME(&_hx_pos_448922c2a2e83979_393_eager)
HXDLIN( 393)		if (!(::tink::core::_Lazy::Computable_obj::isComputed(this->value))) {
HXLINE( 394)			::tink::core::_Lazy::Lazy_Impl__obj::get(this->value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SyncFuture_obj,eager,(void))


::hx::ObjectPtr< SyncFuture_obj > SyncFuture_obj::__new(::Dynamic value) {
	::hx::ObjectPtr< SyncFuture_obj > __this = new SyncFuture_obj();
	__this->__construct(value);
	return __this;
}

::hx::ObjectPtr< SyncFuture_obj > SyncFuture_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic value) {
	SyncFuture_obj *__this = (SyncFuture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SyncFuture_obj), true, "tink.core._Future.SyncFuture"));
	*(void **)__this = SyncFuture_obj::_hx_vtable;
	__this->__construct(value);
	return __this;
}

SyncFuture_obj::SyncFuture_obj()
{
}

void SyncFuture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SyncFuture);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void SyncFuture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
}

::hx::Val SyncFuture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
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

::hx::Val SyncFuture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SyncFuture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SyncFuture_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(SyncFuture_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SyncFuture_obj_sStaticStorageInfo = 0;
#endif

static ::String SyncFuture_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("getStatus",68,70,52,82),
	HX_("handle",a8,83,fd,b7),
	HX_("eager",b8,c9,e4,67),
	::String(null()) };

::hx::Class SyncFuture_obj::__mClass;

void SyncFuture_obj::__register()
{
	SyncFuture_obj _hx_dummy;
	SyncFuture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Future.SyncFuture",3d,3a,90,e8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SyncFuture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SyncFuture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SyncFuture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SyncFuture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Future
