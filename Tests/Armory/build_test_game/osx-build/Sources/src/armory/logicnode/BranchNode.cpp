// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_BranchNode
#include <armory/logicnode/BranchNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d294e4c57c19bda0_6_new,"armory.logicnode.BranchNode","new",0xb36edcf8,"armory.logicnode.BranchNode.new","armory/logicnode/BranchNode.hx",6,0x352c1cf6)
HX_LOCAL_STACK_FRAME(_hx_pos_d294e4c57c19bda0_9_run,"armory.logicnode.BranchNode","run",0xb371f3e3,"armory.logicnode.BranchNode.run","armory/logicnode/BranchNode.hx",9,0x352c1cf6)
namespace armory{
namespace logicnode{

void BranchNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_d294e4c57c19bda0_6_new)
HXDLIN(   6)		super::__construct(tree);
            	}

Dynamic BranchNode_obj::__CreateEmpty() { return new BranchNode_obj; }

void *BranchNode_obj::_hx_vtable = 0;

Dynamic BranchNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BranchNode_obj > _hx_result = new BranchNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BranchNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x03d521be) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x03d521be;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

void BranchNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_d294e4c57c19bda0_9_run)
HXLINE(  10)		bool b = ( (bool)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  11)		if (b) {
HXLINE(  11)			this->runOutputs((int)0);
            		}
            		else {
HXLINE(  11)			this->runOutputs((int)1);
            		}
            	}



hx::ObjectPtr< BranchNode_obj > BranchNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< BranchNode_obj > __this = new BranchNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< BranchNode_obj > BranchNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	BranchNode_obj *__this = (BranchNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BranchNode_obj), true, "armory.logicnode.BranchNode"));
	*(void **)__this = BranchNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

BranchNode_obj::BranchNode_obj()
{
}

hx::Val BranchNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BranchNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BranchNode_obj_sStaticStorageInfo = 0;
#endif

static ::String BranchNode_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void BranchNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BranchNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BranchNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BranchNode_obj::__mClass,"__mClass");
};

#endif

hx::Class BranchNode_obj::__mClass;

void BranchNode_obj::__register()
{
	hx::Object *dummy = new BranchNode_obj;
	BranchNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.BranchNode","\x06","\x41","\x17","\x3d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BranchNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BranchNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BranchNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BranchNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BranchNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BranchNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
