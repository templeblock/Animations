// Generated by Haxe 3.4.4
#ifndef INCLUDED_armory_trait_CutResult
#define INCLUDED_armory_trait_CutResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(armory,trait,CutResult)
HX_DECLARE_CLASS2(iron,object,MeshObject)
HX_DECLARE_CLASS2(iron,object,Object)

namespace armory{
namespace trait{


class HXCPP_CLASS_ATTRIBUTES CutResult_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CutResult_obj OBJ_;
		CutResult_obj();

	public:
		enum { _hx_ClassId = 0x469a56cf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.trait.CutResult")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.trait.CutResult"); }
		static hx::ObjectPtr< CutResult_obj > __new();
		static hx::ObjectPtr< CutResult_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CutResult_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CutResult","\xdf","\x4f","\x0f","\x6e"); }

		 ::iron::object::MeshObject object1;
		 ::iron::object::MeshObject object2;
};

} // end namespace armory
} // end namespace trait

#endif /* INCLUDED_armory_trait_CutResult */ 
