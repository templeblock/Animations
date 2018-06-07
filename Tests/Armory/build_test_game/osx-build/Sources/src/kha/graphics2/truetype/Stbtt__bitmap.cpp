// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__bitmap
#include <kha/graphics2/truetype/Stbtt__bitmap.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <kha/internal/BytesBlob.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0fcfeda88ca264b4_147_new,"kha.graphics2.truetype.Stbtt__bitmap","new",0xba3beeed,"kha.graphics2.truetype.Stbtt__bitmap.new","kha/graphics2/truetype/StbTruetype.hx",147,0x5d9e0de9)
namespace kha{
namespace graphics2{
namespace truetype{

void Stbtt__bitmap_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0fcfeda88ca264b4_147_new)
            	}

Dynamic Stbtt__bitmap_obj::__CreateEmpty() { return new Stbtt__bitmap_obj; }

void *Stbtt__bitmap_obj::_hx_vtable = 0;

Dynamic Stbtt__bitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Stbtt__bitmap_obj > _hx_result = new Stbtt__bitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Stbtt__bitmap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4336e7c5;
}


Stbtt__bitmap_obj::Stbtt__bitmap_obj()
{
}

void Stbtt__bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stbtt__bitmap);
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(h,"h");
	HX_MARK_MEMBER_NAME(stride,"stride");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(pixels_offset,"pixels_offset");
	HX_MARK_END_CLASS();
}

void Stbtt__bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(h,"h");
	HX_VISIT_MEMBER_NAME(stride,"stride");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(pixels_offset,"pixels_offset");
}

hx::Val Stbtt__bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return hx::Val( w ); }
		if (HX_FIELD_EQ(inName,"h") ) { return hx::Val( h ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { return hx::Val( stride ); }
		if (HX_FIELD_EQ(inName,"pixels") ) { return hx::Val( pixels ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixels_offset") ) { return hx::Val( pixels_offset ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Stbtt__bitmap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stride") ) { stride=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast<  ::kha::internal::BytesBlob >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixels_offset") ) { pixels_offset=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stbtt__bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("h","\x68","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("stride","\x19","\x20","\x30","\x11"));
	outFields->push(HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"));
	outFields->push(HX_HCSTRING("pixels_offset","\xa5","\xa9","\x96","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Stbtt__bitmap_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stbtt__bitmap_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Stbtt__bitmap_obj,h),HX_HCSTRING("h","\x68","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Stbtt__bitmap_obj,stride),HX_HCSTRING("stride","\x19","\x20","\x30","\x11")},
	{hx::fsObject /*::kha::internal::BytesBlob*/ ,(int)offsetof(Stbtt__bitmap_obj,pixels),HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c")},
	{hx::fsInt,(int)offsetof(Stbtt__bitmap_obj,pixels_offset),HX_HCSTRING("pixels_offset","\xa5","\xa9","\x96","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Stbtt__bitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String Stbtt__bitmap_obj_sMemberFields[] = {
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("h","\x68","\x00","\x00","\x00"),
	HX_HCSTRING("stride","\x19","\x20","\x30","\x11"),
	HX_HCSTRING("pixels","\x2d","\xef","\xa9","\x8c"),
	HX_HCSTRING("pixels_offset","\xa5","\xa9","\x96","\x3f"),
	::String(null()) };

static void Stbtt__bitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stbtt__bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Stbtt__bitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stbtt__bitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class Stbtt__bitmap_obj::__mClass;

void Stbtt__bitmap_obj::__register()
{
	hx::Object *dummy = new Stbtt__bitmap_obj;
	Stbtt__bitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.graphics2.truetype.Stbtt__bitmap","\x7b","\xf4","\xac","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Stbtt__bitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Stbtt__bitmap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stbtt__bitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Stbtt__bitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Stbtt__bitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Stbtt__bitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype
