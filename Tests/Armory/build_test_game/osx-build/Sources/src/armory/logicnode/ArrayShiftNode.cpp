// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_ArrayShiftNode
#include <armory/logicnode/ArrayShiftNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d6ae753ff9cfb885_6_new,"armory.logicnode.ArrayShiftNode","new",0xbe918a7f,"armory.logicnode.ArrayShiftNode.new","armory/logicnode/ArrayShiftNode.hx",6,0x8388544f)
HX_LOCAL_STACK_FRAME(_hx_pos_d6ae753ff9cfb885_9_get,"armory.logicnode.ArrayShiftNode","get",0xbe8c3ab5,"armory.logicnode.ArrayShiftNode.get","armory/logicnode/ArrayShiftNode.hx",9,0x8388544f)
namespace armory{
namespace logicnode{

void ArrayShiftNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_d6ae753ff9cfb885_6_new)
HXDLIN(   6)		super::__construct(tree);
            	}

Dynamic ArrayShiftNode_obj::__CreateEmpty() { return new ArrayShiftNode_obj; }

void *ArrayShiftNode_obj::_hx_vtable = 0;

Dynamic ArrayShiftNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArrayShiftNode_obj > _hx_result = new ArrayShiftNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ArrayShiftNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0ea6a671) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0ea6a671;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

 ::Dynamic ArrayShiftNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_d6ae753ff9cfb885_9_get)
HXLINE(  10)		::cpp::VirtualArray ar = ( (::cpp::VirtualArray)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  11)		return ar->shift();
            	}



hx::ObjectPtr< ArrayShiftNode_obj > ArrayShiftNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< ArrayShiftNode_obj > __this = new ArrayShiftNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< ArrayShiftNode_obj > ArrayShiftNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	ArrayShiftNode_obj *__this = (ArrayShiftNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ArrayShiftNode_obj), true, "armory.logicnode.ArrayShiftNode"));
	*(void **)__this = ArrayShiftNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

ArrayShiftNode_obj::ArrayShiftNode_obj()
{
}

hx::Val ArrayShiftNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ArrayShiftNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ArrayShiftNode_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayShiftNode_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ArrayShiftNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayShiftNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArrayShiftNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayShiftNode_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayShiftNode_obj::__mClass;

void ArrayShiftNode_obj::__register()
{
	hx::Object *dummy = new ArrayShiftNode_obj;
	ArrayShiftNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.ArrayShiftNode","\x0d","\xdf","\x44","\x56");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ArrayShiftNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ArrayShiftNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayShiftNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArrayShiftNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayShiftNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayShiftNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
