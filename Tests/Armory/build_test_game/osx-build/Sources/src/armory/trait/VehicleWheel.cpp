// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_trait_VehicleWheel
#include <armory/trait/VehicleWheel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f92921caf2f4112a_245_new,"armory.trait.VehicleWheel","new",0xe324b355,"armory.trait.VehicleWheel.new","armory/trait/VehicleBody.hx",245,0xc04571e6)
namespace armory{
namespace trait{

void VehicleWheel_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f92921caf2f4112a_245_new)
            	}

Dynamic VehicleWheel_obj::__CreateEmpty() { return new VehicleWheel_obj; }

void *VehicleWheel_obj::_hx_vtable = 0;

Dynamic VehicleWheel_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VehicleWheel_obj > _hx_result = new VehicleWheel_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VehicleWheel_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6017287f;
}


VehicleWheel_obj::VehicleWheel_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *VehicleWheel_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *VehicleWheel_obj_sStaticStorageInfo = 0;
#endif

static void VehicleWheel_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VehicleWheel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VehicleWheel_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VehicleWheel_obj::__mClass,"__mClass");
};

#endif

hx::Class VehicleWheel_obj::__mClass;

void VehicleWheel_obj::__register()
{
	hx::Object *dummy = new VehicleWheel_obj;
	VehicleWheel_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.VehicleWheel","\xe3","\x64","\xf1","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VehicleWheel_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< VehicleWheel_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VehicleWheel_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VehicleWheel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VehicleWheel_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait
