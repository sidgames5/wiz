#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_42_stdout,"Sys","stdout",0x3eb7d92c,"Sys.stdout","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",42,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_47_stderr,"Sys","stderr",0x3eb04003,"Sys.stderr","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",47,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_56_args,"Sys","args",0xeaeddc7e,"Sys.args","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",56,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_87_systemName,"Sys","systemName",0xbea5b6bb,"Sys.systemName","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",87,0x57bbb657)
HX_LOCAL_STACK_FRAME(_hx_pos_6531db758068dd5d_128_environment,"Sys","environment",0x24af52d2,"Sys.environment","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",128,0x57bbb657)

void Sys_obj::__construct() { }

Dynamic Sys_obj::__CreateEmpty() { return new Sys_obj; }

void *Sys_obj::_hx_vtable = 0;

Dynamic Sys_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sys_obj > _hx_result = new Sys_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sys_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ee3a981;
}

 ::haxe::io::Output Sys_obj::_hx_stdout(){
            	HX_GC_STACKFRAME(&_hx_pos_6531db758068dd5d_42_stdout)
HXDLIN(  42)		return  ::sys::io::FileOutput_obj::__alloc( HX_CTX ,_hx_std_file_stdout());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_hx_stdout,return )

 ::haxe::io::Output Sys_obj::_hx_stderr(){
            	HX_GC_STACKFRAME(&_hx_pos_6531db758068dd5d_47_stderr)
HXDLIN(  47)		return  ::sys::io::FileOutput_obj::__alloc( HX_CTX ,_hx_std_file_stderr());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_hx_stderr,return )

::Array< ::String > Sys_obj::args(){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_56_args)
HXDLIN(  56)		return  ::__get_args();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,args,return )

::String Sys_obj::systemName(){
            	HX_STACKFRAME(&_hx_pos_6531db758068dd5d_87_systemName)
HXDLIN(  87)		return _hx_std_sys_string();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,systemName,return )

 ::haxe::ds::StringMap Sys_obj::environment(){
            	HX_GC_STACKFRAME(&_hx_pos_6531db758068dd5d_128_environment)
HXLINE( 129)		::Array< ::String > vars = _hx_std_sys_env();
HXLINE( 130)		 ::haxe::ds::StringMap result =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 131)		int i = 0;
HXLINE( 132)		while((i < vars->length)){
HXLINE( 133)			result->set(vars->__get(i),vars->__get((i + 1)));
HXLINE( 134)			i = (i + 2);
            		}
HXLINE( 136)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,environment,return )


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = args_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stdout") ) { outValue = _hx_stdout_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"stderr") ) { outValue = _hx_stderr_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemName") ) { outValue = systemName_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"environment") ) { outValue = environment_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Sys_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Sys_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Sys_obj::__mClass;

static ::String Sys_obj_sStaticFields[] = {
	HX_("stdout",cb,bf,f3,07),
	HX_("stderr",a2,26,ec,07),
	HX_("args",5d,8d,74,40),
	HX_("systemName",da,d8,82,f7),
	HX_("environment",d3,0b,50,ad),
	::String(null())
};

void Sys_obj::__register()
{
	Sys_obj _hx_dummy;
	Sys_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Sys",ed,64,3f,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Sys_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Sys_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sys_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sys_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

