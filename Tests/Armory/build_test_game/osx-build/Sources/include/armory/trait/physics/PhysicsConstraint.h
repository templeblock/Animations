// Generated by Haxe 3.4.4
#ifndef INCLUDED_armory_trait_physics_PhysicsConstraint
#define INCLUDED_armory_trait_physics_PhysicsConstraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
HX_DECLARE_CLASS3(armory,trait,physics,PhysicsConstraint)
HX_DECLARE_CLASS1(iron,Trait)

namespace armory{
namespace trait{
namespace physics{


class HXCPP_CLASS_ATTRIBUTES PhysicsConstraint_obj : public  ::iron::Trait_obj
{
	public:
		typedef  ::iron::Trait_obj super;
		typedef PhysicsConstraint_obj OBJ_;
		PhysicsConstraint_obj();

	public:
		enum { _hx_ClassId = 0x6975fbcd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.trait.physics.PhysicsConstraint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.trait.physics.PhysicsConstraint"); }
		static hx::ObjectPtr< PhysicsConstraint_obj > __new();
		static hx::ObjectPtr< PhysicsConstraint_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsConstraint_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PhysicsConstraint","\xe4","\x5b","\xef","\xf4"); }

};

} // end namespace armory
} // end namespace trait
} // end namespace physics

#endif /* INCLUDED_armory_trait_physics_PhysicsConstraint */ 
