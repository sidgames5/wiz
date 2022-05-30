#include <hxcpp.h>

#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif
#ifndef INCLUDED_tink_streams_Reduction
#include <tink/streams/Reduction.h>
#endif
#ifndef INCLUDED_tink_streams_StreamObject
#include <tink/streams/StreamObject.h>
#endif
namespace tink{
namespace streams{

::tink::streams::Reduction Reduction_obj::Crashed( ::tink::core::TypedError error,::Dynamic at)
{
	return ::hx::CreateEnum< Reduction_obj >(HX_("Crashed",e6,47,fe,9c),0,2)->_hx_init(0,error)->_hx_init(1,at);
}

::tink::streams::Reduction Reduction_obj::Failed( ::tink::core::TypedError error)
{
	return ::hx::CreateEnum< Reduction_obj >(HX_("Failed",dd,39,93,1c),1,1)->_hx_init(0,error);
}

::tink::streams::Reduction Reduction_obj::Reduced( ::Dynamic result)
{
	return ::hx::CreateEnum< Reduction_obj >(HX_("Reduced",de,eb,9e,95),2,1)->_hx_init(0,result);
}

bool Reduction_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Crashed",e6,47,fe,9c)) { outValue = Reduction_obj::Crashed_dyn(); return true; }
	if (inName==HX_("Failed",dd,39,93,1c)) { outValue = Reduction_obj::Failed_dyn(); return true; }
	if (inName==HX_("Reduced",de,eb,9e,95)) { outValue = Reduction_obj::Reduced_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Reduction_obj)

int Reduction_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Crashed",e6,47,fe,9c)) return 0;
	if (inName==HX_("Failed",dd,39,93,1c)) return 1;
	if (inName==HX_("Reduced",de,eb,9e,95)) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reduction_obj,Crashed,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reduction_obj,Failed,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reduction_obj,Reduced,return)

int Reduction_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Crashed",e6,47,fe,9c)) return 2;
	if (inName==HX_("Failed",dd,39,93,1c)) return 1;
	if (inName==HX_("Reduced",de,eb,9e,95)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val Reduction_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Crashed",e6,47,fe,9c)) return Crashed_dyn();
	if (inName==HX_("Failed",dd,39,93,1c)) return Failed_dyn();
	if (inName==HX_("Reduced",de,eb,9e,95)) return Reduced_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Reduction_obj_sStaticFields[] = {
	HX_("Crashed",e6,47,fe,9c),
	HX_("Failed",dd,39,93,1c),
	HX_("Reduced",de,eb,9e,95),
	::String(null())
};

::hx::Class Reduction_obj::__mClass;

Dynamic __Create_Reduction_obj() { return new Reduction_obj; }

void Reduction_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("tink.streams.Reduction",5c,50,fe,4b), ::hx::TCanCast< Reduction_obj >,Reduction_obj_sStaticFields,0,
	&__Create_Reduction_obj, &__Create,
	&super::__SGetClass(), &CreateReduction_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Reduction_obj::__GetStatic;
}

void Reduction_obj::__boot()
{
}


} // end namespace tink
} // end namespace streams
