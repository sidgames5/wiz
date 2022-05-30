#ifndef INCLUDED_tech_infynyt_wiz_Wiz
#define INCLUDED_tech_infynyt_wiz_Wiz

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tech,infynyt,wiz,Wiz)

namespace tech{
namespace infynyt{
namespace wiz{


class HXCPP_CLASS_ATTRIBUTES Wiz_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Wiz_obj OBJ_;
		Wiz_obj();

	public:
		enum { _hx_ClassId = 0x1c7ecb77 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tech.infynyt.wiz.Wiz")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tech.infynyt.wiz.Wiz"); }

		inline static ::hx::ObjectPtr< Wiz_obj > __new() {
			::hx::ObjectPtr< Wiz_obj > __this = new Wiz_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Wiz_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Wiz_obj *__this = (Wiz_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Wiz_obj), false, "tech.infynyt.wiz.Wiz"));
			*(void **)__this = Wiz_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Wiz_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Wiz",08,60,42,00); }

		static void __boot();
		static ::Array< ::String > args;
		static void main();
		static ::Dynamic main_dyn();

};

} // end namespace tech
} // end namespace infynyt
} // end namespace wiz

#endif /* INCLUDED_tech_infynyt_wiz_Wiz */ 
