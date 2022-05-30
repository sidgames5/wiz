#include <hxcpp.h>

#ifndef INCLUDED_tink_chunk_ChunkCursor
#include <tink/chunk/ChunkCursor.h>
#endif
#ifndef INCLUDED_tink_core_Outcome
#include <tink/core/Outcome.h>
#endif
#ifndef INCLUDED_tink_io_ParseStep
#include <tink/io/ParseStep.h>
#endif
#ifndef INCLUDED_tink_io_StreamParserObject
#include <tink/io/StreamParserObject.h>
#endif

namespace tink{
namespace io{


static ::String StreamParserObject_obj_sMemberFields[] = {
	HX_("progress",ad,f7,2a,86),
	HX_("eof",bc,04,4d,00),
	::String(null()) };

::hx::Class StreamParserObject_obj::__mClass;

void StreamParserObject_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tink.io.StreamParserObject",ca,44,8d,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StreamParserObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x048ef116 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tink
} // end namespace io
