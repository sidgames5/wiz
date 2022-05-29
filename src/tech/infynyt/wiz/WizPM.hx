package tech.infynyt.wiz;

import sys.io.File;

class WizPM {
	public static final args:Array<String> = Sys.args();

	public static function main():Void {
		if (args.length == 0) {
			Console.log("Usage: wiz <command> [args]");
			return;
		}

		switch (args[0]) {
			case "install":
				if (args[1] == null) {
					Console.log("Usage: wiz install <package>");
					return;
				}
		}
		return;
	}
}
