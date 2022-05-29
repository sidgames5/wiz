#ifndef INCLUDED_tech_infynyt_wiz_ProcessHandler
#define INCLUDED_tech_infynyt_wiz_ProcessHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tech,infynyt,wiz,ProcessHandler)

namespace tech{
namespace infynyt{
namespace wiz{


class HXCPP_CLASS_ATTRIBUTES ProcessHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ProcessHandler_obj OBJ_;
		ProcessHandler_obj();

	public:
		enum { _hx_ClassId = 0x00396fc8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tech.infynyt.wiz.ProcessHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tech.infynyt.wiz.ProcessHandler"); }

		inline static ::hx::ObjectPtr< ProcessHandler_obj > __new() {
			::hx::ObjectPtr< ProcessHandler_obj > __this = new ProcessHandler_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ProcessHandler_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ProcessHandler_obj *__this = (ProcessHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ProcessHandler_obj), false, "tech.infynyt.wiz.ProcessHandler"));
			*(void **)__this = ProcessHandler_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ProcessHandler_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ProcessHandler",3b,85,89,a2); }

		static void __boot();
		static int PORT_RECEIVE;
		static int PORT_DOWNLOAD;
		static  ::Dynamic fetchPackage(::String pkg);
		static ::Dynamic fetchPackage_dyn();

		static bool validatePackage(::String pkg);
		static ::Dynamic validatePackage_dyn();

		static ::String downloadPackageInstaller(::String url);
		static ::Dynamic downloadPackageInstaller_dyn();

		static bool runPackageInstaller(::String path);
		static ::Dynamic runPackageInstaller_dyn();

};

} // end namespace tech
} // end namespace infynyt
} // end namespace wiz

#endif /* INCLUDED_tech_infynyt_wiz_ProcessHandler */ 
