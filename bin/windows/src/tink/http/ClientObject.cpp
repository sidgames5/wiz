#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_http_ClientObject
#include <tink/http/ClientObject.h>
#endif
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif
#ifndef INCLUDED_tink_http_OutgoingRequest
#include <tink/http/OutgoingRequest.h>
#endif

namespace tink{
namespace http{


static ::String ClientObject_obj_sMemberFields[] = {
	HX_("request",4f,df,84,44),
	::String(null()) };

::hx::Class ClientObject_obj::__mClass;

void ClientObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.ClientObject",b4,8d,b4,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClientObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x9c46f484 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
