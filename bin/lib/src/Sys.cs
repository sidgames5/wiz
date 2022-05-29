
#pragma warning disable 109, 114, 219, 429, 168, 162
public class Sys : global::haxe.lang.HxObject {
	
	public Sys(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public Sys() {
		global::Sys.__hx_ctor__Sys(this);
	}
	
	
	protected static void __hx_ctor__Sys(global::Sys __hx_this) {
	}
	
	
	public static global::haxe.ds.StringMap<string> _env;
	
	public static global::Array<string> _args;
	
	public static global::Array<string> args() {
		if (( global::Sys._args == null )) {
			global::Array<string> ret = new global::Array<string>(((string[]) (global::System.Environment.GetCommandLineArgs()) ));
			string __temp_expr1 = global::haxe.lang.Runtime.toString((ret.shift()).toDynamic());
			global::Sys._args = ret;
		}
		
		return global::Sys._args.copy();
	}
	
	
	public static global::haxe.ds.StringMap<string> environment() {
		if (( global::Sys._env == null )) {
			global::haxe.ds.StringMap<string> e = global::Sys._env = new global::haxe.ds.StringMap<string>();
			global::System.Collections.IDictionaryEnumerator nenv = ((global::System.Collections.IDictionaryEnumerator) (( global::System.Environment.GetEnvironmentVariables() as global::System.Collections.IEnumerable ).GetEnumerator()) );
			while (( nenv as global::System.Collections.IEnumerator ).MoveNext()) {
				e.@set(global::haxe.lang.Runtime.toString(nenv.Key), global::haxe.lang.Runtime.toString(nenv.Value));
			}
			
		}
		
		return ((global::haxe.ds.StringMap<string>) (global::Sys._env) );
	}
	
	
	public static string systemName() {
		unchecked {
			switch (global::haxe.lang.Runtime.concat(global::Std.@string(global::System.Environment.OSVersion.Platform), "")) {
				case "MacOSX":
				{
					return "Mac";
				}
				
				
				case "Unix":
				{
					return "Linux";
				}
				
				
				case "Xbox":
				{
					return "Xbox";
				}
				
				
				default:
				{
					int ver = ((int) (global::haxe.lang.Runtime.toInt(((object) (global::System.Environment.OSVersion.Platform) ))) );
					if (( ( ( ver == 4 ) || ( ver == 6 ) ) || ( ver == 128 ) )) {
						return "Linux";
					}
					
					return "Windows";
				}
				
			}
			
		}
	}
	
	
}


