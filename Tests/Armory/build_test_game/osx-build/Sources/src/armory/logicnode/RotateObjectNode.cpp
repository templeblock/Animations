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
#ifndef INCLUDED_armory_logicnode_RotateObjectNode
#include <armory/logicnode/RotateObjectNode.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_math_Quat
#include <iron/math/Quat.h>
#endif
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif
#ifndef INCLUDED_iron_object_Transform
#include <iron/object/Transform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81dcf6c57130ad76_9_new,"armory.logicnode.RotateObjectNode","new",0x935a0350,"armory.logicnode.RotateObjectNode.new","armory/logicnode/RotateObjectNode.hx",9,0xb268bc1e)
HX_LOCAL_STACK_FRAME(_hx_pos_81dcf6c57130ad76_17_run,"armory.logicnode.RotateObjectNode","run",0x935d1a3b,"armory.logicnode.RotateObjectNode.run","armory/logicnode/RotateObjectNode.hx",17,0xb268bc1e)
namespace armory{
namespace logicnode{

void RotateObjectNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_GC_STACKFRAME(&_hx_pos_81dcf6c57130ad76_9_new)
HXLINE(  11)		this->q =  ::iron::math::Quat_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  14)		super::__construct(tree);
            	}

Dynamic RotateObjectNode_obj::__CreateEmpty() { return new RotateObjectNode_obj; }

void *RotateObjectNode_obj::_hx_vtable = 0;

Dynamic RotateObjectNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RotateObjectNode_obj > _hx_result = new RotateObjectNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RotateObjectNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x270f09de) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x270f09de;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

void RotateObjectNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_81dcf6c57130ad76_17_run)
HXLINE(  18)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  19)		 ::iron::math::Vec4 vec = ( ( ::iron::math::Vec4)(this->inputs->__get((int)2).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  21)		if (hx::IsNull( object )) {
HXLINE(  21)			return;
            		}
HXLINE(  23)		this->q->fromEuler(vec->x,vec->y,vec->z);
HXLINE(  25)		object->transform->rot->mult(this->q);
HXLINE(  26)		object->transform->buildMatrix();
HXLINE(  33)		this->super::run();
            	}



hx::ObjectPtr< RotateObjectNode_obj > RotateObjectNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< RotateObjectNode_obj > __this = new RotateObjectNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< RotateObjectNode_obj > RotateObjectNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	RotateObjectNode_obj *__this = (RotateObjectNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RotateObjectNode_obj), true, "armory.logicnode.RotateObjectNode"));
	*(void **)__this = RotateObjectNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

RotateObjectNode_obj::RotateObjectNode_obj()
{
}

void RotateObjectNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RotateObjectNode);
	HX_MARK_MEMBER_NAME(q,"q");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RotateObjectNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(q,"q");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val RotateObjectNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"q") ) { return hx::Val( q ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RotateObjectNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast<  ::iron::math::Quat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RotateObjectNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("q","\x71","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RotateObjectNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::iron::math::Quat*/ ,(int)offsetof(RotateObjectNode_obj,q),HX_HCSTRING("q","\x71","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RotateObjectNode_obj_sStaticStorageInfo = 0;
#endif

static ::String RotateObjectNode_obj_sMemberFields[] = {
	HX_HCSTRING("q","\x71","\x00","\x00","\x00"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void RotateObjectNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RotateObjectNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RotateObjectNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RotateObjectNode_obj::__mClass,"__mClass");
};

#endif

hx::Class RotateObjectNode_obj::__mClass;

void RotateObjectNode_obj::__register()
{
	hx::Object *dummy = new RotateObjectNode_obj;
	RotateObjectNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.RotateObjectNode","\x5e","\x5b","\x2a","\x01");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RotateObjectNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RotateObjectNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RotateObjectNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RotateObjectNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RotateObjectNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RotateObjectNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
