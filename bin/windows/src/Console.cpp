#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Console
#include <Console.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED__Console_FormatFlag_Impl_
#include <_Console/FormatFlag_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_94_printlnFormatted,"Console","printlnFormatted",0x76b51424,"Console.printlnFormatted","Console.hx",94,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_98_println,"Console","println",0xed13ffb8,"Console.println","Console.hx",98,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_140_format,"Console","format",0xbb71b78e,"Console.format","Console.hx",140,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_113_format,"Console","format",0xbb71b78e,"Console.format","Console.hx",113,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_224_stripFormatting,"Console","stripFormatting",0x8e1dad66,"Console.stripFormatting","Console.hx",224,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_242_printFormatted,"Console","printFormatted",0xb0f15c66,"Console.printFormatted","Console.hx",242,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_277_print,"Console","print",0xb149c7b6,"Console.print","Console.hx",277,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_330_getAsciiFormat,"Console","getAsciiFormat",0x482bc9c9,"Console.getAsciiFormat","Console.hx",330,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_403_rgbToAscii256,"Console","rgbToAscii256",0x525d04f3,"Console.rgbToAscii256","Console.hx",403,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_400_rgbToAscii256,"Console","rgbToAscii256",0x525d04f3,"Console.rgbToAscii256","Console.hx",400,0xdfc4cbe7)
static const int _hx_array_data_e6271337_16[] = {
	(int)0,(int)95,(int)135,(int)175,(int)215,(int)255,
};
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_447_getBrowserFormat,"Console","getBrowserFormat",0x562471a0,"Console.getBrowserFormat","Console.hx",447,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_514_determineConsoleFormatMode,"Console","determineConsoleFormatMode",0x563fe535,"Console.determineConsoleFormatMode","Console.hx",514,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_628_exec,"Console","exec",0xf1818828,"Console.exec","Console.hx",628,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_16_boot,"Console","boot",0xef7f18c9,"Console.boot","Console.hx",16,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_18_boot,"Console","boot",0xef7f18c9,"Console.boot","Console.hx",18,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_19_boot,"Console","boot",0xef7f18c9,"Console.boot","Console.hx",19,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_20_boot,"Console","boot",0xef7f18c9,"Console.boot","Console.hx",20,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_21_boot,"Console","boot",0xef7f18c9,"Console.boot","Console.hx",21,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_22_boot,"Console","boot",0xef7f18c9,"Console.boot","Console.hx",22,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_27_boot,"Console","boot",0xef7f18c9,"Console.boot","Console.hx",27,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_29_boot,"Console","boot",0xef7f18c9,"Console.boot","Console.hx",29,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_30_boot,"Console","boot",0xef7f18c9,"Console.boot","Console.hx",30,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_31_boot,"Console","boot",0xef7f18c9,"Console.boot","Console.hx",31,0xdfc4cbe7)
HX_LOCAL_STACK_FRAME(_hx_pos_9b0ca03e92855c49_112_boot,"Console","boot",0xef7f18c9,"Console.boot","Console.hx",112,0xdfc4cbe7)

	#if defined(HX_WINDOWS)
	#include <windows.h>
	#endif


void Console_obj::__construct() { }

Dynamic Console_obj::__CreateEmpty() { return new Console_obj; }

void *Console_obj::_hx_vtable = 0;

Dynamic Console_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Console_obj > _hx_result = new Console_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Console_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1aa204e7;
}

int Console_obj::formatMode;

::String Console_obj::logPrefix;

::String Console_obj::warnPrefix;

::String Console_obj::errorPrefix;

::String Console_obj::successPrefix;

::String Console_obj::debugPrefix;

 ::Dynamic Console_obj::printIntercept;

::String Console_obj::argSeparator;

int Console_obj::unicodeCompatibilityMode;

bool Console_obj::unicodeCompatibilityEnabled;

void Console_obj::printlnFormatted(::String __o_s,::hx::Null< int >  __o_outputStream){
            		::String s = __o_s;
            		if (::hx::IsNull(__o_s)) s = HX_("",00,00,00,00);
            		int outputStream = __o_outputStream.Default(0);
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_94_printlnFormatted)
HXDLIN(  94)		::Console_obj::printFormatted((s + HX_("\n",0a,00,00,00)),outputStream);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Console_obj,printlnFormatted,(void))

void Console_obj::println(::String __o_s,::hx::Null< int >  __o_outputStream){
            		::String s = __o_s;
            		if (::hx::IsNull(__o_s)) s = HX_("",00,00,00,00);
            		int outputStream = __o_outputStream.Default(0);
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_98_println)
HXDLIN(  98)		::Console_obj::print((s + HX_("\n",0a,00,00,00)),outputStream);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Console_obj,println,(void))

 ::EReg Console_obj::formatTagPattern;

 ::Dynamic Console_obj::format(::String s,int formatMode){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,groupedProceedingTags,::Array< ::Dynamic>,activeFormatFlagStack,int,formatMode) HXARGC(1)
            		::String _hx_run( ::EReg e){
            			HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_140_format)
HXLINE( 141)			bool escaped = ::hx::IsNotNull( e->matched(1) );
HXLINE( 142)			if (escaped) {
HXLINE( 143)				return e->matched(0);
            			}
HXLINE( 146)			bool open = ::hx::IsNull( e->matched(2) );
HXLINE( 147)			::Array< ::String > tags = e->matched(3).split(HX_(",",2c,00,00,00));
HXLINE( 150)			bool result;
HXDLIN( 150)			if (!(open)) {
HXLINE( 150)				result = (tags->length == 1);
            			}
            			else {
HXLINE( 150)				result = false;
            			}
HXDLIN( 150)			if (result) {
HXLINE( 151)				if ((tags->__get(0) == HX_("",00,00,00,00))) {
HXLINE( 153)					::String last = activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >()->__get((activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >()->length - 1));
HXLINE( 154)					{
HXLINE( 154)						int i = activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >()->indexOf(last,null());
HXDLIN( 154)						if ((i != -1)) {
HXLINE( 154)							int proceedingTags = groupedProceedingTags->__get(0).StaticCast< ::Array< int > >()->__get(i);
HXDLIN( 154)							activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >()->removeRange((i - proceedingTags),(proceedingTags + 1));
HXDLIN( 154)							groupedProceedingTags->__get(0).StaticCast< ::Array< int > >()->removeRange((i - proceedingTags),(proceedingTags + 1));
            						}
            					}
            				}
            				else {
HXLINE( 155)					if ((::_Console::FormatFlag_Impl__obj::fromString(tags->__get(0)) == HX_("reset",cf,49,c8,e6))) {
HXLINE( 136)						activeFormatFlagStack[0] = ::Array_obj< ::String >::__new(0);
HXLINE( 137)						groupedProceedingTags[0] = ::Array_obj< int >::__new(0);
            					}
            					else {
HXLINE( 159)						::String flag = ::_Console::FormatFlag_Impl__obj::fromString(tags->__get(0));
HXLINE( 160)						if (::hx::IsNotNull( flag )) {
HXLINE( 161)							int i = activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >()->indexOf(flag,null());
HXDLIN( 161)							if ((i != -1)) {
HXLINE( 161)								int proceedingTags = groupedProceedingTags->__get(0).StaticCast< ::Array< int > >()->__get(i);
HXDLIN( 161)								activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >()->removeRange((i - proceedingTags),(proceedingTags + 1));
HXDLIN( 161)								groupedProceedingTags->__get(0).StaticCast< ::Array< int > >()->removeRange((i - proceedingTags),(proceedingTags + 1));
            							}
            						}
            					}
            				}
            			}
            			else {
HXLINE( 165)				int proceedingTags = 0;
HXLINE( 166)				{
HXLINE( 166)					int _g = 0;
HXDLIN( 166)					while((_g < tags->length)){
HXLINE( 166)						::String tag = tags->__get(_g);
HXDLIN( 166)						_g = (_g + 1);
HXLINE( 167)						::String flag = ::_Console::FormatFlag_Impl__obj::fromString(tag);
HXLINE( 168)						if (::hx::IsNull( flag )) {
HXLINE( 168)							return e->matched(0);
            						}
HXLINE( 169)						if (open) {
HXLINE( 170)							{
HXLINE( 170)								activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >()->push(flag);
HXDLIN( 170)								groupedProceedingTags->__get(0).StaticCast< ::Array< int > >()->push(proceedingTags);
            							}
HXLINE( 171)							proceedingTags = (proceedingTags + 1);
            						}
            						else {
HXLINE( 173)							int i = activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >()->indexOf(flag,null());
HXDLIN( 173)							if ((i != -1)) {
HXLINE( 173)								int proceedingTags = groupedProceedingTags->__get(0).StaticCast< ::Array< int > >()->__get(i);
HXDLIN( 173)								activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >()->removeRange((i - proceedingTags),(proceedingTags + 1));
HXDLIN( 173)								groupedProceedingTags->__get(0).StaticCast< ::Array< int > >()->removeRange((i - proceedingTags),(proceedingTags + 1));
            							}
            						}
            					}
            				}
            			}
HXLINE( 179)			switch((int)(formatMode)){
            				case (int)0: {
HXLINE( 182)					if (open) {
HXLINE( 183)						if ((activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >()->length > 0)) {
HXLINE( 184)							int lastFlagCount = (groupedProceedingTags->__get(0).StaticCast< ::Array< int > >()->__get((groupedProceedingTags->__get(0).StaticCast< ::Array< int > >()->length - 1)) + 1);
HXLINE( 185)							::String asciiFormatString = HX_("",00,00,00,00);
HXLINE( 186)							{
HXLINE( 186)								int _g = 0;
HXDLIN( 186)								int _g1 = lastFlagCount;
HXDLIN( 186)								while((_g < _g1)){
HXLINE( 186)									_g = (_g + 1);
HXDLIN( 186)									int i = (_g - 1);
HXLINE( 187)									int idx = ((groupedProceedingTags->__get(0).StaticCast< ::Array< int > >()->length - 1) - i);
HXLINE( 188)									asciiFormatString = (asciiFormatString + ::Console_obj::getAsciiFormat(activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >()->__get(idx)));
            								}
            							}
HXLINE( 190)							return asciiFormatString;
            						}
            						else {
HXLINE( 192)							return HX_("",00,00,00,00);
            						}
            					}
            					else {
HXLINE( 196)						::String result = ::Console_obj::getAsciiFormat(HX_("reset",cf,49,c8,e6));
HXLINE( 197)						::Array< ::String > result1 = ::Array_obj< ::String >::__new(activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >()->length);
HXDLIN( 197)						{
HXLINE( 197)							int _g = 0;
HXDLIN( 197)							int _g1 = activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >()->length;
HXDLIN( 197)							while((_g < _g1)){
HXLINE( 197)								_g = (_g + 1);
HXDLIN( 197)								int i = (_g - 1);
HXDLIN( 197)								{
HXLINE( 197)									::String inValue = ::Console_obj::getAsciiFormat(( (::String)(_hx_array_unsafe_get(activeFormatFlagStack->__get(0).StaticCast< ::Array< ::String > >(),i)) ));
HXDLIN( 197)									result1->__unsafe_set(i,inValue);
            								}
            							}
            						}
HXDLIN( 197)						::Array< ::String > _g2 = ::Array_obj< ::String >::__new(0);
HXDLIN( 197)						{
HXLINE( 197)							int _g3 = 0;
HXDLIN( 197)							::Array< ::String > _g4 = result1;
HXDLIN( 197)							while((_g3 < _g4->length)){
HXLINE( 197)								::String v = _g4->__get(_g3);
HXDLIN( 197)								_g3 = (_g3 + 1);
HXDLIN( 197)								if (::hx::IsNotNull( v )) {
HXLINE( 197)									_g2->push(v);
            								}
            							}
            						}
HXLINE( 195)						return (result + _g2->join(HX_("",00,00,00,00)));
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 211)					return HX_("",00,00,00,00);
            				}
            				break;
            			}
HXLINE( 179)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_113_format)
HXLINE( 114)		s = (s + HX_("<//>",62,a0,cc,27));
HXLINE( 116)		::Array< ::Dynamic> activeFormatFlagStack = ::Array_obj< ::Dynamic>::__new(1)->init(0,::Array_obj< ::String >::__new());
HXLINE( 117)		::Array< ::Dynamic> groupedProceedingTags = ::Array_obj< ::Dynamic>::__new(1)->init(0,::Array_obj< int >::__new());
HXLINE( 140)		::String result = ::Console_obj::formatTagPattern->map(s, ::Dynamic(new _hx_Closure_0(groupedProceedingTags,activeFormatFlagStack,formatMode)));
HXLINE( 215)		return  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("formatted",fc,ea,67,19),result));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Console_obj,format,return )

::String Console_obj::stripFormatting(::String s){
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_224_stripFormatting)
HXDLIN( 224)		return ( (::String)(::Console_obj::format(s,2)->__Field(HX_("formatted",fc,ea,67,19),::hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Console_obj,stripFormatting,return )

void Console_obj::printFormatted(::String __o_s,::hx::Null< int >  __o_outputStream){
            		::String s = __o_s;
            		if (::hx::IsNull(__o_s)) s = HX_("",00,00,00,00);
            		int outputStream = __o_outputStream.Default(0);
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_242_printFormatted)
HXLINE( 243)		 ::Dynamic result = ::Console_obj::format(s,::Console_obj::formatMode);
HXLINE( 271)		::Console_obj::print(( (::String)(result->__Field(HX_("formatted",fc,ea,67,19),::hx::paccDynamic)) ),outputStream);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Console_obj,printFormatted,(void))

void Console_obj::print(::String __o_s,::hx::Null< int >  __o_outputStream){
            		::String s = __o_s;
            		if (::hx::IsNull(__o_s)) s = HX_("",00,00,00,00);
            		int outputStream = __o_outputStream.Default(0);
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_277_print)
HXLINE( 280)		if (::hx::IsNotNull( ::Console_obj::printIntercept )) {
HXLINE( 281)			bool allowDefaultPrint = ( (bool)(::Console_obj::printIntercept(s,outputStream)) );
HXLINE( 282)			if (!(allowDefaultPrint)) {
HXLINE( 283)				return;
            			}
            		}
HXLINE( 292)		bool _hx_tmp;
HXDLIN( 292)		if ((::Console_obj::unicodeCompatibilityMode == 1)) {
HXLINE( 292)			_hx_tmp = !(::Console_obj::unicodeCompatibilityEnabled);
            		}
            		else {
HXLINE( 292)			_hx_tmp = false;
            		}
HXDLIN( 292)		if (_hx_tmp) {
HXLINE( 293)			::Console_obj::exec(HX_("chcp 65001",44,de,00,65),null());
HXLINE( 294)			::Console_obj::unicodeCompatibilityEnabled = true;
            		}
HXLINE( 301)		switch((int)(outputStream)){
            			case (int)1: case (int)2: {
HXLINE( 305)				::Sys_obj::_hx_stderr()->writeString(s,null());
            			}
            			break;
            			case (int)0: case (int)3: {
HXLINE( 303)				::Sys_obj::_hx_stdout()->writeString(s,null());
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Console_obj,print,(void))

::String Console_obj::getAsciiFormat(::String flag){
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_330_getAsciiFormat)
HXLINE( 332)		if ((flag.charAt(0) == HX_("#",23,00,00,00))) {
HXLINE( 333)			::String hex = flag.substr(1,null());
HXLINE( 334)			 ::Dynamic r = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + hex.substr(0,2)));
HXDLIN( 334)			 ::Dynamic g = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + hex.substr(2,2)));
HXDLIN( 334)			 ::Dynamic b = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + hex.substr(4,2)));
HXLINE( 335)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + ::Console_obj::rgbToAscii256(( (int)(r) ),( (int)(g) ),( (int)(b) ))) + HX_("m",6d,00,00,00));
            		}
HXLINE( 339)		if ((flag.substr(0,3) == HX_("bg#",be,b6,4a,00))) {
HXLINE( 340)			::String hex = flag.substr(3,null());
HXLINE( 341)			 ::Dynamic r = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + hex.substr(0,2)));
HXDLIN( 341)			 ::Dynamic g = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + hex.substr(2,2)));
HXDLIN( 341)			 ::Dynamic b = ::Std_obj::parseInt((HX_("0x",48,2a,00,00) + hex.substr(4,2)));
HXLINE( 342)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + ::Console_obj::rgbToAscii256(( (int)(r) ),( (int)(g) ),( (int)(b) ))) + HX_("m",6d,00,00,00));
            		}
HXLINE( 345)		::String _hx_switch_0 = flag;
            		if (  (_hx_switch_0==HX_("bg_black",85,94,4b,51)) ){
HXLINE( 373)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 0) + HX_("m",6d,00,00,00));
HXDLIN( 373)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_blue",94,fe,23,0e)) ){
HXLINE( 377)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 4) + HX_("m",6d,00,00,00));
HXDLIN( 377)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_cyan",1d,01,d7,0e)) ){
HXLINE( 379)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 6) + HX_("m",6d,00,00,00));
HXDLIN( 379)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_green",89,cd,46,36)) ){
HXLINE( 375)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 2) + HX_("m",6d,00,00,00));
HXDLIN( 375)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_black",9c,09,69,dd)) ){
HXLINE( 381)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 8) + HX_("m",6d,00,00,00));
HXDLIN( 381)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_blue",5d,f9,41,dc)) ){
HXLINE( 385)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 12) + HX_("m",6d,00,00,00));
HXDLIN( 385)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_cyan",e6,fb,f4,dc)) ){
HXLINE( 387)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 14) + HX_("m",6d,00,00,00));
HXDLIN( 387)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_green",a0,42,64,c2)) ){
HXLINE( 383)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 10) + HX_("m",6d,00,00,00));
HXDLIN( 383)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_magenta",46,5f,2f,aa)) ){
HXLINE( 386)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 13) + HX_("m",6d,00,00,00));
HXDLIN( 386)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_red",ee,6b,ce,2d)) ){
HXLINE( 382)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 9) + HX_("m",6d,00,00,00));
HXDLIN( 382)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_white",86,7e,34,f2)) ){
HXLINE( 388)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 15) + HX_("m",6d,00,00,00));
HXDLIN( 388)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_yellow",f7,cc,32,10)) ){
HXLINE( 384)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 11) + HX_("m",6d,00,00,00));
HXDLIN( 384)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_magenta",6f,36,f9,c3)) ){
HXLINE( 378)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 5) + HX_("m",6d,00,00,00));
HXDLIN( 378)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_red",97,3a,61,bc)) ){
HXLINE( 374)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 1) + HX_("m",6d,00,00,00));
HXDLIN( 374)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_white",6f,09,17,66)) ){
HXLINE( 380)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 7) + HX_("m",6d,00,00,00));
HXDLIN( 380)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bg_yellow",ee,cd,89,02)) ){
HXLINE( 376)			return ((HX_("\x1b""[48;5;",7d,6c,44,db) + 3) + HX_("m",6d,00,00,00));
HXDLIN( 376)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("black",bf,d5,f1,b4)) ){
HXLINE( 356)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 0) + HX_("m",6d,00,00,00));
HXDLIN( 356)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("blink",5c,f1,f7,b4)) ){
HXLINE( 352)			return HX_("\x1b""[5m",78,fe,1d,12);
HXDLIN( 352)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("blue",9a,42,19,41)) ){
HXLINE( 360)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 4) + HX_("m",6d,00,00,00));
HXDLIN( 360)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("bold",85,81,1b,41)) ){
HXLINE( 348)			return HX_("\x1b""[1m",fc,fa,1d,12);
HXDLIN( 348)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("cyan",23,45,cc,41)) ){
HXLINE( 362)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 6) + HX_("m",6d,00,00,00));
HXDLIN( 362)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("dim",48,3d,4c,00)) ){
HXLINE( 349)			return HX_("\x1b""[2m",db,fb,1d,12);
HXDLIN( 349)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("green",c3,0e,ed,99)) ){
HXLINE( 358)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 2) + HX_("m",6d,00,00,00));
HXDLIN( 358)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("hidden",6a,ff,95,4c)) ){
HXLINE( 354)			return HX_("\x1b""[8m",15,01,1e,12);
HXDLIN( 354)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("invert",16,e7,d8,9f)) ){
HXLINE( 353)			return HX_("\x1b""[7m",36,00,1e,12);
HXDLIN( 353)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("italic",f0,2e,64,06)) ){
HXLINE( 350)			return HX_("\x1b""[3m",ba,fc,1d,12);
HXDLIN( 350)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("light_black",56,f2,92,e0)) ){
HXLINE( 364)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 8) + HX_("m",6d,00,00,00));
HXDLIN( 364)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("light_blue",e3,05,03,e2)) ){
HXLINE( 368)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 12) + HX_("m",6d,00,00,00));
HXDLIN( 368)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("light_cyan",6c,08,b6,e2)) ){
HXLINE( 370)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 14) + HX_("m",6d,00,00,00));
HXDLIN( 370)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("light_green",5a,2b,8e,c5)) ){
HXLINE( 366)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 10) + HX_("m",6d,00,00,00));
HXDLIN( 366)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("light_magenta",80,6a,30,3a)) ){
HXLINE( 369)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 13) + HX_("m",6d,00,00,00));
HXDLIN( 369)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("light_red",28,d2,66,cd)) ){
HXLINE( 365)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 9) + HX_("m",6d,00,00,00));
HXDLIN( 365)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("light_white",40,67,5e,f5)) ){
HXLINE( 371)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 15) + HX_("m",6d,00,00,00));
HXDLIN( 371)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("light_yellow",fd,86,b4,d1)) ){
HXLINE( 367)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 11) + HX_("m",6d,00,00,00));
HXDLIN( 367)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("magenta",29,ba,9d,0e)) ){
HXLINE( 361)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 5) + HX_("m",6d,00,00,00));
HXDLIN( 361)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("red",51,d9,56,00)) ){
HXLINE( 357)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 1) + HX_("m",6d,00,00,00));
HXDLIN( 357)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("reset",cf,49,c8,e6)) ){
HXLINE( 346)			return HX_("\x1b""[m",8d,cc,14,00);
HXDLIN( 346)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("underline",0c,15,d1,87)) ){
HXLINE( 351)			return HX_("\x1b""[4m",99,fd,1d,12);
HXDLIN( 351)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("white",a9,4a,bd,c9)) ){
HXLINE( 363)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 7) + HX_("m",6d,00,00,00));
HXDLIN( 363)			goto _hx_goto_11;
            		}
            		if (  (_hx_switch_0==HX_("yellow",74,9f,5c,d0)) ){
HXLINE( 359)			return ((HX_("\x1b""[38;5;",fc,d7,dd,47) + 3) + HX_("m",6d,00,00,00));
HXDLIN( 359)			goto _hx_goto_11;
            		}
            		/* default */{
HXLINE( 390)			return HX_("",00,00,00,00);
            		}
            		_hx_goto_11:;
HXLINE( 345)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Console_obj,getAsciiFormat,return )

 ::Dynamic Console_obj::rgbToAscii256(int r,int g,int b){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		int _hx_run(int c,::Array< int > set){
            			HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_403_rgbToAscii256)
HXLINE( 404)			Float delta = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 405)			int index = -1;
HXLINE( 406)			{
HXLINE( 406)				int _g = 0;
HXDLIN( 406)				int _g1 = set->length;
HXDLIN( 406)				while((_g < _g1)){
HXLINE( 406)					_g = (_g + 1);
HXDLIN( 406)					int i = (_g - 1);
HXLINE( 407)					Float d = ::Math_obj::abs(( (Float)((c - set->__get(i))) ));
HXLINE( 408)					if ((d < delta)) {
HXLINE( 409)						delta = d;
HXLINE( 410)						index = i;
            					}
            				}
            			}
HXLINE( 413)			return index;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_400_rgbToAscii256)
HXLINE( 403)		 ::Dynamic nearIdx =  ::Dynamic(new _hx_Closure_0());
HXLINE( 423)		::Array< int > colorSteps = ::Array_obj< int >::fromData( _hx_array_data_e6271337_16,6);
HXLINE( 424)		int ir = ( (int)(nearIdx(r,colorSteps)) );
HXDLIN( 424)		int ig = ( (int)(nearIdx(g,colorSteps)) );
HXDLIN( 424)		int ib = ( (int)(nearIdx(b,colorSteps)) );
HXLINE( 425)		Float ier = ::Math_obj::abs(( (Float)((r - colorSteps->__get(ir))) ));
HXDLIN( 425)		Float ieg = ::Math_obj::abs(( (Float)((g - colorSteps->__get(ig))) ));
HXDLIN( 425)		Float ieb = ::Math_obj::abs(( (Float)((b - colorSteps->__get(ib))) ));
HXLINE( 426)		Float averageColorError = ((ier + ieg) + ieb);
HXLINE( 431)		int jr = ::Math_obj::round((( (Float)((r - 8)) ) / ( (Float)(10) )));
HXDLIN( 431)		int jg = ::Math_obj::round((( (Float)((g - 8)) ) / ( (Float)(10) )));
HXDLIN( 431)		int jb = ::Math_obj::round((( (Float)((b - 8)) ) / ( (Float)(10) )));
HXLINE( 432)		Float jer = ::Math_obj::abs((( (Float)(r) ) - ::Math_obj::max(::Math_obj::min(( (Float)(((jr * 10) + 8)) ),( (Float)(238) )),( (Float)(8) ))));
HXLINE( 433)		Float jeg = ::Math_obj::abs((( (Float)(g) ) - ::Math_obj::max(::Math_obj::min(( (Float)(((jg * 10) + 8)) ),( (Float)(238) )),( (Float)(8) ))));
HXLINE( 434)		Float jeb = ::Math_obj::abs((( (Float)(b) ) - ::Math_obj::max(::Math_obj::min(( (Float)(((jb * 10) + 8)) ),( (Float)(238) )),( (Float)(8) ))));
HXLINE( 435)		Float averageGrayError = ((jer + jeg) + jeb);
HXLINE( 438)		bool _hx_tmp;
HXDLIN( 438)		bool _hx_tmp1;
HXDLIN( 438)		if ((averageGrayError < averageColorError)) {
HXLINE( 438)			_hx_tmp1 = (r == g);
            		}
            		else {
HXLINE( 438)			_hx_tmp1 = false;
            		}
HXDLIN( 438)		if (_hx_tmp1) {
HXLINE( 438)			_hx_tmp = (g == b);
            		}
            		else {
HXLINE( 438)			_hx_tmp = false;
            		}
HXDLIN( 438)		if (_hx_tmp) {
HXLINE( 439)			int grayIndex = (jr + 232);
HXLINE( 440)			return grayIndex;
            		}
            		else {
HXLINE( 442)			int colorIndex = (((16 + (ir * 36)) + (ig * 6)) + ib);
HXLINE( 443)			return colorIndex;
            		}
HXLINE( 438)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Console_obj,rgbToAscii256,return )

::String Console_obj::getBrowserFormat(::String flag){
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_447_getBrowserFormat)
HXLINE( 449)		if ((flag.charAt(0) == HX_("#",23,00,00,00))) {
HXLINE( 450)			return (HX_("color: ",c9,02,66,ef) + flag);
            		}
HXLINE( 454)		if ((flag.substr(0,3) == HX_("bg#",be,b6,4a,00))) {
HXLINE( 455)			return (HX_("background-color: ",2a,44,1c,c4) + flag.substr(2,null()));
            		}
HXLINE( 459)		if ((flag.charAt(0) == HX_("{",7b,00,00,00))) {
HXLINE( 461)			return flag.substr(1,(flag.length - 2));
            		}
HXLINE( 464)		::String _hx_switch_0 = flag;
            		if (  (_hx_switch_0==HX_("bg_black",85,94,4b,51)) ){
HXLINE( 493)			return HX_("background-color: black",55,39,dc,9a);
HXDLIN( 493)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_blue",94,fe,23,0e)) ){
HXLINE( 497)			return HX_("background-color: blue",c4,e3,7b,b1);
HXDLIN( 497)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_cyan",1d,01,d7,0e)) ){
HXLINE( 499)			return HX_("background-color: cyan",4d,e6,2e,b2);
HXDLIN( 499)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_green",89,cd,46,36)) ){
HXLINE( 495)			return HX_("background-color: green",59,72,d7,7f);
HXDLIN( 495)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_black",9c,09,69,dd)) ){
HXLINE( 501)			return HX_("background-color: gray",0d,71,ce,b4);
HXDLIN( 501)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_blue",5d,f9,41,dc)) ){
HXLINE( 505)			return HX_("background-color: lightBlue",26,09,aa,e6);
HXDLIN( 505)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_cyan",e6,fb,f4,dc)) ){
HXLINE( 507)			return HX_("background-color: lightCyan",af,0b,5d,e7);
HXDLIN( 507)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_green",a0,42,64,c2)) ){
HXLINE( 503)			return HX_("background-color: lightGreen",b7,02,0a,d3);
HXDLIN( 503)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_magenta",46,5f,2f,aa)) ){
HXLINE( 506)			return HX_("background-color: lightPink",02,b9,e8,ef);
HXDLIN( 506)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_red",ee,6b,ce,2d)) ){
HXLINE( 502)			return HX_("background-color: salmon",18,a5,cb,63);
HXDLIN( 502)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_white",86,7e,34,f2)) ){
HXLINE( 508)			return HX_("background-color: white",3f,ae,a7,af);
HXDLIN( 508)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_light_yellow",f7,cc,32,10)) ){
HXLINE( 504)			return HX_("background-color: lightYellow",00,21,95,90);
HXDLIN( 504)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_magenta",6f,36,f9,c3)) ){
HXLINE( 498)			return HX_("background-color: magenta",3f,af,98,0e);
HXDLIN( 498)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_red",97,3a,61,bc)) ){
HXLINE( 494)			return HX_("background-color: red",67,0b,00,c4);
HXDLIN( 494)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_white",6f,09,17,66)) ){
HXLINE( 500)			return HX_("background-color: whiteSmoke",b0,4c,e0,8e);
HXDLIN( 500)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bg_yellow",ee,cd,89,02)) ){
HXLINE( 496)			return HX_("background-color: gold",ca,33,cc,b4);
HXDLIN( 496)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("black",bf,d5,f1,b4)) ){
HXLINE( 475)			return HX_("color: black",56,1a,40,48);
HXDLIN( 475)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("blink",5c,f1,f7,b4)) ){
HXLINE( 471)			return HX_("text-decoration: blink",e6,ce,a6,07);
HXDLIN( 471)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("blue",9a,42,19,41)) ){
HXLINE( 479)			return HX_("color: blue",e3,dd,32,64);
HXDLIN( 479)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("bold",85,81,1b,41)) ){
HXLINE( 467)			return HX_("font-weight: bold",21,d7,c7,20);
HXDLIN( 467)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("cyan",23,45,cc,41)) ){
HXLINE( 481)			return HX_("color: cyan",6c,e0,e5,64);
HXDLIN( 481)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("dim",48,3d,4c,00)) ){
HXLINE( 469)			return HX_("color: gray",2c,6b,85,67);
HXDLIN( 469)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("green",c3,0e,ed,99)) ){
HXLINE( 477)			return HX_("color: green",5a,53,3b,2d);
HXDLIN( 477)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("hidden",6a,ff,95,4c)) ){
HXLINE( 473)			return HX_("visibility: hidden; color: white",27,a0,fd,fd);
HXDLIN( 473)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("invert",16,e7,d8,9f)) ){
HXLINE( 472)			return HX_("-webkit-filter: invert(100%); filter: invert(100%)",65,80,5b,b3);
HXDLIN( 472)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("italic",f0,2e,64,06)) ){
HXLINE( 468)			return HX_("font-style: italic",09,92,37,fd);
HXDLIN( 468)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("light_black",56,f2,92,e0)) ){
HXLINE( 484)			return HX_("color: gray",2c,6b,85,67);
HXDLIN( 484)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("light_blue",e3,05,03,e2)) ){
HXLINE( 488)			return HX_("color: lightBlue",a7,fe,78,3d);
HXDLIN( 488)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("light_cyan",6c,08,b6,e2)) ){
HXLINE( 490)			return HX_("color: lightCyan",30,01,2c,3e);
HXDLIN( 490)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("light_green",5a,2b,8e,c5)) ){
HXLINE( 486)			return HX_("color: lightGreen",16,de,51,71);
HXDLIN( 486)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("light_magenta",80,6a,30,3a)) ){
HXLINE( 489)			return HX_("color: lightPink",83,ae,b7,46);
HXDLIN( 489)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("light_red",28,d2,66,cd)) ){
HXLINE( 485)			return HX_("color: salmon",f7,a4,cc,6d);
HXDLIN( 485)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("light_white",40,67,5e,f5)) ){
HXLINE( 491)			return HX_("color: white",40,8f,0b,5d);
HXDLIN( 491)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("light_yellow",fd,86,b4,d1)) ){
HXLINE( 487)			return HX_("color: #ffed88",19,ad,9d,2c);
HXDLIN( 487)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("magenta",29,ba,9d,0e)) ){
HXLINE( 480)			return HX_("color: magenta",80,92,77,c5);
HXDLIN( 480)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("red",51,d9,56,00)) ){
HXLINE( 476)			return HX_("color: red",28,fa,f9,0b);
HXDLIN( 476)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("reset",cf,49,c8,e6)) ){
HXLINE( 465)			return HX_("",00,00,00,00);
HXDLIN( 465)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("underline",0c,15,d1,87)) ){
HXLINE( 470)			return HX_("text-decoration: underline",96,7f,fe,cc);
HXDLIN( 470)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("white",a9,4a,bd,c9)) ){
HXLINE( 482)			return HX_("color: whiteSmoke",0f,28,28,2d);
HXDLIN( 482)			goto _hx_goto_17;
            		}
            		if (  (_hx_switch_0==HX_("yellow",74,9f,5c,d0)) ){
HXLINE( 478)			return HX_("color: #f5ba00",c8,4e,fd,f3);
HXDLIN( 478)			goto _hx_goto_17;
            		}
            		/* default */{
HXLINE( 510)			return HX_("",00,00,00,00);
            		}
            		_hx_goto_17:;
HXLINE( 464)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Console_obj,getBrowserFormat,return )

int Console_obj::determineConsoleFormatMode(){
            	HX_GC_STACKFRAME(&_hx_pos_9b0ca03e92855c49_514_determineConsoleFormatMode)
HXLINE( 548)		 ::Dynamic tputColors = ::Console_obj::exec(HX_("tput colors",55,5c,c3,d1),null());
HXLINE( 549)		if (::hx::IsEq( tputColors->__Field(HX_("exit",1e,f7,1d,43),::hx::paccDynamic),0 )) {
HXLINE( 550)			 ::Dynamic tputResult = ::Std_obj::parseInt(( (::String)(tputColors->__Field(HX_("stdout",cb,bf,f3,07),::hx::paccDynamic)) ));
HXLINE( 551)			bool _hx_tmp;
HXDLIN( 551)			if (::hx::IsNotNull( tputResult )) {
HXLINE( 551)				_hx_tmp = ::hx::IsGreater( tputResult,2 );
            			}
            			else {
HXLINE( 551)				_hx_tmp = false;
            			}
HXDLIN( 551)			if (_hx_tmp) {
HXLINE( 552)				return 0;
            			}
            		}
HXLINE( 558)		bool winconVTEnabled = false;
HXLINE( 560)		
			#if defined(HX_WINDOWS) && defined(ENABLE_VIRTUAL_TERMINAL_PROCESSING)
			// Set output mode to handle virtual terminal sequences
			HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
			DWORD dwMode = 0;
			if (hOut != INVALID_HANDLE_VALUE && GetConsoleMode(hOut, &dwMode))
			{
				dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
				winconVTEnabled = SetConsoleMode(hOut, dwMode);
			}
			#endif
		;
HXLINE( 573)		if (winconVTEnabled) {
HXLINE( 574)			return 0;
            		}
HXLINE( 589)		::String termEnv = ::Sys_obj::environment()->get_string(HX_("TERM",6c,8f,ba,37));
HXLINE( 591)		bool _hx_tmp;
HXDLIN( 591)		if (::hx::IsNotNull( termEnv )) {
HXLINE( 591)			_hx_tmp =  ::EReg_obj::__alloc( HX_CTX ,HX_("cygwin|xterm|vt100",2a,5a,76,d4),HX_("",00,00,00,00))->match(termEnv);
            		}
            		else {
HXLINE( 591)			_hx_tmp = false;
            		}
HXDLIN( 591)		if (_hx_tmp) {
HXLINE( 592)			return 0;
            		}
HXLINE( 598)		return 2;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Console_obj,determineConsoleFormatMode,return )

 ::Dynamic Console_obj::exec(::String cmd,::Array< ::String > args){
            	HX_GC_STACKFRAME(&_hx_pos_9b0ca03e92855c49_628_exec)
HXDLIN( 628)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 629)			 ::sys::io::Process p =  ::sys::io::Process_obj::__alloc( HX_CTX ,cmd,args,null());
HXLINE( 630)			 ::Dynamic exit = p->exitCode(null());
HXLINE( 631)			::String _hx_stdout = p->_hx_stdout->readAll(null())->toString();
HXLINE( 632)			p->close();
HXLINE( 633)			return  ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("stdout",cb,bf,f3,07),_hx_stdout)
            				->setFixed(1,HX_("exit",1e,f7,1d,43),exit));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 637)				{
HXLINE( 637)					null();
            				}
HXLINE( 638)				return  ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("stdout",cb,bf,f3,07),HX_("",00,00,00,00))
            					->setFixed(1,HX_("exit",1e,f7,1d,43),1));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 628)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Console_obj,exec,return )


Console_obj::Console_obj()
{
}

bool Console_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exec") ) { outValue = exec_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { outValue = format_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"logPrefix") ) { outValue = ( logPrefix ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"formatMode") ) { outValue = ( formatMode ); return true; }
		if (HX_FIELD_EQ(inName,"warnPrefix") ) { outValue = ( warnPrefix ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"errorPrefix") ) { outValue = ( errorPrefix ); return true; }
		if (HX_FIELD_EQ(inName,"debugPrefix") ) { outValue = ( debugPrefix ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"argSeparator") ) { outValue = ( argSeparator ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"successPrefix") ) { outValue = ( successPrefix ); return true; }
		if (HX_FIELD_EQ(inName,"rgbToAscii256") ) { outValue = rgbToAscii256_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"printIntercept") ) { outValue = ( printIntercept ); return true; }
		if (HX_FIELD_EQ(inName,"printFormatted") ) { outValue = printFormatted_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getAsciiFormat") ) { outValue = getAsciiFormat_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stripFormatting") ) { outValue = stripFormatting_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"printlnFormatted") ) { outValue = printlnFormatted_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"formatTagPattern") ) { outValue = ( formatTagPattern ); return true; }
		if (HX_FIELD_EQ(inName,"getBrowserFormat") ) { outValue = getBrowserFormat_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"unicodeCompatibilityMode") ) { outValue = ( unicodeCompatibilityMode ); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"determineConsoleFormatMode") ) { outValue = determineConsoleFormatMode_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"unicodeCompatibilityEnabled") ) { outValue = ( unicodeCompatibilityEnabled ); return true; }
	}
	return false;
}

bool Console_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"logPrefix") ) { logPrefix=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"formatMode") ) { formatMode=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"warnPrefix") ) { warnPrefix=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"errorPrefix") ) { errorPrefix=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"debugPrefix") ) { debugPrefix=ioValue.Cast< ::String >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"argSeparator") ) { argSeparator=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"successPrefix") ) { successPrefix=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"printIntercept") ) { printIntercept=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"formatTagPattern") ) { formatTagPattern=ioValue.Cast<  ::EReg >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"unicodeCompatibilityMode") ) { unicodeCompatibilityMode=ioValue.Cast< int >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"unicodeCompatibilityEnabled") ) { unicodeCompatibilityEnabled=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Console_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Console_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Console_obj::formatMode,HX_("formatMode",3a,f6,c5,07)},
	{::hx::fsString,(void *) &Console_obj::logPrefix,HX_("logPrefix",36,dd,25,69)},
	{::hx::fsString,(void *) &Console_obj::warnPrefix,HX_("warnPrefix",78,a8,11,8a)},
	{::hx::fsString,(void *) &Console_obj::errorPrefix,HX_("errorPrefix",7a,1f,24,9d)},
	{::hx::fsString,(void *) &Console_obj::successPrefix,HX_("successPrefix",b5,a7,1c,11)},
	{::hx::fsString,(void *) &Console_obj::debugPrefix,HX_("debugPrefix",45,a0,29,b7)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Console_obj::printIntercept,HX_("printIntercept",55,3c,15,8e)},
	{::hx::fsString,(void *) &Console_obj::argSeparator,HX_("argSeparator",2f,c7,dc,7d)},
	{::hx::fsInt,(void *) &Console_obj::unicodeCompatibilityMode,HX_("unicodeCompatibilityMode",d6,b9,fe,8a)},
	{::hx::fsBool,(void *) &Console_obj::unicodeCompatibilityEnabled,HX_("unicodeCompatibilityEnabled",ee,67,ca,4e)},
	{::hx::fsObject /*  ::EReg */ ,(void *) &Console_obj::formatTagPattern,HX_("formatTagPattern",2d,91,bc,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Console_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Console_obj::formatMode,"formatMode");
	HX_MARK_MEMBER_NAME(Console_obj::logPrefix,"logPrefix");
	HX_MARK_MEMBER_NAME(Console_obj::warnPrefix,"warnPrefix");
	HX_MARK_MEMBER_NAME(Console_obj::errorPrefix,"errorPrefix");
	HX_MARK_MEMBER_NAME(Console_obj::successPrefix,"successPrefix");
	HX_MARK_MEMBER_NAME(Console_obj::debugPrefix,"debugPrefix");
	HX_MARK_MEMBER_NAME(Console_obj::printIntercept,"printIntercept");
	HX_MARK_MEMBER_NAME(Console_obj::argSeparator,"argSeparator");
	HX_MARK_MEMBER_NAME(Console_obj::unicodeCompatibilityMode,"unicodeCompatibilityMode");
	HX_MARK_MEMBER_NAME(Console_obj::unicodeCompatibilityEnabled,"unicodeCompatibilityEnabled");
	HX_MARK_MEMBER_NAME(Console_obj::formatTagPattern,"formatTagPattern");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Console_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Console_obj::formatMode,"formatMode");
	HX_VISIT_MEMBER_NAME(Console_obj::logPrefix,"logPrefix");
	HX_VISIT_MEMBER_NAME(Console_obj::warnPrefix,"warnPrefix");
	HX_VISIT_MEMBER_NAME(Console_obj::errorPrefix,"errorPrefix");
	HX_VISIT_MEMBER_NAME(Console_obj::successPrefix,"successPrefix");
	HX_VISIT_MEMBER_NAME(Console_obj::debugPrefix,"debugPrefix");
	HX_VISIT_MEMBER_NAME(Console_obj::printIntercept,"printIntercept");
	HX_VISIT_MEMBER_NAME(Console_obj::argSeparator,"argSeparator");
	HX_VISIT_MEMBER_NAME(Console_obj::unicodeCompatibilityMode,"unicodeCompatibilityMode");
	HX_VISIT_MEMBER_NAME(Console_obj::unicodeCompatibilityEnabled,"unicodeCompatibilityEnabled");
	HX_VISIT_MEMBER_NAME(Console_obj::formatTagPattern,"formatTagPattern");
};

#endif

::hx::Class Console_obj::__mClass;

static ::String Console_obj_sStaticFields[] = {
	HX_("formatMode",3a,f6,c5,07),
	HX_("logPrefix",36,dd,25,69),
	HX_("warnPrefix",78,a8,11,8a),
	HX_("errorPrefix",7a,1f,24,9d),
	HX_("successPrefix",b5,a7,1c,11),
	HX_("debugPrefix",45,a0,29,b7),
	HX_("printIntercept",55,3c,15,8e),
	HX_("argSeparator",2f,c7,dc,7d),
	HX_("unicodeCompatibilityMode",d6,b9,fe,8a),
	HX_("unicodeCompatibilityEnabled",ee,67,ca,4e),
	HX_("printlnFormatted",0d,79,b9,d2),
	HX_("println",ef,db,33,84),
	HX_("formatTagPattern",2d,91,bc,90),
	HX_("format",37,8f,8e,fd),
	HX_("stripFormatting",9d,18,57,a4),
	HX_("printFormatted",0f,85,9b,6f),
	HX_("print",2d,58,8b,c8),
	HX_("getAsciiFormat",72,f2,d5,06),
	HX_("rgbToAscii256",6a,64,e6,eb),
	HX_("getBrowserFormat",89,d6,28,b2),
	HX_("determineConsoleFormatMode",5e,e7,98,8b),
	HX_("exec",91,f3,1d,43),
	::String(null())
};

void Console_obj::__register()
{
	Console_obj _hx_dummy;
	Console_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Console",37,13,27,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Console_obj::__GetStatic;
	__mClass->mSetStaticField = &Console_obj::__SetStatic;
	__mClass->mMarkFunc = Console_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Console_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Console_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Console_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Console_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Console_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Console_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_16_boot)
HXDLIN(  16)		formatMode = ::Console_obj::determineConsoleFormatMode();
            	}
{
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_18_boot)
HXDLIN(  18)		logPrefix = HX_("<b,gray>><//> ",b5,86,c0,99);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_19_boot)
HXDLIN(  19)		warnPrefix = HX_("<b,yellow>><//> ",c4,ed,da,27);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_20_boot)
HXDLIN(  20)		errorPrefix = HX_("<b,red>></b> ",46,bd,75,64);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_21_boot)
HXDLIN(  21)		successPrefix = HX_("<b,light_green>><//> ",6a,b1,9e,f9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_22_boot)
HXDLIN(  22)		debugPrefix = HX_("<b,magenta>><//> ",7b,0f,69,93);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_27_boot)
HXDLIN(  27)		printIntercept = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_29_boot)
HXDLIN(  29)		argSeparator = HX_(" ",20,00,00,00);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		int _hx_run(){
            			HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_30_boot)
HXDLIN(  30)			if ((::Sys_obj::systemName() == HX_("Windows",63,06,c6,b5))) {
HXDLIN(  30)				return 1;
            			}
            			else {
HXDLIN(  30)				return 0;
            			}
HXDLIN(  30)			return null();
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_30_boot)
HXDLIN(  30)		unicodeCompatibilityMode = ( (int)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_9b0ca03e92855c49_31_boot)
HXDLIN(  31)		unicodeCompatibilityEnabled = false;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_9b0ca03e92855c49_112_boot)
HXDLIN( 112)		formatTagPattern =  ::EReg_obj::__alloc( HX_CTX ,HX_("(\\\\)?<(/)?([^><{}\\s]*|{[^}<>]*})>",dc,9d,73,b7),HX_("g",67,00,00,00));
            	}
}

