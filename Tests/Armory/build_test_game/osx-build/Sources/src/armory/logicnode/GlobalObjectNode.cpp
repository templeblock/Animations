// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_GlobalObjectNode
#include <armory/logicnode/GlobalObjectNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_df38251c719e2bd3_6_new,"armory.logicnode.GlobalObjectNode","new",0x8f2e2c58,"armory.logicnode.GlobalObjectNode.new","armory/logicnode/GlobalObjectNode.hx",6,0xc02a8c16)
HX_LOCAL_STACK_FRAME(_hx_pos_df38251c719e2bd3_10_get,"armory.logicnode.GlobalObjectNode","get",0x8f28dc8e,"armory.logicnode.GlobalObjectNode.get","armory/logicnode/GlobalObjectNode.hx",10,0xc02a8c16)
namespace armory{
namespace logicnode{

void GlobalObjectNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_df38251c719e2bd3_6_new)
HXDLIN(   6)		super::__construct(tree);
            	}

Dynamic GlobalObjectNode_obj::__CreateEmpty() { return new GlobalObjectNode_obj; }

void *GlobalObjectNode_obj::_hx_vtable = 0;

Dynamic GlobalObjectNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GlobalObjectNode_obj > _hx_result = new GlobalObjectNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GlobalObjectNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x323f5502;
	}
}

 ::Dynamic GlobalObjectNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_df38251c719e2bd3_10_get)
HXDLIN(  10)		return ::iron::Scene_obj::global;
            	}



hx::ObjectPtr< GlobalObjectNode_obj > GlobalObjectNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< GlobalObjectNode_obj > __this = new GlobalObjectNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< GlobalObjectNode_obj > GlobalObjectNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	GlobalObjectNode_obj *__this = (GlobalObjectNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GlobalObjectNode_obj), true, "armory.logicnode.GlobalObjectNode"));
	*(void **)__this = GlobalObjectNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

GlobalObjectNode_obj::GlobalObjectNode_obj()
{
}

hx::Val GlobalObjectNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GlobalObjectNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GlobalObjectNode_obj_sStaticStorageInfo = 0;
#endif

static ::String GlobalObjectNode_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void GlobalObjectNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlobalObjectNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlobalObjectNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlobalObjectNode_obj::__mClass,"__mClass");
};

#endif

hx::Class GlobalObjectNode_obj::__mClass;

void GlobalObjectNode_obj::__register()
{
	hx::Object *dummy = new GlobalObjectNode_obj;
	GlobalObjectNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.GlobalObjectNode","\x66","\x60","\x63","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GlobalObjectNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GlobalObjectNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GlobalObjectNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlobalObjectNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlobalObjectNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlobalObjectNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
