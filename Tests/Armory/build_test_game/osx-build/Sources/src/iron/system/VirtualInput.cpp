// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_iron_system_Input
#include <iron/system/Input.h>
#endif
#ifndef INCLUDED_iron_system_VirtualButton
#include <iron/system/VirtualButton.h>
#endif
#ifndef INCLUDED_iron_system_VirtualInput
#include <iron/system/VirtualInput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3ad20b85b0a6c3fd_77_new,"iron.system.VirtualInput","new",0x7b5345ca,"iron.system.VirtualInput.new","iron/system/Input.hx",77,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_3ad20b85b0a6c3fd_79_setVirtual,"iron.system.VirtualInput","setVirtual",0x99dd2e5f,"iron.system.VirtualInput.setVirtual","iron/system/Input.hx",79,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_3ad20b85b0a6c3fd_93_downVirtual,"iron.system.VirtualInput","downVirtual",0xfc656d33,"iron.system.VirtualInput.downVirtual","iron/system/Input.hx",93,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_3ad20b85b0a6c3fd_100_upVirtual,"iron.system.VirtualInput","upVirtual",0x1e3211da,"iron.system.VirtualInput.upVirtual","iron/system/Input.hx",100,0x32439d6d)
namespace iron{
namespace _hx_system{

void VirtualInput_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3ad20b85b0a6c3fd_77_new)
HXDLIN(  77)		this->virtualButtons = null();
            	}

Dynamic VirtualInput_obj::__CreateEmpty() { return new VirtualInput_obj; }

void *VirtualInput_obj::_hx_vtable = 0;

Dynamic VirtualInput_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VirtualInput_obj > _hx_result = new VirtualInput_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VirtualInput_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x15b014de;
}

void VirtualInput_obj::setVirtual(::String _hx_virtual,::String button){
            	HX_GC_STACKFRAME(&_hx_pos_3ad20b85b0a6c3fd_79_setVirtual)
HXLINE(  80)		if (hx::IsNull( ::iron::_hx_system::Input_obj::virtualButtons )) {
HXLINE(  80)			::iron::_hx_system::Input_obj::virtualButtons =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  82)		 ::iron::_hx_system::VirtualButton vb = ::iron::_hx_system::Input_obj::virtualButtons->get(_hx_virtual).StaticCast<  ::iron::_hx_system::VirtualButton >();
HXLINE(  83)		if (hx::IsNull( vb )) {
HXLINE(  84)			vb =  ::iron::_hx_system::VirtualButton_obj::__alloc( HX_CTX );
HXLINE(  85)			::iron::_hx_system::Input_obj::virtualButtons->set(_hx_virtual,vb);
            		}
HXLINE(  88)		if (hx::IsNull( this->virtualButtons )) {
HXLINE(  88)			this->virtualButtons =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE(  89)		this->virtualButtons->set(button,vb);
            	}


HX_DEFINE_DYNAMIC_FUNC2(VirtualInput_obj,setVirtual,(void))

void VirtualInput_obj::downVirtual(::String button){
            	HX_STACKFRAME(&_hx_pos_3ad20b85b0a6c3fd_93_downVirtual)
HXDLIN(  93)		if (hx::IsNotNull( this->virtualButtons )) {
HXLINE(  94)			 ::iron::_hx_system::VirtualButton vb = this->virtualButtons->get(button).StaticCast<  ::iron::_hx_system::VirtualButton >();
HXLINE(  95)			if (hx::IsNotNull( vb )) {
HXLINE(  95)				vb->down = true;
HXDLIN(  95)				vb->started = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VirtualInput_obj,downVirtual,(void))

void VirtualInput_obj::upVirtual(::String button){
            	HX_STACKFRAME(&_hx_pos_3ad20b85b0a6c3fd_100_upVirtual)
HXDLIN( 100)		if (hx::IsNotNull( this->virtualButtons )) {
HXLINE( 101)			 ::iron::_hx_system::VirtualButton vb = this->virtualButtons->get(button).StaticCast<  ::iron::_hx_system::VirtualButton >();
HXLINE( 102)			if (hx::IsNotNull( vb )) {
HXLINE( 102)				vb->down = false;
HXDLIN( 102)				vb->released = true;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(VirtualInput_obj,upVirtual,(void))


hx::ObjectPtr< VirtualInput_obj > VirtualInput_obj::__new() {
	hx::ObjectPtr< VirtualInput_obj > __this = new VirtualInput_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VirtualInput_obj > VirtualInput_obj::__alloc(hx::Ctx *_hx_ctx) {
	VirtualInput_obj *__this = (VirtualInput_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VirtualInput_obj), true, "iron.system.VirtualInput"));
	*(void **)__this = VirtualInput_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VirtualInput_obj::VirtualInput_obj()
{
}

void VirtualInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VirtualInput);
	HX_MARK_MEMBER_NAME(virtualButtons,"virtualButtons");
	HX_MARK_END_CLASS();
}

void VirtualInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(virtualButtons,"virtualButtons");
}

hx::Val VirtualInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"upVirtual") ) { return hx::Val( upVirtual_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setVirtual") ) { return hx::Val( setVirtual_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"downVirtual") ) { return hx::Val( downVirtual_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"virtualButtons") ) { return hx::Val( virtualButtons ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VirtualInput_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"virtualButtons") ) { virtualButtons=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VirtualInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("virtualButtons","\x76","\x83","\x6f","\x8c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VirtualInput_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(VirtualInput_obj,virtualButtons),HX_HCSTRING("virtualButtons","\x76","\x83","\x6f","\x8c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VirtualInput_obj_sStaticStorageInfo = 0;
#endif

static ::String VirtualInput_obj_sMemberFields[] = {
	HX_HCSTRING("virtualButtons","\x76","\x83","\x6f","\x8c"),
	HX_HCSTRING("setVirtual","\x89","\xc2","\xf0","\x69"),
	HX_HCSTRING("downVirtual","\xc9","\x7d","\x73","\x3d"),
	HX_HCSTRING("upVirtual","\xf0","\xb0","\xc9","\x52"),
	::String(null()) };

static void VirtualInput_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VirtualInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VirtualInput_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VirtualInput_obj::__mClass,"__mClass");
};

#endif

hx::Class VirtualInput_obj::__mClass;

void VirtualInput_obj::__register()
{
	hx::Object *dummy = new VirtualInput_obj;
	VirtualInput_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.system.VirtualInput","\xd8","\x58","\xfe","\xe3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VirtualInput_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VirtualInput_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VirtualInput_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VirtualInput_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VirtualInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VirtualInput_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron
} // end namespace system
