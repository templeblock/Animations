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
#ifndef INCLUDED_armory_logicnode_PickLocationNode
#include <armory/logicnode/PickLocationNode.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a4fae0161a6e282f_6_new,"armory.logicnode.PickLocationNode","new",0xd6068c0c,"armory.logicnode.PickLocationNode.new","armory/logicnode/PickLocationNode.hx",6,0x6a629ee2)
HX_LOCAL_STACK_FRAME(_hx_pos_a4fae0161a6e282f_14_get,"armory.logicnode.PickLocationNode","get",0xd6013c42,"armory.logicnode.PickLocationNode.get","armory/logicnode/PickLocationNode.hx",14,0x6a629ee2)
namespace armory{
namespace logicnode{

void PickLocationNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_GC_STACKFRAME(&_hx_pos_a4fae0161a6e282f_6_new)
HXLINE(   8)		this->loc =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  11)		super::__construct(tree);
            	}

Dynamic PickLocationNode_obj::__CreateEmpty() { return new PickLocationNode_obj; }

void *PickLocationNode_obj::_hx_vtable = 0;

Dynamic PickLocationNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PickLocationNode_obj > _hx_result = new PickLocationNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PickLocationNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x16a1849a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x16a1849a;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

 ::Dynamic PickLocationNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_a4fae0161a6e282f_14_get)
HXLINE(  15)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  16)		 ::iron::math::Vec4 coords = ( ( ::iron::math::Vec4)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  18)		bool _hx_tmp = hx::IsNull( object );
HXLINE(  31)		return null();
            	}



hx::ObjectPtr< PickLocationNode_obj > PickLocationNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< PickLocationNode_obj > __this = new PickLocationNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< PickLocationNode_obj > PickLocationNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	PickLocationNode_obj *__this = (PickLocationNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PickLocationNode_obj), true, "armory.logicnode.PickLocationNode"));
	*(void **)__this = PickLocationNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

PickLocationNode_obj::PickLocationNode_obj()
{
}

void PickLocationNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PickLocationNode);
	HX_MARK_MEMBER_NAME(loc,"loc");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PickLocationNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(loc,"loc");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val PickLocationNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"loc") ) { return hx::Val( loc ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val PickLocationNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"loc") ) { loc=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PickLocationNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("loc","\x80","\x54","\x52","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo PickLocationNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(PickLocationNode_obj,loc),HX_HCSTRING("loc","\x80","\x54","\x52","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *PickLocationNode_obj_sStaticStorageInfo = 0;
#endif

static ::String PickLocationNode_obj_sMemberFields[] = {
	HX_HCSTRING("loc","\x80","\x54","\x52","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void PickLocationNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PickLocationNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PickLocationNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PickLocationNode_obj::__mClass,"__mClass");
};

#endif

hx::Class PickLocationNode_obj::__mClass;

void PickLocationNode_obj::__register()
{
	hx::Object *dummy = new PickLocationNode_obj;
	PickLocationNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.PickLocationNode","\x1a","\xd6","\xbc","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PickLocationNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PickLocationNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PickLocationNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PickLocationNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PickLocationNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PickLocationNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
