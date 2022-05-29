
#pragma warning disable 109, 114, 219, 429, 168, 162
public class Console : global::haxe.lang.HxObject {
	
	static Console() {
		unchecked{
			global::Console.formatMode = global::Console.determineConsoleFormatMode();
			global::Console.logPrefix = "<b,gray>><//> ";
			global::Console.warnPrefix = "<b,yellow>><//> ";
			global::Console.errorPrefix = "<b,red>></b> ";
			global::Console.successPrefix = "<b,light_green>><//> ";
			global::Console.debugPrefix = "<b,magenta>><//> ";
			global::Console.printIntercept = null;
			global::Console.argSeparator = " ";
			global::Console.unicodeCompatibilityMode = ( (( global::Sys.systemName() == "Windows" )) ? (((int) (1) )) : (((int) (0) )) );
			global::Console.unicodeCompatibilityEnabled = false;
			global::Console.formatTagPattern = new global::EReg(((string) ("(\\\\)?<(/)?([^><{}\\s]*|{[^}<>]*})>") ), ((string) ("g") ));
		}
	}
	
	
	public Console(global::haxe.lang.EmptyObject empty) {
	}
	
	
	public Console() {
		global::Console.__hx_ctor__Console(this);
	}
	
	
	protected static void __hx_ctor__Console(global::Console __hx_this) {
	}
	
	
	public static int formatMode;
	
	public static string logPrefix;
	
	public static string warnPrefix;
	
	public static string errorPrefix;
	
	public static string successPrefix;
	
	public static string debugPrefix;
	
	public static global::haxe.lang.Function printIntercept;
	
	public static string argSeparator;
	
	public static int unicodeCompatibilityMode;
	
	public static bool unicodeCompatibilityEnabled;
	
	public static void printlnFormatted(string s, global::haxe.lang.Null<int> outputStream) {
		int outputStream1 = ( ( ! (outputStream.hasValue) ) ? (0) : ((outputStream).@value) );
		if (( s == null )) {
			s = "";
		}
		
		global::Console.printFormatted(global::haxe.lang.Runtime.concat(s, "\n"), new global::haxe.lang.Null<int>(outputStream1, true));
	}
	
	
	public static void println(string s, global::haxe.lang.Null<int> outputStream) {
		int outputStream1 = ( ( ! (outputStream.hasValue) ) ? (0) : ((outputStream).@value) );
		if (( s == null )) {
			s = "";
		}
		
		global::Console.print(global::haxe.lang.Runtime.concat(s, "\n"), new global::haxe.lang.Null<int>(outputStream1, true));
	}
	
	
	public static global::EReg formatTagPattern;
	
	public static object format(string s, int formatMode) {
		s = global::haxe.lang.Runtime.concat(s, "<//>");
		global::Array<string>[] activeFormatFlagStack = new global::Array<string>[]{new global::Array<string>()};
		global::Array<int>[] groupedProceedingTags = new global::Array<int>[]{new global::Array<int>()};
		string result = global::Console.formatTagPattern.map(s, new global::Console_format_140__Fun(groupedProceedingTags, formatMode, activeFormatFlagStack));
		return new global::haxe.lang.DynamicObject(new int[]{426240764}, new object[]{result}, new int[]{}, new double[]{});
	}
	
	
	public static string stripFormatting(string s) {
		unchecked {
			return global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(global::Console.format(s, ((int) (2) )), "formatted", 426240764, true));
		}
	}
	
	
	public static void printFormatted(string s, global::haxe.lang.Null<int> outputStream) {
		int outputStream1 = ( ( ! (outputStream.hasValue) ) ? (0) : ((outputStream).@value) );
		if (( s == null )) {
			s = "";
		}
		
		object result = global::Console.format(s, global::Console.formatMode);
		global::Console.print(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(result, "formatted", 426240764, true)), new global::haxe.lang.Null<int>(outputStream1, true));
	}
	
	
	public static void print(string s, global::haxe.lang.Null<int> outputStream) {
		unchecked {
			int outputStream1 = ( ( ! (outputStream.hasValue) ) ? (0) : ((outputStream).@value) );
			if (( s == null )) {
				s = "";
			}
			
			if (( global::Console.printIntercept != null )) {
				bool allowDefaultPrint = global::haxe.lang.Runtime.toBool(((global::haxe.lang.Function) (global::Console.printIntercept) ).__hx_invoke2_o(default(double), s, ((double) (outputStream1) ), global::haxe.lang.Runtime.undefined));
				if ( ! (allowDefaultPrint) ) {
					return;
				}
				
			}
			
			if (( ( global::Console.unicodeCompatibilityMode == ((int) (1) ) ) &&  ! (global::Console.unicodeCompatibilityEnabled)  )) {
				global::Console.exec("chcp 65001", null);
				global::Console.unicodeCompatibilityEnabled = true;
			}
			
			switch (outputStream1) {
				case 1:
				case 2:
				{
					((global::haxe.io.Output) (new global::cs.io.NativeOutput(((global::System.IO.Stream) (global::System.Console.OpenStandardError()) ))) ).writeString(s, null);
					break;
				}
				
				
				case 0:
				case 3:
				{
					((global::haxe.io.Output) (new global::cs.io.NativeOutput(((global::System.IO.Stream) (global::System.Console.OpenStandardOutput()) ))) ).writeString(s, null);
					break;
				}
				
				
			}
			
		}
	}
	
	
	public static string getAsciiFormat(string flag) {
		unchecked {
			if (( global::haxe.lang.StringExt.charAt(((string) (flag) ), 0) == "#" )) {
				string hex = global::haxe.lang.StringExt.substr(((string) (flag) ), 1, default(global::haxe.lang.Null<int>));
				global::haxe.lang.Null<int> r = global::Std.parseInt(global::haxe.lang.Runtime.concat("0x", global::haxe.lang.StringExt.substr(hex, 0, new global::haxe.lang.Null<int>(2, true))));
				global::haxe.lang.Null<int> g = global::Std.parseInt(global::haxe.lang.Runtime.concat("0x", global::haxe.lang.StringExt.substr(hex, 2, new global::haxe.lang.Null<int>(2, true))));
				global::haxe.lang.Null<int> b = global::Std.parseInt(global::haxe.lang.Runtime.concat("0x", global::haxe.lang.StringExt.substr(hex, 4, new global::haxe.lang.Null<int>(2, true))));
				return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString((global::Console.rgbToAscii256((r).@value, (g).@value, (b).@value)).toDynamic())), "m");
			}
			
			if (( global::haxe.lang.StringExt.substr(((string) (flag) ), 0, new global::haxe.lang.Null<int>(3, true)) == "bg#" )) {
				string hex1 = global::haxe.lang.StringExt.substr(((string) (flag) ), 3, default(global::haxe.lang.Null<int>));
				global::haxe.lang.Null<int> r1 = global::Std.parseInt(global::haxe.lang.Runtime.concat("0x", global::haxe.lang.StringExt.substr(hex1, 0, new global::haxe.lang.Null<int>(2, true))));
				global::haxe.lang.Null<int> g1 = global::Std.parseInt(global::haxe.lang.Runtime.concat("0x", global::haxe.lang.StringExt.substr(hex1, 2, new global::haxe.lang.Null<int>(2, true))));
				global::haxe.lang.Null<int> b1 = global::Std.parseInt(global::haxe.lang.Runtime.concat("0x", global::haxe.lang.StringExt.substr(hex1, 4, new global::haxe.lang.Null<int>(2, true))));
				return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString((global::Console.rgbToAscii256((r1).@value, (g1).@value, (b1).@value)).toDynamic())), "m");
			}
			
			switch (flag) {
				case "bg_black":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (0) ))), "m");
				}
				
				
				case "bg_blue":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (4) ))), "m");
				}
				
				
				case "bg_cyan":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (6) ))), "m");
				}
				
				
				case "bg_green":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (2) ))), "m");
				}
				
				
				case "bg_light_black":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (8) ))), "m");
				}
				
				
				case "bg_light_blue":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (12) ))), "m");
				}
				
				
				case "bg_light_cyan":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (14) ))), "m");
				}
				
				
				case "bg_light_green":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (10) ))), "m");
				}
				
				
				case "bg_light_magenta":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (13) ))), "m");
				}
				
				
				case "bg_light_red":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (9) ))), "m");
				}
				
				
				case "bg_light_white":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (15) ))), "m");
				}
				
				
				case "bg_light_yellow":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (11) ))), "m");
				}
				
				
				case "bg_magenta":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (5) ))), "m");
				}
				
				
				case "bg_red":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (1) ))), "m");
				}
				
				
				case "bg_white":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (7) ))), "m");
				}
				
				
				case "bg_yellow":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[48;5;", global::haxe.lang.Runtime.toString(((int) (3) ))), "m");
				}
				
				
				case "black":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (0) ))), "m");
				}
				
				
				case "blink":
				{
					return "\u001b[5m";
				}
				
				
				case "blue":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (4) ))), "m");
				}
				
				
				case "bold":
				{
					return "\u001b[1m";
				}
				
				
				case "cyan":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (6) ))), "m");
				}
				
				
				case "dim":
				{
					return "\u001b[2m";
				}
				
				
				case "green":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (2) ))), "m");
				}
				
				
				case "hidden":
				{
					return "\u001b[8m";
				}
				
				
				case "invert":
				{
					return "\u001b[7m";
				}
				
				
				case "italic":
				{
					return "\u001b[3m";
				}
				
				
				case "light_black":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (8) ))), "m");
				}
				
				
				case "light_blue":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (12) ))), "m");
				}
				
				
				case "light_cyan":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (14) ))), "m");
				}
				
				
				case "light_green":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (10) ))), "m");
				}
				
				
				case "light_magenta":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (13) ))), "m");
				}
				
				
				case "light_red":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (9) ))), "m");
				}
				
				
				case "light_white":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (15) ))), "m");
				}
				
				
				case "light_yellow":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (11) ))), "m");
				}
				
				
				case "magenta":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (5) ))), "m");
				}
				
				
				case "red":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (1) ))), "m");
				}
				
				
				case "reset":
				{
					return "\u001b[m";
				}
				
				
				case "underline":
				{
					return "\u001b[4m";
				}
				
				
				case "white":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (7) ))), "m");
				}
				
				
				case "yellow":
				{
					return global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat("\u001b[38;5;", global::haxe.lang.Runtime.toString(((int) (3) ))), "m");
				}
				
				
				default:
				{
					return "";
				}
				
			}
			
		}
	}
	
	
	public static global::haxe.lang.Null<int> rgbToAscii256(int r, int g, int b) {
		unchecked {
			global::haxe.lang.Function nearIdx = ( (( global::Console_rgbToAscii256_403__Fun.__hx_current != null )) ? (global::Console_rgbToAscii256_403__Fun.__hx_current) : (global::Console_rgbToAscii256_403__Fun.__hx_current = ((global::Console_rgbToAscii256_403__Fun) (new global::Console_rgbToAscii256_403__Fun()) )) );
			global::Array<int> colorSteps = new global::Array<int>(new int[]{0, 95, 135, 175, 215, 255});
			int ir = ((int) (nearIdx.__hx_invoke2_f(((double) (r) ), global::haxe.lang.Runtime.undefined, default(double), colorSteps)) );
			int ig = ((int) (nearIdx.__hx_invoke2_f(((double) (g) ), global::haxe.lang.Runtime.undefined, default(double), colorSteps)) );
			int ib = ((int) (nearIdx.__hx_invoke2_f(((double) (b) ), global::haxe.lang.Runtime.undefined, default(double), colorSteps)) );
			int ier = global::System.Math.Abs(((int) (( r - colorSteps[ir] )) ));
			int ieg = global::System.Math.Abs(((int) (( g - colorSteps[ig] )) ));
			int ieb = global::System.Math.Abs(((int) (( b - colorSteps[ib] )) ));
			int averageColorError = ( ( ier + ieg ) + ieb );
			int jr = global::Math.round(( ((double) ((( r - 8 ))) ) / 10 ));
			int jg = global::Math.round(( ((double) ((( g - 8 ))) ) / 10 ));
			int jb = global::Math.round(( ((double) ((( b - 8 ))) ) / 10 ));
			double jer = global::System.Math.Abs(((double) (( r - global::System.Math.Max(((double) (global::System.Math.Min(((int) (( ( jr * 10 ) + 8 )) ), ((int) (238) ))) ), ((double) (8) )) )) ));
			double jeg = global::System.Math.Abs(((double) (( g - global::System.Math.Max(((double) (global::System.Math.Min(((int) (( ( jg * 10 ) + 8 )) ), ((int) (238) ))) ), ((double) (8) )) )) ));
			double jeb = global::System.Math.Abs(((double) (( b - global::System.Math.Max(((double) (global::System.Math.Min(((int) (( ( jb * 10 ) + 8 )) ), ((int) (238) ))) ), ((double) (8) )) )) ));
			double averageGrayError = ( ( jer + jeg ) + jeb );
			if (( ( ( averageGrayError < averageColorError ) && ( r == g ) ) && ( g == b ) )) {
				int grayIndex = ( jr + 232 );
				return new global::haxe.lang.Null<int>(grayIndex, true);
			}
			else {
				int colorIndex = ( ( ( 16 + ( ir * 36 ) ) + ( ig * 6 ) ) + ib );
				return new global::haxe.lang.Null<int>(colorIndex, true);
			}
			
		}
	}
	
	
	public static string getBrowserFormat(string flag) {
		unchecked {
			if (( global::haxe.lang.StringExt.charAt(((string) (flag) ), 0) == "#" )) {
				return global::haxe.lang.Runtime.concat("color: ", flag);
			}
			
			if (( global::haxe.lang.StringExt.substr(((string) (flag) ), 0, new global::haxe.lang.Null<int>(3, true)) == "bg#" )) {
				return global::haxe.lang.Runtime.concat("background-color: ", global::haxe.lang.StringExt.substr(((string) (flag) ), 2, default(global::haxe.lang.Null<int>)));
			}
			
			if (( global::haxe.lang.StringExt.charAt(((string) (flag) ), 0) == "{" )) {
				return global::haxe.lang.StringExt.substr(((string) (flag) ), 1, new global::haxe.lang.Null<int>(( ((string) (flag) ).Length - 2 ), true));
			}
			
			switch (flag) {
				case "bg_black":
				{
					return "background-color: black";
				}
				
				
				case "bg_blue":
				{
					return "background-color: blue";
				}
				
				
				case "bg_cyan":
				{
					return "background-color: cyan";
				}
				
				
				case "bg_green":
				{
					return "background-color: green";
				}
				
				
				case "bg_light_black":
				{
					return "background-color: gray";
				}
				
				
				case "bg_light_blue":
				{
					return "background-color: lightBlue";
				}
				
				
				case "bg_light_cyan":
				{
					return "background-color: lightCyan";
				}
				
				
				case "bg_light_green":
				{
					return "background-color: lightGreen";
				}
				
				
				case "bg_light_magenta":
				{
					return "background-color: lightPink";
				}
				
				
				case "bg_light_red":
				{
					return "background-color: salmon";
				}
				
				
				case "bg_light_white":
				{
					return "background-color: white";
				}
				
				
				case "bg_light_yellow":
				{
					return "background-color: lightYellow";
				}
				
				
				case "bg_magenta":
				{
					return "background-color: magenta";
				}
				
				
				case "bg_red":
				{
					return "background-color: red";
				}
				
				
				case "bg_white":
				{
					return "background-color: whiteSmoke";
				}
				
				
				case "bg_yellow":
				{
					return "background-color: gold";
				}
				
				
				case "black":
				{
					return "color: black";
				}
				
				
				case "blink":
				{
					return "text-decoration: blink";
				}
				
				
				case "blue":
				{
					return "color: blue";
				}
				
				
				case "bold":
				{
					return "font-weight: bold";
				}
				
				
				case "cyan":
				{
					return "color: cyan";
				}
				
				
				case "dim":
				{
					return "color: gray";
				}
				
				
				case "green":
				{
					return "color: green";
				}
				
				
				case "hidden":
				{
					return "visibility: hidden; color: white";
				}
				
				
				case "invert":
				{
					return "-webkit-filter: invert(100%); filter: invert(100%)";
				}
				
				
				case "italic":
				{
					return "font-style: italic";
				}
				
				
				case "light_black":
				{
					return "color: gray";
				}
				
				
				case "light_blue":
				{
					return "color: lightBlue";
				}
				
				
				case "light_cyan":
				{
					return "color: lightCyan";
				}
				
				
				case "light_green":
				{
					return "color: lightGreen";
				}
				
				
				case "light_magenta":
				{
					return "color: lightPink";
				}
				
				
				case "light_red":
				{
					return "color: salmon";
				}
				
				
				case "light_white":
				{
					return "color: white";
				}
				
				
				case "light_yellow":
				{
					return "color: #ffed88";
				}
				
				
				case "magenta":
				{
					return "color: magenta";
				}
				
				
				case "red":
				{
					return "color: red";
				}
				
				
				case "reset":
				{
					return "";
				}
				
				
				case "underline":
				{
					return "text-decoration: underline";
				}
				
				
				case "white":
				{
					return "color: whiteSmoke";
				}
				
				
				case "yellow":
				{
					return "color: #f5ba00";
				}
				
				
				default:
				{
					return "";
				}
				
			}
			
		}
	}
	
	
	public static int determineConsoleFormatMode() {
		unchecked {
			object tputColors = global::Console.exec("tput colors", null);
			if (global::haxe.lang.Runtime.eq(((object) (global::haxe.lang.Runtime.getField(tputColors, "exit", 1126037278, true)) ), 0)) {
				global::haxe.lang.Null<int> tputResult = global::Std.parseInt(global::haxe.lang.Runtime.toString(global::haxe.lang.Runtime.getField(tputColors, "stdout", 133414859, true)));
				if (( tputResult.hasValue && ( (tputResult).@value > 2 ) )) {
					return ((int) (0) );
				}
				
			}
			
			string termEnv = global::haxe.lang.Runtime.toString((((global::haxe.ds.StringMap<string>) (global::haxe.ds.StringMap<object>.__hx_cast<string>(((global::haxe.ds.StringMap) (((global::haxe.IMap<string, string>) (global::Sys.environment()) )) ))) ).@get("TERM")).toDynamic());
			if (( ( termEnv != null ) && new global::EReg(((string) ("cygwin|xterm|vt100") ), ((string) ("") )).match(termEnv) )) {
				return ((int) (0) );
			}
			
			return ((int) (2) );
		}
	}
	
	
	public static object exec(string cmd, global::Array<string> args) {
		unchecked {
			try {
				global::sys.io.Process p = new global::sys.io.Process(((string) (cmd) ), ((global::Array<string>) (args) ), default(global::haxe.lang.Null<bool>));
				global::haxe.lang.Null<int> exit = p.exitCode(default(global::haxe.lang.Null<bool>));
				string stdout = p.stdout.readAll(default(global::haxe.lang.Null<int>)).toString();
				p.close();
				return new global::haxe.lang.DynamicObject(new int[]{133414859, 1126037278}, new object[]{stdout, (exit).toDynamic()}, new int[]{}, new double[]{});
			}
			catch (global::System.Exception _g){
				return new global::haxe.lang.DynamicObject(new int[]{133414859, 1126037278}, new object[]{"", ((object) (1) )}, new int[]{}, new double[]{});
			}
			
			
		}
	}
	
	
}



#pragma warning disable 109, 114, 219, 429, 168, 162
public class Console_format_140__Fun : global::haxe.lang.Function {
	
	public Console_format_140__Fun(global::Array<int>[] groupedProceedingTags, int formatMode, global::Array<string>[] activeFormatFlagStack) : base(1, 0) {
		this.groupedProceedingTags = groupedProceedingTags;
		this.formatMode = formatMode;
		this.activeFormatFlagStack = activeFormatFlagStack;
	}
	
	
	public override object __hx_invoke1_o(double __fn_float1, object __fn_dyn1) {
		unchecked {
			global::EReg e = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((global::EReg) (((object) (__fn_float1) )) )) : (((global::EReg) (__fn_dyn1) )) );
			bool escaped = ( e.matched(1) != null );
			if (escaped) {
				return e.matched(0);
			}
			
			bool open = ( e.matched(2) == null );
			global::Array<string> tags = global::haxe.lang.StringExt.split(e.matched(3), ",");
			if ((  ! (open)  && ( tags.length == 1 ) )) {
				if (( tags[0] == "" )) {
					string last = ((global::Array<string>) (this.activeFormatFlagStack[0]) )[( ((global::Array<string>) (this.activeFormatFlagStack[0]) ).length - 1 )];
					{
						int i = ((global::Array<string>) (this.activeFormatFlagStack[0]) ).indexOf(last, default(global::haxe.lang.Null<int>));
						if (( i != -1 )) {
							int proceedingTags = ((global::Array<int>) (this.groupedProceedingTags[0]) )[i];
							((global::Array<string>) (this.activeFormatFlagStack[0]) ).spliceVoid(( i - proceedingTags ), ( proceedingTags + 1 ));
							((global::Array<int>) (this.groupedProceedingTags[0]) ).spliceVoid(( i - proceedingTags ), ( proceedingTags + 1 ));
						}
						
					}
					
				}
				else if (( global::_Console.FormatFlag_Impl_.fromString(tags[0]) == ((string) ("reset") ) )) {
					this.activeFormatFlagStack[0] = new global::Array<string>(new string[]{});
					this.groupedProceedingTags[0] = new global::Array<int>(new int[]{});
				}
				else {
					string flag = global::_Console.FormatFlag_Impl_.fromString(tags[0]);
					if (( flag != null )) {
						int i1 = ((global::Array<string>) (this.activeFormatFlagStack[0]) ).indexOf(flag, default(global::haxe.lang.Null<int>));
						if (( i1 != -1 )) {
							int proceedingTags1 = ((global::Array<int>) (this.groupedProceedingTags[0]) )[i1];
							((global::Array<string>) (this.activeFormatFlagStack[0]) ).spliceVoid(( i1 - proceedingTags1 ), ( proceedingTags1 + 1 ));
							((global::Array<int>) (this.groupedProceedingTags[0]) ).spliceVoid(( i1 - proceedingTags1 ), ( proceedingTags1 + 1 ));
						}
						
					}
					
				}
				
			}
			else {
				int proceedingTags2 = 0;
				{
					int _g = 0;
					while (( _g < tags.length )) {
						string tag = tags[_g];
						 ++ _g;
						string flag1 = global::_Console.FormatFlag_Impl_.fromString(tag);
						if (( flag1 == null )) {
							return e.matched(0);
						}
						
						if (open) {
							{
								((global::Array<string>) (this.activeFormatFlagStack[0]) ).push(flag1);
								((global::Array<int>) (this.groupedProceedingTags[0]) ).push(proceedingTags2);
							}
							
							 ++ proceedingTags2;
						}
						else {
							int i2 = ((global::Array<string>) (this.activeFormatFlagStack[0]) ).indexOf(flag1, default(global::haxe.lang.Null<int>));
							if (( i2 != -1 )) {
								int proceedingTags3 = ((global::Array<int>) (this.groupedProceedingTags[0]) )[i2];
								((global::Array<string>) (this.activeFormatFlagStack[0]) ).spliceVoid(( i2 - proceedingTags3 ), ( proceedingTags3 + 1 ));
								((global::Array<int>) (this.groupedProceedingTags[0]) ).spliceVoid(( i2 - proceedingTags3 ), ( proceedingTags3 + 1 ));
							}
							
						}
						
					}
					
				}
				
			}
			
			switch (this.formatMode) {
				case 0:
				{
					if (open) {
						if (( ((global::Array<string>) (this.activeFormatFlagStack[0]) ).length > 0 )) {
							int lastFlagCount = ( ((global::Array<int>) (this.groupedProceedingTags[0]) )[( ((global::Array<int>) (this.groupedProceedingTags[0]) ).length - 1 )] + 1 );
							string asciiFormatString = "";
							{
								int _g1 = 0;
								int _g2 = lastFlagCount;
								while (( _g1 < _g2 )) {
									int i3 = _g1++;
									int idx = ( ( ((global::Array<int>) (this.groupedProceedingTags[0]) ).length - 1 ) - i3 );
									asciiFormatString = global::haxe.lang.Runtime.concat(asciiFormatString, global::Console.getAsciiFormat(((global::Array<string>) (this.activeFormatFlagStack[0]) )[idx]));
								}
								
							}
							
							return asciiFormatString;
						}
						else {
							return "";
						}
						
					}
					else {
						string result = global::Console.getAsciiFormat(((string) ("reset") ));
						global::Array<string> ret = new global::Array<string>(((string[]) (new string[((global::Array<string>) (this.activeFormatFlagStack[0]) ).length]) ));
						{
							int _g3 = 0;
							int _g4 = ((global::Array<string>) (this.activeFormatFlagStack[0]) ).length;
							while (( _g3 < _g4 )) {
								int i4 = _g3++;
								{
									string val = global::Console.getAsciiFormat(((string) (((global::Array<string>) (this.activeFormatFlagStack[0]) ).__a[i4]) ));
									ret.__a[i4] = val;
								}
								
							}
							
						}
						
						global::Array<string> _this = ret;
						global::Array<string> ret1 = new global::Array<string>(new string[]{});
						{
							int _g5 = 0;
							int _g6 = _this.length;
							while (( _g5 < _g6 )) {
								int i5 = _g5++;
								string elt = ((string) (_this.__a[i5]) );
								if (( elt != null )) {
									ret1.push(elt);
								}
								
							}
							
						}
						
						return global::haxe.lang.Runtime.concat(result, ret1.@join(""));
					}
					
				}
				
				
				case 2:
				{
					return "";
				}
				
				
			}
			
			return null;
		}
	}
	
	
	public global::Array<int>[] groupedProceedingTags;
	
	public int formatMode;
	
	public global::Array<string>[] activeFormatFlagStack;
	
}



#pragma warning disable 109, 114, 219, 429, 168, 162
public class Console_rgbToAscii256_403__Fun : global::haxe.lang.Function {
	
	public Console_rgbToAscii256_403__Fun() : base(2, 1) {
	}
	
	
	public static global::Console_rgbToAscii256_403__Fun __hx_current;
	
	public override double __hx_invoke2_f(double __fn_float1, object __fn_dyn1, double __fn_float2, object __fn_dyn2) {
		unchecked {
			global::Array<int> @set = ( (( __fn_dyn2 == global::haxe.lang.Runtime.undefined )) ? (((global::Array<int>) (global::Array<object>.__hx_cast<int>(((global::Array) (((object) (__fn_float2) )) ))) )) : (((global::Array<int>) (global::Array<object>.__hx_cast<int>(((global::Array) (__fn_dyn2) ))) )) );
			int c = ( (( __fn_dyn1 == global::haxe.lang.Runtime.undefined )) ? (((int) (__fn_float1) )) : (((int) (global::haxe.lang.Runtime.toInt(__fn_dyn1)) )) );
			double delta = global::Math.POSITIVE_INFINITY;
			int index = -1;
			{
				int _g = 0;
				int _g1 = @set.length;
				while (( _g < _g1 )) {
					int i = _g++;
					int d = global::System.Math.Abs(((int) (( c - @set[i] )) ));
					if (( d < delta )) {
						delta = ((double) (d) );
						index = i;
					}
					
				}
				
			}
			
			return ((double) (index) );
		}
	}
	
	
}



#pragma warning disable 109, 114, 219, 429, 168, 162
namespace _Console {
	public sealed class FormatFlag_Impl_ {
		
		static FormatFlag_Impl_() {
			global::_Console.FormatFlag_Impl_.RESET = ((string) ("reset") );
			global::_Console.FormatFlag_Impl_.BOLD = ((string) ("bold") );
			global::_Console.FormatFlag_Impl_.ITALIC = ((string) ("italic") );
			global::_Console.FormatFlag_Impl_.DIM = ((string) ("dim") );
			global::_Console.FormatFlag_Impl_.UNDERLINE = ((string) ("underline") );
			global::_Console.FormatFlag_Impl_.BLINK = ((string) ("blink") );
			global::_Console.FormatFlag_Impl_.INVERT = ((string) ("invert") );
			global::_Console.FormatFlag_Impl_.HIDDEN = ((string) ("hidden") );
			global::_Console.FormatFlag_Impl_.BLACK = ((string) ("black") );
			global::_Console.FormatFlag_Impl_.RED = ((string) ("red") );
			global::_Console.FormatFlag_Impl_.GREEN = ((string) ("green") );
			global::_Console.FormatFlag_Impl_.YELLOW = ((string) ("yellow") );
			global::_Console.FormatFlag_Impl_.BLUE = ((string) ("blue") );
			global::_Console.FormatFlag_Impl_.MAGENTA = ((string) ("magenta") );
			global::_Console.FormatFlag_Impl_.CYAN = ((string) ("cyan") );
			global::_Console.FormatFlag_Impl_.WHITE = ((string) ("white") );
			global::_Console.FormatFlag_Impl_.LIGHT_BLACK = ((string) ("light_black") );
			global::_Console.FormatFlag_Impl_.LIGHT_RED = ((string) ("light_red") );
			global::_Console.FormatFlag_Impl_.LIGHT_GREEN = ((string) ("light_green") );
			global::_Console.FormatFlag_Impl_.LIGHT_YELLOW = ((string) ("light_yellow") );
			global::_Console.FormatFlag_Impl_.LIGHT_BLUE = ((string) ("light_blue") );
			global::_Console.FormatFlag_Impl_.LIGHT_MAGENTA = ((string) ("light_magenta") );
			global::_Console.FormatFlag_Impl_.LIGHT_CYAN = ((string) ("light_cyan") );
			global::_Console.FormatFlag_Impl_.LIGHT_WHITE = ((string) ("light_white") );
			global::_Console.FormatFlag_Impl_.BG_BLACK = ((string) ("bg_black") );
			global::_Console.FormatFlag_Impl_.BG_RED = ((string) ("bg_red") );
			global::_Console.FormatFlag_Impl_.BG_GREEN = ((string) ("bg_green") );
			global::_Console.FormatFlag_Impl_.BG_YELLOW = ((string) ("bg_yellow") );
			global::_Console.FormatFlag_Impl_.BG_BLUE = ((string) ("bg_blue") );
			global::_Console.FormatFlag_Impl_.BG_MAGENTA = ((string) ("bg_magenta") );
			global::_Console.FormatFlag_Impl_.BG_CYAN = ((string) ("bg_cyan") );
			global::_Console.FormatFlag_Impl_.BG_WHITE = ((string) ("bg_white") );
			global::_Console.FormatFlag_Impl_.BG_LIGHT_BLACK = ((string) ("bg_light_black") );
			global::_Console.FormatFlag_Impl_.BG_LIGHT_RED = ((string) ("bg_light_red") );
			global::_Console.FormatFlag_Impl_.BG_LIGHT_GREEN = ((string) ("bg_light_green") );
			global::_Console.FormatFlag_Impl_.BG_LIGHT_YELLOW = ((string) ("bg_light_yellow") );
			global::_Console.FormatFlag_Impl_.BG_LIGHT_BLUE = ((string) ("bg_light_blue") );
			global::_Console.FormatFlag_Impl_.BG_LIGHT_MAGENTA = ((string) ("bg_light_magenta") );
			global::_Console.FormatFlag_Impl_.BG_LIGHT_CYAN = ((string) ("bg_light_cyan") );
			global::_Console.FormatFlag_Impl_.BG_LIGHT_WHITE = ((string) ("bg_light_white") );
		}
		
		
		public static string RESET;
		
		public static string BOLD;
		
		public static string ITALIC;
		
		public static string DIM;
		
		public static string UNDERLINE;
		
		public static string BLINK;
		
		public static string INVERT;
		
		public static string HIDDEN;
		
		public static string BLACK;
		
		public static string RED;
		
		public static string GREEN;
		
		public static string YELLOW;
		
		public static string BLUE;
		
		public static string MAGENTA;
		
		public static string CYAN;
		
		public static string WHITE;
		
		public static string LIGHT_BLACK;
		
		public static string LIGHT_RED;
		
		public static string LIGHT_GREEN;
		
		public static string LIGHT_YELLOW;
		
		public static string LIGHT_BLUE;
		
		public static string LIGHT_MAGENTA;
		
		public static string LIGHT_CYAN;
		
		public static string LIGHT_WHITE;
		
		public static string BG_BLACK;
		
		public static string BG_RED;
		
		public static string BG_GREEN;
		
		public static string BG_YELLOW;
		
		public static string BG_BLUE;
		
		public static string BG_MAGENTA;
		
		public static string BG_CYAN;
		
		public static string BG_WHITE;
		
		public static string BG_LIGHT_BLACK;
		
		public static string BG_LIGHT_RED;
		
		public static string BG_LIGHT_GREEN;
		
		public static string BG_LIGHT_YELLOW;
		
		public static string BG_LIGHT_BLUE;
		
		public static string BG_LIGHT_MAGENTA;
		
		public static string BG_LIGHT_CYAN;
		
		public static string BG_LIGHT_WHITE;
		
		public static string fromString(string str) {
			unchecked {
				str = str.ToLowerInvariant();
				if (( ( global::haxe.lang.StringExt.charAt(str, 0) == "#" ) || ( global::haxe.lang.StringExt.substr(str, 0, new global::haxe.lang.Null<int>(3, true)) == "bg#" ) )) {
					int hIdx = global::haxe.lang.StringExt.indexOf(str, "#", default(global::haxe.lang.Null<int>));
					string hex = global::haxe.lang.StringExt.substr(str, ( hIdx + 1 ), default(global::haxe.lang.Null<int>));
					if (( hex.Length == 3 )) {
						global::Array<string> a = global::haxe.lang.StringExt.split(hex, "");
						hex = new global::Array<string>(new string[]{a[0], a[0], a[1], a[1], a[2], a[2]}).@join("");
					}
					
					if (( new global::EReg(((string) ("[^0-9a-f]") ), ((string) ("i") )).match(hex) || ( hex.Length < 6 ) )) {
						return "";
					}
					
					string normalized = global::haxe.lang.Runtime.concat(global::haxe.lang.Runtime.concat(global::haxe.lang.StringExt.substring(str, 0, new global::haxe.lang.Null<int>(hIdx, true)), "#"), hex);
					return normalized;
				}
				
				switch (str) {
					case "!":
					{
						return ((string) ("invert") );
					}
					
					
					case "/":
					{
						return ((string) ("reset") );
					}
					
					
					case "b":
					{
						return ((string) ("bold") );
					}
					
					
					case "bg_gray":
					{
						return ((string) ("bg_light_black") );
					}
					
					
					case "gray":
					{
						return ((string) ("light_black") );
					}
					
					
					case "i":
					{
						return ((string) ("italic") );
					}
					
					
					case "u":
					{
						return ((string) ("underline") );
					}
					
					
					default:
					{
						return ((string) (str) );
					}
					
				}
				
			}
		}
		
		
	}
}


