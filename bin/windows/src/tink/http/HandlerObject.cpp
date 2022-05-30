#include <hxcpp.h>

#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif
#ifndef INCLUDED_tink_http_HandlerObject
#include <tink/http/HandlerObject.h>
#endif
#ifndef INCLUDED_tink_http_IncomingRequest
#include <tink/http/IncomingRequest.h>
#endif
#ifndef INCLUDED_tink_http_Message
#include <tink/http/Message.h>
#endif

namespace tink{
namespace http{


static ::String HandlerObject_obj_sMemberFields[] = {
	HX_("process",6f,a2,4a,f1),
	::String(null()) };

::hx::Class HandlerObject_obj::__mClass;

void HandlerObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.http.HandlerObject",9f,90,c8,c2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HandlerObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xee501fcf >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace http
