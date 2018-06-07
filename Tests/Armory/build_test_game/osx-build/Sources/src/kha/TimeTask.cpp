// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_kha_TimeTask
#include <kha/TimeTask.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8f7ed6afeb08a1de_16_new,"kha.TimeTask","new",0xd6704a8e,"kha.TimeTask.new","kha/Scheduler.hx",16,0xd275db8e)
namespace kha{

void TimeTask_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8f7ed6afeb08a1de_16_new)
            	}

Dynamic TimeTask_obj::__CreateEmpty() { return new TimeTask_obj; }

void *TimeTask_obj::_hx_vtable = 0;

Dynamic TimeTask_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TimeTask_obj > _hx_result = new TimeTask_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TimeTask_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02ecd666;
}


TimeTask_obj::TimeTask_obj()
{
}

void TimeTask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimeTask);
	HX_MARK_MEMBER_NAME(task,"task");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(period,"period");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(groupId,"groupId");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_END_CLASS();
}

void TimeTask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(task,"task");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(period,"period");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(next,"next");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(groupId,"groupId");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(paused,"paused");
}

hx::Val TimeTask_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"task") ) { return hx::Val( task ); }
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"period") ) { return hx::Val( period ); }
		if (HX_FIELD_EQ(inName,"active") ) { return hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"paused") ) { return hx::Val( paused ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"groupId") ) { return hx::Val( groupId ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return hx::Val( duration ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TimeTask_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"task") ) { task=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"period") ) { period=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"groupId") ) { groupId=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimeTask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("period","\x01","\x61","\x1b","\x3b"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("next","\xf3","\x84","\x02","\x49"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("groupId","\xfa","\x80","\xf7","\x86"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TimeTask_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TimeTask_obj,task),HX_HCSTRING("task","\x45","\xbf","\xf6","\x4c")},
	{hx::fsFloat,(int)offsetof(TimeTask_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsFloat,(int)offsetof(TimeTask_obj,period),HX_HCSTRING("period","\x01","\x61","\x1b","\x3b")},
	{hx::fsFloat,(int)offsetof(TimeTask_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsFloat,(int)offsetof(TimeTask_obj,next),HX_HCSTRING("next","\xf3","\x84","\x02","\x49")},
	{hx::fsInt,(int)offsetof(TimeTask_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(TimeTask_obj,groupId),HX_HCSTRING("groupId","\xfa","\x80","\xf7","\x86")},
	{hx::fsBool,(int)offsetof(TimeTask_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(TimeTask_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TimeTask_obj_sStaticStorageInfo = 0;
#endif

static ::String TimeTask_obj_sMemberFields[] = {
	HX_HCSTRING("task","\x45","\xbf","\xf6","\x4c"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("period","\x01","\x61","\x1b","\x3b"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("groupId","\xfa","\x80","\xf7","\x86"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	::String(null()) };

static void TimeTask_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimeTask_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TimeTask_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimeTask_obj::__mClass,"__mClass");
};

#endif

hx::Class TimeTask_obj::__mClass;

void TimeTask_obj::__register()
{
	hx::Object *dummy = new TimeTask_obj;
	TimeTask_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.TimeTask","\x9c","\xab","\x00","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TimeTask_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TimeTask_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TimeTask_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TimeTask_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TimeTask_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TimeTask_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
