package tech.infynyt.wiz;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class ProcessHandler_validatePackage_30__Fun extends haxe.lang.Function
{
	public ProcessHandler_validatePackage_30__Fun(boolean[] output)
	{
		//line 31 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		super(1, 0);
		//line 31 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		this.output = output;
	}
	
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 30 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		java.lang.String error = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (haxe.lang.Runtime.toString(__fn_float1)) : (haxe.lang.Runtime.toString(__fn_dyn1)) );
		//line 31 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		this.output[0] = true;
		//line 31 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		return null;
	}
	
	
	public boolean[] output;
	
}


