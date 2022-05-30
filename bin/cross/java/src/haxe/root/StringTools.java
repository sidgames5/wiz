package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class StringTools extends haxe.lang.HxObject
{
	public StringTools(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public StringTools()
	{
		//line 38 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		haxe.root.StringTools.__hx_ctor__StringTools(this);
	}
	
	
	protected static void __hx_ctor__StringTools(haxe.root.StringTools __hx_this)
	{
	}
	
	
	public static java.lang.String urlEncode(java.lang.String s)
	{
		//line 52 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		try 
		{
			//line 52 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			return haxe.root.StringTools.postProcessUrlEncode(java.net.URLEncoder.encode(haxe.lang.Runtime.toString(s), haxe.lang.Runtime.toString("UTF-8")));
		}
		catch (java.lang.Throwable typedException)
		{
			//line 42 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	public static java.lang.String postProcessUrlEncode(java.lang.String s)
	{
		//line 75 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		haxe.root.StringBuf ret = new haxe.root.StringBuf();
		//line 76 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		int i = 0;
		//line 76 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		int len = s.length();
		//line 77 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		while (( i < len ))
		{
			//line 78 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			char _g = ((java.lang.String) (((java.lang.Object) (s) )) ).charAt(i++);
			//line 78 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			{
				//line 78 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
				char __temp_switch1 = (_g);
				//line 81 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
				if (( __temp_switch1 == 37 )) 
				{
					//line 81 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
					if (( i <= ( len - 2 ) )) 
					{
						//line 82 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
						char c1 = ((java.lang.String) (((java.lang.Object) (s) )) ).charAt(i++);
						//line 82 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
						char c2 = ((java.lang.String) (((java.lang.Object) (s) )) ).charAt(i++);
						//line 83 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
						{
							//line 83 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
							char __temp_switch2 = (c1);
							//line 83 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
							if (( __temp_switch2 == 50 )) 
							{
								//line 83 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
								{
									//line 83 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
									char __temp_switch4 = (c2);
									//line 85 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
									if (( __temp_switch4 == 49 )) 
									{
										//line 85 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
										ret.addChar(33);
									}
									else
									{
										//line 87 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
										if (( __temp_switch4 == 55 )) 
										{
											//line 87 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
											ret.addChar(39);
										}
										else
										{
											//line 89 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
											if (( __temp_switch4 == 56 )) 
											{
												//line 89 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
												ret.addChar(40);
											}
											else
											{
												//line 91 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
												if (( __temp_switch4 == 57 )) 
												{
													//line 91 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
													ret.addChar(41);
												}
												else
												{
													//line 95 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
													ret.addChar(37);
													//line 96 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
													ret.addChar(((int) (c1) ));
													//line 97 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
													ret.addChar(((int) (c2) ));
												}
												
											}
											
										}
										
									}
									
								}
								
							}
							else
							{
								//line 83 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
								if (( __temp_switch2 == 55 )) 
								{
									//line 83 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
									{
										//line 83 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
										char __temp_switch3 = (c2);
										//line 93 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
										if (( ( __temp_switch3 == 69 ) || ( __temp_switch3 == 101 ) )) 
										{
											//line 93 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
											ret.addChar(126);
										}
										else
										{
											//line 95 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
											ret.addChar(37);
											//line 96 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
											ret.addChar(((int) (c1) ));
											//line 97 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
											ret.addChar(((int) (c2) ));
										}
										
									}
									
								}
								else
								{
									//line 95 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
									ret.addChar(37);
									//line 96 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
									ret.addChar(((int) (c1) ));
									//line 97 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
									ret.addChar(((int) (c2) ));
								}
								
							}
							
						}
						
					}
					else
					{
						//line 99 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
						char chr = _g;
						//line 100 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
						ret.addChar(((int) (chr) ));
					}
					
				}
				else
				{
					//line 80 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
					if (( __temp_switch1 == 43 )) 
					{
						//line 80 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
						ret.add(haxe.lang.Runtime.toString("%20"));
						//line 80 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
						java.lang.Object __temp_expr5 = ((java.lang.Object) (null) );
					}
					else
					{
						//line 99 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
						char chr1 = _g;
						//line 100 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
						ret.addChar(((int) (chr1) ));
					}
					
				}
				
			}
			
		}
		
		//line 103 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		return ret.toString();
	}
	
	
	public static boolean isSpace(java.lang.String s, int pos)
	{
		//line 283 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		java.lang.Object c = haxe.lang.StringExt.charCodeAt(s, pos);
		//line 284 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		if ( ! ((( ( ((int) (haxe.lang.Runtime.toInt(c)) ) > 8 ) && ( ((int) (haxe.lang.Runtime.toInt(c)) ) < 14 ) ))) ) 
		{
			//line 284 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			return haxe.lang.Runtime.eq(c, 32);
		}
		else
		{
			//line 284 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			return true;
		}
		
	}
	
	
	public static java.lang.String ltrim(java.lang.String s)
	{
		//line 300 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		int l = s.length();
		//line 301 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		int r = 0;
		//line 302 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		while (( ( r < l ) && haxe.root.StringTools.isSpace(s, r) ))
		{
			//line 303 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			 ++ r;
		}
		
		//line 305 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		if (( r > 0 )) 
		{
			//line 306 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			return haxe.lang.StringExt.substr(s, r, ( l - r ));
		}
		else
		{
			//line 308 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			return s;
		}
		
	}
	
	
	public static java.lang.String rtrim(java.lang.String s)
	{
		//line 325 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		int l = s.length();
		//line 326 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		int r = 0;
		//line 327 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		while (( ( r < l ) && haxe.root.StringTools.isSpace(s, ( ( l - r ) - 1 )) ))
		{
			//line 328 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			 ++ r;
		}
		
		//line 330 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
		if (( r > 0 )) 
		{
			//line 331 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			return haxe.lang.StringExt.substr(s, 0, ( l - r ));
		}
		else
		{
			//line 333 "C:\\HaxeToolkit\\haxe\\std\\StringTools.hx"
			return s;
		}
		
	}
	
	
}


