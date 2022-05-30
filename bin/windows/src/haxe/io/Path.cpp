#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_271_addTrailingSlash,"haxe.io.Path","addTrailingSlash",0x8b4f8e69,"haxe.io.Path.addTrailingSlash","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",271,0x4f1aa280)
HX_LOCAL_STACK_FRAME(_hx_pos_c76bafa893b9a603_299_removeTrailingSlashes,"haxe.io.Path","removeTrailingSlashes",0x2dc73462,"haxe.io.Path.removeTrailingSlashes","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",299,0x4f1aa280)
namespace haxe{
namespace io{

void Path_obj::__construct() { }

Dynamic Path_obj::__CreateEmpty() { return new Path_obj; }

void *Path_obj::_hx_vtable = 0;

Dynamic Path_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Path_obj > _hx_result = new Path_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Path_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x026896d9;
}

::String Path_obj::addTrailingSlash(::String path){
            	HX_STACKFRAME(&_hx_pos_c76bafa893b9a603_271_addTrailingSlash)
HXLINE( 272)		if ((path.length == 0)) {
HXLINE( 273)			return HX_("/",2f,00,00,00);
            		}
HXLINE( 274)		int c1 = path.lastIndexOf(HX_("/",2f,00,00,00),null());
HXLINE( 275)		int c2 = path.lastIndexOf(HX_("\\",5c,00,00,00),null());
HXLINE( 276)		if ((c1 < c2)) {
HXLINE( 277)			if ((c2 != (path.length - 1))) {
HXLINE( 278)				return (path + HX_("\\",5c,00,00,00));
            			}
            			else {
HXLINE( 280)				return path;
            			}
            		}
            		else {
HXLINE( 282)			if ((c1 != (path.length - 1))) {
HXLINE( 283)				return (path + HX_("/",2f,00,00,00));
            			}
            			else {
HXLINE( 285)				return path;
            			}
            		}
HXLINE( 276)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,addTrailingSlash,return )

::String Path_obj::removeTrailingSlashes(::String path){
            	HX_STACKFRAME(&_hx_pos_c76bafa893b9a603_299_removeTrailingSlashes)
HXLINE( 300)		while(true){
HXLINE( 301)			 ::Dynamic _g = path.charCodeAt((path.length - 1));
HXDLIN( 301)			if (::hx::IsNull( _g )) {
HXLINE( 305)				goto _hx_goto_1;
            			}
            			else {
HXLINE( 301)				 ::Dynamic _hx_switch_0 = _g;
            				if (  (_hx_switch_0==47) ||  (_hx_switch_0==92) ){
HXLINE( 303)					path = path.substr(0,-1);
HXDLIN( 303)					goto _hx_goto_2;
            				}
            				/* default */{
HXLINE( 305)					goto _hx_goto_1;
            				}
            				_hx_goto_2:;
            			}
            		}
            		_hx_goto_1:;
HXLINE( 308)		return path;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,removeTrailingSlashes,return )


Path_obj::Path_obj()
{
}

bool Path_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"addTrailingSlash") ) { outValue = addTrailingSlash_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"removeTrailingSlashes") ) { outValue = removeTrailingSlashes_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Path_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Path_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Path_obj::__mClass;

static ::String Path_obj_sStaticFields[] = {
	HX_("addTrailingSlash",e0,d6,eb,26),
	HX_("removeTrailingSlashes",8b,dc,1d,43),
	::String(null())
};

void Path_obj::__register()
{
	Path_obj _hx_dummy;
	Path_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.io.Path",05,cf,c6,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Path_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Path_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Path_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Path_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Path_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
