#ifndef INCLUDED_tink_http_ClientType
#define INCLUDED_tink_http_ClientType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,http,ClientObject)
HX_DECLARE_CLASS2(tink,http,ClientType)
HX_DECLARE_CLASS2(tink,http,Container)
HX_DECLARE_CLASS3(tink,http,containers,LocalContainer)
namespace tink{
namespace http{


class ClientType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef ClientType_obj OBJ_;

	public:
		ClientType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.http.ClientType",6f,ea,c8,55); }
		::String __ToString() const { return HX_("ClientType.",c9,7d,23,dd) + _hx_tag; }

		static ::tink::http::ClientType Curl;
		static inline ::tink::http::ClientType Curl_dyn() { return Curl; }
		static ::tink::http::ClientType Custom(::Dynamic v);
		static ::Dynamic Custom_dyn();
		static ::tink::http::ClientType Default;
		static inline ::tink::http::ClientType Default_dyn() { return Default; }
		static ::tink::http::ClientType Local( ::tink::http::containers::LocalContainer container);
		static ::Dynamic Local_dyn();
		static ::tink::http::ClientType StdLib;
		static inline ::tink::http::ClientType StdLib_dyn() { return StdLib; }
};

} // end namespace tink
} // end namespace http

#endif /* INCLUDED_tink_http_ClientType */ 
