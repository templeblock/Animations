// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicNodeInput
#include <armory/logicnode/LogicNodeInput.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
#endif
#ifndef INCLUDED_armory_logicnode_VectorMixNode
#include <armory/logicnode/VectorMixNode.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif
#ifndef INCLUDED_iron_system_Tween
#include <iron/system/Tween.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2229a67defeacb5d_7_new,"armory.logicnode.VectorMixNode","new",0x167cbeab,"armory.logicnode.VectorMixNode.new","armory/logicnode/VectorMixNode.hx",7,0x64278e67)
HX_LOCAL_STACK_FRAME(_hx_pos_2229a67defeacb5d_22_init,"armory.logicnode.VectorMixNode","init",0x9362ce65,"armory.logicnode.VectorMixNode.init","armory/logicnode/VectorMixNode.hx",22,0x64278e67)
HX_LOCAL_STACK_FRAME(_hx_pos_2229a67defeacb5d_46_get,"armory.logicnode.VectorMixNode","get",0x16776ee1,"armory.logicnode.VectorMixNode.get","armory/logicnode/VectorMixNode.hx",46,0x64278e67)
namespace armory{
namespace logicnode{

void VectorMixNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_GC_STACKFRAME(&_hx_pos_2229a67defeacb5d_7_new)
HXLINE(  15)		this->ease = null();
HXLINE(  13)		this->v =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  18)		super::__construct(tree);
            	}

Dynamic VectorMixNode_obj::__CreateEmpty() { return new VectorMixNode_obj; }

void *VectorMixNode_obj::_hx_vtable = 0;

Dynamic VectorMixNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VectorMixNode_obj > _hx_result = new VectorMixNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VectorMixNode_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e933162) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
	} else {
		return inClassId==(int)0x7860df1d;
	}
}

void VectorMixNode_obj::init(){
            	HX_STACKFRAME(&_hx_pos_2229a67defeacb5d_22_init)
HXDLIN(  22)		::String _g = this->property0;
HXDLIN(  22)		::String _hx_switch_0 = _g;
            		if (  (_hx_switch_0==HX_("Back",47,06,ea,2b)) ){
HXLINE(  40)			 ::Dynamic _hx_tmp;
HXDLIN(  40)			if ((this->property1 == HX_("In",05,40,00,00))) {
HXLINE(  40)				_hx_tmp = ::iron::_hx_system::Tween_obj::easeBackIn_dyn();
            			}
            			else {
HXLINE(  40)				if ((this->property1 == HX_("Out",6e,58,3c,00))) {
HXLINE(  40)					_hx_tmp = ::iron::_hx_system::Tween_obj::easeBackOut_dyn();
            				}
            				else {
HXLINE(  40)					_hx_tmp = ::iron::_hx_system::Tween_obj::easeBackInOut_dyn();
            				}
            			}
HXDLIN(  40)			this->ease = _hx_tmp;
HXDLIN(  40)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("Circ",f7,5b,99,2c)) ){
HXLINE(  38)			 ::Dynamic _hx_tmp1;
HXDLIN(  38)			if ((this->property1 == HX_("In",05,40,00,00))) {
HXLINE(  38)				_hx_tmp1 = ::iron::_hx_system::Tween_obj::easeCircIn_dyn();
            			}
            			else {
HXLINE(  38)				if ((this->property1 == HX_("Out",6e,58,3c,00))) {
HXLINE(  38)					_hx_tmp1 = ::iron::_hx_system::Tween_obj::easeCircOut_dyn();
            				}
            				else {
HXLINE(  38)					_hx_tmp1 = ::iron::_hx_system::Tween_obj::easeCircInOut_dyn();
            				}
            			}
HXDLIN(  38)			this->ease = _hx_tmp1;
HXDLIN(  38)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("Cubic",2a,8d,79,e1)) ){
HXLINE(  30)			 ::Dynamic _hx_tmp2;
HXDLIN(  30)			if ((this->property1 == HX_("In",05,40,00,00))) {
HXLINE(  30)				_hx_tmp2 = ::iron::_hx_system::Tween_obj::easeCubicIn_dyn();
            			}
            			else {
HXLINE(  30)				if ((this->property1 == HX_("Out",6e,58,3c,00))) {
HXLINE(  30)					_hx_tmp2 = ::iron::_hx_system::Tween_obj::easeCubicOut_dyn();
            				}
            				else {
HXLINE(  30)					_hx_tmp2 = ::iron::_hx_system::Tween_obj::easeCubicInOut_dyn();
            				}
            			}
HXDLIN(  30)			this->ease = _hx_tmp2;
HXDLIN(  30)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("Expo",52,29,f7,2d)) ){
HXLINE(  36)			 ::Dynamic _hx_tmp3;
HXDLIN(  36)			if ((this->property1 == HX_("In",05,40,00,00))) {
HXLINE(  36)				_hx_tmp3 = ::iron::_hx_system::Tween_obj::easeExpoIn_dyn();
            			}
            			else {
HXLINE(  36)				if ((this->property1 == HX_("Out",6e,58,3c,00))) {
HXLINE(  36)					_hx_tmp3 = ::iron::_hx_system::Tween_obj::easeExpoOut_dyn();
            				}
            				else {
HXLINE(  36)					_hx_tmp3 = ::iron::_hx_system::Tween_obj::easeExpoInOut_dyn();
            				}
            			}
HXDLIN(  36)			this->ease = _hx_tmp3;
HXDLIN(  36)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("Linear",05,c6,34,21)) ){
HXLINE(  24)			this->ease = ::iron::_hx_system::Tween_obj::easeLinear_dyn();
HXDLIN(  24)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("Quad",e7,64,e3,35)) ){
HXLINE(  28)			 ::Dynamic _hx_tmp4;
HXDLIN(  28)			if ((this->property1 == HX_("In",05,40,00,00))) {
HXLINE(  28)				_hx_tmp4 = ::iron::_hx_system::Tween_obj::easeQuadIn_dyn();
            			}
            			else {
HXLINE(  28)				if ((this->property1 == HX_("Out",6e,58,3c,00))) {
HXLINE(  28)					_hx_tmp4 = ::iron::_hx_system::Tween_obj::easeQuadOut_dyn();
            				}
            				else {
HXLINE(  28)					_hx_tmp4 = ::iron::_hx_system::Tween_obj::easeQuadInOut_dyn();
            				}
            			}
HXDLIN(  28)			this->ease = _hx_tmp4;
HXDLIN(  28)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("Quart",df,f1,14,f1)) ){
HXLINE(  32)			 ::Dynamic _hx_tmp5;
HXDLIN(  32)			if ((this->property1 == HX_("In",05,40,00,00))) {
HXLINE(  32)				_hx_tmp5 = ::iron::_hx_system::Tween_obj::easeQuartIn_dyn();
            			}
            			else {
HXLINE(  32)				if ((this->property1 == HX_("Out",6e,58,3c,00))) {
HXLINE(  32)					_hx_tmp5 = ::iron::_hx_system::Tween_obj::easeQuartOut_dyn();
            				}
            				else {
HXLINE(  32)					_hx_tmp5 = ::iron::_hx_system::Tween_obj::easeQuartInOut_dyn();
            				}
            			}
HXDLIN(  32)			this->ease = _hx_tmp5;
HXDLIN(  32)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("Quint",6b,00,1b,f1)) ){
HXLINE(  34)			 ::Dynamic _hx_tmp6;
HXDLIN(  34)			if ((this->property1 == HX_("In",05,40,00,00))) {
HXLINE(  34)				_hx_tmp6 = ::iron::_hx_system::Tween_obj::easeQuintIn_dyn();
            			}
            			else {
HXLINE(  34)				if ((this->property1 == HX_("Out",6e,58,3c,00))) {
HXLINE(  34)					_hx_tmp6 = ::iron::_hx_system::Tween_obj::easeQuintOut_dyn();
            				}
            				else {
HXLINE(  34)					_hx_tmp6 = ::iron::_hx_system::Tween_obj::easeQuintInOut_dyn();
            				}
            			}
HXDLIN(  34)			this->ease = _hx_tmp6;
HXDLIN(  34)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("Sine",6d,c2,2c,37)) ){
HXLINE(  26)			 ::Dynamic _hx_tmp7;
HXDLIN(  26)			if ((this->property1 == HX_("In",05,40,00,00))) {
HXLINE(  26)				_hx_tmp7 = ::iron::_hx_system::Tween_obj::easeSineIn_dyn();
            			}
            			else {
HXLINE(  26)				if ((this->property1 == HX_("Out",6e,58,3c,00))) {
HXLINE(  26)					_hx_tmp7 = ::iron::_hx_system::Tween_obj::easeSineOut_dyn();
            				}
            				else {
HXLINE(  26)					_hx_tmp7 = ::iron::_hx_system::Tween_obj::easeSineInOut_dyn();
            				}
            			}
HXDLIN(  26)			this->ease = _hx_tmp7;
HXDLIN(  26)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  42)			this->ease = ::iron::_hx_system::Tween_obj::easeLinear_dyn();
            		}
            		_hx_goto_1:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VectorMixNode_obj,init,(void))

 ::Dynamic VectorMixNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_2229a67defeacb5d_46_get)
HXLINE(  47)		if (hx::IsNull( this->ease )) {
HXLINE(  47)			this->init();
            		}
HXLINE(  48)		Float k = ( (Float)(this->inputs->__get((int)0).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  49)		 ::iron::math::Vec4 v1 = ( ( ::iron::math::Vec4)(this->inputs->__get((int)1).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  50)		 ::iron::math::Vec4 v2 = ( ( ::iron::math::Vec4)(this->inputs->__get((int)2).StaticCast<  ::armory::logicnode::LogicNodeInput >()->get()) );
HXLINE(  51)		Float f = ( (Float)(this->ease(k)) );
HXLINE(  52)		float v11 = v1->x;
HXDLIN(  52)		this->v->x = (v11 + ((v2->x - v1->x) * f));
HXLINE(  53)		float v12 = v1->y;
HXDLIN(  53)		this->v->y = (v12 + ((v2->y - v1->y) * f));
HXLINE(  54)		float v13 = v1->z;
HXDLIN(  54)		this->v->z = (v13 + ((v2->z - v1->z) * f));
HXLINE(  56)		if ((this->property2 == HX_("true",4e,a7,03,4d))) {
HXLINE(  56)			this->v->clamp((int)0,(int)1);
            		}
HXLINE(  57)		return this->v;
            	}



hx::ObjectPtr< VectorMixNode_obj > VectorMixNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< VectorMixNode_obj > __this = new VectorMixNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< VectorMixNode_obj > VectorMixNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	VectorMixNode_obj *__this = (VectorMixNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VectorMixNode_obj), true, "armory.logicnode.VectorMixNode"));
	*(void **)__this = VectorMixNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

VectorMixNode_obj::VectorMixNode_obj()
{
}

void VectorMixNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VectorMixNode);
	HX_MARK_MEMBER_NAME(property0,"property0");
	HX_MARK_MEMBER_NAME(property1,"property1");
	HX_MARK_MEMBER_NAME(property2,"property2");
	HX_MARK_MEMBER_NAME(v,"v");
	HX_MARK_MEMBER_NAME(ease,"ease");
	 ::armory::logicnode::LogicNode_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VectorMixNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(property0,"property0");
	HX_VISIT_MEMBER_NAME(property1,"property1");
	HX_VISIT_MEMBER_NAME(property2,"property2");
	HX_VISIT_MEMBER_NAME(v,"v");
	HX_VISIT_MEMBER_NAME(ease,"ease");
	 ::armory::logicnode::LogicNode_obj::__Visit(HX_VISIT_ARG);
}

hx::Val VectorMixNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { return hx::Val( v ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return hx::Val( ease ); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { return hx::Val( property0 ); }
		if (HX_FIELD_EQ(inName,"property1") ) { return hx::Val( property1 ); }
		if (HX_FIELD_EQ(inName,"property2") ) { return hx::Val( property2 ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VectorMixNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { ease=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"property0") ) { property0=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"property1") ) { property1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"property2") ) { property2=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VectorMixNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"));
	outFields->push(HX_HCSTRING("property1","\x3c","\x02","\x07","\x05"));
	outFields->push(HX_HCSTRING("property2","\x3d","\x02","\x07","\x05"));
	outFields->push(HX_HCSTRING("v","\x76","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VectorMixNode_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(VectorMixNode_obj,property0),HX_HCSTRING("property0","\x3b","\x02","\x07","\x05")},
	{hx::fsString,(int)offsetof(VectorMixNode_obj,property1),HX_HCSTRING("property1","\x3c","\x02","\x07","\x05")},
	{hx::fsString,(int)offsetof(VectorMixNode_obj,property2),HX_HCSTRING("property2","\x3d","\x02","\x07","\x05")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(VectorMixNode_obj,v),HX_HCSTRING("v","\x76","\x00","\x00","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(VectorMixNode_obj,ease),HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VectorMixNode_obj_sStaticStorageInfo = 0;
#endif

static ::String VectorMixNode_obj_sMemberFields[] = {
	HX_HCSTRING("property0","\x3b","\x02","\x07","\x05"),
	HX_HCSTRING("property1","\x3c","\x02","\x07","\x05"),
	HX_HCSTRING("property2","\x3d","\x02","\x07","\x05"),
	HX_HCSTRING("v","\x76","\x00","\x00","\x00"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	::String(null()) };

static void VectorMixNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VectorMixNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VectorMixNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VectorMixNode_obj::__mClass,"__mClass");
};

#endif

hx::Class VectorMixNode_obj::__mClass;

void VectorMixNode_obj::__register()
{
	hx::Object *dummy = new VectorMixNode_obj;
	VectorMixNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.VectorMixNode","\x39","\x8d","\x9f","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VectorMixNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VectorMixNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VectorMixNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VectorMixNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VectorMixNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VectorMixNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
