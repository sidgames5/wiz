package tech.infynyt.wiz;

class WizPM {
	public static final args:Array<String> = Sys.args();
	
	public static function main():Void {
		if (args.length == 0) {
			Console.log("Usage: wiz <command> [args]");
			return;
		}
		
		switch (args[0]) {
			case "install":
				var plist = args.slice(1);
				if (plist.length == 0) {
					Console.log("Usage: wiz install [packages]");
					return;
				}
				break;
		}
		
		return;
	}
}
