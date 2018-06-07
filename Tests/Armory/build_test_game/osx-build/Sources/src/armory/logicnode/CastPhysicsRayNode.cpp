// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_CastPhysicsRayNode
#include <armory/logicnode/CastPhysicsRayNode.h>
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
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8cbecb21892cfdae_9_new,"armory.logicnode.CastPhysicsRayNode","new",0x9462c358,"armory.logicnode.CastPhysicsRayNode.new","armory/logicnode/CastPhysicsRayNode.hx",9,0xebd9d096)
HX_LOCAL_STACK_FRAME(_hx_pos_8cbecb21892cfdae_17_get,"armory.logicnode.CastPhysicsRayNode","get",0x945d738e,"armory.logicnode.CastPhysicsRayNode.get","armory/logicnode/CastPhysicsRayNode.hx",17,0xebd9d096)
namespace armory{
namespace logicnode{

void CastPhysicsRayNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_GC_STACKFRAME(&_hx_pos_8cbecb21892cfdae_9_new)
HXLINE(  11)		this->v =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  14)		super::__construct(tree);
            	}

Dynamic CastPhysicsRayNode_obj::__CreateEmpty() { return new CastPhysicsRayNode_obj; }

void *CastPhysicsRayNode_obj::_hx_vtable = 0;

Dynamic CastPhysicsRayNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CastPhysicsRayNode_obj > _hx_result = new CastPhysicsRayNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CastPhysicsRayNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x7a23c0ca;
	}
}

 ::Dynamic CastPhysicsRayNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_8cbecb21892cfdae_17_get)
HXLINE(  18)		 ::iron::math::Vec4 vfrom = ( ( ::iron::math::Vec4)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  19)		 ::iron::math::Vec4 vto = ( ( ::iron::math::Vec4)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  34)		return null();
            	}



hx::ObjectPtr< CastPhysicsRayNode_obj > CastPhysicsRayNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< CastPhysicsRayNode_obj > __this = new CastPhysicsRayNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< CastPhysicsRayNode_obj > CastPhysicsRayNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	CastPhysicsRayNode_obj *__this = (CastPhysicsRayNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CastPhysicsRayNode_obj), true, "armory.logicnode.CastPhysicsRayNode"));
	*(void **)__this = CastPhysicsRayNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

CastPhysicsRayNode_obj::CastPhysicsRayNode_obj()
{
}

void CastPhysicsRayNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CastPhysicsRayNode);
	HX_MARK_MEMBER_NAME(v,"v");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CastPhysicsRayNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(v,"v");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CastPhysicsRayNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { return hx::Val( v ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CastPhysicsRayNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CastPhysicsRayNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CastPhysicsRayNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(CastPhysicsRayNode_obj,v),HX_HCSTRING("v","\x76","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CastPhysicsRayNode_obj_sStaticStorageInfo = 0;
#endif

static ::String CastPhysicsRayNode_obj_sMemberFields[] = {
	HX_HCSTRING("v","\x76","\x00","\x00","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void CastPhysicsRayNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CastPhysicsRayNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CastPhysicsRayNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CastPhysicsRayNode_obj::__mClass,"__mClass");
};

#endif

hx::Class CastPhysicsRayNode_obj::__mClass;

void CastPhysicsRayNode_obj::__register()
{
	hx::Object *dummy = new CastPhysicsRayNode_obj;
	CastPhysicsRayNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.CastPhysicsRayNode","\x66","\x77","\xc0","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CastPhysicsRayNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CastPhysicsRayNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CastPhysicsRayNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CastPhysicsRayNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CastPhysicsRayNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CastPhysicsRayNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
