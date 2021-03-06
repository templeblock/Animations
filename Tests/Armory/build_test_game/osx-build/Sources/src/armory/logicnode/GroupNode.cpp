// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_GroupNode
#include <armory/logicnode/GroupNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_iron_Scene
#include <iron/Scene.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9c65d44914a53482_11_new,"armory.logicnode.GroupNode","new",0xbdedfc51,"armory.logicnode.GroupNode.new","armory/logicnode/GroupNode.hx",11,0x04cafe81)
HX_LOCAL_STACK_FRAME(_hx_pos_9c65d44914a53482_15_get,"armory.logicnode.GroupNode","get",0xbde8ac87,"armory.logicnode.GroupNode.get","armory/logicnode/GroupNode.hx",15,0x04cafe81)
namespace armory{
namespace logicnode{

void GroupNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_9c65d44914a53482_11_new)
HXDLIN(  11)		super::__construct(tree);
            	}

Dynamic GroupNode_obj::__CreateEmpty() { return new GroupNode_obj; }

void *GroupNode_obj::_hx_vtable = 0;

Dynamic GroupNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GroupNode_obj > _hx_result = new GroupNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GroupNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0142015f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0142015f;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

 ::Dynamic GroupNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_9c65d44914a53482_15_get)
HXDLIN(  15)		return ::iron::Scene_obj::active->groups->get(this->property0);
            	}



hx::ObjectPtr< GroupNode_obj > GroupNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< GroupNode_obj > __this = new GroupNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< GroupNode_obj > GroupNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	GroupNode_obj *__this = (GroupNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GroupNode_obj), true, "armory.logicnode.GroupNode"));
	*(void **)__this = GroupNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

GroupNode_obj::GroupNode_obj()
{
}

void GroupNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GroupNode);
	HX_MARK_MEMBER_NAME(property0,"property0");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GroupNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(property0,"property0");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GroupNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { return hx::Val( property0 ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GroupNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { property0=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GroupNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GroupNode_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(GroupNode_obj,property0),HX_HCSTRING("property0","\x3b","\x02","\x07","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GroupNode_obj_sStaticStorageInfo = 0;
#endif

static ::String GroupNode_obj_sMemberFields[] = {
	HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void GroupNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GroupNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GroupNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GroupNode_obj::__mClass,"__mClass");
};

#endif

hx::Class GroupNode_obj::__mClass;

void GroupNode_obj::__register()
{
	hx::Object *dummy = new GroupNode_obj;
	GroupNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.GroupNode","\xdf","\x7f","\xab","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GroupNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GroupNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GroupNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GroupNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GroupNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GroupNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
