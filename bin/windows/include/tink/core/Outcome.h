#ifndef INCLUDED_tink_core_Outcome
#define INCLUDED_tink_core_Outcome

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,Outcome)
namespace tink{
namespace core{


class Outcome_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Outcome_obj OBJ_;

	public:
		Outcome_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("tink.core.Outcome",5f,27,74,0c); }
		::String __ToString() const { return HX_("Outcome.",7c,83,a3,53) + _hx_tag; }

		static ::tink::core::Outcome Failure( ::Dynamic failure);
		static ::Dynamic Failure_dyn();
		static ::tink::core::Outcome Success( ::Dynamic data);
		static ::Dynamic Success_dyn();
};

} // end namespace tink
} // end namespace core

#endif /* INCLUDED_tink_core_Outcome */ 
