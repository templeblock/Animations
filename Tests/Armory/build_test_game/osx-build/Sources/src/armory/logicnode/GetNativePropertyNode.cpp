// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_armory_logicnode_GetNativePropertyNode
#include <armory/logicnode/GetNativePropertyNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_09080fd22064d613_8_new,"armory.logicnode.GetNativePropertyNode","new",0x26c8f554,"armory.logicnode.GetNativePropertyNode.new","armory/logicnode/GetNativePropertyNode.hx",8,0xa66eb1de)
HX_LOCAL_STACK_FRAME(_hx_pos_09080fd22064d613_11_get,"armory.logicnode.GetNativePropertyNode","get",0x26c3a58a,"armory.logicnode.GetNativePropertyNode.get","armory/logicnode/GetNativePropertyNode.hx",11,0xa66eb1de)
namespace armory{
namespace logicnode{

void GetNativePropertyNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_09080fd22064d613_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic GetNativePropertyNode_obj::__CreateEmpty() { return new GetNativePropertyNode_obj; }

void *GetNativePropertyNode_obj::_hx_vtable = 0;

Dynamic GetNativePropertyNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GetNativePropertyNode_obj > _hx_result = new GetNativePropertyNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetNativePropertyNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x6c58a87e;
	}
}

 ::Dynamic GetNativePropertyNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_09080fd22064d613_11_get)
HXLINE(  12)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  13)		::String property = ( (::String)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  15)		if (hx::IsNull( object )) {
HXLINE(  15)			return null();
            		}
HXLINE(  17)		return ::Reflect_obj::getProperty(object,property);
            	}



hx::ObjectPtr< GetNativePropertyNode_obj > GetNativePropertyNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< GetNativePropertyNode_obj > __this = new GetNativePropertyNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< GetNativePropertyNode_obj > GetNativePropertyNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	GetNativePropertyNode_obj *__this = (GetNativePropertyNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GetNativePropertyNode_obj), true, "armory.logicnode.GetNativePropertyNode"));
	*(void **)__this = GetNativePropertyNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

GetNativePropertyNode_obj::GetNativePropertyNode_obj()
{
}

hx::Val GetNativePropertyNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GetNativePropertyNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GetNativePropertyNode_obj_sStaticStorageInfo = 0;
#endif

static ::String GetNativePropertyNode_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void GetNativePropertyNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GetNativePropertyNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GetNativePropertyNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GetNativePropertyNode_obj::__mClass,"__mClass");
};

#endif

hx::Class GetNativePropertyNode_obj::__mClass;

void GetNativePropertyNode_obj::__register()
{
	hx::Object *dummy = new GetNativePropertyNode_obj;
	GetNativePropertyNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.GetNativePropertyNode","\x62","\xfb","\x2e","\x58");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GetNativePropertyNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GetNativePropertyNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GetNativePropertyNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GetNativePropertyNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetNativePropertyNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetNativePropertyNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
