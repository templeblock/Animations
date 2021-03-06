// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_GetParentNode
#include <armory/logicnode/GetParentNode.h>
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
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c349e3e401f920d4_8_new,"armory.logicnode.GetParentNode","new",0xa88b3772,"armory.logicnode.GetParentNode.new","armory/logicnode/GetParentNode.hx",8,0x7f368b80)
HX_LOCAL_STACK_FRAME(_hx_pos_c349e3e401f920d4_11_get,"armory.logicnode.GetParentNode","get",0xa885e7a8,"armory.logicnode.GetParentNode.get","armory/logicnode/GetParentNode.hx",11,0x7f368b80)
namespace armory{
namespace logicnode{

void GetParentNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_c349e3e401f920d4_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic GetParentNode_obj::__CreateEmpty() { return new GetParentNode_obj; }

void *GetParentNode_obj::_hx_vtable = 0;

Dynamic GetParentNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GetParentNode_obj > _hx_result = new GetParentNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetParentNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x634b879c;
	}
}

 ::Dynamic GetParentNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_c349e3e401f920d4_11_get)
HXLINE(  12)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  14)		if (hx::IsNull( object )) {
HXLINE(  14)			return null();
            		}
HXLINE(  16)		return object->parent;
            	}



hx::ObjectPtr< GetParentNode_obj > GetParentNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< GetParentNode_obj > __this = new GetParentNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< GetParentNode_obj > GetParentNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	GetParentNode_obj *__this = (GetParentNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GetParentNode_obj), true, "armory.logicnode.GetParentNode"));
	*(void **)__this = GetParentNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

GetParentNode_obj::GetParentNode_obj()
{
}

hx::Val GetParentNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GetParentNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GetParentNode_obj_sStaticStorageInfo = 0;
#endif

static ::String GetParentNode_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void GetParentNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GetParentNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GetParentNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GetParentNode_obj::__mClass,"__mClass");
};

#endif

hx::Class GetParentNode_obj::__mClass;

void GetParentNode_obj::__register()
{
	hx::Object *dummy = new GetParentNode_obj;
	GetParentNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.GetParentNode","\x80","\x56","\xa2","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GetParentNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GetParentNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GetParentNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GetParentNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetParentNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetParentNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
