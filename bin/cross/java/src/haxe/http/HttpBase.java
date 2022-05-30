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
		//line 223 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		__hx_this.onStatus = ( (( haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_223__Fun.__hx_current != null )) ? (haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_223__Fun.__hx_current) : (haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_223__Fun.__hx_current = ((haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_223__Fun) (new haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_223__Fun()) )) );
		//line 214 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		__hx_this.onError = ( (( haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun.__hx_current != null )) ? (haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun.__hx_current) : (haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun.__hx_current = ((haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun) (new haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_214__Fun()) )) );
		//line 205 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		__hx_this.onBytes = ( (( haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_205__Fun.__hx_current != null )) ? (haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_205__Fun.__hx_current) : (haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_205__Fun.__hx_current = ((haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_205__Fun) (new haxe.http.HttpBase___hx_ctor_haxe_http_HttpBase_205__Fun()) )) );
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
	
	
	
	public haxe.io.Bytes responseBytes;
	
	public java.lang.String responseAsString;
	
	public java.lang.String postData;
	
	public haxe.io.Bytes postBytes;
	
	public haxe.root.Array<java.lang.Object> headers;
	
	public haxe.root.Array<java.lang.Object> params;
	
	public haxe.lang.Function emptyOnData;
	
	public haxe.lang.Function onData;
	
	public haxe.lang.Function onBytes;
	
	public haxe.lang.Function onError;
	
	public haxe.lang.Function onStatus;
	
	public boolean hasOnData()
	{
		//line 229 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		return  ! (haxe.root.Reflect.compareMethods(this.onData, this.emptyOnData)) ;
	}
	
	
	public void success(haxe.io.Bytes data)
	{
		//line 233 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		this.responseBytes = data;
		//line 234 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		this.responseAsString = null;
		//line 235 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		if (this.hasOnData()) 
		{
			//line 236 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
			this.onData.__hx_invoke1_o(0.0, this.get_responseData());
		}
		
		//line 238 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		this.onBytes.__hx_invoke1_o(0.0, this.responseBytes);
	}
	
	
	public java.lang.String get_responseData()
	{
		//line 242 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		if (( ( this.responseAsString == null ) && ( this.responseBytes != null ) )) 
		{
			//line 246 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
			this.responseAsString = this.responseBytes.getString(0, this.responseBytes.length, haxe.io.Encoding.UTF8);
		}
		
		//line 249 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		return this.responseAsString;
	}
	
	
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
					case 1505928881:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("onStatus")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							this.onStatus = ((haxe.lang.Function) (value) );
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
					
					
					case 1650146474:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("responseBytes")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							this.responseBytes = ((haxe.io.Bytes) (value) );
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return value;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case -1352428084:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("onBytes")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							this.onBytes = ((haxe.lang.Function) (value) );
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return value;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case -90795452:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("responseAsString")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							this.responseAsString = haxe.lang.Runtime.toString(value);
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
					
					
					case 756526186:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("postData")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							this.postData = haxe.lang.Runtime.toString(value);
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
					
					
					case 1976343467:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("postBytes")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							this.postBytes = ((haxe.io.Bytes) (value) );
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
					case 1713464788:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("get_responseData")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get_responseData")) );
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
					
					
					case -1867169789:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("success")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "success")) );
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case 1438740363:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("responseData")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.get_responseData();
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case -393671325:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("hasOnData")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "hasOnData")) );
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case 1650146474:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("responseBytes")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.responseBytes;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case 1505928881:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("onStatus")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.onStatus;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case -90795452:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("responseAsString")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.responseAsString;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
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
					
					
					case 756526186:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("postData")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.postData;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case -1352428084:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("onBytes")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.onBytes;
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case 1976343467:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("postBytes")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.postBytes;
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
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, java.lang.Object[] dynargs)
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
					case 1713464788:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("get_responseData")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.get_responseData();
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case -393671325:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("hasOnData")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							return this.hasOnData();
						}
						
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						break;
					}
					
					
					case -1867169789:
					{
						//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
						if (field.equals("success")) 
						{
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							__temp_executeDef1 = false;
							//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
							this.success(((haxe.io.Bytes) (dynargs[0]) ));
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
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("onStatus");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("onError");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("onBytes");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("onData");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("emptyOnData");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("params");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("headers");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("postBytes");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("postData");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("responseAsString");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("responseBytes");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("responseData");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		baseArr.push("url");
		//line 41 "C:\\HaxeToolkit\\haxe\\std\\haxe\\http\\HttpBase.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


