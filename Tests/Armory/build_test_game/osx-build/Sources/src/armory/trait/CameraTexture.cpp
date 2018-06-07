// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_trait_CameraTexture
#include <armory/trait/CameraTexture.h>
#endif
#ifndef INCLUDED_iron_Scene
#include <iron/Scene.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_data_CameraData
#include <iron/data/CameraData.h>
#endif
#ifndef INCLUDED_iron_data_Data
#include <iron/data/Data.h>
#endif
#ifndef INCLUDED_iron_data_MaterialContext
#include <iron/data/MaterialContext.h>
#endif
#ifndef INCLUDED_iron_data_MaterialData
#include <iron/data/MaterialData.h>
#endif
#ifndef INCLUDED_iron_object_CameraObject
#include <iron/object/CameraObject.h>
#endif
#ifndef INCLUDED_iron_object_MeshObject
#include <iron/object/MeshObject.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Image
#include <kha/Image.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8d20515ebee73272_10_new,"armory.trait.CameraTexture","new",0x27f8bc94,"armory.trait.CameraTexture.new","armory/trait/CameraTexture.hx",10,0x96458c1e)
HX_LOCAL_STACK_FRAME(_hx_pos_8d20515ebee73272_17_init,"armory.trait.CameraTexture","init",0xce64fc5c,"armory.trait.CameraTexture.init","armory/trait/CameraTexture.hx",17,0x96458c1e)
namespace armory{
namespace trait{

void CameraTexture_obj::__construct(::String cameraName){
            	HX_STACKFRAME(&_hx_pos_8d20515ebee73272_10_new)
HXLINE(  11)		super::__construct();
HXLINE(  13)		this->cameraName = cameraName;
HXLINE(  14)		::iron::Scene_obj::active->notifyOnInit(this->init_dyn());
            	}

Dynamic CameraTexture_obj::__CreateEmpty() { return new CameraTexture_obj; }

void *CameraTexture_obj::_hx_vtable = 0;

Dynamic CameraTexture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CameraTexture_obj > _hx_result = new CameraTexture_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CameraTexture_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x007f8786) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x007f8786;
	} else {
		return inClassId==(int)0x7b609ac2;
	}
}

void CameraTexture_obj::init(){
            	HX_STACKFRAME(&_hx_pos_8d20515ebee73272_17_init)
HXLINE(  18)		 ::kha::Image image = ::iron::Scene_obj::active->getCamera(this->cameraName)->data->renderTarget;
HXLINE(  20)		 ::iron::object::MeshObject o = hx::TCast<  ::iron::object::MeshObject >::cast(this->object);
HXLINE(  21)		( ( ::iron::data::MaterialData)(_hx_array_unsafe_get(o->materials,(int)0)) )->contexts->__get((int)0).StaticCast<  ::iron::data::MaterialContext >()->textures->__unsafe_set((int)0,image);
            	}


HX_DEFINE_DYNAMIC_FUNC0(CameraTexture_obj,init,(void))


hx::ObjectPtr< CameraTexture_obj > CameraTexture_obj::__new(::String cameraName) {
	hx::ObjectPtr< CameraTexture_obj > __this = new CameraTexture_obj();
	__this->__construct(cameraName);
	return __this;
}

hx::ObjectPtr< CameraTexture_obj > CameraTexture_obj::__alloc(hx::Ctx *_hx_ctx,::String cameraName) {
	CameraTexture_obj *__this = (CameraTexture_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CameraTexture_obj), true, "armory.trait.CameraTexture"));
	*(void **)__this = CameraTexture_obj::_hx_vtable;
	__this->__construct(cameraName);
	return __this;
}

CameraTexture_obj::CameraTexture_obj()
{
}

void CameraTexture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CameraTexture);
	HX_MARK_MEMBER_NAME(cameraName,"cameraName");
	 ::iron::Trait_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CameraTexture_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cameraName,"cameraName");
	 ::iron::Trait_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CameraTexture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cameraName") ) { return hx::Val( cameraName ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CameraTexture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"cameraName") ) { cameraName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CameraTexture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cameraName","\x90","\x9b","\x1d","\xaf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CameraTexture_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(CameraTexture_obj,cameraName),HX_HCSTRING("cameraName","\x90","\x9b","\x1d","\xaf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CameraTexture_obj_sStaticStorageInfo = 0;
#endif

static ::String CameraTexture_obj_sMemberFields[] = {
	HX_HCSTRING("cameraName","\x90","\x9b","\x1d","\xaf"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	::String(null()) };

static void CameraTexture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraTexture_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CameraTexture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraTexture_obj::__mClass,"__mClass");
};

#endif

hx::Class CameraTexture_obj::__mClass;

void CameraTexture_obj::__register()
{
	hx::Object *dummy = new CameraTexture_obj;
	CameraTexture_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.CameraTexture","\xa2","\x22","\x9a","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CameraTexture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CameraTexture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CameraTexture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CameraTexture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CameraTexture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CameraTexture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait
