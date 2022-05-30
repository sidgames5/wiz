#ifndef INCLUDED_tink_io__Sink_FutureSink
#define INCLUDED_tink_io__Sink_FutureSink

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_io_SinkBase
#include <tink/io/SinkBase.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,io,SinkBase)
HX_DECLARE_CLASS2(tink,io,SinkObject)
HX_DECLARE_CLASS3(tink,io,_Sink,FutureSink)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace io{
namespace _Sink{


class HXCPP_CLASS_ATTRIBUTES FutureSink_obj : public  ::tink::io::SinkBase_obj
{
	public:
		typedef  ::tink::io::SinkBase_obj super;
		typedef FutureSink_obj OBJ_;
		FutureSink_obj();

	public:
		enum { _hx_ClassId = 0x18ce4f88 };

		void __construct(::Dynamic f);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.io._Sink.FutureSink")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.io._Sink.FutureSink"); }
		static ::hx::ObjectPtr< FutureSink_obj > __new(::Dynamic f);
		static ::hx::ObjectPtr< FutureSink_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic f);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FutureSink_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FutureSink",56,3c,31,dc); }

		::Dynamic f;
		::Dynamic consume(::Dynamic source, ::Dynamic options);

};

} // end namespace tink
} // end namespace io
} // end namespace _Sink

#endif /* INCLUDED_tink_io__Sink_FutureSink */ 
