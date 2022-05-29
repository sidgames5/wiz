
#pragma warning disable 109, 114, 219, 429, 168, 162
namespace sys {
	public class FileSystem : global::haxe.lang.HxObject {
		
		public FileSystem(global::haxe.lang.EmptyObject empty) {
		}
		
		
		public FileSystem() {
			global::sys.FileSystem.__hx_ctor_sys_FileSystem(this);
		}
		
		
		protected static void __hx_ctor_sys_FileSystem(global::sys.FileSystem __hx_this) {
		}
		
		
		public static string fullPath(string relPath) {
			return ( new global::System.IO.FileInfo(relPath) as global::System.IO.FileSystemInfo ).FullName;
		}
		
		
	}
}


