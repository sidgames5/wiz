#ifndef INCLUDED_sys_Http
#define INCLUDED_sys_Http

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_4de4efe70e9aaf52_48_new)
HX_DECLARE_CLASS2(haxe,http,HttpBase)
HX_DECLARE_CLASS1(sys,Http)

namespace sys{


class HXCPP_CLASS_ATTRIBUTES Http_obj : public  ::haxe::http::HttpBase_obj
{
	public:
		typedef  ::haxe::http::HttpBase_obj super;
		typedef Http_obj OBJ_;
		Http_obj();

	public:
		enum { _hx_ClassId = 0x02924475 };

		void __construct(::String url);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.Http")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"sys.Http"); }

		inline static ::hx::ObjectPtr< Http_obj > __new(::String url) {
			::hx::ObjectPtr< Http_obj > __this = new Http_obj();
			__this->__construct(url);
			return __this;
		}

		inline static ::hx::ObjectPtr< Http_obj > __alloc(::hx::Ctx *_hx_ctx,::String url) {
			Http_obj *__this = (Http_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Http_obj), true, "sys.Http"));
			*(void **)__this = Http_obj::_hx_vtable;
			haxe::http::HttpBase_obj::__alloc_dynamic_functions(_hx_ctx,__this);
{
            	HX_STACKFRAME(&_hx_pos_4de4efe70e9aaf52_48_new)
HXLINE(  49)		( ( ::sys::Http)(__this) )->cnxTimeout = ( (Float)(10) );
HXLINE(  53)		__this->super::__construct(url);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Http_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Http",a8,c7,ef,2f); }

		Float cnxTimeout;
};

} // end namespace sys

#endif /* INCLUDED_sys_Http */ 
