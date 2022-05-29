package haxe.java.io;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class NativeInput extends haxe.io.Input
{
	public NativeInput(haxe.lang.EmptyObject empty)
	{
		//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
	}
	
	
	public NativeInput(java.io.InputStream stream)
	{
		//line 35 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		haxe.java.io.NativeInput.__hx_ctor_haxe_java_io_NativeInput(this, stream);
	}
	
	
	protected static void __hx_ctor_haxe_java_io_NativeInput(haxe.java.io.NativeInput __hx_this, java.io.InputStream stream)
	{
		//line 36 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		__hx_this.stream = stream;
	}
	
	
	public java.io.InputStream stream;
	
	@Override public int readByte()
	{
		//line 40 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		int ret = 0;
		//line 42 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		try 
		{
			//line 42 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
			ret = this.stream.read();
		}
		catch (java.io.IOException e)
		{
			//line 44 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(haxe.io.Error.Custom(e))) );
		}
		
		
		//line 46 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		if (( ret == -1 )) 
		{
			//line 47 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(new haxe.io.Eof())) );
		}
		
		//line 48 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		return ret;
	}
	
	
	@Override public int readBytes(haxe.io.Bytes s, int pos, int len)
	{
		//line 52 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		int ret = 0;
		//line 54 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		try 
		{
			//line 54 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
			ret = this.stream.read(((byte[]) (s.b) ), ((int) (pos) ), ((int) (len) ));
		}
		catch (java.io.EOFException e)
		{
			//line 57 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(new haxe.io.Eof())) );
		}
		
		catch (java.io.IOException e1)
		{
			//line 59 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(haxe.io.Error.Custom(e1))) );
		}
		
		
		//line 62 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		if (( ret == -1 )) 
		{
			//line 63 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(new haxe.io.Eof())) );
		}
		
		//line 64 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		return ret;
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		{
			//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
			boolean __temp_executeDef1 = true;
			//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
			if (( field != null )) 
			{
				//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
				switch (field.hashCode())
				{
					case -891990144:
					{
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
						if (field.equals("stream")) 
						{
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
							__temp_executeDef1 = false;
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
							this.stream = ((java.io.InputStream) (value) );
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
							return value;
						}
						
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
			if (__temp_executeDef1) 
			{
				//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		{
			//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
			boolean __temp_executeDef1 = true;
			//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
			if (( field != null )) 
			{
				//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
				switch (field.hashCode())
				{
					case -1140063115:
					{
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
						if (field.equals("readBytes")) 
						{
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
							__temp_executeDef1 = false;
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "readBytes")) );
						}
						
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
						break;
					}
					
					
					case -891990144:
					{
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
						if (field.equals("stream")) 
						{
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
							__temp_executeDef1 = false;
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
							return this.stream;
						}
						
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
						break;
					}
					
					
					case -868060226:
					{
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
						if (field.equals("readByte")) 
						{
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
							__temp_executeDef1 = false;
							//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "readByte")) );
						}
						
						//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
			if (__temp_executeDef1) 
			{
				//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		baseArr.push("stream");
		//line 32 "C:\\HaxeToolkit\\haxe\\std\\java\\io\\NativeInput.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}

