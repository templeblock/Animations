// Generated by Haxe 3.4.4
#ifndef INCLUDED_kha_graphics4_BlendingOperation
#define INCLUDED_kha_graphics4_BlendingOperation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,BlendingOperation)
namespace kha{
namespace graphics4{


class BlendingOperation_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef BlendingOperation_obj OBJ_;

	public:
		BlendingOperation_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("kha.graphics4.BlendingOperation","\xa7","\xd4","\x66","\xad"); }
		::String __ToString() const { return HX_HCSTRING("BlendingOperation.","\xd8","\x7a","\x09","\xe7") + _hx_tag; }

		static ::kha::graphics4::BlendingOperation Add;
		static inline ::kha::graphics4::BlendingOperation Add_dyn() { return Add; }
		static ::kha::graphics4::BlendingOperation Max;
		static inline ::kha::graphics4::BlendingOperation Max_dyn() { return Max; }
		static ::kha::graphics4::BlendingOperation Min;
		static inline ::kha::graphics4::BlendingOperation Min_dyn() { return Min; }
		static ::kha::graphics4::BlendingOperation ReverseSubtract;
		static inline ::kha::graphics4::BlendingOperation ReverseSubtract_dyn() { return ReverseSubtract; }
		static ::kha::graphics4::BlendingOperation Subtract;
		static inline ::kha::graphics4::BlendingOperation Subtract_dyn() { return Subtract; }
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_BlendingOperation */ 
