// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_trait_internal_CameraController
#include <armory/trait/internal/CameraController.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6d87f58948ffd115_12_new,"armory.trait.internal.CameraController","new",0x978a8410,"armory.trait.internal.CameraController.new","armory/trait/internal/CameraController.hx",12,0x0ddb07c1)
namespace armory{
namespace trait{
namespace internal{

void CameraController_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6d87f58948ffd115_12_new)
HXDLIN(  12)		super::__construct();
            	}

Dynamic CameraController_obj::__CreateEmpty() { return new CameraController_obj; }

void *CameraController_obj::_hx_vtable = 0;

Dynamic CameraController_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CameraController_obj > _hx_result = new CameraController_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CameraController_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x501f380e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x501f380e;
	} else {
		return inClassId==(int)0x7b609ac2;
	}
}


hx::ObjectPtr< CameraController_obj > CameraController_obj::__new() {
	hx::ObjectPtr< CameraController_obj > __this = new CameraController_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< CameraController_obj > CameraController_obj::__alloc(hx::Ctx *_hx_ctx) {
	CameraController_obj *__this = (CameraController_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CameraController_obj), true, "armory.trait.internal.CameraController"));
	*(void **)__this = CameraController_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CameraController_obj::CameraController_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CameraController_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CameraController_obj_sStaticStorageInfo = 0;
#endif

static void CameraController_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CameraController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CameraController_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CameraController_obj::__mClass,"__mClass");
};

#endif

hx::Class CameraController_obj::__mClass;

void CameraController_obj::__register()
{
	hx::Object *dummy = new CameraController_obj;
	CameraController_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.internal.CameraController","\x1e","\x7c","\x5b","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CameraController_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CameraController_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CameraController_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CameraController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CameraController_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait
} // end namespace internal
