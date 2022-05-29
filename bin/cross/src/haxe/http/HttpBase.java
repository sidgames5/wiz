package haxe.http;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class HttpBase extends haxe.lang.HxObject
{
	public HttpBase(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public HttpBase(java.lang.String url)
	{
		//line 71 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		haxe.http.HttpBase.__hx_ctor_haxe_http_HttpBase(this, url);
	}
	
	
	protected static void __hx_ctor_haxe_http_HttpBase(haxe.http.HttpBase __hx_this, java.lang.String url)
	{
		//line 214 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		__hx_this.onError = ( (( haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun.__hx_current != null )) ? (haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun.__hx_current) : (haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun.__hx_current = ((haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun) (new haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun()) )) );
		//line 196 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		__hx_this.onData = ( (( haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_196__Fun.__hx_current != null )) ? (haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_196__Fun.__hx_current) : (haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_196__Fun.__hx_current = ((haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_196__Fun) (new haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_196__Fun()) )) );
		//line 71 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		{
			//line 72 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
			__hx_this.url = url;
			//line 73 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
			__hx_this.headers = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
			//line 74 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
			__hx_this.params = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
			//line 75 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
			__hx_this.emptyOnData = __hx_this.onData;
		}
		
	}
	
	
	public java.lang.String url;
	
	public haxe.root.Array<java.lang.Object> headers;
	
	public haxe.root.Array<java.lang.Object> params;
	
	public haxe.lang.Function emptyOnData;
	
	public haxe.lang.Function onData;
	
	public haxe.lang.Function onError;
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		{
			//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
			boolean __temp_executeDef1 = true;
			//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
			if (( field != null )) 
			{
				//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
				switch (field.hashCode())
				{
					case -1349867671:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("onError")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							this.onError = ((haxe.lang.Function) (value) );
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return value;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case 116079:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("url")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							this.url = haxe.lang.Runtime.toString(value);
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return value;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case -1013421527:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("onData")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							this.onData = ((haxe.lang.Function) (value) );
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return value;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case 795307910:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("headers")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							this.headers = ((haxe.root.Array<java.lang.Object>) (value) );
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return value;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case 1061678550:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("emptyOnData")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							this.emptyOnData = ((haxe.lang.Function) (value) );
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return value;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case -995427962:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("params")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							this.params = ((haxe.root.Array<java.lang.Object>) (value) );
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return value;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
			if (__temp_executeDef1) 
			{
				//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		{
			//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
			boolean __temp_executeDef1 = true;
			//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
			if (( field != null )) 
			{
				//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
				switch (field.hashCode())
				{
					case -1349867671:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("onError")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.onError;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case 116079:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("url")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.url;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case -1013421527:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("onData")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.onData;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case 795307910:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("headers")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.headers;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case 1061678550:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("emptyOnData")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.emptyOnData;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case -995427962:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("params")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.params;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
			if (__temp_executeDef1) 
			{
				//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("onError");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("onData");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("emptyOnData");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("params");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("headers");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("url");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


