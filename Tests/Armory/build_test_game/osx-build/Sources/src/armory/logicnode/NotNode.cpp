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
#ifndef INCLUDED_armory_logicnode_NotNode
#include <armory/logicnode/NotNode.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f73ebc19b493cbf_8_new,"armory.logicnode.NotNode","new",0xef47faa5,"armory.logicnode.NotNode.new","armory/logicnode/NotNode.hx",8,0x140ab22d)
HX_LOCAL_STACK_FRAME(_hx_pos_1f73ebc19b493cbf_11_get,"armory.logicnode.NotNode","get",0xef42aadb,"armory.logicnode.NotNode.get","armory/logicnode/NotNode.hx",11,0x140ab22d)
namespace armory{
namespace logicnode{

void NotNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_1f73ebc19b493cbf_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic NotNode_obj::__CreateEmpty() { return new NotNode_obj; }

void *NotNode_obj::_hx_vtable = 0;

Dynamic NotNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NotNode_obj > _hx_result = new NotNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NotNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x15c9c07b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x15c9c07b;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

 ::Dynamic NotNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_1f73ebc19b493cbf_11_get)
HXLINE(  12)		bool v1 = ( (bool)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  13)		return !(v1);
            	}



hx::ObjectPtr< NotNode_obj > NotNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< NotNode_obj > __this = new NotNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< NotNode_obj > NotNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	NotNode_obj *__this = (NotNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NotNode_obj), true, "armory.logicnode.NotNode"));
	*(void **)__this = NotNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

NotNode_obj::NotNode_obj()
{
}

void NotNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NotNode);
	HX_MARK_MEMBER_NAME(property0,"property0");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NotNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(property0,"property0");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val NotNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { return hx::Val( property0 ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val NotNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { property0=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NotNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo NotNode_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(NotNode_obj,property0),HX_HCSTRING("property0","\x3b","\x02","\x07","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *NotNode_obj_sStaticStorageInfo = 0;
#endif

static ::String NotNode_obj_sMemberFields[] = {
	HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void NotNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NotNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NotNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NotNode_obj::__mClass,"__mClass");
};

#endif

hx::Class NotNode_obj::__mClass;

void NotNode_obj::__register()
{
	hx::Object *dummy = new NotNode_obj;
	NotNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.NotNode","\x33","\xc4","\x6a","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NotNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(NotNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NotNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NotNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
