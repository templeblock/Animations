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
#ifndef INCLUDED_armory_logicnode_ScreenToWorldSpaceNode
#include <armory/logicnode/ScreenToWorldSpaceNode.h>
#endif
#ifndef INCLUDED_iron_Scene
#include <iron/Scene.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_math_Mat4
#include <iron/math/Mat4.h>
#endif
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif
#ifndef INCLUDED_iron_object_CameraObject
#include <iron/object/CameraObject.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_375c513b63a7ace8_6_new,"armory.logicnode.ScreenToWorldSpaceNode","new",0x91522251,"armory.logicnode.ScreenToWorldSpaceNode.new","armory/logicnode/ScreenToWorldSpaceNode.hx",6,0xc562cabd)
HX_LOCAL_STACK_FRAME(_hx_pos_375c513b63a7ace8_16_get,"armory.logicnode.ScreenToWorldSpaceNode","get",0x914cd287,"armory.logicnode.ScreenToWorldSpaceNode.get","armory/logicnode/ScreenToWorldSpaceNode.hx",16,0xc562cabd)
namespace armory{
namespace logicnode{

void ScreenToWorldSpaceNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_GC_STACKFRAME(&_hx_pos_375c513b63a7ace8_6_new)
HXLINE(  10)		this->m = ::iron::math::Mat4_obj::identity();
HXLINE(   9)		this->v =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  13)		super::__construct(tree);
            	}

Dynamic ScreenToWorldSpaceNode_obj::__CreateEmpty() { return new ScreenToWorldSpaceNode_obj; }

void *ScreenToWorldSpaceNode_obj::_hx_vtable = 0;

Dynamic ScreenToWorldSpaceNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ScreenToWorldSpaceNode_obj > _hx_result = new ScreenToWorldSpaceNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScreenToWorldSpaceNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x66db345f;
	}
}

 ::Dynamic ScreenToWorldSpaceNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_375c513b63a7ace8_16_get)
HXLINE(  17)		 ::iron::math::Vec4 v1 = ( ( ::iron::math::Vec4)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  19)		 ::iron::object::CameraObject cam = ::iron::Scene_obj::active->camera;
HXLINE(  20)		this->v->setFrom(v1);
HXLINE(  21)		this->m->getInverse(cam->P);
HXLINE(  22)		this->v->applyproj(this->m);
HXLINE(  23)		this->m->getInverse(cam->V);
HXLINE(  24)		this->v->applyproj(this->m);
HXLINE(  26)		return this->v;
            	}



hx::ObjectPtr< ScreenToWorldSpaceNode_obj > ScreenToWorldSpaceNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< ScreenToWorldSpaceNode_obj > __this = new ScreenToWorldSpaceNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< ScreenToWorldSpaceNode_obj > ScreenToWorldSpaceNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	ScreenToWorldSpaceNode_obj *__this = (ScreenToWorldSpaceNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ScreenToWorldSpaceNode_obj), true, "armory.logicnode.ScreenToWorldSpaceNode"));
	*(void **)__this = ScreenToWorldSpaceNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

ScreenToWorldSpaceNode_obj::ScreenToWorldSpaceNode_obj()
{
}

void ScreenToWorldSpaceNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenToWorldSpaceNode);
	HX_MARK_MEMBER_NAME(property0,"property0");
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_MEMBER_NAME(m,"m");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScreenToWorldSpaceNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(property0,"property0");
	HX_VISIT_MEMBER_NAME(v,"v");
	HX_VISIT_MEMBER_NAME(m,"m");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ScreenToWorldSpaceNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { return hx::Val( v ); }
		if (HX_FIELD_EQ(inName,"m") ) { return hx::Val( m ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { return hx::Val( property0 ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ScreenToWorldSpaceNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast<  ::iron::math::Mat4 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { property0=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenToWorldSpaceNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"));
	outFields->push(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ScreenToWorldSpaceNode_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ScreenToWorldSpaceNode_obj,property0),HX_HCSTRING("property0","\x3b","\x02","\x07","\x05")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(ScreenToWorldSpaceNode_obj,v),HX_HCSTRING("v","\x76","\x00","\x00","\x00")},
	{hx::fsObject /*::iron::math::Mat4*/ ,(int)offsetof(ScreenToWorldSpaceNode_obj,m),HX_HCSTRING("m","\x6d","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ScreenToWorldSpaceNode_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenToWorldSpaceNode_obj_sMemberFields[] = {
	HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"),
	HX_HCSTRING("v","\x76","\x00","\x00","\x00"),
	HX_HCSTRING("m","\x6d","\x00","\x00","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ScreenToWorldSpaceNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenToWorldSpaceNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ScreenToWorldSpaceNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenToWorldSpaceNode_obj::__mClass,"__mClass");
};

#endif

hx::Class ScreenToWorldSpaceNode_obj::__mClass;

void ScreenToWorldSpaceNode_obj::__register()
{
	hx::Object *dummy = new ScreenToWorldSpaceNode_obj;
	ScreenToWorldSpaceNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.ScreenToWorldSpaceNode","\xdf","\xa5","\x84","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ScreenToWorldSpaceNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ScreenToWorldSpaceNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ScreenToWorldSpaceNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ScreenToWorldSpaceNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenToWorldSpaceNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenToWorldSpaceNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
