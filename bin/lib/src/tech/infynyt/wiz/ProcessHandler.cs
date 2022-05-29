
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace tech.infynyt.wiz {
	public class ProcessHandler : global::haxe.lang.HxObject {
		
		static ProcessHandler() {
			unchecked{
				global::tech.infynyt.wiz.ProcessHandler.PORT_RECEIVE = 16760;
				global::tech.infynyt.wiz.ProcessHandler.PORT_DOWNLOAD = 21413;
			}
		}
		
		
		public ProcessHandler(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public ProcessHandler() {
			global::tech.infynyt.wiz.ProcessHandler.__hx_ctor_tech_infynyt_wiz_ProcessHandler(this);
		}
		
		
		protected static void __hx_ctor_tech_infynyt_wiz_ProcessHandler(global::tech.infynyt.wiz.ProcessHandler __hx_this) {
		}
		
		
		public static int PORT_RECEIVE;
		
		public static int PORT_DOWNLOAD;
		
		public static object fetchPackage(string pkg) {
			global::sys.Http request = new global::sys.Http(((string) (global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("http://96.235.29.196:", global::haxe.lang.Runtime.toString(global::tech.infynyt.wiz.ProcessHandler.PORT_RECEIVE)), "/api/v1/packages/"), pkg)) ));
			object[] output = new object[]{null};
			request.onError = ( (( global::tech.infynyt.wiz.ProcessHandler_fetchPackage_16__Fun.__hx_current != null )) ? (global::tech.infynyt.wiz.ProcessHandler_fetchPackage_16__Fun.__hx_current) : (global::tech.infynyt.wiz.ProcessHandler_fetchPackage_16__Fun.__hx_current = ((global::tech.infynyt.wiz.ProcessHandler_fetchPackage_16__Fun) (new global::tech.infynyt.wiz.ProcessHandler_fetchPackage_16__Fun()) )) );
			request.onData = new global::tech.infynyt.wiz.ProcessHandler_fetchPackage_19__Fun(output);
			return output[0];
		}
		
		
		public static bool validatePackage(string pkg) {
			global::sys.Http request = new global::sys.Http(((string) (global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("http://96.235.29.196:", global::haxe.lang.Runtime.toString(global::tech.infynyt.wiz.ProcessHandler.PORT_RECEIVE)), "/api/v1/packages/"), pkg)) ));
			bool[] output = new bool[]{true};
			request.onError = new global::tech.infynyt.wiz.ProcessHandler_validatePackage_30__Fun(output);
			request.onData = new global::tech.infynyt.wiz.ProcessHandler_validatePackage_34__Fun(output);
			return output[0];
		}
		
		
		public static string downloadPackageInstaller(string url) {
			return null;
		}
		
		
		public static bool runPackageInstaller(string path) {
			return false;
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace tech.infynyt.wiz {
	public class ProcessHandler_fetchPackage_16__Fun : global::haxe.lang.Function {
		
		public ProcessHandler_fetchPackage_16__Fun() : base(1, 0) {
		}
		
		
		public static global::tech.infynyt.wiz.ProcessHandler_fetchPackage_16__Fun __hx_current;
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			unchecked {
				string error = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
				global::haxe.Log.trace.__hx_invoke2_o(default(double), global::haxe.lang.Runtime.concat("Error: ", error), default(double), new global::haxe.lang.DynamicObject(new int[]{302979532, 1547539107, 1648581351}, new object[]{"fetchPackage", "tech.infynyt.wiz.ProcessHandler", "src/tech/infynyt/wiz/ProcessHandler.hx"}, new int[]{1981972957}, new double[]{((double) (17) )}));
				return null;
			}
		}
		
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace tech.infynyt.wiz {
	public class ProcessHandler_fetchPackage_19__Fun : global::haxe.lang.Function {
		
		public ProcessHandler_fetchPackage_19__Fun(object[] output) : base(1, 0) {
			this.output = output;
		}
		
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			string data = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
			object json = new global::haxe.format.JsonParser(((string) (data) )).doParse();
			this.output[0] = json;
			return null;
		}
		
		
		public object[] output;
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace tech.infynyt.wiz {
	public class ProcessHandler_validatePackage_30__Fun : global::haxe.lang.Function {
		
		public ProcessHandler_validatePackage_30__Fun(bool[] output) : base(1, 0) {
			this.output = output;
		}
		
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			string error = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
			this.output[0] = true;
			return null;
		}
		
		
		public bool[] output;
		
	}
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace tech.infynyt.wiz {
	public class ProcessHandler_validatePackage_34__Fun : global::haxe.lang.Function {
		
		public ProcessHandler_validatePackage_34__Fun(bool[] output) : base(1, 0) {
			this.output = output;
		}
		
		
		public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
			string data = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (global::haxe.lang.Runtime.toString(__fn_float1)) : (global::haxe.lang.Runtime.toString(__fn_dyn1)) );
			this.output[0] = false;
			return null;
		}
		
		
		public bool[] output;
		
	}
}


