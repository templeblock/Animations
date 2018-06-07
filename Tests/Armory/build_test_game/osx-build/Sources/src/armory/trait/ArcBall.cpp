// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_trait_ArcBall
#include <armory/trait/ArcBall.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_math_Mat4
#include <iron/math/Mat4.h>
#endif
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif
#ifndef INCLUDED_iron_object_Transform
#include <iron/object/Transform.h>
#endif
#ifndef INCLUDED_iron_system_Input
#include <iron/system/Input.h>
#endif
#ifndef INCLUDED_iron_system_Mouse
#include <iron/system/Mouse.h>
#endif
#ifndef INCLUDED_iron_system_VirtualInput
#include <iron/system/VirtualInput.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix4
#include <kha/math/FastMatrix4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_da36967b3ec222cf_11_new,"armory.trait.ArcBall","new",0xee73e1cf,"armory.trait.ArcBall.new","armory/trait/ArcBall.hx",11,0xcb7dc9c3)
HX_LOCAL_STACK_FRAME(_hx_pos_da36967b3ec222cf_17_update,"armory.trait.ArcBall","update",0xb2e4c3fa,"armory.trait.ArcBall.update","armory/trait/ArcBall.hx",17,0xcb7dc9c3)
namespace armory{
namespace trait{

void ArcBall_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_da36967b3ec222cf_11_new)
HXLINE(  12)		super::__construct();
HXLINE(  14)		this->notifyOnUpdate(this->update_dyn());
            	}

Dynamic ArcBall_obj::__CreateEmpty() { return new ArcBall_obj; }

void *ArcBall_obj::_hx_vtable = 0;

Dynamic ArcBall_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArcBall_obj > _hx_result = new ArcBall_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArcBall_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x121e3041) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x121e3041;
	} else {
		return inClassId==(int)0x7b609ac2;
	}
}

void ArcBall_obj::update(){
            	HX_GC_STACKFRAME(&_hx_pos_da36967b3ec222cf_17_update)
HXLINE(  18)		if (::iron::_hx_system::Input_obj::occupied) {
HXLINE(  18)			return;
            		}
HXLINE(  20)		 ::iron::_hx_system::Mouse mouse = ::iron::_hx_system::Input_obj::getMouse();
HXLINE(  21)		if (mouse->down(null())) {
HXLINE(  22)			 ::iron::object::Transform _hx_tmp = this->object->transform;
HXDLIN(  22)			 ::iron::math::Vec4 _hx_tmp1 =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,(int)0,(int)0,(int)1,null());
HXDLIN(  22)			_hx_tmp->rotate(_hx_tmp1,((Float)-(mouse->movementX) / (Float)(int)100));
HXLINE(  23)			this->object->transform->buildMatrix();
HXLINE(  24)			 ::iron::object::Transform _hx_tmp2 = this->object->transform;
HXDLIN(  24)			 ::iron::math::Mat4 _this = this->object->transform->world;
HXDLIN(  24)			 ::iron::math::Vec4 _hx_tmp3 =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this->self->_00,_this->self->_01,_this->self->_02,null());
HXDLIN(  24)			_hx_tmp2->rotate(_hx_tmp3,((Float)-(mouse->movementY) / (Float)(int)100));
HXLINE(  25)			this->object->transform->buildMatrix();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArcBall_obj,update,(void))


hx::ObjectPtr< ArcBall_obj > ArcBall_obj::__new() {
	hx::ObjectPtr< ArcBall_obj > __this = new ArcBall_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< ArcBall_obj > ArcBall_obj::__alloc(hx::Ctx *_hx_ctx) {
	ArcBall_obj *__this = (ArcBall_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ArcBall_obj), true, "armory.trait.ArcBall"));
	*(void **)__this = ArcBall_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ArcBall_obj::ArcBall_obj()
{
}

hx::Val ArcBall_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ArcBall_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ArcBall_obj_sStaticStorageInfo = 0;
#endif

static ::String ArcBall_obj_sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void ArcBall_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArcBall_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArcBall_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArcBall_obj::__mClass,"__mClass");
};

#endif

hx::Class ArcBall_obj::__mClass;

void ArcBall_obj::__register()
{
	hx::Object *dummy = new ArcBall_obj;
	ArcBall_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.ArcBall","\x5d","\x4e","\xb5","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ArcBall_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ArcBall_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArcBall_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArcBall_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArcBall_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArcBall_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait
