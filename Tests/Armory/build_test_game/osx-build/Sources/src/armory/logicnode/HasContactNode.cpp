// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_HasContactNode
#include <armory/logicnode/HasContactNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_2f5848280c77bc2e_9_new,"armory.logicnode.HasContactNode","new",0x6c7dedbc,"armory.logicnode.HasContactNode.new","armory/logicnode/HasContactNode.hx",9,0x679ce7b2)
HX_LOCAL_STACK_FRAME(_hx_pos_2f5848280c77bc2e_12_get,"armory.logicnode.HasContactNode","get",0x6c789df2,"armory.logicnode.HasContactNode.get","armory/logicnode/HasContactNode.hx",12,0x679ce7b2)
namespace armory{
namespace logicnode{

void HasContactNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_2f5848280c77bc2e_9_new)
HXDLIN(   9)		super::__construct(tree);
            	}

Dynamic HasContactNode_obj::__CreateEmpty() { return new HasContactNode_obj; }

void *HasContactNode_obj::_hx_vtable = 0;

Dynamic HasContactNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HasContactNode_obj > _hx_result = new HasContactNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HasContactNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x157bf566) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x157bf566;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

 ::Dynamic HasContactNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_2f5848280c77bc2e_12_get)
HXLINE(  13)		 ::iron::object::Object object1 = ( ( ::iron::object::Object)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  14)		 ::iron::object::Object object2 = ( ( ::iron::object::Object)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  22)		return false;
            	}



hx::ObjectPtr< HasContactNode_obj > HasContactNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< HasContactNode_obj > __this = new HasContactNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< HasContactNode_obj > HasContactNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	HasContactNode_obj *__this = (HasContactNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HasContactNode_obj), true, "armory.logicnode.HasContactNode"));
	*(void **)__this = HasContactNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

HasContactNode_obj::HasContactNode_obj()
{
}

hx::Val HasContactNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *HasContactNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *HasContactNode_obj_sStaticStorageInfo = 0;
#endif

static ::String HasContactNode_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void HasContactNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HasContactNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HasContactNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HasContactNode_obj::__mClass,"__mClass");
};

#endif

hx::Class HasContactNode_obj::__mClass;

void HasContactNode_obj::__register()
{
	hx::Object *dummy = new HasContactNode_obj;
	HasContactNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.HasContactNode","\xca","\x9f","\x15","\x1a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HasContactNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HasContactNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HasContactNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HasContactNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HasContactNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HasContactNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
