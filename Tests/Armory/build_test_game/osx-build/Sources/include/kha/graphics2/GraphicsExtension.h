// Generated by Haxe 3.4.4
#ifndef INCLUDED_kha_graphics2_GraphicsExtension
#define INCLUDED_kha_graphics2_GraphicsExtension

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,GraphicsExtension)
HX_DECLARE_CLASS2(kha,graphics2,HorTextAlignment)
HX_DECLARE_CLASS2(kha,graphics2,VerTextAlignment)
HX_DECLARE_CLASS2(kha,math,Vector2)

namespace kha{
namespace graphics2{


class HXCPP_CLASS_ATTRIBUTES GraphicsExtension_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GraphicsExtension_obj OBJ_;
		GraphicsExtension_obj();

	public:
		enum { _hx_ClassId = 0x5b43c391 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.GraphicsExtension")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.graphics2.GraphicsExtension"); }

		hx::ObjectPtr< GraphicsExtension_obj > __new() {
			hx::ObjectPtr< GraphicsExtension_obj > __this = new GraphicsExtension_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GraphicsExtension_obj > __alloc(hx::Ctx *_hx_ctx) {
			GraphicsExtension_obj *__this = (GraphicsExtension_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsExtension_obj), false, "kha.graphics2.GraphicsExtension"));
			*(void **)__this = GraphicsExtension_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsExtension_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GraphicsExtension","\x14","\x49","\x4f","\xb0"); }

		static void drawArc( ::kha::graphics2::Graphics g2,Float cx,Float cy,Float radius,Float sAngle,Float eAngle,hx::Null< Float >  strength,hx::Null< bool >  ccw,hx::Null< int >  segments);
		static ::Dynamic drawArc_dyn();

		static void fillArc( ::kha::graphics2::Graphics g2,Float cx,Float cy,Float radius,Float sAngle,Float eAngle,hx::Null< bool >  ccw,hx::Null< int >  segments);
		static ::Dynamic fillArc_dyn();

		static void drawCircle( ::kha::graphics2::Graphics g2,Float cx,Float cy,Float radius,hx::Null< Float >  strength,hx::Null< int >  segments);
		static ::Dynamic drawCircle_dyn();

		static void fillCircle( ::kha::graphics2::Graphics g2,Float cx,Float cy,Float radius,hx::Null< int >  segments);
		static ::Dynamic fillCircle_dyn();

		static void drawPolygon( ::kha::graphics2::Graphics g2,Float x,Float y,::Array< ::Dynamic> vertices,hx::Null< Float >  strength);
		static ::Dynamic drawPolygon_dyn();

		static void fillPolygon( ::kha::graphics2::Graphics g2,Float x,Float y,::Array< ::Dynamic> vertices);
		static ::Dynamic fillPolygon_dyn();

		static void drawCubicBezier( ::kha::graphics2::Graphics g2,::Array< Float > x,::Array< Float > y,hx::Null< int >  segments,hx::Null< Float >  strength);
		static ::Dynamic drawCubicBezier_dyn();

		static void drawCubicBezierPath( ::kha::graphics2::Graphics g2,::Array< Float > x,::Array< Float > y,hx::Null< int >  segments,hx::Null< Float >  strength);
		static ::Dynamic drawCubicBezierPath_dyn();

		static ::Array< Float > calculateCubicBezierPoint(Float t,::Array< Float > x,::Array< Float > y);
		static ::Dynamic calculateCubicBezierPoint_dyn();

		static void drawAlignedString( ::kha::graphics2::Graphics g2,::String text,Float x,Float y, ::kha::graphics2::HorTextAlignment horAlign, ::kha::graphics2::VerTextAlignment verAlign);
		static ::Dynamic drawAlignedString_dyn();

		static void drawAlignedCharacters( ::kha::graphics2::Graphics g2,::Array< int > text,int start,int length,Float x,Float y, ::kha::graphics2::HorTextAlignment horAlign, ::kha::graphics2::VerTextAlignment verAlign);
		static ::Dynamic drawAlignedCharacters_dyn();

};

} // end namespace kha
} // end namespace graphics2

#endif /* INCLUDED_kha_graphics2_GraphicsExtension */ 
