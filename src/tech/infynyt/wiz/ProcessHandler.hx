package tech.infynyt.wiz;

import haxe.Json;
import haxe.io.Error;
import sys.Http;

using tech.infynyt.wiz.Types;

class ProcessHandler {
	public static final PORT_RECEIVE = 16760;
	public static final PORT_DOWNLOAD = 21413;

	public static function fetchPackage(pkg:String):Package {
		var request = new Http("http://96.235.29.196:" + PORT_RECEIVE + "/api/v1/packages/" + pkg);
		var output:Package = null;
		request.onError = function(error:String):Void {
			trace("Error: " + error.toString());
		};
		request.onData = function(data:String) {
			// the data will be in the form of a JSON string
			var json = Json.parse(data);
			output = json;
		}
		return output;
	}

	public static function validatePackage(pkg:String):Bool {
		var request = new Http("http://96.235.29.196:" + PORT_RECEIVE + "/api/v1/packages/" + pkg);
		var output:Bool = true;
		request.onError = function(error:String):Void {
			output = true;
			return;
		};
		request.onData = function(data:String) {
			output = false;
			return;
		}
		return output;
	}

	public static function downloadPackageInstaller(url:String):String {
		return null;
	}

	public static function runPackageInstaller(path:String):Bool {
		return false;
	}
}
