// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_IsNotNoneNode
#include <armory/logicnode/IsNotNoneNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_5f95c9adb42cf4f0_6_new,"armory.logicnode.IsNotNoneNode","new",0xa3a16cb3,"armory.logicnode.IsNotNoneNode.new","armory/logicnode/IsNotNoneNode.hx",6,0xaad0795f)
HX_LOCAL_STACK_FRAME(_hx_pos_5f95c9adb42cf4f0_9_run,"armory.logicnode.IsNotNoneNode","run",0xa3a4839e,"armory.logicnode.IsNotNoneNode.run","armory/logicnode/IsNotNoneNode.hx",9,0xaad0795f)
namespace armory{
namespace logicnode{

void IsNotNoneNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_5f95c9adb42cf4f0_6_new)
HXDLIN(   6)		super::__construct(tree);
            	}

Dynamic IsNotNoneNode_obj::__CreateEmpty() { return new IsNotNoneNode_obj; }

void *IsNotNoneNode_obj::_hx_vtable = 0;

Dynamic IsNotNoneNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IsNotNoneNode_obj > _hx_result = new IsNotNoneNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool IsNotNoneNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x48ebc85d;
	}
}

void IsNotNoneNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_5f95c9adb42cf4f0_9_run)
HXLINE(  11)		 ::Dynamic v1 = this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get();
HXLINE(  12)		if (hx::IsNotNull( v1 )) {
HXLINE(  12)			this->super::run();
            		}
            	}



hx::ObjectPtr< IsNotNoneNode_obj > IsNotNoneNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< IsNotNoneNode_obj > __this = new IsNotNoneNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< IsNotNoneNode_obj > IsNotNoneNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	IsNotNoneNode_obj *__this = (IsNotNoneNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IsNotNoneNode_obj), true, "armory.logicnode.IsNotNoneNode"));
	*(void **)__this = IsNotNoneNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

IsNotNoneNode_obj::IsNotNoneNode_obj()
{
}

hx::Val IsNotNoneNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *IsNotNoneNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *IsNotNoneNode_obj_sStaticStorageInfo = 0;
#endif

static ::String IsNotNoneNode_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void IsNotNoneNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IsNotNoneNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IsNotNoneNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IsNotNoneNode_obj::__mClass,"__mClass");
};

#endif

hx::Class IsNotNoneNode_obj::__mClass;

void IsNotNoneNode_obj::__register()
{
	hx::Object *dummy = new IsNotNoneNode_obj;
	IsNotNoneNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.IsNotNoneNode","\x41","\x97","\x42","\xcd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IsNotNoneNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IsNotNoneNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IsNotNoneNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IsNotNoneNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IsNotNoneNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IsNotNoneNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
