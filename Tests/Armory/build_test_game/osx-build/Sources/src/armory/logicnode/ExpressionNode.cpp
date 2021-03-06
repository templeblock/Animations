// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_ExpressionNode
#include <armory/logicnode/ExpressionNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5ebaedc20e9912ce_9_new,"armory.logicnode.ExpressionNode","new",0x96e21eee,"armory.logicnode.ExpressionNode.new","armory/logicnode/ExpressionNode.hx",9,0x5fc462c0)
HX_LOCAL_STACK_FRAME(_hx_pos_5ebaedc20e9912ce_22_run,"armory.logicnode.ExpressionNode","run",0x96e535d9,"armory.logicnode.ExpressionNode.run","armory/logicnode/ExpressionNode.hx",22,0x5fc462c0)
HX_LOCAL_STACK_FRAME(_hx_pos_5ebaedc20e9912ce_26_get,"armory.logicnode.ExpressionNode","get",0x96dccf24,"armory.logicnode.ExpressionNode.get","armory/logicnode/ExpressionNode.hx",26,0x5fc462c0)
namespace armory{
namespace logicnode{

void ExpressionNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_5ebaedc20e9912ce_9_new)
HXDLIN(   9)		super::__construct(tree);
            	}

Dynamic ExpressionNode_obj::__CreateEmpty() { return new ExpressionNode_obj; }

void *ExpressionNode_obj::_hx_vtable = 0;

Dynamic ExpressionNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ExpressionNode_obj > _hx_result = new ExpressionNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ExpressionNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1e016cb4) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1e016cb4;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

void ExpressionNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_5ebaedc20e9912ce_22_run)
HXDLIN(  22)		this->runOutputs((int)0);
            	}


 ::Dynamic ExpressionNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_5ebaedc20e9912ce_26_get)
HXDLIN(  26)		return this->result;
            	}



hx::ObjectPtr< ExpressionNode_obj > ExpressionNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< ExpressionNode_obj > __this = new ExpressionNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< ExpressionNode_obj > ExpressionNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	ExpressionNode_obj *__this = (ExpressionNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ExpressionNode_obj), true, "armory.logicnode.ExpressionNode"));
	*(void **)__this = ExpressionNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

ExpressionNode_obj::ExpressionNode_obj()
{
}

void ExpressionNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ExpressionNode);
	HX_MARK_MEMBER_NAME(property0,"property0");
	HX_MARK_MEMBER_NAME(result,"result");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ExpressionNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(property0,"property0");
	HX_VISIT_MEMBER_NAME(result,"result");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ExpressionNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return hx::Val( result ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { return hx::Val( property0 ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ExpressionNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { property0=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ExpressionNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"));
	outFields->push(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ExpressionNode_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ExpressionNode_obj,property0),HX_HCSTRING("property0","\x3b","\x02","\x07","\x05")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ExpressionNode_obj,result),HX_HCSTRING("result","\xdd","\x68","\x84","\x08")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ExpressionNode_obj_sStaticStorageInfo = 0;
#endif

static ::String ExpressionNode_obj_sMemberFields[] = {
	HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"),
	HX_HCSTRING("result","\xdd","\x68","\x84","\x08"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ExpressionNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExpressionNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ExpressionNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExpressionNode_obj::__mClass,"__mClass");
};

#endif

hx::Class ExpressionNode_obj::__mClass;

void ExpressionNode_obj::__register()
{
	hx::Object *dummy = new ExpressionNode_obj;
	ExpressionNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.ExpressionNode","\xfc","\xcf","\x18","\x01");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ExpressionNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ExpressionNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ExpressionNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ExpressionNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExpressionNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExpressionNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
