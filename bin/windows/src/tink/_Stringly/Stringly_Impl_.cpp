#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_tink__Stringly_Stringly_Impl_
#include <tink/_Stringly/Stringly_Impl_.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_core_OutcomeTools
#include <tink/core/OutcomeTools.h>
#endif
#ifndef INCLUDED_tink_core_TypedError
#include <tink/core/TypedError.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_9_isNumber,"tink._Stringly.Stringly_Impl_","isNumber",0x9410e716,"tink._Stringly.Stringly_Impl_.isNumber","tink/Stringly.hx",9,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_51_toBool,"tink._Stringly.Stringly_Impl_","toBool",0x78c3ed48,"tink._Stringly.Stringly_Impl_.toBool","tink/Stringly.hx",51,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_57_isFloat,"tink._Stringly.Stringly_Impl_","isFloat",0x4e4badef,"tink._Stringly.Stringly_Impl_.isFloat","tink/Stringly.hx",57,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_61_parseFloat,"tink._Stringly.Stringly_Impl_","parseFloat",0x3ef1c7ec,"tink._Stringly.Stringly_Impl_.parseFloat","tink/Stringly.hx",61,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_69_toFloat,"tink._Stringly.Stringly_Impl_","toFloat",0x7e4a56be,"tink._Stringly.Stringly_Impl_.toFloat","tink/Stringly.hx",69,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_72_isInt,"tink._Stringly.Stringly_Impl_","isInt",0x9c942a82,"tink._Stringly.Stringly_Impl_.isInt","tink/Stringly.hx",72,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_76_parseInt,"tink._Stringly.Stringly_Impl_","parseInt",0x709edb3f,"tink._Stringly.Stringly_Impl_.parseInt","tink/Stringly.hx",76,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_84_toInt,"tink._Stringly.Stringly_Impl_","toInt",0xef57b191,"tink._Stringly.Stringly_Impl_.toInt","tink/Stringly.hx",84,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_97_parseDate,"tink._Stringly.Stringly_Impl_","parseDate",0x17090dde,"tink._Stringly.Stringly_Impl_.parseDate","tink/Stringly.hx",97,0x188723e3)
static const int _hx_array_data_e67f400b_14[] = {
	(int)31,(int)28,(int)31,(int)30,(int)31,(int)30,(int)31,(int)31,(int)30,(int)31,(int)30,(int)31,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_161_toDate,"tink._Stringly.Stringly_Impl_","toDate",0x7a0bbf4c,"tink._Stringly.Stringly_Impl_.toDate","tink/Stringly.hx",161,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_164_parse,"tink._Stringly.Stringly_Impl_","parse",0x989b8390,"tink._Stringly.Stringly_Impl_.parse","tink/Stringly.hx",164,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_167_ofBool,"tink._Stringly.Stringly_Impl_","ofBool",0x4a5fe6e4,"tink._Stringly.Stringly_Impl_.ofBool","tink/Stringly.hx",167,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_170_ofInt,"tink._Stringly.Stringly_Impl_","ofInt",0x0863df75,"tink._Stringly.Stringly_Impl_.ofInt","tink/Stringly.hx",170,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_173_ofFloat,"tink._Stringly.Stringly_Impl_","ofFloat",0x1528c5a2,"tink._Stringly.Stringly_Impl_.ofFloat","tink/Stringly.hx",173,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_176_ofDate,"tink._Stringly.Stringly_Impl_","ofDate",0x4ba7b8e8,"tink._Stringly.Stringly_Impl_.ofDate","tink/Stringly.hx",176,0x188723e3)
HX_LOCAL_STACK_FRAME(_hx_pos_e03db53fa39817a9_91_boot,"tink._Stringly.Stringly_Impl_","boot",0x27afeb75,"tink._Stringly.Stringly_Impl_.boot","tink/Stringly.hx",91,0x188723e3)
namespace tink{
namespace _Stringly{

void Stringly_Impl__obj::__construct() { }

Dynamic Stringly_Impl__obj::__CreateEmpty() { return new Stringly_Impl__obj; }

void *Stringly_Impl__obj::_hx_vtable = 0;

Dynamic Stringly_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Stringly_Impl__obj > _hx_result = new Stringly_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stringly_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6715c189;
}

bool Stringly_Impl__obj::isNumber(::String s,bool allowFloat){
            	HX_STACKFRAME(&_hx_pos_e03db53fa39817a9_9_isNumber)
HXLINE(  11)		if ((s.length == 0)) {
HXLINE(  11)			return false;
            		}
HXLINE(  13)		int pos = 0;
HXDLIN(  13)		int max = s.length;
HXLINE(  27)		bool _hx_tmp;
HXDLIN(  27)		if ((pos < max)) {
HXLINE(  27)			_hx_tmp = (s.cca(pos) == 45);
            		}
            		else {
HXLINE(  27)			_hx_tmp = false;
            		}
HXDLIN(  27)		if (_hx_tmp) {
HXLINE(  27)			pos = (pos + 1);
            		}
HXLINE(  29)		if (!(allowFloat)) {
HXLINE(  30)			bool _hx_tmp;
HXDLIN(  30)			bool _hx_tmp1;
HXDLIN(  30)			if ((pos < max)) {
HXLINE(  30)				_hx_tmp1 = (s.cca(pos) == 48);
            			}
            			else {
HXLINE(  30)				_hx_tmp1 = false;
            			}
HXDLIN(  30)			if (_hx_tmp1) {
HXLINE(  30)				pos = (pos + 1);
HXDLIN(  30)				_hx_tmp = ((pos - 1) > -1);
            			}
            			else {
HXLINE(  30)				_hx_tmp = false;
            			}
HXDLIN(  30)			if (_hx_tmp) {
HXLINE(  31)				bool _hx_tmp;
HXDLIN(  31)				if ((pos < max)) {
HXLINE(  31)					_hx_tmp = (s.cca(pos) == 120);
            				}
            				else {
HXLINE(  31)					_hx_tmp = false;
            				}
HXDLIN(  31)				if (_hx_tmp) {
HXLINE(  31)					pos = (pos + 1);
            				}
            			}
            		}
HXLINE(  34)		while(true){
HXLINE(  34)			bool _hx_tmp;
HXDLIN(  34)			if ((pos < max)) {
HXLINE(  34)				_hx_tmp = ((s.cca(pos) ^ 48) < 10);
            			}
            			else {
HXLINE(  34)				_hx_tmp = false;
            			}
HXDLIN(  34)			if (!(_hx_tmp)) {
HXLINE(  34)				goto _hx_goto_0;
            			}
HXDLIN(  34)			pos = (pos + 1);
            		}
            		_hx_goto_0:;
HXLINE(  36)		bool _hx_tmp1;
HXDLIN(  36)		if (allowFloat) {
HXLINE(  36)			_hx_tmp1 = (pos < max);
            		}
            		else {
HXLINE(  36)			_hx_tmp1 = false;
            		}
HXDLIN(  36)		if (_hx_tmp1) {
HXLINE(  37)			bool _hx_tmp;
HXDLIN(  37)			bool _hx_tmp1;
HXDLIN(  37)			if ((pos < max)) {
HXLINE(  37)				_hx_tmp1 = (s.cca(pos) == 46);
            			}
            			else {
HXLINE(  37)				_hx_tmp1 = false;
            			}
HXDLIN(  37)			if (_hx_tmp1) {
HXLINE(  37)				pos = (pos + 1);
HXDLIN(  37)				_hx_tmp = ((pos - 1) > -1);
            			}
            			else {
HXLINE(  37)				_hx_tmp = false;
            			}
HXDLIN(  37)			if (_hx_tmp) {
HXLINE(  38)				while(true){
HXLINE(  38)					bool _hx_tmp;
HXDLIN(  38)					if ((pos < max)) {
HXLINE(  38)						_hx_tmp = ((s.cca(pos) ^ 48) < 10);
            					}
            					else {
HXLINE(  38)						_hx_tmp = false;
            					}
HXDLIN(  38)					if (!(_hx_tmp)) {
HXLINE(  38)						goto _hx_goto_1;
            					}
HXDLIN(  38)					pos = (pos + 1);
            				}
            				_hx_goto_1:;
            			}
HXLINE(  40)			bool _hx_tmp2;
HXDLIN(  40)			bool _hx_tmp3;
HXDLIN(  40)			bool _hx_tmp4;
HXDLIN(  40)			if ((pos < max)) {
HXLINE(  40)				_hx_tmp4 = (s.cca(pos) == 101);
            			}
            			else {
HXLINE(  40)				_hx_tmp4 = false;
            			}
HXDLIN(  40)			if (_hx_tmp4) {
HXLINE(  40)				pos = (pos + 1);
HXDLIN(  40)				_hx_tmp3 = ((pos - 1) > -1);
            			}
            			else {
HXLINE(  40)				_hx_tmp3 = false;
            			}
HXDLIN(  40)			if (!(_hx_tmp3)) {
HXLINE(  40)				bool _hx_tmp;
HXDLIN(  40)				if ((pos < max)) {
HXLINE(  40)					_hx_tmp = (s.cca(pos) == 69);
            				}
            				else {
HXLINE(  40)					_hx_tmp = false;
            				}
HXDLIN(  40)				if (_hx_tmp) {
HXLINE(  40)					pos = (pos + 1);
HXDLIN(  40)					_hx_tmp2 = ((pos - 1) > -1);
            				}
            				else {
HXLINE(  40)					_hx_tmp2 = false;
            				}
            			}
            			else {
HXLINE(  40)				_hx_tmp2 = true;
            			}
HXDLIN(  40)			if (_hx_tmp2) {
HXLINE(  41)				bool _hx_tmp;
HXDLIN(  41)				bool _hx_tmp1;
HXDLIN(  41)				if ((pos < max)) {
HXLINE(  41)					_hx_tmp1 = (s.cca(pos) == 43);
            				}
            				else {
HXLINE(  41)					_hx_tmp1 = false;
            				}
HXDLIN(  41)				if (_hx_tmp1) {
HXLINE(  41)					pos = (pos + 1);
HXDLIN(  41)					_hx_tmp = ((pos - 1) > -1);
            				}
            				else {
HXLINE(  41)					_hx_tmp = false;
            				}
HXDLIN(  41)				if (!(_hx_tmp)) {
HXLINE(  41)					bool _hx_tmp;
HXDLIN(  41)					if ((pos < max)) {
HXLINE(  41)						_hx_tmp = (s.cca(pos) == 45);
            					}
            					else {
HXLINE(  41)						_hx_tmp = false;
            					}
HXDLIN(  41)					if (_hx_tmp) {
HXLINE(  41)						pos = (pos + 1);
            					}
            				}
HXLINE(  42)				while(true){
HXLINE(  42)					bool _hx_tmp;
HXDLIN(  42)					if ((pos < max)) {
HXLINE(  42)						_hx_tmp = ((s.cca(pos) ^ 48) < 10);
            					}
            					else {
HXLINE(  42)						_hx_tmp = false;
            					}
HXDLIN(  42)					if (!(_hx_tmp)) {
HXLINE(  42)						goto _hx_goto_2;
            					}
HXDLIN(  42)					pos = (pos + 1);
            				}
            				_hx_goto_2:;
            			}
            		}
HXLINE(  46)		return (pos == max);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Stringly_Impl__obj,isNumber,return )

bool Stringly_Impl__obj::toBool(::String this1){
            	HX_STACKFRAME(&_hx_pos_e03db53fa39817a9_51_toBool)
HXDLIN(  51)		if (::hx::IsNotNull( this1 )) {
HXDLIN(  51)			::String _hx_switch_0 = ::StringTools_obj::trim(this1).toLowerCase();
            			if (  (_hx_switch_0==HX_("0",30,00,00,00)) ||  (_hx_switch_0==HX_("false",a3,35,4f,fb)) ||  (_hx_switch_0==HX_("no",41,60,00,00)) ){
HXLINE(  52)				return false;
HXDLIN(  52)				goto _hx_goto_4;
            			}
            			/* default */{
HXLINE(  53)				return true;
            			}
            			_hx_goto_4:;
            		}
            		else {
HXDLIN(  51)			return false;
            		}
HXDLIN(  51)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stringly_Impl__obj,toBool,return )

bool Stringly_Impl__obj::isFloat(::String this1){
            	HX_STACKFRAME(&_hx_pos_e03db53fa39817a9_57_isFloat)
HXDLIN(  57)		return ::tink::_Stringly::Stringly_Impl__obj::isNumber(::StringTools_obj::trim(this1),true);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stringly_Impl__obj,isFloat,return )

 ::tink::core::Outcome Stringly_Impl__obj::parseFloat(::String this1){
            	HX_GC_STACKFRAME(&_hx_pos_e03db53fa39817a9_61_parseFloat)
HXDLIN(  61)		::String _g = ::StringTools_obj::trim(this1);
HXLINE(  62)		::String v = _g;
HXDLIN(  62)		if (::tink::_Stringly::Stringly_Impl__obj::isNumber(v,true)) {
HXLINE(  63)			return ::tink::core::Outcome_obj::Success(::Std_obj::parseFloat(v));
            		}
            		else {
HXLINE(  64)			::String v = _g;
HXLINE(  65)			return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,422,((((HX_("",00,00,00,00) + v) + HX_(" (encoded as ",54,64,e4,1f)) + this1) + HX_(") is not a valid float",0d,01,79,99)),::hx::SourceInfo(HX_("tink/Stringly.hx",e3,23,87,18),65,HX_("tink._Stringly.Stringly_Impl_",0b,40,7f,e6),HX_("parseFloat",69,0c,78,2c))));
            		}
HXLINE(  62)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stringly_Impl__obj,parseFloat,return )

Float Stringly_Impl__obj::toFloat(::String this1){
            	HX_STACKFRAME(&_hx_pos_e03db53fa39817a9_69_toFloat)
HXDLIN(  69)		return ( (Float)(::tink::core::OutcomeTools_obj::sure(::tink::_Stringly::Stringly_Impl__obj::parseFloat(this1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stringly_Impl__obj,toFloat,return )

bool Stringly_Impl__obj::isInt(::String this1){
            	HX_STACKFRAME(&_hx_pos_e03db53fa39817a9_72_isInt)
HXDLIN(  72)		return ::tink::_Stringly::Stringly_Impl__obj::isNumber(::StringTools_obj::trim(this1),false);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stringly_Impl__obj,isInt,return )

 ::tink::core::Outcome Stringly_Impl__obj::parseInt(::String this1){
            	HX_GC_STACKFRAME(&_hx_pos_e03db53fa39817a9_76_parseInt)
HXDLIN(  76)		::String _g = ::StringTools_obj::trim(this1);
HXLINE(  77)		::String v = _g;
HXDLIN(  77)		if (::tink::_Stringly::Stringly_Impl__obj::isNumber(v,false)) {
HXLINE(  78)			return ::tink::core::Outcome_obj::Success(( (int)(::Std_obj::parseInt(v)) ));
            		}
            		else {
HXLINE(  79)			::String v = _g;
HXLINE(  80)			return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,422,((((HX_("",00,00,00,00) + v) + HX_(" (encoded as ",54,64,e4,1f)) + this1) + HX_(") is not a valid integer",6f,77,98,d7)),::hx::SourceInfo(HX_("tink/Stringly.hx",e3,23,87,18),80,HX_("tink._Stringly.Stringly_Impl_",0b,40,7f,e6),HX_("parseInt",7c,16,72,d6))));
            		}
HXLINE(  77)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stringly_Impl__obj,parseInt,return )

int Stringly_Impl__obj::toInt(::String this1){
            	HX_STACKFRAME(&_hx_pos_e03db53fa39817a9_84_toInt)
HXDLIN(  84)		return ( (int)(::tink::core::OutcomeTools_obj::sure(::tink::_Stringly::Stringly_Impl__obj::parseInt(this1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stringly_Impl__obj,toInt,return )

 ::EReg Stringly_Impl__obj::SUPPORTED_DATE_REGEX;

 ::tink::core::Outcome Stringly_Impl__obj::parseDate(::String this1){
            	HX_GC_STACKFRAME(&_hx_pos_e03db53fa39817a9_97_parseDate)
HXDLIN(  97)		 ::tink::core::Outcome _g = ::tink::_Stringly::Stringly_Impl__obj::parseFloat(this1);
HXDLIN(  97)		switch((int)(_g->_hx_getIndex())){
            			case (int)0: {
HXLINE(  98)				Float f = ( (Float)(_g->_hx_getObject(0)) );
HXLINE(  99)				return ::tink::core::Outcome_obj::Success(::Date_obj::fromTime(f));
            			}
            			break;
            			case (int)1: {
HXLINE( 100)				 ::tink::core::TypedError _g1 = ( ( ::tink::core::TypedError)(_g->_hx_getObject(0)) );
HXLINE( 101)				if (!(::tink::_Stringly::Stringly_Impl__obj::SUPPORTED_DATE_REGEX->match(this1))) {
HXLINE( 101)					return ::tink::core::Outcome_obj::Failure( ::tink::core::TypedError_obj::__alloc( HX_CTX ,422,((HX_("",00,00,00,00) + this1) + HX_(" is not a valid date",34,a9,53,0e)),::hx::SourceInfo(HX_("tink/Stringly.hx",e3,23,87,18),101,HX_("tink._Stringly.Stringly_Impl_",0b,40,7f,e6),HX_("parseDate",01,a8,09,ca))));
            				}
HXLINE( 124)				::Array< ::String > s = ::tink::_Stringly::Stringly_Impl__obj::SUPPORTED_DATE_REGEX->matched(1).split(HX_("T",54,00,00,00));
HXLINE( 125)				::Array< ::String > d = s->__get(0).split(HX_("-",2d,00,00,00));
HXLINE( 126)				::Array< ::String > t = s->__get(1).split(HX_(":",3a,00,00,00));
HXLINE( 127)				int y = (( (int)(::Std_obj::parseInt(d->__get(0))) ) - 1970);
HXLINE( 128)				 ::Dynamic m = ::Std_obj::parseInt(d->__get(1));
HXLINE( 129)				 ::Dynamic d1 = ::Std_obj::parseInt(d->__get(2));
HXLINE( 130)				 ::Dynamic hh = ::Std_obj::parseInt(t->__get(0));
HXLINE( 131)				 ::Dynamic mm = ::Std_obj::parseInt(t->__get(1));
HXLINE( 132)				 ::Dynamic ss = ::Std_obj::parseInt(t->__get(2));
HXLINE( 134)				int days = (((y * 365) + d1) - 1);
HXLINE( 135)				int days1;
HXDLIN( 135)				if ((y < 2)) {
HXLINE( 135)					days1 = 0;
            				}
            				else {
HXLINE( 135)					days1 = ::Std_obj::_hx_int((( (Float)((y - 2)) ) / ( (Float)(4) )));
            				}
HXDLIN( 135)				days = (days + days1);
HXLINE( 136)				::Array< int > daysOfMonth = ::Array_obj< int >::fromData( _hx_array_data_e67f400b_14,12);
HXLINE( 137)				{
HXLINE( 137)					int _g2 = 0;
HXDLIN( 137)					int _g3 = (( (int)(m) ) - 1);
HXDLIN( 137)					while((_g2 < _g3)){
HXLINE( 137)						_g2 = (_g2 + 1);
HXDLIN( 137)						int m = (_g2 - 1);
HXDLIN( 137)						days = (days + daysOfMonth->__get(m));
            					}
            				}
HXLINE( 138)				if ((y >= 2)) {
HXLINE( 138)					bool _hx_tmp;
HXDLIN( 138)					if ((::hx::Mod((y - 2),4) == 0)) {
HXLINE( 138)						_hx_tmp = ::hx::IsGreaterEq( m,3 );
            					}
            					else {
HXLINE( 138)						_hx_tmp = true;
            					}
HXDLIN( 138)					if (_hx_tmp) {
HXLINE( 138)						days = (days + 1);
            					}
            				}
HXLINE( 139)				int stamp = ((((days * 86400) + (( (int)(hh) ) * 3600)) + (( (int)(mm) ) * 60)) + ss);
HXLINE( 141)				::String _g4 = ::tink::_Stringly::Stringly_Impl__obj::SUPPORTED_DATE_REGEX->matched(2);
HXDLIN( 141)				Float stamp1;
HXLINE( 142)				if (::hx::IsNull( _g4 )) {
HXLINE( 141)					stamp1 = ((Float)0.0);
            				}
            				else {
HXLINE( 143)					::String v = _g4;
HXLINE( 141)					stamp1 = (( (Float)(::Std_obj::parseInt(v.substr(1,null()))) ) / ( (Float)(1000) ));
            				}
HXDLIN( 141)				Float stamp2 = (stamp + stamp1);
HXLINE( 146)				::String _g5 = ::tink::_Stringly::Stringly_Impl__obj::SUPPORTED_DATE_REGEX->matched(3);
HXDLIN( 146)				Float stamp3;
HXDLIN( 146)				if ((_g5 == HX_("Z",5a,00,00,00))) {
HXLINE( 146)					stamp3 = ((Float)0.0);
            				}
            				else {
HXLINE( 148)					::String v = _g5;
HXLINE( 149)					bool positive = ::hx::IsEq( v.charCodeAt(0),43 );
HXLINE( 150)					::Array< ::String > s = v.substr(1,null()).split(HX_(":",3a,00,00,00));
HXLINE( 151)					int stamp = (( (int)(::Std_obj::parseInt(s->__get(0))) ) * 3600);
HXDLIN( 151)					int stamp1 = (stamp + (( (int)(::Std_obj::parseInt(s->__get(1))) ) * 60));
HXDLIN( 151)					int stamp2;
HXDLIN( 151)					if (positive) {
HXLINE( 151)						stamp2 = -1;
            					}
            					else {
HXLINE( 151)						stamp2 = 1;
            					}
HXLINE( 146)					stamp3 = ( (Float)((stamp1 * stamp2)) );
            				}
HXDLIN( 146)				Float stamp4 = (stamp2 + stamp3);
HXLINE( 154)				return ::tink::core::Outcome_obj::Success(::Date_obj::fromTime((stamp4 * ( (Float)(1000) ))));
            			}
            			break;
            		}
HXLINE(  97)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stringly_Impl__obj,parseDate,return )

 ::Date Stringly_Impl__obj::toDate(::String this1){
            	HX_STACKFRAME(&_hx_pos_e03db53fa39817a9_161_toDate)
HXDLIN( 161)		return ( ( ::Date)(::tink::core::OutcomeTools_obj::sure(::tink::_Stringly::Stringly_Impl__obj::parseDate(this1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stringly_Impl__obj,toDate,return )

 ::tink::core::Outcome Stringly_Impl__obj::parse(::String this1, ::Dynamic f){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,a1, ::Dynamic,_g) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_e03db53fa39817a9_164_parse)
HXDLIN( 164)			return _g(a1);
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_e03db53fa39817a9_164_parse)
HXDLIN( 164)		 ::Dynamic _g = f;
HXDLIN( 164)		::String a1 = this1;
HXDLIN( 164)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(a1,_g));
HXDLIN( 164)		return ::tink::core::TypedError_obj::catchExceptions(_hx_tmp,null(),::hx::SourceInfo(HX_("tink/Stringly.hx",e3,23,87,18),164,HX_("tink._Stringly.Stringly_Impl_",0b,40,7f,e6),HX_("parse",33,90,55,bd)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Stringly_Impl__obj,parse,return )

::String Stringly_Impl__obj::ofBool(bool b){
            	HX_STACKFRAME(&_hx_pos_e03db53fa39817a9_167_ofBool)
HXDLIN( 167)		if (b) {
HXDLIN( 167)			return HX_("true",4e,a7,03,4d);
            		}
            		else {
HXDLIN( 167)			return HX_("false",a3,35,4f,fb);
            		}
HXDLIN( 167)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stringly_Impl__obj,ofBool,return )

::String Stringly_Impl__obj::ofInt(int i){
            	HX_STACKFRAME(&_hx_pos_e03db53fa39817a9_170_ofInt)
HXDLIN( 170)		return ::Std_obj::string(i);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stringly_Impl__obj,ofInt,return )

::String Stringly_Impl__obj::ofFloat(Float f){
            	HX_STACKFRAME(&_hx_pos_e03db53fa39817a9_173_ofFloat)
HXDLIN( 173)		return ::Std_obj::string(f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stringly_Impl__obj,ofFloat,return )

::String Stringly_Impl__obj::ofDate( ::Date d){
            	HX_STACKFRAME(&_hx_pos_e03db53fa39817a9_176_ofDate)
HXDLIN( 176)		return ::Std_obj::string(d->getTime());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stringly_Impl__obj,ofDate,return )


Stringly_Impl__obj::Stringly_Impl__obj()
{
}

bool Stringly_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"isInt") ) { outValue = isInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofInt") ) { outValue = ofInt_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toBool") ) { outValue = toBool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toDate") ) { outValue = toDate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofBool") ) { outValue = ofBool_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofDate") ) { outValue = ofDate_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isFloat") ) { outValue = isFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toFloat") ) { outValue = toFloat_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"ofFloat") ) { outValue = ofFloat_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isNumber") ) { outValue = isNumber_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"parseInt") ) { outValue = parseInt_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseDate") ) { outValue = parseDate_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseFloat") ) { outValue = parseFloat_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Stringly_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Stringly_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(void *) &Stringly_Impl__obj::SUPPORTED_DATE_REGEX,HX_("SUPPORTED_DATE_REGEX",67,f8,7d,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Stringly_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stringly_Impl__obj::SUPPORTED_DATE_REGEX,"SUPPORTED_DATE_REGEX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stringly_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stringly_Impl__obj::SUPPORTED_DATE_REGEX,"SUPPORTED_DATE_REGEX");
};

#endif

::hx::Class Stringly_Impl__obj::__mClass;

static ::String Stringly_Impl__obj_sStaticFields[] = {
	HX_("isNumber",53,22,e4,f9),
	HX_("toBool",45,ef,d4,76),
	HX_("isFloat",52,69,1c,9f),
	HX_("parseFloat",69,0c,78,2c),
	HX_("toFloat",21,12,1b,cf),
	HX_("isInt",25,37,4e,c1),
	HX_("parseInt",7c,16,72,d6),
	HX_("toInt",34,be,11,14),
	HX_("SUPPORTED_DATE_REGEX",67,f8,7d,b0),
	HX_("parseDate",01,a8,09,ca),
	HX_("toDate",49,c1,1c,78),
	HX_("parse",33,90,55,bd),
	HX_("ofBool",e1,e8,70,48),
	HX_("ofInt",18,ec,1d,2d),
	HX_("ofFloat",05,81,f9,65),
	HX_("ofDate",e5,ba,b8,49),
	::String(null())
};

void Stringly_Impl__obj::__register()
{
	Stringly_Impl__obj _hx_dummy;
	Stringly_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink._Stringly.Stringly_Impl_",0b,40,7f,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stringly_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Stringly_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Stringly_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Stringly_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stringly_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stringly_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stringly_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Stringly_Impl__obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_e03db53fa39817a9_91_boot)
HXDLIN(  91)		SUPPORTED_DATE_REGEX =  ::EReg_obj::__alloc( HX_CTX ,HX_("^(\\d{4}-\\d{2}-\\d{2}T\\d{2}:\\d{2}:\\d{2})(\\.\\d{3})?(Z|[\\+-]\\d{2}:\\d{2})$",b1,10,5f,dc),HX_("",00,00,00,00));
            	}
}

} // end namespace tink
} // end namespace _Stringly
