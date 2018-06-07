// Generated by Haxe 3.4.4
#ifndef INCLUDED_kha_Kravur
#define INCLUDED_kha_Kravur

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Kravur)
HX_DECLARE_CLASS1(kha,KravurImage)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,internal,BytesBlob)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES Kravur_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Kravur_obj OBJ_;
		Kravur_obj();

	public:
		enum { _hx_ClassId = 0x2ae4e6bd };

		void __construct( ::kha::internal::BytesBlob blob);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.Kravur")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.Kravur"); }
		static hx::ObjectPtr< Kravur_obj > __new( ::kha::internal::BytesBlob blob);
		static hx::ObjectPtr< Kravur_obj > __alloc(hx::Ctx *_hx_ctx, ::kha::internal::BytesBlob blob);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Kravur_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("Kravur","\xd9","\xd3","\xe9","\xe0"); }

		static  ::kha::Kravur fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		::Array< int > oldGlyphs;
		 ::kha::internal::BytesBlob blob;
		 ::haxe::ds::IntMap images;
		 ::kha::KravurImage _get(int fontSize,::Array< int > glyphs);
		::Dynamic _get_dyn();

		Float height(int fontSize);
		::Dynamic height_dyn();

		Float width(int fontSize,::String str);
		::Dynamic width_dyn();

		Float widthOfCharacters(int fontSize,::Array< int > characters,int start,int length);
		::Dynamic widthOfCharacters_dyn();

		Float baseline(int fontSize);
		::Dynamic baseline_dyn();

		void unload();
		::Dynamic unload_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Kravur */ 
