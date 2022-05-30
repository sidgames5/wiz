#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d1f1ed1bce212cc8_31_exists,"sys.FileSystem","exists",0xf55bed9e,"sys.FileSystem.exists","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",31,0xb7079c8b)
HX_LOCAL_STACK_FRAME(_hx_pos_d1f1ed1bce212cc8_75_isDirectory,"sys.FileSystem","isDirectory",0x6c577a21,"sys.FileSystem.isDirectory","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/FileSystem.hx",75,0xb7079c8b)
namespace sys{

void FileSystem_obj::__construct() { }

Dynamic FileSystem_obj::__CreateEmpty() { return new FileSystem_obj; }

void *FileSystem_obj::_hx_vtable = 0;

Dynamic FileSystem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FileSystem_obj > _hx_result = new FileSystem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FileSystem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2378c654;
}

bool FileSystem_obj::exists(::String path){
            	HX_STACKFRAME(&_hx_pos_d1f1ed1bce212cc8_31_exists)
HXDLIN(  31)		::String _hx_tmp;
HXDLIN(  31)		bool _hx_tmp1;
HXDLIN(  31)		if (::hx::IsEq( path.charCodeAt(1),58 )) {
HXDLIN(  31)			_hx_tmp1 = (path.length <= 3);
            		}
            		else {
HXDLIN(  31)			_hx_tmp1 = false;
            		}
HXDLIN(  31)		if (_hx_tmp1) {
HXDLIN(  31)			_hx_tmp = ::haxe::io::Path_obj::addTrailingSlash(path);
            		}
            		else {
HXDLIN(  31)			if ((path == HX_("/",2f,00,00,00))) {
HXDLIN(  31)				_hx_tmp = HX_("/",2f,00,00,00);
            			}
            			else {
HXDLIN(  31)				_hx_tmp = ::haxe::io::Path_obj::removeTrailingSlashes(path);
            			}
            		}
HXDLIN(  31)		return _hx_std_sys_exists(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,exists,return )

bool FileSystem_obj::isDirectory(::String path){
            	HX_STACKFRAME(&_hx_pos_d1f1ed1bce212cc8_75_isDirectory)
HXDLIN(  75)		::String _hx_tmp;
HXDLIN(  75)		bool _hx_tmp1;
HXDLIN(  75)		if (::hx::IsEq( path.charCodeAt(1),58 )) {
HXDLIN(  75)			_hx_tmp1 = (path.length <= 3);
            		}
            		else {
HXDLIN(  75)			_hx_tmp1 = false;
            		}
HXDLIN(  75)		if (_hx_tmp1) {
HXDLIN(  75)			_hx_tmp = ::haxe::io::Path_obj::addTrailingSlash(path);
            		}
            		else {
HXDLIN(  75)			if ((path == HX_("/",2f,00,00,00))) {
HXDLIN(  75)				_hx_tmp = HX_("/",2f,00,00,00);
            			}
            			else {
HXDLIN(  75)				_hx_tmp = ::haxe::io::Path_obj::removeTrailingSlashes(path);
            			}
            		}
HXDLIN(  75)		return (_hx_std_sys_file_type(_hx_tmp) == HX_("dir",4d,3d,4c,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FileSystem_obj,isDirectory,return )


FileSystem_obj::FileSystem_obj()
{
}

bool FileSystem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isDirectory") ) { outValue = isDirectory_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FileSystem_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FileSystem_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FileSystem_obj::__mClass;

static ::String FileSystem_obj_sStaticFields[] = {
	HX_("exists",dc,1d,e0,bf),
	HX_("isDirectory",23,a9,c5,ee),
	::String(null())
};

void FileSystem_obj::__register()
{
	FileSystem_obj _hx_dummy;
	FileSystem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.FileSystem",6c,2c,e5,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FileSystem_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FileSystem_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FileSystem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileSystem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
