package tech.infynyt.wiz;

import sys.Http;

class Handler {
	public static function install(name:String):Bool {
		// first we must check if the package exists
		Console.log("Fetching package: " + name);
		var pkg:Package = fetch(name);
		if (pkg == null) {
			Console.error("Package not found: " + name);
			return false;
		}
		Console.success("Package found: " + name);
		Console.log("Downloading package: " + name);
		var binary = download(pkg);
		Console.debug(binary);
		if (binary == null) {
			Console.error("Package download failed: " + name);
			return false;
		}

		return false;
	}

	public static function uninstall(name:String):Bool {
		return false;
	}

	public static function fetch(name:String):Package {
		if (name == "test") {
			return {
				name: "test",
				version: "1.0.0",
				repository: "",
				license: "MIT",
				description: "",
				dependencies: [],
				keywords: [],
				main: "Test.hx",
				// downloadUrl: "http://localhost:9724/packages/test/1.0.0/test.zip",
				downloadUrl: "http://google.com",
				author: "SidGames5",
			};
		};
		return null;
	}

	public static function download(pkg:Package):String {
		Console.debug("Downloading package: " + pkg.name);
		var req = new Http(pkg.downloadUrl);
		req.request();
		req.onError = function(e:String) {
			Console.error("Http request failed: " + e);
			return null;
		};
		var output = null;
		req.onData = function(data:String) {
			Console.success("Http request success: " + data);
			output = data;
			return data;
		};
		return output;
	}

	public static function compile(dir:String):Bool {
		return false;
	}

	public static function execute(bin:String):Bool {
		return false;
	}

	public static function clean(dir:String):Bool {
		return false;
	}
}
