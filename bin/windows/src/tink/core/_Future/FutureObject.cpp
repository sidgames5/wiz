#include <hxcpp.h>

#ifndef INCLUDED_tink_core_FutureStatus
#include <tink/core/FutureStatus.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core__Future_FutureObject
#include <tink/core/_Future/FutureObject.h>
#endif

namespace tink{
namespace core{
namespace _Future{


static ::String FutureObject_obj_sMemberFields[] = {
	HX_("getStatus",68,70,52,82),
	HX_("handle",a8,83,fd,b7),
	HX_("eager",b8,c9,e4,67),
	::String(null()) };

::hx::Class FutureObject_obj::__mClass;

void FutureObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core._Future.FutureObject",61,6a,80,cf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FutureObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xb1c7c493 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
} // end namespace _Future
