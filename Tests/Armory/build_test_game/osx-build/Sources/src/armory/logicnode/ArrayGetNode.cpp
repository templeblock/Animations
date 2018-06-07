// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_armory_logicnode_ArrayGetNode
#include <armory/logicnode/ArrayGetNode.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_02d08b102bb35074_6_new,"armory.logicnode.ArrayGetNode","new",0x971f5653,"armory.logicnode.ArrayGetNode.new","armory/logicnode/ArrayGetNode.hx",6,0x8193a37b)
HX_LOCAL_STACK_FRAME(_hx_pos_02d08b102bb35074_9_get,"armory.logicnode.ArrayGetNode","get",0x971a0689,"armory.logicnode.ArrayGetNode.get","armory/logicnode/ArrayGetNode.hx",9,0x8193a37b)
namespace armory{
namespace logicnode{

void ArrayGetNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_02d08b102bb35074_6_new)
HXDLIN(   6)		super::__construct(tree);
            	}

Dynamic ArrayGetNode_obj::__CreateEmpty() { return new ArrayGetNode_obj; }

void *ArrayGetNode_obj::_hx_vtable = 0;

Dynamic ArrayGetNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArrayGetNode_obj > _hx_result = new ArrayGetNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ArrayGetNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x7ef7ceed;
	}
}

 ::Dynamic ArrayGetNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_02d08b102bb35074_9_get)
HXLINE(  10)		::cpp::VirtualArray ar = ( (::cpp::VirtualArray)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  11)		int i = ( (int)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  12)		if ((i < (int)0)) {
HXLINE(  12)			i = (ar->get_length() + i);
            		}
HXLINE(  13)		bool _hx_tmp;
HXDLIN(  13)		if ((i >= (int)0)) {
HXLINE(  13)			_hx_tmp = (i > (ar->get_length() - (int)1));
            		}
            		else {
HXLINE(  13)			_hx_tmp = true;
            		}
HXDLIN(  13)		if (_hx_tmp) {
HXLINE(  14)			::String className = ::Type_obj::getClassName(::Type_obj::getClass(this->tree));
HXLINE(  15)			::String traitName = className.substring((className.lastIndexOf(HX_(".",2e,00,00,00),null()) + (int)1),null());
HXLINE(  16)			::String objectName = this->tree->object->name;
HXLINE(  17)			 ::Dynamic _hx_tmp1 = ::haxe::Log_obj::trace;
HXDLIN(  17)			_hx_tmp1(((((HX_("Logic error (object: ",13,22,82,31) + objectName) + HX_(", trait: ",00,26,d3,f3)) + traitName) + HX_("): Array Get - index out of range",67,28,fd,53)),hx::SourceInfo(HX_("ArrayGetNode.hx",df,3e,54,c4),17,HX_("armory.logicnode.ArrayGetNode",e1,30,e3,81),HX_("get",96,80,4e,00)));
HXLINE(  18)			return null();
            		}
HXLINE(  20)		return ar->__get(i);
            	}



hx::ObjectPtr< ArrayGetNode_obj > ArrayGetNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< ArrayGetNode_obj > __this = new ArrayGetNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< ArrayGetNode_obj > ArrayGetNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	ArrayGetNode_obj *__this = (ArrayGetNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ArrayGetNode_obj), true, "armory.logicnode.ArrayGetNode"));
	*(void **)__this = ArrayGetNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

ArrayGetNode_obj::ArrayGetNode_obj()
{
}

hx::Val ArrayGetNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ArrayGetNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ArrayGetNode_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayGetNode_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void ArrayGetNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayGetNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArrayGetNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayGetNode_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayGetNode_obj::__mClass;

void ArrayGetNode_obj::__register()
{
	hx::Object *dummy = new ArrayGetNode_obj;
	ArrayGetNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.ArrayGetNode","\xe1","\x30","\xe3","\x81");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ArrayGetNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ArrayGetNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayGetNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArrayGetNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayGetNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayGetNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
