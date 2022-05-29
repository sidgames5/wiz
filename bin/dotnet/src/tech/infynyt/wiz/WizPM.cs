
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace tech.infynyt.wiz {
	public class WizPM : global::haxe.lang.HxObject {
		
		public static void Main(){
			global::cs.Boot.init();
			global::tech.infynyt.wiz.WizPM.main();
		}
		static WizPM() {
			global::tech.infynyt.wiz.WizPM.args = global::Sys.args();
		}
		
		
		public WizPM(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public WizPM() {
			global::tech.infynyt.wiz.WizPM.__hx_ctor_tech_infynyt_wiz_WizPM(this);
		}
		
		
		protected static void __hx_ctor_tech_infynyt_wiz_WizPM(global::tech.infynyt.wiz.WizPM __hx_this) {
		}
		
		
		public static global::Array<string> args;
		
		public static void main() {
			unchecked {
				if (( global::tech.infynyt.wiz.WizPM.args.length == 0 )) {
					{
						string s = global::haxe.lang.Runtime.concat(global::Console.logPrefix, "Usage: wiz <command> [args]");
						if (( s == null )) {
							s = "";
						}
						
						global::Console.printFormatted(global::haxe.lang.Runtime.concat(s, "\n"), new global::haxe.lang.Null<int>(((int) (0) ), true));
					}
					
					return;
				}
				
				if (( global::tech.infynyt.wiz.WizPM.args[0] == "install" )) {
					if (( global::tech.infynyt.wiz.WizPM.args[1] == null )) {
						{
							string s1 = global::haxe.lang.Runtime.concat(global::Console.logPrefix, "Usage: wiz install <package>");
							if (( s1 == null )) {
								s1 = "";
							}
							
							global::Console.printFormatted(global::haxe.lang.Runtime.concat(s1, "\n"), new global::haxe.lang.Null<int>(((int) (0) ), true));
						}
						
						return;
					}
					
				}
				
			}
		}
		
		
	}
}


