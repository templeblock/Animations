// Generated by Haxe 3.4.4
#ifndef INCLUDED_iron_system_GamepadStick
#define INCLUDED_iron_system_GamepadStick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_165e9357efd40209_397_new)
HX_DECLARE_CLASS2(iron,_hx_system,GamepadStick)

namespace iron{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES GamepadStick_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GamepadStick_obj OBJ_;
		GamepadStick_obj();

	public:
		enum { _hx_ClassId = 0x36148d06 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="iron.system.GamepadStick")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"iron.system.GamepadStick"); }

		hx::ObjectPtr< GamepadStick_obj > __new() {
			hx::ObjectPtr< GamepadStick_obj > __this = new GamepadStick_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GamepadStick_obj > __alloc(hx::Ctx *_hx_ctx) {
			GamepadStick_obj *__this = (GamepadStick_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GamepadStick_obj), false, "iron.system.GamepadStick"));
			*(void **)__this = GamepadStick_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_165e9357efd40209_397_new)
HXLINE( 404)		( ( ::iron::_hx_system::GamepadStick)(__this) )->movementY = ((Float)0.0);
HXLINE( 403)		( ( ::iron::_hx_system::GamepadStick)(__this) )->movementX = ((Float)0.0);
HXLINE( 402)		( ( ::iron::_hx_system::GamepadStick)(__this) )->moved = false;
HXLINE( 401)		( ( ::iron::_hx_system::GamepadStick)(__this) )->lastY = ((Float)0.0);
HXLINE( 400)		( ( ::iron::_hx_system::GamepadStick)(__this) )->lastX = ((Float)0.0);
HXLINE( 399)		( ( ::iron::_hx_system::GamepadStick)(__this) )->y = ((Float)0.0);
HXLINE( 398)		( ( ::iron::_hx_system::GamepadStick)(__this) )->x = ((Float)0.0);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GamepadStick_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GamepadStick","\x0f","\x6d","\xf4","\x03"); }

		Float x;
		Float y;
		Float lastX;
		Float lastY;
		bool moved;
		Float movementX;
		Float movementY;
};

} // end namespace iron
} // end namespace system

#endif /* INCLUDED_iron_system_GamepadStick */ 
