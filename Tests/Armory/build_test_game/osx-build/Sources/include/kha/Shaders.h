// Generated by Haxe 3.4.4
#ifndef INCLUDED_kha_Shaders
#define INCLUDED_kha_Shaders

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Shaders)
HX_DECLARE_CLASS2(kha,graphics4,FragmentShader)
HX_DECLARE_CLASS2(kha,graphics4,VertexShader)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES Shaders_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Shaders_obj OBJ_;
		Shaders_obj();

	public:
		enum { _hx_ClassId = 0x1cef2af2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.Shaders")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.Shaders"); }

		hx::ObjectPtr< Shaders_obj > __new() {
			hx::ObjectPtr< Shaders_obj > __this = new Shaders_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Shaders_obj > __alloc(hx::Ctx *_hx_ctx) {
			Shaders_obj *__this = (Shaders_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Shaders_obj), false, "kha.Shaders"));
			*(void **)__this = Shaders_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shaders_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Shaders","\x8e","\xa9","\xd7","\x2c"); }

		static void __boot();
		static ::String blur_edge_pass_fragData0;
		static  ::kha::graphics4::FragmentShader blur_edge_pass_frag;
		static ::String compositor_pass_fragData0;
		static  ::kha::graphics4::FragmentShader compositor_pass_frag;
		static ::String compositor_pass_vertData0;
		static  ::kha::graphics4::VertexShader compositor_pass_vert;
		static ::String deferred_indirect_fragData0;
		static  ::kha::graphics4::FragmentShader deferred_indirect_frag;
		static ::String deferred_indirect_vertData0;
		static  ::kha::graphics4::VertexShader deferred_indirect_vert;
		static ::String deferred_light_fragData0;
		static  ::kha::graphics4::FragmentShader deferred_light_frag;
		static ::String deferred_light_quad_fragData0;
		static  ::kha::graphics4::FragmentShader deferred_light_quad_frag;
		static ::String pass_vertData0;
		static  ::kha::graphics4::VertexShader pass_vert;
		static ::String pass_lamp_volume_vertData0;
		static  ::kha::graphics4::VertexShader pass_lamp_volume_vert;
		static ::String pass_viewray_vertData0;
		static  ::kha::graphics4::VertexShader pass_viewray_vert;
		static ::String smaa_blend_weight_fragData0;
		static  ::kha::graphics4::FragmentShader smaa_blend_weight_frag;
		static ::String smaa_blend_weight_vertData0;
		static  ::kha::graphics4::VertexShader smaa_blend_weight_vert;
		static ::String smaa_edge_detect_fragData0;
		static  ::kha::graphics4::FragmentShader smaa_edge_detect_frag;
		static ::String smaa_edge_detect_vertData0;
		static  ::kha::graphics4::VertexShader smaa_edge_detect_vert;
		static ::String smaa_neighborhood_blend_fragData0;
		static  ::kha::graphics4::FragmentShader smaa_neighborhood_blend_frag;
		static ::String smaa_neighborhood_blend_vertData0;
		static  ::kha::graphics4::VertexShader smaa_neighborhood_blend_vert;
		static ::String ssao_pass_fragData0;
		static  ::kha::graphics4::FragmentShader ssao_pass_frag;
		static ::String world_pass_fragData0;
		static  ::kha::graphics4::FragmentShader world_pass_frag;
		static ::String world_pass_vertData0;
		static  ::kha::graphics4::VertexShader world_pass_vert;
		static ::String Material_mesh_fragData0;
		static  ::kha::graphics4::FragmentShader Material_mesh_frag;
		static ::String Material_mesh_vertData0;
		static  ::kha::graphics4::VertexShader Material_mesh_vert;
		static ::String Material_shadowmap_fragData0;
		static  ::kha::graphics4::FragmentShader Material_shadowmap_frag;
		static ::String Material_shadowmap_vertData0;
		static  ::kha::graphics4::VertexShader Material_shadowmap_vert;
		static ::String painter_colored_vertData0;
		static  ::kha::graphics4::VertexShader painter_colored_vert;
		static ::String painter_colored_fragData0;
		static  ::kha::graphics4::FragmentShader painter_colored_frag;
		static ::String painter_image_fragData0;
		static  ::kha::graphics4::FragmentShader painter_image_frag;
		static ::String painter_image_vertData0;
		static  ::kha::graphics4::VertexShader painter_image_vert;
		static ::String painter_text_fragData0;
		static  ::kha::graphics4::FragmentShader painter_text_frag;
		static ::String painter_text_vertData0;
		static  ::kha::graphics4::VertexShader painter_text_vert;
		static ::String painter_video_fragData0;
		static  ::kha::graphics4::FragmentShader painter_video_frag;
		static ::String painter_video_vertData0;
		static  ::kha::graphics4::VertexShader painter_video_vert;
		static void init();
		static ::Dynamic init_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Shaders */ 
