// Generated by Haxe 3.4.4
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo
#define INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ad5d07f812e15772_118_new)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_fontinfo)
HX_DECLARE_CLASS2(kha,internal,BytesBlob)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt_fontinfo_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Stbtt_fontinfo_obj OBJ_;
		Stbtt_fontinfo_obj();

	public:
		enum { _hx_ClassId = 0x36f9d3a6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics2.truetype.Stbtt_fontinfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics2.truetype.Stbtt_fontinfo"); }

		hx::ObjectPtr< Stbtt_fontinfo_obj > __new() {
			hx::ObjectPtr< Stbtt_fontinfo_obj > __this = new Stbtt_fontinfo_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Stbtt_fontinfo_obj > __alloc(hx::Ctx *_hx_ctx) {
			Stbtt_fontinfo_obj *__this = (Stbtt_fontinfo_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stbtt_fontinfo_obj), true, "kha.graphics2.truetype.Stbtt_fontinfo"));
			*(void **)__this = Stbtt_fontinfo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ad5d07f812e15772_118_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_fontinfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Stbtt_fontinfo","\xbb","\xe8","\x2f","\x90"); }

		 ::kha::internal::BytesBlob data;
		int fontstart;
		int numGlyphs;
		int loca;
		int head;
		int glyf;
		int hhea;
		int hmtx;
		int kern;
		int index_map;
		int indexToLocFormat;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_fontinfo */ 
