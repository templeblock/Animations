// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_GetFirstContactNode
#include <armory/logicnode/GetFirstContactNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_78be1b7ea9d0750a_9_new,"armory.logicnode.GetFirstContactNode","new",0xba7c7798,"armory.logicnode.GetFirstContactNode.new","armory/logicnode/GetFirstContactNode.hx",9,0xc718ef9a)
HX_LOCAL_STACK_FRAME(_hx_pos_78be1b7ea9d0750a_12_get,"armory.logicnode.GetFirstContactNode","get",0xba7727ce,"armory.logicnode.GetFirstContactNode.get","armory/logicnode/GetFirstContactNode.hx",12,0xc718ef9a)
namespace armory{
namespace logicnode{

void GetFirstContactNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_78be1b7ea9d0750a_9_new)
HXDLIN(   9)		super::__construct(tree);
            	}

Dynamic GetFirstContactNode_obj::__CreateEmpty() { return new GetFirstContactNode_obj; }

void *GetFirstContactNode_obj::_hx_vtable = 0;

Dynamic GetFirstContactNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GetFirstContactNode_obj > _hx_result = new GetFirstContactNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetFirstContactNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x4db26d26;
	}
}

 ::Dynamic GetFirstContactNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_78be1b7ea9d0750a_12_get)
HXLINE(  13)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  20)		return null();
            	}



hx::ObjectPtr< GetFirstContactNode_obj > GetFirstContactNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< GetFirstContactNode_obj > __this = new GetFirstContactNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< GetFirstContactNode_obj > GetFirstContactNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	GetFirstContactNode_obj *__this = (GetFirstContactNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GetFirstContactNode_obj), true, "armory.logicnode.GetFirstContactNode"));
	*(void **)__this = GetFirstContactNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

GetFirstContactNode_obj::GetFirstContactNode_obj()
{
}

hx::Val GetFirstContactNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GetFirstContactNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GetFirstContactNode_obj_sStaticStorageInfo = 0;
#endif

static ::String GetFirstContactNode_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void GetFirstContactNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GetFirstContactNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GetFirstContactNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GetFirstContactNode_obj::__mClass,"__mClass");
};

#endif

hx::Class GetFirstContactNode_obj::__mClass;

void GetFirstContactNode_obj::__register()
{
	hx::Object *dummy = new GetFirstContactNode_obj;
	GetFirstContactNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.GetFirstContactNode","\xa6","\x0b","\x5b","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GetFirstContactNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GetFirstContactNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GetFirstContactNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GetFirstContactNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetFirstContactNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetFirstContactNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
