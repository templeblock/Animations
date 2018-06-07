// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
#endif
#ifndef INCLUDED_armory_logicnode_MeshNode
#include <armory/logicnode/MeshNode.h>
#endif
#ifndef INCLUDED_iron_Scene
#include <iron/Scene.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_data_Data
#include <iron/data/Data.h>
#endif
#ifndef INCLUDED_iron_data_MeshData
#include <iron/data/MeshData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_86b9f0cf32475e08_14_new,"armory.logicnode.MeshNode","new",0x55d0f6c3,"armory.logicnode.MeshNode.new","armory/logicnode/MeshNode.hx",14,0x08290a0b)
HX_DEFINE_STACK_FRAME(_hx_pos_86b9f0cf32475e08_5_new,"armory.logicnode.MeshNode","new",0x55d0f6c3,"armory.logicnode.MeshNode.new","armory/logicnode/MeshNode.hx",5,0x08290a0b)
HX_LOCAL_STACK_FRAME(_hx_pos_86b9f0cf32475e08_20_get,"armory.logicnode.MeshNode","get",0x55cba6f9,"armory.logicnode.MeshNode.get","armory/logicnode/MeshNode.hx",20,0x08290a0b)
HX_LOCAL_STACK_FRAME(_hx_pos_86b9f0cf32475e08_18_get,"armory.logicnode.MeshNode","get",0x55cba6f9,"armory.logicnode.MeshNode.get","armory/logicnode/MeshNode.hx",18,0x08290a0b)
HX_LOCAL_STACK_FRAME(_hx_pos_86b9f0cf32475e08_27_set,"armory.logicnode.MeshNode","set",0x55d4c205,"armory.logicnode.MeshNode.set","armory/logicnode/MeshNode.hx",27,0x08290a0b)
namespace armory{
namespace logicnode{

void MeshNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::armory::logicnode::MeshNode,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_86b9f0cf32475e08_14_new)
HXLINE(  14)			_gthis->get((int)0);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_86b9f0cf32475e08_5_new)
HXLINE(   8)		this->value = null();
HXLINE(  10)		 ::armory::logicnode::MeshNode _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  11)		super::__construct(tree);
HXLINE(  13)		::iron::Scene_obj::active->notifyOnInit( ::Dynamic(new _hx_Closure_0(_gthis)));
            	}

Dynamic MeshNode_obj::__CreateEmpty() { return new MeshNode_obj; }

void *MeshNode_obj::_hx_vtable = 0;

Dynamic MeshNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MeshNode_obj > _hx_result = new MeshNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MeshNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x4edc3db5;
	}
}

 ::Dynamic MeshNode_obj::get(int from){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::armory::logicnode::MeshNode,_gthis) HXARGC(1)
            		void _hx_run( ::iron::data::MeshData mesh){
            			HX_STACKFRAME(&_hx_pos_86b9f0cf32475e08_20_get)
HXLINE(  20)			_gthis->value = mesh;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_86b9f0cf32475e08_18_get)
HXDLIN(  18)		 ::armory::logicnode::MeshNode _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  19)		::iron::data::Data_obj::getMesh((HX_("mesh_",d2,65,c7,05) + this->property0),this->property0, ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  23)		return this->value;
            	}


void MeshNode_obj::set( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_86b9f0cf32475e08_27_set)
HXDLIN(  27)		this->value = ( ( ::iron::data::MeshData)(value) );
            	}



hx::ObjectPtr< MeshNode_obj > MeshNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< MeshNode_obj > __this = new MeshNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< MeshNode_obj > MeshNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	MeshNode_obj *__this = (MeshNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MeshNode_obj), true, "armory.logicnode.MeshNode"));
	*(void **)__this = MeshNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

MeshNode_obj::MeshNode_obj()
{
}

void MeshNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeshNode);
	HX_MARK_MEMBER_NAME(property0,"property0");
	HX_MARK_MEMBER_NAME(value,"value");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MeshNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(property0,"property0");
	HX_VISIT_MEMBER_NAME(value,"value");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MeshNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { return hx::Val( property0 ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MeshNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::iron::data::MeshData >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { property0=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MeshNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MeshNode_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(MeshNode_obj,property0),HX_HCSTRING("property0","\x3b","\x02","\x07","\x05")},
	{hx::fsObject /*::iron::data::MeshData*/ ,(int)offsetof(MeshNode_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MeshNode_obj_sStaticStorageInfo = 0;
#endif

static ::String MeshNode_obj_sMemberFields[] = {
	HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void MeshNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MeshNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MeshNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MeshNode_obj::__mClass,"__mClass");
};

#endif

hx::Class MeshNode_obj::__mClass;

void MeshNode_obj::__register()
{
	hx::Object *dummy = new MeshNode_obj;
	MeshNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.MeshNode","\x51","\xd9","\x3f","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MeshNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MeshNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MeshNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MeshNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MeshNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MeshNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
