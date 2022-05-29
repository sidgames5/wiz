#include <hxcpp.h>

#ifndef INCLUDED_Console
#include <Console.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_tech_infynyt_wiz_ProcessHandler
#include <tech/infynyt/wiz/ProcessHandler.h>
#endif
#ifndef INCLUDED_tech_infynyt_wiz_WizPM
#include <tech/infynyt/wiz/WizPM.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_78155afc9b36518e_8_main,"tech.infynyt.wiz.WizPM","main",0xf5dc925d,"tech.infynyt.wiz.WizPM.main","tech/infynyt/wiz/WizPM.hx",8,0x39c47137)
HX_LOCAL_STACK_FRAME(_hx_pos_78155afc9b36518e_6_boot,"tech.infynyt.wiz.WizPM","boot",0xeea1de56,"tech.infynyt.wiz.WizPM.boot","tech/infynyt/wiz/WizPM.hx",6,0x39c47137)
namespace tech{
namespace infynyt{
namespace wiz{

void WizPM_obj::__construct() { }

Dynamic WizPM_obj::__CreateEmpty() { return new WizPM_obj; }

void *WizPM_obj::_hx_vtable = 0;

Dynamic WizPM_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WizPM_obj > _hx_result = new WizPM_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool WizPM_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x52621d34;
}

::Array< ::String > WizPM_obj::args;

void WizPM_obj::main(){
            	HX_STACKFRAME(&_hx_pos_78155afc9b36518e_8_main)
HXLINE(   9)		if ((::tech::infynyt::wiz::WizPM_obj::args->length == 0)) {
HXLINE(  35)			{
HXLINE(  35)				::String s = (::Console_obj::logPrefix + HX_("Usage: wiz <command> [args]",b5,37,6c,a0));
HXDLIN(  35)				if (::hx::IsNull( s )) {
HXLINE(  35)					s = HX_("",00,00,00,00);
            				}
HXDLIN(  35)				::Console_obj::printFormatted((s + HX_("\n",0a,00,00,00)),0);
            			}
HXLINE(  11)			return;
            		}
HXLINE(  14)		if ((::tech::infynyt::wiz::WizPM_obj::args->__get(0) == HX_("install",1b,d5,9a,8d))) {
HXLINE(  16)			::Array< ::String > plist = ::tech::infynyt::wiz::WizPM_obj::args->slice(1,null());
HXLINE(  17)			if ((plist->length == 0)) {
HXLINE(  35)				{
HXLINE(  35)					::String s = (::Console_obj::logPrefix + HX_("Usage: wiz install [packages]",d9,5c,5b,ff));
HXDLIN(  35)					if (::hx::IsNull( s )) {
HXLINE(  35)						s = HX_("",00,00,00,00);
            					}
HXDLIN(  35)					::Console_obj::printFormatted((s + HX_("\n",0a,00,00,00)),0);
            				}
HXLINE(  19)				return;
            			}
HXLINE(  21)			{
HXLINE(  21)				int _g = 0;
HXDLIN(  21)				while((_g < plist->length)){
HXLINE(  21)					::String pkg = plist->__get(_g);
HXDLIN(  21)					_g = (_g + 1);
HXLINE(  22)					if (::tech::infynyt::wiz::ProcessHandler_obj::validatePackage(pkg)) {
HXLINE(  23)						 ::Dynamic pkgi = ::tech::infynyt::wiz::ProcessHandler_obj::fetchPackage(pkg);
HXLINE(  24)						::String bin = ::tech::infynyt::wiz::ProcessHandler_obj::downloadPackageInstaller(( (::String)(pkgi->__Field(HX_("downloadUrl",c7,5c,f4,61),::hx::paccDynamic)) ));
HXLINE(  25)						::sys::io::File_obj::saveContent(HX_("wiztemp.tmp.exe",49,b6,e1,72),bin);
HXLINE(  26)						::tech::infynyt::wiz::ProcessHandler_obj::runPackageInstaller(HX_("wiztemp.tmp.exe",49,b6,e1,72));
            					}
            					else {
HXLINE(  40)						{
HXLINE(  40)							::String s = (::Console_obj::warnPrefix + (HX_("",00,00,00,00) + ((HX_("Unable to install package ",b7,91,31,4e) + pkg) + HX_(": no package found in library",91,af,6c,fd))));
HXDLIN(  40)							if (::hx::IsNull( s )) {
HXLINE(  40)								s = HX_("",00,00,00,00);
            							}
HXDLIN(  40)							::Console_obj::printFormatted((s + HX_("\n",0a,00,00,00)),1);
            						}
HXLINE(  29)						return;
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(WizPM_obj,main,(void))


WizPM_obj::WizPM_obj()
{
}

bool WizPM_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = ( args ); return true; }
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
	}
	return false;
}

bool WizPM_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { args=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *WizPM_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo WizPM_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &WizPM_obj::args,HX_("args",5d,8d,74,40)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void WizPM_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WizPM_obj::args,"args");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WizPM_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WizPM_obj::args,"args");
};

#endif

::hx::Class WizPM_obj::__mClass;

static ::String WizPM_obj_sStaticFields[] = {
	HX_("args",5d,8d,74,40),
	HX_("main",39,38,56,48),
	::String(null())
};

void WizPM_obj::__register()
{
	WizPM_obj _hx_dummy;
	WizPM_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tech.infynyt.wiz.WizPM",ca,38,b4,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WizPM_obj::__GetStatic;
	__mClass->mSetStaticField = &WizPM_obj::__SetStatic;
	__mClass->mMarkFunc = WizPM_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(WizPM_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< WizPM_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WizPM_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WizPM_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WizPM_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WizPM_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_78155afc9b36518e_6_boot)
HXDLIN(   6)		args = ::Sys_obj::args();
            	}
}

} // end namespace tech
} // end namespace infynyt
} // end namespace wiz
