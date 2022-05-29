#include <hxcpp.h>

#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1732ad8959875cda_71_new,"haxe.http.HttpBase","new",0x98384fa9,"haxe.http.HttpBase.new","C:\\HaxeToolkit\\haxe\\std/haxe/http/HttpBase.hx",71,0x4b84270e)
HX_LOCAL_STACK_FRAME(_hx_pos_1732ad8959875cda_196___default_onData,"haxe.http.HttpBase","__default_onData",0xb2f8141e,"haxe.http.HttpBase.__default_onData","C:\\HaxeToolkit\\haxe\\std/haxe/http/HttpBase.hx",196,0x4b84270e)
HX_LOCAL_STACK_FRAME(_hx_pos_1732ad8959875cda_214___default_onError,"haxe.http.HttpBase","__default_onError",0x84bb4354,"haxe.http.HttpBase.__default_onError","C:\\HaxeToolkit\\haxe\\std/haxe/http/HttpBase.hx",214,0x4b84270e)
namespace haxe{
namespace http{

void HttpBase_obj::__construct(::String url){
            	HX_STACKFRAME(&_hx_pos_1732ad8959875cda_71_new)
HXLINE(  72)		this->url = url;
HXLINE(  73)		this->headers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  74)		this->params = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  75)		this->emptyOnData = this->onData;
            	}

Dynamic HttpBase_obj::__CreateEmpty() { return new HttpBase_obj; }

void *HttpBase_obj::_hx_vtable = 0;

Dynamic HttpBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HttpBase_obj > _hx_result = new HttpBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HttpBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10c0921f;
}

HX_BEGIN_DEFAULT_FUNC(__default_onData,HttpBase_obj)
void _hx_run(::String data){
            	HX_STACKFRAME(&_hx_pos_1732ad8959875cda_196___default_onData)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onError,HttpBase_obj)
void _hx_run(::String msg){
            	HX_STACKFRAME(&_hx_pos_1732ad8959875cda_214___default_onError)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC


void HttpBase_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,HttpBase_obj *_hx_obj) {
	if (!_hx_obj->onError.mPtr) _hx_obj->onError = new __default_onError(_hx_obj);
	if (!_hx_obj->onData.mPtr) _hx_obj->onData = new __default_onData(_hx_obj);
}
HttpBase_obj::HttpBase_obj()
{
	onError = new __default_onError(this);
	onData = new __default_onData(this);
}

void HttpBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HttpBase);
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(headers,"headers");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(emptyOnData,"emptyOnData");
	HX_MARK_MEMBER_NAME(onData,"onData");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_END_CLASS();
}

void HttpBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(headers,"headers");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(emptyOnData,"emptyOnData");
	HX_VISIT_MEMBER_NAME(onData,"onData");
	HX_VISIT_MEMBER_NAME(onError,"onError");
}

::hx::Val HttpBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return ::hx::Val( url ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"onData") ) { return ::hx::Val( onData ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { return ::hx::Val( headers ); }
		if (HX_FIELD_EQ(inName,"onError") ) { return ::hx::Val( onError ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"emptyOnData") ) { return ::hx::Val( emptyOnData ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HttpBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onData") ) { onData=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { headers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"emptyOnData") ) { emptyOnData=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HttpBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("url",6f,2b,59,00));
	outFields->push(HX_("headers",46,52,08,63));
	outFields->push(HX_("params",46,fb,7a,ed));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HttpBase_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(HttpBase_obj,url),HX_("url",6f,2b,59,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(HttpBase_obj,headers),HX_("headers",46,52,08,63)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(HttpBase_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HttpBase_obj,emptyOnData),HX_("emptyOnData",56,f5,15,ad)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HttpBase_obj,onData),HX_("onData",e9,5e,ed,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HttpBase_obj,onError),HX_("onError",29,6a,67,09)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HttpBase_obj_sStaticStorageInfo = 0;
#endif

static ::String HttpBase_obj_sMemberFields[] = {
	HX_("url",6f,2b,59,00),
	HX_("headers",46,52,08,63),
	HX_("params",46,fb,7a,ed),
	HX_("emptyOnData",56,f5,15,ad),
	HX_("onData",e9,5e,ed,e4),
	HX_("onError",29,6a,67,09),
	::String(null()) };

::hx::Class HttpBase_obj::__mClass;

void HttpBase_obj::__register()
{
	HttpBase_obj _hx_dummy;
	HttpBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.http.HttpBase",37,47,c3,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HttpBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HttpBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HttpBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HttpBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace http
