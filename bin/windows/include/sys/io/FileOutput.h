#ifndef INCLUDED_sys_io_FileOutput
#define INCLUDED_sys_io_FileOutput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(sys,io,FileOutput)

namespace sys{
namespace io{


class HXCPP_CLASS_ATTRIBUTES FileOutput_obj : public  ::haxe::io::Output_obj
{
	public:
		typedef  ::haxe::io::Output_obj super;
		typedef FileOutput_obj OBJ_;
		FileOutput_obj();

	public:
		enum { _hx_ClassId = 0x32387970 };

		void __construct( ::Dynamic f);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.io.FileOutput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"sys.io.FileOutput"); }
		static ::hx::ObjectPtr< FileOutput_obj > __new( ::Dynamic f);
		static ::hx::ObjectPtr< FileOutput_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic f);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FileOutput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FileOutput",bd,5a,b6,e3); }

		 ::Dynamic _hx___f;
		void writeByte(int c);

		int writeBytes( ::haxe::io::Bytes s,int p,int l);

};

} // end namespace sys
} // end namespace io

#endif /* INCLUDED_sys_io_FileOutput */ 
