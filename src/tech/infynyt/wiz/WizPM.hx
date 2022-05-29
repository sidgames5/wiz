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
				var plist = args.slice(1);
				if (plist.length == 0) {
					Console.log("Usage: wiz install [packages]");
					return;
				}
				for (pkg in plist) {
					if (ProcessHandler.validatePackage(pkg)) {
						var pkgi = ProcessHandler.fetchPackage(pkg);
						var bin = ProcessHandler.downloadPackageInstaller(pkgi.downloadUrl);
						File.saveContent("wiztemp.tmp.exe", bin);
						ProcessHandler.runPackageInstaller("wiztemp.tmp.exe");
					} else {
						Console.warn("Unable to install package " + pkg + ": no package found in library");
						return;
					}
				}
		}
		return;
	}
}
