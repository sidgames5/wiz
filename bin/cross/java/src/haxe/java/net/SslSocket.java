package haxe.java.net;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class SslSocket extends sys.net.Socket
{
	public SslSocket(haxe.lang.EmptyObject empty)
	{
		//line 25 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public SslSocket()
	{
		//line 38 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\net\\Socket.hx"
		super(haxe.lang.EmptyObject.EMPTY);
		//line 38 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\net\\Socket.hx"
		haxe.java.net.SslSocket.__hx_ctor_haxe_java_net_SslSocket(this);
	}
	
	
	protected static void __hx_ctor_haxe_java_net_SslSocket(haxe.java.net.SslSocket __hx_this)
	{
		//line 38 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\net\\Socket.hx"
		sys.net.Socket.__hx_ctor_sys_net_Socket(__hx_this);
	}
	
	
	@Override public void create()
	{
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
		try 
		{
			//line 28 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
			this.sock = javax.net.ssl.SSLSocketFactory.getDefault().createSocket();
			//line 29 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
			this.server = javax.net.ssl.SSLServerSocketFactory.getDefault().createServerSocket();
		}
		catch (java.lang.Throwable _g)
		{
			//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
			java.lang.Object e = ((java.lang.Object) (haxe.Exception.caught(_g).unwrap()) );
			//line 31 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(e)) );
		}
		
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 25 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
		{
			//line 25 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
			boolean __temp_executeDef1 = true;
			//line 25 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
			if (( field != null )) 
			{
				//line 25 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
				switch (field.hashCode())
				{
					case -1352294148:
					{
						//line 25 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
						if (field.equals("create")) 
						{
							//line 25 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
							__temp_executeDef1 = false;
							//line 25 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "create")) );
						}
						
						//line 25 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 25 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
			if (__temp_executeDef1) 
			{
				//line 25 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 25 "C:\\HaxeToolkit\\haxe\\std\\java\\net\\SslSocket.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


