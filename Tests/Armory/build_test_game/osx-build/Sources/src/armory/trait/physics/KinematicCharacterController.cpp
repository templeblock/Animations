// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_trait_physics_KinematicCharacterController
#include <armory/trait/physics/KinematicCharacterController.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b3325a7a7f85f699_5_new,"armory.trait.physics.KinematicCharacterController","new",0xd1668bad,"armory.trait.physics.KinematicCharacterController.new","armory/trait/physics/KinematicCharacterController.hx",5,0xba245d00)
namespace armory{
namespace trait{
namespace physics{

void KinematicCharacterController_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b3325a7a7f85f699_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic KinematicCharacterController_obj::__CreateEmpty() { return new KinematicCharacterController_obj; }

void *KinematicCharacterController_obj::_hx_vtable = 0;

Dynamic KinematicCharacterController_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< KinematicCharacterController_obj > _hx_result = new KinematicCharacterController_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool KinematicCharacterController_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2bda233f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2bda233f;
	} else {
		return inClassId==(int)0x7b609ac2;
	}
}


hx::ObjectPtr< KinematicCharacterController_obj > KinematicCharacterController_obj::__new() {
	hx::ObjectPtr< KinematicCharacterController_obj > __this = new KinematicCharacterController_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< KinematicCharacterController_obj > KinematicCharacterController_obj::__alloc(hx::Ctx *_hx_ctx) {
	KinematicCharacterController_obj *__this = (KinematicCharacterController_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(KinematicCharacterController_obj), true, "armory.trait.physics.KinematicCharacterController"));
	*(void **)__this = KinematicCharacterController_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

KinematicCharacterController_obj::KinematicCharacterController_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *KinematicCharacterController_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *KinematicCharacterController_obj_sStaticStorageInfo = 0;
#endif

static void KinematicCharacterController_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KinematicCharacterController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void KinematicCharacterController_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KinematicCharacterController_obj::__mClass,"__mClass");
};

#endif

hx::Class KinematicCharacterController_obj::__mClass;

void KinematicCharacterController_obj::__register()
{
	hx::Object *dummy = new KinematicCharacterController_obj;
	KinematicCharacterController_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.physics.KinematicCharacterController","\x3b","\x31","\x9a","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = KinematicCharacterController_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< KinematicCharacterController_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = KinematicCharacterController_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KinematicCharacterController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KinematicCharacterController_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait
} // end namespace physics
