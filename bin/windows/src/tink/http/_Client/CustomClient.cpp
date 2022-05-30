#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
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
#ifndef INCLUDED_tink_core__Promise_Promise_Impl_
#include <tink/core/_Promise/Promise_Impl_.h>
#endif
#ifndef INCLUDED_tink_http_ClientObject
#include <tink/http/ClientObject.h>
#endif
#ifndef INCLUDED_tink_http_IncomingResponse
#include <tink/http/IncomingResponse.h>
#endif
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
#ifndef INCLUDED_tink_http_OutgoingRequest
#include <tink/http/OutgoingRequest.h>
#endif
#ifndef INCLUDED_tink_http__Client_CustomClient
#include <tink/http/_Client/CustomClient.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_983447f51cb5207c_49_new,"tink.http._Client.CustomClient","new",0x65c1cdfc,"tink.http._Client.CustomClient.new","tink/http/Client.hx",49,0x4a10d869)
HX_LOCAL_STACK_FRAME(_hx_pos_983447f51cb5207c_56_pipe,"tink.http._Client.CustomClient","pipe",0xa527df12,"tink.http._Client.CustomClient.pipe","tink/http/Client.hx",56,0x4a10d869)
HX_LOCAL_STACK_FRAME(_hx_pos_983447f51cb5207c_59_pipe,"tink.http._Client.CustomClient","pipe",0xa527df12,"tink.http._Client.CustomClient.pipe","tink/http/Client.hx",59,0x4a10d869)
HX_LOCAL_STACK_FRAME(_hx_pos_983447f51cb5207c_68_request,"tink.http._Client.CustomClient","request",0x97b7daeb,"tink.http._Client.CustomClient.request","tink/http/Client.hx",68,0x4a10d869)
HX_LOCAL_STACK_FRAME(_hx_pos_983447f51cb5207c_67_request,"tink.http._Client.CustomClient","request",0x97b7daeb,"tink.http._Client.CustomClient.request","tink/http/Client.hx",67,0x4a10d869)
HX_LOCAL_STACK_FRAME(_hx_pos_983447f51cb5207c_64_request,"tink.http._Client.CustomClient","request",0x97b7daeb,"tink.http._Client.CustomClient.request","tink/http/Client.hx",64,0x4a10d869)
HX_LOCAL_STACK_FRAME(_hx_pos_983447f51cb5207c_72_concat,"tink.http._Client.CustomClient","concat",0x669b74f8,"tink.http._Client.CustomClient.concat","tink/http/Client.hx",72,0x4a10d869)
HX_LOCAL_STACK_FRAME(_hx_pos_983447f51cb5207c_78_create,"tink.http._Client.CustomClient","create",0x1adad2e0,"tink.http._Client.CustomClient.create","tink/http/Client.hx",78,0x4a10d869)
namespace tink{
namespace http{
namespace _Client{

void CustomClient_obj::__construct(::Array< ::Dynamic> preprocessors,::Array< ::Dynamic> postprocessors,::Dynamic real){
            	HX_STACKFRAME(&_hx_pos_983447f51cb5207c_49_new)
HXLINE(  50)		this->preprocessors = preprocessors;
HXLINE(  51)		this->postprocessors = postprocessors;
HXLINE(  52)		this->real = real;
            	}

Dynamic CustomClient_obj::__CreateEmpty() { return new CustomClient_obj; }

void *CustomClient_obj::_hx_vtable = 0;

Dynamic CustomClient_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CustomClient_obj > _hx_result = new CustomClient_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool CustomClient_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x16257e84;
}

static ::tink::http::ClientObject_obj _hx_tink_http__Client_CustomClient__hx_tink_http_ClientObject= {
	( ::Dynamic (::hx::Object::*)( ::tink::http::OutgoingRequest))&::tink::http::_Client::CustomClient_obj::request,
};

void *CustomClient_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x9c46f484: return &_hx_tink_http__Client_CustomClient__hx_tink_http_ClientObject;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic CustomClient_obj::pipe( ::Dynamic value,::Array< ::Dynamic> transforms, ::Dynamic __o_index){
            		 ::Dynamic index = __o_index;
            		if (::hx::IsNull(__o_index)) index = 0;
            	HX_GC_STACKFRAME(&_hx_pos_983447f51cb5207c_56_pipe)
HXLINE(  57)		bool _hx_tmp;
HXDLIN(  57)		if (::hx::IsNotNull( transforms )) {
HXLINE(  57)			_hx_tmp = ::hx::IsLess( index,transforms->length );
            		}
            		else {
HXLINE(  57)			_hx_tmp = false;
            		}
HXDLIN(  57)		if (_hx_tmp) {
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,transforms1, ::Dynamic,index1, ::Dynamic,_g) HXARGC(1)
            			::Dynamic _hx_run( ::Dynamic value){
            				HX_STACKFRAME(&_hx_pos_983447f51cb5207c_59_pipe)
HXLINE(  59)				return _g(value,transforms1,index1);
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  59)			 ::Dynamic _g = this->pipe_dyn();
HXDLIN(  59)			::Array< ::Dynamic> transforms1 = transforms;
HXDLIN(  59)			 ::Dynamic index1 = (index + 1);
HXDLIN(  59)			 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(transforms1,index1,_g));
HXLINE(  58)			return ::tink::core::_Promise::Promise_Impl__obj::next(transforms->__get(( (int)(index) ))(value),_hx_tmp,null());
            		}
            		else {
HXLINE(  61)			return  ::tink::core::_Future::SyncFuture_obj::__alloc( HX_CTX , ::tink::core::_Lazy::LazyConst_obj::__alloc( HX_CTX ,::tink::core::Outcome_obj::Success(value)));
            		}
HXLINE(  57)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(CustomClient_obj,pipe,return )

::Dynamic CustomClient_obj::request( ::tink::http::OutgoingRequest req){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::tink::http::_Client::CustomClient,_gthis) HXARGC(1)
            		::Dynamic _hx_run( ::tink::http::OutgoingRequest req){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,transforms, ::Dynamic,_g) HXARGC(1)
            			::Dynamic _hx_run( ::tink::http::IncomingResponse value){
            				HX_STACKFRAME(&_hx_pos_983447f51cb5207c_68_request)
HXLINE(  68)				return _g(value,transforms,null());
            			}
            			HX_END_LOCAL_FUNC1(return)

            			HX_STACKFRAME(&_hx_pos_983447f51cb5207c_67_request)
HXLINE(  67)			::Dynamic _hx_tmp = ::tink::http::ClientObject_obj::request(_gthis->real,req);
HXLINE(  68)			 ::Dynamic _g = _gthis->pipe_dyn();
HXDLIN(  68)			::Array< ::Dynamic> transforms;
HXDLIN(  68)			if (::hx::IsNull( _gthis->postprocessors )) {
HXLINE(  68)				transforms = null();
            			}
            			else {
HXLINE(  68)				::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  68)				{
HXLINE(  68)					int _g1 = 0;
HXDLIN(  68)					::Array< ::Dynamic> _g2 = _gthis->postprocessors;
HXDLIN(  68)					while((_g1 < _g2->length)){
HXLINE(  68)						 ::Dynamic p = _g2->__get(_g1);
HXDLIN(  68)						_g1 = (_g1 + 1);
HXDLIN(  68)						_g->push(p(req));
            					}
            				}
HXDLIN(  68)				transforms = _g;
            			}
HXLINE(  67)			return ::tink::core::_Promise::Promise_Impl__obj::next(_hx_tmp, ::Dynamic(new _hx_Closure_0(transforms,_g)),null());
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_983447f51cb5207c_64_request)
HXDLIN(  64)		 ::tink::http::_Client::CustomClient _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  64)		return ::tink::core::_Promise::Promise_Impl__obj::next(this->pipe(req,this->preprocessors,null()), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(CustomClient_obj,request,return )

::cpp::VirtualArray CustomClient_obj::concat(::cpp::VirtualArray a,::cpp::VirtualArray b){
            	HX_STACKFRAME(&_hx_pos_983447f51cb5207c_72_concat)
HXDLIN(  72)		if (::hx::IsNull( a )) {
HXLINE(  73)			::cpp::VirtualArray v = b;
HXDLIN(  73)			return v;
            		}
            		else {
HXLINE(  73)			if (::hx::IsNull( b )) {
HXLINE(  73)				::cpp::VirtualArray v = a;
HXDLIN(  73)				return v;
            			}
            			else {
HXLINE(  74)				return a->concat(b);
            			}
            		}
HXLINE(  72)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CustomClient_obj,concat,return )

 ::tink::http::_Client::CustomClient CustomClient_obj::create(::Dynamic c,::Array< ::Dynamic> preprocessors,::Array< ::Dynamic> postprocessors){
            	HX_GC_STACKFRAME(&_hx_pos_983447f51cb5207c_78_create)
HXDLIN(  78)		 ::tink::http::_Client::CustomClient _g = ( ( ::tink::http::_Client::CustomClient)(::Std_obj::downcast(c,::hx::ClassOf< ::tink::http::_Client::CustomClient >())) );
HXLINE(  79)		if (::hx::IsNull( _g )) {
HXLINE(  79)			return  ::tink::http::_Client::CustomClient_obj::__alloc( HX_CTX ,preprocessors,postprocessors,c);
            		}
            		else {
HXLINE(  80)			 ::tink::http::_Client::CustomClient v = _g;
HXDLIN(  80)			::Array< ::Dynamic> _hx_tmp = ::tink::http::_Client::CustomClient_obj::concat(preprocessors,v->preprocessors);
HXDLIN(  80)			::Array< ::Dynamic> _hx_tmp1 = ::tink::http::_Client::CustomClient_obj::concat(v->postprocessors,postprocessors);
HXDLIN(  80)			return  ::tink::http::_Client::CustomClient_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,v->real);
            		}
HXLINE(  79)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CustomClient_obj,create,return )


::hx::ObjectPtr< CustomClient_obj > CustomClient_obj::__new(::Array< ::Dynamic> preprocessors,::Array< ::Dynamic> postprocessors,::Dynamic real) {
	::hx::ObjectPtr< CustomClient_obj > __this = new CustomClient_obj();
	__this->__construct(preprocessors,postprocessors,real);
	return __this;
}

::hx::ObjectPtr< CustomClient_obj > CustomClient_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> preprocessors,::Array< ::Dynamic> postprocessors,::Dynamic real) {
	CustomClient_obj *__this = (CustomClient_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CustomClient_obj), true, "tink.http._Client.CustomClient"));
	*(void **)__this = CustomClient_obj::_hx_vtable;
	__this->__construct(preprocessors,postprocessors,real);
	return __this;
}

CustomClient_obj::CustomClient_obj()
{
}

void CustomClient_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CustomClient);
	HX_MARK_MEMBER_NAME(preprocessors,"preprocessors");
	HX_MARK_MEMBER_NAME(postprocessors,"postprocessors");
	HX_MARK_MEMBER_NAME(real,"real");
	HX_MARK_END_CLASS();
}

void CustomClient_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(preprocessors,"preprocessors");
	HX_VISIT_MEMBER_NAME(postprocessors,"postprocessors");
	HX_VISIT_MEMBER_NAME(real,"real");
}

::hx::Val CustomClient_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"real") ) { return ::hx::Val( real ); }
		if (HX_FIELD_EQ(inName,"pipe") ) { return ::hx::Val( pipe_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return ::hx::Val( request_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preprocessors") ) { return ::hx::Val( preprocessors ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"postprocessors") ) { return ::hx::Val( postprocessors ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CustomClient_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { outValue = concat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
	}
	return false;
}

::hx::Val CustomClient_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"real") ) { real=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preprocessors") ) { preprocessors=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"postprocessors") ) { postprocessors=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CustomClient_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("preprocessors",c4,f4,6f,7a));
	outFields->push(HX_("postprocessors",41,a7,4b,2f));
	outFields->push(HX_("real",5e,4b,a7,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CustomClient_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CustomClient_obj,preprocessors),HX_("preprocessors",c4,f4,6f,7a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CustomClient_obj,postprocessors),HX_("postprocessors",41,a7,4b,2f)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(CustomClient_obj,real),HX_("real",5e,4b,a7,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CustomClient_obj_sStaticStorageInfo = 0;
#endif

static ::String CustomClient_obj_sMemberFields[] = {
	HX_("preprocessors",c4,f4,6f,7a),
	HX_("postprocessors",41,a7,4b,2f),
	HX_("real",5e,4b,a7,4b),
	HX_("pipe",2e,f4,57,4a),
	HX_("request",4f,df,84,44),
	::String(null()) };

::hx::Class CustomClient_obj::__mClass;

static ::String CustomClient_obj_sStaticFields[] = {
	HX_("concat",14,09,d0,c7),
	HX_("create",fc,66,0f,7c),
	::String(null())
};

void CustomClient_obj::__register()
{
	CustomClient_obj _hx_dummy;
	CustomClient_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http._Client.CustomClient",0a,60,54,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CustomClient_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CustomClient_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CustomClient_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CustomClient_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CustomClient_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CustomClient_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
} // end namespace _Client
