package haxe.io;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Input extends haxe.lang.HxObject
{
	public Input(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Input()
	{
		//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
		haxe.io.Input.__hx_ctor_haxe_io_Input(this);
	}
	
	
	protected static void __hx_ctor_haxe_io_Input(haxe.io.Input __hx_this)
	{
	}
	
	
	public int readByte()
	{
		//line 53 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
		throw new haxe.exceptions.NotImplementedException(haxe.lang.Runtime.toString(null), ((haxe.Exception) (null) ), ((java.lang.Object) (new haxe.lang.DynamicObject(new java.lang.String[]{"className", "fileName", "methodName"}, new java.lang.Object[]{"haxe.io.Input", "haxe/io/Input.hx", "readByte"}, new java.lang.String[]{"lineNumber"}, new double[]{((double) (((double) (53) )) )})) ));
	}
	
	
	public int readBytes(haxe.io.Bytes s, int pos, int len)
	{
		//line 64 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
		try 
		{
			//line 65 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			int k = len;
			//line 66 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			byte[] b = s.b;
			//line 67 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			if (( ( ( pos < 0 ) || ( len < 0 ) ) || ( ( pos + len ) > s.length ) )) 
			{
				//line 68 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
				throw ((java.lang.RuntimeException) (haxe.Exception.thrown(haxe.io.Error.OutsideBounds)) );
			}
			
			//line 70 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			try 
			{
				//line 70 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
				while (( k > 0 ))
				{
					//line 78 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
					b[pos] = ((byte) (this.readByte()) );
					//line 80 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
					 ++ pos;
					//line 81 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
					 -- k;
				}
				
			}
			catch (java.lang.Throwable _g)
			{
				//line 69 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
				if ( ! (( ((java.lang.Object) (haxe.Exception.caught(_g).unwrap()) ) instanceof haxe.io.Eof )) ) 
				{
					//line 69 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
					throw _g;
				}
				
			}
			
			
			//line 84 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			return ( len - k );
		}
		catch (java.lang.Throwable typedException)
		{
			//line 64 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	public haxe.io.Bytes readAll(java.lang.Object bufsize)
	{
		//line 106 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
		try 
		{
			//line 107 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			if (haxe.lang.Runtime.eq(bufsize, null)) 
			{
				//line 111 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
				bufsize = 16384;
			}
			
			//line 114 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			haxe.io.Bytes buf = haxe.io.Bytes.alloc(((int) (haxe.lang.Runtime.toInt(bufsize)) ));
			//line 115 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			haxe.io.BytesBuffer total = new haxe.io.BytesBuffer();
			//line 117 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			try 
			{
				//line 117 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
				while (true)
				{
					//line 118 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
					int len = this.readBytes(buf, 0, ((int) (haxe.lang.Runtime.toInt(bufsize)) ));
					//line 119 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
					if (( len == 0 )) 
					{
						//line 120 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						throw ((java.lang.RuntimeException) (haxe.Exception.thrown(haxe.io.Error.Blocked)) );
					}
					
					//line 121 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
					{
						//line 121 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						if (( ( len < 0 ) || ( len > buf.length ) )) 
						{
							//line 121 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
							throw ((java.lang.RuntimeException) (haxe.Exception.thrown(haxe.io.Error.OutsideBounds)) );
						}
						
						//line 121 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						total.b.write(((byte[]) (buf.b) ), ((int) (0) ), ((int) (len) ));
					}
					
				}
				
			}
			catch (java.lang.Throwable _g)
			{
				//line 116 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
				if ( ! (( ((java.lang.Object) (haxe.Exception.caught(_g).unwrap()) ) instanceof haxe.io.Eof )) ) 
				{
					//line 116 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
					throw _g;
				}
				
			}
			
			
			//line 124 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			return total.getBytes();
		}
		catch (java.lang.Throwable typedException)
		{
			//line 106 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
		{
			//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			boolean __temp_executeDef1 = true;
			//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			if (( field != null )) 
			{
				//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
				switch (field.hashCode())
				{
					case 1080375339:
					{
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						if (field.equals("readAll")) 
						{
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
							__temp_executeDef1 = false;
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "readAll")) );
						}
						
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						break;
					}
					
					
					case -868060226:
					{
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						if (field.equals("readByte")) 
						{
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
							__temp_executeDef1 = false;
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "readByte")) );
						}
						
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						break;
					}
					
					
					case -1140063115:
					{
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						if (field.equals("readBytes")) 
						{
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
							__temp_executeDef1 = false;
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "readBytes")) );
						}
						
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			if (__temp_executeDef1) 
			{
				//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, java.lang.Object[] dynargs)
	{
		//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
		{
			//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			boolean __temp_executeDef1 = true;
			//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			if (( field != null )) 
			{
				//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
				switch (field.hashCode())
				{
					case 1080375339:
					{
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						if (field.equals("readAll")) 
						{
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
							__temp_executeDef1 = false;
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
							return this.readAll(( (( dynargs.length > 0 )) ? (dynargs[0]) : (null) ));
						}
						
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						break;
					}
					
					
					case -868060226:
					{
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						if (field.equals("readByte")) 
						{
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
							__temp_executeDef1 = false;
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
							return this.readByte();
						}
						
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						break;
					}
					
					
					case -1140063115:
					{
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						if (field.equals("readBytes")) 
						{
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
							__temp_executeDef1 = false;
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
							return this.readBytes(((haxe.io.Bytes) (dynargs[0]) ), ((int) (haxe.lang.Runtime.toInt(dynargs[1])) ), ((int) (haxe.lang.Runtime.toInt(dynargs[2])) ));
						}
						
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
			if (__temp_executeDef1) 
			{
				//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 32 "C:\\HaxeToolkit\\haxe\\std\\haxe\\io\\Input.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


