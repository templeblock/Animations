// Generated by Haxe 3.4.4
#ifndef INCLUDED_armory_trait_VRNavigation
#define INCLUDED_armory_trait_VRNavigation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
HX_DECLARE_CLASS2(armory,trait,VRNavigation)
HX_DECLARE_CLASS1(iron,Trait)

namespace armory{
namespace trait{


class HXCPP_CLASS_ATTRIBUTES VRNavigation_obj : public  ::iron::Trait_obj
{
	public:
		typedef  ::iron::Trait_obj super;
		typedef VRNavigation_obj OBJ_;
		VRNavigation_obj();

	public:
		enum { _hx_ClassId = 0x0921f900 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.trait.VRNavigation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.trait.VRNavigation"); }
		static hx::ObjectPtr< VRNavigation_obj > __new();
		static hx::ObjectPtr< VRNavigation_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VRNavigation_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("VRNavigation","\xf0","\x09","\xe2","\xa2"); }

};

} // end namespace armory
} // end namespace trait

#endif /* INCLUDED_armory_trait_VRNavigation */ 
