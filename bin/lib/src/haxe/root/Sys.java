package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Sys extends haxe.lang.HxObject
{
	public Sys(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Sys()
	{
		//line 28 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		haxe.root.Sys.__hx_ctor__Sys(this);
	}
	
	
	protected static void __hx_ctor__Sys(haxe.root.Sys __hx_this)
	{
	}
	
	
	public static java.lang.String[] _args;
	
	public static haxe.ds.StringMap<java.lang.String> _env;
	
	public static java.lang.String _sysName;
	
	public static haxe.root.Array<java.lang.String> args()
	{
		//line 42 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		if (( haxe.root.Sys._args == null )) 
		{
			//line 43 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
			return new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
		}
		
		//line 44 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		return haxe.java.Lib.array_String(haxe.root.Sys._args);
	}
	
	
	public static java.lang.String getEnv(java.lang.String s)
	{
		//line 48 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		return java.lang.System.getenv(haxe.lang.Runtime.toString(s));
	}
	
	
	public static haxe.ds.StringMap<java.lang.String> environment()
	{
		//line 57 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		if (( haxe.root.Sys._env != null )) 
		{
			//line 58 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
			return ((haxe.ds.StringMap<java.lang.String>) (haxe.root.Sys._env) );
		}
		
		//line 59 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		haxe.ds.StringMap<java.lang.String> _env = haxe.root.Sys._env = new haxe.ds.StringMap<java.lang.String>();
		//line 60 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		{
			//line 60 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
			java.util.Iterator<java.util.Map.Entry<java.lang.String, java.lang.String>> mv = java.lang.System.getenv().entrySet().iterator();
			//line 60 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
			while (mv.hasNext())
			{
				//line 60 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
				java.util.Map.Entry<java.lang.String, java.lang.String> mv1 = mv.next();
				//line 61 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
				_env.set(mv1.getKey(), mv1.getValue());
			}
			
		}
		
		//line 64 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		return ((haxe.ds.StringMap<java.lang.String>) (_env) );
	}
	
	
	public static java.lang.String systemName()
	{
		//line 88 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		if (( haxe.root.Sys._sysName != null )) 
		{
			//line 89 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
			return haxe.root.Sys._sysName;
		}
		
		//line 90 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		java.lang.String sname = java.lang.System.getProperty(haxe.lang.Runtime.toString("os.name")).toLowerCase();
		//line 91 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		if (( haxe.lang.StringExt.indexOf(sname, "win", null) >= 0 )) 
		{
			//line 92 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
			return haxe.root.Sys._sysName = "Windows";
		}
		
		//line 93 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		if (( haxe.lang.StringExt.indexOf(sname, "mac", null) >= 0 )) 
		{
			//line 94 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
			return haxe.root.Sys._sysName = "Mac";
		}
		
		//line 95 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		if (( haxe.lang.StringExt.indexOf(sname, "nux", null) >= 0 )) 
		{
			//line 96 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
			return haxe.root.Sys._sysName = "Linux";
		}
		
		//line 97 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		if (( haxe.lang.StringExt.indexOf(sname, "nix", null) >= 0 )) 
		{
			//line 98 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
			return haxe.root.Sys._sysName = "BSD";
		}
		
		//line 100 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		return haxe.root.Sys._sysName = java.lang.System.getProperty(haxe.lang.Runtime.toString("os.name"));
	}
	
	
	public static haxe.io.Output stdout()
	{
		//line 158 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		return new haxe.java.io.NativeOutput(((java.io.OutputStream) (java.lang.System.out) ));
	}
	
	
	public static haxe.io.Output stderr()
	{
		//line 162 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Sys.hx"
		return new haxe.java.io.NativeOutput(((java.io.OutputStream) (java.lang.System.err) ));
	}
	
	
}


