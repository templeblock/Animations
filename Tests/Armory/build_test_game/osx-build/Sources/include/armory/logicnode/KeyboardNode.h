// Generated by Haxe 3.4.4
#ifndef INCLUDED_armory_logicnode_KeyboardNode
#define INCLUDED_armory_logicnode_KeyboardNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
HX_DECLARE_CLASS2(armory,logicnode,KeyboardNode)
HX_DECLARE_CLASS2(armory,logicnode,LogicNode)
HX_DECLARE_CLASS2(armory,logicnode,LogicTree)
HX_DECLARE_CLASS1(iron,Trait)

namespace armory{
namespace logicnode{


class HXCPP_CLASS_ATTRIBUTES KeyboardNode_obj : public  ::armory::logicnode::LogicNode_obj
{
	public:
		typedef  ::armory::logicnode::LogicNode_obj super;
		typedef KeyboardNode_obj OBJ_;
		KeyboardNode_obj();

	public:
		enum { _hx_ClassId = 0x7ea6d1bb };

		void __construct( ::armory::logicnode::LogicTree tree);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.logicnode.KeyboardNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.logicnode.KeyboardNode"); }
		static hx::ObjectPtr< KeyboardNode_obj > __new( ::armory::logicnode::LogicTree tree);
		static hx::ObjectPtr< KeyboardNode_obj > __alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyboardNode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("KeyboardNode","\x69","\x1e","\x98","\xa9"); }

		::String property0;
		::String property1;
		 ::Dynamic get(int from);

};

} // end namespace armory
} // end namespace logicnode

#endif /* INCLUDED_armory_logicnode_KeyboardNode */ 
