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
#ifndef INCLUDED_tink_core__Future_SuspendableFuture
#include <tink/core/_Future/SuspendableFuture.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_abe9d8f11a71fd1d_459_new,"tink.core._Future.SuspendableFuture","new",0x294a7a8c,"tink.core._Future.SuspendableFuture.new","tink/core/Future.hx",459,0x014a8a08)
HX_DEFINE_STACK_FRAME(_hx_pos_abe9d8f11a71fd1d_464_new,"tink.core._Future.SuspendableFuture","new",0x294a7a8c,"tink.core._Future.SuspendableFuture.new","tink/core/Future.hx",464,0x014a8a08)
HX_DEFINE_STACK_FRAME(_hx_pos_abe9d8f11a71fd1d_446_new,"tink.core._Future.SuspendableFuture","new",0x294a7a8c,"tink.core._Future.SuspendableFuture.new","tink/core/Future.hx",446,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_abe9d8f11a71fd1d_453_getStatus,"tink.core._Future.SuspendableFuture","getStatus",0x2e550394,"tink.core._Future.SuspendableFuture.getStatus","tink/core/Future.hx",453,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_abe9d8f11a71fd1d_471_trigger,"tink.core._Future.SuspendableFuture","trigger",0x76148564,"tink.core._Future.SuspendableFuture.trigger","tink/core/Future.hx",471,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_abe9d8f11a71fd1d_483_handle,"tink.core._Future.SuspendableFuture","handle",0x88227cfc,"tink.core._Future.SuspendableFuture.handle","tink/core/Future.hx",483,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_abe9d8f11a71fd1d_492_arm,"tink.core._Future.SuspendableFuture","arm",0x2940a888,"tink.core._Future.SuspendableFuture.arm","tink/core/Future.hx",492,0x014a8a08)
HX_LOCAL_STACK_FRAME(_hx_pos_abe9d8f11a71fd1d_495_eager,"tink.core._Future.SuspendableFuture","eager",0xbb7b56e4,"tink.core._Future.SuspendableFuture.eager","tink/core/Future.hx",495,0x014a8a08)
namespace tink{
namespace core{
namespace _Future{

void SuspendableFuture_obj::__construct( ::Dynamic wakeup){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tink::core::_Future::SuspendableFuture,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_abe9d8f11a71fd1d_459_new)
HXLINE( 459)			if (::hx::IsPointerEq( _gthis->status,::tink::core::FutureStatus_obj::Awaited_dyn() )) {
HXLINE( 460)				_gthis->status = ::tink::core::FutureStatus_obj::Suspended_dyn();
HXLINE( 461)				{
HXLINE( 461)					::Dynamic this1 = _gthis->link;
HXDLIN( 461)					if (::hx::IsNotNull( this1 )) {
HXLINE( 461)						::tink::core::LinkObject_obj::cancel(this1);
            					}
            				}
HXLINE( 462)				_gthis->link = null();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::tink::core::_Future::SuspendableFuture,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_abe9d8f11a71fd1d_464_new)
HXLINE( 464)			if (::hx::IsPointerEq( _gthis->status,::tink::core::FutureStatus_obj::Suspended_dyn() )) {
HXLINE( 465)				_gthis->status = ::tink::core::FutureStatus_obj::Awaited_dyn();
HXLINE( 466)				_gthis->arm();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_abe9d8f11a71fd1d_446_new)
HXLINE( 448)		this->status = ::tink::core::FutureStatus_obj::Suspended_dyn();
HXLINE( 455)		 ::tink::core::_Future::SuspendableFuture _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 456)		this->wakeup = wakeup;
HXLINE( 457)		this->callbacks =  ::tink::core::CallbackList_obj::__alloc( HX_CTX ,true);
HXLINE( 459)		this->callbacks->ondrain =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 464)		this->callbacks->onfill =  ::Dynamic(new _hx_Closure_1(_gthis));
            	}

Dynamic SuspendableFuture_obj::__CreateEmpty() { return new SuspendableFuture_obj; }

void *SuspendableFuture_obj::_hx_vtable = 0;

Dynamic SuspendableFuture_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SuspendableFuture_obj > _hx_result = new SuspendableFuture_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SuspendableFuture_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1fbfb7e8;
}

static ::tink::core::_Future::FutureObject_obj _hx_tink_core__Future_SuspendableFuture__hx_tink_core__Future_FutureObject= {
	(  ::tink::core::FutureStatus (::hx::Object::*)())&::tink::core::_Future::SuspendableFuture_obj::getStatus,
	( ::Dynamic (::hx::Object::*)( ::Dynamic))&::tink::core::_Future::SuspendableFuture_obj::handle,
	( void (::hx::Object::*)())&::tink::core::_Future::SuspendableFuture_obj::eager,
};

void *SuspendableFuture_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xb1c7c493: return &_hx_tink_core__Future_SuspendableFuture__hx_tink_core__Future_FutureObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::tink::core::FutureStatus SuspendableFuture_obj::getStatus(){
            	HX_STACKFRAME(&_hx_pos_abe9d8f11a71fd1d_453_getStatus)
HXDLIN( 453)		return this->status;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuspendableFuture_obj,getStatus,return )

void SuspendableFuture_obj::trigger( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_abe9d8f11a71fd1d_471_trigger)
HXDLIN( 471)		 ::tink::core::FutureStatus _g = this->status;
HXDLIN( 471)		if ((_g->_hx_getIndex() == 3)) {
HXLINE( 472)			::Dynamic _g1 = _g->_hx_getObject(0);
            		}
            		else {
HXLINE( 474)			this->status = ::tink::core::FutureStatus_obj::Ready( ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,value));
HXLINE( 475)			::Dynamic link = this->link;
HXLINE( 476)			this->link = null();
HXLINE( 477)			this->wakeup = null();
HXLINE( 478)			this->callbacks->invoke(value);
HXLINE( 479)			if (::hx::IsNotNull( link )) {
HXLINE( 479)				::tink::core::LinkObject_obj::cancel(link);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuspendableFuture_obj,trigger,(void))

::Dynamic SuspendableFuture_obj::handle( ::Dynamic callback){
            	HX_GC_STACKFRAME(&_hx_pos_abe9d8f11a71fd1d_483_handle)
HXDLIN( 483)		 ::tink::core::FutureStatus _g = this->status;
HXDLIN( 483)		if ((_g->_hx_getIndex() == 3)) {
HXLINE( 484)			::Dynamic result = _g->_hx_getObject(0);
HXLINE( 485)			::tink::core::_Callback::Callback_Impl__obj::invoke(callback,::tink::core::_Lazy::Lazy_Impl__obj::get(result));
HXLINE( 486)			return null();
            		}
            		else {
HXLINE( 488)			 ::tink::core::CallbackList _this = this->callbacks;
HXDLIN( 488)			if (::hx::IsNull( _this->disposeHandlers )) {
HXLINE( 488)				return null();
            			}
            			else {
HXLINE( 488)				 ::tink::core::_Callback::ListCell node =  ::tink::core::_Callback::ListCell_obj::__alloc( HX_CTX ,callback,_this);
HXDLIN( 488)				_this->cells->push(node);
HXDLIN( 488)				if ((_this->used++ == 0)) {
HXLINE( 488)					 ::Dynamic fn = _this->onfill;
HXDLIN( 488)					if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXLINE( 488)						::tink::core::_Callback::Callback_Impl__obj::depth++;
HXDLIN( 488)						fn();
HXDLIN( 488)						::tink::core::_Callback::Callback_Impl__obj::depth--;
            					}
            					else {
HXLINE( 488)						::tink::core::_Callback::Callback_Impl__obj::defer(fn);
            					}
            				}
HXDLIN( 488)				return node;
            			}
            		}
HXLINE( 483)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SuspendableFuture_obj,handle,return )

void SuspendableFuture_obj::arm(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::tink::core::_Future::SuspendableFuture,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic x){
            			HX_STACKFRAME(&_hx_pos_abe9d8f11a71fd1d_492_arm)
HXDLIN( 492)			_gthis->trigger(x);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_abe9d8f11a71fd1d_492_arm)
HXDLIN( 492)		 ::tink::core::_Future::SuspendableFuture _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 492)		this->link = this->wakeup( ::Dynamic(new _hx_Closure_0(_gthis)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuspendableFuture_obj,arm,(void))

void SuspendableFuture_obj::eager(){
            	HX_STACKFRAME(&_hx_pos_abe9d8f11a71fd1d_495_eager)
HXDLIN( 495)		switch((int)(this->status->_hx_getIndex())){
            			case (int)0: {
HXLINE( 497)				this->status = ::tink::core::FutureStatus_obj::EagerlyAwaited_dyn();
HXLINE( 498)				this->arm();
            			}
            			break;
            			case (int)1: {
HXLINE( 500)				this->status = ::tink::core::FutureStatus_obj::EagerlyAwaited_dyn();
            			}
            			break;
            			default:{
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(SuspendableFuture_obj,eager,(void))


::hx::ObjectPtr< SuspendableFuture_obj > SuspendableFuture_obj::__new( ::Dynamic wakeup) {
	::hx::ObjectPtr< SuspendableFuture_obj > __this = new SuspendableFuture_obj();
	__this->__construct(wakeup);
	return __this;
}

::hx::ObjectPtr< SuspendableFuture_obj > SuspendableFuture_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic wakeup) {
	SuspendableFuture_obj *__this = (SuspendableFuture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SuspendableFuture_obj), true, "tink.core._Future.SuspendableFuture"));
	*(void **)__this = SuspendableFuture_obj::_hx_vtable;
	__this->__construct(wakeup);
	return __this;
}

SuspendableFuture_obj::SuspendableFuture_obj()
{
}

void SuspendableFuture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SuspendableFuture);
	HX_MARK_MEMBER_NAME(callbacks,"callbacks");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(link,"link");
	HX_MARK_MEMBER_NAME(wakeup,"wakeup");
	HX_MARK_END_CLASS();
}

void SuspendableFuture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callbacks,"callbacks");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(link,"link");
	HX_VISIT_MEMBER_NAME(wakeup,"wakeup");
}

::hx::Val SuspendableFuture_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"arm") ) { return ::hx::Val( arm_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"link") ) { return ::hx::Val( link ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"eager") ) { return ::hx::Val( eager_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return ::hx::Val( status ); }
		if (HX_FIELD_EQ(inName,"wakeup") ) { return ::hx::Val( wakeup ); }
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"trigger") ) { return ::hx::Val( trigger_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callbacks") ) { return ::hx::Val( callbacks ); }
		if (HX_FIELD_EQ(inName,"getStatus") ) { return ::hx::Val( getStatus_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SuspendableFuture_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"link") ) { link=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast<  ::tink::core::FutureStatus >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wakeup") ) { wakeup=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"callbacks") ) { callbacks=inValue.Cast<  ::tink::core::CallbackList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SuspendableFuture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("callbacks",0e,f3,bf,a6));
	outFields->push(HX_("status",32,e7,fb,05));
	outFields->push(HX_("link",fa,17,b3,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SuspendableFuture_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::tink::core::CallbackList */ ,(int)offsetof(SuspendableFuture_obj,callbacks),HX_("callbacks",0e,f3,bf,a6)},
	{::hx::fsObject /*  ::tink::core::FutureStatus */ ,(int)offsetof(SuspendableFuture_obj,status),HX_("status",32,e7,fb,05)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(SuspendableFuture_obj,link),HX_("link",fa,17,b3,47)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SuspendableFuture_obj,wakeup),HX_("wakeup",7f,13,5d,b5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SuspendableFuture_obj_sStaticStorageInfo = 0;
#endif

static ::String SuspendableFuture_obj_sMemberFields[] = {
	HX_("callbacks",0e,f3,bf,a6),
	HX_("status",32,e7,fb,05),
	HX_("link",fa,17,b3,47),
	HX_("wakeup",7f,13,5d,b5),
	HX_("getStatus",68,70,52,82),
	HX_("trigger",38,55,df,25),
	HX_("handle",a8,83,fd,b7),
	HX_("arm",5c,fe,49,00),
	HX_("eager",b8,c9,e4,67),
	::String(null()) };

::hx::Class SuspendableFuture_obj::__mClass;

void SuspendableFuture_obj::__register()
{
	SuspendableFuture_obj _hx_dummy;
	SuspendableFuture_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Future.SuspendableFuture",9a,84,c7,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SuspendableFuture_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SuspendableFuture_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SuspendableFuture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SuspendableFuture_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Future
