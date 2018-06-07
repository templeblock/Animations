// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_kha_TargetDisplay
#include <kha/TargetDisplay.h>
#endif
namespace kha{

::kha::TargetDisplay TargetDisplay_obj::ById(int id)
{
	return hx::CreateEnum< TargetDisplay_obj >(HX_("ById",b2,25,fc,2b),1,1)->_hx_init(0,id);
}

::kha::TargetDisplay TargetDisplay_obj::Primary;

bool TargetDisplay_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ById",b2,25,fc,2b)) { outValue = TargetDisplay_obj::ById_dyn(); return true; }
	if (inName==HX_("Primary",a2,67,cd,50)) { outValue = TargetDisplay_obj::Primary; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TargetDisplay_obj)

int TargetDisplay_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ById",b2,25,fc,2b)) return 1;
	if (inName==HX_("Primary",a2,67,cd,50)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TargetDisplay_obj,ById,return)

int TargetDisplay_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ById",b2,25,fc,2b)) return 1;
	if (inName==HX_("Primary",a2,67,cd,50)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val TargetDisplay_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ById",b2,25,fc,2b)) return ById_dyn();
	if (inName==HX_("Primary",a2,67,cd,50)) return Primary;
	return super::__Field(inName,inCallProp);
}

static ::String TargetDisplay_obj_sStaticFields[] = {
	HX_("Primary",a2,67,cd,50),
	HX_("ById",b2,25,fc,2b),
	::String(null())
};

static void TargetDisplay_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TargetDisplay_obj::Primary,"Primary");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TargetDisplay_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TargetDisplay_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TargetDisplay_obj::Primary,"Primary");
};
#endif

hx::Class TargetDisplay_obj::__mClass;

Dynamic __Create_TargetDisplay_obj() { return new TargetDisplay_obj; }

void TargetDisplay_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("kha.TargetDisplay","\x07","\x29","\x5f","\x50"), hx::TCanCast< TargetDisplay_obj >,TargetDisplay_obj_sStaticFields,0,
	&__Create_TargetDisplay_obj, &__Create,
	&super::__SGetClass(), &CreateTargetDisplay_obj, TargetDisplay_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , TargetDisplay_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TargetDisplay_obj::__GetStatic;
}

void TargetDisplay_obj::__boot()
{
Primary = hx::CreateEnum< TargetDisplay_obj >(HX_HCSTRING("Primary","\xa2","\x67","\xcd","\x50"),0,0);
}


} // end namespace kha
