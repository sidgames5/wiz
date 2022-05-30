#ifndef INCLUDED_tink_streams__Stream_CloggedStream
#define INCLUDED_tink_streams__Stream_CloggedStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_streams_StreamBase
#include <tink/streams/StreamBase.h>
#endif
HX_DECLARE_CLASS2(tink,core,TypedError)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,streams,StreamBase)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
HX_DECLARE_CLASS3(tink,streams,_Stream,CloggedStream)

namespace tink{
namespace streams{
namespace _Stream{


class HXCPP_CLASS_ATTRIBUTES CloggedStream_obj : public  ::tink::streams::StreamBase_obj
{
	public:
		typedef  ::tink::streams::StreamBase_obj super;
		typedef CloggedStream_obj OBJ_;
		CloggedStream_obj();

	public:
		enum { _hx_ClassId = 0x7451b847 };

		void __construct(::Dynamic rest, ::tink::core::TypedError error);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.streams._Stream.CloggedStream")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.streams._Stream.CloggedStream"); }
		static ::hx::ObjectPtr< CloggedStream_obj > __new(::Dynamic rest, ::tink::core::TypedError error);
		static ::hx::ObjectPtr< CloggedStream_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic rest, ::tink::core::TypedError error);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CloggedStream_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CloggedStream",65,05,b6,30); }

		::Dynamic rest;
		 ::tink::core::TypedError error;
		::Dynamic next();

		::Dynamic forEach( ::Dynamic handler);

};

} // end namespace tink
} // end namespace streams
} // end namespace _Stream

#endif /* INCLUDED_tink_streams__Stream_CloggedStream */ 
