#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif
#ifndef INCLUDED_tech_infynyt_wiz_ProcessHandler
#include <tech/infynyt/wiz/ProcessHandler.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3c039d3fcadac31a_17_fetchPackage,"tech.infynyt.wiz.ProcessHandler","fetchPackage",0xd018b604,"tech.infynyt.wiz.ProcessHandler.fetchPackage","tech/infynyt/wiz/ProcessHandler.hx",17,0x33ff0345)
HX_LOCAL_STACK_FRAME(_hx_pos_3c039d3fcadac31a_19_fetchPackage,"tech.infynyt.wiz.ProcessHandler","fetchPackage",0xd018b604,"tech.infynyt.wiz.ProcessHandler.fetchPackage","tech/infynyt/wiz/ProcessHandler.hx",19,0x33ff0345)
HX_LOCAL_STACK_FRAME(_hx_pos_3c039d3fcadac31a_13_fetchPackage,"tech.infynyt.wiz.ProcessHandler","fetchPackage",0xd018b604,"tech.infynyt.wiz.ProcessHandler.fetchPackage","tech/infynyt/wiz/ProcessHandler.hx",13,0x33ff0345)
HX_LOCAL_STACK_FRAME(_hx_pos_3c039d3fcadac31a_31_validatePackage,"tech.infynyt.wiz.ProcessHandler","validatePackage",0x6f8a94f8,"tech.infynyt.wiz.ProcessHandler.validatePackage","tech/infynyt/wiz/ProcessHandler.hx",31,0x33ff0345)
HX_LOCAL_STACK_FRAME(_hx_pos_3c039d3fcadac31a_35_validatePackage,"tech.infynyt.wiz.ProcessHandler","validatePackage",0x6f8a94f8,"tech.infynyt.wiz.ProcessHandler.validatePackage","tech/infynyt/wiz/ProcessHandler.hx",35,0x33ff0345)
HX_LOCAL_STACK_FRAME(_hx_pos_3c039d3fcadac31a_27_validatePackage,"tech.infynyt.wiz.ProcessHandler","validatePackage",0x6f8a94f8,"tech.infynyt.wiz.ProcessHandler.validatePackage","tech/infynyt/wiz/ProcessHandler.hx",27,0x33ff0345)
static const bool _hx_array_data_385443d6_6[] = {
	1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_3c039d3fcadac31a_42_downloadPackageInstaller,"tech.infynyt.wiz.ProcessHandler","downloadPackageInstaller",0xf7fbf522,"tech.infynyt.wiz.ProcessHandler.downloadPackageInstaller","tech/infynyt/wiz/ProcessHandler.hx",42,0x33ff0345)
HX_LOCAL_STACK_FRAME(_hx_pos_3c039d3fcadac31a_46_runPackageInstaller,"tech.infynyt.wiz.ProcessHandler","runPackageInstaller",0x3cb14eb5,"tech.infynyt.wiz.ProcessHandler.runPackageInstaller","tech/infynyt/wiz/ProcessHandler.hx",46,0x33ff0345)
HX_LOCAL_STACK_FRAME(_hx_pos_3c039d3fcadac31a_10_boot,"tech.infynyt.wiz.ProcessHandler","boot",0x4e4247ca,"tech.infynyt.wiz.ProcessHandler.boot","tech/infynyt/wiz/ProcessHandler.hx",10,0x33ff0345)
HX_LOCAL_STACK_FRAME(_hx_pos_3c039d3fcadac31a_11_boot,"tech.infynyt.wiz.ProcessHandler","boot",0x4e4247ca,"tech.infynyt.wiz.ProcessHandler.boot","tech/infynyt/wiz/ProcessHandler.hx",11,0x33ff0345)
namespace tech{
namespace infynyt{
namespace wiz{

void ProcessHandler_obj::__construct() { }

Dynamic ProcessHandler_obj::__CreateEmpty() { return new ProcessHandler_obj; }

void *ProcessHandler_obj::_hx_vtable = 0;

Dynamic ProcessHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ProcessHandler_obj > _hx_result = new ProcessHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ProcessHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x00396fc8;
}

int ProcessHandler_obj::PORT_RECEIVE;

int ProcessHandler_obj::PORT_DOWNLOAD;

 ::Dynamic ProcessHandler_obj::fetchPackage(::String pkg){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		void _hx_run(::String error){
            			HX_GC_STACKFRAME(&_hx_pos_3c039d3fcadac31a_17_fetchPackage)
HXLINE(  17)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  17)			::String _hx_tmp1 = (HX_("Error: ",4e,a8,5b,b7) + error.toString());
HXDLIN(  17)			_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("src/tech/infynyt/wiz/ProcessHandler.hx",d0,78,41,cc),17,HX_("tech.infynyt.wiz.ProcessHandler",d6,43,54,38),HX_("fetchPackage",6c,9a,a0,0a)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,output) HXARGC(1)
            		void _hx_run(::String data){
            			HX_GC_STACKFRAME(&_hx_pos_3c039d3fcadac31a_19_fetchPackage)
HXLINE(  21)			 ::Dynamic json =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,data)->doParse();
HXLINE(  22)			output[0] = json;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_3c039d3fcadac31a_13_fetchPackage)
HXLINE(  14)		 ::sys::Http request =  ::sys::Http_obj::__alloc( HX_CTX ,(((HX_("http://96.235.29.196:",da,85,99,53) + ::tech::infynyt::wiz::ProcessHandler_obj::PORT_RECEIVE) + HX_("/api/v1/packages/",12,52,fa,90)) + pkg));
HXLINE(  15)		::Array< ::Dynamic> output = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE(  16)		request->onError =  ::Dynamic(new _hx_Closure_0());
HXLINE(  19)		request->onData =  ::Dynamic(new _hx_Closure_1(output));
HXLINE(  24)		return output->__get(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProcessHandler_obj,fetchPackage,return )

bool ProcessHandler_obj::validatePackage(::String pkg){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0,::Array< bool >,output) HXARGC(1)
            		void _hx_run(::String error){
            			HX_GC_STACKFRAME(&_hx_pos_3c039d3fcadac31a_31_validatePackage)
HXLINE(  31)			output[0] = true;
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< bool >,output) HXARGC(1)
            		void _hx_run(::String data){
            			HX_GC_STACKFRAME(&_hx_pos_3c039d3fcadac31a_35_validatePackage)
HXLINE(  35)			output[0] = false;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_3c039d3fcadac31a_27_validatePackage)
HXLINE(  28)		 ::sys::Http request =  ::sys::Http_obj::__alloc( HX_CTX ,(((HX_("http://96.235.29.196:",da,85,99,53) + ::tech::infynyt::wiz::ProcessHandler_obj::PORT_RECEIVE) + HX_("/api/v1/packages/",12,52,fa,90)) + pkg));
HXLINE(  29)		::Array< bool > output = ::Array_obj< bool >::fromData( _hx_array_data_385443d6_6,1);
HXLINE(  30)		request->onError =  ::Dynamic(new _hx_Closure_0(output));
HXLINE(  34)		request->onData =  ::Dynamic(new _hx_Closure_1(output));
HXLINE(  38)		return output->__get(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProcessHandler_obj,validatePackage,return )

::String ProcessHandler_obj::downloadPackageInstaller(::String url){
            	HX_STACKFRAME(&_hx_pos_3c039d3fcadac31a_42_downloadPackageInstaller)
HXDLIN(  42)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProcessHandler_obj,downloadPackageInstaller,return )

bool ProcessHandler_obj::runPackageInstaller(::String path){
            	HX_STACKFRAME(&_hx_pos_3c039d3fcadac31a_46_runPackageInstaller)
HXDLIN(  46)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProcessHandler_obj,runPackageInstaller,return )


ProcessHandler_obj::ProcessHandler_obj()
{
}

bool ProcessHandler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"PORT_RECEIVE") ) { outValue = ( PORT_RECEIVE ); return true; }
		if (HX_FIELD_EQ(inName,"fetchPackage") ) { outValue = fetchPackage_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"PORT_DOWNLOAD") ) { outValue = ( PORT_DOWNLOAD ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"validatePackage") ) { outValue = validatePackage_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"runPackageInstaller") ) { outValue = runPackageInstaller_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"downloadPackageInstaller") ) { outValue = downloadPackageInstaller_dyn(); return true; }
	}
	return false;
}

bool ProcessHandler_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"PORT_RECEIVE") ) { PORT_RECEIVE=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"PORT_DOWNLOAD") ) { PORT_DOWNLOAD=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ProcessHandler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ProcessHandler_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ProcessHandler_obj::PORT_RECEIVE,HX_("PORT_RECEIVE",c5,c3,6a,03)},
	{::hx::fsInt,(void *) &ProcessHandler_obj::PORT_DOWNLOAD,HX_("PORT_DOWNLOAD",46,af,c9,a8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ProcessHandler_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProcessHandler_obj::PORT_RECEIVE,"PORT_RECEIVE");
	HX_MARK_MEMBER_NAME(ProcessHandler_obj::PORT_DOWNLOAD,"PORT_DOWNLOAD");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProcessHandler_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProcessHandler_obj::PORT_RECEIVE,"PORT_RECEIVE");
	HX_VISIT_MEMBER_NAME(ProcessHandler_obj::PORT_DOWNLOAD,"PORT_DOWNLOAD");
};

#endif

::hx::Class ProcessHandler_obj::__mClass;

static ::String ProcessHandler_obj_sStaticFields[] = {
	HX_("PORT_RECEIVE",c5,c3,6a,03),
	HX_("PORT_DOWNLOAD",46,af,c9,a8),
	HX_("fetchPackage",6c,9a,a0,0a),
	HX_("validatePackage",90,61,c7,3c),
	HX_("downloadPackageInstaller",8a,d5,fc,26),
	HX_("runPackageInstaller",4d,47,2c,9b),
	::String(null())
};

void ProcessHandler_obj::__register()
{
	ProcessHandler_obj _hx_dummy;
	ProcessHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tech.infynyt.wiz.ProcessHandler",d6,43,54,38);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ProcessHandler_obj::__GetStatic;
	__mClass->mSetStaticField = &ProcessHandler_obj::__SetStatic;
	__mClass->mMarkFunc = ProcessHandler_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ProcessHandler_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ProcessHandler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ProcessHandler_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProcessHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProcessHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ProcessHandler_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3c039d3fcadac31a_10_boot)
HXDLIN(  10)		PORT_RECEIVE = 16760;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3c039d3fcadac31a_11_boot)
HXDLIN(  11)		PORT_DOWNLOAD = 21413;
            	}
}

} // end namespace tech
} // end namespace infynyt
} // end namespace wiz
