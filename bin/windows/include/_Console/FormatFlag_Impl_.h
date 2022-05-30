#ifndef INCLUDED__Console_FormatFlag_Impl_
#define INCLUDED__Console_FormatFlag_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(_Console,FormatFlag_Impl_)

namespace _Console{


class HXCPP_CLASS_ATTRIBUTES FormatFlag_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FormatFlag_Impl__obj OBJ_;
		FormatFlag_Impl__obj();

	public:
		enum { _hx_ClassId = 0x2eb0dbbb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="_Console.FormatFlag_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"_Console.FormatFlag_Impl_"); }

		inline static ::hx::ObjectPtr< FormatFlag_Impl__obj > __new() {
			::hx::ObjectPtr< FormatFlag_Impl__obj > __this = new FormatFlag_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FormatFlag_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FormatFlag_Impl__obj *__this = (FormatFlag_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FormatFlag_Impl__obj), false, "_Console.FormatFlag_Impl_"));
			*(void **)__this = FormatFlag_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FormatFlag_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FormatFlag_Impl_",83,8b,b9,08); }

		static void __boot();
		static ::String RESET;
		static ::String BOLD;
		static ::String ITALIC;
		static ::String DIM;
		static ::String UNDERLINE;
		static ::String BLINK;
		static ::String INVERT;
		static ::String HIDDEN;
		static ::String BLACK;
		static ::String RED;
		static ::String GREEN;
		static ::String YELLOW;
		static ::String BLUE;
		static ::String MAGENTA;
		static ::String CYAN;
		static ::String WHITE;
		static ::String LIGHT_BLACK;
		static ::String LIGHT_RED;
		static ::String LIGHT_GREEN;
		static ::String LIGHT_YELLOW;
		static ::String LIGHT_BLUE;
		static ::String LIGHT_MAGENTA;
		static ::String LIGHT_CYAN;
		static ::String LIGHT_WHITE;
		static ::String BG_BLACK;
		static ::String BG_RED;
		static ::String BG_GREEN;
		static ::String BG_YELLOW;
		static ::String BG_BLUE;
		static ::String BG_MAGENTA;
		static ::String BG_CYAN;
		static ::String BG_WHITE;
		static ::String BG_LIGHT_BLACK;
		static ::String BG_LIGHT_RED;
		static ::String BG_LIGHT_GREEN;
		static ::String BG_LIGHT_YELLOW;
		static ::String BG_LIGHT_BLUE;
		static ::String BG_LIGHT_MAGENTA;
		static ::String BG_LIGHT_CYAN;
		static ::String BG_LIGHT_WHITE;
		static ::String fromString(::String str);
		static ::Dynamic fromString_dyn();

};

} // end namespace _Console

#endif /* INCLUDED__Console_FormatFlag_Impl_ */ 
