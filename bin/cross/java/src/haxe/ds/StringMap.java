package haxe.ds;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class StringMap<T> extends haxe.lang.HxObject implements haxe.IMap<java.lang.String, T>
{
	public StringMap(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public StringMap()
	{
		//line 62 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		haxe.ds.StringMap.__hx_ctor_haxe_ds_StringMap(((haxe.ds.StringMap<T>) (this) ));
		//line 62 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		java.lang.Object __temp_expr1 = ((java.lang.Object) (null) );
	}
	
	
	protected static <T_c> void __hx_ctor_haxe_ds_StringMap(haxe.ds.StringMap<T_c> __hx_this)
	{
		//line 64 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		__hx_this.cachedIndex = -1;
	}
	
	
	public int[] hashes;
	
	public java.lang.String[] _keys;
	
	public T[] vals;
	
	public int nBuckets;
	
	public int size;
	
	public int nOccupied;
	
	public int upperBound;
	
	public java.lang.String cachedKey;
	
	public int cachedIndex;
	
	public void set(java.lang.String key, T value)
	{
		//line 69 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		int x = 0;
		//line 69 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		int k = 0;
		//line 70 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		if (( this.nOccupied >= this.upperBound )) 
		{
			//line 71 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( this.nBuckets > ( this.size << 1 ) )) 
			{
				//line 72 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				this.resize(( this.nBuckets - 1 ));
			}
			else
			{
				//line 74 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				this.resize(( this.nBuckets + 2 ));
			}
			
		}
		
		//line 78 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		int[] hashes = this.hashes;
		//line 78 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		java.lang.String[] keys = this._keys;
		//line 78 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		int[] hashes1 = hashes;
		//line 79 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		{
			//line 80 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int mask = ( (( this.nBuckets == 0 )) ? (0) : (( this.nBuckets - 1 )) );
			//line 81 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			x = this.nBuckets;
			//line 81 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int site = x;
			//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int k1 = ((java.lang.String) (((java.lang.Object) (key) )) ).hashCode();
			//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			k1 = ( ( k1 + 2127912214 ) + (( k1 << 12 )) );
			//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			k1 = ( ( k1 ^ -949894596 ) ^ ( k1 >> 19 ) );
			//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			k1 = ( ( k1 + 374761393 ) + (( k1 << 5 )) );
			//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			k1 = ( ( k1 + (-744332180) ) ^ ( k1 << 9 ) );
			//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			k1 = ( ( k1 + (-42973499) ) + (( k1 << 3 )) );
			//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			k1 = ( ( k1 ^ -1252372727 ) ^ ( k1 >> 16 ) );
			//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int ret = k1;
			//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( (( ret & -2 )) == 0 )) 
			{
				//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				if (( ret == 0 )) 
				{
					//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					ret = 2;
				}
				else
				{
					//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					ret = -1;
				}
				
			}
			
			//line 82 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			k = ret;
			//line 83 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int i = ( k & mask );
			//line 83 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int nProbes = 0;
			//line 85 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int delKey = -1;
			//line 87 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( hashes1[i] == 0 )) 
			{
				//line 88 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				x = i;
			}
			else
			{
				//line 90 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				int last = i;
				//line 90 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				int flag = 0;
				//line 91 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				while (true)
				{
					//line 91 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					flag = hashes1[i];
					//line 91 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					if (( ( flag == 0 ) || ( ( flag == k ) && haxe.lang.Runtime.valEq(this._keys[i], key) ) )) 
					{
						//line 91 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					//line 92 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					if (( ( flag == 1 ) && ( delKey == -1 ) )) 
					{
						//line 93 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						delKey = i;
					}
					
					//line 95 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					i = ( ( i +  ++ nProbes ) & mask );
				}
				
				//line 103 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				if (( ( flag == 0 ) && ( delKey != -1 ) )) 
				{
					//line 104 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					x = delKey;
				}
				else
				{
					//line 106 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					x = i;
				}
				
			}
			
		}
		
		//line 117 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		int flag1 = hashes1[x];
		//line 118 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		if (( flag1 == 0 )) 
		{
			//line 119 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			keys[x] = key;
			//line 120 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			this.vals[x] = value;
			//line 121 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			hashes1[x] = k;
			//line 122 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			this.size++;
			//line 123 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			this.nOccupied++;
		}
		else
		{
			//line 124 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( flag1 == 1 )) 
			{
				//line 125 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				keys[x] = key;
				//line 126 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				this.vals[x] = value;
				//line 127 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				hashes1[x] = k;
				//line 128 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				this.size++;
			}
			else
			{
				//line 131 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				this.vals[x] = value;
			}
			
		}
		
		//line 135 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		this.cachedIndex = x;
		//line 136 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		this.cachedKey = key;
	}
	
	
	public int lookup(java.lang.String key)
	{
		//line 141 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		if (( this.nBuckets != 0 )) 
		{
			//line 142 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int[] hashes = this.hashes;
			//line 142 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			java.lang.String[] keys = this._keys;
			//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int mask = ( this.nBuckets - 1 );
			//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int k = ((java.lang.String) (((java.lang.Object) (key) )) ).hashCode();
			//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			k = ( ( k + 2127912214 ) + (( k << 12 )) );
			//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			k = ( ( k ^ -949894596 ) ^ ( k >> 19 ) );
			//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			k = ( ( k + 374761393 ) + (( k << 5 )) );
			//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			k = ( ( k + (-744332180) ) ^ ( k << 9 ) );
			//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			k = ( ( k + (-42973499) ) + (( k << 3 )) );
			//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			k = ( ( k ^ -1252372727 ) ^ ( k >> 16 ) );
			//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int ret = k;
			//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( (( ret & -2 )) == 0 )) 
			{
				//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				if (( ret == 0 )) 
				{
					//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					ret = 2;
				}
				else
				{
					//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					ret = -1;
				}
				
			}
			
			//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int hash = ret;
			//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int k1 = hash;
			//line 144 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int nProbes = 0;
			//line 145 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int i = ( k1 & mask );
			//line 146 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int last = i;
			//line 146 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int flag = 0;
			//line 148 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			while (true)
			{
				//line 148 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				flag = hashes[i];
				//line 148 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				if ( ! ((( ( flag != 0 ) && (( ( ( flag == 1 ) || ( flag != k1 ) ) ||  ! (haxe.lang.Runtime.valEq(keys[i], key))  )) ))) ) 
				{
					//line 148 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					break;
				}
				
				//line 149 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				i = ( ( i +  ++ nProbes ) & mask );
			}
			
			//line 162 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( (( flag & -2 )) == 0 )) 
			{
				//line 162 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				return -1;
			}
			else
			{
				//line 162 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				return i;
			}
			
		}
		
		//line 165 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		return -1;
	}
	
	
	public void resize(int newNBuckets)
	{
		//line 170 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		int[] newHash = null;
		//line 171 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		int j = 1;
		//line 172 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		{
			//line 173 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int x = newNBuckets;
			//line 173 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			 -- x;
			//line 173 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			x |= ( x >>> 1 );
			//line 173 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			x |= ( x >>> 2 );
			//line 173 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			x |= ( x >>> 4 );
			//line 173 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			x |= ( x >>> 8 );
			//line 173 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			x |= ( x >>> 16 );
			//line 173 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			 ++ x;
			//line 173 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			newNBuckets = x;
			//line 174 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( newNBuckets < 4 )) 
			{
				//line 175 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				newNBuckets = 4;
			}
			
			//line 176 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( this.size >= ( ( newNBuckets * 0.77 ) + 0.5 ) )) 
			{
				//line 178 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				j = 0;
			}
			else
			{
				//line 180 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				int nfSize = newNBuckets;
				//line 181 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				newHash = new int[nfSize];
				//line 182 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				if (( this.nBuckets < newNBuckets )) 
				{
					//line 184 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					java.lang.String[] k = new java.lang.String[newNBuckets];
					//line 185 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					if (( this._keys != null )) 
					{
						//line 186 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						java.lang.System.arraycopy(((java.lang.Object) (this._keys) ), ((int) (0) ), ((java.lang.Object) (k) ), ((int) (0) ), ((int) (this.nBuckets) ));
					}
					
					//line 187 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					this._keys = k;
					//line 189 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					T[] v = ((T[]) (((java.lang.Object) (new java.lang.Object[newNBuckets]) )) );
					//line 190 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					if (( this.vals != null )) 
					{
						//line 191 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						java.lang.System.arraycopy(((java.lang.Object) (this.vals) ), ((int) (0) ), ((java.lang.Object) (v) ), ((int) (0) ), ((int) (this.nBuckets) ));
					}
					
					//line 192 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					this.vals = v;
				}
				
			}
			
		}
		
		//line 197 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		if (( j != 0 )) 
		{
			//line 200 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			this.cachedKey = null;
			//line 201 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			this.cachedIndex = -1;
			//line 204 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			j = -1;
			//line 205 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int nBuckets = this.nBuckets;
			//line 205 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			java.lang.String[] _keys = this._keys;
			//line 205 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			T[] vals = this.vals;
			//line 205 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int[] hashes = this.hashes;
			//line 210 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			int newMask = ( newNBuckets - 1 );
			//line 211 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			while ((  ++ j < nBuckets ))
			{
				//line 212 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				int k1 = hashes[j];
				//line 213 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				if (( (( k1 & -2 )) != 0 )) 
				{
					//line 214 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					java.lang.String key = _keys[j];
					//line 215 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					T val = vals[j];
					//line 217 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					_keys[j] = null;
					//line 218 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					vals[j] = null;
					//line 219 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					hashes[j] = 1;
					//line 220 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					while (true)
					{
						//line 222 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						int nProbes = 0;
						//line 223 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						int i = ( k1 & newMask );
						//line 225 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						while (( newHash[i] != 0 ))
						{
							//line 226 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							i = ( ( i +  ++ nProbes ) & newMask );
						}
						
						//line 229 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						newHash[i] = k1;
						//line 231 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						boolean tmp = false;
						//line 231 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (( i < nBuckets )) 
						{
							//line 231 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							k1 = hashes[i];
							//line 231 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							tmp = ( (( k1 & -2 )) != 0 );
						}
						else
						{
							//line 231 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							tmp = false;
						}
						
						//line 231 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (tmp) 
						{
							//line 233 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							{
								//line 234 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
								java.lang.String tmp1 = _keys[i];
								//line 235 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
								_keys[i] = key;
								//line 236 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
								key = tmp1;
							}
							
							//line 237 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							{
								//line 238 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
								T tmp2 = vals[i];
								//line 239 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
								vals[i] = val;
								//line 240 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
								val = tmp2;
							}
							
							//line 243 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							hashes[i] = 1;
						}
						else
						{
							//line 245 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							_keys[i] = key;
							//line 246 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							vals[i] = val;
							//line 247 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							break;
						}
						
					}
					
				}
				
			}
			
			//line 253 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( nBuckets > newNBuckets )) 
			{
				//line 255 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				{
					//line 256 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					java.lang.String[] k2 = new java.lang.String[newNBuckets];
					//line 257 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					java.lang.System.arraycopy(((java.lang.Object) (_keys) ), ((int) (0) ), ((java.lang.Object) (k2) ), ((int) (0) ), ((int) (newNBuckets) ));
					//line 258 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					this._keys = k2;
				}
				
				//line 259 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				{
					//line 260 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					T[] v1 = ((T[]) (((java.lang.Object) (new java.lang.Object[newNBuckets]) )) );
					//line 261 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					java.lang.System.arraycopy(((java.lang.Object) (vals) ), ((int) (0) ), ((java.lang.Object) (v1) ), ((int) (0) ), ((int) (newNBuckets) ));
					//line 262 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
					this.vals = v1;
				}
				
			}
			
			//line 266 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			this.hashes = newHash;
			//line 267 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			this.nBuckets = newNBuckets;
			//line 268 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			this.nOccupied = this.size;
			//line 269 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			this.upperBound = ((int) (( ( newNBuckets * 0.77 ) + .5 )) );
		}
		
	}
	
	
	public java.lang.Object get(java.lang.String key)
	{
		//line 274 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		int idx = -1;
		//line 276 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		boolean tmp = false;
		//line 276 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		if (haxe.lang.Runtime.valEq(this.cachedKey, key)) 
		{
			//line 276 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			idx = this.cachedIndex;
			//line 276 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			tmp = ( idx != -1 );
		}
		else
		{
			//line 276 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			tmp = false;
		}
		
		//line 276 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		if (tmp) 
		{
			//line 277 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			return this.vals[idx];
		}
		
		//line 280 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		idx = this.lookup(key);
		//line 281 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		if (( idx != -1 )) 
		{
			//line 283 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			this.cachedKey = key;
			//line 284 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			this.cachedIndex = idx;
			//line 286 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			return this.vals[idx];
		}
		
		//line 289 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		return null;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		{
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( field != null )) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				switch (field.hashCode())
				{
					case 1005083856:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("cachedIndex")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.cachedIndex = ((int) (value) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 325636987:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("nBuckets")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.nBuckets = ((int) (value) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -1690761732:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("upperBound")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.upperBound = ((int) (value) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 3530753:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("size")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.size = ((int) (value) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -394102484:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("nOccupied")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.nOccupied = ((int) (value) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		{
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( field != null )) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				switch (field.hashCode())
				{
					case 1005083856:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("cachedIndex")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.cachedIndex = ((int) (haxe.lang.Runtime.toInt(value)) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -1224424900:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("hashes")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.hashes = ((int[]) (value) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -553141795:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("cachedKey")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.cachedKey = haxe.lang.Runtime.toString(value);
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 91023059:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("_keys")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this._keys = ((java.lang.String[]) (value) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -1690761732:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("upperBound")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.upperBound = ((int) (haxe.lang.Runtime.toInt(value)) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 3612018:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("vals")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.vals = ((T[]) (value) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -394102484:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("nOccupied")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.nOccupied = ((int) (haxe.lang.Runtime.toInt(value)) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 325636987:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("nBuckets")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.nBuckets = ((int) (haxe.lang.Runtime.toInt(value)) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 3530753:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("size")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.size = ((int) (haxe.lang.Runtime.toInt(value)) );
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return value;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		{
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( field != null )) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				switch (field.hashCode())
				{
					case 102230:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("get")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "get")) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -1224424900:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("hashes")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return this.hashes;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -934437708:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("resize")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "resize")) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 91023059:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("_keys")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return this._keys;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -1097094790:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("lookup")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "lookup")) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 3612018:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("vals")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return this.vals;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 113762:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("set")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "set")) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 325636987:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("nBuckets")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return this.nBuckets;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 1005083856:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("cachedIndex")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return this.cachedIndex;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 3530753:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("size")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return this.size;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -553141795:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("cachedKey")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return this.cachedKey;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -394102484:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("nOccupied")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return this.nOccupied;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -1690761732:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("upperBound")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return this.upperBound;
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		{
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( field != null )) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				switch (field.hashCode())
				{
					case 1005083856:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("cachedIndex")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return ((double) (this.cachedIndex) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 325636987:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("nBuckets")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return ((double) (this.nBuckets) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -1690761732:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("upperBound")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return ((double) (this.upperBound) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 3530753:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("size")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return ((double) (this.size) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -394102484:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("nOccupied")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return ((double) (this.nOccupied) );
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, java.lang.Object[] dynargs)
	{
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		{
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			boolean __temp_executeDef1 = true;
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (( field != null )) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				switch (field.hashCode())
				{
					case 102230:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("get")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return this.get(haxe.lang.Runtime.toString(dynargs[0]));
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case 113762:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("set")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.set(haxe.lang.Runtime.toString(dynargs[0]), ((T) (dynargs[1]) ));
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -934437708:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("resize")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							this.resize(((int) (haxe.lang.Runtime.toInt(dynargs[0])) ));
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
					case -1097094790:
					{
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						if (field.equals("lookup")) 
						{
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							__temp_executeDef1 = false;
							//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
							return this.lookup(haxe.lang.Runtime.toString(dynargs[0]));
						}
						
						//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
			if (__temp_executeDef1) 
			{
				//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			
		}
		
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		return null;
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		baseArr.push("cachedIndex");
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		baseArr.push("cachedKey");
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		baseArr.push("upperBound");
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		baseArr.push("nOccupied");
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		baseArr.push("size");
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		baseArr.push("nBuckets");
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		baseArr.push("vals");
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		baseArr.push("_keys");
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		baseArr.push("hashes");
		//line 27 "C:\\HaxeToolkit\\haxe\\std\\java\\_std\\haxe\\ds\\StringMap.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


