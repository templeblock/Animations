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
#ifndef INCLUDED_armory_logicnode_RemoveObjectNode
#include <armory/logicnode/RemoveObjectNode.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_468a548e8501be06_8_new,"armory.logicnode.RemoveObjectNode","new",0x97d17ef9,"armory.logicnode.RemoveObjectNode.new","armory/logicnode/RemoveObjectNode.hx",8,0x74702895)
HX_LOCAL_STACK_FRAME(_hx_pos_468a548e8501be06_11_run,"armory.logicnode.RemoveObjectNode","run",0x97d495e4,"armory.logicnode.RemoveObjectNode.run","armory/logicnode/RemoveObjectNode.hx",11,0x74702895)
namespace armory{
namespace logicnode{

void RemoveObjectNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_468a548e8501be06_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic RemoveObjectNode_obj::__CreateEmpty() { return new RemoveObjectNode_obj; }

void *RemoveObjectNode_obj::_hx_vtable = 0;

Dynamic RemoveObjectNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RemoveObjectNode_obj > _hx_result = new RemoveObjectNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool RemoveObjectNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1a8bf6eb) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1a8bf6eb;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

void RemoveObjectNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_468a548e8501be06_11_run)
HXLINE(  12)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  14)		if (hx::IsNull( object )) {
HXLINE(  14)			return;
            		}
HXLINE(  16)		object->remove();
HXLINE(  18)		this->super::run();
            	}



hx::ObjectPtr< RemoveObjectNode_obj > RemoveObjectNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< RemoveObjectNode_obj > __this = new RemoveObjectNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< RemoveObjectNode_obj > RemoveObjectNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	RemoveObjectNode_obj *__this = (RemoveObjectNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RemoveObjectNode_obj), true, "armory.logicnode.RemoveObjectNode"));
	*(void **)__this = RemoveObjectNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

RemoveObjectNode_obj::RemoveObjectNode_obj()
{
}

hx::Val RemoveObjectNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *RemoveObjectNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *RemoveObjectNode_obj_sStaticStorageInfo = 0;
#endif

static ::String RemoveObjectNode_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void RemoveObjectNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RemoveObjectNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RemoveObjectNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RemoveObjectNode_obj::__mClass,"__mClass");
};

#endif

hx::Class RemoveObjectNode_obj::__mClass;

void RemoveObjectNode_obj::__register()
{
	hx::Object *dummy = new RemoveObjectNode_obj;
	RemoveObjectNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.RemoveObjectNode","\x87","\x8e","\x9e","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RemoveObjectNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RemoveObjectNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RemoveObjectNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RemoveObjectNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RemoveObjectNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RemoveObjectNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
