// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicNodeInput
#include <armory/logicnode/LogicNodeInput.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
#endif
#ifndef INCLUDED_armory_logicnode_PrintNode
#include <armory/logicnode/PrintNode.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a82e929a47d3997e_6_new,"armory.logicnode.PrintNode","new",0x36383f3f,"armory.logicnode.PrintNode.new","armory/logicnode/PrintNode.hx",6,0xf2f6f353)
HX_LOCAL_STACK_FRAME(_hx_pos_a82e929a47d3997e_9_run,"armory.logicnode.PrintNode","run",0x363b562a,"armory.logicnode.PrintNode.run","armory/logicnode/PrintNode.hx",9,0xf2f6f353)
namespace armory{
namespace logicnode{

void PrintNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_a82e929a47d3997e_6_new)
HXDLIN(   6)		super::__construct(tree);
            	}

Dynamic PrintNode_obj::__CreateEmpty() { return new PrintNode_obj; }

void *PrintNode_obj::_hx_vtable = 0;

Dynamic PrintNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PrintNode_obj > _hx_result = new PrintNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PrintNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x42b3c3b1;
	}
}

void PrintNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_a82e929a47d3997e_9_run)
HXLINE(  10)		 ::Dynamic value = this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get();
HXLINE(  12)		::haxe::Log_obj::trace(value,hx::SourceInfo(HX_("PrintNode.hx",6f,11,1f,40),12,HX_("armory.logicnode.PrintNode",cd,33,c2,95),HX_("run",4b,e7,56,00)));
HXLINE(  14)		this->super::run();
            	}



hx::ObjectPtr< PrintNode_obj > PrintNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< PrintNode_obj > __this = new PrintNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< PrintNode_obj > PrintNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	PrintNode_obj *__this = (PrintNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PrintNode_obj), true, "armory.logicnode.PrintNode"));
	*(void **)__this = PrintNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

PrintNode_obj::PrintNode_obj()
{
}

hx::Val PrintNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PrintNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PrintNode_obj_sStaticStorageInfo = 0;
#endif

static ::String PrintNode_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void PrintNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PrintNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PrintNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PrintNode_obj::__mClass,"__mClass");
};

#endif

hx::Class PrintNode_obj::__mClass;

void PrintNode_obj::__register()
{
	hx::Object *dummy = new PrintNode_obj;
	PrintNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.PrintNode","\xcd","\x33","\xc2","\x95");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PrintNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PrintNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PrintNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PrintNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PrintNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PrintNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
