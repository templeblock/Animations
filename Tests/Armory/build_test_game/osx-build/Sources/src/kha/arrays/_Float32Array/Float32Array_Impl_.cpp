// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_c5728fd05c542abe
#define INCLUDED_c5728fd05c542abe
#include "cpp_float32array.h"
#endif
#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <kha/arrays/Float32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_arrays__Float32Array_Float32Array_Impl_
#include <kha/arrays/_Float32Array/Float32Array_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4188f1d07c06dee0_41__new,"kha.arrays._Float32Array.Float32Array_Impl_","_new",0x9cf7ebf6,"kha.arrays._Float32Array.Float32Array_Impl_._new","kha/arrays/Float32Array.hx",41,0x455b1036)
HX_LOCAL_STACK_FRAME(_hx_pos_4188f1d07c06dee0_46_free,"kha.arrays._Float32Array.Float32Array_Impl_","free",0xa19b7341,"kha.arrays._Float32Array.Float32Array_Impl_.free","kha/arrays/Float32Array.hx",46,0x455b1036)
HX_LOCAL_STACK_FRAME(_hx_pos_4188f1d07c06dee0_52_get_length,"kha.arrays._Float32Array.Float32Array_Impl_","get_length",0x04aa7904,"kha.arrays._Float32Array.Float32Array_Impl_.get_length","kha/arrays/Float32Array.hx",52,0x455b1036)
HX_LOCAL_STACK_FRAME(_hx_pos_4188f1d07c06dee0_56_set,"kha.arrays._Float32Array.Float32Array_Impl_","set",0x62576ead,"kha.arrays._Float32Array.Float32Array_Impl_.set","kha/arrays/Float32Array.hx",56,0x455b1036)
HX_LOCAL_STACK_FRAME(_hx_pos_4188f1d07c06dee0_60_get,"kha.arrays._Float32Array.Float32Array_Impl_","get",0x624e53a1,"kha.arrays._Float32Array.Float32Array_Impl_.get","kha/arrays/Float32Array.hx",60,0x455b1036)
HX_LOCAL_STACK_FRAME(_hx_pos_4188f1d07c06dee0_65_arrayRead,"kha.arrays._Float32Array.Float32Array_Impl_","arrayRead",0xfaa552da,"kha.arrays._Float32Array.Float32Array_Impl_.arrayRead","kha/arrays/Float32Array.hx",65,0x455b1036)
HX_LOCAL_STACK_FRAME(_hx_pos_4188f1d07c06dee0_70_arrayWrite,"kha.arrays._Float32Array.Float32Array_Impl_","arrayWrite",0x3fa1f8db,"kha.arrays._Float32Array.Float32Array_Impl_.arrayWrite","kha/arrays/Float32Array.hx",70,0x455b1036)
namespace kha{
namespace arrays{
namespace _Float32Array{

void Float32Array_Impl__obj::__construct() { }

Dynamic Float32Array_Impl__obj::__CreateEmpty() { return new Float32Array_Impl__obj; }

void *Float32Array_Impl__obj::_hx_vtable = 0;

Dynamic Float32Array_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Float32Array_Impl__obj > _hx_result = new Float32Array_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Float32Array_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7917dd65;
}

 ::kha::arrays::Float32ArrayPrivate Float32Array_Impl__obj::_new(hx::Null< int >  __o_elements){
int elements = __o_elements.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_4188f1d07c06dee0_41__new)
HXDLIN(  41)		 ::kha::arrays::Float32ArrayPrivate this1 =  ::kha::arrays::Float32ArrayPrivate_obj::__alloc( HX_CTX ,elements);
HXDLIN(  41)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Array_Impl__obj,_new,return )

void Float32Array_Impl__obj::free( ::kha::arrays::Float32ArrayPrivate this1){
            	HX_STACKFRAME(&_hx_pos_4188f1d07c06dee0_46_free)
HXDLIN(  46)		this1->self.free();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Array_Impl__obj,free,(void))

int Float32Array_Impl__obj::get_length( ::kha::arrays::Float32ArrayPrivate this1){
            	HX_STACKFRAME(&_hx_pos_4188f1d07c06dee0_52_get_length)
HXDLIN(  52)		return this1->self.length();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Float32Array_Impl__obj,get_length,return )

float Float32Array_Impl__obj::set( ::kha::arrays::Float32ArrayPrivate this1,int index,float value){
            	HX_STACKFRAME(&_hx_pos_4188f1d07c06dee0_56_set)
HXDLIN(  56)		return this1->self.set(index,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float32Array_Impl__obj,set,return )

float Float32Array_Impl__obj::get( ::kha::arrays::Float32ArrayPrivate this1,int index){
            	HX_STACKFRAME(&_hx_pos_4188f1d07c06dee0_60_get)
HXDLIN(  60)		return this1->self.get(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Float32Array_Impl__obj,get,return )

float Float32Array_Impl__obj::arrayRead( ::kha::arrays::Float32ArrayPrivate this1,int index){
            	HX_STACKFRAME(&_hx_pos_4188f1d07c06dee0_65_arrayRead)
HXDLIN(  65)		return this1->self.get(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Float32Array_Impl__obj,arrayRead,return )

float Float32Array_Impl__obj::arrayWrite( ::kha::arrays::Float32ArrayPrivate this1,int index,float value){
            	HX_STACKFRAME(&_hx_pos_4188f1d07c06dee0_70_arrayWrite)
HXDLIN(  70)		return this1->self.set(index,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Float32Array_Impl__obj,arrayWrite,return )


Float32Array_Impl__obj::Float32Array_Impl__obj()
{
}

bool Float32Array_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { outValue = set_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"free") ) { outValue = free_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arrayRead") ) { outValue = arrayRead_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"arrayWrite") ) { outValue = arrayWrite_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Float32Array_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Float32Array_Impl__obj_sStaticStorageInfo = 0;
#endif

static void Float32Array_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Float32Array_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Float32Array_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Float32Array_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Float32Array_Impl__obj::__mClass;

static ::String Float32Array_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("arrayRead","\x8f","\x25","\x19","\x95"),
	HX_HCSTRING("arrayWrite","\x86","\x84","\x86","\xca"),
	::String(null())
};

void Float32Array_Impl__obj::__register()
{
	hx::Object *dummy = new Float32Array_Impl__obj;
	Float32Array_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.arrays._Float32Array.Float32Array_Impl_","\xf9","\x11","\x75","\x36");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Float32Array_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Float32Array_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Float32Array_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Float32Array_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Float32Array_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Float32Array_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Float32Array_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace arrays
} // end namespace _Float32Array
