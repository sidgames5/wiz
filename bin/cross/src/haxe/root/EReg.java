package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class EReg extends haxe.lang.HxObject
{
	public EReg(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public EReg(java.lang.String r, java.lang.String opt)
	{
		//line 33 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		haxe.root.EReg.__hx_ctor__EReg(this, r, opt);
	}
	
	
	protected static void __hx_ctor__EReg(haxe.root.EReg __hx_this, java.lang.String r, java.lang.String opt)
	{
		//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		int flags = 0;
		//line 35 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		{
			//line 35 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			int _g = 0;
			//line 35 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			int _g1 = opt.length();
			//line 35 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			while (( _g < _g1 ))
			{
				//line 35 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				int i = _g++;
				//line 36 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				switch (( (( i < opt.length() )) ? (((int) (((java.lang.String) (((java.lang.Object) (opt) )) ).charAt(i)) )) : (-1) ))
				{
					case 103:
					{
						//line 44 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						__hx_this.isGlobal = true;
						//line 44 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 105:
					{
						//line 38 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						flags |= java.util.regex.Pattern.CASE_INSENSITIVE;
						//line 38 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 109:
					{
						//line 40 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						flags |= java.util.regex.Pattern.MULTILINE;
						//line 40 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 115:
					{
						//line 42 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						flags |= java.util.regex.Pattern.DOTALL;
						//line 42 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
				}
				
			}
			
		}
		
		//line 48 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		flags |= java.util.regex.Pattern.UNICODE_CASE;
		//line 50 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		flags |= java.util.regex.Pattern.UNICODE_CHARACTER_CLASS;
		//line 52 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		__hx_this.matcher = java.util.regex.Pattern.compile(haxe.lang.Runtime.toString(haxe.root.EReg.convert(r)), ((int) (flags) )).matcher(((java.lang.CharSequence) ("") ));
		//line 53 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		__hx_this.pattern = r;
	}
	
	
	public static java.lang.String convert(java.lang.String r)
	{
		//line 81 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		return r;
	}
	
	
	public java.lang.String pattern;
	
	public java.util.regex.Matcher matcher;
	
	public java.lang.String cur;
	
	public boolean isGlobal;
	
	public boolean match(java.lang.String s)
	{
		//line 85 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		this.cur = s;
		//line 86 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		this.matcher = this.matcher.reset(((java.lang.CharSequence) (s) ));
		//line 87 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		return this.matcher.find();
	}
	
	
	public java.lang.String matched(int n)
	{
		//line 91 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		if (( n == 0 )) 
		{
			//line 92 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			return this.matcher.group();
		}
		else
		{
			//line 94 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			return this.matcher.group(((int) (n) ));
		}
		
	}
	
	
	public java.lang.Object matchedPos()
	{
		//line 106 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		int start = this.matcher.start();
		//line 107 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		{
			//line 107 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			int __temp_odecl1 = ( this.matcher.end() - start );
			//line 107 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			return new haxe.lang.DynamicObject(new java.lang.String[]{}, new java.lang.Object[]{}, new java.lang.String[]{"len", "pos"}, new double[]{((double) (((double) (__temp_odecl1) )) ), ((double) (((double) (start) )) )});
		}
		
	}
	
	
	public boolean matchSub(java.lang.String s, int pos, java.lang.Object len)
	{
		//line 110 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		int len1 = ( (haxe.lang.Runtime.eq(len, null)) ? (-1) : (((int) (haxe.lang.Runtime.toInt(len)) )) );
		//line 111 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		this.matcher = this.matcher.reset(((java.lang.CharSequence) (( (( len1 < 0 )) ? (s) : (haxe.lang.StringExt.substr(s, 0, ( pos + len1 ))) )) ));
		//line 112 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		this.cur = s;
		//line 113 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		return this.matcher.find(((int) (pos) ));
	}
	
	
	public java.lang.String map(java.lang.String s, haxe.lang.Function f)
	{
		//line 166 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		int offset = 0;
		//line 167 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		haxe.root.StringBuf buf = new haxe.root.StringBuf();
		//line 168 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		while (true)
		{
			//line 169 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			if (( offset >= s.length() )) 
			{
				//line 170 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				break;
			}
			else
			{
				//line 171 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				if ( ! (this.matchSub(s, offset, null)) ) 
				{
					//line 172 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
					buf.add(haxe.lang.Runtime.toString(haxe.lang.StringExt.substr(s, offset, null)));
					//line 172 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
					java.lang.Object __temp_expr1 = ((java.lang.Object) (null) );
					//line 173 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
					break;
				}
				
			}
			
			//line 175 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			java.lang.Object p = this.matchedPos();
			//line 176 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			buf.add(haxe.lang.Runtime.toString(haxe.lang.StringExt.substr(s, offset, ( ((int) (haxe.lang.Runtime.getField_f(p, "pos", true)) ) - ((int) (offset) ) ))));
			//line 176 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			java.lang.Object __temp_expr2 = ((java.lang.Object) (null) );
			//line 177 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			buf.add(haxe.lang.Runtime.toString(f.__hx_invoke1_o(0.0, this)));
			//line 177 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			java.lang.Object __temp_expr3 = ((java.lang.Object) (null) );
			//line 178 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			if (( ((int) (haxe.lang.Runtime.getField_f(p, "len", true)) ) == 0 )) 
			{
				//line 179 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				buf.add(haxe.lang.Runtime.toString(haxe.lang.StringExt.substr(s, ((int) (haxe.lang.Runtime.getField_f(p, "pos", true)) ), 1)));
				//line 179 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				java.lang.Object __temp_expr4 = ((java.lang.Object) (null) );
				//line 180 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				offset = ( ((int) (haxe.lang.Runtime.getField_f(p, "pos", true)) ) + 1 );
			}
			else
			{
				//line 182 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				offset = ( ((int) (haxe.lang.Runtime.getField_f(p, "pos", true)) ) + ((int) (haxe.lang.Runtime.getField_f(p, "len", true)) ) );
			}
			
			//line 168 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			if ( ! (this.isGlobal) ) 
			{
				//line 168 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				break;
			}
			
		}
		
		//line 184 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		if (( (  ! (this.isGlobal)  && ( offset > 0 ) ) && ( offset < s.length() ) )) 
		{
			//line 185 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			buf.add(haxe.lang.Runtime.toString(haxe.lang.StringExt.substr(s, offset, null)));
			//line 185 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			java.lang.Object __temp_expr5 = ((java.lang.Object) (null) );
		}
		
		//line 186 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		return buf.toString();
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		{
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			if (( field != null )) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				switch (field.hashCode())
				{
					case -568986259:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("isGlobal")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							this.isGlobal = haxe.lang.Runtime.toBool(((java.lang.Boolean) (value) ));
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case -791090288:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("pattern")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							this.pattern = haxe.lang.Runtime.toString(value);
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 98880:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("cur")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							this.cur = haxe.lang.Runtime.toString(value);
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 840862002:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("matcher")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							this.matcher = ((java.util.regex.Matcher) (value) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		{
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			if (( field != null )) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				switch (field.hashCode())
				{
					case 107868:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("map")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "map")) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case -791090288:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("pattern")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return this.pattern;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 296901179:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("matchSub")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "matchSub")) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 840862002:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("matcher")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return this.matcher;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 1870294672:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("matchedPos")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "matchedPos")) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 98880:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("cur")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return this.cur;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 840861988:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("matched")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "matched")) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case -568986259:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("isGlobal")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return this.isGlobal;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 103668165:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("match")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "match")) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, java.lang.Object[] dynargs)
	{
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		{
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			if (( field != null )) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				switch (field.hashCode())
				{
					case 107868:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("map")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return this.map(haxe.lang.Runtime.toString(dynargs[0]), ((haxe.lang.Function) (dynargs[1]) ));
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 103668165:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("match")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return this.match(haxe.lang.Runtime.toString(dynargs[0]));
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 296901179:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("matchSub")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return this.matchSub(haxe.lang.Runtime.toString(dynargs[0]), ((int) (haxe.lang.Runtime.toInt(dynargs[1])) ), ( (( dynargs.length > 2 )) ? (dynargs[2]) : (null) ));
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 840861988:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("matched")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return this.matched(((int) (haxe.lang.Runtime.toInt(dynargs[0])) ));
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
					case 1870294672:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						if (field.equals("matchedPos")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
							return this.matchedPos();
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		baseArr.push("isGlobal");
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		baseArr.push("cur");
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		baseArr.push("matcher");
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		baseArr.push("pattern");
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\EReg.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}

