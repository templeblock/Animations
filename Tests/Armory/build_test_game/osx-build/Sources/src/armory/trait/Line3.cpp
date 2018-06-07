// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_trait_Line3
#include <armory/trait/Line3.h>
#endif
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2c882a092db5f795_582_new,"armory.trait.Line3","new",0x06868e1d,"armory.trait.Line3.new","armory/trait/PhysicsBreak.hx",582,0x7f52e3b0)
HX_LOCAL_STACK_FRAME(_hx_pos_2c882a092db5f795_587_delta,"armory.trait.Line3","delta",0xddd24ef5,"armory.trait.Line3.delta","armory/trait/PhysicsBreak.hx",587,0x7f52e3b0)
namespace armory{
namespace trait{

void Line3_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2c882a092db5f795_582_new)
HXLINE( 583)		this->start =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 584)		this->end =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}

Dynamic Line3_obj::__CreateEmpty() { return new Line3_obj; }

void *Line3_obj::_hx_vtable = 0;

Dynamic Line3_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Line3_obj > _hx_result = new Line3_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Line3_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x35101c8f;
}

 ::iron::math::Vec4 Line3_obj::delta( ::iron::math::Vec4 result){
            	HX_STACKFRAME(&_hx_pos_2c882a092db5f795_587_delta)
HXLINE( 588)		result->subvecs(this->end,this->start);
HXLINE( 589)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Line3_obj,delta,return )


hx::ObjectPtr< Line3_obj > Line3_obj::__new() {
	hx::ObjectPtr< Line3_obj > __this = new Line3_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Line3_obj > Line3_obj::__alloc(hx::Ctx *_hx_ctx) {
	Line3_obj *__this = (Line3_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Line3_obj), true, "armory.trait.Line3"));
	*(void **)__this = Line3_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Line3_obj::Line3_obj()
{
}

void Line3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Line3);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_END_CLASS();
}

void Line3_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
}

hx::Val Line3_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return hx::Val( end ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start ); }
		if (HX_FIELD_EQ(inName,"delta") ) { return hx::Val( delta_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Line3_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Line3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("start","\x62","\x74","\x0b","\x84"));
	outFields->push(HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Line3_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(Line3_obj,start),HX_HCSTRING("start","\x62","\x74","\x0b","\x84")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(Line3_obj,end),HX_HCSTRING("end","\xdb","\x03","\x4d","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Line3_obj_sStaticStorageInfo = 0;
#endif

static ::String Line3_obj_sMemberFields[] = {
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("delta","\xf8","\xe7","\x26","\xd7"),
	::String(null()) };

static void Line3_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Line3_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Line3_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Line3_obj::__mClass,"__mClass");
};

#endif

hx::Class Line3_obj::__mClass;

void Line3_obj::__register()
{
	hx::Object *dummy = new Line3_obj;
	Line3_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.Line3","\xab","\x3b","\x0c","\xd8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Line3_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Line3_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Line3_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Line3_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Line3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Line3_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait
