// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_armory_logicnode_CallStaticFunctionNode
#include <armory/logicnode/CallStaticFunctionNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_3ddc49c77e3e87c3_8_new,"armory.logicnode.CallStaticFunctionNode","new",0x6637727a,"armory.logicnode.CallStaticFunctionNode.new","armory/logicnode/CallStaticFunctionNode.hx",8,0x1c7072b4)
HX_LOCAL_STACK_FRAME(_hx_pos_3ddc49c77e3e87c3_11_run,"armory.logicnode.CallStaticFunctionNode","run",0x663a8965,"armory.logicnode.CallStaticFunctionNode.run","armory/logicnode/CallStaticFunctionNode.hx",11,0x1c7072b4)
HX_LOCAL_STACK_FRAME(_hx_pos_3ddc49c77e3e87c3_26_get,"armory.logicnode.CallStaticFunctionNode","get",0x663222b0,"armory.logicnode.CallStaticFunctionNode.get","armory/logicnode/CallStaticFunctionNode.hx",26,0x1c7072b4)
namespace armory{
namespace logicnode{

void CallStaticFunctionNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_3ddc49c77e3e87c3_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic CallStaticFunctionNode_obj::__CreateEmpty() { return new CallStaticFunctionNode_obj; }

void *CallStaticFunctionNode_obj::_hx_vtable = 0;

Dynamic CallStaticFunctionNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CallStaticFunctionNode_obj > _hx_result = new CallStaticFunctionNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CallStaticFunctionNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x531038ec;
	}
}

void CallStaticFunctionNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_3ddc49c77e3e87c3_11_run)
HXLINE(  13)		::String path = ( (::String)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  14)		if ((path != HX_("",00,00,00,00))) {
HXLINE(  15)			int dotIndex = path.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE(  16)			::String classPath = path.substr((int)0,dotIndex);
HXLINE(  17)			hx::Class classType = ::Type_obj::resolveClass(classPath);
HXLINE(  18)			::String funName = path.substr((dotIndex + (int)1),null());
HXLINE(  19)			 ::Dynamic _hx_tmp = ::Reflect_obj::field(classType,funName);
HXDLIN(  19)			this->result = ::Reflect_obj::callMethod(classType,_hx_tmp,::cpp::VirtualArray_obj::__new(1)->init(0,this->tree));
            		}
HXLINE(  22)		this->runOutputs((int)0);
            	}


 ::Dynamic CallStaticFunctionNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_3ddc49c77e3e87c3_26_get)
HXDLIN(  26)		return this->result;
            	}



hx::ObjectPtr< CallStaticFunctionNode_obj > CallStaticFunctionNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< CallStaticFunctionNode_obj > __this = new CallStaticFunctionNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< CallStaticFunctionNode_obj > CallStaticFunctionNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	CallStaticFunctionNode_obj *__this = (CallStaticFunctionNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CallStaticFunctionNode_obj), true, "armory.logicnode.CallStaticFunctionNode"));
	*(void **)__this = CallStaticFunctionNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

CallStaticFunctionNode_obj::CallStaticFunctionNode_obj()
{
}

void CallStaticFunctionNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CallStaticFunctionNode);
	HX_MARK_MEMBER_NAME(result,"result");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CallStaticFunctionNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(result,"result");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CallStaticFunctionNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

hx::Val CallStaticFunctionNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CallStaticFunctionNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("result","\xdd","\x68","\x84","\x08"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CallStaticFunctionNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CallStaticFunctionNode_obj,result),HX_HCSTRING("result","\xdd","\x68","\x84","\x08")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CallStaticFunctionNode_obj_sStaticStorageInfo = 0;
#endif

static ::String CallStaticFunctionNode_obj_sMemberFields[] = {
	HX_HCSTRING("result","\xdd","\x68","\x84","\x08"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void CallStaticFunctionNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CallStaticFunctionNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CallStaticFunctionNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CallStaticFunctionNode_obj::__mClass,"__mClass");
};

#endif

hx::Class CallStaticFunctionNode_obj::__mClass;

void CallStaticFunctionNode_obj::__register()
{
	hx::Object *dummy = new CallStaticFunctionNode_obj;
	CallStaticFunctionNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.CallStaticFunctionNode","\x88","\x6d","\xc2","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CallStaticFunctionNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CallStaticFunctionNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CallStaticFunctionNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CallStaticFunctionNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CallStaticFunctionNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CallStaticFunctionNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
