// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_ArrayColorNode
#include <armory/logicnode/ArrayColorNode.h>
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
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5b93a614496c531b_5_new,"armory.logicnode.ArrayColorNode","new",0xce1c5860,"armory.logicnode.ArrayColorNode.new","armory/logicnode/ArrayColorNode.hx",5,0x269d9d8e)
HX_LOCAL_STACK_FRAME(_hx_pos_5b93a614496c531b_14_get,"armory.logicnode.ArrayColorNode","get",0xce170896,"armory.logicnode.ArrayColorNode.get","armory/logicnode/ArrayColorNode.hx",14,0x269d9d8e)
HX_LOCAL_STACK_FRAME(_hx_pos_5b93a614496c531b_27_set,"armory.logicnode.ArrayColorNode","set",0xce2023a2,"armory.logicnode.ArrayColorNode.set","armory/logicnode/ArrayColorNode.hx",27,0x269d9d8e)
namespace armory{
namespace logicnode{

void ArrayColorNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_5b93a614496c531b_5_new)
HXLINE(   8)		this->initialized = false;
HXLINE(   7)		this->value = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  11)		super::__construct(tree);
            	}

Dynamic ArrayColorNode_obj::__CreateEmpty() { return new ArrayColorNode_obj; }

void *ArrayColorNode_obj::_hx_vtable = 0;

Dynamic ArrayColorNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArrayColorNode_obj > _hx_result = new ArrayColorNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ArrayColorNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x5f1aafd2;
	}
}

 ::Dynamic ArrayColorNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_5b93a614496c531b_14_get)
HXLINE(  15)		if (!(this->initialized)) {
HXLINE(  16)			this->initialized = true;
HXLINE(  17)			{
HXLINE(  17)				int _g = (int)0;
HXDLIN(  17)				::Array< ::Dynamic> _g1 = this->inputs;
HXDLIN(  17)				while((_g < _g1->length)){
HXLINE(  17)					 ::armory::logicnode::LogicNodeInput inp = _g1->__get(_g).StaticCast<  ::armory::logicnode::LogicNodeInput >();
HXDLIN(  17)					_g = (_g + (int)1);
HXLINE(  18)					 ::iron::math::Vec4 val = ( ( ::iron::math::Vec4)(inp->get()) );
HXLINE(  19)					this->value->push(val);
            				}
            			}
            		}
HXLINE(  23)		if ((from == (int)0)) {
HXLINE(  23)			return this->value;
            		}
            		else {
HXLINE(  23)			return this->value->length;
            		}
HXDLIN(  23)		return null();
            	}


void ArrayColorNode_obj::set( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5b93a614496c531b_27_set)
HXDLIN(  27)		this->value = ( (::Array< ::Dynamic>)(value) );
            	}



hx::ObjectPtr< ArrayColorNode_obj > ArrayColorNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< ArrayColorNode_obj > __this = new ArrayColorNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< ArrayColorNode_obj > ArrayColorNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	ArrayColorNode_obj *__this = (ArrayColorNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ArrayColorNode_obj), true, "armory.logicnode.ArrayColorNode"));
	*(void **)__this = ArrayColorNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

ArrayColorNode_obj::ArrayColorNode_obj()
{
}

void ArrayColorNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayColorNode);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ArrayColorNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ArrayColorNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return hx::Val( initialized ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ArrayColorNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayColorNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ArrayColorNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ArrayColorNode_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsBool,(int)offsetof(ArrayColorNode_obj,initialized),HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ArrayColorNode_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayColorNode_obj_sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void ArrayColorNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayColorNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArrayColorNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayColorNode_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayColorNode_obj::__mClass;

void ArrayColorNode_obj::__register()
{
	hx::Object *dummy = new ArrayColorNode_obj;
	ArrayColorNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.ArrayColorNode","\x6e","\xe8","\xb8","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ArrayColorNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ArrayColorNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayColorNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArrayColorNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayColorNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayColorNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
