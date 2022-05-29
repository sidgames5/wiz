package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Console_format_140__Fun extends haxe.lang.Function
{
	public Console_format_140__Fun(haxe.root.Array<java.lang.Object>[] groupedProceedingTags, int formatMode, haxe.root.Array<java.lang.String>[] activeFormatFlagStack)
	{
		//line 140 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		super(1, 0);
		//line 140 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		this.groupedProceedingTags = groupedProceedingTags;
		//line 140 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		this.formatMode = formatMode;
		//line 140 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		this.activeFormatFlagStack = activeFormatFlagStack;
	}
	
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 140 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.EReg e = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((haxe.root.EReg) (((java.lang.Object) (__fn_float1) )) )) : (((haxe.root.EReg) (__fn_dyn1) )) );
		//line 141 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		boolean escaped = ( e.matched(1) != null );
		//line 142 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if (escaped) 
		{
			//line 143 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			return e.matched(0);
		}
		
		//line 146 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		boolean open = ( e.matched(2) == null );
		//line 147 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		haxe.root.Array<java.lang.String> tags = haxe.lang.StringExt.split(e.matched(3), ",");
		//line 150 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		if ((  ! (open)  && ( tags.length == 1 ) )) 
		{
			//line 151 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			if (haxe.lang.Runtime.valEq(tags.__get(0), "")) 
			{
				//line 153 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				java.lang.String last = this.activeFormatFlagStack[0].__get(( this.activeFormatFlagStack[0].length - 1 ));
				//line 154 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				{
					//line 154 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					int i = this.activeFormatFlagStack[0].indexOf(last, null);
					//line 154 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					if (( i != -1 )) 
					{
						//line 154 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						int proceedingTags = ((int) (haxe.lang.Runtime.toInt(this.groupedProceedingTags[0].__get(i))) );
						//line 154 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						this.activeFormatFlagStack[0].spliceVoid(( i - proceedingTags ), ( proceedingTags + 1 ));
						//line 154 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						haxe.root.Array<java.lang.Object> __temp_expr3 = ((haxe.root.Array<java.lang.Object>) (((haxe.root.Array) (this.groupedProceedingTags[0].splice(( i - proceedingTags ), ( proceedingTags + 1 ))) )) );
					}
					
				}
				
			}
			else
			{
				//line 155 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				if (haxe.lang.Runtime.valEq(_Console.FormatFlag_Impl_.fromString(tags.__get(0)), haxe.lang.Runtime.toString("reset"))) 
				{
					//line 136 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					this.activeFormatFlagStack[0] = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
					//line 137 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					this.groupedProceedingTags[0] = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
				}
				else
				{
					//line 159 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					java.lang.String flag = _Console.FormatFlag_Impl_.fromString(tags.__get(0));
					//line 160 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					if (( flag != null )) 
					{
						//line 161 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						int i1 = this.activeFormatFlagStack[0].indexOf(flag, null);
						//line 161 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (( i1 != -1 )) 
						{
							//line 161 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							int proceedingTags1 = ((int) (haxe.lang.Runtime.toInt(this.groupedProceedingTags[0].__get(i1))) );
							//line 161 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							this.activeFormatFlagStack[0].spliceVoid(( i1 - proceedingTags1 ), ( proceedingTags1 + 1 ));
							//line 161 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							haxe.root.Array<java.lang.Object> __temp_expr2 = ((haxe.root.Array<java.lang.Object>) (((haxe.root.Array) (this.groupedProceedingTags[0].splice(( i1 - proceedingTags1 ), ( proceedingTags1 + 1 ))) )) );
						}
						
					}
					
				}
				
			}
			
		}
		else
		{
			//line 165 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			int proceedingTags2 = 0;
			//line 166 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
			{
				//line 166 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				int _g = 0;
				//line 166 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				while (( _g < tags.length ))
				{
					//line 166 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					java.lang.String tag = tags.__get(_g);
					//line 166 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					 ++ _g;
					//line 167 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					java.lang.String flag1 = _Console.FormatFlag_Impl_.fromString(tag);
					//line 168 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					if (( flag1 == null )) 
					{
						//line 168 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						return e.matched(0);
					}
					
					//line 169 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					if (open) 
					{
						//line 170 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						{
							//line 170 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							this.activeFormatFlagStack[0].push(flag1);
							//line 170 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							this.groupedProceedingTags[0].push(proceedingTags2);
						}
						
						//line 171 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						 ++ proceedingTags2;
					}
					else
					{
						//line 173 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						int i2 = this.activeFormatFlagStack[0].indexOf(flag1, null);
						//line 173 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						if (( i2 != -1 )) 
						{
							//line 173 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							int proceedingTags3 = ((int) (haxe.lang.Runtime.toInt(this.groupedProceedingTags[0].__get(i2))) );
							//line 173 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							this.activeFormatFlagStack[0].spliceVoid(( i2 - proceedingTags3 ), ( proceedingTags3 + 1 ));
							//line 173 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							haxe.root.Array<java.lang.Object> __temp_expr1 = ((haxe.root.Array<java.lang.Object>) (((haxe.root.Array) (this.groupedProceedingTags[0].splice(( i2 - proceedingTags3 ), ( proceedingTags3 + 1 ))) )) );
						}
						
					}
					
				}
				
			}
			
		}
		
		//line 179 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		switch (this.formatMode)
		{
			case 0:
			{
				//line 182 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				if (open) 
				{
					//line 183 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					if (( this.activeFormatFlagStack[0].length > 0 )) 
					{
						//line 184 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						int lastFlagCount = ( ((int) (haxe.lang.Runtime.toInt(this.groupedProceedingTags[0].__get(( this.groupedProceedingTags[0].length - 1 )))) ) + 1 );
						//line 185 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						java.lang.String asciiFormatString = "";
						//line 186 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						{
							//line 186 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							int _g1 = 0;
							//line 186 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							int _g2 = lastFlagCount;
							//line 186 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							while (( _g1 < _g2 ))
							{
								//line 186 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
								int i3 = _g1++;
								//line 187 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
								int idx = ( ( this.groupedProceedingTags[0].length - 1 ) - i3 );
								//line 188 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
								asciiFormatString += haxe.root.Console.getAsciiFormat(this.activeFormatFlagStack[0].__get(idx));
							}
							
						}
						
						//line 190 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						return asciiFormatString;
					}
					else
					{
						//line 192 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						return "";
					}
					
				}
				else
				{
					//line 196 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					java.lang.String result = haxe.root.Console.getAsciiFormat(haxe.lang.Runtime.toString("reset"));
					//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					haxe.root.Array<java.lang.String> ret = ((haxe.root.Array<java.lang.String>) (((haxe.root.Array) (haxe.root.Array.alloc(((int) (this.activeFormatFlagStack[0].length) ))) )) );
					//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					{
						//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						int _g3 = 0;
						//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						int _g4 = this.activeFormatFlagStack[0].length;
						//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						while (( _g3 < _g4 ))
						{
							//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							int i4 = _g3++;
							//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							ret.__set(i4, haxe.root.Console.getAsciiFormat(this.activeFormatFlagStack[0].__get(i4)));
						}
						
					}
					
					//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					haxe.root.Array<java.lang.String> _this = ret;
					//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					haxe.root.Array<java.lang.String> ret1 = new haxe.root.Array<java.lang.String>(new java.lang.String[]{});
					//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					{
						//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						int _g5 = 0;
						//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						int _g6 = _this.length;
						//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
						while (( _g5 < _g6 ))
						{
							//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							int i5 = _g5++;
							//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							java.lang.String elt = _this.__get(i5);
							//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
							if (( elt != null )) 
							{
								//line 197 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
								ret1.push(elt);
							}
							
						}
						
					}
					
					//line 196 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
					return ( result + ret1.join("") );
				}
				
			}
			
			
			case 2:
			{
				//line 211 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
				return "";
			}
			
			
		}
		
		//line 140 "C:\\HaxeToolkit\\haxe\\lib\\Console,hx\\0,3,0\\Console.hx"
		return null;
	}
	
	
	public haxe.root.Array<java.lang.Object>[] groupedProceedingTags;
	
	public int formatMode;
	
	public haxe.root.Array<java.lang.String>[] activeFormatFlagStack;
	
}


