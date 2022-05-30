#ifndef INCLUDED_tink_http_clients_CurlClient
#define INCLUDED_tink_http_clients_CurlClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tink_http_ClientObject
#include <tink/http/ClientObject.h>
#endif
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)
HX_DECLARE_CLASS2(tink,http,ClientObject)
HX_DECLARE_CLASS2(tink,http,Message)
HX_DECLARE_CLASS2(tink,http,OutgoingRequest)
HX_DECLARE_CLASS3(tink,http,clients,CurlClient)
HX_DECLARE_CLASS2(tink,streams,StreamObject)

namespace tink{
namespace http{
namespace clients{


class HXCPP_CLASS_ATTRIBUTES CurlClient_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CurlClient_obj OBJ_;
		CurlClient_obj();

	public:
		enum { _hx_ClassId = 0x1ef1a485 };

		void __construct( ::Dynamic curl);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tink.http.clients.CurlClient")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tink.http.clients.CurlClient"); }
		static ::hx::ObjectPtr< CurlClient_obj > __new( ::Dynamic curl);
		static ::hx::ObjectPtr< CurlClient_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic curl);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		static void __alloc_dynamic_functions(::hx::Ctx *_hx_alloc,CurlClient_obj *_hx_obj);
		//~CurlClient_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("CurlClient",77,86,3b,fe); }

		::Dynamic request( ::tink::http::OutgoingRequest req);
		::Dynamic request_dyn();

		::Dynamic curl;
		inline ::Dynamic &curl_dyn() {return curl; }

};

} // end namespace tink
} // end namespace http
} // end namespace clients

#endif /* INCLUDED_tink_http_clients_CurlClient */ 
