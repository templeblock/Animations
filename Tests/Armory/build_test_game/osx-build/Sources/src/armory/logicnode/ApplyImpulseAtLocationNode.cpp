// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_ApplyImpulseAtLocationNode
#include <armory/logicnode/ApplyImpulseAtLocationNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicNodeInput
#include <armory/logicnode/LogicNodeInput.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_784bce00a3c60598_10_new,"armory.logicnode.ApplyImpulseAtLocationNode","new",0x67bb4965,"armory.logicnode.ApplyImpulseAtLocationNode.new","armory/logicnode/ApplyImpulseAtLocationNode.hx",10,0x77ff3929)
HX_LOCAL_STACK_FRAME(_hx_pos_784bce00a3c60598_13_run,"armory.logicnode.ApplyImpulseAtLocationNode","run",0x67be6050,"armory.logicnode.ApplyImpulseAtLocationNode.run","armory/logicnode/ApplyImpulseAtLocationNode.hx",13,0x77ff3929)
namespace armory{
namespace logicnode{

void ApplyImpulseAtLocationNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_784bce00a3c60598_10_new)
HXDLIN(  10)		super::__construct(tree);
            	}

Dynamic ApplyImpulseAtLocationNode_obj::__CreateEmpty() { return new ApplyImpulseAtLocationNode_obj; }

void *ApplyImpulseAtLocationNode_obj::_hx_vtable = 0;

Dynamic ApplyImpulseAtLocationNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ApplyImpulseAtLocationNode_obj > _hx_result = new ApplyImpulseAtLocationNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ApplyImpulseAtLocationNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x56810057;
	}
}

void ApplyImpulseAtLocationNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_784bce00a3c60598_13_run)
HXLINE(  14)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  15)		 ::iron::math::Vec4 impulse = ( ( ::iron::math::Vec4)(this->inputs->__get((int)2).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  16)		 ::iron::math::Vec4 location = ( ( ::iron::math::Vec4)(this->inputs->__get((int)3).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  18)		if (hx::IsNull( object )) {
HXLINE(  18)			return;
            		}
HXLINE(  25)		this->super::run();
            	}



hx::ObjectPtr< ApplyImpulseAtLocationNode_obj > ApplyImpulseAtLocationNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< ApplyImpulseAtLocationNode_obj > __this = new ApplyImpulseAtLocationNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< ApplyImpulseAtLocationNode_obj > ApplyImpulseAtLocationNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	ApplyImpulseAtLocationNode_obj *__this = (ApplyImpulseAtLocationNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ApplyImpulseAtLocationNode_obj), true, "armory.logicnode.ApplyImpulseAtLocationNode"));
	*(void **)__this = ApplyImpulseAtLocationNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

ApplyImpulseAtLocationNode_obj::ApplyImpulseAtLocationNode_obj()
{
}

hx::Val ApplyImpulseAtLocationNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ApplyImpulseAtLocationNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ApplyImpulseAtLocationNode_obj_sStaticStorageInfo = 0;
#endif

static ::String ApplyImpulseAtLocationNode_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void ApplyImpulseAtLocationNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplyImpulseAtLocationNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ApplyImpulseAtLocationNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplyImpulseAtLocationNode_obj::__mClass,"__mClass");
};

#endif

hx::Class ApplyImpulseAtLocationNode_obj::__mClass;

void ApplyImpulseAtLocationNode_obj::__register()
{
	hx::Object *dummy = new ApplyImpulseAtLocationNode_obj;
	ApplyImpulseAtLocationNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.ApplyImpulseAtLocationNode","\xf3","\xb2","\xdf","\x2f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ApplyImpulseAtLocationNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ApplyImpulseAtLocationNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ApplyImpulseAtLocationNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ApplyImpulseAtLocationNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ApplyImpulseAtLocationNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ApplyImpulseAtLocationNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
