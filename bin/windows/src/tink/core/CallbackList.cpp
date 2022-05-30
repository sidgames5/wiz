#include <hxcpp.h>

#ifndef INCLUDED_tink_core_CallbackList
#include <tink/core/CallbackList.h>
#endif
#ifndef INCLUDED_tink_core_Disposable
#include <tink/core/Disposable.h>
#endif
#ifndef INCLUDED_tink_core_LinkObject
#include <tink/core/LinkObject.h>
#endif
#ifndef INCLUDED_tink_core_OwnedDisposable
#include <tink/core/OwnedDisposable.h>
#endif
#ifndef INCLUDED_tink_core_SimpleDisposable
#include <tink/core/SimpleDisposable.h>
#endif
#ifndef INCLUDED_tink_core__Callback_Callback_Impl_
#include <tink/core/_Callback/Callback_Impl_.h>
#endif
#ifndef INCLUDED_tink_core__Callback_ListCell
#include <tink/core/_Callback/ListCell.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_03325987736a825f_183_new,"tink.core.CallbackList","new",0x141636c8,"tink.core.CallbackList.new","tink/core/Callback.hx",183,0x0104eb06)
HX_DEFINE_STACK_FRAME(_hx_pos_03325987736a825f_182_new,"tink.core.CallbackList","new",0x141636c8,"tink.core.CallbackList.new","tink/core/Callback.hx",182,0x0104eb06)
HX_DEFINE_STACK_FRAME(_hx_pos_03325987736a825f_177_new,"tink.core.CallbackList","new",0x141636c8,"tink.core.CallbackList.new","tink/core/Callback.hx",177,0x0104eb06)
HX_DEFINE_STACK_FRAME(_hx_pos_03325987736a825f_162_new,"tink.core.CallbackList","new",0x141636c8,"tink.core.CallbackList.new","tink/core/Callback.hx",162,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_169_get_length,"tink.core.CallbackList","get_length",0xae03bb47,"tink.core.CallbackList.get_length","tink/core/Callback.hx",169,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_186_release,"tink.core.CallbackList","release",0x3687402f,"tink.core.CallbackList.release","tink/core/Callback.hx",186,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_189_destroy,"tink.core.CallbackList","destroy",0x021fe762,"tink.core.CallbackList.destroy","tink/core/Callback.hx",189,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_203_drain,"tink.core.CallbackList","drain",0x35ad1c20,"tink.core.CallbackList.drain","tink/core/Callback.hx",203,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_205_add,"tink.core.CallbackList","add",0x140c5889,"tink.core.CallbackList.add","tink/core/Callback.hx",205,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_214_invoke,"tink.core.CallbackList","invoke",0x81e00210,"tink.core.CallbackList.invoke","tink/core/Callback.hx",214,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_218_invoke,"tink.core.CallbackList","invoke",0x81e00210,"tink.core.CallbackList.invoke","tink/core/Callback.hx",218,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_215_invoke,"tink.core.CallbackList","invoke",0x81e00210,"tink.core.CallbackList.invoke","tink/core/Callback.hx",215,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_245_compact,"tink.core.CallbackList","compact",0x6102c60b,"tink.core.CallbackList.compact","tink/core/Callback.hx",245,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_266_resize,"tink.core.CallbackList","resize",0xea7ae48c,"tink.core.CallbackList.resize","tink/core/Callback.hx",266,0x0104eb06)
HX_LOCAL_STACK_FRAME(_hx_pos_03325987736a825f_269_clear,"tink.core.CallbackList","clear",0x9e5241f5,"tink.core.CallbackList.clear","tink/core/Callback.hx",269,0x0104eb06)
namespace tink{
namespace core{

void CallbackList_obj::__construct(::hx::Null< bool >  __o_destructive){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_03325987736a825f_183_new)
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_03325987736a825f_182_new)
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_2, ::tink::core::CallbackList,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_03325987736a825f_177_new)
HXLINE( 177)			if (!(_gthis->busy)) {
HXLINE( 177)				_gthis->destroy();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		bool destructive = __o_destructive.Default(false);
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_162_new)
HXLINE( 183)		this->onfill =  ::Dynamic(new _hx_Closure_0());
HXLINE( 182)		this->ondrain =  ::Dynamic(new _hx_Closure_1());
HXLINE( 174)		this->busy = false;
HXLINE( 172)		this->queue = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 171)		this->used = 0;
HXLINE( 176)		 ::tink::core::CallbackList _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 177)		super::__construct( ::Dynamic(new _hx_Closure_2(_gthis)));
HXLINE( 178)		this->destructive = destructive;
HXLINE( 179)		this->cells = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic CallbackList_obj::__CreateEmpty() { return new CallbackList_obj; }

void *CallbackList_obj::_hx_vtable = 0;

Dynamic CallbackList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CallbackList_obj > _hx_result = new CallbackList_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CallbackList_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x11eb7047) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x11eb7047;
	} else {
		return inClassId==(int)0x12a8ef7c;
	}
}

int CallbackList_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_169_get_length)
HXDLIN( 169)		return this->used;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CallbackList_obj,get_length,return )

void CallbackList_obj::release(){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_186_release)
HXDLIN( 186)		if ((--this->used <= (this->cells->length >> 1))) {
HXLINE( 187)			this->compact();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CallbackList_obj,release,(void))

void CallbackList_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_189_destroy)
HXLINE( 190)		{
HXLINE( 190)			int _g = 0;
HXDLIN( 190)			::Array< ::Dynamic> _g1 = this->cells;
HXDLIN( 190)			while((_g < _g1->length)){
HXLINE( 190)				 ::tink::core::_Callback::ListCell c = _g1->__get(_g).StaticCast<  ::tink::core::_Callback::ListCell >();
HXDLIN( 190)				_g = (_g + 1);
HXLINE( 191)				{
HXLINE( 191)					c->cb = null();
HXDLIN( 191)					c->list = null();
            				}
            			}
            		}
HXLINE( 193)		this->queue = null();
HXLINE( 194)		this->cells = null();
HXLINE( 196)		if ((this->used > 0)) {
HXLINE( 197)			this->used = 0;
HXLINE( 198)			{
HXLINE( 198)				 ::Dynamic fn = this->ondrain;
HXDLIN( 198)				if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXLINE( 198)					::tink::core::_Callback::Callback_Impl__obj::depth++;
HXDLIN( 198)					fn();
HXDLIN( 198)					::tink::core::_Callback::Callback_Impl__obj::depth--;
            				}
            				else {
HXLINE( 198)					::tink::core::_Callback::Callback_Impl__obj::defer(fn);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CallbackList_obj,destroy,(void))

void CallbackList_obj::drain(){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_203_drain)
HXDLIN( 203)		 ::Dynamic fn = this->ondrain;
HXDLIN( 203)		if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXDLIN( 203)			::tink::core::_Callback::Callback_Impl__obj::depth++;
HXDLIN( 203)			fn();
HXDLIN( 203)			::tink::core::_Callback::Callback_Impl__obj::depth--;
            		}
            		else {
HXDLIN( 203)			::tink::core::_Callback::Callback_Impl__obj::defer(fn);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CallbackList_obj,drain,(void))

::Dynamic CallbackList_obj::add( ::Dynamic cb){
            	HX_GC_STACKFRAME(&_hx_pos_03325987736a825f_205_add)
HXLINE( 206)		if (::hx::IsNull( this->disposeHandlers )) {
HXLINE( 206)			return null();
            		}
HXLINE( 207)		 ::tink::core::_Callback::ListCell node =  ::tink::core::_Callback::ListCell_obj::__alloc( HX_CTX ,cb,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 208)		this->cells->push(node);
HXLINE( 209)		if ((this->used++ == 0)) {
HXLINE( 209)			 ::Dynamic fn = this->onfill;
HXDLIN( 209)			if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXLINE( 209)				::tink::core::_Callback::Callback_Impl__obj::depth++;
HXDLIN( 209)				fn();
HXDLIN( 209)				::tink::core::_Callback::Callback_Impl__obj::depth--;
            			}
            			else {
HXLINE( 209)				::tink::core::_Callback::Callback_Impl__obj::defer(fn);
            			}
            		}
HXLINE( 210)		return node;
            	}


HX_DEFINE_DYNAMIC_FUNC1(CallbackList_obj,add,return )

void CallbackList_obj::invoke( ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_214_invoke)
HXDLIN( 214)		 ::tink::core::CallbackList _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 214)		if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXDLIN( 214)			::tink::core::_Callback::Callback_Impl__obj::depth++;
HXLINE( 215)			if (::hx::IsNotNull( _gthis->disposeHandlers )) {
HXLINE( 216)				if (_gthis->busy) {
HXLINE( 217)					if ((_gthis->destructive != true)) {
            						HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,_g, ::Dynamic,data1) HXARGC(0)
            						void _hx_run(){
            							HX_STACKFRAME(&_hx_pos_03325987736a825f_218_invoke)
HXLINE( 218)							_g(data1);
            						}
            						HX_END_LOCAL_FUNC0((void))

HXLINE( 218)						 ::Dynamic _g = _gthis->invoke_dyn();
HXDLIN( 218)						 ::Dynamic data1 = data;
HXDLIN( 218)						 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(_g,data1));
HXDLIN( 218)						_gthis->queue->push(_hx_tmp);
            					}
            				}
            				else {
HXLINE( 221)					_gthis->busy = true;
HXLINE( 223)					if (_gthis->destructive) {
HXLINE( 224)						_gthis->dispose();
            					}
HXLINE( 226)					int length = _gthis->cells->length;
HXLINE( 227)					{
HXLINE( 227)						int _g = 0;
HXDLIN( 227)						int _g1 = length;
HXDLIN( 227)						while((_g < _g1)){
HXLINE( 227)							_g = (_g + 1);
HXDLIN( 227)							int i = (_g - 1);
HXLINE( 228)							{
HXLINE( 228)								 ::tink::core::_Callback::ListCell _this = _gthis->cells->__get(i).StaticCast<  ::tink::core::_Callback::ListCell >();
HXDLIN( 228)								if (::hx::IsNotNull( _this->list )) {
HXLINE( 228)									_this->cb(data);
            								}
            							}
            						}
            					}
HXLINE( 230)					_gthis->busy = false;
HXLINE( 232)					if (::hx::IsNull( _gthis->disposeHandlers )) {
HXLINE( 233)						_gthis->destroy();
            					}
            					else {
HXLINE( 235)						if ((_gthis->used < _gthis->cells->length)) {
HXLINE( 236)							_gthis->compact();
            						}
HXLINE( 238)						if ((_gthis->queue->length > 0)) {
HXLINE( 239)							_gthis->queue->shift()();
            						}
            					}
            				}
            			}
HXLINE( 214)			::tink::core::_Callback::Callback_Impl__obj::depth--;
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::tink::core::CallbackList,_gthis, ::Dynamic,data) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_03325987736a825f_215_invoke)
HXLINE( 215)				if (::hx::IsNotNull( _gthis->disposeHandlers )) {
HXLINE( 216)					if (_gthis->busy) {
HXLINE( 217)						if ((_gthis->destructive != true)) {
            							HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::Dynamic,_g, ::Dynamic,data1) HXARGC(0)
            							void _hx_run(){
            								HX_STACKFRAME(&_hx_pos_03325987736a825f_218_invoke)
HXLINE( 218)								_g(data1);
            							}
            							HX_END_LOCAL_FUNC0((void))

HXLINE( 218)							 ::Dynamic _g = _gthis->invoke_dyn();
HXDLIN( 218)							 ::Dynamic data1 = data;
HXDLIN( 218)							 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_1(_g,data1));
HXDLIN( 218)							_gthis->queue->push(_hx_tmp);
            						}
            					}
            					else {
HXLINE( 221)						_gthis->busy = true;
HXLINE( 223)						if (_gthis->destructive) {
HXLINE( 224)							_gthis->dispose();
            						}
HXLINE( 226)						int length = _gthis->cells->length;
HXLINE( 227)						{
HXLINE( 227)							int _g = 0;
HXDLIN( 227)							int _g1 = length;
HXDLIN( 227)							while((_g < _g1)){
HXLINE( 227)								_g = (_g + 1);
HXDLIN( 227)								int i = (_g - 1);
HXLINE( 228)								{
HXLINE( 228)									 ::tink::core::_Callback::ListCell _this = _gthis->cells->__get(i).StaticCast<  ::tink::core::_Callback::ListCell >();
HXDLIN( 228)									if (::hx::IsNotNull( _this->list )) {
HXLINE( 228)										_this->cb(data);
            									}
            								}
            							}
            						}
HXLINE( 230)						_gthis->busy = false;
HXLINE( 232)						if (::hx::IsNull( _gthis->disposeHandlers )) {
HXLINE( 233)							_gthis->destroy();
            						}
            						else {
HXLINE( 235)							if ((_gthis->used < _gthis->cells->length)) {
HXLINE( 236)								_gthis->compact();
            							}
HXLINE( 238)							if ((_gthis->queue->length > 0)) {
HXLINE( 239)								_gthis->queue->shift()();
            							}
            						}
            					}
            				}
            			}
            			HX_END_LOCAL_FUNC0((void))

HXDLIN( 214)			::tink::core::_Callback::Callback_Impl__obj::defer( ::Dynamic(new _hx_Closure_2(_gthis,data)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(CallbackList_obj,invoke,(void))

void CallbackList_obj::compact(){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_245_compact)
HXDLIN( 245)		if (this->busy) {
HXDLIN( 245)			return;
            		}
            		else {
HXLINE( 246)			if ((this->used == 0)) {
HXLINE( 247)				this->resize(0);
HXLINE( 248)				{
HXLINE( 248)					 ::Dynamic fn = this->ondrain;
HXDLIN( 248)					if ((::tink::core::_Callback::Callback_Impl__obj::depth < 500)) {
HXLINE( 248)						::tink::core::_Callback::Callback_Impl__obj::depth++;
HXDLIN( 248)						fn();
HXDLIN( 248)						::tink::core::_Callback::Callback_Impl__obj::depth--;
            					}
            					else {
HXLINE( 248)						::tink::core::_Callback::Callback_Impl__obj::defer(fn);
            					}
            				}
            			}
            			else {
HXLINE( 251)				int compacted = 0;
HXLINE( 253)				{
HXLINE( 253)					int _g = 0;
HXDLIN( 253)					int _g1 = this->cells->length;
HXDLIN( 253)					while((_g < _g1)){
HXLINE( 253)						_g = (_g + 1);
HXDLIN( 253)						int i = (_g - 1);
HXLINE( 254)						{
HXLINE( 254)							 ::tink::core::_Callback::ListCell _g1 = this->cells->__get(i).StaticCast<  ::tink::core::_Callback::ListCell >();
HXLINE( 255)							{
HXLINE( 254)								 ::tink::core::CallbackList _g2 = _g1->list;
HXLINE( 255)								if (::hx::IsNotNull( _g1->cb )) {
HXLINE( 256)									 ::tink::core::_Callback::ListCell v = _g1;
HXDLIN( 256)									{
HXLINE( 257)										if ((compacted != i)) {
HXLINE( 258)											this->cells[compacted] = v;
            										}
HXLINE( 259)										compacted = (compacted + 1);
HXDLIN( 259)										if ((compacted == this->used)) {
HXLINE( 259)											goto _hx_goto_16;
            										}
            									}
            								}
            							}
            						}
            					}
            					_hx_goto_16:;
            				}
HXLINE( 262)				this->resize(this->used);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(CallbackList_obj,compact,(void))

void CallbackList_obj::resize(int length){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_266_resize)
HXDLIN( 266)		this->cells->resize(length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CallbackList_obj,resize,(void))

void CallbackList_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_03325987736a825f_269_clear)
HXLINE( 270)		if (this->busy) {
HXLINE( 271)			this->queue->push(this->clear_dyn());
            		}
HXLINE( 272)		{
HXLINE( 272)			int _g = 0;
HXDLIN( 272)			::Array< ::Dynamic> _g1 = this->cells;
HXDLIN( 272)			while((_g < _g1->length)){
HXLINE( 272)				 ::tink::core::_Callback::ListCell cell = _g1->__get(_g).StaticCast<  ::tink::core::_Callback::ListCell >();
HXDLIN( 272)				_g = (_g + 1);
HXLINE( 273)				{
HXLINE( 273)					cell->cb = null();
HXDLIN( 273)					cell->list = null();
            				}
            			}
            		}
HXLINE( 274)		this->resize(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CallbackList_obj,clear,(void))


::hx::ObjectPtr< CallbackList_obj > CallbackList_obj::__new(::hx::Null< bool >  __o_destructive) {
	::hx::ObjectPtr< CallbackList_obj > __this = new CallbackList_obj();
	__this->__construct(__o_destructive);
	return __this;
}

::hx::ObjectPtr< CallbackList_obj > CallbackList_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_destructive) {
	CallbackList_obj *__this = (CallbackList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CallbackList_obj), true, "tink.core.CallbackList"));
	*(void **)__this = CallbackList_obj::_hx_vtable;
	__this->__construct(__o_destructive);
	return __this;
}

CallbackList_obj::CallbackList_obj()
{
}

void CallbackList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CallbackList);
	HX_MARK_MEMBER_NAME(destructive,"destructive");
	HX_MARK_MEMBER_NAME(cells,"cells");
	HX_MARK_MEMBER_NAME(used,"used");
	HX_MARK_MEMBER_NAME(queue,"queue");
	HX_MARK_MEMBER_NAME(busy,"busy");
	HX_MARK_MEMBER_NAME(ondrain,"ondrain");
	HX_MARK_MEMBER_NAME(onfill,"onfill");
	 ::tink::core::SimpleDisposable_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CallbackList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(destructive,"destructive");
	HX_VISIT_MEMBER_NAME(cells,"cells");
	HX_VISIT_MEMBER_NAME(used,"used");
	HX_VISIT_MEMBER_NAME(queue,"queue");
	HX_VISIT_MEMBER_NAME(busy,"busy");
	HX_VISIT_MEMBER_NAME(ondrain,"ondrain");
	HX_VISIT_MEMBER_NAME(onfill,"onfill");
	 ::tink::core::SimpleDisposable_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CallbackList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"used") ) { return ::hx::Val( used ); }
		if (HX_FIELD_EQ(inName,"busy") ) { return ::hx::Val( busy ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cells") ) { return ::hx::Val( cells ); }
		if (HX_FIELD_EQ(inName,"queue") ) { return ::hx::Val( queue ); }
		if (HX_FIELD_EQ(inName,"drain") ) { return ::hx::Val( drain_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"onfill") ) { return ::hx::Val( onfill ); }
		if (HX_FIELD_EQ(inName,"invoke") ) { return ::hx::Val( invoke_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ondrain") ) { return ::hx::Val( ondrain ); }
		if (HX_FIELD_EQ(inName,"release") ) { return ::hx::Val( release_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"compact") ) { return ::hx::Val( compact_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"destructive") ) { return ::hx::Val( destructive ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CallbackList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"used") ) { used=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"busy") ) { busy=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cells") ) { cells=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"queue") ) { queue=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onfill") ) { onfill=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ondrain") ) { ondrain=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"destructive") ) { destructive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CallbackList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("destructive",02,6d,89,7b));
	outFields->push(HX_("cells",91,4c,c0,43));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("used",3d,92,ad,4d));
	outFields->push(HX_("queue",91,8d,ea,5d));
	outFields->push(HX_("busy",39,15,20,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CallbackList_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(CallbackList_obj,destructive),HX_("destructive",02,6d,89,7b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CallbackList_obj,cells),HX_("cells",91,4c,c0,43)},
	{::hx::fsInt,(int)offsetof(CallbackList_obj,used),HX_("used",3d,92,ad,4d)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CallbackList_obj,queue),HX_("queue",91,8d,ea,5d)},
	{::hx::fsBool,(int)offsetof(CallbackList_obj,busy),HX_("busy",39,15,20,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CallbackList_obj,ondrain),HX_("ondrain",39,7a,c6,e2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(CallbackList_obj,onfill),HX_("onfill",22,ab,6c,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CallbackList_obj_sStaticStorageInfo = 0;
#endif

static ::String CallbackList_obj_sMemberFields[] = {
	HX_("destructive",02,6d,89,7b),
	HX_("cells",91,4c,c0,43),
	HX_("get_length",af,04,8f,8f),
	HX_("used",3d,92,ad,4d),
	HX_("queue",91,8d,ea,5d),
	HX_("busy",39,15,20,41),
	HX_("ondrain",39,7a,c6,e2),
	HX_("onfill",22,ab,6c,fb),
	HX_("release",c7,85,ed,58),
	HX_("destroy",fa,2c,86,24),
	HX_("drain",b8,4b,b6,df),
	HX_("add",21,f2,49,00),
	HX_("invoke",78,77,e0,9f),
	HX_("compact",a3,0b,69,83),
	HX_("resize",f4,59,7b,08),
	HX_("clear",8d,71,5b,48),
	::String(null()) };

::hx::Class CallbackList_obj::__mClass;

void CallbackList_obj::__register()
{
	CallbackList_obj _hx_dummy;
	CallbackList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.core.CallbackList",d6,72,f9,9e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CallbackList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CallbackList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallbackList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallbackList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace core
