package tech.infynyt.wiz;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class ProcessHandler_fetchPackage_19__Fun extends haxe.lang.Function
{
	public ProcessHandler_fetchPackage_19__Fun(java.lang.Object[] output)
	{
		//line 19 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		super(1, 0);
		//line 19 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		this.output = output;
	}
	
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 19 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		java.lang.String data = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (haxe.lang.Runtime.toString(__fn_float1)) : (haxe.lang.Runtime.toString(__fn_dyn1)) );
		//line 21 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		java.lang.Object json = new haxe.format.JsonParser(haxe.lang.Runtime.toString(data)).doParse();
		//line 22 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		this.output[0] = json;
		//line 19 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\ProcessHandler.hx"
		return null;
	}
	
	
	public java.lang.Object[] output;
	
}


