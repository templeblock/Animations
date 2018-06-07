// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_iron_system_Pen
#include <iron/system/Pen.h>
#endif
#ifndef INCLUDED_iron_system_VirtualInput
#include <iron/system/VirtualInput.h>
#endif
#ifndef INCLUDED_kha_input_Pen
#include <kha/input/Pen.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7f4be6a9d441abb5_229_new,"iron.system.Pen","new",0x8ae83a12,"iron.system.Pen.new","iron/system/Input.hx",229,0x32439d6d)
static const bool _hx_array_data_55618920_1[] = {
	0,
};
static const bool _hx_array_data_55618920_2[] = {
	0,
};
static const bool _hx_array_data_55618920_3[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_7f4be6a9d441abb5_250_endFrame,"iron.system.Pen","endFrame",0x45d63b60,"iron.system.Pen.endFrame","iron/system/Input.hx",250,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_7f4be6a9d441abb5_258_reset,"iron.system.Pen","reset",0x8e900401,"iron.system.Pen.reset","iron/system/Input.hx",258,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_7f4be6a9d441abb5_264_buttonIndex,"iron.system.Pen","buttonIndex",0xfa3fc772,"iron.system.Pen.buttonIndex","iron/system/Input.hx",264,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_7f4be6a9d441abb5_269_down,"iron.system.Pen","down",0xf9b60a70,"iron.system.Pen.down","iron/system/Input.hx",269,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_7f4be6a9d441abb5_273_started,"iron.system.Pen","started",0x29eb53f3,"iron.system.Pen.started","iron/system/Input.hx",273,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_7f4be6a9d441abb5_277_released,"iron.system.Pen","released",0xb83cb9cb,"iron.system.Pen.released","iron/system/Input.hx",277,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_7f4be6a9d441abb5_280_downListener,"iron.system.Pen","downListener",0x6951b704,"iron.system.Pen.downListener","iron/system/Input.hx",280,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_7f4be6a9d441abb5_282_upListener,"iron.system.Pen","upListener",0x6358867d,"iron.system.Pen.upListener","iron/system/Input.hx",282,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_7f4be6a9d441abb5_284_moveListener,"iron.system.Pen","moveListener",0x8e4568b3,"iron.system.Pen.moveListener","iron/system/Input.hx",284,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_7f4be6a9d441abb5_231_boot,"iron.system.Pen","boot",0xf8639640,"iron.system.Pen.boot","iron/system/Input.hx",231,0x32439d6d)
static const ::String _hx_array_data_55618920_14[] = {
	HX_("tip",5b,61,58,00),
};
namespace iron{
namespace _hx_system{

void Pen_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7f4be6a9d441abb5_229_new)
HXLINE( 244)		this->lastPressure = ((Float)0.0);
HXLINE( 243)		this->lastY = ((Float)-1.0);
HXLINE( 242)		this->lastX = ((Float)-1.0);
HXLINE( 241)		this->pressure = ((Float)0.0);
HXLINE( 240)		this->movementY = ((Float)0.0);
HXLINE( 239)		this->movementX = ((Float)0.0);
HXLINE( 238)		this->moved = false;
HXLINE( 237)		this->y = ((Float)0.0);
HXLINE( 236)		this->x = ((Float)0.0);
HXLINE( 234)		this->buttonsReleased = ::Array_obj< bool >::fromData( _hx_array_data_55618920_1,1);
HXLINE( 233)		this->buttonsStarted = ::Array_obj< bool >::fromData( _hx_array_data_55618920_2,1);
HXLINE( 232)		this->buttonsDown = ::Array_obj< bool >::fromData( _hx_array_data_55618920_3,1);
HXLINE( 246)		super::__construct();
HXLINE( 247)		::kha::input::Pen_obj::get(null())->notify(this->downListener_dyn(),this->upListener_dyn(),this->moveListener_dyn());
            	}

Dynamic Pen_obj::__CreateEmpty() { return new Pen_obj; }

void *Pen_obj::_hx_vtable = 0;

Dynamic Pen_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Pen_obj > _hx_result = new Pen_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Pen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x15b014de) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x15b014de;
	} else {
		return inClassId==(int)0x591cc7a2;
	}
}

void Pen_obj::endFrame(){
            	HX_STACKFRAME(&_hx_pos_7f4be6a9d441abb5_250_endFrame)
HXLINE( 251)		this->buttonsStarted[(int)0] = false;
HXLINE( 252)		this->buttonsReleased[(int)0] = false;
HXLINE( 253)		this->moved = false;
HXLINE( 254)		this->movementX = (int)0;
HXLINE( 255)		this->movementY = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pen_obj,endFrame,(void))

void Pen_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_7f4be6a9d441abb5_258_reset)
HXLINE( 259)		this->buttonsDown[(int)0] = false;
HXLINE( 260)		this->endFrame();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pen_obj,reset,(void))

int Pen_obj::buttonIndex(::String button){
            	HX_STACKFRAME(&_hx_pos_7f4be6a9d441abb5_264_buttonIndex)
HXDLIN( 264)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pen_obj,buttonIndex,return )

bool Pen_obj::down(::String __o_button){
::String button = __o_button.Default(HX_HCSTRING("tip","\x5b","\x61","\x58","\x00"));
            	HX_STACKFRAME(&_hx_pos_7f4be6a9d441abb5_269_down)
HXDLIN( 269)		::Array< bool > _hx_tmp = this->buttonsDown;
HXDLIN( 269)		return _hx_tmp->__get(this->buttonIndex(button));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pen_obj,down,return )

bool Pen_obj::started(::String __o_button){
::String button = __o_button.Default(HX_HCSTRING("tip","\x5b","\x61","\x58","\x00"));
            	HX_STACKFRAME(&_hx_pos_7f4be6a9d441abb5_273_started)
HXDLIN( 273)		::Array< bool > _hx_tmp = this->buttonsStarted;
HXDLIN( 273)		return _hx_tmp->__get(this->buttonIndex(button));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pen_obj,started,return )

bool Pen_obj::released(::String __o_button){
::String button = __o_button.Default(HX_HCSTRING("tip","\x5b","\x61","\x58","\x00"));
            	HX_STACKFRAME(&_hx_pos_7f4be6a9d441abb5_277_released)
HXDLIN( 277)		::Array< bool > _hx_tmp = this->buttonsReleased;
HXDLIN( 277)		return _hx_tmp->__get(this->buttonIndex(button));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pen_obj,released,return )

void Pen_obj::downListener(Float x,Float y,Float pressure){
            	HX_STACKFRAME(&_hx_pos_7f4be6a9d441abb5_280_downListener)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Pen_obj,downListener,(void))

void Pen_obj::upListener(Float x,Float y,Float pressure){
            	HX_STACKFRAME(&_hx_pos_7f4be6a9d441abb5_282_upListener)
            	}


HX_DEFINE_DYNAMIC_FUNC3(Pen_obj,upListener,(void))

void Pen_obj::moveListener(int x,int y,Float pressure){
            	HX_STACKFRAME(&_hx_pos_7f4be6a9d441abb5_284_moveListener)
HXLINE( 285)		bool _hx_tmp;
HXDLIN( 285)		if ((this->lastX == ((Float)-1.0))) {
HXLINE( 285)			_hx_tmp = (this->lastY == ((Float)-1.0));
            		}
            		else {
HXLINE( 285)			_hx_tmp = false;
            		}
HXDLIN( 285)		if (_hx_tmp) {
HXLINE( 285)			this->lastX = x;
HXDLIN( 285)			this->lastY = y;
HXDLIN( 285)			this->lastPressure = pressure;
            		}
HXLINE( 286)		this->movementX = (x - this->lastX);
HXLINE( 287)		this->movementY = (y - this->lastY);
HXLINE( 288)		this->lastX = x;
HXLINE( 289)		this->lastY = y;
HXLINE( 290)		this->x = x;
HXLINE( 291)		this->y = y;
HXLINE( 292)		this->moved = true;
HXLINE( 293)		this->pressure = pressure;
HXLINE( 294)		bool _hx_tmp1;
HXDLIN( 294)		if ((pressure > (int)0)) {
HXLINE( 294)			_hx_tmp1 = (this->lastPressure == ((Float)0.0));
            		}
            		else {
HXLINE( 294)			_hx_tmp1 = false;
            		}
HXDLIN( 294)		if (_hx_tmp1) {
HXLINE( 294)			this->buttonsDown[(int)0] = true;
HXDLIN( 294)			this->buttonsStarted[(int)0] = true;
            		}
HXLINE( 295)		bool _hx_tmp2;
HXDLIN( 295)		if ((pressure == (int)0)) {
HXLINE( 295)			_hx_tmp2 = (this->lastPressure > (int)0);
            		}
            		else {
HXLINE( 295)			_hx_tmp2 = false;
            		}
HXDLIN( 295)		if (_hx_tmp2) {
HXLINE( 295)			this->buttonsDown[(int)0] = false;
HXDLIN( 295)			this->buttonsReleased[(int)0] = true;
            		}
HXLINE( 296)		this->lastPressure = pressure;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Pen_obj,moveListener,(void))

::Array< ::String > Pen_obj::buttons;


hx::ObjectPtr< Pen_obj > Pen_obj::__new() {
	hx::ObjectPtr< Pen_obj > __this = new Pen_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Pen_obj > Pen_obj::__alloc(hx::Ctx *_hx_ctx) {
	Pen_obj *__this = (Pen_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Pen_obj), true, "iron.system.Pen"));
	*(void **)__this = Pen_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Pen_obj::Pen_obj()
{
}

void Pen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pen);
	HX_MARK_MEMBER_NAME(buttonsDown,"buttonsDown");
	HX_MARK_MEMBER_NAME(buttonsStarted,"buttonsStarted");
	HX_MARK_MEMBER_NAME(buttonsReleased,"buttonsReleased");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(moved,"moved");
	HX_MARK_MEMBER_NAME(movementX,"movementX");
	HX_MARK_MEMBER_NAME(movementY,"movementY");
	HX_MARK_MEMBER_NAME(pressure,"pressure");
	HX_MARK_MEMBER_NAME(lastX,"lastX");
	HX_MARK_MEMBER_NAME(lastY,"lastY");
	HX_MARK_MEMBER_NAME(lastPressure,"lastPressure");
	 ::iron::_hx_system::VirtualInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Pen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buttonsDown,"buttonsDown");
	HX_VISIT_MEMBER_NAME(buttonsStarted,"buttonsStarted");
	HX_VISIT_MEMBER_NAME(buttonsReleased,"buttonsReleased");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(moved,"moved");
	HX_VISIT_MEMBER_NAME(movementX,"movementX");
	HX_VISIT_MEMBER_NAME(movementY,"movementY");
	HX_VISIT_MEMBER_NAME(pressure,"pressure");
	HX_VISIT_MEMBER_NAME(lastX,"lastX");
	HX_VISIT_MEMBER_NAME(lastY,"lastY");
	HX_VISIT_MEMBER_NAME(lastPressure,"lastPressure");
	 ::iron::_hx_system::VirtualInput_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Pen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { return hx::Val( down_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"moved") ) { return hx::Val( moved ); }
		if (HX_FIELD_EQ(inName,"lastX") ) { return hx::Val( lastX ); }
		if (HX_FIELD_EQ(inName,"lastY") ) { return hx::Val( lastY ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"started") ) { return hx::Val( started_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { return hx::Val( pressure ); }
		if (HX_FIELD_EQ(inName,"endFrame") ) { return hx::Val( endFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"released") ) { return hx::Val( released_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"movementX") ) { return hx::Val( movementX ); }
		if (HX_FIELD_EQ(inName,"movementY") ) { return hx::Val( movementY ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"upListener") ) { return hx::Val( upListener_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonsDown") ) { return hx::Val( buttonsDown ); }
		if (HX_FIELD_EQ(inName,"buttonIndex") ) { return hx::Val( buttonIndex_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastPressure") ) { return hx::Val( lastPressure ); }
		if (HX_FIELD_EQ(inName,"downListener") ) { return hx::Val( downListener_dyn() ); }
		if (HX_FIELD_EQ(inName,"moveListener") ) { return hx::Val( moveListener_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buttonsStarted") ) { return hx::Val( buttonsStarted ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buttonsReleased") ) { return hx::Val( buttonsReleased ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Pen_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { outValue = ( buttons ); return true; }
	}
	return false;
}

hx::Val Pen_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"moved") ) { moved=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastX") ) { lastX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastY") ) { lastY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pressure") ) { pressure=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"movementX") ) { movementX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movementY") ) { movementY=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buttonsDown") ) { buttonsDown=inValue.Cast< ::Array< bool > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastPressure") ) { lastPressure=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"buttonsStarted") ) { buttonsStarted=inValue.Cast< ::Array< bool > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"buttonsReleased") ) { buttonsReleased=inValue.Cast< ::Array< bool > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Pen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void Pen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonsDown","\x43","\x2b","\xd9","\x1e"));
	outFields->push(HX_HCSTRING("buttonsStarted","\x00","\x39","\xf4","\x4e"));
	outFields->push(HX_HCSTRING("buttonsReleased","\x1e","\x40","\xfc","\xfa"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("moved","\x33","\xcc","\x65","\x0c"));
	outFields->push(HX_HCSTRING("movementX","\x49","\x04","\x5d","\x30"));
	outFields->push(HX_HCSTRING("movementY","\x4a","\x04","\x5d","\x30"));
	outFields->push(HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"));
	outFields->push(HX_HCSTRING("lastX","\x42","\x01","\xbc","\x6f"));
	outFields->push(HX_HCSTRING("lastY","\x43","\x01","\xbc","\x6f"));
	outFields->push(HX_HCSTRING("lastPressure","\x3b","\xb8","\xaf","\xd1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Pen_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Pen_obj,buttonsDown),HX_HCSTRING("buttonsDown","\x43","\x2b","\xd9","\x1e")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Pen_obj,buttonsStarted),HX_HCSTRING("buttonsStarted","\x00","\x39","\xf4","\x4e")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Pen_obj,buttonsReleased),HX_HCSTRING("buttonsReleased","\x1e","\x40","\xfc","\xfa")},
	{hx::fsFloat,(int)offsetof(Pen_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Pen_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Pen_obj,moved),HX_HCSTRING("moved","\x33","\xcc","\x65","\x0c")},
	{hx::fsFloat,(int)offsetof(Pen_obj,movementX),HX_HCSTRING("movementX","\x49","\x04","\x5d","\x30")},
	{hx::fsFloat,(int)offsetof(Pen_obj,movementY),HX_HCSTRING("movementY","\x4a","\x04","\x5d","\x30")},
	{hx::fsFloat,(int)offsetof(Pen_obj,pressure),HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70")},
	{hx::fsFloat,(int)offsetof(Pen_obj,lastX),HX_HCSTRING("lastX","\x42","\x01","\xbc","\x6f")},
	{hx::fsFloat,(int)offsetof(Pen_obj,lastY),HX_HCSTRING("lastY","\x43","\x01","\xbc","\x6f")},
	{hx::fsFloat,(int)offsetof(Pen_obj,lastPressure),HX_HCSTRING("lastPressure","\x3b","\xb8","\xaf","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Pen_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Pen_obj::buttons,HX_HCSTRING("buttons","\x41","\x52","\x75","\xca")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Pen_obj_sMemberFields[] = {
	HX_HCSTRING("buttonsDown","\x43","\x2b","\xd9","\x1e"),
	HX_HCSTRING("buttonsStarted","\x00","\x39","\xf4","\x4e"),
	HX_HCSTRING("buttonsReleased","\x1e","\x40","\xfc","\xfa"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("moved","\x33","\xcc","\x65","\x0c"),
	HX_HCSTRING("movementX","\x49","\x04","\x5d","\x30"),
	HX_HCSTRING("movementY","\x4a","\x04","\x5d","\x30"),
	HX_HCSTRING("pressure","\xc5","\xab","\x1d","\x70"),
	HX_HCSTRING("lastX","\x42","\x01","\xbc","\x6f"),
	HX_HCSTRING("lastY","\x43","\x01","\xbc","\x6f"),
	HX_HCSTRING("lastPressure","\x3b","\xb8","\xaf","\xd1"),
	HX_HCSTRING("endFrame","\x52","\x0a","\x81","\x04"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("buttonIndex","\xc0","\x5b","\xbf","\x0b"),
	HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),
	HX_HCSTRING("started","\x41","\x29","\x1b","\x35"),
	HX_HCSTRING("released","\xbd","\x88","\xe7","\x76"),
	HX_HCSTRING("downListener","\xf6","\xe6","\x73","\xa7"),
	HX_HCSTRING("upListener","\xef","\x75","\x8a","\x3d"),
	HX_HCSTRING("moveListener","\xa5","\x98","\x67","\xcc"),
	::String(null()) };

static void Pen_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pen_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Pen_obj::buttons,"buttons");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Pen_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pen_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Pen_obj::buttons,"buttons");
};

#endif

hx::Class Pen_obj::__mClass;

static ::String Pen_obj_sStaticFields[] = {
	HX_HCSTRING("buttons","\x41","\x52","\x75","\xca"),
	::String(null())
};

void Pen_obj::__register()
{
	hx::Object *dummy = new Pen_obj;
	Pen_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.system.Pen","\x20","\x89","\x61","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Pen_obj::__GetStatic;
	__mClass->mSetStaticField = &Pen_obj::__SetStatic;
	__mClass->mMarkFunc = Pen_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Pen_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Pen_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Pen_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Pen_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pen_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Pen_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7f4be6a9d441abb5_231_boot)
HXDLIN( 231)		buttons = ::Array_obj< ::String >::fromData( _hx_array_data_55618920_14,1);
            	}
}

} // end namespace iron
} // end namespace system
