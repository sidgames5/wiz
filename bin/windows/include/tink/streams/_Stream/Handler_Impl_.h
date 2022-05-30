#ifndef INCLUDED_tink_streams__Stream_Handler_Impl_
#define INCLUDED_tink_streams__Stream_Handler_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,Handled)
HX_DECLARE_CLASS3(tink,streams,_Stream,Handler_Impl_)

namespace tink{
namespace streams{
namespace _Stream{


class HXCPP_CLASS_ATTRIBUTES Handler_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Handler_Impl__obj OBJ_;
		Handler_Impl__obj();

	public:
		enum { _hx_ClassId = 0x065ceae4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.streams._Stream.Handler_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.streams._Stream.Handler_Impl_"); }

		inline static ::hx::ObjectPtr< Handler_Impl__obj > __new() {
			::hx::ObjectPtr< Handler_Impl__obj > __this = new Handler_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Handler_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Handler_Impl__obj *__this = (Handler_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Handler_Impl__obj), false, "tink.streams._Stream.Handler_Impl_"));
			*(void **)__this = Handler_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Handler_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Handler_Impl_",ca,2f,2c,64); }

		static  ::Dynamic _new( ::Dynamic f);
		static ::Dynamic _new_dyn();

		static ::Dynamic apply( ::Dynamic this1, ::Dynamic item);
		static ::Dynamic apply_dyn();

		static  ::Dynamic ofSafeSync( ::Dynamic f);
		static ::Dynamic ofSafeSync_dyn();

		static  ::Dynamic ofUnknownSync( ::Dynamic f);
		static ::Dynamic ofUnknownSync_dyn();

		static  ::Dynamic ofSafe( ::Dynamic f);
		static ::Dynamic ofSafe_dyn();

		static  ::Dynamic ofUnknown( ::Dynamic f);
		static ::Dynamic ofUnknown_dyn();

};

} // end namespace tink
} // end namespace streams
} // end namespace _Stream

#endif /* INCLUDED_tink_streams__Stream_Handler_Impl_ */ 
