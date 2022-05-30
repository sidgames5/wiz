#include <hxcpp.h>

#ifndef INCLUDED_tink_core_NamedWith
#include <tink/core/NamedWith.h>
#endif
#ifndef INCLUDED_tink_http_Header
#include <tink/http/Header.h>
#endif
#ifndef INCLUDED_tink_http_HeaderField
#include <tink/http/HeaderField.h>
#endif
#ifndef INCLUDED_tink_http_RequestHeader
#include <tink/http/RequestHeader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c1a88e4e5ab75087_20_new,"tink.http.RequestHeader","new",0x6ec91ea4,"tink.http.RequestHeader.new","tink/http/Request.hx",20,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_c1a88e4e5ab75087_28_concat,"tink.http.RequestHeader","concat",0xcc11fd50,"tink.http.RequestHeader.concat","tink/http/Request.hx",28,0x68d6b2f9)
HX_LOCAL_STACK_FRAME(_hx_pos_c1a88e4e5ab75087_31_toString,"tink.http.RequestHeader","toString",0x48434be8,"tink.http.RequestHeader.toString","tink/http/Request.hx",31,0x68d6b2f9)
namespace tink{
namespace http{

void RequestHeader_obj::__construct(::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields){
            		::String protocol = __o_protocol;
            		if (::hx::IsNull(__o_protocol)) protocol = HX_("HTTP/1.1",6d,25,7a,80);
            	HX_STACKFRAME(&_hx_pos_c1a88e4e5ab75087_20_new)
HXLINE(  21)		this->method = method;
HXLINE(  22)		this->url = url;
HXLINE(  23)		this->protocol = protocol;
HXLINE(  24)		super::__construct(fields);
            	}

Dynamic RequestHeader_obj::__CreateEmpty() { return new RequestHeader_obj; }

void *RequestHeader_obj::_hx_vtable = 0;

Dynamic RequestHeader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RequestHeader_obj > _hx_result = new RequestHeader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool RequestHeader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4094a9e7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4094a9e7;
	} else {
		return inClassId==(int)0x72a5c122;
	}
}

 ::tink::http::Header RequestHeader_obj::concat(::Array< ::Dynamic> fields){
            	HX_GC_STACKFRAME(&_hx_pos_c1a88e4e5ab75087_28_concat)
HXDLIN(  28)		::String _hx_tmp = this->method;
HXDLIN(  28)		 ::Dynamic _hx_tmp1 = this->url;
HXDLIN(  28)		::String _hx_tmp2 = this->protocol;
HXDLIN(  28)		return  ::tink::http::RequestHeader_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,this->fields->concat(fields));
            	}


::String RequestHeader_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_c1a88e4e5ab75087_31_toString)
HXDLIN(  31)		 ::Dynamic this1 = this->url;
HXDLIN(  31)		::String _hx_tmp;
HXDLIN(  31)		if (::hx::IsNull( this1->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic) )) {
HXDLIN(  31)			_hx_tmp = ( (::String)(this1->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
            		}
            		else {
HXDLIN(  31)			::String _hx_tmp1;
HXDLIN(  31)			if (::hx::IsNull( this1->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic) )) {
HXDLIN(  31)				_hx_tmp1 = HX_("null",87,9e,0e,49);
            			}
            			else {
HXDLIN(  31)				_hx_tmp1 = ( (::String)(this1->__Field(HX_("path",a5,e5,51,4a),::hx::paccDynamic)) );
            			}
HXDLIN(  31)			::String _hx_tmp2;
HXDLIN(  31)			if (::hx::IsNull( this1->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic) )) {
HXDLIN(  31)				_hx_tmp2 = HX_("null",87,9e,0e,49);
            			}
            			else {
HXDLIN(  31)				_hx_tmp2 = ( (::String)(this1->__Field(HX_("query",08,8b,ea,5d),::hx::paccDynamic)) );
            			}
HXDLIN(  31)			_hx_tmp = ((_hx_tmp1 + HX_("?",3f,00,00,00)) + _hx_tmp2);
            		}
HXDLIN(  31)		::String _hx_tmp1 = ((((((HX_("",00,00,00,00) + this->method) + HX_(" ",20,00,00,00)) + _hx_tmp) + HX_(" ",20,00,00,00)) + this->protocol) + HX_("\r\n",5d,0b,00,00));
HXDLIN(  31)		return (_hx_tmp1 + this->super::toString());
            	}



::hx::ObjectPtr< RequestHeader_obj > RequestHeader_obj::__new(::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields) {
	::hx::ObjectPtr< RequestHeader_obj > __this = new RequestHeader_obj();
	__this->__construct(method,url,__o_protocol,fields);
	return __this;
}

::hx::ObjectPtr< RequestHeader_obj > RequestHeader_obj::__alloc(::hx::Ctx *_hx_ctx,::String method, ::Dynamic url,::String __o_protocol,::Array< ::Dynamic> fields) {
	RequestHeader_obj *__this = (RequestHeader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RequestHeader_obj), true, "tink.http.RequestHeader"));
	*(void **)__this = RequestHeader_obj::_hx_vtable;
	__this->__construct(method,url,__o_protocol,fields);
	return __this;
}

RequestHeader_obj::RequestHeader_obj()
{
}

void RequestHeader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RequestHeader);
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(protocol,"protocol");
	 ::tink::http::Header_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RequestHeader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(protocol,"protocol");
	 ::tink::http::Header_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RequestHeader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return ::hx::Val( url ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return ::hx::Val( method ); }
		if (HX_FIELD_EQ(inName,"concat") ) { return ::hx::Val( concat_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"protocol") ) { return ::hx::Val( protocol ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RequestHeader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"protocol") ) { protocol=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RequestHeader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("method",e1,f6,5a,09));
	outFields->push(HX_("url",6f,2b,59,00));
	outFields->push(HX_("protocol",58,56,63,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RequestHeader_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(RequestHeader_obj,method),HX_("method",e1,f6,5a,09)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(RequestHeader_obj,url),HX_("url",6f,2b,59,00)},
	{::hx::fsString,(int)offsetof(RequestHeader_obj,protocol),HX_("protocol",58,56,63,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RequestHeader_obj_sStaticStorageInfo = 0;
#endif

static ::String RequestHeader_obj_sMemberFields[] = {
	HX_("method",e1,f6,5a,09),
	HX_("url",6f,2b,59,00),
	HX_("protocol",58,56,63,00),
	HX_("concat",14,09,d0,c7),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class RequestHeader_obj::__mClass;

void RequestHeader_obj::__register()
{
	RequestHeader_obj _hx_dummy;
	RequestHeader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.RequestHeader",b2,3c,ec,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RequestHeader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RequestHeader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RequestHeader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RequestHeader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
