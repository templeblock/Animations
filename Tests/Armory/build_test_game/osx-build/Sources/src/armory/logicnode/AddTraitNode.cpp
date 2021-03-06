// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_AddTraitNode
#include <armory/logicnode/AddTraitNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_64d114815db74f09_8_new,"armory.logicnode.AddTraitNode","new",0x8ca06fc3,"armory.logicnode.AddTraitNode.new","armory/logicnode/AddTraitNode.hx",8,0x021a880b)
HX_LOCAL_STACK_FRAME(_hx_pos_64d114815db74f09_11_run,"armory.logicnode.AddTraitNode","run",0x8ca386ae,"armory.logicnode.AddTraitNode.run","armory/logicnode/AddTraitNode.hx",11,0x021a880b)
namespace armory{
namespace logicnode{

void AddTraitNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_64d114815db74f09_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic AddTraitNode_obj::__CreateEmpty() { return new AddTraitNode_obj; }

void *AddTraitNode_obj::_hx_vtable = 0;

Dynamic AddTraitNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AddTraitNode_obj > _hx_result = new AddTraitNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AddTraitNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x7ee25809;
	}
}

void AddTraitNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_64d114815db74f09_11_run)
HXLINE(  12)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  13)		 ::Dynamic trait = this->inputs->__get((int)2).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get();
HXLINE(  15)		if (hx::IsNull( object )) {
HXLINE(  15)			return;
            		}
HXLINE(  17)		object->addTrait(( ( ::iron::Trait)(trait) ));
HXLINE(  19)		this->super::run();
            	}



hx::ObjectPtr< AddTraitNode_obj > AddTraitNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< AddTraitNode_obj > __this = new AddTraitNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< AddTraitNode_obj > AddTraitNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	AddTraitNode_obj *__this = (AddTraitNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(AddTraitNode_obj), true, "armory.logicnode.AddTraitNode"));
	*(void **)__this = AddTraitNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

AddTraitNode_obj::AddTraitNode_obj()
{
}

hx::Val AddTraitNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AddTraitNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *AddTraitNode_obj_sStaticStorageInfo = 0;
#endif

static ::String AddTraitNode_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void AddTraitNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AddTraitNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AddTraitNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AddTraitNode_obj::__mClass,"__mClass");
};

#endif

hx::Class AddTraitNode_obj::__mClass;

void AddTraitNode_obj::__register()
{
	hx::Object *dummy = new AddTraitNode_obj;
	AddTraitNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.AddTraitNode","\x51","\xd2","\x9e","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AddTraitNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AddTraitNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AddTraitNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AddTraitNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AddTraitNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AddTraitNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
