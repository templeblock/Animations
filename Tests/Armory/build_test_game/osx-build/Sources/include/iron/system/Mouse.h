// Generated by Haxe 3.4.4
#ifndef INCLUDED_iron_system_Mouse
#define INCLUDED_iron_system_Mouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_system_VirtualInput
#include <iron/system/VirtualInput.h>
#endif
HX_DECLARE_CLASS2(iron,_hx_system,Mouse)
HX_DECLARE_CLASS2(iron,_hx_system,VirtualInput)

namespace iron{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES Mouse_obj : public  ::iron::_hx_system::VirtualInput_obj
{
	public:
		typedef  ::iron::_hx_system::VirtualInput_obj super;
		typedef Mouse_obj OBJ_;
		Mouse_obj();

	public:
		enum { _hx_ClassId = 0x7fa066ce };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.system.Mouse")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.system.Mouse"); }
		static hx::ObjectPtr< Mouse_obj > __new();
		static hx::ObjectPtr< Mouse_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mouse_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Mouse","\x05","\x86","\x92","\x9f"); }

		static void __boot();
		static ::Array< ::String > buttons;
		::Array< bool > buttonsDown;
		::Array< bool > buttonsStarted;
		::Array< bool > buttonsReleased;
		Float x;
		Float y;
		bool moved;
		Float movementX;
		Float movementY;
		int wheelDelta;
		bool locked;
		bool hidden;
		Float lastX;
		Float lastY;
		void endFrame();
		::Dynamic endFrame_dyn();

		void reset();
		::Dynamic reset_dyn();

		int buttonIndex(::String button);
		::Dynamic buttonIndex_dyn();

		bool down(::String button);
		::Dynamic down_dyn();

		bool started(::String button);
		::Dynamic started_dyn();

		bool released(::String button);
		::Dynamic released_dyn();

		void lock();
		::Dynamic lock_dyn();

		void unlock();
		::Dynamic unlock_dyn();

		void hide();
		::Dynamic hide_dyn();

		void show();
		::Dynamic show_dyn();

		void downListener(int index,int x,int y);
		::Dynamic downListener_dyn();

		void upListener(int index,int x,int y);
		::Dynamic upListener_dyn();

		void moveListener(int x,int y,int movementX,int movementY);
		::Dynamic moveListener_dyn();

		void wheelListener(int delta);
		::Dynamic wheelListener_dyn();

};

} // end namespace iron
} // end namespace system

#endif /* INCLUDED_iron_system_Mouse */ 
