// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_armory_logicnode_CallFunctionNode
#include <armory/logicnode/CallFunctionNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_6b54e980e9da9471_10_new,"armory.logicnode.CallFunctionNode","new",0x5eb11dac,"armory.logicnode.CallFunctionNode.new","armory/logicnode/CallFunctionNode.hx",10,0x8c4a2142)
HX_LOCAL_STACK_FRAME(_hx_pos_6b54e980e9da9471_13_run,"armory.logicnode.CallFunctionNode","run",0x5eb43497,"armory.logicnode.CallFunctionNode.run","armory/logicnode/CallFunctionNode.hx",13,0x8c4a2142)
HX_LOCAL_STACK_FRAME(_hx_pos_6b54e980e9da9471_24_get,"armory.logicnode.CallFunctionNode","get",0x5eabcde2,"armory.logicnode.CallFunctionNode.get","armory/logicnode/CallFunctionNode.hx",24,0x8c4a2142)
namespace armory{
namespace logicnode{

void CallFunctionNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_6b54e980e9da9471_10_new)
HXDLIN(  10)		super::__construct(tree);
            	}

Dynamic CallFunctionNode_obj::__CreateEmpty() { return new CallFunctionNode_obj; }

void *CallFunctionNode_obj::_hx_vtable = 0;

Dynamic CallFunctionNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CallFunctionNode_obj > _hx_result = new CallFunctionNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CallFunctionNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0ef20c56) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0ef20c56;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

void CallFunctionNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_6b54e980e9da9471_13_run)
HXLINE(  15)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  16)		::String funName = ( (::String)(this->inputs->__get((int)2).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  18)		this->result = ::Reflect_obj::callMethod(object,::Reflect_obj::field(object,funName),null());
HXLINE(  20)		this->runOutputs((int)0);
            	}


 ::Dynamic CallFunctionNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_6b54e980e9da9471_24_get)
HXDLIN(  24)		return this->result;
            	}



hx::ObjectPtr< CallFunctionNode_obj > CallFunctionNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< CallFunctionNode_obj > __this = new CallFunctionNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< CallFunctionNode_obj > CallFunctionNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	CallFunctionNode_obj *__this = (CallFunctionNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CallFunctionNode_obj), true, "armory.logicnode.CallFunctionNode"));
	*(void **)__this = CallFunctionNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

CallFunctionNode_obj::CallFunctionNode_obj()
{
}

void CallFunctionNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CallFunctionNode);
	HX_MARK_MEMBER_NAME(result,"result");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CallFunctionNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(result,"result");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CallFunctionNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return hx::Val( result ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CallFunctionNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CallFunctionNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CallFunctionNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CallFunctionNode_obj,result),HX_HCSTRING("result","\xdd","\x68","\x84","\x08")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CallFunctionNode_obj_sStaticStorageInfo = 0;
#endif

static ::String CallFunctionNode_obj_sMemberFields[] = {
	HX_HCSTRING("result","\xdd","\x68","\x84","\x08"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void CallFunctionNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CallFunctionNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CallFunctionNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CallFunctionNode_obj::__mClass,"__mClass");
};

#endif

hx::Class CallFunctionNode_obj::__mClass;

void CallFunctionNode_obj::__register()
{
	hx::Object *dummy = new CallFunctionNode_obj;
	CallFunctionNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.CallFunctionNode","\xba","\x17","\x16","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CallFunctionNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CallFunctionNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CallFunctionNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CallFunctionNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallFunctionNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallFunctionNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
