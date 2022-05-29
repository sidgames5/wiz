package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Console extends haxe.lang.HxObject
{
	static
	{
		//line 16 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.formatMode = haxe.root.Console.determineConsoleFormatMode();
		//line 18 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.logPrefix = "<b,gray>><//> ";
		//line 19 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.warnPrefix = "<b,yellow>><//> ";
		//line 20 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.errorPrefix = "<b,red>></b> ";
		//line 21 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.successPrefix = "<b,light_green>><//> ";
		//line 22 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.debugPrefix = "<b,magenta>><//> ";
		//line 27 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.printIntercept = null;
		//line 29 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.argSeparator = " ";
		//line 30 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.unicodeCompatibilityMode = ( (haxe.lang.Runtime.valEq(haxe.root.Sys.systemName(), "Windows")) ? (((int) (1) )) : (((int) (0) )) );
		//line 31 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.unicodeCompatibilityEnabled = false;
		//line 112 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.formatTagPattern = new haxe.root.EReg(haxe.lang.Runtime.toString("(\\\\)?<(/)?([^><{}\\s]*|{[^}<>]*})>"), haxe.lang.Runtime.toString("g"));
	}
	
	public Console(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Console()
	{
		//line 14 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.__hx_ctor__Console(this);
	}
	
	
	protected static void __hx_ctor__Console(haxe.root.Console __hx_this)
	{
	}
	
	
	public static int formatMode;
	
	public static java.lang.String logPrefix;
	
	public static java.lang.String warnPrefix;
	
	public static java.lang.String errorPrefix;
	
	public static java.lang.String successPrefix;
	
	public static java.lang.String debugPrefix;
	
	public static haxe.lang.Function printIntercept;
	
	public static java.lang.String argSeparator;
	
	public static int unicodeCompatibilityMode;
	
	public static boolean unicodeCompatibilityEnabled;
	
	public static void printlnFormatted(java.lang.String s, java.lang.Object outputStream)
	{
		//line 94 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		int outputStream1 = ( (haxe.lang.Runtime.eq(outputStream, null)) ? (0) : (((int) (haxe.lang.Runtime.toInt(outputStream)) )) );
		//line 94 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (( s == null )) 
		{
			//line 94 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			s = "";
		}
		
		//line 94 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.printFormatted(( s + "\n" ), outputStream1);
	}
	
	
	public static void println(java.lang.String s, java.lang.Object outputStream)
	{
		//line 98 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		int outputStream1 = ( (haxe.lang.Runtime.eq(outputStream, null)) ? (0) : (((int) (haxe.lang.Runtime.toInt(outputStream)) )) );
		//line 98 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (( s == null )) 
		{
			//line 98 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			s = "";
		}
		
		//line 98 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.print(( s + "\n" ), outputStream1);
	}
	
	
	public static haxe.root.EReg formatTagPattern;
	
	public static java.lang.Object format(java.lang.String s, int formatMode)
	{
		//line 114 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		s += "<//>";
		//line 116 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Array<java.lang.String>[] activeFormatFlagStack = new haxe.root.Array[]{new haxe.root.Array<java.lang.String>()};
		//line 117 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Array<java.lang.Object>[] groupedProceedingTags = new haxe.root.Array[]{new haxe.root.Array<java.lang.Object>()};
		//line 140 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		java.lang.String result = haxe.root.Console.formatTagPattern.map(s, new haxe.root.Console_format_140__Fun(groupedProceedingTags, formatMode, activeFormatFlagStack));
		//line 215 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		return new haxe.lang.DynamicObject(new java.lang.String[]{"formatted"}, new java.lang.Object[]{result}, new java.lang.String[]{}, new double[]{});
	}
	
	
	public static java.lang.String stripFormatting(java.lang.String s)
	{
		//line 224 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		return haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(haxe.root.Console.format(s, ((int) (2) )), "formatted", true));
	}
	
	
	public static void printFormatted(java.lang.String s, java.lang.Object outputStream)
	{
		//line 242 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		int outputStream1 = ( (haxe.lang.Runtime.eq(outputStream, null)) ? (0) : (((int) (haxe.lang.Runtime.toInt(outputStream)) )) );
		//line 242 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (( s == null )) 
		{
			//line 242 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			s = "";
		}
		
		//line 243 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		java.lang.Object result = haxe.root.Console.format(s, haxe.root.Console.formatMode);
		//line 271 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Console.print(haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(result, "formatted", true)), outputStream1);
	}
	
	
	public static void print(java.lang.String s, java.lang.Object outputStream)
	{
		//line 277 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		int outputStream1 = ( (haxe.lang.Runtime.eq(outputStream, null)) ? (0) : (((int) (haxe.lang.Runtime.toInt(outputStream)) )) );
		//line 277 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (( s == null )) 
		{
			//line 277 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			s = "";
		}
		
		//line 280 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (( haxe.root.Console.printIntercept != null )) 
		{
			//line 281 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			boolean allowDefaultPrint = haxe.lang.Runtime.toBool(((java.lang.Boolean) (((haxe.lang.Function) (haxe.root.Console.printIntercept) ).__hx_invoke2_o(0.0, s, ((double) (outputStream1) ), haxe.lang.Runtime.undefined)) ));
			//line 282 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if ( ! (allowDefaultPrint) ) 
			{
				//line 283 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				return ;
			}
			
		}
		
		//line 292 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (( ( haxe.root.Console.unicodeCompatibilityMode == ((int) (1) ) ) &&  ! (haxe.root.Console.unicodeCompatibilityEnabled)  )) 
		{
			//line 293 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			haxe.root.Console.exec("chcp 65001", null);
			//line 294 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			haxe.root.Console.unicodeCompatibilityEnabled = true;
		}
		
		//line 301 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		switch (outputStream1)
		{
			case 1:
			case 2:
			{
				//line 305 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				haxe.root.Sys.stderr().writeString(s, null);
				//line 305 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				break;
			}
			
			
			case 0:
			case 3:
			{
				//line 303 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				haxe.root.Sys.stdout().writeString(s, null);
				//line 303 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				break;
			}
			
			
		}
		
	}
	
	
	public static java.lang.String getAsciiFormat(java.lang.String flag)
	{
		//line 332 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (haxe.lang.Runtime.valEq(haxe.lang.StringExt.charAt(haxe.lang.Runtime.toString(flag), 0), "#")) 
		{
			//line 333 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.String hex = haxe.lang.StringExt.substr(haxe.lang.Runtime.toString(flag), 1, null);
			//line 334 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.Object r = haxe.root.Std.parseInt(( "0x" + haxe.lang.StringExt.substr(hex, 0, 2) ));
			//line 334 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.Object g = haxe.root.Std.parseInt(( "0x" + haxe.lang.StringExt.substr(hex, 2, 2) ));
			//line 334 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.Object b = haxe.root.Std.parseInt(( "0x" + haxe.lang.StringExt.substr(hex, 4, 2) ));
			//line 335 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			return ( ( haxe.lang.Runtime.toString("\u001b[38;5;") + haxe.lang.Runtime.toString(haxe.root.Console.rgbToAscii256(((int) (haxe.lang.Runtime.toInt(r)) ), ((int) (haxe.lang.Runtime.toInt(g)) ), ((int) (haxe.lang.Runtime.toInt(b)) ))) ) + "m" );
		}
		
		//line 339 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (haxe.lang.Runtime.valEq(haxe.lang.StringExt.substr(haxe.lang.Runtime.toString(flag), 0, 3), "bg#")) 
		{
			//line 340 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.String hex1 = haxe.lang.StringExt.substr(haxe.lang.Runtime.toString(flag), 3, null);
			//line 341 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.Object r1 = haxe.root.Std.parseInt(( "0x" + haxe.lang.StringExt.substr(hex1, 0, 2) ));
			//line 341 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.Object g1 = haxe.root.Std.parseInt(( "0x" + haxe.lang.StringExt.substr(hex1, 2, 2) ));
			//line 341 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.Object b1 = haxe.root.Std.parseInt(( "0x" + haxe.lang.StringExt.substr(hex1, 4, 2) ));
			//line 342 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			return ( ( haxe.lang.Runtime.toString("\u001b[48;5;") + haxe.lang.Runtime.toString(haxe.root.Console.rgbToAscii256(((int) (haxe.lang.Runtime.toInt(r1)) ), ((int) (haxe.lang.Runtime.toInt(g1)) ), ((int) (haxe.lang.Runtime.toInt(b1)) ))) ) + "m" );
		}
		
		//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		{
			//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.String __temp_svar1 = (flag);
			//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			boolean __temp_executeDef2 = true;
			//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (( __temp_svar1 != null )) 
			{
				//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				switch (__temp_svar1.hashCode())
				{
					case -1266092155:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_black")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 373 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (0) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -734239628:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("yellow")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 359 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (3) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -179388396:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_blue")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 377 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (4) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 113101865:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("white")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 363 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (7) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -179346723:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_cyan")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 379 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (6) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1026963764:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("underline")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 351 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "\u001b[4m";
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1261291895:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_green")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 375 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (2) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 108404047:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("reset")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 346 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "\u001b[m";
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -969954660:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_black")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 381 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (8) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 112785:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("red")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 357 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (1) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1693856227:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_blue")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 385 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (12) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 828922025:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("magenta")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 361 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (5) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1693814554:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_cyan")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 387 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (14) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 1573742525:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_yellow")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 367 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (11) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -965154400:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_green")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 383 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (10) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 2127215552:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_white")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 371 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (15) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 744767494:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_magenta")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 386 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (13) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 686006760:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_red")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 365 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (9) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1440098706:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_red")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 382 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (9) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -638075264:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_magenta")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 369 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (13) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -950671674:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_white")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 388 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (15) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 2112732826:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_green")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 366 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (10) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 648519031:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_yellow")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 384 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (11) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -209054548:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_cyan")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 370 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (14) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -375523665:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_magenta")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 378 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (5) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -209096221:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_blue")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 368 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (12) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1391244905:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_red")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 374 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (1) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 2107932566:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_black")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 364 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (8) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1246809169:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_white")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 380 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (7) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1178781136:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("italic")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 350 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "\u001b[3m";
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 58191278:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_yellow")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 376 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[48;5;" + ((int) (3) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1183703082:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("invert")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 353 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "\u001b[7m";
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 93818879:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("black")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 356 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (0) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1217487446:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("hidden")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 354 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "\u001b[8m";
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 93826908:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("blink")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 352 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "\u001b[5m";
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 98619139:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("green")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 358 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (2) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 3027034:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("blue")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 360 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (4) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 99464:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("dim")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 349 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "\u001b[2m";
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 3029637:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bold")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 348 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "\u001b[1m";
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 3068707:
					{
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("cyan")) 
						{
							//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 362 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return ( ( "\u001b[38;5;" + ((int) (6) ) ) + "m" );
						}
						
						//line 345 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 390 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (__temp_executeDef2) 
			{
				//line 390 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				return "";
			}
			else
			{
				//line 390 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				throw null;
			}
			
		}
		
	}
	
	
	public static java.lang.Object rgbToAscii256(int r, int g, int b)
	{
		//line 403 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.lang.Function nearIdx = ( (( haxe.root.Console_rgbToAscii256_403__Fun.__hx_current != null )) ? (haxe.root.Console_rgbToAscii256_403__Fun.__hx_current) : (haxe.root.Console_rgbToAscii256_403__Fun.__hx_current = ((haxe.root.Console_rgbToAscii256_403__Fun) (new haxe.root.Console_rgbToAscii256_403__Fun()) )) );
		//line 423 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Array<java.lang.Object> colorSteps = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{0, 95, 135, 175, 215, 255});
		//line 424 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		int ir = ((int) (nearIdx.__hx_invoke2_f(((double) (r) ), haxe.lang.Runtime.undefined, 0.0, colorSteps)) );
		//line 424 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		int ig = ((int) (nearIdx.__hx_invoke2_f(((double) (g) ), haxe.lang.Runtime.undefined, 0.0, colorSteps)) );
		//line 424 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		int ib = ((int) (nearIdx.__hx_invoke2_f(((double) (b) ), haxe.lang.Runtime.undefined, 0.0, colorSteps)) );
		//line 425 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		double ier = java.lang.Math.abs(((double) (( r - ((int) (haxe.lang.Runtime.toInt(colorSteps.__get(ir))) ) )) ));
		//line 425 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		double ieg = java.lang.Math.abs(((double) (( g - ((int) (haxe.lang.Runtime.toInt(colorSteps.__get(ig))) ) )) ));
		//line 425 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		double ieb = java.lang.Math.abs(((double) (( b - ((int) (haxe.lang.Runtime.toInt(colorSteps.__get(ib))) ) )) ));
		//line 426 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		double averageColorError = ( ( ier + ieg ) + ieb );
		//line 431 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		int jr = ((int) (java.lang.Math.round(( ((double) ((( r - 8 ))) ) / 10 ))) );
		//line 431 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		int jg = ((int) (java.lang.Math.round(( ((double) ((( g - 8 ))) ) / 10 ))) );
		//line 431 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		int jb = ((int) (java.lang.Math.round(( ((double) ((( b - 8 ))) ) / 10 ))) );
		//line 432 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		double jer = java.lang.Math.abs(( r - java.lang.Math.max(java.lang.Math.min(((double) (( ( jr * 10 ) + 8 )) ), ((double) (238) )), ((double) (8) )) ));
		//line 433 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		double jeg = java.lang.Math.abs(( g - java.lang.Math.max(java.lang.Math.min(((double) (( ( jg * 10 ) + 8 )) ), ((double) (238) )), ((double) (8) )) ));
		//line 434 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		double jeb = java.lang.Math.abs(( b - java.lang.Math.max(java.lang.Math.min(((double) (( ( jb * 10 ) + 8 )) ), ((double) (238) )), ((double) (8) )) ));
		//line 435 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		double averageGrayError = ( ( jer + jeg ) + jeb );
		//line 438 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (( ( ( averageGrayError < averageColorError ) && ( r == g ) ) && ( g == b ) )) 
		{
			//line 439 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			int grayIndex = ( jr + 232 );
			//line 440 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			return grayIndex;
		}
		else
		{
			//line 442 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			int colorIndex = ( ( ( 16 + ( ir * 36 ) ) + ( ig * 6 ) ) + ib );
			//line 443 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			return colorIndex;
		}
		
	}
	
	
	public static java.lang.String getBrowserFormat(java.lang.String flag)
	{
		//line 449 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (haxe.lang.Runtime.valEq(haxe.lang.StringExt.charAt(haxe.lang.Runtime.toString(flag), 0), "#")) 
		{
			//line 450 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			return ( "color: " + flag );
		}
		
		//line 454 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (haxe.lang.Runtime.valEq(haxe.lang.StringExt.substr(haxe.lang.Runtime.toString(flag), 0, 3), "bg#")) 
		{
			//line 455 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			return ( "background-color: " + haxe.lang.StringExt.substr(haxe.lang.Runtime.toString(flag), 2, null) );
		}
		
		//line 459 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (haxe.lang.Runtime.valEq(haxe.lang.StringExt.charAt(haxe.lang.Runtime.toString(flag), 0), "{")) 
		{
			//line 461 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			return haxe.lang.StringExt.substr(haxe.lang.Runtime.toString(flag), 1, ( haxe.lang.Runtime.toString(flag).length() - 2 ));
		}
		
		//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		{
			//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.String __temp_svar1 = (flag);
			//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			boolean __temp_executeDef2 = true;
			//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (( __temp_svar1 != null )) 
			{
				//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				switch (__temp_svar1.hashCode())
				{
					case -1266092155:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_black")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 493 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: black";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -734239628:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("yellow")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 478 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: #f5ba00";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -179388396:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_blue")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 497 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: blue";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 113101865:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("white")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 482 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: whiteSmoke";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -179346723:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_cyan")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 499 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: cyan";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1026963764:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("underline")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 470 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "text-decoration: underline";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1261291895:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_green")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 495 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: green";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 108404047:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("reset")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 465 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -969954660:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_black")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 501 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: gray";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 112785:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("red")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 476 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: red";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1693856227:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_blue")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 505 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: lightBlue";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 828922025:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("magenta")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 480 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: magenta";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1693814554:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_cyan")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 507 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: lightCyan";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 1573742525:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_yellow")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 487 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: #ffed88";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -965154400:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_green")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 503 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: lightGreen";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 2127215552:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_white")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 491 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: white";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 744767494:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_magenta")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 506 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: lightPink";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 686006760:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_red")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 485 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: salmon";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1440098706:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_red")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 502 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: salmon";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -638075264:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_magenta")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 489 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: lightPink";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -950671674:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_white")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 508 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: white";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 2112732826:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_green")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 486 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: lightGreen";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 648519031:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_light_yellow")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 504 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: lightYellow";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -209054548:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_cyan")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 490 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: lightCyan";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -375523665:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_magenta")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 498 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: magenta";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -209096221:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_blue")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 488 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: lightBlue";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1391244905:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_red")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 494 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: red";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 2107932566:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("light_black")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 484 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: gray";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1246809169:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_white")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 500 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: whiteSmoke";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1178781136:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("italic")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 468 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "font-style: italic";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 58191278:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_yellow")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 496 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "background-color: gold";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1183703082:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("invert")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 472 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "-webkit-filter: invert(100%); filter: invert(100%)";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 93818879:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("black")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 475 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: black";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -1217487446:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("hidden")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 473 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "visibility: hidden; color: white";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 93826908:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("blink")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 471 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "text-decoration: blink";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 98619139:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("green")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 477 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: green";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 3027034:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("blue")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 479 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: blue";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 99464:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("dim")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 469 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: gray";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 3029637:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bold")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 467 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "font-weight: bold";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 3068707:
					{
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("cyan")) 
						{
							//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 481 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return "color: cyan";
						}
						
						//line 464 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 510 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (__temp_executeDef2) 
			{
				//line 510 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				return "";
			}
			else
			{
				//line 510 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				throw null;
			}
			
		}
		
	}
	
	
	public static int determineConsoleFormatMode()
	{
		//line 548 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		java.lang.Object tputColors = haxe.root.Console.exec("tput colors", null);
		//line 549 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (haxe.lang.Runtime.eq(haxe.lang.Runtime.getField(tputColors, "exit", true), 0)) 
		{
			//line 550 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.Object tputResult = haxe.root.Std.parseInt(haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(tputColors, "stdout", true)));
			//line 551 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (( ( ! (haxe.lang.Runtime.eq(tputResult, null)) ) && ( ((int) (haxe.lang.Runtime.toInt(tputResult)) ) > 2 ) )) 
			{
				//line 552 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				return ((int) (0) );
			}
			
		}
		
		//line 589 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		java.lang.String termEnv = haxe.lang.Runtime.toString(((haxe.ds.StringMap<java.lang.String>) (((haxe.IMap<java.lang.String, java.lang.String>) (haxe.root.Sys.environment()) )) ).get("TERM"));
		//line 591 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (( ( termEnv != null ) && new haxe.root.EReg(haxe.lang.Runtime.toString("cygwin|xterm|vt100"), haxe.lang.Runtime.toString("")).match(termEnv) )) 
		{
			//line 592 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			return ((int) (0) );
		}
		
		//line 598 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		return ((int) (2) );
	}
	
	
	public static java.lang.Object exec(java.lang.String cmd, haxe.root.Array<java.lang.String> args)
	{
		//line 628 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		try 
		{
			//line 629 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			sys.io.Process p = new sys.io.Process(haxe.lang.Runtime.toString(cmd), ((haxe.root.Array<java.lang.String>) (args) ), ((java.lang.Object) (null) ));
			//line 630 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.Object exit = p.exitCode(null);
			//line 631 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.String stdout = p.stdout.readAll(null).toString();
			//line 632 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			p.close();
			//line 633 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			return new haxe.lang.DynamicObject(new java.lang.String[]{"exit", "stdout"}, new java.lang.Object[]{exit, stdout}, new java.lang.String[]{}, new double[]{});
		}
		catch (java.lang.Throwable _g)
		{
			//line 638 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			return new haxe.lang.DynamicObject(new java.lang.String[]{"exit", "stdout"}, new java.lang.Object[]{((java.lang.Object) (1) ), ""}, new java.lang.String[]{}, new double[]{});
		}
		
		
	}
	
	
}


