// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
#endif
#ifndef INCLUDED_armory_logicnode_SceneNode
#include <armory/logicnode/SceneNode.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5e82414e6853d0e0_10_new,"armory.logicnode.SceneNode","new",0xcda3775e,"armory.logicnode.SceneNode.new","armory/logicnode/SceneNode.hx",10,0xd00e6414)
HX_LOCAL_STACK_FRAME(_hx_pos_5e82414e6853d0e0_14_get,"armory.logicnode.SceneNode","get",0xcd9e2794,"armory.logicnode.SceneNode.get","armory/logicnode/SceneNode.hx",14,0xd00e6414)
HX_LOCAL_STACK_FRAME(_hx_pos_5e82414e6853d0e0_18_set,"armory.logicnode.SceneNode","set",0xcda742a0,"armory.logicnode.SceneNode.set","armory/logicnode/SceneNode.hx",18,0xd00e6414)
namespace armory{
namespace logicnode{

void SceneNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_5e82414e6853d0e0_10_new)
HXDLIN(  10)		super::__construct(tree);
            	}

Dynamic SceneNode_obj::__CreateEmpty() { return new SceneNode_obj; }

void *SceneNode_obj::_hx_vtable = 0;

Dynamic SceneNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SceneNode_obj > _hx_result = new SceneNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SceneNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x7984a388;
	}
}

 ::Dynamic SceneNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_5e82414e6853d0e0_14_get)
HXDLIN(  14)		return this->property0;
            	}


void SceneNode_obj::set( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5e82414e6853d0e0_18_set)
HXDLIN(  18)		this->property0 = ( (::String)(value) );
            	}



hx::ObjectPtr< SceneNode_obj > SceneNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< SceneNode_obj > __this = new SceneNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< SceneNode_obj > SceneNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	SceneNode_obj *__this = (SceneNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SceneNode_obj), true, "armory.logicnode.SceneNode"));
	*(void **)__this = SceneNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

SceneNode_obj::SceneNode_obj()
{
}

void SceneNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SceneNode);
	HX_MARK_MEMBER_NAME(property0,"property0");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SceneNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(property0,"property0");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val SceneNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { return hx::Val( property0 ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SceneNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { property0=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SceneNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SceneNode_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(SceneNode_obj,property0),HX_HCSTRING("property0","\x3b","\x02","\x07","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SceneNode_obj_sStaticStorageInfo = 0;
#endif

static ::String SceneNode_obj_sMemberFields[] = {
	HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void SceneNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SceneNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SceneNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SceneNode_obj::__mClass,"__mClass");
};

#endif

hx::Class SceneNode_obj::__mClass;

void SceneNode_obj::__register()
{
	hx::Object *dummy = new SceneNode_obj;
	SceneNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.SceneNode","\x6c","\x30","\x49","\x6b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SceneNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SceneNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SceneNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SceneNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SceneNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SceneNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
