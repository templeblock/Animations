// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
#endif
#ifndef INCLUDED_armory_logicnode_ToBoolNode
#include <armory/logicnode/ToBoolNode.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_82a7b5a842838a5d_3_new,"armory.logicnode.ToBoolNode","new",0x6c50a89b,"armory.logicnode.ToBoolNode.new","armory/logicnode/ToBoolNode.hx",3,0x44ecd6b3)
HX_LOCAL_STACK_FRAME(_hx_pos_82a7b5a842838a5d_13_run,"armory.logicnode.ToBoolNode","run",0x6c53bf86,"armory.logicnode.ToBoolNode.run","armory/logicnode/ToBoolNode.hx",13,0x44ecd6b3)
HX_LOCAL_STACK_FRAME(_hx_pos_82a7b5a842838a5d_16_get,"armory.logicnode.ToBoolNode","get",0x6c4b58d1,"armory.logicnode.ToBoolNode.get","armory/logicnode/ToBoolNode.hx",16,0x44ecd6b3)
namespace armory{
namespace logicnode{

void ToBoolNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_82a7b5a842838a5d_3_new)
HXLINE(   6)		this->b = false;
HXLINE(   9)		super::__construct(tree);
            	}

Dynamic ToBoolNode_obj::__CreateEmpty() { return new ToBoolNode_obj; }

void *ToBoolNode_obj::_hx_vtable = 0;

Dynamic ToBoolNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ToBoolNode_obj > _hx_result = new ToBoolNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ToBoolNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x05a5048d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x05a5048d;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

void ToBoolNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_82a7b5a842838a5d_13_run)
HXDLIN(  13)		this->b = true;
            	}


 ::Dynamic ToBoolNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_82a7b5a842838a5d_16_get)
HXLINE(  17)		this->value = this->b;
HXLINE(  18)		this->b = false;
HXLINE(  19)		return this->value;
            	}



hx::ObjectPtr< ToBoolNode_obj > ToBoolNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< ToBoolNode_obj > __this = new ToBoolNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< ToBoolNode_obj > ToBoolNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	ToBoolNode_obj *__this = (ToBoolNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ToBoolNode_obj), true, "armory.logicnode.ToBoolNode"));
	*(void **)__this = ToBoolNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

ToBoolNode_obj::ToBoolNode_obj()
{
}

hx::Val ToBoolNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ToBoolNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ToBoolNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ToBoolNode_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ToBoolNode_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsBool,(int)offsetof(ToBoolNode_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ToBoolNode_obj_sStaticStorageInfo = 0;
#endif

static ::String ToBoolNode_obj_sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ToBoolNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ToBoolNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ToBoolNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ToBoolNode_obj::__mClass,"__mClass");
};

#endif

hx::Class ToBoolNode_obj::__mClass;

void ToBoolNode_obj::__register()
{
	hx::Object *dummy = new ToBoolNode_obj;
	ToBoolNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.ToBoolNode","\x29","\xbf","\xdb","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ToBoolNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ToBoolNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ToBoolNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ToBoolNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ToBoolNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ToBoolNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
