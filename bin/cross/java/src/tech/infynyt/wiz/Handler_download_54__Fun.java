package tech.infynyt.wiz;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Handler_download_54__Fun extends haxe.lang.Function
{
	public Handler_download_54__Fun()
	{
		//line 54 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		super(1, 0);
	}
	
	
	public static tech.infynyt.wiz.Handler_download_54__Fun __hx_current;
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 54 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		java.lang.String e = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (haxe.lang.Runtime.toString(__fn_float1)) : (haxe.lang.Runtime.toString(__fn_dyn1)) );
		//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		{
			//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.String s = ( haxe.root.Console.errorPrefix + (( "" + (( "Http request failed: " + e )) )) );
			//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (( s == null )) 
			{
				//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				s = "";
			}
			
			//line 45 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			haxe.root.Console.printFormatted(( s + "\n" ), ((int) (2) ));
		}
		
		//line 54 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		return null;
	}
	
	
}


