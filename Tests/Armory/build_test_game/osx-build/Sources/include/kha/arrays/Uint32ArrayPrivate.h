// Generated by Haxe 3.4.4
#ifndef INCLUDED_kha_arrays_Uint32ArrayPrivate
#define INCLUDED_kha_arrays_Uint32ArrayPrivate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_7d028c26efabce49
#define INCLUDED_7d028c26efabce49
#include "cpp_uint32array.h"
#endif
HX_DECLARE_CLASS2(kha,arrays,Uint32ArrayPrivate)

namespace kha{
namespace arrays{


class HXCPP_CLASS_ATTRIBUTES Uint32ArrayPrivate_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Uint32ArrayPrivate_obj OBJ_;
		Uint32ArrayPrivate_obj();

	public:
		enum { _hx_ClassId = 0x7fa2bc35 };

		void __construct(hx::Null< int >  __o_elements);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.arrays.Uint32ArrayPrivate")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.arrays.Uint32ArrayPrivate"); }
		static hx::ObjectPtr< Uint32ArrayPrivate_obj > __new(hx::Null< int >  __o_elements);
		static hx::ObjectPtr< Uint32ArrayPrivate_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_elements);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uint32ArrayPrivate_obj();

		HX_DO_RTTI_ALL;
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Uint32ArrayPrivate","\xe3","\xa8","\xe6","\x54"); }

		 uint32array self;
};

} // end namespace kha
} // end namespace arrays

#endif /* INCLUDED_kha_arrays_Uint32ArrayPrivate */ 
