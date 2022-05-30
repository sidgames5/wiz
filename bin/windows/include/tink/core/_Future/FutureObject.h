#ifndef INCLUDED_tink_core__Future_FutureObject
#define INCLUDED_tink_core__Future_FutureObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tink,core,FutureStatus)
HX_DECLARE_CLASS2(tink,core,LinkObject)
HX_DECLARE_CLASS3(tink,core,_Future,FutureObject)

namespace tink{
namespace core{
namespace _Future{


class HXCPP_CLASS_ATTRIBUTES FutureObject_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::tink::core::FutureStatus (::hx::Object :: *_hx_getStatus)(); 
		static inline  ::tink::core::FutureStatus getStatus( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::_Future::FutureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xb1c7c493)))->_hx_getStatus)();
		}
		::Dynamic (::hx::Object :: *_hx_handle)( ::Dynamic callback); 
		static inline ::Dynamic handle( ::Dynamic _hx_, ::Dynamic callback) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::_Future::FutureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xb1c7c493)))->_hx_handle)(callback);
		}
		void (::hx::Object :: *_hx_eager)(); 
		static inline void eager( ::Dynamic _hx_) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::tink::core::_Future::FutureObject_obj *>(_hx_.mPtr->_hx_getInterface(0xb1c7c493)))->_hx_eager)();
		}
};

} // end namespace tink
} // end namespace core
} // end namespace _Future

#endif /* INCLUDED_tink_core__Future_FutureObject */ 
