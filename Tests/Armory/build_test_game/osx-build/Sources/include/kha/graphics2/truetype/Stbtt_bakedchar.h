// Generated by Haxe 3.4.4
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_bakedchar
#define INCLUDED_kha_graphics2_truetype_Stbtt_bakedchar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e9be8653c209e72e_51_new)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_bakedchar)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt_bakedchar_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Stbtt_bakedchar_obj OBJ_;
		Stbtt_bakedchar_obj();

	public:
		enum { _hx_ClassId = 0x12b7e778 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.truetype.Stbtt_bakedchar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.graphics2.truetype.Stbtt_bakedchar"); }

		hx::ObjectPtr< Stbtt_bakedchar_obj > __new() {
			hx::ObjectPtr< Stbtt_bakedchar_obj > __this = new Stbtt_bakedchar_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Stbtt_bakedchar_obj > __alloc(hx::Ctx *_hx_ctx) {
			Stbtt_bakedchar_obj *__this = (Stbtt_bakedchar_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stbtt_bakedchar_obj), false, "kha.graphics2.truetype.Stbtt_bakedchar"));
			*(void **)__this = Stbtt_bakedchar_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e9be8653c209e72e_51_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_bakedchar_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Stbtt_bakedchar","\xc3","\x44","\xd4","\xc8"); }

		int x0;
		int y0;
		int x1;
		int y1;
		Float xoff;
		Float yoff;
		Float xadvance;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_bakedchar */ 
