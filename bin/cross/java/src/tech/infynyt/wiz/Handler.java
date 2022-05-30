package tech.infynyt.wiz;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Handler extends haxe.lang.HxObject
{
	public Handler(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Handler()
	{
		//line 5 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		tech.infynyt.wiz.Handler.__hx_ctor_tech_infynyt_wiz_Handler(this);
	}
	
	
	protected static void __hx_ctor_tech_infynyt_wiz_Handler(tech.infynyt.wiz.Handler __hx_this)
	{
	}
	
	
	public static boolean install(java.lang.String name)
	{
		//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		{
			//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.String s = ( haxe.root.Console.logPrefix + (( "" + (( "Fetching package: " + name )) )) );
			//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (( s == null )) 
			{
				//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				s = "";
			}
			
			//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			haxe.root.Console.printFormatted(( s + "\n" ), ((int) (0) ));
		}
		
		//line 9 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		java.lang.Object pkg = tech.infynyt.wiz.Handler.fetch(name);
		//line 10 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		if (( pkg == null )) 
		{
			//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			{
				//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				java.lang.String s1 = ( haxe.root.Console.errorPrefix + (( "" + (( "Package not found: " + name )) )) );
				//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				if (( s1 == null )) 
				{
					//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					s1 = "";
				}
				
				//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				haxe.root.Console.printFormatted(( s1 + "\n" ), ((int) (2) ));
			}
			
			//line 12 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
			return false;
		}
		
		//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		{
			//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.String s2 = ( haxe.root.Console.successPrefix + (( "" + (( "Package found: " + name )) )) );
			//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (( s2 == null )) 
			{
				//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				s2 = "";
			}
			
			//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			haxe.root.Console.printFormatted(( s2 + "\n" ), ((int) (0) ));
		}
		
		//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		{
			//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.String s3 = ( haxe.root.Console.logPrefix + (( "" + (( "Downloading package: " + name )) )) );
			//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (( s3 == null )) 
			{
				//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				s3 = "";
			}
			
			//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			haxe.root.Console.printFormatted(( s3 + "\n" ), ((int) (0) ));
		}
		
		//line 16 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		java.lang.String binary = tech.infynyt.wiz.Handler.download(pkg);
		//line 18 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		if (( binary == null )) 
		{
			//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			{
				//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				java.lang.String s4 = ( haxe.root.Console.errorPrefix + (( "" + (( "Package download failed: " + name )) )) );
				//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				if (( s4 == null )) 
				{
					//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					s4 = "";
				}
				
				//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				haxe.root.Console.printFormatted(( s4 + "\n" ), ((int) (2) ));
			}
			
			//line 20 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
			return false;
		}
		
		//line 23 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		return false;
	}
	
	
	public static boolean uninstall(java.lang.String name)
	{
		//line 27 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		return false;
	}
	
	
	public static java.lang.Object fetch(java.lang.String name)
	{
		//line 31 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		if (haxe.lang.Runtime.valEq(name, "test")) 
		{
			//line 32 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
			return new haxe.lang.DynamicObject(new java.lang.String[]{"author", "dependencies", "description", "downloadUrl", "keywords", "license", "main", "name", "repository", "version"}, new java.lang.Object[]{"SidGames5", new haxe.root.Array<java.lang.String>(new java.lang.String[]{}), "", "http://google.com", new haxe.root.Array<java.lang.String>(new java.lang.String[]{}), "MIT", "Test.hx", "test", "", "1.0.0"}, new java.lang.String[]{}, new double[]{});
		}
		
		//line 46 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		return null;
	}
	
	
	public static java.lang.String download(java.lang.Object pkg)
	{
		//line 51 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		sys.Http req = new sys.Http(haxe.lang.Runtime.toString(haxe.lang.Runtime.getField(pkg, "downloadUrl", true)));
		//line 52 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		req.request(null);
		//line 53 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		haxe.root.Sys.sleep(((double) (2) ));
		//line 54 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		req.onError = ( (( tech.infynyt.wiz.Handler_download_54__Fun.__hx_current != null )) ? (tech.infynyt.wiz.Handler_download_54__Fun.__hx_current) : (tech.infynyt.wiz.Handler_download_54__Fun.__hx_current = ((tech.infynyt.wiz.Handler_download_54__Fun) (new tech.infynyt.wiz.Handler_download_54__Fun()) )) );
		//line 58 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		java.lang.String[] output = new java.lang.String[]{null};
		//line 59 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		req.onData = new tech.infynyt.wiz.Handler_download_59__Fun(output);
		//line 64 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		return output[0];
	}
	
	
	public static boolean compile(java.lang.String dir)
	{
		//line 68 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		return false;
	}
	
	
	public static boolean execute(java.lang.String bin)
	{
		//line 72 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		return false;
	}
	
	
	public static boolean clean(java.lang.String dir)
	{
		//line 76 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		return false;
	}
	
	
}


