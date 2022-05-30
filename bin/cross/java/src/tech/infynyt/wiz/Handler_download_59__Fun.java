package tech.infynyt.wiz;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Handler_download_59__Fun extends haxe.lang.Function
{
	public Handler_download_59__Fun(java.lang.String[] output)
	{
		//line 59 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		super(1, 0);
		//line 59 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		this.output = output;
	}
	
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 59 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		java.lang.String data = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (haxe.lang.Runtime.toString(__fn_float1)) : (haxe.lang.Runtime.toString(__fn_dyn1)) );
		//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		{
			//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.String s = ( haxe.root.Console.successPrefix + (( "" + (( "Http request success: " + data )) )) );
			//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (( s == null )) 
			{
				//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				s = "";
			}
			
			//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			haxe.root.Console.printFormatted(( s + "\n" ), ((int) (0) ));
		}
		
		//line 61 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		this.output[0] = data;
		//line 62 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Handler.hx"
		return data;
	}
	
	
	public java.lang.String[] output;
	
}


