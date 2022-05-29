#ifndef INCLUDED_Console
#define INCLUDED_Console

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Console)
HX_DECLARE_CLASS0(EReg)



class HXCPP_CLASS_ATTRIBUTES Console_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Console_obj OBJ_;
		Console_obj();

	public:
		enum { _hx_ClassId = 0x1aa204e7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Console")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Console"); }

		inline static ::hx::ObjectPtr< Console_obj > __new() {
			::hx::ObjectPtr< Console_obj > __this = new Console_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Console_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Console_obj *__this = (Console_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Console_obj), false, "Console"));
			*(void **)__this = Console_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Console_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Console",37,13,27,e6); }

		static void __boot();
		static int formatMode;
		static ::String logPrefix;
		static ::String warnPrefix;
		static ::String errorPrefix;
		static ::String successPrefix;
		static ::String debugPrefix;
		static  ::Dynamic printIntercept;
		static Dynamic printIntercept_dyn() { return printIntercept;}
		static ::String argSeparator;
		static int unicodeCompatibilityMode;
		static bool unicodeCompatibilityEnabled;
		static void printlnFormatted(::String s,::hx::Null< int >  outputStream);
		static ::Dynamic printlnFormatted_dyn();

		static void println(::String s,::hx::Null< int >  outputStream);
		static ::Dynamic println_dyn();

		static  ::EReg formatTagPattern;
		static  ::Dynamic format(::String s,int formatMode);
		static ::Dynamic format_dyn();

		static ::String stripFormatting(::String s);
		static ::Dynamic stripFormatting_dyn();

		static void printFormatted(::String s,::hx::Null< int >  outputStream);
		static ::Dynamic printFormatted_dyn();

		static void print(::String s,::hx::Null< int >  outputStream);
		static ::Dynamic print_dyn();

		static ::String getAsciiFormat(::String flag);
		static ::Dynamic getAsciiFormat_dyn();

		static  ::Dynamic rgbToAscii256(int r,int g,int b);
		static ::Dynamic rgbToAscii256_dyn();

		static ::String getBrowserFormat(::String flag);
		static ::Dynamic getBrowserFormat_dyn();

		static int determineConsoleFormatMode();
		static ::Dynamic determineConsoleFormatMode_dyn();

		static  ::Dynamic exec(::String cmd,::Array< ::String > args);
		static ::Dynamic exec_dyn();

};


#endif /* INCLUDED_Console */ 