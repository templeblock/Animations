// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_armory_logicnode_SetNativePropertyNode
#include <armory/logicnode/SetNativePropertyNode.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ae6d47ff88cc402d_8_new,"armory.logicnode.SetNativePropertyNode","new",0x931fb960,"armory.logicnode.SetNativePropertyNode.new","armory/logicnode/SetNativePropertyNode.hx",8,0xb9493352)
HX_LOCAL_STACK_FRAME(_hx_pos_ae6d47ff88cc402d_11_run,"armory.logicnode.SetNativePropertyNode","run",0x9322d04b,"armory.logicnode.SetNativePropertyNode.run","armory/logicnode/SetNativePropertyNode.hx",11,0xb9493352)
namespace armory{
namespace logicnode{

void SetNativePropertyNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_ae6d47ff88cc402d_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic SetNativePropertyNode_obj::__CreateEmpty() { return new SetNativePropertyNode_obj; }

void *SetNativePropertyNode_obj::_hx_vtable = 0;

Dynamic SetNativePropertyNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SetNativePropertyNode_obj > _hx_result = new SetNativePropertyNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SetNativePropertyNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x24339f52) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x24339f52;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

void SetNativePropertyNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_ae6d47ff88cc402d_11_run)
HXLINE(  12)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  13)		::String property = ( (::String)(this->inputs->__get((int)2).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  14)		 ::Dynamic value = this->inputs->__get((int)3).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get();
HXLINE(  16)		if (hx::IsNull( object )) {
HXLINE(  16)			return;
            		}
HXLINE(  18)		::Reflect_obj::setProperty(object,property,value);
HXLINE(  20)		this->super::run();
            	}



hx::ObjectPtr< SetNativePropertyNode_obj > SetNativePropertyNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< SetNativePropertyNode_obj > __this = new SetNativePropertyNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< SetNativePropertyNode_obj > SetNativePropertyNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	SetNativePropertyNode_obj *__this = (SetNativePropertyNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SetNativePropertyNode_obj), true, "armory.logicnode.SetNativePropertyNode"));
	*(void **)__this = SetNativePropertyNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

SetNativePropertyNode_obj::SetNativePropertyNode_obj()
{
}

hx::Val SetNativePropertyNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SetNativePropertyNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SetNativePropertyNode_obj_sStaticStorageInfo = 0;
#endif

static ::String SetNativePropertyNode_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void SetNativePropertyNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SetNativePropertyNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SetNativePropertyNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SetNativePropertyNode_obj::__mClass,"__mClass");
};

#endif

hx::Class SetNativePropertyNode_obj::__mClass;

void SetNativePropertyNode_obj::__register()
{
	hx::Object *dummy = new SetNativePropertyNode_obj;
	SetNativePropertyNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.SetNativePropertyNode","\x6e","\xc9","\x37","\xac");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SetNativePropertyNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SetNativePropertyNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SetNativePropertyNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SetNativePropertyNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SetNativePropertyNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SetNativePropertyNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
