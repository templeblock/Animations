// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_c5728fd05c542abe
#define INCLUDED_c5728fd05c542abe
#include "cpp_float32array.h"
#endif
#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <kha/arrays/Float32ArrayPrivate.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_850b6f2c8319eb03_33_new,"kha.arrays.Float32ArrayPrivate","new",0xe829d6ed,"kha.arrays.Float32ArrayPrivate.new","kha/arrays/Float32Array.hx",33,0x455b1036)
namespace kha{
namespace arrays{

void Float32ArrayPrivate_obj::__construct(hx::Null< int >  __o_elements){
int elements = __o_elements.Default(0);
            	HX_STACKFRAME(&_hx_pos_850b6f2c8319eb03_33_new)
HXLINE(  34)		this->self = float32array();
HXLINE(  35)		if ((elements > (int)0)) {
HXLINE(  35)			this->self.alloc(elements);
            		}
            	}

Dynamic Float32ArrayPrivate_obj::__CreateEmpty() { return new Float32ArrayPrivate_obj; }

void *Float32ArrayPrivate_obj::_hx_vtable = 0;

Dynamic Float32ArrayPrivate_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Float32ArrayPrivate_obj > _hx_result = new Float32ArrayPrivate_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Float32ArrayPrivate_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x14447f07;
}


hx::ObjectPtr< Float32ArrayPrivate_obj > Float32ArrayPrivate_obj::__new(hx::Null< int >  __o_elements) {
	hx::ObjectPtr< Float32ArrayPrivate_obj > __this = new Float32ArrayPrivate_obj();
	__this->__construct(__o_elements);
	return __this;
}

hx::ObjectPtr< Float32ArrayPrivate_obj > Float32ArrayPrivate_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_elements) {
	Float32ArrayPrivate_obj *__this = (Float32ArrayPrivate_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Float32ArrayPrivate_obj), true, "kha.arrays.Float32ArrayPrivate"));
	*(void **)__this = Float32ArrayPrivate_obj::_hx_vtable;
	__this->__construct(__o_elements);
	return __this;
}

Float32ArrayPrivate_obj::Float32ArrayPrivate_obj()
{
}

void Float32ArrayPrivate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Float32ArrayPrivate);
	HX_MARK_MEMBER_NAME(self,"self");
	HX_MARK_END_CLASS();
}

void Float32ArrayPrivate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(self,"self");
}

void Float32ArrayPrivate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Float32ArrayPrivate_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*float32array*/ ,(int)offsetof(Float32ArrayPrivate_obj,self),HX_HCSTRING("self","\x8c","\x8b","\x50","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Float32ArrayPrivate_obj_sStaticStorageInfo = 0;
#endif

static void Float32ArrayPrivate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float32ArrayPrivate_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Float32ArrayPrivate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float32ArrayPrivate_obj::__mClass,"__mClass");
};

#endif

hx::Class Float32ArrayPrivate_obj::__mClass;

void Float32ArrayPrivate_obj::__register()
{
	hx::Object *dummy = new Float32ArrayPrivate_obj;
	Float32ArrayPrivate_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.arrays.Float32ArrayPrivate","\x7b","\xdc","\x86","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Float32ArrayPrivate_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Float32ArrayPrivate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Float32ArrayPrivate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Float32ArrayPrivate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Float32ArrayPrivate_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace arrays
