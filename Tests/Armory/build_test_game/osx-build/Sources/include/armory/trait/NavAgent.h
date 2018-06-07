// Generated by Haxe 3.4.4
#ifndef INCLUDED_armory_trait_NavAgent
#define INCLUDED_armory_trait_NavAgent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
HX_DECLARE_CLASS2(armory,trait,NavAgent)
HX_DECLARE_CLASS1(iron,Trait)
HX_DECLARE_CLASS2(iron,math,Vec4)

namespace armory{
namespace trait{


class HXCPP_CLASS_ATTRIBUTES NavAgent_obj : public  ::iron::Trait_obj
{
	public:
		typedef  ::iron::Trait_obj super;
		typedef NavAgent_obj OBJ_;
		NavAgent_obj();

	public:
		enum { _hx_ClassId = 0x3e09be2e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.trait.NavAgent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.trait.NavAgent"); }
		static hx::ObjectPtr< NavAgent_obj > __new();
		static hx::ObjectPtr< NavAgent_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NavAgent_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NavAgent","\x02","\x0b","\x8b","\x0e"); }

		static void __boot();
		static  ::Dynamic __meta__;
		Float speed;
		::Array< ::Dynamic> path;
		int index;
		 ::Dynamic rotAnim;
		 ::Dynamic locAnim;
		void setPath(::Array< ::Dynamic> path);
		::Dynamic setPath_dyn();

		void stopTween();
		::Dynamic stopTween_dyn();

		void stop();
		::Dynamic stop_dyn();

		Float shortAngle(Float from,Float to);
		::Dynamic shortAngle_dyn();

		 ::iron::math::Vec4 orient;
		void go();
		::Dynamic go_dyn();

		void update();
		::Dynamic update_dyn();

};

} // end namespace armory
} // end namespace trait

#endif /* INCLUDED_armory_trait_NavAgent */ 
