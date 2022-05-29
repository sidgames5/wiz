package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Console_rgbToAscii256_403__Fun extends haxe.lang.Function
{
	public Console_rgbToAscii256_403__Fun()
	{
		//line 403 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		super(2, 1);
	}
	
	
	public static haxe.root.Console_rgbToAscii256_403__Fun __hx_current;
	
	@Override public double __hx_invoke2_f(double __fn_float1, java.lang.Object __fn_dyn1, double __fn_float2, java.lang.Object __fn_dyn2)
	{
		//line 403 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Array<java.lang.Object> set = ( (( __fn_dyn2 == haxe.lang.Runtime.undefined )) ? (((haxe.root.Array<java.lang.Object>) (((java.lang.Object) (__fn_float2) )) )) : (((haxe.root.Array<java.lang.Object>) (__fn_dyn2) )) );
		//line 403 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		int c = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((int) (__fn_float1) )) : (((int) (haxe.lang.Runtime.toInt(__fn_dyn1)) )) );
		//line 404 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		double delta = java.lang.Double.POSITIVE_INFINITY;
		//line 405 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		int index = -1;
		//line 406 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		{
			//line 406 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			int _g = 0;
			//line 406 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			int _g1 = set.length;
			//line 406 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			while (( _g < _g1 ))
			{
				//line 406 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				int i = _g++;
				//line 407 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				double d = java.lang.Math.abs(((double) (( c - ((int) (haxe.lang.Runtime.toInt(set.__get(i))) ) )) ));
				//line 408 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				if (( d < delta )) 
				{
					//line 409 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					delta = d;
					//line 410 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					index = i;
				}
				
			}
			
		}
		
		//line 413 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		return ((double) (index) );
	}
	
	
}


