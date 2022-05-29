
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.http {
	public class HttpBase : global::haxe.lang.HxObject {
		
		public HttpBase(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public HttpBase(string url) {
			global::haxe.http.HttpBase.__hx_ctor_haxe_http_HttpBase(this, url);
		}
		
		
		protected static void __hx_ctor_haxe_http_HttpBase(global::haxe.http.HttpBase __hx_this, string url) {
			__hx_this.onError = ( (( global::haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun.__hx_current != null )) ? (global::haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun.__hx_current) : (global::haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun.__hx_current = ((global::haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun) (new global::haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun()) )) );
			__hx_this.onData = ( (( global::haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_196__Fun.__hx_current != null )) ? (global::haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_196__Fun.__hx_current) : (global::haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_196__Fun.__hx_current = ((global::haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_196__Fun) (new global::haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_196__Fun()) )) );
			{
				__hx_this.url = url;
				__hx_this.headers = new global::Array<object>(new object[]{});
				__hx_this.@params = new global::Array<object>(new object[]{});
				__hx_this.emptyOnData = __hx_this.onData;
			}
			
		}
		
		
		public string url;
		
		public global::Array<object> headers;
		
		public global::Array<object> @params;
		
		public global::haxe.lang.Function emptyOnData;
		
		public global::haxe.lang.Function onData;
		
		public global::haxe.lang.Function onError;
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 157772329:
					{
						this.onError = ((global::haxe.lang.Function) (@value) );
						return @value;
					}
					
					
					case 1693277929:
					{
						this.onData = ((global::haxe.lang.Function) (@value) );
						return @value;
					}
					
					
					case 756413782:
					{
						this.emptyOnData = ((global::haxe.lang.Function) (@value) );
						return @value;
					}
					
					
					case 1836776262:
					{
						this.@params = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						return @value;
					}
					
					
					case 1661489734:
					{
						this.headers = ((global::Array<object>) (global::Array<object>.__hx_cast<object>(((global::Array) (@value) ))) );
						return @value;
					}
					
					
					case 5843823:
					{
						this.url = global::haxe.lang.Runtime.toString(@value);
						return @value;
					}
					
					
					default:
					{
						return base.__hx_setField(field, hash, @value, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override object __hx_getField(string field, int hash, bool throwErrors, bool isCheck, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 157772329:
					{
						return this.onError;
					}
					
					
					case 1693277929:
					{
						return this.onData;
					}
					
					
					case 756413782:
					{
						return this.emptyOnData;
					}
					
					
					case 1836776262:
					{
						return this.@params;
					}
					
					
					case 1661489734:
					{
						return this.headers;
					}
					
					
					case 5843823:
					{
						return this.url;
					}
					
					
					default:
					{
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override void __hx_getFields(global::Array<string> baseArr) {
			baseArr.push("onError");
			baseArr.push("onData");
			baseArr.push("emptyOnData");
			baseArr.push("params");
			baseArr.push("headers");
			baseArr.push("url");
			base.__hx_getFields(baseArr);
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.http {
	public class HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun : global::haxe.lang.Function {
		
		public HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun() : base(1, 0) {
		}
		
		
		public static global::haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			string msg = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
			return null;
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace haxe.http {
	public class HttpBase___hx_ctor_haxe_http_HttpBase_196__Fun : global::haxe.lang.Function {
		
		public HttpBase___hx_ctor_haxe_http_HttpBase_196__Fun() : base(1, 0) {
		}
		
		
		public static global::haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_196__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			string data = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
			return null;
		}
		
		
	}
}


