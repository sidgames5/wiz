package haxe.lang;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class VarArgsFunction extends haxe.lang.VarArgsBase
{
	public VarArgsFunction(haxe.lang.Function fun)
	{
		//line 48 "C:\\HaxeToolkit\\haxe\\std\\java\\internal\\Function.hx"
		super(-1, -1);
		//line 49 "C:\\HaxeToolkit\\haxe\\std\\java\\internal\\Function.hx"
		this.fun = fun;
	}
	
	
	public haxe.lang.Function fun;
	
	@Override public java.lang.Object __hx_invokeDynamic(java.lang.Object[] dynArgs)
	{
		//line 53 "C:\\HaxeToolkit\\haxe\\std\\java\\internal\\Function.hx"
		return ((java.lang.Object) (this.fun.__hx_invoke1_o(0.0, ( (( dynArgs == null )) ? (new haxe.root.Array(new java.lang.Object[]{})) : (((haxe.root.Array) (haxe.root.Array.ofNative(((java.lang.Object[]) (dynArgs) ))) )) ))) );
	}
	
	
}


