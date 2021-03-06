// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_iron_system_Storage
#include <iron/system/Storage.h>
#endif
#ifndef INCLUDED_kha_Storage
#include <kha/Storage.h>
#endif
#ifndef INCLUDED_kha_StorageFile
#include <kha/StorageFile.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f3a62573c5ad8332_11_init,"iron.system.Storage","init",0xe77b7ffc,"iron.system.Storage.init","iron/system/Storage.hx",11,0xf5f1a71c)
HX_LOCAL_STACK_FRAME(_hx_pos_f3a62573c5ad8332_21_save,"iron.system.Storage","save",0xee0dd029,"iron.system.Storage.save","iron/system/Storage.hx",21,0xf5f1a71c)
HX_LOCAL_STACK_FRAME(_hx_pos_f3a62573c5ad8332_27_clear,"iron.system.Storage","clear",0x2ed77b21,"iron.system.Storage.clear","iron/system/Storage.hx",27,0xf5f1a71c)
HX_LOCAL_STACK_FRAME(_hx_pos_f3a62573c5ad8332_31_set_data,"iron.system.Storage","set_data",0x143e9613,"iron.system.Storage.set_data","iron/system/Storage.hx",31,0xf5f1a71c)
HX_LOCAL_STACK_FRAME(_hx_pos_f3a62573c5ad8332_34_get_data,"iron.system.Storage","get_data",0x65e13c9f,"iron.system.Storage.get_data","iron/system/Storage.hx",34,0xf5f1a71c)
HX_LOCAL_STACK_FRAME(_hx_pos_f3a62573c5ad8332_7_boot,"iron.system.Storage","boot",0xe2dbc91e,"iron.system.Storage.boot","iron/system/Storage.hx",7,0xf5f1a71c)
HX_LOCAL_STACK_FRAME(_hx_pos_f3a62573c5ad8332_9_boot,"iron.system.Storage","boot",0xe2dbc91e,"iron.system.Storage.boot","iron/system/Storage.hx",9,0xf5f1a71c)
namespace iron{
namespace _hx_system{

void Storage_obj::__construct() { }

Dynamic Storage_obj::__CreateEmpty() { return new Storage_obj; }

void *Storage_obj::_hx_vtable = 0;

Dynamic Storage_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Storage_obj > _hx_result = new Storage_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Storage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x769bea84;
}

 ::kha::StorageFile Storage_obj::file;

 ::Dynamic Storage_obj::_data;

void Storage_obj::init(){
            	HX_STACKFRAME(&_hx_pos_f3a62573c5ad8332_11_init)
HXLINE(  12)		::iron::_hx_system::Storage_obj::file = ::kha::Storage_obj::defaultFile();
HXLINE(  13)		if (hx::IsNotNull( ::iron::_hx_system::Storage_obj::file )) {
HXLINE(  14)			::iron::_hx_system::Storage_obj::_data = ::iron::_hx_system::Storage_obj::file->readObject();
HXLINE(  15)			if (hx::IsNull( ::iron::_hx_system::Storage_obj::_data )) {
HXLINE(  15)				::iron::_hx_system::Storage_obj::_data =  ::Dynamic(hx::Anon_obj::Create(0));
            			}
HXLINE(  16)			::iron::_hx_system::Storage_obj::save();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Storage_obj,init,(void))

void Storage_obj::save(){
            	HX_STACKFRAME(&_hx_pos_f3a62573c5ad8332_21_save)
HXDLIN(  21)		if (hx::IsNotNull( ::iron::_hx_system::Storage_obj::file )) {
HXLINE(  22)			::iron::_hx_system::Storage_obj::file->writeObject(::iron::_hx_system::Storage_obj::_data);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Storage_obj,save,(void))

void Storage_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_f3a62573c5ad8332_27_clear)
HXDLIN(  27)		::iron::_hx_system::Storage_obj::_data =  ::Dynamic(hx::Anon_obj::Create(0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Storage_obj,clear,(void))

 ::Dynamic Storage_obj::set_data( ::Dynamic d){
            	HX_STACKFRAME(&_hx_pos_f3a62573c5ad8332_31_set_data)
HXDLIN(  31)		return (::iron::_hx_system::Storage_obj::_data = d);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Storage_obj,set_data,return )

 ::Dynamic Storage_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_f3a62573c5ad8332_34_get_data)
HXLINE(  35)		if (hx::IsNull( ::iron::_hx_system::Storage_obj::file )) {
HXLINE(  35)			::iron::_hx_system::Storage_obj::init();
            		}
HXLINE(  36)		return ::iron::_hx_system::Storage_obj::_data;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Storage_obj,get_data,return )


Storage_obj::Storage_obj()
{
}

bool Storage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { outValue = ( file ); return true; }
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_data() ); return true; } }
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"save") ) { outValue = save_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { outValue = ( _data ); return true; }
		if (HX_FIELD_EQ(inName,"clear") ) { outValue = clear_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_data") ) { outValue = set_data_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_data") ) { outValue = get_data_dyn(); return true; }
	}
	return false;
}

bool Storage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=ioValue.Cast<  ::kha::StorageFile >(); return true; }
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways)  ioValue = ( set_data(ioValue.Cast<  ::Dynamic >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Storage_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Storage_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::StorageFile*/ ,(void *) &Storage_obj::file,HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Storage_obj::_data,HX_HCSTRING("_data","\x09","\x72","\x74","\xf5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Storage_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Storage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Storage_obj::file,"file");
	HX_MARK_MEMBER_NAME(Storage_obj::_data,"_data");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Storage_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Storage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Storage_obj::file,"file");
	HX_VISIT_MEMBER_NAME(Storage_obj::_data,"_data");
};

#endif

hx::Class Storage_obj::__mClass;

static ::String Storage_obj_sStaticFields[] = {
	HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"),
	HX_HCSTRING("_data","\x09","\x72","\x74","\xf5"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("save","\x3d","\x8b","\x4d","\x4c"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	::String(null())
};

void Storage_obj::__register()
{
	hx::Object *dummy = new Storage_obj;
	Storage_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.system.Storage","\x02","\x43","\x52","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Storage_obj::__GetStatic;
	__mClass->mSetStaticField = &Storage_obj::__SetStatic;
	__mClass->mMarkFunc = Storage_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Storage_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Storage_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Storage_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Storage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Storage_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Storage_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f3a62573c5ad8332_7_boot)
HXDLIN(   7)		file = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_f3a62573c5ad8332_9_boot)
HXDLIN(   9)		_data = null();
            	}
}

} // end namespace iron
} // end namespace system
