// Generated by Haxe 3.4.4
#ifndef INCLUDED_iron_data_Probe
#define INCLUDED_iron_data_Probe

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(iron,data,Probe)
HX_DECLARE_CLASS2(iron,math,Vec4)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)

namespace iron{
namespace data{


class HXCPP_CLASS_ATTRIBUTES Probe_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Probe_obj OBJ_;
		Probe_obj();

	public:
		enum { _hx_ClassId = 0x26fcb096 };

		void __construct( ::Dynamic raw, ::Dynamic done);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.data.Probe")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.data.Probe"); }
		static hx::ObjectPtr< Probe_obj > __new( ::Dynamic raw, ::Dynamic done);
		static hx::ObjectPtr< Probe_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic raw, ::Dynamic done);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Probe_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Probe","\x10","\x4b","\xbd","\x5b"); }

		 ::Dynamic raw;
		 ::kha::Image radiance;
		 ::kha::arrays::Float32ArrayPrivate irradiance;
		 ::iron::math::Vec4 volume;
		 ::iron::math::Vec4 volumeCenter;
		 ::iron::math::Vec4 volumeMin;
		 ::iron::math::Vec4 volumeMax;
		void mipsSet( ::Dynamic done);
		::Dynamic mipsSet_dyn();

		void setIrradiance( ::Dynamic done);
		::Dynamic setIrradiance_dyn();

};

} // end namespace iron
} // end namespace data

#endif /* INCLUDED_iron_data_Probe */ 
