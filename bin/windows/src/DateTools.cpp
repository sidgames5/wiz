#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DateTools
#include <DateTools.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_exceptions_NotImplementedException
#include <haxe/exceptions/NotImplementedException.h>
#endif
#ifndef INCLUDED_haxe_exceptions_PosException
#include <haxe/exceptions/PosException.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f12ba685b3327fbe_45___format_get,"DateTools","__format_get",0xabb90f8f,"DateTools.__format_get","C:\\HaxeToolkit\\haxe\\std/DateTools.hx",45,0x95672d4a)
HX_LOCAL_STACK_FRAME(_hx_pos_f12ba685b3327fbe_105___format,"DateTools","__format",0x77c4edf8,"DateTools.__format","C:\\HaxeToolkit\\haxe\\std/DateTools.hx",105,0x95672d4a)
HX_LOCAL_STACK_FRAME(_hx_pos_f12ba685b3327fbe_150_format,"DateTools","format",0x1113a898,"DateTools.format","C:\\HaxeToolkit\\haxe\\std/DateTools.hx",150,0x95672d4a)
HX_LOCAL_STACK_FRAME(_hx_pos_f12ba685b3327fbe_35_boot,"DateTools","boot",0x6615d353,"DateTools.boot","C:\\HaxeToolkit\\haxe\\std/DateTools.hx",35,0x95672d4a)
static const ::String _hx_array_data_955e64ed_6[] = {
	HX_("Sun",6c,61,3f,00),HX_("Mon",ac,ce,3a,00),HX_("Tue",a4,23,40,00),HX_("Wed",76,5c,42,00),HX_("Thu",61,18,40,00),HX_("Fri",7d,81,35,00),HX_("Sat",06,50,3f,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f12ba685b3327fbe_36_boot,"DateTools","boot",0x6615d353,"DateTools.boot","C:\\HaxeToolkit\\haxe\\std/DateTools.hx",36,0x95672d4a)
static const ::String _hx_array_data_955e64ed_8[] = {
	HX_("Sunday",70,80,82,d6),HX_("Monday",30,db,f6,fb),HX_("Tuesday",6d,85,94,e0),HX_("Wednesday",76,20,5e,ee),HX_("Thursday",3a,c9,04,61),HX_("Friday",ff,00,5d,e6),HX_("Saturday",59,42,eb,57),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f12ba685b3327fbe_37_boot,"DateTools","boot",0x6615d353,"DateTools.boot","C:\\HaxeToolkit\\haxe\\std/DateTools.hx",37,0x95672d4a)
static const ::String _hx_array_data_955e64ed_10[] = {
	HX_("Jan",b7,7b,38,00),HX_("Feb",23,76,35,00),HX_("Mar",7e,c2,3a,00),HX_("Apr",83,b4,31,00),HX_("May",85,c2,3a,00),HX_("Jun",23,8d,38,00),HX_("Jul",21,8d,38,00),HX_("Aug",d3,b8,31,00),HX_("Sep",7e,53,3f,00),HX_("Oct",c0,48,3c,00),HX_("Nov",f5,90,3b,00),HX_("Dec",a2,f1,33,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_f12ba685b3327fbe_40_boot,"DateTools","boot",0x6615d353,"DateTools.boot","C:\\HaxeToolkit\\haxe\\std/DateTools.hx",40,0x95672d4a)
static const ::String _hx_array_data_955e64ed_12[] = {
	HX_("January",4a,18,86,71),HX_("February",82,81,0a,2c),HX_("March",a3,34,4f,96),HX_("April",26,77,6a,b7),HX_("May",85,c2,3a,00),HX_("June",e2,f1,42,31),HX_("July",38,f0,42,31),HX_("August",63,79,82,9f),HX_("September",f1,6e,c5,f7),HX_("October",00,0d,99,7e),HX_("November",d2,64,19,13),HX_("December",05,71,82,9e),
};

void DateTools_obj::__construct() { }

Dynamic DateTools_obj::__CreateEmpty() { return new DateTools_obj; }

void *DateTools_obj::_hx_vtable = 0;

Dynamic DateTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DateTools_obj > _hx_result = new DateTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DateTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x58a1da2d;
}

::Array< ::String > DateTools_obj::DAY_SHORT_NAMES;

::Array< ::String > DateTools_obj::DAY_NAMES;

::Array< ::String > DateTools_obj::MONTH_SHORT_NAMES;

::Array< ::String > DateTools_obj::MONTH_NAMES;

::String DateTools_obj::_hx___format_get( ::Date d,::String e){
            	HX_GC_STACKFRAME(&_hx_pos_f12ba685b3327fbe_45___format_get)
HXDLIN(  45)		::String _hx_switch_0 = e;
            		if (  (_hx_switch_0==HX_("%",25,00,00,00)) ){
HXLINE(  47)			return HX_("%",25,00,00,00);
HXDLIN(  47)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("A",41,00,00,00)) ){
HXLINE(  51)			return ::DateTools_obj::DAY_NAMES->__get(d->getDay());
HXDLIN(  51)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("B",42,00,00,00)) ){
HXLINE(  55)			return ::DateTools_obj::MONTH_NAMES->__get(d->getMonth());
HXDLIN(  55)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("C",43,00,00,00)) ){
HXLINE(  57)			return ::StringTools_obj::lpad(::Std_obj::string(::Std_obj::_hx_int((( (Float)(d->getFullYear()) ) / ( (Float)(100) )))),HX_("0",30,00,00,00),2);
HXDLIN(  57)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("D",44,00,00,00)) ){
HXLINE(  61)			return ::DateTools_obj::_hx___format(d,HX_("%m/%d/%y",7d,9b,c4,53));
HXDLIN(  61)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("F",46,00,00,00)) ){
HXLINE(  65)			return ::DateTools_obj::_hx___format(d,HX_("%Y-%m-%d",ab,02,52,4d));
HXDLIN(  65)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("I",49,00,00,00)) ||  (_hx_switch_0==HX_("l",6c,00,00,00)) ){
HXLINE(  69)			int hour = ::hx::Mod(d->getHours(),12);
HXLINE(  70)			 ::Dynamic _hx_tmp;
HXDLIN(  70)			if ((hour == 0)) {
HXLINE(  70)				_hx_tmp = 12;
            			}
            			else {
HXLINE(  70)				_hx_tmp = hour;
            			}
HXDLIN(  70)			::String _hx_tmp1 = ::Std_obj::string(_hx_tmp);
HXDLIN(  70)			::String _hx_tmp2;
HXDLIN(  70)			if ((e == HX_("I",49,00,00,00))) {
HXLINE(  70)				_hx_tmp2 = HX_("0",30,00,00,00);
            			}
            			else {
HXLINE(  70)				_hx_tmp2 = HX_(" ",20,00,00,00);
            			}
HXDLIN(  70)			return ::StringTools_obj::lpad(_hx_tmp1,_hx_tmp2,2);
HXLINE(  68)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("M",4d,00,00,00)) ){
HXLINE(  74)			return ::StringTools_obj::lpad(::Std_obj::string(d->getMinutes()),HX_("0",30,00,00,00),2);
HXDLIN(  74)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("R",52,00,00,00)) ){
HXLINE(  82)			return ::DateTools_obj::_hx___format(d,HX_("%H:%M",9f,f6,96,7d));
HXDLIN(  82)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("S",53,00,00,00)) ){
HXLINE(  86)			return ::StringTools_obj::lpad(::Std_obj::string(d->getSeconds()),HX_("0",30,00,00,00),2);
HXDLIN(  86)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("T",54,00,00,00)) ){
HXLINE(  90)			return ::DateTools_obj::_hx___format(d,HX_("%H:%M:%S",09,da,eb,a7));
HXDLIN(  90)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("Y",59,00,00,00)) ){
HXLINE(  99)			return ::Std_obj::string(d->getFullYear());
HXDLIN(  99)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("a",61,00,00,00)) ){
HXLINE(  49)			return ::DateTools_obj::DAY_SHORT_NAMES->__get(d->getDay());
HXDLIN(  49)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("b",62,00,00,00)) ||  (_hx_switch_0==HX_("h",68,00,00,00)) ){
HXLINE(  53)			return ::DateTools_obj::MONTH_SHORT_NAMES->__get(d->getMonth());
HXDLIN(  53)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("d",64,00,00,00)) ){
HXLINE(  59)			return ::StringTools_obj::lpad(::Std_obj::string(d->getDate()),HX_("0",30,00,00,00),2);
HXDLIN(  59)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("e",65,00,00,00)) ){
HXLINE(  63)			return ::Std_obj::string(d->getDate());
HXDLIN(  63)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("H",48,00,00,00)) ||  (_hx_switch_0==HX_("k",6b,00,00,00)) ){
HXLINE(  67)			::String _hx_tmp = ::Std_obj::string(d->getHours());
HXDLIN(  67)			::String _hx_tmp1;
HXDLIN(  67)			if ((e == HX_("H",48,00,00,00))) {
HXLINE(  67)				_hx_tmp1 = HX_("0",30,00,00,00);
            			}
            			else {
HXLINE(  67)				_hx_tmp1 = HX_(" ",20,00,00,00);
            			}
HXDLIN(  67)			return ::StringTools_obj::lpad(_hx_tmp,_hx_tmp1,2);
HXDLIN(  67)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("m",6d,00,00,00)) ){
HXLINE(  72)			return ::StringTools_obj::lpad(::Std_obj::string((d->getMonth() + 1)),HX_("0",30,00,00,00),2);
HXDLIN(  72)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("n",6e,00,00,00)) ){
HXLINE(  76)			return HX_("\n",0a,00,00,00);
HXDLIN(  76)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("p",70,00,00,00)) ){
HXLINE(  78)			if ((d->getHours() > 11)) {
HXLINE(  78)				return HX_("PM",fd,45,00,00);
            			}
            			else {
HXLINE(  78)				return HX_("AM",ec,38,00,00);
            			}
HXDLIN(  78)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("r",72,00,00,00)) ){
HXLINE(  80)			return ::DateTools_obj::_hx___format(d,HX_("%I:%M:%S %p",41,32,ce,bb));
HXDLIN(  80)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("s",73,00,00,00)) ){
HXLINE(  84)			return ::Std_obj::string(::Std_obj::_hx_int((d->getTime() / ( (Float)(1000) ))));
HXDLIN(  84)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("t",74,00,00,00)) ){
HXLINE(  88)			return HX_("\t",09,00,00,00);
HXDLIN(  88)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("u",75,00,00,00)) ){
HXLINE(  92)			int t = d->getDay();
HXLINE(  93)			if ((t == 0)) {
HXLINE(  93)				return HX_("7",37,00,00,00);
            			}
            			else {
HXLINE(  93)				return ::Std_obj::string(t);
            			}
HXLINE(  91)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("w",77,00,00,00)) ){
HXLINE(  95)			return ::Std_obj::string(d->getDay());
HXDLIN(  95)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("y",79,00,00,00)) ){
HXLINE(  97)			return ::StringTools_obj::lpad(::Std_obj::string(::hx::Mod(d->getFullYear(),100)),HX_("0",30,00,00,00),2);
HXDLIN(  97)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE( 101)			HX_STACK_DO_THROW( ::haxe::exceptions::NotImplementedException_obj::__alloc( HX_CTX ,((HX_("Date.format %",1c,c9,ee,03) + e) + HX_("- not implemented yet.",a4,96,be,31)),null(),::hx::SourceInfo(HX_("DateTools.hx",f1,ef,82,4f),101,HX_("DateTools",ed,64,5e,95),HX_("__format_get",6e,37,39,4c))));
            		}
            		_hx_goto_0:;
HXLINE(  45)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateTools_obj,_hx___format_get,return )

::String DateTools_obj::_hx___format( ::Date d,::String f){
            	HX_GC_STACKFRAME(&_hx_pos_f12ba685b3327fbe_105___format)
HXLINE( 106)		 ::StringBuf r =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 107)		int p = 0;
HXLINE( 108)		while(true){
HXLINE( 109)			int np = f.indexOf(HX_("%",25,00,00,00),p);
HXLINE( 110)			if ((np < 0)) {
HXLINE( 111)				goto _hx_goto_2;
            			}
HXLINE( 113)			{
HXLINE( 113)				 ::Dynamic len = (np - p);
HXDLIN( 113)				if (::hx::IsNotNull( r->charBuf )) {
HXLINE( 113)					r->flush();
            				}
HXDLIN( 113)				if (::hx::IsNull( r->b )) {
HXLINE( 113)					r->b = ::Array_obj< ::String >::__new(1)->init(0,f.substr(p,len));
            				}
            				else {
HXLINE( 113)					::Array< ::String > r1 = r->b;
HXDLIN( 113)					r1->push(f.substr(p,len));
            				}
            			}
HXLINE( 114)			{
HXLINE( 114)				::String x = ::DateTools_obj::_hx___format_get(d,f.substr((np + 1),1));
HXDLIN( 114)				if (::hx::IsNotNull( r->charBuf )) {
HXLINE( 114)					r->flush();
            				}
HXDLIN( 114)				if (::hx::IsNull( r->b )) {
HXLINE( 114)					r->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE( 114)					::Array< ::String > r1 = r->b;
HXDLIN( 114)					r1->push(::Std_obj::string(x));
            				}
            			}
HXLINE( 116)			p = (np + 2);
            		}
            		_hx_goto_2:;
HXLINE( 118)		{
HXLINE( 118)			 ::Dynamic len = (f.length - p);
HXDLIN( 118)			if (::hx::IsNotNull( r->charBuf )) {
HXLINE( 118)				r->flush();
            			}
HXDLIN( 118)			if (::hx::IsNull( r->b )) {
HXLINE( 118)				r->b = ::Array_obj< ::String >::__new(1)->init(0,f.substr(p,len));
            			}
            			else {
HXLINE( 118)				::Array< ::String > r1 = r->b;
HXDLIN( 118)				r1->push(f.substr(p,len));
            			}
            		}
HXLINE( 119)		return r->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateTools_obj,_hx___format,return )

::String DateTools_obj::format( ::Date d,::String f){
            	HX_STACKFRAME(&_hx_pos_f12ba685b3327fbe_150_format)
HXDLIN( 150)		return ::DateTools_obj::_hx___format(d,f);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateTools_obj,format,return )


DateTools_obj::DateTools_obj()
{
}

bool DateTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { outValue = format_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { outValue = _hx___format_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"DAY_NAMES") ) { outValue = ( DAY_NAMES ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MONTH_NAMES") ) { outValue = ( MONTH_NAMES ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__format_get") ) { outValue = _hx___format_get_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DAY_SHORT_NAMES") ) { outValue = ( DAY_SHORT_NAMES ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MONTH_SHORT_NAMES") ) { outValue = ( MONTH_SHORT_NAMES ); return true; }
	}
	return false;
}

bool DateTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"DAY_NAMES") ) { DAY_NAMES=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MONTH_NAMES") ) { MONTH_NAMES=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"DAY_SHORT_NAMES") ) { DAY_SHORT_NAMES=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"MONTH_SHORT_NAMES") ) { MONTH_SHORT_NAMES=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DateTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo DateTools_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &DateTools_obj::DAY_SHORT_NAMES,HX_("DAY_SHORT_NAMES",82,62,e9,a3)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &DateTools_obj::DAY_NAMES,HX_("DAY_NAMES",25,36,3f,13)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &DateTools_obj::MONTH_SHORT_NAMES,HX_("MONTH_SHORT_NAMES",66,55,05,22)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &DateTools_obj::MONTH_NAMES,HX_("MONTH_NAMES",09,26,60,e6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void DateTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DateTools_obj::DAY_SHORT_NAMES,"DAY_SHORT_NAMES");
	HX_MARK_MEMBER_NAME(DateTools_obj::DAY_NAMES,"DAY_NAMES");
	HX_MARK_MEMBER_NAME(DateTools_obj::MONTH_SHORT_NAMES,"MONTH_SHORT_NAMES");
	HX_MARK_MEMBER_NAME(DateTools_obj::MONTH_NAMES,"MONTH_NAMES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DateTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DateTools_obj::DAY_SHORT_NAMES,"DAY_SHORT_NAMES");
	HX_VISIT_MEMBER_NAME(DateTools_obj::DAY_NAMES,"DAY_NAMES");
	HX_VISIT_MEMBER_NAME(DateTools_obj::MONTH_SHORT_NAMES,"MONTH_SHORT_NAMES");
	HX_VISIT_MEMBER_NAME(DateTools_obj::MONTH_NAMES,"MONTH_NAMES");
};

#endif

::hx::Class DateTools_obj::__mClass;

static ::String DateTools_obj_sStaticFields[] = {
	HX_("DAY_SHORT_NAMES",82,62,e9,a3),
	HX_("DAY_NAMES",25,36,3f,13),
	HX_("MONTH_SHORT_NAMES",66,55,05,22),
	HX_("MONTH_NAMES",09,26,60,e6),
	HX_("__format_get",6e,37,39,4c),
	HX_("__format",57,fa,bd,a5),
	HX_("format",37,8f,8e,fd),
	::String(null())
};

void DateTools_obj::__register()
{
	DateTools_obj _hx_dummy;
	DateTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DateTools",ed,64,5e,95);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DateTools_obj::__GetStatic;
	__mClass->mSetStaticField = &DateTools_obj::__SetStatic;
	__mClass->mMarkFunc = DateTools_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DateTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DateTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DateTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DateTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DateTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DateTools_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f12ba685b3327fbe_35_boot)
HXDLIN(  35)		DAY_SHORT_NAMES = ::Array_obj< ::String >::fromData( _hx_array_data_955e64ed_6,7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f12ba685b3327fbe_36_boot)
HXDLIN(  36)		DAY_NAMES = ::Array_obj< ::String >::fromData( _hx_array_data_955e64ed_8,7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f12ba685b3327fbe_37_boot)
HXDLIN(  37)		MONTH_SHORT_NAMES = ::Array_obj< ::String >::fromData( _hx_array_data_955e64ed_10,12);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f12ba685b3327fbe_40_boot)
HXDLIN(  40)		MONTH_NAMES = ::Array_obj< ::String >::fromData( _hx_array_data_955e64ed_12,12);
            	}
}

