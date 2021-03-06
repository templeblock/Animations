// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_GetTransformNode
#include <armory/logicnode/GetTransformNode.h>
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
#ifndef INCLUDED_iron_math_Mat4
#include <iron/math/Mat4.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif
#ifndef INCLUDED_iron_object_Transform
#include <iron/object/Transform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e76cb4012837d73_8_new,"armory.logicnode.GetTransformNode","new",0x280eb9cc,"armory.logicnode.GetTransformNode.new","armory/logicnode/GetTransformNode.hx",8,0x8c0b6922)
HX_LOCAL_STACK_FRAME(_hx_pos_4e76cb4012837d73_11_get,"armory.logicnode.GetTransformNode","get",0x28096a02,"armory.logicnode.GetTransformNode.get","armory/logicnode/GetTransformNode.hx",11,0x8c0b6922)
namespace armory{
namespace logicnode{

void GetTransformNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_4e76cb4012837d73_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic GetTransformNode_obj::__CreateEmpty() { return new GetTransformNode_obj; }

void *GetTransformNode_obj::_hx_vtable = 0;

Dynamic GetTransformNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GetTransformNode_obj > _hx_result = new GetTransformNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetTransformNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x76188c3e;
	}
}

 ::Dynamic GetTransformNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_4e76cb4012837d73_11_get)
HXLINE(  12)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  14)		if (hx::IsNull( object )) {
HXLINE(  14)			return null();
            		}
HXLINE(  16)		return object->transform->world;
            	}



hx::ObjectPtr< GetTransformNode_obj > GetTransformNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< GetTransformNode_obj > __this = new GetTransformNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< GetTransformNode_obj > GetTransformNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	GetTransformNode_obj *__this = (GetTransformNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GetTransformNode_obj), true, "armory.logicnode.GetTransformNode"));
	*(void **)__this = GetTransformNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

GetTransformNode_obj::GetTransformNode_obj()
{
}

hx::Val GetTransformNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GetTransformNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GetTransformNode_obj_sStaticStorageInfo = 0;
#endif

static ::String GetTransformNode_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void GetTransformNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GetTransformNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GetTransformNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GetTransformNode_obj::__mClass,"__mClass");
};

#endif

hx::Class GetTransformNode_obj::__mClass;

void GetTransformNode_obj::__register()
{
	hx::Object *dummy = new GetTransformNode_obj;
	GetTransformNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.GetTransformNode","\xda","\x23","\x2b","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GetTransformNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GetTransformNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GetTransformNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GetTransformNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetTransformNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetTransformNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
