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
#ifndef INCLUDED_armory_logicnode_SetParentBoneNode
#include <armory/logicnode/SetParentBoneNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0eede951b7a91550_8_new,"armory.logicnode.SetParentBoneNode","new",0x64a6bfe2,"armory.logicnode.SetParentBoneNode.new","armory/logicnode/SetParentBoneNode.hx",8,0x75ebaa10)
HX_LOCAL_STACK_FRAME(_hx_pos_0eede951b7a91550_11_run,"armory.logicnode.SetParentBoneNode","run",0x64a9d6cd,"armory.logicnode.SetParentBoneNode.run","armory/logicnode/SetParentBoneNode.hx",11,0x75ebaa10)
namespace armory{
namespace logicnode{

void SetParentBoneNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_0eede951b7a91550_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic SetParentBoneNode_obj::__CreateEmpty() { return new SetParentBoneNode_obj; }

void *SetParentBoneNode_obj::_hx_vtable = 0;

Dynamic SetParentBoneNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SetParentBoneNode_obj > _hx_result = new SetParentBoneNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SetParentBoneNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x3488e870;
	}
}

void SetParentBoneNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_0eede951b7a91550_11_run)
HXLINE(  12)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  13)		 ::iron::object::Object parent = ( ( ::iron::object::Object)(this->inputs->__get((int)2).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  14)		::String bone = ( (::String)(this->inputs->__get((int)3).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  16)		bool _hx_tmp;
HXDLIN(  16)		if (hx::IsNotNull( object )) {
HXLINE(  16)			_hx_tmp = hx::IsNull( parent );
            		}
            		else {
HXLINE(  16)			_hx_tmp = true;
            		}
HXDLIN(  16)		if (_hx_tmp) {
HXLINE(  16)			return;
            		}
HXLINE(  18)		if (hx::IsNotEq( object->parent,parent )) {
HXLINE(  19)			object->parent->removeChild(object,false);
HXLINE(  20)			parent->addChild(object,false);
            		}
HXLINE(  23)		 ::iron::object::BoneAnimation banim = object->getParentArmature(object->parent->name);
HXLINE(  24)		banim->addBoneChild(bone,object);
HXLINE(  26)		this->super::run();
            	}



hx::ObjectPtr< SetParentBoneNode_obj > SetParentBoneNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< SetParentBoneNode_obj > __this = new SetParentBoneNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< SetParentBoneNode_obj > SetParentBoneNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	SetParentBoneNode_obj *__this = (SetParentBoneNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SetParentBoneNode_obj), true, "armory.logicnode.SetParentBoneNode"));
	*(void **)__this = SetParentBoneNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

SetParentBoneNode_obj::SetParentBoneNode_obj()
{
}

hx::Val SetParentBoneNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SetParentBoneNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SetParentBoneNode_obj_sStaticStorageInfo = 0;
#endif

static ::String SetParentBoneNode_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void SetParentBoneNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SetParentBoneNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SetParentBoneNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SetParentBoneNode_obj::__mClass,"__mClass");
};

#endif

hx::Class SetParentBoneNode_obj::__mClass;

void SetParentBoneNode_obj::__register()
{
	hx::Object *dummy = new SetParentBoneNode_obj;
	SetParentBoneNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.SetParentBoneNode","\xf0","\xe6","\x54","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SetParentBoneNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SetParentBoneNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SetParentBoneNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SetParentBoneNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SetParentBoneNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SetParentBoneNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
