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
#ifndef INCLUDED_armory_logicnode_SetPropertyNode
#include <armory/logicnode/SetPropertyNode.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_27c83c2e8c624fed_8_new,"armory.logicnode.SetPropertyNode","new",0x94bb85a9,"armory.logicnode.SetPropertyNode.new","armory/logicnode/SetPropertyNode.hx",8,0x744b05a9)
HX_LOCAL_STACK_FRAME(_hx_pos_27c83c2e8c624fed_11_run,"armory.logicnode.SetPropertyNode","run",0x94be9c94,"armory.logicnode.SetPropertyNode.run","armory/logicnode/SetPropertyNode.hx",11,0x744b05a9)
namespace armory{
namespace logicnode{

void SetPropertyNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_27c83c2e8c624fed_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic SetPropertyNode_obj::__CreateEmpty() { return new SetPropertyNode_obj; }

void *SetPropertyNode_obj::_hx_vtable = 0;

Dynamic SetPropertyNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SetPropertyNode_obj > _hx_result = new SetPropertyNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SetPropertyNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x5c202d53;
	}
}

void SetPropertyNode_obj::run(){
            	HX_GC_STACKFRAME(&_hx_pos_27c83c2e8c624fed_11_run)
HXLINE(  12)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  13)		::String property = ( (::String)(this->inputs->__get((int)2).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  14)		 ::Dynamic value = this->inputs->__get((int)3).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get();
HXLINE(  16)		if (hx::IsNull( object )) {
HXLINE(  16)			return;
            		}
HXLINE(  17)		if (hx::IsNull( object->properties )) {
HXLINE(  17)			object->properties =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  18)		object->properties->set(property,value);
HXLINE(  20)		this->super::run();
            	}



hx::ObjectPtr< SetPropertyNode_obj > SetPropertyNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< SetPropertyNode_obj > __this = new SetPropertyNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< SetPropertyNode_obj > SetPropertyNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	SetPropertyNode_obj *__this = (SetPropertyNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SetPropertyNode_obj), true, "armory.logicnode.SetPropertyNode"));
	*(void **)__this = SetPropertyNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

SetPropertyNode_obj::SetPropertyNode_obj()
{
}

hx::Val SetPropertyNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SetPropertyNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SetPropertyNode_obj_sStaticStorageInfo = 0;
#endif

static ::String SetPropertyNode_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void SetPropertyNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SetPropertyNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SetPropertyNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SetPropertyNode_obj::__mClass,"__mClass");
};

#endif

hx::Class SetPropertyNode_obj::__mClass;

void SetPropertyNode_obj::__register()
{
	hx::Object *dummy = new SetPropertyNode_obj;
	SetPropertyNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.SetPropertyNode","\x37","\x7d","\xf3","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SetPropertyNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SetPropertyNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SetPropertyNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SetPropertyNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SetPropertyNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SetPropertyNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
