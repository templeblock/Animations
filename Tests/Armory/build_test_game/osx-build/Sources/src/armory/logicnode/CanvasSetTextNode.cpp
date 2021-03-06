// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_CanvasSetTextNode
#include <armory/logicnode/CanvasSetTextNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
#endif
#ifndef INCLUDED_armory_trait_internal_CanvasScript
#include <armory/trait/internal/CanvasScript.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e202b76aa89a4b86_13_new,"armory.logicnode.CanvasSetTextNode","new",0x381f1a89,"armory.logicnode.CanvasSetTextNode.new","armory/logicnode/CanvasSetTextNode.hx",13,0x926ba149)
namespace armory{
namespace logicnode{

void CanvasSetTextNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_e202b76aa89a4b86_13_new)
HXDLIN(  13)		super::__construct(tree);
            	}

Dynamic CanvasSetTextNode_obj::__CreateEmpty() { return new CanvasSetTextNode_obj; }

void *CanvasSetTextNode_obj::_hx_vtable = 0;

Dynamic CanvasSetTextNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CanvasSetTextNode_obj > _hx_result = new CanvasSetTextNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CanvasSetTextNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x048d35fb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x048d35fb;
	} else {
		return inClassId==(int)0x2e933162;
	}
}


hx::ObjectPtr< CanvasSetTextNode_obj > CanvasSetTextNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< CanvasSetTextNode_obj > __this = new CanvasSetTextNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< CanvasSetTextNode_obj > CanvasSetTextNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	CanvasSetTextNode_obj *__this = (CanvasSetTextNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CanvasSetTextNode_obj), true, "armory.logicnode.CanvasSetTextNode"));
	*(void **)__this = CanvasSetTextNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

CanvasSetTextNode_obj::CanvasSetTextNode_obj()
{
}

void CanvasSetTextNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CanvasSetTextNode);
	HX_MARK_MEMBER_NAME(canvas,"canvas");
	HX_MARK_MEMBER_NAME(element,"element");
	HX_MARK_MEMBER_NAME(text,"text");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CanvasSetTextNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canvas,"canvas");
	HX_VISIT_MEMBER_NAME(element,"element");
	HX_VISIT_MEMBER_NAME(text,"text");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val CanvasSetTextNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { return hx::Val( canvas ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { return hx::Val( element ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CanvasSetTextNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"canvas") ) { canvas=inValue.Cast<  ::armory::trait::internal::CanvasScript >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"element") ) { element=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CanvasSetTextNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"));
	outFields->push(HX_HCSTRING("element","\xbc","\xae","\x54","\x06"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CanvasSetTextNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::armory::trait::internal::CanvasScript*/ ,(int)offsetof(CanvasSetTextNode_obj,canvas),HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8")},
	{hx::fsString,(int)offsetof(CanvasSetTextNode_obj,element),HX_HCSTRING("element","\xbc","\xae","\x54","\x06")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CanvasSetTextNode_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CanvasSetTextNode_obj_sStaticStorageInfo = 0;
#endif

static ::String CanvasSetTextNode_obj_sMemberFields[] = {
	HX_HCSTRING("canvas","\xd8","\x54","\x42","\xb8"),
	HX_HCSTRING("element","\xbc","\xae","\x54","\x06"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	::String(null()) };

static void CanvasSetTextNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CanvasSetTextNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CanvasSetTextNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CanvasSetTextNode_obj::__mClass,"__mClass");
};

#endif

hx::Class CanvasSetTextNode_obj::__mClass;

void CanvasSetTextNode_obj::__register()
{
	hx::Object *dummy = new CanvasSetTextNode_obj;
	CanvasSetTextNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.CanvasSetTextNode","\x17","\x22","\xf3","\xc5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CanvasSetTextNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CanvasSetTextNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CanvasSetTextNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CanvasSetTextNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasSetTextNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasSetTextNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
