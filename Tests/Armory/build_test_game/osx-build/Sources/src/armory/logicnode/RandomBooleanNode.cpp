// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
#endif
#ifndef INCLUDED_armory_logicnode_RandomBooleanNode
#include <armory/logicnode/RandomBooleanNode.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_64d8795311048e8a_6_new,"armory.logicnode.RandomBooleanNode","new",0x9f3e13f7,"armory.logicnode.RandomBooleanNode.new","armory/logicnode/RandomBooleanNode.hx",6,0x11292f9b)
HX_LOCAL_STACK_FRAME(_hx_pos_64d8795311048e8a_10_get,"armory.logicnode.RandomBooleanNode","get",0x9f38c42d,"armory.logicnode.RandomBooleanNode.get","armory/logicnode/RandomBooleanNode.hx",10,0x11292f9b)
namespace armory{
namespace logicnode{

void RandomBooleanNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_64d8795311048e8a_6_new)
HXDLIN(   6)		super::__construct(tree);
            	}

Dynamic RandomBooleanNode_obj::__CreateEmpty() { return new RandomBooleanNode_obj; }

void *RandomBooleanNode_obj::_hx_vtable = 0;

Dynamic RandomBooleanNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RandomBooleanNode_obj > _hx_result = new RandomBooleanNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RandomBooleanNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x596f3ba1;
	}
}

 ::Dynamic RandomBooleanNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_64d8795311048e8a_10_get)
HXDLIN(  10)		return (::Std_obj::random((int)2) == (int)0);
            	}



hx::ObjectPtr< RandomBooleanNode_obj > RandomBooleanNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< RandomBooleanNode_obj > __this = new RandomBooleanNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< RandomBooleanNode_obj > RandomBooleanNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	RandomBooleanNode_obj *__this = (RandomBooleanNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RandomBooleanNode_obj), true, "armory.logicnode.RandomBooleanNode"));
	*(void **)__this = RandomBooleanNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

RandomBooleanNode_obj::RandomBooleanNode_obj()
{
}

hx::Val RandomBooleanNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *RandomBooleanNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *RandomBooleanNode_obj_sStaticStorageInfo = 0;
#endif

static ::String RandomBooleanNode_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void RandomBooleanNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RandomBooleanNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RandomBooleanNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RandomBooleanNode_obj::__mClass,"__mClass");
};

#endif

hx::Class RandomBooleanNode_obj::__mClass;

void RandomBooleanNode_obj::__register()
{
	hx::Object *dummy = new RandomBooleanNode_obj;
	RandomBooleanNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.RandomBooleanNode","\x85","\x4c","\xa1","\x93");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RandomBooleanNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RandomBooleanNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RandomBooleanNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RandomBooleanNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RandomBooleanNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RandomBooleanNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
