#include <hxcpp.h>

#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4de4efe70e9aaf52_48_new,"sys.Http","new",0xa5e0041b,"sys.Http.new","C:\\HaxeToolkit\\haxe\\std/sys/Http.hx",48,0x92a61a9b)
namespace sys{

void Http_obj::__construct(::String url){
            	HX_STACKFRAME(&_hx_pos_4de4efe70e9aaf52_48_new)
HXLINE(  49)		this->cnxTimeout = ( (Float)(10) );
HXLINE(  53)		super::__construct(url);
            	}

Dynamic Http_obj::__CreateEmpty() { return new Http_obj; }

void *Http_obj::_hx_vtable = 0;

Dynamic Http_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Http_obj > _hx_result = new Http_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Http_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x02924475) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x02924475;
	} else {
		return inClassId==(int)0x10c0921f;
	}
}


Http_obj::Http_obj()
{
}

::hx::Val Http_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"cnxTimeout") ) { return ::hx::Val( cnxTimeout ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Http_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"cnxTimeout") ) { cnxTimeout=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Http_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cnxTimeout",b4,3a,75,76));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Http_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Http_obj,cnxTimeout),HX_("cnxTimeout",b4,3a,75,76)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Http_obj_sStaticStorageInfo = 0;
#endif

static ::String Http_obj_sMemberFields[] = {
	HX_("cnxTimeout",b4,3a,75,76),
	::String(null()) };

::hx::Class Http_obj::__mClass;

void Http_obj::__register()
{
	Http_obj _hx_dummy;
	Http_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.Http",a9,5a,b7,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Http_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Http_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Http_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Http_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
