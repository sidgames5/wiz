package sys.io;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Process extends haxe.lang.HxObject
{
	public Process(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Process(java.lang.String cmd, haxe.root.Array<java.lang.String> args, java.lang.Object detached)
	{
		//line 81 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		sys.io.Process.__hx_ctor_sys_io_Process(this, cmd, args, detached);
	}
	
	
	protected static void __hx_ctor_sys_io_Process(sys.io.Process __hx_this, java.lang.String cmd, haxe.root.Array<java.lang.String> args, java.lang.Object detached)
	{
		//line 81 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		try 
		{
			//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			if (haxe.lang.Runtime.toBool(((java.lang.Boolean) ((detached)) ))) 
			{
				//line 83 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				throw ((java.lang.RuntimeException) (haxe.Exception.thrown("Detached process is not supported on this platform")) );
			}
			
			//line 84 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			java.lang.Process p = __hx_this.proc = sys.io.Process.createProcessBuilder(cmd, args).start();
			//line 85 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			__hx_this.stderr = new sys.io._Process.ProcessInput(((java.io.InputStream) (p.getErrorStream()) ));
			//line 86 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			__hx_this.stdout = new sys.io._Process.ProcessInput(((java.io.InputStream) (p.getInputStream()) ));
			//line 87 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			__hx_this.stdin = new haxe.java.io.NativeOutput(((java.io.OutputStream) (p.getOutputStream()) ));
		}
		catch (java.lang.Throwable typedException)
		{
			//line 81 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	public static java.lang.ProcessBuilder createProcessBuilder(java.lang.String cmd, haxe.root.Array<java.lang.String> args)
	{
		//line 43 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		java.lang.String sysName = haxe.root.Sys.systemName();
		//line 44 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		java.lang.String[] pargs = null;
		//line 45 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		if (( args == null )) 
		{
			//line 46 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			java.lang.String cmdStr = cmd;
			//line 47 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			{
				//line 47 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				java.lang.String __temp_svar1 = (sysName);
				//line 47 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				boolean __temp_executeDef2 = true;
				//line 47 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				if (( __temp_svar1 != null )) 
				{
					//line 47 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
					switch (__temp_svar1.hashCode())
					{
						case -1280820637:
						{
							//line 47 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							if (__temp_svar1.equals("Windows")) 
							{
								//line 47 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
								__temp_executeDef2 = false;
								//line 49 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
								pargs = new java.lang.String[3];
								//line 50 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
								java.lang.String _g = haxe.root.Sys.getEnv("COMSPEC");
								//line 51 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
								if (( _g == null )) 
								{
									//line 51 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
									cmd = "cmd.exe";
								}
								else
								{
									//line 52 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
									java.lang.String comspec = _g;
									//line 52 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
									cmd = comspec;
								}
								
								//line 50 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
								pargs[0] = cmd;
								//line 54 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
								pargs[1] = "/C";
								//line 55 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
								pargs[2] = ( ( "\"" + cmdStr ) + "\"" );
							}
							
							//line 47 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							break;
						}
						
						
					}
					
				}
				
				//line 56 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				if (__temp_executeDef2) 
				{
					//line 57 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
					pargs = new java.lang.String[3];
					//line 58 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
					cmd = "/bin/sh";
					//line 58 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
					pargs[0] = cmd;
					//line 59 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
					pargs[1] = "-c";
					//line 60 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
					pargs[2] = cmdStr;
				}
				
			}
			
		}
		else
		{
			//line 63 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			pargs = new java.lang.String[( args.length + 1 )];
			//line 64 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			{
				//line 64 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				java.lang.String __temp_svar3 = (sysName);
				//line 64 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				boolean __temp_executeDef4 = true;
				//line 64 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				if (( __temp_svar3 != null )) 
				{
					//line 64 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
					switch (__temp_svar3.hashCode())
					{
						case -1280820637:
						{
							//line 64 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							if (__temp_svar3.equals("Windows")) 
							{
								//line 64 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
								__temp_executeDef4 = false;
								//line 66 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
								pargs[0] = haxe.SysTools.quoteWinArg(cmd, false);
								//line 67 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
								{
									//line 67 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
									int _g1 = 0;
									//line 67 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
									int _g2 = args.length;
									//line 67 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
									while (( _g1 < _g2 ))
									{
										//line 67 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
										int i = _g1++;
										//line 68 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
										pargs[( i + 1 )] = haxe.SysTools.quoteWinArg(args.__get(i), false);
									}
									
								}
								
							}
							
							//line 64 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							break;
						}
						
						
					}
					
				}
				
				//line 70 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				if (__temp_executeDef4) 
				{
					//line 71 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
					pargs[0] = cmd;
					//line 72 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
					{
						//line 72 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						int _g3 = 0;
						//line 72 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						int _g4 = args.length;
						//line 72 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						while (( _g3 < _g4 ))
						{
							//line 72 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							int i1 = _g3++;
							//line 73 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							pargs[( i1 + 1 )] = args.__get(i1);
						}
						
					}
					
				}
				
			}
			
		}
		
		//line 78 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		return new java.lang.ProcessBuilder(((java.lang.String[]) (pargs) ));
	}
	
	
	public haxe.io.Input stdout;
	
	public haxe.io.Input stderr;
	
	public haxe.io.Output stdin;
	
	public java.lang.Process proc;
	
	public java.lang.Object exitCode(java.lang.Object block)
	{
		//line 96 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		boolean block1 = ( (haxe.lang.Runtime.eq(block, null)) ? (true) : (haxe.lang.Runtime.toBool(((java.lang.Boolean) (block) ))) );
		//line 97 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		if (( block1 == false )) 
		{
			//line 99 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			try 
			{
				//line 99 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				return this.proc.exitValue();
			}
			catch (java.lang.Throwable _g)
			{
				//line 101 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				return null;
			}
			
			
		}
		
		//line 105 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		(((sys.io._Process.ProcessInput) (this.stdout) )).bufferContents();
		//line 106 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		(((sys.io._Process.ProcessInput) (this.stderr) )).bufferContents();
		//line 108 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		try 
		{
			//line 108 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			this.proc.waitFor();
		}
		catch (java.lang.Throwable _g1)
		{
			//line 109 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			java.lang.Object e = ((java.lang.Object) (haxe.Exception.caught(_g1).unwrap()) );
			//line 110 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(e)) );
		}
		
		
		//line 112 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		return this.proc.exitValue();
	}
	
	
	public void close()
	{
		//line 116 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		this.proc.destroy();
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		{
			//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			boolean __temp_executeDef1 = true;
			//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			if (( field != null )) 
			{
				//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				switch (field.hashCode())
				{
					case 3449686:
					{
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						if (field.equals("proc")) 
						{
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							__temp_executeDef1 = false;
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							this.proc = ((java.lang.Process) (value) );
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							return value;
						}
						
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						break;
					}
					
					
					case -892396981:
					{
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						if (field.equals("stdout")) 
						{
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							__temp_executeDef1 = false;
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							this.stdout = ((haxe.io.Input) (value) );
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							return value;
						}
						
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						break;
					}
					
					
					case 109760136:
					{
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						if (field.equals("stdin")) 
						{
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							__temp_executeDef1 = false;
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							this.stdin = ((haxe.io.Output) (value) );
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							return value;
						}
						
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						break;
					}
					
					
					case -892406686:
					{
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						if (field.equals("stderr")) 
						{
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							__temp_executeDef1 = false;
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							this.stderr = ((haxe.io.Input) (value) );
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							return value;
						}
						
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			if (__temp_executeDef1) 
			{
				//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		{
			//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			boolean __temp_executeDef1 = true;
			//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			if (( field != null )) 
			{
				//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				switch (field.hashCode())
				{
					case 94756344:
					{
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						if (field.equals("close")) 
						{
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							__temp_executeDef1 = false;
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "close")) );
						}
						
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						break;
					}
					
					
					case -892396981:
					{
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						if (field.equals("stdout")) 
						{
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							__temp_executeDef1 = false;
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							return this.stdout;
						}
						
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						break;
					}
					
					
					case -2123228117:
					{
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						if (field.equals("exitCode")) 
						{
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							__temp_executeDef1 = false;
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "exitCode")) );
						}
						
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						break;
					}
					
					
					case -892406686:
					{
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						if (field.equals("stderr")) 
						{
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							__temp_executeDef1 = false;
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							return this.stderr;
						}
						
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						break;
					}
					
					
					case 3449686:
					{
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						if (field.equals("proc")) 
						{
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							__temp_executeDef1 = false;
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							return this.proc;
						}
						
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						break;
					}
					
					
					case 109760136:
					{
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						if (field.equals("stdin")) 
						{
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							__temp_executeDef1 = false;
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							return this.stdin;
						}
						
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			if (__temp_executeDef1) 
			{
				//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, java.lang.Object[] dynargs)
	{
		//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		{
			//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			boolean __temp_executeDef1 = true;
			//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			if (( field != null )) 
			{
				//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				switch (field.hashCode())
				{
					case 94756344:
					{
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						if (field.equals("close")) 
						{
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							__temp_executeDef1 = false;
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							this.close();
						}
						
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						break;
					}
					
					
					case -2123228117:
					{
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						if (field.equals("exitCode")) 
						{
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							__temp_executeDef1 = false;
							//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
							return this.exitCode(( (( dynargs.length > 0 )) ? (dynargs[0]) : (null) ));
						}
						
						//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
			if (__temp_executeDef1) 
			{
				//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		baseArr.push("proc");
		//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		baseArr.push("stdin");
		//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		baseArr.push("stderr");
		//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		baseArr.push("stdout");
		//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\sys\\io\\Process.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


