#ifndef INCLUDED_tink_http__Client_CustomClient
#define INCLUDED_tink_http__Client_CustomClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_http_ClientObject
#include <tink/http/ClientObject.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,http,ClientObject)
HX_DECLARE_CLASS2(tink,http,IncomingResponse)
HX_DECLARE_CLASS2(tink,http,Message)
HX_DECLARE_CLASS2(tink,http,OutgoingRequest)
HX_DECLARE_CLASS3(tink,http,_Client,CustomClient)

namespace tink{
namespace http{
namespace _Client{


class HXCPP_CLASS_ATTRIBUTES CustomClient_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CustomClient_obj OBJ_;
		CustomClient_obj();

	public:
		enum { _hx_ClassId = 0x16257e84 };

		void __construct(::Array< ::Dynamic> preprocessors,::Array< ::Dynamic> postprocessors,::Dynamic real);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http._Client.CustomClient")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http._Client.CustomClient"); }
		static ::hx::ObjectPtr< CustomClient_obj > __new(::Array< ::Dynamic> preprocessors,::Array< ::Dynamic> postprocessors,::Dynamic real);
		static ::hx::ObjectPtr< CustomClient_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> preprocessors,::Array< ::Dynamic> postprocessors,::Dynamic real);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CustomClient_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("CustomClient",fc,6c,ff,d1); }

		static ::cpp::VirtualArray concat(::cpp::VirtualArray a,::cpp::VirtualArray b);
		static ::Dynamic concat_dyn();

		static  ::tink::http::_Client::CustomClient create(::Dynamic c,::Array< ::Dynamic> preprocessors,::Array< ::Dynamic> postprocessors);
		static ::Dynamic create_dyn();

		::Array< ::Dynamic> preprocessors;
		::Array< ::Dynamic> postprocessors;
		::Dynamic real;
		::Dynamic pipe( ::Dynamic value,::Array< ::Dynamic> transforms, ::Dynamic index);
		::Dynamic pipe_dyn();

		::Dynamic request( ::tink::http::OutgoingRequest req);
		::Dynamic request_dyn();

};

} // end namespace tink
} // end namespace http
} // end namespace _Client

#endif /* INCLUDED_tink_http__Client_CustomClient */ 
