// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_ArrayStringNode
#include <armory/logicnode/ArrayStringNode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_47f5657f87260bdb_3_new,"armory.logicnode.ArrayStringNode","new",0xb44b21dc,"armory.logicnode.ArrayStringNode.new","armory/logicnode/ArrayStringNode.hx",3,0xb02130d6)
HX_LOCAL_STACK_FRAME(_hx_pos_47f5657f87260bdb_12_get,"armory.logicnode.ArrayStringNode","get",0xb445d212,"armory.logicnode.ArrayStringNode.get","armory/logicnode/ArrayStringNode.hx",12,0xb02130d6)
HX_LOCAL_STACK_FRAME(_hx_pos_47f5657f87260bdb_25_set,"armory.logicnode.ArrayStringNode","set",0xb44eed1e,"armory.logicnode.ArrayStringNode.set","armory/logicnode/ArrayStringNode.hx",25,0xb02130d6)
namespace armory{
namespace logicnode{

void ArrayStringNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_47f5657f87260bdb_3_new)
HXLINE(   6)		this->initialized = false;
HXLINE(   5)		this->value = ::Array_obj< ::String >::__new(0);
HXLINE(   9)		super::__construct(tree);
            	}

Dynamic ArrayStringNode_obj::__CreateEmpty() { return new ArrayStringNode_obj; }

void *ArrayStringNode_obj::_hx_vtable = 0;

Dynamic ArrayStringNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArrayStringNode_obj > _hx_result = new ArrayStringNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ArrayStringNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0f1af406) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0f1af406;
	} else {
		return inClassId==(int)0x2e933162;
	}
}

 ::Dynamic ArrayStringNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_47f5657f87260bdb_12_get)
HXLINE(  13)		if (!(this->initialized)) {
HXLINE(  14)			this->initialized = true;
HXLINE(  15)			{
HXLINE(  15)				int _g = (int)0;
HXDLIN(  15)				::Array< ::Dynamic> _g1 = this->inputs;
HXDLIN(  15)				while((_g < _g1->length)){
HXLINE(  15)					 ::armory::logicnode::LogicNodeInput inp = _g1->__get(_g).StaticCast<  ::armory::logicnode::LogicNodeInput >();
HXDLIN(  15)					_g = (_g + (int)1);
HXLINE(  16)					::String val = ( (::String)(inp->get()) );
HXLINE(  17)					this->value->push(val);
            				}
            			}
            		}
HXLINE(  21)		if ((from == (int)0)) {
HXLINE(  21)			return this->value;
            		}
            		else {
HXLINE(  21)			return this->value->length;
            		}
HXDLIN(  21)		return null();
            	}


void ArrayStringNode_obj::set( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_47f5657f87260bdb_25_set)
HXDLIN(  25)		this->value = ( (::Array< ::String >)(value) );
            	}



hx::ObjectPtr< ArrayStringNode_obj > ArrayStringNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< ArrayStringNode_obj > __this = new ArrayStringNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< ArrayStringNode_obj > ArrayStringNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	ArrayStringNode_obj *__this = (ArrayStringNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ArrayStringNode_obj), true, "armory.logicnode.ArrayStringNode"));
	*(void **)__this = ArrayStringNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

ArrayStringNode_obj::ArrayStringNode_obj()
{
}

void ArrayStringNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayStringNode);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(initialized,"initialized");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ArrayStringNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(initialized,"initialized");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val ArrayStringNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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

hx::Val ArrayStringNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayStringNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ArrayStringNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ArrayStringNode_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsBool,(int)offsetof(ArrayStringNode_obj,initialized),HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ArrayStringNode_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayStringNode_obj_sMemberFields[] = {
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void ArrayStringNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayStringNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArrayStringNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayStringNode_obj::__mClass,"__mClass");
};

#endif

hx::Class ArrayStringNode_obj::__mClass;

void ArrayStringNode_obj::__register()
{
	hx::Object *dummy = new ArrayStringNode_obj;
	ArrayStringNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.ArrayStringNode","\xea","\x43","\xee","\x71");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ArrayStringNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ArrayStringNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayStringNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArrayStringNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayStringNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayStringNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
