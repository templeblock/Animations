// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_GetNameNode
#include <armory/logicnode/GetNameNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_92f5404d518ed0ff_8_new,"armory.logicnode.GetNameNode","new",0x80c5f893,"armory.logicnode.GetNameNode.new","armory/logicnode/GetNameNode.hx",8,0xb58c54ff)
HX_LOCAL_STACK_FRAME(_hx_pos_92f5404d518ed0ff_11_get,"armory.logicnode.GetNameNode","get",0x80c0a8c9,"armory.logicnode.GetNameNode.get","armory/logicnode/GetNameNode.hx",11,0xb58c54ff)
namespace armory{
namespace logicnode{

void GetNameNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_92f5404d518ed0ff_8_new)
HXDLIN(   8)		super::__construct(tree);
            	}

Dynamic GetNameNode_obj::__CreateEmpty() { return new GetNameNode_obj; }

void *GetNameNode_obj::_hx_vtable = 0;

Dynamic GetNameNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GetNameNode_obj > _hx_result = new GetNameNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool GetNameNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1fd594a1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1fd594a1;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

 ::Dynamic GetNameNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_92f5404d518ed0ff_11_get)
HXLINE(  12)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  14)		if (hx::IsNull( object )) {
HXLINE(  14)			return HX_("",00,00,00,00);
            		}
HXLINE(  16)		return object->name;
            	}



hx::ObjectPtr< GetNameNode_obj > GetNameNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< GetNameNode_obj > __this = new GetNameNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< GetNameNode_obj > GetNameNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	GetNameNode_obj *__this = (GetNameNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GetNameNode_obj), true, "armory.logicnode.GetNameNode"));
	*(void **)__this = GetNameNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

GetNameNode_obj::GetNameNode_obj()
{
}

hx::Val GetNameNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GetNameNode_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GetNameNode_obj_sStaticStorageInfo = 0;
#endif

static ::String GetNameNode_obj_sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void GetNameNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GetNameNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GetNameNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GetNameNode_obj::__mClass,"__mClass");
};

#endif

hx::Class GetNameNode_obj::__mClass;

void GetNameNode_obj::__register()
{
	hx::Object *dummy = new GetNameNode_obj;
	GetNameNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.GetNameNode","\x21","\xb3","\x7b","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GetNameNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GetNameNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GetNameNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GetNameNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GetNameNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GetNameNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
