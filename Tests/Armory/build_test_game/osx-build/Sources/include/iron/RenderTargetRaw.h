// Generated by Haxe 3.4.4
#ifndef INCLUDED_iron_RenderTargetRaw
#define INCLUDED_iron_RenderTargetRaw

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f1afc54f6e3df991_759_new)
HX_DECLARE_CLASS1(iron,RenderTargetRaw)

namespace iron{


class HXCPP_CLASS_ATTRIBUTES RenderTargetRaw_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef RenderTargetRaw_obj OBJ_;
		RenderTargetRaw_obj();

	public:
		enum { _hx_ClassId = 0x3ce0dcd5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.RenderTargetRaw")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.RenderTargetRaw"); }

		hx::ObjectPtr< RenderTargetRaw_obj > __new() {
			hx::ObjectPtr< RenderTargetRaw_obj > __this = new RenderTargetRaw_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< RenderTargetRaw_obj > __alloc(hx::Ctx *_hx_ctx) {
			RenderTargetRaw_obj *__this = (RenderTargetRaw_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RenderTargetRaw_obj), true, "iron.RenderTargetRaw"));
			*(void **)__this = RenderTargetRaw_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f1afc54f6e3df991_759_new)
HXLINE( 770)		( ( ::iron::RenderTargetRaw)(__this) )->is_cubemap = null();
HXLINE( 769)		( ( ::iron::RenderTargetRaw)(__this) )->is_image = null();
HXLINE( 768)		( ( ::iron::RenderTargetRaw)(__this) )->depth = null();
HXLINE( 767)		( ( ::iron::RenderTargetRaw)(__this) )->mipmaps = null();
HXLINE( 766)		( ( ::iron::RenderTargetRaw)(__this) )->depth_buffer = null();
HXLINE( 765)		( ( ::iron::RenderTargetRaw)(__this) )->displayp = null();
HXLINE( 764)		( ( ::iron::RenderTargetRaw)(__this) )->scale = null();
HXLINE( 763)		( ( ::iron::RenderTargetRaw)(__this) )->format = null();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderTargetRaw_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("RenderTargetRaw","\xc1","\x24","\x6a","\xb2"); }

		::String name;
		int width;
		int height;
		::String format;
		 ::Dynamic scale;
		 ::Dynamic displayp;
		::String depth_buffer;
		 ::Dynamic mipmaps;
		 ::Dynamic depth;
		 ::Dynamic is_image;
		 ::Dynamic is_cubemap;
};

} // end namespace iron

#endif /* INCLUDED_iron_RenderTargetRaw */ 
