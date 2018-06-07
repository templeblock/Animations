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
#ifndef INCLUDED_armory_logicnode_PauseActionNode
#include <armory/logicnode/PauseActionNode.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_object_Animation
#include <iron/object/Animation.h>
#endif
#ifndef INCLUDED_iron_object_BoneAnimation
#include <iron/object/BoneAnimation.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_899e699413ad6d37_8_new,"armory.logicnode.PauseActionNode","new",0x646d53de,"armory.logicnode.PauseActionNode.new","armory/logicnode/PauseActionNode.hx",8,0xcb52b514)
HX_LOCAL_STACK_FRAME(_hx_pos_899e699413ad6d37_11_run,"armory.logicnode.PauseActionNode","run",0x64706ac9,"armory.logicnode.PauseActionNode.run","armory/logicnode/PauseActionNode.hx",11,0xcb52b514)
namespace armory{
namespace logicnode{

void PauseActionNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_899e699413ad6d37_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic PauseActionNode_obj::__CreateEmpty() { return new PauseActionNode_obj; }

void *PauseActionNode_obj::_hx_vtable = 0;

Dynamic PauseActionNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PauseActionNode_obj > _hx_result = new PauseActionNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PauseActionNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x266b5134) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x266b5134;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

void PauseActionNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_899e699413ad6d37_11_run)
HXLINE(  12)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  14)		if (hx::IsNull( object )) {
HXLINE(  14)			return;
            		}
HXLINE(  15)		 ::iron::object::Animation animation = object->animation;
HXLINE(  16)		if (hx::IsNull( animation )) {
HXLINE(  16)			animation = object->getParentArmature(object->name);
            		}
HXLINE(  18)		animation->pause();
HXLINE(  20)		this->super::run();
            	}



hx::ObjectPtr< PauseActionNode_obj > PauseActionNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< PauseActionNode_obj > __this = new PauseActionNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< PauseActionNode_obj > PauseActionNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	PauseActionNode_obj *__this = (PauseActionNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PauseActionNode_obj), true, "armory.logicnode.PauseActionNode"));
	*(void **)__this = PauseActionNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

PauseActionNode_obj::PauseActionNode_obj()
{
}

hx::Val PauseActionNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PauseActionNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PauseActionNode_obj_sStaticStorageInfo = 0;
#endif

static ::String PauseActionNode_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void PauseActionNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PauseActionNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PauseActionNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PauseActionNode_obj::__mClass,"__mClass");
};

#endif

hx::Class PauseActionNode_obj::__mClass;

void PauseActionNode_obj::__register()
{
	hx::Object *dummy = new PauseActionNode_obj;
	PauseActionNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.PauseActionNode","\xec","\xcc","\xca","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PauseActionNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PauseActionNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PauseActionNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PauseActionNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseActionNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseActionNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
