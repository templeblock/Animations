// Generated by Haxe 3.4.4
#ifndef INCLUDED_iron_data_ConstData
#define INCLUDED_iron_data_ConstData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(iron,data,ConstData)
HX_DECLARE_CLASS2(kha,graphics4,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)

namespace iron{
namespace data{


class HXCPP_CLASS_ATTRIBUTES ConstData_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ConstData_obj OBJ_;
		ConstData_obj();

	public:
		enum { _hx_ClassId = 0x4a10e993 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="iron.data.ConstData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"iron.data.ConstData"); }

		hx::ObjectPtr< ConstData_obj > __new() {
			hx::ObjectPtr< ConstData_obj > __this = new ConstData_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ConstData_obj > __alloc(hx::Ctx *_hx_ctx) {
			ConstData_obj *__this = (ConstData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ConstData_obj), false, "iron.data.ConstData"));
			*(void **)__this = ConstData_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConstData_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ConstData","\x0d","\x49","\x09","\xd3"); }

		static void __boot();
		static  ::kha::graphics4::VertexBuffer screenAlignedVB;
		static  ::kha::graphics4::IndexBuffer screenAlignedIB;
		static  ::kha::graphics4::VertexBuffer rectVB;
		static  ::kha::graphics4::IndexBuffer rectIB;
		static  ::kha::graphics4::VertexBuffer boxVB;
		static  ::kha::graphics4::IndexBuffer boxIB;
		static  ::kha::graphics4::VertexBuffer skydomeVB;
		static  ::kha::graphics4::IndexBuffer skydomeIB;
		static  ::kha::graphics4::VertexBuffer sphereVB;
		static  ::kha::graphics4::IndexBuffer sphereIB;
		static  ::kha::graphics4::VertexBuffer coneVB;
		static  ::kha::graphics4::IndexBuffer coneIB;
		static void createScreenAlignedData();
		static ::Dynamic createScreenAlignedData_dyn();

		static void createRectData();
		static ::Dynamic createRectData_dyn();

		static void createBoxData();
		static ::Dynamic createBoxData_dyn();

		static void createSkydomeData();
		static ::Dynamic createSkydomeData_dyn();

		static void createSphereData();
		static ::Dynamic createSphereData_dyn();

		static void createConeData();
		static ::Dynamic createConeData_dyn();

		static ::Array< int > skydomeIndices;
		static ::Array< Float > skydomePos;
		static ::Array< Float > skydomeNor;
		static ::Array< int > sphereIndices;
		static ::Array< Float > spherePos;
		static ::Array< int > coneIndices;
		static ::Array< Float > conePos;
};

} // end namespace iron
} // end namespace data

#endif /* INCLUDED_iron_data_ConstData */ 
