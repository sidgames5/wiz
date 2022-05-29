
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
					global::Array<string> plist = global::tech.infynyt.wiz.WizPM.args.slice(1, default(global::haxe.lang.Null<int>));
					if (( plist.length == 0 )) {
						{
							string s1 = global::haxe.lang.Runtime.concat(global::Console.logPrefix, "Usage: wiz install [packages]");
							if (( s1 == null )) {
								s1 = "";
							}
							
							global::Console.printFormatted(global::haxe.lang.Runtime.concat(s1, "\n"), new global::haxe.lang.Null<int>(((int) (0) ), true));
						}
						
						return;
					}
					
					{
						int _g = 0;
						while (( _g < plist.length )) {
							string pkg = plist[_g];
							 ++ _g;
							if (global::tech.infynyt.wiz.ProcessHandler.validatePackage(pkg)) {
								object pkgi = global::tech.infynyt.wiz.ProcessHandler.fetchPackage(pkg);
								string bin = global::tech.infynyt.wiz.ProcessHandler.downloadPackageInstaller(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(pkgi, "downloadUrl", 1643404487, true)));
								global::sys.io.File.saveContent("wiztemp.tmp.exe", bin);
								global::tech.infynyt.wiz.ProcessHandler.runPackageInstaller("wiztemp.tmp.exe");
							}
							else {
								{
									string s2 = global::haxe.lang.Runtime.concat(global::Console.warnPrefix, (global::haxe.lang.Runtime.concat("", (global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("Unable to install package ", pkg), ": no package found in library")))));
									if (( s2 == null )) {
										s2 = "";
									}
									
									global::Console.printFormatted(global::haxe.lang.Runtime.concat(s2, "\n"), new global::haxe.lang.Null<int>(((int) (1) ), true));
								}
								
								return;
							}
							
						}
						
					}
					
				}
				
			}
		}
		
		
	}
}


