#include <hxcpp.h>

#ifndef INCLUDED_tink_core_CallbackList
#include <tink/core/CallbackList.h>
#endif
#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
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
#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif
#ifndef INCLUDED_tink_core_SimpleDisposable
#include <tink/core/SimpleDisposable.h>
#endif
#ifndef INCLUDED_tink_core__Callback_Callback_Impl_
#include <tink/core/_Callback/Callback_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Callback_ListCell
#include <tink/core/_Callback/ListCell.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_057f1a2129988235_398_new,"tink.core.FutureTrigger","new",0xad8473b4,"tink.core.FutureTrigger.new","tink/core/Future.hx",398,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_057f1a2129988235_406_getStatus,"tink.core.FutureTrigger","getStatus",0x032a4abc,"tink.core.FutureTrigger.getStatus","tink/core/Future.hx",406,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_057f1a2129988235_409_handle,"tink.core.FutureTrigger","handle",0x5e1aacd4,"tink.core.FutureTrigger.handle","tink/core/Future.hx",409,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_057f1a2129988235_417_eager,"tink.core.FutureTrigger","eager",0x3d03ea0c,"tink.core.FutureTrigger.eager","tink/core/Future.hx",417,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_057f1a2129988235_420_asFuture,"tink.core.FutureTrigger","asFuture",0x48bf6f01,"tink.core.FutureTrigger.asFuture","tink/core/Future.hx",420,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_057f1a2129988235_426_trigger,"tink.core.FutureTrigger","trigger",0xd946328c,"tink.core.FutureTrigger.trigger","tink/core/Future.hx",426,0x014a8a08)
namespace tink{
namespace core{

void FutureTrigger_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_057f1a2129988235_398_new)
HXLINE( 399)		this->status = ::tink::core::FutureStatus_obj::Awaited_dyn();
HXLINE( 403)		this->list =  ::tink::core::CallbackList_obj::__alloc( HX_CTX ,true);
            	}

Dynamic FutureTrigger_obj::__CreateEmpty() { return new FutureTrigger_obj; }

void *FutureTrigger_obj::_hx_vtable = 0;

Dynamic FutureTrigger_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FutureTrigger_obj > _hx_result = new FutureTrigger_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FutureTrigger_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4165ca24;
}

static ::tink::core::_Future::FutureObject_obj _hx_tink_core_FutureTrigger__hx_tink_core__Future_FutureObject= {
	(  ::tink::core::FutureStatus (::hx::Object::*)())&::tink::core::FutureTrigger_obj::getStatus,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::tink::core::FutureTrigger_obj::handle,
	( void (::hx::Object::*)())&::tink::core::FutureTrigger_obj::eager,
};

void *FutureTrigger_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xb1c7c493: return &_hx_tink_core_FutureTrigger__hx_tink_core__Future_FutureObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::tink::core::FutureStatus FutureTrigger_obj::getStatus(){
            	HX_STACKFRAME(&_hx_pos_057f1a2129988235_406_getStatus)
HXDLIN( 406)		return this->status;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FutureTrigger_obj,getStatus,return )

::Dynamic FutureTrigger_obj::handle( ::Dynamic callback){
            	HX_GC_STACKFRAME(&_hx_pos_057f1a2129988235_409_handle)
HXDLIN( 409)		 ::tink::core::FutureStatus _g = this->status;
HXDLIN( 409)		if ((_g->_hx_getIndex() == 3)) {
HXLINE( 410)			::Dynamic result = _g->_hx_getObject(0);
HXLINE( 411)			::tink::core::_Callback::Callback_Impl__obj::invoke(callback,::tink::core::_Lazy::Lazy_Impl__obj::get(result));
HXLINE( 412)			return null();
            		}
            		else {
HXLINE( 413)			 ::tink::core::FutureStatus v = _g;
HXLINE( 414)			 ::tink::core::CallbackList _this = this->list;
HXDLIN( 414)			if (::hx::IsNull( _this->disposeHandlers )) {
HXLINE( 414)				return null();
            			}
            			else {
HXLINE( 414)				 ::tink::core::_Callback::ListCell node =  ::tink::core::_Callback::ListCell_obj::__alloc( HX_CTX ,callback,_this);
HXDLIN( 414)				_this->cells->push(node);
HXDLIN( 414)				if ((_this->used++ == 0)) {
HXLINE( 414)					 ::Dynamic fn = _this->onfill;
HXDLIN( 414)					if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXLINE( 414)						::tink::core::_Callback::Callback_Impl__obj::depth++;
HXDLIN( 414)						fn();
HXDLIN( 414)						::tink::core::_Callback::Callback_Impl__obj::depth--;
            					}
            					else {
HXLINE( 414)						::tink::core::_Callback::Callback_Impl__obj::defer(fn);
            					}
            				}
HXDLIN( 414)				return node;
            			}
            		}
HXLINE( 409)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FutureTrigger_obj,handle,return )

void FutureTrigger_obj::eager(){
            	HX_STACKFRAME(&_hx_pos_057f1a2129988235_417_eager)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FutureTrigger_obj,eager,(void))

::Dynamic FutureTrigger_obj::asFuture(){
            	HX_STACKFRAME(&_hx_pos_057f1a2129988235_420_asFuture)
HXDLIN( 420)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FutureTrigger_obj,asFuture,return )

bool FutureTrigger_obj::trigger( ::Dynamic result){
            	HX_GC_STACKFRAME(&_hx_pos_057f1a2129988235_426_trigger)
HXDLIN( 426)		 ::tink::core::FutureStatus _g = this->status;
HXDLIN( 426)		if ((_g->_hx_getIndex() == 3)) {
HXLINE( 427)			::Dynamic _g1 = _g->_hx_getObject(0);
HXDLIN( 427)			return false;
            		}
            		else {
HXLINE( 429)			this->status = ::tink::core::FutureStatus_obj::Ready( ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,result));
HXLINE( 430)			this->list->invoke(result);
HXLINE( 431)			return true;
            		}
HXLINE( 426)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FutureTrigger_obj,trigger,return )


::hx::ObjectPtr< FutureTrigger_obj > FutureTrigger_obj::__new() {
	::hx::ObjectPtr< FutureTrigger_obj > __this = new FutureTrigger_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FutureTrigger_obj > FutureTrigger_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FutureTrigger_obj *__this = (FutureTrigger_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FutureTrigger_obj), true, "tink.core.FutureTrigger"));
	*(void **)__this = FutureTrigger_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FutureTrigger_obj::FutureTrigger_obj()
{
}

void FutureTrigger_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FutureTrigger);
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void FutureTrigger_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(list,"list");
}

::hx::Val FutureTrigger_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"eager") ) { return ::hx::Val( eager_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return ::hx::Val( status ); }
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"trigger") ) { return ::hx::Val( trigger_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"asFuture") ) { return ::hx::Val( asFuture_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getStatus") ) { return ::hx::Val( getStatus_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FutureTrigger_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast<  ::tink::core::CallbackList >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast<  ::tink::core::FutureStatus >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FutureTrigger_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("status",32,e7,fb,05));
	outFields->push(HX_("list",5e,1c,b3,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FutureTrigger_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::tink::core::FutureStatus */ ,(int)offsetof(FutureTrigger_obj,status),HX_("status",32,e7,fb,05)},
	{::hx::fsObject /*  ::tink::core::CallbackList */ ,(int)offsetof(FutureTrigger_obj,list),HX_("list",5e,1c,b3,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FutureTrigger_obj_sStaticStorageInfo = 0;
#endif

static ::String FutureTrigger_obj_sMemberFields[] = {
	HX_("status",32,e7,fb,05),
	HX_("list",5e,1c,b3,47),
	HX_("getStatus",68,70,52,82),
	HX_("handle",a8,83,fd,b7),
	HX_("eager",b8,c9,e4,67),
	HX_("asFuture",d5,a2,24,02),
	HX_("trigger",38,55,df,25),
	::String(null()) };

::hx::Class FutureTrigger_obj::__mClass;

void FutureTrigger_obj::__register()
{
	FutureTrigger_obj _hx_dummy;
	FutureTrigger_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.FutureTrigger",c2,c9,f3,5a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FutureTrigger_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FutureTrigger_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FutureTrigger_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FutureTrigger_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
