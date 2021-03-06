// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicNodeInput
#include <armory/logicnode/LogicNodeInput.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
#endif
#ifndef INCLUDED_armory_logicnode_SetScaleNode
#include <armory/logicnode/SetScaleNode.h>
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
#ifndef INCLUDED_iron_object_Transform
#include <iron/object/Transform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6ee2991fba38de48_10_new,"armory.logicnode.SetScaleNode","new",0x1296805e,"armory.logicnode.SetScaleNode.new","armory/logicnode/SetScaleNode.hx",10,0xea98c3d0)
HX_LOCAL_STACK_FRAME(_hx_pos_6ee2991fba38de48_13_run,"armory.logicnode.SetScaleNode","run",0x12999749,"armory.logicnode.SetScaleNode.run","armory/logicnode/SetScaleNode.hx",13,0xea98c3d0)
namespace armory{
namespace logicnode{

void SetScaleNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_6ee2991fba38de48_10_new)
HXDLIN(  10)		super::__construct(tree);
            	}

Dynamic SetScaleNode_obj::__CreateEmpty() { return new SetScaleNode_obj; }

void *SetScaleNode_obj::_hx_vtable = 0;

Dynamic SetScaleNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SetScaleNode_obj > _hx_result = new SetScaleNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SetScaleNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x64741fd0;
	}
}

void SetScaleNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_6ee2991fba38de48_13_run)
HXLINE(  14)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  15)		 ::iron::math::Vec4 vec = ( ( ::iron::math::Vec4)(this->inputs->__get((int)2).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  17)		if (hx::IsNull( object )) {
HXLINE(  17)			return;
            		}
HXLINE(  19)		object->transform->scale->setFrom(vec);
HXLINE(  20)		object->transform->buildMatrix();
HXLINE(  27)		this->super::run();
            	}



hx::ObjectPtr< SetScaleNode_obj > SetScaleNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< SetScaleNode_obj > __this = new SetScaleNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< SetScaleNode_obj > SetScaleNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	SetScaleNode_obj *__this = (SetScaleNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SetScaleNode_obj), true, "armory.logicnode.SetScaleNode"));
	*(void **)__this = SetScaleNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

SetScaleNode_obj::SetScaleNode_obj()
{
}

hx::Val SetScaleNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SetScaleNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SetScaleNode_obj_sStaticStorageInfo = 0;
#endif

static ::String SetScaleNode_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void SetScaleNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SetScaleNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SetScaleNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SetScaleNode_obj::__mClass,"__mClass");
};

#endif

hx::Class SetScaleNode_obj::__mClass;

void SetScaleNode_obj::__register()
{
	hx::Object *dummy = new SetScaleNode_obj;
	SetScaleNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.SetScaleNode","\x6c","\xb9","\xc3","\x05");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SetScaleNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SetScaleNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SetScaleNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SetScaleNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SetScaleNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SetScaleNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
