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
#ifndef INCLUDED_armory_logicnode_TranslateOnLocalAxisNode
#include <armory/logicnode/TranslateOnLocalAxisNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_b6d1c59bed1377f9_7_new,"armory.logicnode.TranslateOnLocalAxisNode","new",0x6f6120b5,"armory.logicnode.TranslateOnLocalAxisNode.new","armory/logicnode/TranslateOnLocalAxisNode.hx",7,0x52a04059)
HX_LOCAL_STACK_FRAME(_hx_pos_b6d1c59bed1377f9_16_run,"armory.logicnode.TranslateOnLocalAxisNode","run",0x6f6437a0,"armory.logicnode.TranslateOnLocalAxisNode.run","armory/logicnode/TranslateOnLocalAxisNode.hx",16,0x52a04059)
namespace armory{
namespace logicnode{

void TranslateOnLocalAxisNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_GC_STACKFRAME(&_hx_pos_b6d1c59bed1377f9_7_new)
HXLINE(  10)		this->vec =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(   9)		this->loc =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  13)		super::__construct(tree);
            	}

Dynamic TranslateOnLocalAxisNode_obj::__CreateEmpty() { return new TranslateOnLocalAxisNode_obj; }

void *TranslateOnLocalAxisNode_obj::_hx_vtable = 0;

Dynamic TranslateOnLocalAxisNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TranslateOnLocalAxisNode_obj > _hx_result = new TranslateOnLocalAxisNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TranslateOnLocalAxisNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x654ad0c3;
	}
}

void TranslateOnLocalAxisNode_obj::run(){
            	HX_GC_STACKFRAME(&_hx_pos_b6d1c59bed1377f9_16_run)
HXLINE(  17)		 ::iron::object::Object object = ( ( ::iron::object::Object)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  18)		Float sp = ( (Float)(this->inputs->__get((int)2).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  19)		int l = ( (int)(this->inputs->__get((int)3).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  20)		bool ini = ( (bool)(this->inputs->__get((int)4).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  22)		if (hx::IsNull( object )) {
HXLINE(  22)			return;
            		}
HXLINE(  24)		if ((l == (int)1)) {
HXLINE(  24)			 ::iron::math::Vec4 _hx_tmp = this->loc;
HXDLIN(  24)			 ::iron::math::Mat4 _this = object->transform->world;
HXDLIN(  24)			_hx_tmp->setFrom( ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this->self->_10,_this->self->_11,_this->self->_12,null()));
            		}
            		else {
HXLINE(  25)			if ((l == (int)2)) {
HXLINE(  25)				 ::iron::math::Vec4 _hx_tmp1 = this->loc;
HXDLIN(  25)				 ::iron::math::Mat4 _this1 = object->transform->world;
HXDLIN(  25)				_hx_tmp1->setFrom( ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this1->self->_20,_this1->self->_21,_this1->self->_22,null()));
            			}
            			else {
HXLINE(  26)				if ((l == (int)3)) {
HXLINE(  26)					 ::iron::math::Vec4 _hx_tmp2 = this->loc;
HXDLIN(  26)					 ::iron::math::Mat4 _this2 = object->transform->world;
HXDLIN(  26)					_hx_tmp2->setFrom( ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this2->self->_00,_this2->self->_01,_this2->self->_02,null()));
            				}
            			}
            		}
HXLINE(  28)		if (ini) {
HXLINE(  29)			this->loc->x = -(this->loc->x);
HXLINE(  30)			this->loc->y = -(this->loc->y);
HXLINE(  31)			this->loc->z = -(this->loc->z);
            		}
HXLINE(  34)		this->vec->x = (this->loc->x * sp);
HXLINE(  35)		this->vec->y = (this->loc->y * sp);
HXLINE(  36)		this->vec->z = (this->loc->z * sp);
HXLINE(  38)		object->transform->loc->add(this->vec);
HXLINE(  39)		object->transform->buildMatrix();
HXLINE(  46)		this->super::run();
            	}



hx::ObjectPtr< TranslateOnLocalAxisNode_obj > TranslateOnLocalAxisNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< TranslateOnLocalAxisNode_obj > __this = new TranslateOnLocalAxisNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< TranslateOnLocalAxisNode_obj > TranslateOnLocalAxisNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	TranslateOnLocalAxisNode_obj *__this = (TranslateOnLocalAxisNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TranslateOnLocalAxisNode_obj), true, "armory.logicnode.TranslateOnLocalAxisNode"));
	*(void **)__this = TranslateOnLocalAxisNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

TranslateOnLocalAxisNode_obj::TranslateOnLocalAxisNode_obj()
{
}

void TranslateOnLocalAxisNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TranslateOnLocalAxisNode);
	HX_MARK_MEMBER_NAME(loc,"loc");
	HX_MARK_MEMBER_NAME(vec,"vec");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TranslateOnLocalAxisNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(loc,"loc");
	HX_VISIT_MEMBER_NAME(vec,"vec");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TranslateOnLocalAxisNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"loc") ) { return hx::Val( loc ); }
		if (HX_FIELD_EQ(inName,"vec") ) { return hx::Val( vec ); }
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TranslateOnLocalAxisNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"loc") ) { loc=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vec") ) { vec=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TranslateOnLocalAxisNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("loc","\x80","\x54","\x52","\x00"));
	outFields->push(HX_HCSTRING("vec","\x54","\xe2","\x59","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TranslateOnLocalAxisNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(TranslateOnLocalAxisNode_obj,loc),HX_HCSTRING("loc","\x80","\x54","\x52","\x00")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(TranslateOnLocalAxisNode_obj,vec),HX_HCSTRING("vec","\x54","\xe2","\x59","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TranslateOnLocalAxisNode_obj_sStaticStorageInfo = 0;
#endif

static ::String TranslateOnLocalAxisNode_obj_sMemberFields[] = {
	HX_HCSTRING("loc","\x80","\x54","\x52","\x00"),
	HX_HCSTRING("vec","\x54","\xe2","\x59","\x00"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	::String(null()) };

static void TranslateOnLocalAxisNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TranslateOnLocalAxisNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TranslateOnLocalAxisNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TranslateOnLocalAxisNode_obj::__mClass,"__mClass");
};

#endif

hx::Class TranslateOnLocalAxisNode_obj::__mClass;

void TranslateOnLocalAxisNode_obj::__register()
{
	hx::Object *dummy = new TranslateOnLocalAxisNode_obj;
	TranslateOnLocalAxisNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.TranslateOnLocalAxisNode","\x43","\xa2","\x53","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TranslateOnLocalAxisNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TranslateOnLocalAxisNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TranslateOnLocalAxisNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TranslateOnLocalAxisNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TranslateOnLocalAxisNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TranslateOnLocalAxisNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
