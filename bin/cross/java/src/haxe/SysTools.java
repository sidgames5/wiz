package haxe;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class SysTools extends haxe.lang.HxObject
{
	static
	{
		//line 9 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
		haxe.SysTools.winMetaCharacters = ((haxe.root.Array<java.lang.Object>) (new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{32, 40, 41, 37, 33, 94, 34, 60, 62, 38, 124, 10, 13, 44, 59})) );
	}
	
	public SysTools(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public SysTools()
	{
		//line 5 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
		haxe.SysTools.__hx_ctor_haxe_SysTools(this);
	}
	
	
	protected static void __hx_ctor_haxe_SysTools(haxe.SysTools __hx_this)
	{
	}
	
	
	public static haxe.root.Array<java.lang.Object> winMetaCharacters;
	
	public static java.lang.String quoteWinArg(java.lang.String argument, boolean escapeMetaCharacters)
	{
		//line 48 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
		if ( ! (new haxe.root.EReg(haxe.lang.Runtime.toString("^[^ \t\\\\\"]+$"), haxe.lang.Runtime.toString("")).match(argument)) ) 
		{
			//line 52 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
			haxe.root.StringBuf result = new haxe.root.StringBuf();
			//line 53 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
			boolean needquote = ( ( ( haxe.lang.StringExt.indexOf(argument, " ", null) != -1 ) || ( haxe.lang.StringExt.indexOf(argument, "\t", null) != -1 ) ) || haxe.lang.Runtime.valEq(argument, "") );
			//line 55 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
			if (needquote) 
			{
				//line 56 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
				result.add(haxe.lang.Runtime.toString("\""));
				//line 56 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
				java.lang.Object __temp_expr1 = ((java.lang.Object) (null) );
			}
			
			//line 58 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
			haxe.root.StringBuf bs_buf = new haxe.root.StringBuf();
			//line 59 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
			{
				//line 59 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
				int _g = 0;
				//line 59 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
				int _g1 = argument.length();
				//line 59 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
				while (( _g < _g1 ))
				{
					//line 59 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
					int i = _g++;
					//line 60 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
					{
						//line 60 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
						java.lang.Object _g2 = haxe.lang.StringExt.charCodeAt(argument, i);
						//line 60 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
						if (haxe.lang.Runtime.eq(_g2, null)) 
						{
							//line 71 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
							java.lang.Object c = _g2;
							//line 71 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
							{
								//line 73 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
								if (( bs_buf.b.length() > 0 )) 
								{
									//line 74 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									result.add(haxe.lang.Runtime.toString(bs_buf.toString()));
									//line 74 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									java.lang.Object __temp_expr7 = ((java.lang.Object) (null) );
									//line 75 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									bs_buf = new haxe.root.StringBuf();
								}
								
								//line 77 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
								result.addChar(((int) (haxe.lang.Runtime.toInt(c)) ));
							}
							
						}
						else
						{
							//line 60 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
							switch (((int) (haxe.lang.Runtime.toInt((_g2))) ))
							{
								case 34:
								{
									//line 66 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									java.lang.String bs = bs_buf.toString();
									//line 67 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									result.add(haxe.lang.Runtime.toString(bs));
									//line 67 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									java.lang.Object __temp_expr3 = ((java.lang.Object) (null) );
									//line 68 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									result.add(haxe.lang.Runtime.toString(bs));
									//line 68 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									java.lang.Object __temp_expr4 = ((java.lang.Object) (null) );
									//line 69 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									bs_buf = new haxe.root.StringBuf();
									//line 70 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									result.add(haxe.lang.Runtime.toString("\\\""));
									//line 70 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									java.lang.Object __temp_expr5 = ((java.lang.Object) (null) );
									//line 64 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									break;
								}
								
								
								case 92:
								{
									//line 63 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									bs_buf.add(haxe.lang.Runtime.toString("\\"));
									//line 63 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									java.lang.Object __temp_expr6 = ((java.lang.Object) (null) );
									//line 63 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									break;
								}
								
								
								default:
								{
									//line 71 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									java.lang.Object c1 = _g2;
									//line 71 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									{
										//line 73 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
										if (( bs_buf.b.length() > 0 )) 
										{
											//line 74 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
											result.add(haxe.lang.Runtime.toString(bs_buf.toString()));
											//line 74 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
											java.lang.Object __temp_expr2 = ((java.lang.Object) (null) );
											//line 75 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
											bs_buf = new haxe.root.StringBuf();
										}
										
										//line 77 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
										result.addChar(((int) (haxe.lang.Runtime.toInt(c1)) ));
									}
									
									//line 71 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
									break;
								}
								
							}
							
						}
						
					}
					
				}
				
			}
			
			//line 82 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
			result.add(haxe.lang.Runtime.toString(bs_buf.toString()));
			//line 82 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
			java.lang.Object __temp_expr8 = ((java.lang.Object) (null) );
			//line 84 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
			if (needquote) 
			{
				//line 85 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
				result.add(haxe.lang.Runtime.toString(bs_buf.toString()));
				//line 85 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
				java.lang.Object __temp_expr9 = ((java.lang.Object) (null) );
				//line 86 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
				result.add(haxe.lang.Runtime.toString("\""));
				//line 86 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
				java.lang.Object __temp_expr10 = ((java.lang.Object) (null) );
			}
			
			//line 89 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
			argument = result.toString();
		}
		
		//line 92 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
		if (escapeMetaCharacters) 
		{
			//line 93 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
			haxe.root.StringBuf result1 = new haxe.root.StringBuf();
			//line 94 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
			{
				//line 94 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
				int _g3 = 0;
				//line 94 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
				int _g4 = argument.length();
				//line 94 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
				while (( _g3 < _g4 ))
				{
					//line 94 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
					int i1 = _g3++;
					//line 95 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
					java.lang.Object c2 = haxe.lang.StringExt.charCodeAt(argument, i1);
					//line 96 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
					if (( haxe.SysTools.winMetaCharacters.indexOf(c2, null) >= 0 )) 
					{
						//line 97 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
						result1.addChar(94);
					}
					
					//line 99 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
					result1.addChar(((int) (haxe.lang.Runtime.toInt(c2)) ));
				}
				
			}
			
			//line 101 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
			return result1.toString();
		}
		else
		{
			//line 103 "C:\\HaxeToolkit\\haxe\\std\\haxe\\SysTools.hx"
			return argument;
		}
		
	}
	
	
}


