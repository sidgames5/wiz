#ifndef INCLUDED_tink_io__Sink_SinkYielding_Impl_
#define INCLUDED_tink_io__Sink_SinkYielding_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,io,SinkObject)
HX_DECLARE_CLASS3(tink,io,_Sink,SinkYielding_Impl_)

namespace tink{
namespace io{
namespace _Sink{


class HXCPP_CLASS_ATTRIBUTES SinkYielding_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SinkYielding_Impl__obj OBJ_;
		SinkYielding_Impl__obj();

	public:
		enum { _hx_ClassId = 0x1dd8821a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tink.io._Sink.SinkYielding_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tink.io._Sink.SinkYielding_Impl_"); }

		inline static ::hx::ObjectPtr< SinkYielding_Impl__obj > __new() {
			::hx::ObjectPtr< SinkYielding_Impl__obj > __this = new SinkYielding_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SinkYielding_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			SinkYielding_Impl__obj *__this = (SinkYielding_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SinkYielding_Impl__obj), false, "tink.io._Sink.SinkYielding_Impl_"));
			*(void **)__this = SinkYielding_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SinkYielding_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SinkYielding_Impl_",e8,ec,49,5e); }

		static void __boot();
		static ::Dynamic BLACKHOLE;
		static ::Dynamic end(::Dynamic this1);
		static ::Dynamic end_dyn();

		static ::Dynamic dirty(::Dynamic this1);
		static ::Dynamic dirty_dyn();

		static ::Dynamic ofError( ::tink::core::TypedError e);
		static ::Dynamic ofError_dyn();

		static ::Dynamic ofPromised(::Dynamic p);
		static ::Dynamic ofPromised_dyn();

		static ::Dynamic ofOutput(::String name, ::haxe::io::Output target, ::Dynamic options);
		static ::Dynamic ofOutput_dyn();

};

} // end namespace tink
} // end namespace io
} // end namespace _Sink

#endif /* INCLUDED_tink_io__Sink_SinkYielding_Impl_ */ 
