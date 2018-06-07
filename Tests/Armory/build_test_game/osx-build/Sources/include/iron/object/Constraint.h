// Generated by Haxe 3.4.4
#ifndef INCLUDED_iron_object_Constraint
#define INCLUDED_iron_object_Constraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(iron,object,Constraint)
HX_DECLARE_CLASS2(iron,object,Transform)

namespace iron{
namespace object{


class HXCPP_CLASS_ATTRIBUTES Constraint_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Constraint_obj OBJ_;
		Constraint_obj();

	public:
		enum { _hx_ClassId = 0x3926d4e8 };

		void __construct( ::Dynamic constr);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.object.Constraint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.object.Constraint"); }
		static hx::ObjectPtr< Constraint_obj > __new( ::Dynamic constr);
		static hx::ObjectPtr< Constraint_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic constr);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Constraint_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Constraint","\x7d","\x04","\x7d","\x51"); }

		 ::Dynamic raw;
		 ::iron::object::Transform target;
		void apply( ::iron::object::Transform transform);
		::Dynamic apply_dyn();

};

} // end namespace iron
} // end namespace object

#endif /* INCLUDED_iron_object_Constraint */ 
