// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_GetContactsNode
#include <armory/logicnode/GetContactsNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_1391383792185dce_9_new,"armory.logicnode.GetContactsNode","new",0x4a5fca1b,"armory.logicnode.GetContactsNode.new","armory/logicnode/GetContactsNode.hx",9,0xe1049577)
HX_LOCAL_STACK_FRAME(_hx_pos_1391383792185dce_12_get,"armory.logicnode.GetContactsNode","get",0x4a5a7a51,"armory.logicnode.GetContactsNode.get","armory/logicnode/GetContactsNode.hx",12,0xe1049577)
namespace armory{
namespace logicnode{

void GetContactsNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_1391383792185dce_9_new)
HXDLIN(   9)		super::__construct(tree);
            	}

Dynamic GetContactsNode_obj::__CreateEmpty() { return new GetContactsNode_obj; }

void *GetContactsNode_obj::_hx_vtable = 0;

Dynamic GetContactsNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GetContactsNode_obj > _hx_result = new GetContactsNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetContactsNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x4988d0c5;
	}
}

 ::Dynamic GetContactsNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_1391383792185dce_12_get)
HXLINE(  13)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  14)		if (hx::IsNull( object )) {
HXLINE(  14)			return null();
            		}
HXLINE(  23)		return null();
            	}



hx::ObjectPtr< GetContactsNode_obj > GetContactsNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< GetContactsNode_obj > __this = new GetContactsNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< GetContactsNode_obj > GetContactsNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	GetContactsNode_obj *__this = (GetContactsNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GetContactsNode_obj), true, "armory.logicnode.GetContactsNode"));
	*(void **)__this = GetContactsNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

GetContactsNode_obj::GetContactsNode_obj()
{
}

hx::Val GetContactsNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GetContactsNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GetContactsNode_obj_sStaticStorageInfo = 0;
#endif

static ::String GetContactsNode_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void GetContactsNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GetContactsNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GetContactsNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GetContactsNode_obj::__mClass,"__mClass");
};

#endif

hx::Class GetContactsNode_obj::__mClass;

void GetContactsNode_obj::__register()
{
	hx::Object *dummy = new GetContactsNode_obj;
	GetContactsNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.GetContactsNode","\xa9","\x20","\x5c","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GetContactsNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GetContactsNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GetContactsNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GetContactsNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetContactsNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetContactsNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
