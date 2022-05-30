#ifndef INCLUDED_tink_http_IncomingRequestBody
#define INCLUDED_tink_http_IncomingRequestBody

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,NamedWith)
HX_DECLARE_CLASS2(tink,http,IncomingRequestBody)
HX_DECLARE_CLASS2(tink,streams,StreamObject)
namespace tink{
namespace http{


class IncomingRequestBody_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef IncomingRequestBody_obj OBJ_;

	public:
		IncomingRequestBody_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.http.IncomingRequestBody",41,e5,fc,1f); }
		::String __ToString() const { return HX_("IncomingRequestBody.",a3,3f,25,ff) + _hx_tag; }

		static ::tink::http::IncomingRequestBody Parsed(::Array< ::Dynamic> parts);
		static ::Dynamic Parsed_dyn();
		static ::tink::http::IncomingRequestBody Plain(::Dynamic source);
		static ::Dynamic Plain_dyn();
};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_IncomingRequestBody */ 
