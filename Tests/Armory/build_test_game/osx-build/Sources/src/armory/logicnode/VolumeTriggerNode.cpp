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
#ifndef INCLUDED_armory_logicnode_VolumeTriggerNode
#include <armory/logicnode/VolumeTriggerNode.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_math_Mat4
#include <iron/math/Mat4.h>
#endif
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif
#ifndef INCLUDED_iron_object_Transform
#include <iron/object/Transform.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix4
#include <kha/math/FastMatrix4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a785a8459f764223_6_new,"armory.logicnode.VolumeTriggerNode","new",0x13b1f090,"armory.logicnode.VolumeTriggerNode.new","armory/logicnode/VolumeTriggerNode.hx",6,0x6c5fa922)
HX_LOCAL_STACK_FRAME(_hx_pos_a785a8459f764223_18_get,"armory.logicnode.VolumeTriggerNode","get",0x13aca0c6,"armory.logicnode.VolumeTriggerNode.get","armory/logicnode/VolumeTriggerNode.hx",18,0x6c5fa922)
namespace armory{
namespace logicnode{

void VolumeTriggerNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_GC_STACKFRAME(&_hx_pos_a785a8459f764223_6_new)
HXLINE(  12)		this->l2 =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  11)		this->l1 =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(   9)		this->lastOverlap = false;
HXLINE(  15)		super::__construct(tree);
            	}

Dynamic VolumeTriggerNode_obj::__CreateEmpty() { return new VolumeTriggerNode_obj; }

void *VolumeTriggerNode_obj::_hx_vtable = 0;

Dynamic VolumeTriggerNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VolumeTriggerNode_obj > _hx_result = new VolumeTriggerNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VolumeTriggerNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2b66aa1e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2b66aa1e;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

 ::Dynamic VolumeTriggerNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_a785a8459f764223_18_get)
HXLINE(  19)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  20)		 ::iron::object::Object volume = ( ( ::iron::object::Object)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  22)		if (hx::IsNull( object )) {
HXLINE(  22)			return false;
            		}
HXLINE(  23)		if (hx::IsNull( volume )) {
HXLINE(  23)			volume = this->tree->object;
            		}
HXLINE(  25)		 ::iron::object::Transform t1 = object->transform;
HXLINE(  26)		 ::iron::object::Transform t2 = volume->transform;
HXLINE(  27)		this->l1->set(t1->world->self->_30,t1->world->self->_31,t1->world->self->_32,null());
HXLINE(  28)		this->l2->set(t2->world->self->_30,t2->world->self->_31,t2->world->self->_32,null());
HXLINE(  29)		 ::iron::math::Vec4 d1 = t1->dim;
HXLINE(  30)		 ::iron::math::Vec4 d2 = t2->dim;
HXLINE(  32)		bool overlap;
HXDLIN(  32)		bool overlap1;
HXDLIN(  32)		bool overlap2;
HXDLIN(  32)		bool overlap3;
HXDLIN(  32)		bool overlap4;
HXDLIN(  32)		float overlap5 = this->l1->x;
HXDLIN(  32)		Float overlap6 = (overlap5 + ((Float)d1->x / (Float)(int)2));
HXDLIN(  32)		float overlap7 = this->l2->x;
HXDLIN(  32)		if ((overlap6 > (overlap7 - ((Float)d2->x / (Float)(int)2)))) {
HXLINE(  32)			float overlap8 = this->l1->x;
HXDLIN(  32)			Float overlap9 = (overlap8 - ((Float)d1->x / (Float)(int)2));
HXDLIN(  32)			float overlap10 = this->l2->x;
HXDLIN(  32)			overlap4 = (overlap9 < (overlap10 + ((Float)d2->x / (Float)(int)2)));
            		}
            		else {
HXLINE(  32)			overlap4 = false;
            		}
HXDLIN(  32)		if (overlap4) {
HXLINE(  33)			float overlap11 = this->l1->y;
HXDLIN(  33)			Float overlap12 = (overlap11 + ((Float)d1->y / (Float)(int)2));
HXDLIN(  33)			float overlap13 = this->l2->y;
HXLINE(  32)			overlap3 = (overlap12 > (overlap13 - ((Float)d2->y / (Float)(int)2)));
            		}
            		else {
HXLINE(  32)			overlap3 = false;
            		}
HXDLIN(  32)		if (overlap3) {
HXLINE(  33)			float overlap14 = this->l1->y;
HXDLIN(  33)			Float overlap15 = (overlap14 - ((Float)d1->y / (Float)(int)2));
HXDLIN(  33)			float overlap16 = this->l2->y;
HXLINE(  32)			overlap2 = (overlap15 < (overlap16 + ((Float)d2->y / (Float)(int)2)));
            		}
            		else {
HXLINE(  32)			overlap2 = false;
            		}
HXDLIN(  32)		if (overlap2) {
HXLINE(  34)			float overlap17 = this->l1->z;
HXDLIN(  34)			Float overlap18 = (overlap17 + ((Float)d1->z / (Float)(int)2));
HXDLIN(  34)			float overlap19 = this->l2->z;
HXLINE(  32)			overlap1 = (overlap18 > (overlap19 - ((Float)d2->z / (Float)(int)2)));
            		}
            		else {
HXLINE(  32)			overlap1 = false;
            		}
HXDLIN(  32)		if (overlap1) {
HXLINE(  34)			float overlap20 = this->l1->z;
HXDLIN(  34)			Float overlap21 = (overlap20 - ((Float)d1->z / (Float)(int)2));
HXDLIN(  34)			float overlap22 = this->l2->z;
HXLINE(  32)			overlap = (overlap21 < (overlap22 + ((Float)d2->z / (Float)(int)2)));
            		}
            		else {
HXLINE(  32)			overlap = false;
            		}
HXLINE(  36)		bool b = false;
HXLINE(  37)		{
HXLINE(  37)			::String _g = this->property0;
HXDLIN(  37)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("Enter",f8,dc,b3,03)) ){
HXLINE(  39)				if (overlap) {
HXLINE(  39)					b = !(this->lastOverlap);
            				}
            				else {
HXLINE(  39)					b = false;
            				}
HXDLIN(  39)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("Leave",d7,a4,80,05)) ){
HXLINE(  41)				if (!(overlap)) {
HXLINE(  41)					b = this->lastOverlap;
            				}
            				else {
HXLINE(  41)					b = false;
            				}
HXDLIN(  41)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("Overlap",67,6b,61,76)) ){
HXLINE(  43)				b = overlap;
HXDLIN(  43)				goto _hx_goto_1;
            			}
            			_hx_goto_1:;
            		}
HXLINE(  46)		this->lastOverlap = overlap;
HXLINE(  47)		return b;
            	}



hx::ObjectPtr< VolumeTriggerNode_obj > VolumeTriggerNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< VolumeTriggerNode_obj > __this = new VolumeTriggerNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< VolumeTriggerNode_obj > VolumeTriggerNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	VolumeTriggerNode_obj *__this = (VolumeTriggerNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VolumeTriggerNode_obj), true, "armory.logicnode.VolumeTriggerNode"));
	*(void **)__this = VolumeTriggerNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

VolumeTriggerNode_obj::VolumeTriggerNode_obj()
{
}

void VolumeTriggerNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VolumeTriggerNode);
	HX_MARK_MEMBER_NAME(property0,"property0");
	HX_MARK_MEMBER_NAME(lastOverlap,"lastOverlap");
	HX_MARK_MEMBER_NAME(l1,"l1");
	HX_MARK_MEMBER_NAME(l2,"l2");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VolumeTriggerNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(property0,"property0");
	HX_VISIT_MEMBER_NAME(lastOverlap,"lastOverlap");
	HX_VISIT_MEMBER_NAME(l1,"l1");
	HX_VISIT_MEMBER_NAME(l2,"l2");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val VolumeTriggerNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"l1") ) { return hx::Val( l1 ); }
		if (HX_FIELD_EQ(inName,"l2") ) { return hx::Val( l2 ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { return hx::Val( property0 ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastOverlap") ) { return hx::Val( lastOverlap ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VolumeTriggerNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"l1") ) { l1=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"l2") ) { l2=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { property0=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastOverlap") ) { lastOverlap=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VolumeTriggerNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"));
	outFields->push(HX_HCSTRING("lastOverlap","\xd1","\xf7","\xbb","\x5d"));
	outFields->push(HX_HCSTRING("l1","\x45","\x5e","\x00","\x00"));
	outFields->push(HX_HCSTRING("l2","\x46","\x5e","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VolumeTriggerNode_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(VolumeTriggerNode_obj,property0),HX_HCSTRING("property0","\x3b","\x02","\x07","\x05")},
	{hx::fsBool,(int)offsetof(VolumeTriggerNode_obj,lastOverlap),HX_HCSTRING("lastOverlap","\xd1","\xf7","\xbb","\x5d")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(VolumeTriggerNode_obj,l1),HX_HCSTRING("l1","\x45","\x5e","\x00","\x00")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(VolumeTriggerNode_obj,l2),HX_HCSTRING("l2","\x46","\x5e","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VolumeTriggerNode_obj_sStaticStorageInfo = 0;
#endif

static ::String VolumeTriggerNode_obj_sMemberFields[] = {
	HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"),
	HX_HCSTRING("lastOverlap","\xd1","\xf7","\xbb","\x5d"),
	HX_HCSTRING("l1","\x45","\x5e","\x00","\x00"),
	HX_HCSTRING("l2","\x46","\x5e","\x00","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void VolumeTriggerNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VolumeTriggerNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VolumeTriggerNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VolumeTriggerNode_obj::__mClass,"__mClass");
};

#endif

hx::Class VolumeTriggerNode_obj::__mClass;

void VolumeTriggerNode_obj::__register()
{
	hx::Object *dummy = new VolumeTriggerNode_obj;
	VolumeTriggerNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.VolumeTriggerNode","\x9e","\xa8","\x32","\x29");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VolumeTriggerNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VolumeTriggerNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VolumeTriggerNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VolumeTriggerNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VolumeTriggerNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VolumeTriggerNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
