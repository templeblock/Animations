// Generated by Haxe 3.4.4
#ifndef INCLUDED_iron_data_MeshBatch
#define INCLUDED_iron_data_MeshBatch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(iron,data,MeshBatch)
HX_DECLARE_CLASS2(iron,object,CameraObject)
HX_DECLARE_CLASS2(iron,object,LampObject)
HX_DECLARE_CLASS2(iron,object,MeshObject)
HX_DECLARE_CLASS2(iron,object,Object)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)

namespace iron{
namespace data{


class HXCPP_CLASS_ATTRIBUTES MeshBatch_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MeshBatch_obj OBJ_;
		MeshBatch_obj();

	public:
		enum { _hx_ClassId = 0x502065d7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.data.MeshBatch")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.data.MeshBatch"); }
		static hx::ObjectPtr< MeshBatch_obj > __new();
		static hx::ObjectPtr< MeshBatch_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MeshBatch_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MeshBatch","\x6d","\xd2","\xad","\x87"); }

		static bool isLod( ::iron::object::MeshObject m);
		static ::Dynamic isLod_dyn();

		static bool isBatchable( ::iron::object::MeshObject m);
		static ::Dynamic isBatchable_dyn();

		 ::haxe::ds::ObjectMap buckets;
		::Array< ::Dynamic> nonBatched;
		void remove();
		::Dynamic remove_dyn();

		void addMesh( ::iron::object::MeshObject m);
		::Dynamic addMesh_dyn();

		void removeMesh( ::iron::object::MeshObject m);
		::Dynamic removeMesh_dyn();

		void render(::Dynamic g,::String context, ::iron::object::CameraObject camera, ::iron::object::LampObject lamp,::Array< ::String > bindParams);
		::Dynamic render_dyn();

};

} // end namespace iron
} // end namespace data

#endif /* INCLUDED_iron_data_MeshBatch */ 
