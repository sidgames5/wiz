package tech.infynyt.wiz;

class WizPM {
	public static final args:Array<String> = Sys.args();
	
	public static function main():Void {
		if (args.length == 0) {
			Console.log("Usage: wiz <command> [args]");
		}
		return;
	}
}
