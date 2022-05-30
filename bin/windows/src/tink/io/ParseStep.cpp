#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_io_ParseStep
#include <tink/io/ParseStep.h>
#endif
namespace tink{
namespace io{

::tink::io::ParseStep ParseStep_obj::Done( ::Dynamic r)
{
	return ::hx::CreateEnum< ParseStep_obj >(HX_("Done",a2,1c,47,2d),1,1)->_hx_init(0,r);
}

::tink::io::ParseStep ParseStep_obj::Failed( ::tink::core::TypedError e)
{
	return ::hx::CreateEnum< ParseStep_obj >(HX_("Failed",dd,39,93,1c),2,1)->_hx_init(0,e);
}

::tink::io::ParseStep ParseStep_obj::Progressed;

bool ParseStep_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Done",a2,1c,47,2d)) { outValue = ParseStep_obj::Done_dyn(); return true; }
	if (inName==HX_("Failed",dd,39,93,1c)) { outValue = ParseStep_obj::Failed_dyn(); return true; }
	if (inName==HX_("Progressed",6c,59,4b,97)) { outValue = ParseStep_obj::Progressed; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ParseStep_obj)

int ParseStep_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Done",a2,1c,47,2d)) return 1;
	if (inName==HX_("Failed",dd,39,93,1c)) return 2;
	if (inName==HX_("Progressed",6c,59,4b,97)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ParseStep_obj,Done,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ParseStep_obj,Failed,return)

int ParseStep_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Done",a2,1c,47,2d)) return 1;
	if (inName==HX_("Failed",dd,39,93,1c)) return 1;
	if (inName==HX_("Progressed",6c,59,4b,97)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val ParseStep_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Done",a2,1c,47,2d)) return Done_dyn();
	if (inName==HX_("Failed",dd,39,93,1c)) return Failed_dyn();
	if (inName==HX_("Progressed",6c,59,4b,97)) return Progressed;
	return super::__Field(inName,inCallProp);
}

static ::String ParseStep_obj_sStaticFields[] = {
	HX_("Progressed",6c,59,4b,97),
	HX_("Done",a2,1c,47,2d),
	HX_("Failed",dd,39,93,1c),
	::String(null())
};

::hx::Class ParseStep_obj::__mClass;

Dynamic __Create_ParseStep_obj() { return new ParseStep_obj; }

void ParseStep_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.io.ParseStep",73,2b,8e,cf), ::hx::TCanCast< ParseStep_obj >,ParseStep_obj_sStaticFields,0,
	&__Create_ParseStep_obj, &__Create,
	&super::__SGetClass(), &CreateParseStep_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ParseStep_obj::__GetStatic;
}

void ParseStep_obj::__boot()
{
Progressed = ::hx::CreateConstEnum< ParseStep_obj >(HX_("Progressed",6c,59,4b,97),0);
}


} // end namespace tink
} // end namespace io
