package tech.infynyt.wiz;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class ProcessHandler extends haxe.lang.HxObject
{
	static
	{
		//line 10 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		tech.infynyt.wiz.ProcessHandler.PORT_RECEIVE = 16760;
		//line 11 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		tech.infynyt.wiz.ProcessHandler.PORT_DOWNLOAD = 21413;
	}
	
	public ProcessHandler(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public ProcessHandler()
	{
		//line 9 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		tech.infynyt.wiz.ProcessHandler.__hx_ctor_tech_infynyt_wiz_ProcessHandler(this);
	}
	
	
	protected static void __hx_ctor_tech_infynyt_wiz_ProcessHandler(tech.infynyt.wiz.ProcessHandler __hx_this)
	{
	}
	
	
	public static int PORT_RECEIVE;
	
	public static int PORT_DOWNLOAD;
	
	public static java.lang.Object fetchPackage(java.lang.String pkg)
	{
		//line 14 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		sys.Http request = new sys.Http(haxe.lang.Runtime.toString(( ( ( "http://96.235.29.196:" + tech.infynyt.wiz.ProcessHandler.PORT_RECEIVE ) + "/api/v1/packages/" ) + pkg )));
		//line 15 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		java.lang.Object[] output = new java.lang.Object[]{null};
		//line 16 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		request.onError = ( (( tech.infynyt.wiz.ProcessHandler_fetchPackage_16__Fun.__hx_current != null )) ? (tech.infynyt.wiz.ProcessHandler_fetchPackage_16__Fun.__hx_current) : (tech.infynyt.wiz.ProcessHandler_fetchPackage_16__Fun.__hx_current = ((tech.infynyt.wiz.ProcessHandler_fetchPackage_16__Fun) (new tech.infynyt.wiz.ProcessHandler_fetchPackage_16__Fun()) )) );
		//line 19 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		request.onData = new tech.infynyt.wiz.ProcessHandler_fetchPackage_19__Fun(output);
		//line 24 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		return output[0];
	}
	
	
	public static boolean validatePackage(java.lang.String pkg)
	{
		//line 28 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		sys.Http request = new sys.Http(haxe.lang.Runtime.toString(( ( ( "http://96.235.29.196:" + tech.infynyt.wiz.ProcessHandler.PORT_RECEIVE ) + "/api/v1/packages/" ) + pkg )));
		//line 29 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		boolean[] output = new boolean[]{true};
		//line 30 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		request.onError = new tech.infynyt.wiz.ProcessHandler_validatePackage_30__Fun(output);
		//line 34 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		request.onData = new tech.infynyt.wiz.ProcessHandler_validatePackage_34__Fun(output);
		//line 38 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		return output[0];
	}
	
	
	public static java.lang.String downloadPackageInstaller(java.lang.String url)
	{
		//line 42 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		return null;
	}
	
	
	public static boolean runPackageInstaller(java.lang.String path)
	{
		//line 46 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		return false;
	}
	
	
}


