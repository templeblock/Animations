// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha__Assets_BlobList
#include <kha/_Assets/BlobList.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <kha/internal/BytesBlob.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_89b6f8aff09b9782_198_new,"kha._Assets.BlobList","new",0xb2850123,"kha._Assets.BlobList.new","kha/internal/AssetsBuilder.hx",198,0x6901246d)
HX_LOCAL_STACK_FRAME(_hx_pos_37d7e3a43e386237_40_get,"kha._Assets.BlobList","get",0xb27fb159,"kha._Assets.BlobList.get","kha/Assets.hx",40,0x66f27110)
namespace kha{
namespace _Assets{

void BlobList_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_89b6f8aff09b9782_198_new)
HXDLIN( 198)		this->names = ::Array_obj< ::String >::__new(0);
            	}

Dynamic BlobList_obj::__CreateEmpty() { return new BlobList_obj; }

void *BlobList_obj::_hx_vtable = 0;

Dynamic BlobList_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BlobList_obj > _hx_result = new BlobList_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BlobList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3d5a6b99;
}

 ::kha::internal::BytesBlob BlobList_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_37d7e3a43e386237_40_get)
HXDLIN(  40)		return ( ( ::kha::internal::BytesBlob)(::Reflect_obj::field(hx::ObjectPtr<OBJ_>(this),name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(BlobList_obj,get,return )


hx::ObjectPtr< BlobList_obj > BlobList_obj::__new() {
	hx::ObjectPtr< BlobList_obj > __this = new BlobList_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BlobList_obj > BlobList_obj::__alloc(hx::Ctx *_hx_ctx) {
	BlobList_obj *__this = (BlobList_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BlobList_obj), true, "kha._Assets.BlobList"));
	*(void **)__this = BlobList_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BlobList_obj::BlobList_obj()
{
}

void BlobList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlobList);
	HX_MARK_MEMBER_NAME(names,"names");
	HX_MARK_END_CLASS();
}

void BlobList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(names,"names");
}

hx::Val BlobList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { return hx::Val( names ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BlobList_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"names") ) { names=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlobList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("names","\xc8","\x8f","\x84","\x96"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BlobList_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(BlobList_obj,names),HX_HCSTRING("names","\xc8","\x8f","\x84","\x96")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BlobList_obj_sStaticStorageInfo = 0;
#endif

static ::String BlobList_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("names","\xc8","\x8f","\x84","\x96"),
	::String(null()) };

static void BlobList_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlobList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BlobList_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlobList_obj::__mClass,"__mClass");
};

#endif

hx::Class BlobList_obj::__mClass;

void BlobList_obj::__register()
{
	hx::Object *dummy = new BlobList_obj;
	BlobList_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha._Assets.BlobList","\xb1","\x33","\xc7","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BlobList_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BlobList_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BlobList_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BlobList_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlobList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlobList_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace _Assets
