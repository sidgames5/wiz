
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sys {
	public class Http : global::haxe.http.HttpBase {
		
		public Http(global::haxe.lang.EmptyObject empty) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
		}
		
		
		public Http(string url) : base(((global::haxe.lang.EmptyObject) (global::haxe.lang.EmptyObject.EMPTY) )) {
			global::sys.Http.__hx_ctor_sys_Http(this, url);
		}
		
		
		protected static void __hx_ctor_sys_Http(global::sys.Http __hx_this, string url) {
			unchecked {
				__hx_this.cnxTimeout = ((double) (10) );
				global::haxe.http.HttpBase.__hx_ctor_haxe_http_HttpBase(__hx_this, url);
			}
		}
		
		
		public double cnxTimeout;
		
		public override double __hx_setField_f(string field, int hash, double @value, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 1987394228:
					{
						this.cnxTimeout = ((double) (@value) );
						return @value;
					}
					
					
					default:
					{
						return base.__hx_setField_f(field, hash, @value, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override object __hx_setField(string field, int hash, object @value, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 1987394228:
					{
						this.cnxTimeout = ((double) (global::haxe.lang.Runtime.toDouble(@value)) );
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
					case 1987394228:
					{
						return this.cnxTimeout;
					}
					
					
					default:
					{
						return base.__hx_getField(field, hash, throwErrors, isCheck, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override double __hx_getField_f(string field, int hash, bool throwErrors, bool handleProperties) {
			unchecked {
				switch (hash) {
					case 1987394228:
					{
						return this.cnxTimeout;
					}
					
					
					default:
					{
						return base.__hx_getField_f(field, hash, throwErrors, handleProperties);
					}
					
				}
				
			}
		}
		
		
		public override void __hx_getFields(global::Array<string> baseArr) {
			baseArr.push("cnxTimeout");
			base.__hx_getFields(baseArr);
		}
		
		
	}
}


