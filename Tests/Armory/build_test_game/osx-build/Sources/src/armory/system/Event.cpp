// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_system_Event
#include <armory/system/Event.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f4e5e1a3081884fb_7_send,"armory.system.Event","send",0xb32fdd07,"armory.system.Event.send","armory/system/Event.hx",7,0x8e797f2f)
HX_LOCAL_STACK_FRAME(_hx_pos_f4e5e1a3081884fb_13_get,"armory.system.Event","get",0xd896adb7,"armory.system.Event.get","armory/system/Event.hx",13,0x8e797f2f)
HX_LOCAL_STACK_FRAME(_hx_pos_f4e5e1a3081884fb_16_add,"armory.system.Event","add",0xd8921f42,"armory.system.Event.add","armory/system/Event.hx",16,0x8e797f2f)
HX_LOCAL_STACK_FRAME(_hx_pos_f4e5e1a3081884fb_25_remove,"armory.system.Event","remove",0x5daa99c3,"armory.system.Event.remove","armory/system/Event.hx",25,0x8e797f2f)
HX_LOCAL_STACK_FRAME(_hx_pos_f4e5e1a3081884fb_28_removeListener,"armory.system.Event","removeListener",0x1f325157,"armory.system.Event.removeListener","armory/system/Event.hx",28,0x8e797f2f)
HX_LOCAL_STACK_FRAME(_hx_pos_f4e5e1a3081884fb_5_boot,"armory.system.Event","boot",0xa7fad3f1,"armory.system.Event.boot","armory/system/Event.hx",5,0x8e797f2f)
namespace armory{
namespace _hx_system{

void Event_obj::__construct() { }

Dynamic Event_obj::__CreateEmpty() { return new Event_obj; }

void *Event_obj::_hx_vtable = 0;

Dynamic Event_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Event_obj > _hx_result = new Event_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Event_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33b330ad;
}

 ::haxe::ds::StringMap Event_obj::events;

void Event_obj::send(::String name,hx::Null< int >  __o_mask){
int mask = __o_mask.Default(-1);
            	HX_STACKFRAME(&_hx_pos_f4e5e1a3081884fb_7_send)
HXLINE(   8)		::Array< ::Dynamic> entries = ::armory::_hx_system::Event_obj::get(name);
HXLINE(   9)		if (hx::IsNotNull( entries )) {
HXLINE(   9)			int _g = (int)0;
HXDLIN(   9)			while((_g < entries->length)){
HXLINE(   9)				 ::Dynamic e = entries->__get(_g);
HXDLIN(   9)				_g = (_g + (int)1);
HXDLIN(   9)				bool _hx_tmp;
HXDLIN(   9)				if ((mask != (int)-1)) {
HXLINE(   9)					_hx_tmp = (mask == ( (int)(e->__Field(HX_("mask",ec,40,56,48),hx::paccDynamic)) ));
            				}
            				else {
HXLINE(   9)					_hx_tmp = true;
            				}
HXDLIN(   9)				if (_hx_tmp) {
HXLINE(   9)					e->__Field(HX_("onEvent",7b,66,02,0c),hx::paccDynamic)();
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Event_obj,send,(void))

::Array< ::Dynamic> Event_obj::get(::String name){
            	HX_STACKFRAME(&_hx_pos_f4e5e1a3081884fb_13_get)
HXDLIN(  13)		return ( (::Array< ::Dynamic>)(::armory::_hx_system::Event_obj::events->get(name)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Event_obj,get,return )

 ::Dynamic Event_obj::add(::String name, ::Dynamic onEvent,hx::Null< int >  __o_mask){
int mask = __o_mask.Default(-1);
            	HX_STACKFRAME(&_hx_pos_f4e5e1a3081884fb_16_add)
HXLINE(  17)		 ::Dynamic e =  ::Dynamic(hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("onEvent",7b,66,02,0c),onEvent)
            			->setFixed(1,HX_("mask",ec,40,56,48),mask)
            			->setFixed(2,HX_("name",4b,72,ff,48),name));
HXLINE(  18)		::Array< ::Dynamic> entries = ( (::Array< ::Dynamic>)(::armory::_hx_system::Event_obj::events->get(name)) );
HXLINE(  19)		if (hx::IsNotNull( entries )) {
HXLINE(  19)			entries->push(e);
            		}
            		else {
HXLINE(  20)			::armory::_hx_system::Event_obj::events->set(name,::Array_obj< ::Dynamic>::__new(1)->init(0,e));
            		}
HXLINE(  21)		return e;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Event_obj,add,return )

void Event_obj::remove(::String name){
            	HX_STACKFRAME(&_hx_pos_f4e5e1a3081884fb_25_remove)
HXDLIN(  25)		::armory::_hx_system::Event_obj::events->remove(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Event_obj,remove,(void))

void Event_obj::removeListener( ::Dynamic event){
            	HX_STACKFRAME(&_hx_pos_f4e5e1a3081884fb_28_removeListener)
HXLINE(  29)		::Array< ::Dynamic> entries = ( (::Array< ::Dynamic>)(::armory::_hx_system::Event_obj::events->get(( (::String)(event->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) ))) );
HXLINE(  30)		if (hx::IsNotNull( entries )) {
HXLINE(  30)			entries->remove(event);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Event_obj,removeListener,(void))


Event_obj::Event_obj()
{
}

bool Event_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"send") ) { outValue = send_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { outValue = ( events ); return true; }
		if (HX_FIELD_EQ(inName,"remove") ) { outValue = remove_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"removeListener") ) { outValue = removeListener_dyn(); return true; }
	}
	return false;
}

bool Event_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"events") ) { events=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Event_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Event_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Event_obj::events,HX_HCSTRING("events","\x19","\x4f","\x6a","\x96")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Event_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Event_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Event_obj::events,"events");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Event_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Event_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Event_obj::events,"events");
};

#endif

hx::Class Event_obj::__mClass;

static ::String Event_obj_sStaticFields[] = {
	HX_HCSTRING("events","\x19","\x4f","\x6a","\x96"),
	HX_HCSTRING("send","\x48","\x8d","\x50","\x4c"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeListener","\xd8","\x3c","\x88","\x02"),
	::String(null())
};

void Event_obj::__register()
{
	hx::Object *dummy = new Event_obj;
	Event_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.system.Event","\x0f","\x29","\x95","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Event_obj::__GetStatic;
	__mClass->mSetStaticField = &Event_obj::__SetStatic;
	__mClass->mMarkFunc = Event_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Event_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Event_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Event_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Event_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Event_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Event_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f4e5e1a3081884fb_5_boot)
HXDLIN(   5)		events =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace armory
} // end namespace system
