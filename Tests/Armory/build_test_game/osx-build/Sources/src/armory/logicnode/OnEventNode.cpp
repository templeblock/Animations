// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
#endif
#ifndef INCLUDED_armory_logicnode_OnEventNode
#include <armory/logicnode/OnEventNode.h>
#endif
#ifndef INCLUDED_armory_system_Event
#include <armory/system/Event.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d21aceff67392fea_5_new,"armory.logicnode.OnEventNode","new",0x9836470d,"armory.logicnode.OnEventNode.new","armory/logicnode/OnEventNode.hx",5,0x7d66f3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_d21aceff67392fea_17_get_property0,"armory.logicnode.OnEventNode","get_property0",0x688b46ff,"armory.logicnode.OnEventNode.get_property0","armory/logicnode/OnEventNode.hx",17,0x7d66f3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_d21aceff67392fea_20_set_property0,"armory.logicnode.OnEventNode","set_property0",0xad91290b,"armory.logicnode.OnEventNode.set_property0","armory/logicnode/OnEventNode.hx",20,0x7d66f3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_d21aceff67392fea_26_onEvent,"armory.logicnode.OnEventNode","onEvent",0x21aa37a8,"armory.logicnode.OnEventNode.onEvent","armory/logicnode/OnEventNode.hx",26,0x7d66f3c5)
HX_LOCAL_STACK_FRAME(_hx_pos_d21aceff67392fea_30_onRemove,"armory.logicnode.OnEventNode","onRemove",0xc164c8f6,"armory.logicnode.OnEventNode.onRemove","armory/logicnode/OnEventNode.hx",30,0x7d66f3c5)
namespace armory{
namespace logicnode{

void OnEventNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_d21aceff67392fea_5_new)
HXLINE(   9)		this->listener = null();
HXLINE(  12)		super::__construct(tree);
HXLINE(  13)		tree->notifyOnRemove(this->onRemove_dyn());
            	}

Dynamic OnEventNode_obj::__CreateEmpty() { return new OnEventNode_obj; }

void *OnEventNode_obj::_hx_vtable = 0;

Dynamic OnEventNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OnEventNode_obj > _hx_result = new OnEventNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OnEventNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1cb77ce3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1cb77ce3;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

::String OnEventNode_obj::get_property0(){
            	HX_STACKFRAME(&_hx_pos_d21aceff67392fea_17_get_property0)
HXDLIN(  17)		return this->_property0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(OnEventNode_obj,get_property0,return )

::String OnEventNode_obj::set_property0(::String s){
            	HX_STACKFRAME(&_hx_pos_d21aceff67392fea_20_set_property0)
HXLINE(  21)		this->listener = ::armory::_hx_system::Event_obj::add(s,this->onEvent_dyn(),this->tree->object->uid);
HXLINE(  22)		return (this->_property0 = s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(OnEventNode_obj,set_property0,return )

void OnEventNode_obj::onEvent(){
            	HX_STACKFRAME(&_hx_pos_d21aceff67392fea_26_onEvent)
HXDLIN(  26)		this->run();
            	}


HX_DEFINE_DYNAMIC_FUNC0(OnEventNode_obj,onEvent,(void))

void OnEventNode_obj::onRemove(){
            	HX_STACKFRAME(&_hx_pos_d21aceff67392fea_30_onRemove)
HXDLIN(  30)		if (hx::IsNotNull( this->listener )) {
HXDLIN(  30)			::armory::_hx_system::Event_obj::removeListener(this->listener);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(OnEventNode_obj,onRemove,(void))


hx::ObjectPtr< OnEventNode_obj > OnEventNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< OnEventNode_obj > __this = new OnEventNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< OnEventNode_obj > OnEventNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	OnEventNode_obj *__this = (OnEventNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(OnEventNode_obj), true, "armory.logicnode.OnEventNode"));
	*(void **)__this = OnEventNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

OnEventNode_obj::OnEventNode_obj()
{
}

void OnEventNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OnEventNode);
	HX_MARK_MEMBER_NAME(_property0,"_property0");
	HX_MARK_MEMBER_NAME(listener,"listener");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OnEventNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_property0,"_property0");
	HX_VISIT_MEMBER_NAME(listener,"listener");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val OnEventNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"onEvent") ) { return hx::Val( onEvent_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { return hx::Val( listener ); }
		if (HX_FIELD_EQ(inName,"onRemove") ) { return hx::Val( onRemove_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_property0() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_property0") ) { return hx::Val( _property0 ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_property0") ) { return hx::Val( get_property0_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_property0") ) { return hx::Val( set_property0_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val OnEventNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_property0(inValue.Cast< ::String >()) ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_property0") ) { _property0=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OnEventNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_property0","\xfc","\x7d","\xa9","\x60"));
	outFields->push(HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"));
	outFields->push(HX_HCSTRING("listener","\x74","\x00","\x32","\x38"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo OnEventNode_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(OnEventNode_obj,_property0),HX_HCSTRING("_property0","\xfc","\x7d","\xa9","\x60")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(OnEventNode_obj,listener),HX_HCSTRING("listener","\x74","\x00","\x32","\x38")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OnEventNode_obj_sStaticStorageInfo = 0;
#endif

static ::String OnEventNode_obj_sMemberFields[] = {
	HX_HCSTRING("_property0","\xfc","\x7d","\xa9","\x60"),
	HX_HCSTRING("listener","\x74","\x00","\x32","\x38"),
	HX_HCSTRING("get_property0","\x12","\xd6","\x6a","\xc6"),
	HX_HCSTRING("set_property0","\x1e","\xb8","\x70","\x0b"),
	HX_HCSTRING("onEvent","\x7b","\x66","\x02","\x0c"),
	HX_HCSTRING("onRemove","\xc3","\x92","\x35","\xe4"),
	::String(null()) };

static void OnEventNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OnEventNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OnEventNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OnEventNode_obj::__mClass,"__mClass");
};

#endif

hx::Class OnEventNode_obj::__mClass;

void OnEventNode_obj::__register()
{
	hx::Object *dummy = new OnEventNode_obj;
	OnEventNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.OnEventNode","\x9b","\xbc","\x50","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OnEventNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OnEventNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OnEventNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OnEventNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OnEventNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OnEventNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
