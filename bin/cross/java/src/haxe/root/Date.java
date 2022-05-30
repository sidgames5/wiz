package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Date extends haxe.lang.HxObject
{
	public Date(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Date(int year, int month, int day, int hour, int min, int sec)
	{
		//line 34 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		haxe.root.Date.__hx_ctor__Date(this, year, month, day, hour, min, sec);
	}
	
	
	protected static void __hx_ctor__Date(haxe.root.Date __hx_this, int year, int month, int day, int hour, int min, int sec)
	{
		//line 35 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		__hx_this.date = new java.util.GregorianCalendar(((int) (year) ), ((int) (month) ), ((int) (day) ), ((int) (hour) ), ((int) (min) ), ((int) (sec) ));
		//line 36 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		__hx_this.dateUTC = new java.util.GregorianCalendar(((java.util.TimeZone) (java.util.TimeZone.getTimeZone(haxe.lang.Runtime.toString("UTC"))) ));
		//line 37 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		__hx_this.dateUTC.setTimeInMillis(((long) (__hx_this.date.getTimeInMillis()) ));
	}
	
	
	public static haxe.root.Date now()
	{
		//line 117 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		haxe.root.Date d = new haxe.root.Date(((int) (0) ), ((int) (0) ), ((int) (0) ), ((int) (0) ), ((int) (0) ), ((int) (0) ));
		//line 118 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		d.date = java.util.Calendar.getInstance();
		//line 119 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		d.dateUTC.setTimeInMillis(((long) (d.date.getTimeInMillis()) ));
		//line 120 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		return d;
	}
	
	
	public java.util.Calendar date;
	
	public java.util.Calendar dateUTC;
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		{
			//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
			boolean __temp_executeDef1 = true;
			//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
			if (( field != null )) 
			{
				//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				switch (field.hashCode())
				{
					case 1443304214:
					{
						//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						if (field.equals("dateUTC")) 
						{
							//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							__temp_executeDef1 = false;
							//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							this.dateUTC = ((java.util.Calendar) (value) );
							//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							return value;
						}
						
						//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						break;
					}
					
					
					case 3076014:
					{
						//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						if (field.equals("date")) 
						{
							//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							__temp_executeDef1 = false;
							//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							this.date = ((java.util.Calendar) (value) );
							//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							return value;
						}
						
						//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
			if (__temp_executeDef1) 
			{
				//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		{
			//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
			boolean __temp_executeDef1 = true;
			//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
			if (( field != null )) 
			{
				//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				switch (field.hashCode())
				{
					case 1443304214:
					{
						//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						if (field.equals("dateUTC")) 
						{
							//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							__temp_executeDef1 = false;
							//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							return this.dateUTC;
						}
						
						//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						break;
					}
					
					
					case 3076014:
					{
						//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						if (field.equals("date")) 
						{
							//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							__temp_executeDef1 = false;
							//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							return this.date;
						}
						
						//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
			if (__temp_executeDef1) 
			{
				//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		baseArr.push("dateUTC");
		//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		baseArr.push("date");
		//line 30 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


