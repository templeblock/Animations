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
#ifndef INCLUDED_armory_logicnode_PlaySoundNode
#include <armory/logicnode/PlaySoundNode.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif
#ifndef INCLUDED_iron_object_SpeakerObject
#include <iron/object/SpeakerObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_686d121fd394bd17_8_new,"armory.logicnode.PlaySoundNode","new",0x1d8f364d,"armory.logicnode.PlaySoundNode.new","armory/logicnode/PlaySoundNode.hx",8,0xa22d6105)
HX_LOCAL_STACK_FRAME(_hx_pos_686d121fd394bd17_11_run,"armory.logicnode.PlaySoundNode","run",0x1d924d38,"armory.logicnode.PlaySoundNode.run","armory/logicnode/PlaySoundNode.hx",11,0xa22d6105)
namespace armory{
namespace logicnode{

void PlaySoundNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_686d121fd394bd17_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic PlaySoundNode_obj::__CreateEmpty() { return new PlaySoundNode_obj; }

void *PlaySoundNode_obj::_hx_vtable = 0;

Dynamic PlaySoundNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PlaySoundNode_obj > _hx_result = new PlaySoundNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlaySoundNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0cda3cf7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0cda3cf7;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

void PlaySoundNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_686d121fd394bd17_11_run)
HXLINE(  12)		 ::iron::object::SpeakerObject object = hx::TCast<  ::iron::object::SpeakerObject >::cast(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get());
HXLINE(  13)		object->play();
HXLINE(  14)		this->super::run();
            	}



hx::ObjectPtr< PlaySoundNode_obj > PlaySoundNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< PlaySoundNode_obj > __this = new PlaySoundNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< PlaySoundNode_obj > PlaySoundNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	PlaySoundNode_obj *__this = (PlaySoundNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PlaySoundNode_obj), true, "armory.logicnode.PlaySoundNode"));
	*(void **)__this = PlaySoundNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

PlaySoundNode_obj::PlaySoundNode_obj()
{
}

hx::Val PlaySoundNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PlaySoundNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PlaySoundNode_obj_sStaticStorageInfo = 0;
#endif

static ::String PlaySoundNode_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void PlaySoundNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlaySoundNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlaySoundNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlaySoundNode_obj::__mClass,"__mClass");
};

#endif

hx::Class PlaySoundNode_obj::__mClass;

void PlaySoundNode_obj::__register()
{
	hx::Object *dummy = new PlaySoundNode_obj;
	PlaySoundNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.PlaySoundNode","\xdb","\x0b","\x31","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PlaySoundNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PlaySoundNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlaySoundNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlaySoundNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlaySoundNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlaySoundNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
