#ifndef INCLUDED_tech_infynyt_wiz_WizPM
#define INCLUDED_tech_infynyt_wiz_WizPM

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tech,infynyt,wiz,WizPM)

namespace tech{
namespace infynyt{
namespace wiz{


class HXCPP_CLASS_ATTRIBUTES WizPM_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WizPM_obj OBJ_;
		WizPM_obj();

	public:
		enum { _hx_ClassId = 0x52621d34 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tech.infynyt.wiz.WizPM")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tech.infynyt.wiz.WizPM"); }

		inline static ::hx::ObjectPtr< WizPM_obj > __new() {
			::hx::ObjectPtr< WizPM_obj > __this = new WizPM_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< WizPM_obj > __alloc(::hx::Ctx *_hx_ctx) {
			WizPM_obj *__this = (WizPM_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(WizPM_obj), false, "tech.infynyt.wiz.WizPM"));
			*(void **)__this = WizPM_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WizPM_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WizPM",05,b8,a0,5d); }

		static void __boot();
		static ::Array< ::String > args;
		static void main();
		static ::Dynamic main_dyn();

};

} // end namespace tech
} // end namespace infynyt
} // end namespace wiz

#endif /* INCLUDED_tech_infynyt_wiz_WizPM */ 
