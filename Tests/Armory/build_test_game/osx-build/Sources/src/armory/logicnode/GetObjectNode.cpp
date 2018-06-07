// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_GetObjectNode
#include <armory/logicnode/GetObjectNode.h>
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
#ifndef INCLUDED_iron_Scene
#include <iron/Scene.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_699553b56a09fc0c_6_new,"armory.logicnode.GetObjectNode","new",0xda6fce07,"armory.logicnode.GetObjectNode.new","armory/logicnode/GetObjectNode.hx",6,0x63e29e8b)
HX_LOCAL_STACK_FRAME(_hx_pos_699553b56a09fc0c_9_get,"armory.logicnode.GetObjectNode","get",0xda6a7e3d,"armory.logicnode.GetObjectNode.get","armory/logicnode/GetObjectNode.hx",9,0x63e29e8b)
namespace armory{
namespace logicnode{

void GetObjectNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_699553b56a09fc0c_6_new)
HXDLIN(   6)		super::__construct(tree);
            	}

Dynamic GetObjectNode_obj::__CreateEmpty() { return new GetObjectNode_obj; }

void *GetObjectNode_obj::_hx_vtable = 0;

Dynamic GetObjectNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GetObjectNode_obj > _hx_result = new GetObjectNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetObjectNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x4671efb1;
	}
}

 ::Dynamic GetObjectNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_699553b56a09fc0c_9_get)
HXLINE(  10)		::String objectName = ( (::String)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  12)		return ::iron::Scene_obj::active->getChild(objectName);
            	}



hx::ObjectPtr< GetObjectNode_obj > GetObjectNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< GetObjectNode_obj > __this = new GetObjectNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< GetObjectNode_obj > GetObjectNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	GetObjectNode_obj *__this = (GetObjectNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GetObjectNode_obj), true, "armory.logicnode.GetObjectNode"));
	*(void **)__this = GetObjectNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

GetObjectNode_obj::GetObjectNode_obj()
{
}

hx::Val GetObjectNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GetObjectNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GetObjectNode_obj_sStaticStorageInfo = 0;
#endif

static ::String GetObjectNode_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void GetObjectNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GetObjectNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GetObjectNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GetObjectNode_obj::__mClass,"__mClass");
};

#endif

hx::Class GetObjectNode_obj::__mClass;

void GetObjectNode_obj::__register()
{
	hx::Object *dummy = new GetObjectNode_obj;
	GetObjectNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.GetObjectNode","\x95","\xbe","\xc8","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GetObjectNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GetObjectNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GetObjectNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GetObjectNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetObjectNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetObjectNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
