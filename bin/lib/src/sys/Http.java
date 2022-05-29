package sys;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Http extends haxe.http.HttpBase
{
	public Http(haxe.lang.EmptyObject empty)
	{
		//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public Http(java.lang.String url)
	{
		//line 53 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 53 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
		sys.Http.__hx_ctor_sys_Http(this, url);
	}
	
	
	protected static void __hx_ctor_sys_Http(sys.Http __hx_this, java.lang.String url)
	{
		//line 49 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
		__hx_this.cnxTimeout = ((double) (10) );
		//line 53 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
		haxe.http.HttpBase.__hx_ctor_haxe_http_HttpBase(__hx_this, url);
	}
	
	
	public double cnxTimeout;
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
		{
			//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
			boolean __temp_executeDef1 = true;
			//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
			if (( field != null )) 
			{
				//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
				switch (field.hashCode())
				{
					case -196911308:
					{
						//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
						if (field.equals("cnxTimeout")) 
						{
							//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
							__temp_executeDef1 = false;
							//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
							this.cnxTimeout = ((double) (value) );
							//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
							return value;
						}
						
						//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
			if (__temp_executeDef1) 
			{
				//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
		{
			//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
			boolean __temp_executeDef1 = true;
			//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
			if (( field != null )) 
			{
				//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
				switch (field.hashCode())
				{
					case -196911308:
					{
						//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
						if (field.equals("cnxTimeout")) 
						{
							//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
							__temp_executeDef1 = false;
							//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
							this.cnxTimeout = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
							return value;
						}
						
						//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
			if (__temp_executeDef1) 
			{
				//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
		{
			//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
			boolean __temp_executeDef1 = true;
			//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
			if (( field != null )) 
			{
				//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
				switch (field.hashCode())
				{
					case -196911308:
					{
						//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
						if (field.equals("cnxTimeout")) 
						{
							//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
							__temp_executeDef1 = false;
							//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
							return this.cnxTimeout;
						}
						
						//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
			if (__temp_executeDef1) 
			{
				//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
		{
			//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
			boolean __temp_executeDef1 = true;
			//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
			if (( field != null )) 
			{
				//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
				switch (field.hashCode())
				{
					case -196911308:
					{
						//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
						if (field.equals("cnxTimeout")) 
						{
							//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
							__temp_executeDef1 = false;
							//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
							return this.cnxTimeout;
						}
						
						//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
			if (__temp_executeDef1) 
			{
				//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
		baseArr.push("cnxTimeout");
		//line 31 "C:\\HaxeToolkit\\haxe\\std\\sys\\Http.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


