package tech.infynyt.wiz;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class WizPM extends haxe.lang.HxObject
{
	public static void main(String[] args)
	{
		Sys._args = args;
		haxe.java.Init.init();
		tech.infynyt.wiz.WizPM.main();
	}
	
	static
	{
		//line 6 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\WizPM.hx"
		tech.infynyt.wiz.WizPM.args = haxe.root.Sys.args();
	}
	
	public WizPM(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public WizPM()
	{
		//line 5 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\WizPM.hx"
		tech.infynyt.wiz.WizPM.__hx_ctor_tech_infynyt_wiz_WizPM(this);
	}
	
	
	protected static void __hx_ctor_tech_infynyt_wiz_WizPM(tech.infynyt.wiz.WizPM __hx_this)
	{
	}
	
	
	public static haxe.root.Array<java.lang.String> args;
	
	public static void main()
	{
		//line 9 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\WizPM.hx"
		if (( tech.infynyt.wiz.WizPM.args.length == 0 )) 
		{
			//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			{
				//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				java.lang.String s = ( haxe.root.Console.logPrefix + "Usage: wiz <command> [args]" );
				//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				if (( s == null )) 
				{
					//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					s = "";
				}
				
				//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				haxe.root.Console.printFormatted(( s + "\n" ), ((int) (0) ));
			}
			
			//line 11 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\WizPM.hx"
			return ;
		}
		
		//line 14 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\WizPM.hx"
		{
			//line 14 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\WizPM.hx"
			java.lang.String __temp_svar1 = (tech.infynyt.wiz.WizPM.args.__get(0));
			//line 14 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\WizPM.hx"
			if (( __temp_svar1 != null )) 
			{
				//line 14 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\WizPM.hx"
				switch (__temp_svar1.hashCode())
				{
					case 1957569947:
					{
						//line 16 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\WizPM.hx"
						if (__temp_svar1.equals("install")) 
						{
							//line 16 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\WizPM.hx"
							if (( tech.infynyt.wiz.WizPM.args.__get(1) == null )) 
							{
								//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
								{
									//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
									java.lang.String s1 = ( haxe.root.Console.logPrefix + "Usage: wiz install <package>" );
									//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
									if (( s1 == null )) 
									{
										//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
										s1 = "";
									}
									
									//line 35 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
									haxe.root.Console.printFormatted(( s1 + "\n" ), ((int) (0) ));
								}
								
								//line 18 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\WizPM.hx"
								return ;
							}
							
						}
						
						//line 16 "C:\\Users\\saytl\\Desktop\\wiz\\src\\tech\\infynyt\\wiz\\WizPM.hx"
						break;
					}
					
					
				}
				
			}
			
		}
		
	}
	
	
}


