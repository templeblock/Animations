// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_armory_logicnode_GetTraitNode
#include <armory/logicnode/GetTraitNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f6f1ad013c61086c_5_new,"armory.logicnode.GetTraitNode","new",0xf7923c2e,"armory.logicnode.GetTraitNode.new","armory/logicnode/GetTraitNode.hx",5,0x9eb57200)
HX_LOCAL_STACK_FRAME(_hx_pos_f6f1ad013c61086c_13_get,"armory.logicnode.GetTraitNode","get",0xf78cec64,"armory.logicnode.GetTraitNode.get","armory/logicnode/GetTraitNode.hx",13,0x9eb57200)
namespace armory{
namespace logicnode{

void GetTraitNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_f6f1ad013c61086c_5_new)
HXLINE(   7)		this->cname = null();
HXLINE(  10)		super::__construct(tree);
            	}

Dynamic GetTraitNode_obj::__CreateEmpty() { return new GetTraitNode_obj; }

void *GetTraitNode_obj::_hx_vtable = 0;

Dynamic GetTraitNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GetTraitNode_obj > _hx_result = new GetTraitNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetTraitNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x7f8e2c28;
	}
}

 ::Dynamic GetTraitNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_f6f1ad013c61086c_13_get)
HXLINE(  14)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  15)		::String name = ( (::String)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  17)		if (hx::IsNull( object )) {
HXLINE(  17)			return null();
            		}
HXLINE(  19)		if (hx::IsNull( this->cname )) {
HXLINE(  19)			this->cname = ::Type_obj::resolveClass(((HX_("arm",5c,fe,49,00) + HX_(".",2e,00,00,00)) + name));
            		}
HXLINE(  20)		if (hx::IsNull( this->cname )) {
HXLINE(  20)			this->cname = ::Type_obj::resolveClass(((HX_("arm",5c,fe,49,00) + HX_(".node.",fe,50,29,04)) + name));
            		}
HXLINE(  21)		return object->getTrait(this->cname).StaticCast<  ::iron::Trait >();
            	}



hx::ObjectPtr< GetTraitNode_obj > GetTraitNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< GetTraitNode_obj > __this = new GetTraitNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< GetTraitNode_obj > GetTraitNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	GetTraitNode_obj *__this = (GetTraitNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GetTraitNode_obj), true, "armory.logicnode.GetTraitNode"));
	*(void **)__this = GetTraitNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

GetTraitNode_obj::GetTraitNode_obj()
{
}

void GetTraitNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GetTraitNode);
	HX_MARK_MEMBER_NAME(cname,"cname");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GetTraitNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cname,"cname");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GetTraitNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cname") ) { return hx::Val( cname ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GetTraitNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cname") ) { cname=inValue.Cast< hx::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GetTraitNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cname","\x2e","\xe0","\xaa","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GetTraitNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::hx::Class*/ ,(int)offsetof(GetTraitNode_obj,cname),HX_HCSTRING("cname","\x2e","\xe0","\xaa","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GetTraitNode_obj_sStaticStorageInfo = 0;
#endif

static ::String GetTraitNode_obj_sMemberFields[] = {
	HX_HCSTRING("cname","\x2e","\xe0","\xaa","\x49"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void GetTraitNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GetTraitNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GetTraitNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GetTraitNode_obj::__mClass,"__mClass");
};

#endif

hx::Class GetTraitNode_obj::__mClass;

void GetTraitNode_obj::__register()
{
	hx::Object *dummy = new GetTraitNode_obj;
	GetTraitNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.GetTraitNode","\x3c","\x4d","\xa1","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GetTraitNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GetTraitNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GetTraitNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GetTraitNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetTraitNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetTraitNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
