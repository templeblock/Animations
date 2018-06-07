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
#ifndef INCLUDED_armory_logicnode_PauseTilesheetNode
#include <armory/logicnode/PauseTilesheetNode.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_object_MeshObject
#include <iron/object/MeshObject.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif
#ifndef INCLUDED_iron_object_Tilesheet
#include <iron/object/Tilesheet.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f2d1276366cf4d29_8_new,"armory.logicnode.PauseTilesheetNode","new",0x86689c31,"armory.logicnode.PauseTilesheetNode.new","armory/logicnode/PauseTilesheetNode.hx",8,0xe3c095dd)
HX_LOCAL_STACK_FRAME(_hx_pos_f2d1276366cf4d29_11_run,"armory.logicnode.PauseTilesheetNode","run",0x866bb31c,"armory.logicnode.PauseTilesheetNode.run","armory/logicnode/PauseTilesheetNode.hx",11,0xe3c095dd)
namespace armory{
namespace logicnode{

void PauseTilesheetNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_f2d1276366cf4d29_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic PauseTilesheetNode_obj::__CreateEmpty() { return new PauseTilesheetNode_obj; }

void *PauseTilesheetNode_obj::_hx_vtable = 0;

Dynamic PauseTilesheetNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PauseTilesheetNode_obj > _hx_result = new PauseTilesheetNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PauseTilesheetNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x69edfe3f;
	}
}

void PauseTilesheetNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_f2d1276366cf4d29_11_run)
HXLINE(  12)		 ::iron::object::MeshObject object = ( ( ::iron::object::MeshObject)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  14)		if (hx::IsNull( object )) {
HXLINE(  14)			return;
            		}
HXLINE(  16)		object->tilesheet->pause();
HXLINE(  18)		this->super::run();
            	}



hx::ObjectPtr< PauseTilesheetNode_obj > PauseTilesheetNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< PauseTilesheetNode_obj > __this = new PauseTilesheetNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< PauseTilesheetNode_obj > PauseTilesheetNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	PauseTilesheetNode_obj *__this = (PauseTilesheetNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PauseTilesheetNode_obj), true, "armory.logicnode.PauseTilesheetNode"));
	*(void **)__this = PauseTilesheetNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

PauseTilesheetNode_obj::PauseTilesheetNode_obj()
{
}

hx::Val PauseTilesheetNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PauseTilesheetNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PauseTilesheetNode_obj_sStaticStorageInfo = 0;
#endif

static ::String PauseTilesheetNode_obj_sMemberFields[] = {
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void PauseTilesheetNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PauseTilesheetNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PauseTilesheetNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PauseTilesheetNode_obj::__mClass,"__mClass");
};

#endif

hx::Class PauseTilesheetNode_obj::__mClass;

void PauseTilesheetNode_obj::__register()
{
	hx::Object *dummy = new PauseTilesheetNode_obj;
	PauseTilesheetNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.PauseTilesheetNode","\xbf","\xaf","\xa0","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PauseTilesheetNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PauseTilesheetNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PauseTilesheetNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PauseTilesheetNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseTilesheetNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseTilesheetNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
