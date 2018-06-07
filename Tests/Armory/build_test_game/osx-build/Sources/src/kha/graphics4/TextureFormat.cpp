// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::TextureFormat TextureFormat_obj::A16;

::kha::graphics4::TextureFormat TextureFormat_obj::A32;

::kha::graphics4::TextureFormat TextureFormat_obj::DEPTH16;

::kha::graphics4::TextureFormat TextureFormat_obj::L8;

::kha::graphics4::TextureFormat TextureFormat_obj::RGBA128;

::kha::graphics4::TextureFormat TextureFormat_obj::RGBA32;

::kha::graphics4::TextureFormat TextureFormat_obj::RGBA64;

bool TextureFormat_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("A16",66,7d,31,00)) { outValue = TextureFormat_obj::A16; return true; }
	if (inName==HX_("A32",20,7f,31,00)) { outValue = TextureFormat_obj::A32; return true; }
	if (inName==HX_("DEPTH16",88,92,1e,ea)) { outValue = TextureFormat_obj::DEPTH16; return true; }
	if (inName==HX_("L8",6c,42,00,00)) { outValue = TextureFormat_obj::L8; return true; }
	if (inName==HX_("RGBA128",03,2a,c5,e0)) { outValue = TextureFormat_obj::RGBA128; return true; }
	if (inName==HX_("RGBA32",53,5a,88,d6)) { outValue = TextureFormat_obj::RGBA32; return true; }
	if (inName==HX_("RGBA64",f2,5c,88,d6)) { outValue = TextureFormat_obj::RGBA64; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TextureFormat_obj)

int TextureFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_("A16",66,7d,31,00)) return 6;
	if (inName==HX_("A32",20,7f,31,00)) return 5;
	if (inName==HX_("DEPTH16",88,92,1e,ea)) return 3;
	if (inName==HX_("L8",6c,42,00,00)) return 1;
	if (inName==HX_("RGBA128",03,2a,c5,e0)) return 2;
	if (inName==HX_("RGBA32",53,5a,88,d6)) return 0;
	if (inName==HX_("RGBA64",f2,5c,88,d6)) return 4;
	return super::__FindIndex(inName);
}

int TextureFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("A16",66,7d,31,00)) return 0;
	if (inName==HX_("A32",20,7f,31,00)) return 0;
	if (inName==HX_("DEPTH16",88,92,1e,ea)) return 0;
	if (inName==HX_("L8",6c,42,00,00)) return 0;
	if (inName==HX_("RGBA128",03,2a,c5,e0)) return 0;
	if (inName==HX_("RGBA32",53,5a,88,d6)) return 0;
	if (inName==HX_("RGBA64",f2,5c,88,d6)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val TextureFormat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("A16",66,7d,31,00)) return A16;
	if (inName==HX_("A32",20,7f,31,00)) return A32;
	if (inName==HX_("DEPTH16",88,92,1e,ea)) return DEPTH16;
	if (inName==HX_("L8",6c,42,00,00)) return L8;
	if (inName==HX_("RGBA128",03,2a,c5,e0)) return RGBA128;
	if (inName==HX_("RGBA32",53,5a,88,d6)) return RGBA32;
	if (inName==HX_("RGBA64",f2,5c,88,d6)) return RGBA64;
	return super::__Field(inName,inCallProp);
}

static ::String TextureFormat_obj_sStaticFields[] = {
	HX_("RGBA32",53,5a,88,d6),
	HX_("L8",6c,42,00,00),
	HX_("RGBA128",03,2a,c5,e0),
	HX_("DEPTH16",88,92,1e,ea),
	HX_("RGBA64",f2,5c,88,d6),
	HX_("A32",20,7f,31,00),
	HX_("A16",66,7d,31,00),
	::String(null())
};

static void TextureFormat_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureFormat_obj::A16,"A16");
	HX_MARK_MEMBER_NAME(TextureFormat_obj::A32,"A32");
	HX_MARK_MEMBER_NAME(TextureFormat_obj::DEPTH16,"DEPTH16");
	HX_MARK_MEMBER_NAME(TextureFormat_obj::L8,"L8");
	HX_MARK_MEMBER_NAME(TextureFormat_obj::RGBA128,"RGBA128");
	HX_MARK_MEMBER_NAME(TextureFormat_obj::RGBA32,"RGBA32");
	HX_MARK_MEMBER_NAME(TextureFormat_obj::RGBA64,"RGBA64");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextureFormat_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextureFormat_obj::A16,"A16");
	HX_VISIT_MEMBER_NAME(TextureFormat_obj::A32,"A32");
	HX_VISIT_MEMBER_NAME(TextureFormat_obj::DEPTH16,"DEPTH16");
	HX_VISIT_MEMBER_NAME(TextureFormat_obj::L8,"L8");
	HX_VISIT_MEMBER_NAME(TextureFormat_obj::RGBA128,"RGBA128");
	HX_VISIT_MEMBER_NAME(TextureFormat_obj::RGBA32,"RGBA32");
	HX_VISIT_MEMBER_NAME(TextureFormat_obj::RGBA64,"RGBA64");
};
#endif

hx::Class TextureFormat_obj::__mClass;

Dynamic __Create_TextureFormat_obj() { return new TextureFormat_obj; }

void TextureFormat_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("kha.graphics4.TextureFormat","\xe3","\xe1","\xe1","\x42"), hx::TCanCast< TextureFormat_obj >,TextureFormat_obj_sStaticFields,0,
	&__Create_TextureFormat_obj, &__Create,
	&super::__SGetClass(), &CreateTextureFormat_obj, TextureFormat_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , TextureFormat_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TextureFormat_obj::__GetStatic;
}

void TextureFormat_obj::__boot()
{
A16 = hx::CreateEnum< TextureFormat_obj >(HX_HCSTRING("A16","\x66","\x7d","\x31","\x00"),6,0);
A32 = hx::CreateEnum< TextureFormat_obj >(HX_HCSTRING("A32","\x20","\x7f","\x31","\x00"),5,0);
DEPTH16 = hx::CreateEnum< TextureFormat_obj >(HX_HCSTRING("DEPTH16","\x88","\x92","\x1e","\xea"),3,0);
L8 = hx::CreateEnum< TextureFormat_obj >(HX_HCSTRING("L8","\x6c","\x42","\x00","\x00"),1,0);
RGBA128 = hx::CreateEnum< TextureFormat_obj >(HX_HCSTRING("RGBA128","\x03","\x2a","\xc5","\xe0"),2,0);
RGBA32 = hx::CreateEnum< TextureFormat_obj >(HX_HCSTRING("RGBA32","\x53","\x5a","\x88","\xd6"),0,0);
RGBA64 = hx::CreateEnum< TextureFormat_obj >(HX_HCSTRING("RGBA64","\xf2","\x5c","\x88","\xd6"),4,0);
}


} // end namespace kha
} // end namespace graphics4
