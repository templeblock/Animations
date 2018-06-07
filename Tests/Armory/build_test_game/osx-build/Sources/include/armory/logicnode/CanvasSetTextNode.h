// Generated by Haxe 3.4.4
#ifndef INCLUDED_armory_logicnode_CanvasSetTextNode
#define INCLUDED_armory_logicnode_CanvasSetTextNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
HX_DECLARE_CLASS2(armory,logicnode,CanvasSetTextNode)
HX_DECLARE_CLASS2(armory,logicnode,LogicNode)
HX_DECLARE_CLASS2(armory,logicnode,LogicTree)
HX_DECLARE_CLASS3(armory,trait,internal,CanvasScript)
HX_DECLARE_CLASS1(iron,Trait)

namespace armory{
namespace logicnode{


class HXCPP_CLASS_ATTRIBUTES CanvasSetTextNode_obj : public  ::armory::logicnode::LogicNode_obj
{
	public:
		typedef  ::armory::logicnode::LogicNode_obj super;
		typedef CanvasSetTextNode_obj OBJ_;
		CanvasSetTextNode_obj();

	public:
		enum { _hx_ClassId = 0x048d35fb };

		void __construct( ::armory::logicnode::LogicTree tree);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.logicnode.CanvasSetTextNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.logicnode.CanvasSetTextNode"); }
		static hx::ObjectPtr< CanvasSetTextNode_obj > __new( ::armory::logicnode::LogicTree tree);
		static hx::ObjectPtr< CanvasSetTextNode_obj > __alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CanvasSetTextNode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CanvasSetTextNode","\xf9","\x28","\x99","\xd6"); }

		 ::armory::trait::internal::CanvasScript canvas;
		::String element;
		 ::Dynamic text;
};

} // end namespace armory
} // end namespace logicnode

#endif /* INCLUDED_armory_logicnode_CanvasSetTextNode */ 
