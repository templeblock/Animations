// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_trait_PhysicsDrag
#include <armory/trait/PhysicsDrag.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d266d0cea812f026_17_new,"armory.trait.PhysicsDrag","new",0x9911e7b9,"armory.trait.PhysicsDrag.new","armory/trait/PhysicsDrag.hx",17,0x60053819)
namespace armory{
namespace trait{

void PhysicsDrag_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d266d0cea812f026_17_new)
HXDLIN(  17)		super::__construct();
            	}

Dynamic PhysicsDrag_obj::__CreateEmpty() { return new PhysicsDrag_obj; }

void *PhysicsDrag_obj::_hx_vtable = 0;

Dynamic PhysicsDrag_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PhysicsDrag_obj > _hx_result = new PhysicsDrag_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PhysicsDrag_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x28153b2b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x28153b2b;
	} else {
		return inClassId==(int)0x7b609ac2;
	}
}


hx::ObjectPtr< PhysicsDrag_obj > PhysicsDrag_obj::__new() {
	hx::ObjectPtr< PhysicsDrag_obj > __this = new PhysicsDrag_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< PhysicsDrag_obj > PhysicsDrag_obj::__alloc(hx::Ctx *_hx_ctx) {
	PhysicsDrag_obj *__this = (PhysicsDrag_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PhysicsDrag_obj), true, "armory.trait.PhysicsDrag"));
	*(void **)__this = PhysicsDrag_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PhysicsDrag_obj::PhysicsDrag_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PhysicsDrag_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PhysicsDrag_obj_sStaticStorageInfo = 0;
#endif

static void PhysicsDrag_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsDrag_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PhysicsDrag_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsDrag_obj::__mClass,"__mClass");
};

#endif

hx::Class PhysicsDrag_obj::__mClass;

void PhysicsDrag_obj::__register()
{
	hx::Object *dummy = new PhysicsDrag_obj;
	PhysicsDrag_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.PhysicsDrag","\x47","\x97","\xcb","\xd5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PhysicsDrag_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PhysicsDrag_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PhysicsDrag_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PhysicsDrag_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PhysicsDrag_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait
