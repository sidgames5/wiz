#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2cd113ad60e10261_28_new,"EReg","new",0x8b859e81,"EReg.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",28,0xa4513ee9)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd113ad60e10261_36_match,"EReg","match",0x18fda1a6,"EReg.match","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",36,0xa4513ee9)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd113ad60e10261_45_matched,"EReg","matched",0x8ce62f85,"EReg.matched","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",45,0xa4513ee9)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd113ad60e10261_65_matchSub,"EReg","matchSub",0xbc75cb7a,"EReg.matchSub","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",65,0xa4513ee9)
HX_LOCAL_STACK_FRAME(_hx_pos_2cd113ad60e10261_149_map,"EReg","map",0x8b84d8bd,"EReg.map","C:\\HaxeToolkit\\haxe\\std/cpp/_std/EReg.hx",149,0xa4513ee9)

void EReg_obj::__construct(::String r,::String opt){
            	HX_STACKFRAME(&_hx_pos_2cd113ad60e10261_28_new)
HXLINE(  29)		::Array< ::String > a = opt.split(HX_("g",67,00,00,00));
HXLINE(  30)		this->global = (a->length > 1);
HXLINE(  31)		if (this->global) {
HXLINE(  32)			opt = a->join(HX_("",00,00,00,00));
            		}
HXLINE(  33)		this->r = _hx_regexp_new_options(r,opt);
            	}

Dynamic EReg_obj::__CreateEmpty() { return new EReg_obj; }

void *EReg_obj::_hx_vtable = 0;

Dynamic EReg_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EReg_obj > _hx_result = new EReg_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool EReg_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x022d4033;
}

bool EReg_obj::match(::String s){
            	HX_STACKFRAME(&_hx_pos_2cd113ad60e10261_36_match)
HXLINE(  37)		bool p = _hx_regexp_match(this->r,s,0,s.length);
HXLINE(  38)		if (p) {
HXLINE(  39)			this->last = s;
            		}
            		else {
HXLINE(  41)			this->last = null();
            		}
HXLINE(  42)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,match,return )

::String EReg_obj::matched(int n){
            	HX_STACKFRAME(&_hx_pos_2cd113ad60e10261_45_matched)
HXLINE(  46)		::String m = _hx_regexp_matched(this->r,n);
HXLINE(  47)		return m;
            	}


HX_DEFINE_DYNAMIC_FUNC1(EReg_obj,matched,return )

bool EReg_obj::matchSub(::String s,int pos,::hx::Null< int >  __o_len){
            		int len = __o_len.Default(-1);
            	HX_STACKFRAME(&_hx_pos_2cd113ad60e10261_65_matchSub)
HXLINE(  66)		int p;
HXDLIN(  66)		if ((len < 0)) {
HXLINE(  66)			p = (s.length - pos);
            		}
            		else {
HXLINE(  66)			p = len;
            		}
HXDLIN(  66)		bool p1 = _hx_regexp_match(this->r,s,pos,p);
HXLINE(  67)		if (p1) {
HXLINE(  68)			this->last = s;
            		}
            		else {
HXLINE(  70)			this->last = null();
            		}
HXLINE(  71)		return p1;
            	}


HX_DEFINE_DYNAMIC_FUNC3(EReg_obj,matchSub,return )

::String EReg_obj::map(::String s, ::Dynamic f){
            	HX_GC_STACKFRAME(&_hx_pos_2cd113ad60e10261_149_map)
HXLINE( 150)		int offset = 0;
HXLINE( 151)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 152)		while(true){
HXLINE( 153)			if ((offset >= s.length)) {
HXLINE( 154)				goto _hx_goto_4;
            			}
            			else {
HXLINE( 155)				if (!(this->matchSub(s,offset,null()))) {
HXLINE( 156)					{
HXLINE( 156)						::String x = s.substr(offset,null());
HXDLIN( 156)						if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 156)							buf->flush();
            						}
HXDLIN( 156)						if (::hx::IsNull( buf->b )) {
HXLINE( 156)							buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 156)							::Array< ::String > buf1 = buf->b;
HXDLIN( 156)							buf1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 157)					goto _hx_goto_4;
            				}
            			}
HXLINE( 159)			 ::Dynamic p = _hx_regexp_matched_pos(this->r,0);
HXLINE( 160)			{
HXLINE( 160)				::String x = s.substr(offset,(( (int)(p->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic)) ) - offset));
HXDLIN( 160)				if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 160)					buf->flush();
            				}
HXDLIN( 160)				if (::hx::IsNull( buf->b )) {
HXLINE( 160)					buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE( 160)					::Array< ::String > buf1 = buf->b;
HXDLIN( 160)					buf1->push(::Std_obj::string(x));
            				}
            			}
HXLINE( 161)			{
HXLINE( 161)				::String x1 = ( (::String)(f(::hx::ObjectPtr<OBJ_>(this))) );
HXDLIN( 161)				if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 161)					buf->flush();
            				}
HXDLIN( 161)				if (::hx::IsNull( buf->b )) {
HXLINE( 161)					buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            				}
            				else {
HXLINE( 161)					::Array< ::String > buf1 = buf->b;
HXDLIN( 161)					buf1->push(::Std_obj::string(x1));
            				}
            			}
HXLINE( 162)			if (::hx::IsEq( p->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic),0 )) {
HXLINE( 163)				{
HXLINE( 163)					::String x = s.substr(( (int)(p->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic)) ),1);
HXDLIN( 163)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 163)						buf->flush();
            					}
HXDLIN( 163)					if (::hx::IsNull( buf->b )) {
HXLINE( 163)						buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 163)						::Array< ::String > buf1 = buf->b;
HXDLIN( 163)						buf1->push(::Std_obj::string(x));
            					}
            				}
HXLINE( 164)				offset = ( (int)((p->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + 1)) );
            			}
            			else {
HXLINE( 166)				offset = ( (int)((p->__Field(HX_("pos",94,5d,55,00),::hx::paccDynamic) + p->__Field(HX_("len",d5,4b,52,00),::hx::paccDynamic))) );
            			}
HXLINE( 152)			if (!(this->global)) {
HXLINE( 152)				goto _hx_goto_4;
            			}
            		}
            		_hx_goto_4:;
HXLINE( 168)		bool _hx_tmp;
HXDLIN( 168)		bool _hx_tmp1;
HXDLIN( 168)		if (!(this->global)) {
HXLINE( 168)			_hx_tmp1 = (offset > 0);
            		}
            		else {
HXLINE( 168)			_hx_tmp1 = false;
            		}
HXDLIN( 168)		if (_hx_tmp1) {
HXLINE( 168)			_hx_tmp = (offset < s.length);
            		}
            		else {
HXLINE( 168)			_hx_tmp = false;
            		}
HXDLIN( 168)		if (_hx_tmp) {
HXLINE( 169)			::String x = s.substr(offset,null());
HXDLIN( 169)			if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 169)				buf->flush();
            			}
HXDLIN( 169)			if (::hx::IsNull( buf->b )) {
HXLINE( 169)				buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 169)				::Array< ::String > buf1 = buf->b;
HXDLIN( 169)				buf1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 170)		return buf->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC2(EReg_obj,map,return )


::hx::ObjectPtr< EReg_obj > EReg_obj::__new(::String r,::String opt) {
	::hx::ObjectPtr< EReg_obj > __this = new EReg_obj();
	__this->__construct(r,opt);
	return __this;
}

::hx::ObjectPtr< EReg_obj > EReg_obj::__alloc(::hx::Ctx *_hx_ctx,::String r,::String opt) {
	EReg_obj *__this = (EReg_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EReg_obj), true, "EReg"));
	*(void **)__this = EReg_obj::_hx_vtable;
	__this->__construct(r,opt);
	return __this;
}

EReg_obj::EReg_obj()
{
}

void EReg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EReg);
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(global,"global");
	HX_MARK_END_CLASS();
}

void EReg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(last,"last");
	HX_VISIT_MEMBER_NAME(global,"global");
}

::hx::Val EReg_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return ::hx::Val( r ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return ::hx::Val( last ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"match") ) { return ::hx::Val( match_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { return ::hx::Val( global ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"matched") ) { return ::hx::Val( matched_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"matchSub") ) { return ::hx::Val( matchSub_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EReg_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"global") ) { global=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EReg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("r",72,00,00,00));
	outFields->push(HX_("last",56,0a,ad,47));
	outFields->push(HX_("global",63,31,b2,a7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EReg_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(EReg_obj,r),HX_("r",72,00,00,00)},
	{::hx::fsString,(int)offsetof(EReg_obj,last),HX_("last",56,0a,ad,47)},
	{::hx::fsBool,(int)offsetof(EReg_obj,global),HX_("global",63,31,b2,a7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EReg_obj_sStaticStorageInfo = 0;
#endif

static ::String EReg_obj_sMemberFields[] = {
	HX_("r",72,00,00,00),
	HX_("last",56,0a,ad,47),
	HX_("global",63,31,b2,a7),
	HX_("match",45,49,23,03),
	HX_("matched",e4,3c,7c,89),
	HX_("matchSub",3b,71,2b,c3),
	HX_("map",9c,0a,53,00),
	::String(null()) };

::hx::Class EReg_obj::__mClass;

void EReg_obj::__register()
{
	EReg_obj _hx_dummy;
	EReg_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("EReg",0f,4a,da,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EReg_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EReg_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EReg_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EReg_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

