package tech.infynyt.wiz;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Wiz extends haxe.lang.HxObject
{
	public static void main(String[] args)
	{
		Sys._args = args;
		haxe.java.Init.init();
		tech.infynyt.wiz.Wiz.main();
	}
	
	static
	{
		//line 4 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
		tech.infynyt.wiz.Wiz.args = haxe.root.Sys.args();
	}
	
	public Wiz(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Wiz()
	{
		//line 3 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
		tech.infynyt.wiz.Wiz.__hx_ctor_tech_infynyt_wiz_Wiz(this);
	}
	
	
	protected static void __hx_ctor_tech_infynyt_wiz_Wiz(tech.infynyt.wiz.Wiz __hx_this)
	{
	}
	
	
	public static haxe.root.Array<java.lang.String> args;
	
	public static void main()
	{
		//line 7 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
		if (( tech.infynyt.wiz.Wiz.args.length == 0 )) 
		{
			//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			{
				//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				java.lang.String s = ( haxe.root.Console.logPrefix + "Usage: wiz (command) [args]" );
				//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				if (( s == null )) 
				{
					//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					s = "";
				}
				
				//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				haxe.root.Console.printFormatted(( s + "\n" ), ((int) (0) ));
			}
			
			//line 9 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
			return ;
		}
		
		//line 12 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
		{
			//line 12 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
			java.lang.String __temp_svar1 = (tech.infynyt.wiz.Wiz.args.__get(0));
			//line 12 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
			if (( __temp_svar1 != null )) 
			{
				//line 12 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
				switch (__temp_svar1.hashCode())
				{
					case 1957569947:
					{
						//line 14 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
						if (__temp_svar1.equals("install")) 
						{
							//line 14 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
							if (( tech.infynyt.wiz.Wiz.args.__get(1) == null )) 
							{
								//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
								{
									//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
									java.lang.String s1 = ( haxe.root.Console.logPrefix + "Usage: wiz install (package)" );
									//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
									if (( s1 == null )) 
									{
										//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
										s1 = "";
									}
									
									//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
									haxe.root.Console.printFormatted(( s1 + "\n" ), ((int) (0) ));
								}
								
								//line 16 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
								return ;
							}
							else
							{
								//line 18 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
								double timestart = ((double) (haxe.root.Date.now().date.getTimeInMillis()) );
								//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
								{
									//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
									java.lang.String s2 = ( haxe.root.Console.logPrefix + (( "" + (( "Installing package " + tech.infynyt.wiz.Wiz.args.__get(1) )) )) );
									//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
									if (( s2 == null )) 
									{
										//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
										s2 = "";
									}
									
									//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
									haxe.root.Console.printFormatted(( s2 + "\n" ), ((int) (0) ));
								}
								
								//line 20 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
								tech.infynyt.wiz.Handler.install(tech.infynyt.wiz.Wiz.args.__get(1));
								//line 21 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
								double timeend = ((double) (haxe.root.Date.now().date.getTimeInMillis()) );
								//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
								{
									//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
									java.lang.String s3 = ( haxe.root.Console.successPrefix + (( "" + (( ( "Finished in " + haxe.lang.Runtime.toString(( (( timeend - timestart )) / 1000 )) ) + " seconds" )) )) );
									//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
									if (( s3 == null )) 
									{
										//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
										s3 = "";
									}
									
									//line 50 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
									haxe.root.Console.printFormatted(( s3 + "\n" ), ((int) (0) ));
								}
								
							}
							
						}
						
						//line 14 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\Wiz.hx"
						break;
					}
					
					
				}
				
			}
			
		}
		
	}
	
	
}


