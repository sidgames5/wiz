#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_tink_chunk_ByteChunk
#include <tink/chunk/ByteChunk.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkBase
#include <tink/chunk/ChunkBase.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkCursor
#include <tink/chunk/ChunkCursor.h>
#endif
#ifndef INCLUDED_tink_chunk_ChunkObject
#include <tink/chunk/ChunkObject.h>
#endif

namespace tink{
namespace chunk{


static ::String ChunkObject_obj_sMemberFields[] = {
	HX_("getByte",be,ce,a5,13),
	HX_("getCursor",0c,18,3f,bb),
	HX_("flatten",c4,ab,fb,e6),
	HX_("getLength",1c,1e,5e,1b),
	HX_("slice",52,c4,c7,7e),
	HX_("toString",ac,d0,6e,38),
	HX_("toBytes",f0,54,1c,8a),
	HX_("blitTo",10,b9,ff,a3),
	::String(null()) };

::hx::Class ChunkObject_obj::__mClass;

void ChunkObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.chunk.ChunkObject",ef,26,66,81);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ChunkObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x027c3451 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace chunk
