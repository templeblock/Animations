// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_kha_math_FastMatrix4
#include <kha/math/FastMatrix4.h>
#endif
#ifndef INCLUDED_kha_vr_SensorState
#include <kha/vr/SensorState.h>
#endif
#ifndef INCLUDED_kha_vr_TimeWarpParms
#include <kha/vr/TimeWarpParms.h>
#endif
#ifndef INCLUDED_kha_vr_VrInterface
#include <kha/vr/VrInterface.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_762cff4ae71864db_75_new,"kha.vr.VrInterface","new",0x7eec7f07,"kha.vr.VrInterface.new","kha/vr/VrInterface.hx",75,0x16260ce9)
HX_LOCAL_STACK_FRAME(_hx_pos_762cff4ae71864db_11_GetSensorState,"kha.vr.VrInterface","GetSensorState",0x5524dd5a,"kha.vr.VrInterface.GetSensorState","kha/vr/VrInterface.hx",11,0x16260ce9)
HX_LOCAL_STACK_FRAME(_hx_pos_762cff4ae71864db_16_GetPredictedSensorState,"kha.vr.VrInterface","GetPredictedSensorState",0x54937c5c,"kha.vr.VrInterface.GetPredictedSensorState","kha/vr/VrInterface.hx",16,0x16260ce9)
HX_LOCAL_STACK_FRAME(_hx_pos_762cff4ae71864db_21_WarpSwapBlack,"kha.vr.VrInterface","WarpSwapBlack",0xd89b500b,"kha.vr.VrInterface.WarpSwapBlack","kha/vr/VrInterface.hx",21,0x16260ce9)
HX_LOCAL_STACK_FRAME(_hx_pos_762cff4ae71864db_26_WarpSwapLoadingIcon,"kha.vr.VrInterface","WarpSwapLoadingIcon",0xe70e0b61,"kha.vr.VrInterface.WarpSwapLoadingIcon","kha/vr/VrInterface.hx",26,0x16260ce9)
HX_LOCAL_STACK_FRAME(_hx_pos_762cff4ae71864db_31_WarpSwap,"kha.vr.VrInterface","WarpSwap",0xf3580d14,"kha.vr.VrInterface.WarpSwap","kha/vr/VrInterface.hx",31,0x16260ce9)
HX_LOCAL_STACK_FRAME(_hx_pos_762cff4ae71864db_36_IsPresenting,"kha.vr.VrInterface","IsPresenting",0xeae3d9ea,"kha.vr.VrInterface.IsPresenting","kha/vr/VrInterface.hx",36,0x16260ce9)
HX_LOCAL_STACK_FRAME(_hx_pos_762cff4ae71864db_41_IsVrEnabled,"kha.vr.VrInterface","IsVrEnabled",0x4964e0e2,"kha.vr.VrInterface.IsVrEnabled","kha/vr/VrInterface.hx",41,0x16260ce9)
HX_LOCAL_STACK_FRAME(_hx_pos_762cff4ae71864db_47_GetTimeInSeconds,"kha.vr.VrInterface","GetTimeInSeconds",0xc5741df0,"kha.vr.VrInterface.GetTimeInSeconds","kha/vr/VrInterface.hx",47,0x16260ce9)
HX_LOCAL_STACK_FRAME(_hx_pos_762cff4ae71864db_52_GetProjectionMatrix,"kha.vr.VrInterface","GetProjectionMatrix",0x3da2156d,"kha.vr.VrInterface.GetProjectionMatrix","kha/vr/VrInterface.hx",52,0x16260ce9)
HX_LOCAL_STACK_FRAME(_hx_pos_762cff4ae71864db_57_GetViewMatrix,"kha.vr.VrInterface","GetViewMatrix",0x8c0e0803,"kha.vr.VrInterface.GetViewMatrix","kha/vr/VrInterface.hx",57,0x16260ce9)
HX_LOCAL_STACK_FRAME(_hx_pos_762cff4ae71864db_62_onVRRequestPresent,"kha.vr.VrInterface","onVRRequestPresent",0x971ee020,"kha.vr.VrInterface.onVRRequestPresent","kha/vr/VrInterface.hx",62,0x16260ce9)
HX_LOCAL_STACK_FRAME(_hx_pos_762cff4ae71864db_67_onVRExitPresent,"kha.vr.VrInterface","onVRExitPresent",0x6bef2e49,"kha.vr.VrInterface.onVRExitPresent","kha/vr/VrInterface.hx",67,0x16260ce9)
HX_LOCAL_STACK_FRAME(_hx_pos_762cff4ae71864db_72_onResetPose,"kha.vr.VrInterface","onResetPose",0x39fd9e48,"kha.vr.VrInterface.onResetPose","kha/vr/VrInterface.hx",72,0x16260ce9)
namespace kha{
namespace vr{

void VrInterface_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_75_new)
            	}

Dynamic VrInterface_obj::__CreateEmpty() { return new VrInterface_obj; }

void *VrInterface_obj::_hx_vtable = 0;

Dynamic VrInterface_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VrInterface_obj > _hx_result = new VrInterface_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VrInterface_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7519f3dd;
}

 ::kha::vr::SensorState VrInterface_obj::GetSensorState(){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_11_GetSensorState)
HXDLIN(  11)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(VrInterface_obj,GetSensorState,return )

 ::kha::vr::SensorState VrInterface_obj::GetPredictedSensorState(Float time){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_16_GetPredictedSensorState)
HXDLIN(  16)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(VrInterface_obj,GetPredictedSensorState,return )

void VrInterface_obj::WarpSwapBlack(){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_21_WarpSwapBlack)
HXDLIN(  21)		return;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VrInterface_obj,WarpSwapBlack,(void))

void VrInterface_obj::WarpSwapLoadingIcon(){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_26_WarpSwapLoadingIcon)
HXDLIN(  26)		return;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VrInterface_obj,WarpSwapLoadingIcon,(void))

void VrInterface_obj::WarpSwap( ::kha::vr::TimeWarpParms parms){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_31_WarpSwap)
HXDLIN(  31)		return;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VrInterface_obj,WarpSwap,(void))

bool VrInterface_obj::IsPresenting(){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_36_IsPresenting)
HXDLIN(  36)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VrInterface_obj,IsPresenting,return )

bool VrInterface_obj::IsVrEnabled(){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_41_IsVrEnabled)
HXDLIN(  41)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VrInterface_obj,IsVrEnabled,return )

Float VrInterface_obj::GetTimeInSeconds(){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_47_GetTimeInSeconds)
HXDLIN(  47)		return ((Float)0.0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(VrInterface_obj,GetTimeInSeconds,return )

 ::kha::math::FastMatrix4 VrInterface_obj::GetProjectionMatrix(int eye){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_52_GetProjectionMatrix)
HXDLIN(  52)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(VrInterface_obj,GetProjectionMatrix,return )

 ::kha::math::FastMatrix4 VrInterface_obj::GetViewMatrix(int eye){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_57_GetViewMatrix)
HXDLIN(  57)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(VrInterface_obj,GetViewMatrix,return )

void VrInterface_obj::onVRRequestPresent(){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_62_onVRRequestPresent)
HXDLIN(  62)		return;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VrInterface_obj,onVRRequestPresent,(void))

void VrInterface_obj::onVRExitPresent(){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_67_onVRExitPresent)
HXDLIN(  67)		return;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VrInterface_obj,onVRExitPresent,(void))

void VrInterface_obj::onResetPose(){
            	HX_STACKFRAME(&_hx_pos_762cff4ae71864db_72_onResetPose)
HXDLIN(  72)		return;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VrInterface_obj,onResetPose,(void))

 ::kha::vr::VrInterface VrInterface_obj::instance;


hx::ObjectPtr< VrInterface_obj > VrInterface_obj::__new() {
	hx::ObjectPtr< VrInterface_obj > __this = new VrInterface_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VrInterface_obj > VrInterface_obj::__alloc(hx::Ctx *_hx_ctx) {
	VrInterface_obj *__this = (VrInterface_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VrInterface_obj), false, "kha.vr.VrInterface"));
	*(void **)__this = VrInterface_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VrInterface_obj::VrInterface_obj()
{
}

hx::Val VrInterface_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"WarpSwap") ) { return hx::Val( WarpSwap_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"IsVrEnabled") ) { return hx::Val( IsVrEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"onResetPose") ) { return hx::Val( onResetPose_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"IsPresenting") ) { return hx::Val( IsPresenting_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"WarpSwapBlack") ) { return hx::Val( WarpSwapBlack_dyn() ); }
		if (HX_FIELD_EQ(inName,"GetViewMatrix") ) { return hx::Val( GetViewMatrix_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"GetSensorState") ) { return hx::Val( GetSensorState_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onVRExitPresent") ) { return hx::Val( onVRExitPresent_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetTimeInSeconds") ) { return hx::Val( GetTimeInSeconds_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"onVRRequestPresent") ) { return hx::Val( onVRRequestPresent_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"WarpSwapLoadingIcon") ) { return hx::Val( WarpSwapLoadingIcon_dyn() ); }
		if (HX_FIELD_EQ(inName,"GetProjectionMatrix") ) { return hx::Val( GetProjectionMatrix_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"GetPredictedSensorState") ) { return hx::Val( GetPredictedSensorState_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool VrInterface_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
	}
	return false;
}

bool VrInterface_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::kha::vr::VrInterface >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *VrInterface_obj_sMemberStorageInfo = 0;
static hx::StaticInfo VrInterface_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::vr::VrInterface*/ ,(void *) &VrInterface_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String VrInterface_obj_sMemberFields[] = {
	HX_HCSTRING("GetSensorState","\xa1","\x48","\x5a","\xfc"),
	HX_HCSTRING("GetPredictedSensorState","\x35","\xf0","\x7f","\x13"),
	HX_HCSTRING("WarpSwapBlack","\xa4","\x2a","\x05","\xee"),
	HX_HCSTRING("WarpSwapLoadingIcon","\xba","\x5e","\xab","\x92"),
	HX_HCSTRING("WarpSwap","\x1b","\x39","\x8e","\x7a"),
	HX_HCSTRING("IsPresenting","\x71","\x15","\x6e","\xee"),
	HX_HCSTRING("IsVrEnabled","\x3b","\xb3","\xf2","\xc1"),
	HX_HCSTRING("GetTimeInSeconds","\xf7","\x28","\x50","\xb5"),
	HX_HCSTRING("GetProjectionMatrix","\xc6","\x68","\x3f","\xe9"),
	HX_HCSTRING("GetViewMatrix","\x9c","\xe2","\x77","\xa1"),
	HX_HCSTRING("onVRRequestPresent","\xe7","\xfa","\x58","\x3e"),
	HX_HCSTRING("onVRExitPresent","\x22","\xa1","\x77","\x13"),
	HX_HCSTRING("onResetPose","\xa1","\x70","\x8b","\xb2"),
	::String(null()) };

static void VrInterface_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VrInterface_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VrInterface_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VrInterface_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VrInterface_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VrInterface_obj::instance,"instance");
};

#endif

hx::Class VrInterface_obj::__mClass;

static ::String VrInterface_obj_sStaticFields[] = {
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	::String(null())
};

void VrInterface_obj::__register()
{
	hx::Object *dummy = new VrInterface_obj;
	VrInterface_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.vr.VrInterface","\x95","\xef","\xd8","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VrInterface_obj::__GetStatic;
	__mClass->mSetStaticField = &VrInterface_obj::__SetStatic;
	__mClass->mMarkFunc = VrInterface_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(VrInterface_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VrInterface_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VrInterface_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VrInterface_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VrInterface_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VrInterface_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace vr
