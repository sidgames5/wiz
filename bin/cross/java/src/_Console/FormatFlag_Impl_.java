package _Console;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public final class FormatFlag_Impl_
{
	static
	{
		//line 675 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.RESET = haxe.lang.Runtime.toString("reset");
		//line 676 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BOLD = haxe.lang.Runtime.toString("bold");
		//line 677 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.ITALIC = haxe.lang.Runtime.toString("italic");
		//line 678 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.DIM = haxe.lang.Runtime.toString("dim");
		//line 679 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.UNDERLINE = haxe.lang.Runtime.toString("underline");
		//line 680 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BLINK = haxe.lang.Runtime.toString("blink");
		//line 681 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.INVERT = haxe.lang.Runtime.toString("invert");
		//line 682 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.HIDDEN = haxe.lang.Runtime.toString("hidden");
		//line 683 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BLACK = haxe.lang.Runtime.toString("black");
		//line 684 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.RED = haxe.lang.Runtime.toString("red");
		//line 685 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.GREEN = haxe.lang.Runtime.toString("green");
		//line 686 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.YELLOW = haxe.lang.Runtime.toString("yellow");
		//line 687 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BLUE = haxe.lang.Runtime.toString("blue");
		//line 688 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.MAGENTA = haxe.lang.Runtime.toString("magenta");
		//line 689 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.CYAN = haxe.lang.Runtime.toString("cyan");
		//line 690 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.WHITE = haxe.lang.Runtime.toString("white");
		//line 691 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.LIGHT_BLACK = haxe.lang.Runtime.toString("light_black");
		//line 692 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.LIGHT_RED = haxe.lang.Runtime.toString("light_red");
		//line 693 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.LIGHT_GREEN = haxe.lang.Runtime.toString("light_green");
		//line 694 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.LIGHT_YELLOW = haxe.lang.Runtime.toString("light_yellow");
		//line 695 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.LIGHT_BLUE = haxe.lang.Runtime.toString("light_blue");
		//line 696 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.LIGHT_MAGENTA = haxe.lang.Runtime.toString("light_magenta");
		//line 697 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.LIGHT_CYAN = haxe.lang.Runtime.toString("light_cyan");
		//line 698 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.LIGHT_WHITE = haxe.lang.Runtime.toString("light_white");
		//line 699 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_BLACK = haxe.lang.Runtime.toString("bg_black");
		//line 700 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_RED = haxe.lang.Runtime.toString("bg_red");
		//line 701 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_GREEN = haxe.lang.Runtime.toString("bg_green");
		//line 702 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_YELLOW = haxe.lang.Runtime.toString("bg_yellow");
		//line 703 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_BLUE = haxe.lang.Runtime.toString("bg_blue");
		//line 704 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_MAGENTA = haxe.lang.Runtime.toString("bg_magenta");
		//line 705 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_CYAN = haxe.lang.Runtime.toString("bg_cyan");
		//line 706 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_WHITE = haxe.lang.Runtime.toString("bg_white");
		//line 707 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_LIGHT_BLACK = haxe.lang.Runtime.toString("bg_light_black");
		//line 708 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_LIGHT_RED = haxe.lang.Runtime.toString("bg_light_red");
		//line 709 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_LIGHT_GREEN = haxe.lang.Runtime.toString("bg_light_green");
		//line 710 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_LIGHT_YELLOW = haxe.lang.Runtime.toString("bg_light_yellow");
		//line 711 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_LIGHT_BLUE = haxe.lang.Runtime.toString("bg_light_blue");
		//line 712 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_LIGHT_MAGENTA = haxe.lang.Runtime.toString("bg_light_magenta");
		//line 713 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_LIGHT_CYAN = haxe.lang.Runtime.toString("bg_light_cyan");
		//line 714 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		_Console.FormatFlag_Impl_.BG_LIGHT_WHITE = haxe.lang.Runtime.toString("bg_light_white");
	}
	
	public static java.lang.String RESET;
	
	public static java.lang.String BOLD;
	
	public static java.lang.String ITALIC;
	
	public static java.lang.String DIM;
	
	public static java.lang.String UNDERLINE;
	
	public static java.lang.String BLINK;
	
	public static java.lang.String INVERT;
	
	public static java.lang.String HIDDEN;
	
	public static java.lang.String BLACK;
	
	public static java.lang.String RED;
	
	public static java.lang.String GREEN;
	
	public static java.lang.String YELLOW;
	
	public static java.lang.String BLUE;
	
	public static java.lang.String MAGENTA;
	
	public static java.lang.String CYAN;
	
	public static java.lang.String WHITE;
	
	public static java.lang.String LIGHT_BLACK;
	
	public static java.lang.String LIGHT_RED;
	
	public static java.lang.String LIGHT_GREEN;
	
	public static java.lang.String LIGHT_YELLOW;
	
	public static java.lang.String LIGHT_BLUE;
	
	public static java.lang.String LIGHT_MAGENTA;
	
	public static java.lang.String LIGHT_CYAN;
	
	public static java.lang.String LIGHT_WHITE;
	
	public static java.lang.String BG_BLACK;
	
	public static java.lang.String BG_RED;
	
	public static java.lang.String BG_GREEN;
	
	public static java.lang.String BG_YELLOW;
	
	public static java.lang.String BG_BLUE;
	
	public static java.lang.String BG_MAGENTA;
	
	public static java.lang.String BG_CYAN;
	
	public static java.lang.String BG_WHITE;
	
	public static java.lang.String BG_LIGHT_BLACK;
	
	public static java.lang.String BG_LIGHT_RED;
	
	public static java.lang.String BG_LIGHT_GREEN;
	
	public static java.lang.String BG_LIGHT_YELLOW;
	
	public static java.lang.String BG_LIGHT_BLUE;
	
	public static java.lang.String BG_LIGHT_MAGENTA;
	
	public static java.lang.String BG_LIGHT_CYAN;
	
	public static java.lang.String BG_LIGHT_WHITE;
	
	public static java.lang.String fromString(java.lang.String str)
	{
		//line 718 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		str = str.toLowerCase();
		//line 721 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (( haxe.lang.Runtime.valEq(haxe.lang.StringExt.charAt(str, 0), "#") || haxe.lang.Runtime.valEq(haxe.lang.StringExt.substr(str, 0, 3), "bg#") )) 
		{
			//line 722 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			int hIdx = haxe.lang.StringExt.indexOf(str, "#", null);
			//line 723 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.String hex = haxe.lang.StringExt.substr(str, ( hIdx + 1 ), null);
			//line 726 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (( hex.length() == 3 )) 
			{
				//line 727 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				haxe.root.Array<java.lang.String> a = haxe.lang.StringExt.split(hex, "");
				//line 728 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				hex = new haxe.root.Array<java.lang.String>(new java.lang.String[]{a.__get(0), a.__get(0), a.__get(1), a.__get(1), a.__get(2), a.__get(2)}).join("");
			}
			
			//line 732 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (( new haxe.root.EReg(haxe.lang.Runtime.toString("[^0-9a-f]"), haxe.lang.Runtime.toString("i")).match(hex) || ( hex.length() < 6 ) )) 
			{
				//line 734 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				return "";
			}
			
			//line 737 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.String normalized = ( ( haxe.lang.StringExt.substring(str, 0, hIdx) + "#" ) + hex );
			//line 739 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			return normalized;
		}
		
		//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		{
			//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			java.lang.String __temp_svar1 = (str);
			//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			boolean __temp_executeDef2 = true;
			//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (( __temp_svar1 != null )) 
			{
				//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				switch (__temp_svar1.hashCode())
				{
					case 33:
					{
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("!")) 
						{
							//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 745 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return haxe.lang.Runtime.toString("invert");
						}
						
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 117:
					{
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("u")) 
						{
							//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 746 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return haxe.lang.Runtime.toString("underline");
						}
						
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 47:
					{
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("/")) 
						{
							//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 744 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return haxe.lang.Runtime.toString("reset");
						}
						
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 105:
					{
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("i")) 
						{
							//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 748 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return haxe.lang.Runtime.toString("italic");
						}
						
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 98:
					{
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("b")) 
						{
							//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 747 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return haxe.lang.Runtime.toString("bold");
						}
						
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case 3181155:
					{
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("gray")) 
						{
							//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 749 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return haxe.lang.Runtime.toString("light_black");
						}
						
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
					case -179234275:
					{
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (__temp_svar1.equals("bg_gray")) 
						{
							//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							__temp_executeDef2 = false;
							//line 750 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							return haxe.lang.Runtime.toString("bg_light_black");
						}
						
						//line 743 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 751 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (__temp_executeDef2) 
			{
				//line 751 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				return haxe.lang.Runtime.toString(str);
			}
			else
			{
				//line 751 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				throw null;
			}
			
		}
		
	}
	
	
}


