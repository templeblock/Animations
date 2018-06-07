// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_network_State
#include <kha/network/State.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8c287862a903db01_19_new,"kha.network.State","new",0x173558d9,"kha.network.State.new","kha/network/Session.hx",19,0x4384aa94)
namespace kha{
namespace network{

void State_obj::__construct(Float time, ::haxe::io::Bytes data){
            	HX_STACKFRAME(&_hx_pos_8c287862a903db01_19_new)
HXLINE(  20)		this->time = time;
HXLINE(  21)		this->data = data;
            	}

Dynamic State_obj::__CreateEmpty() { return new State_obj; }

void *State_obj::_hx_vtable = 0;

Dynamic State_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< State_obj > _hx_result = new State_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool State_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fdeba3f;
}


hx::ObjectPtr< State_obj > State_obj::__new(Float time, ::haxe::io::Bytes data) {
	hx::ObjectPtr< State_obj > __this = new State_obj();
	__this->__construct(time,data);
	return __this;
}

hx::ObjectPtr< State_obj > State_obj::__alloc(hx::Ctx *_hx_ctx,Float time, ::haxe::io::Bytes data) {
	State_obj *__this = (State_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(State_obj), true, "kha.network.State"));
	*(void **)__this = State_obj::_hx_vtable;
	__this->__construct(time,data);
	return __this;
}

State_obj::State_obj()
{
}

void State_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(State);
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void State_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(data,"data");
}

hx::Val State_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return hx::Val( time ); }
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val State_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void State_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo State_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(State_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(State_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *State_obj_sStaticStorageInfo = 0;
#endif

static ::String State_obj_sMemberFields[] = {
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	::String(null()) };

static void State_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(State_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void State_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(State_obj::__mClass,"__mClass");
};

#endif

hx::Class State_obj::__mClass;

void State_obj::__register()
{
	hx::Object *dummy = new State_obj;
	State_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.network.State","\x67","\xf8","\xd7","\x92");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = State_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(State_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< State_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = State_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = State_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = State_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace network
