// Generated by Haxe 3.4.4
#ifndef INCLUDED_armory_logicnode_GlobalObjectNode
#define INCLUDED_armory_logicnode_GlobalObjectNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
HX_DECLARE_CLASS2(armory,logicnode,GlobalObjectNode)
HX_DECLARE_CLASS2(armory,logicnode,LogicNode)
HX_DECLARE_CLASS2(armory,logicnode,LogicTree)
HX_DECLARE_CLASS1(iron,Trait)

namespace armory{
namespace logicnode{


class HXCPP_CLASS_ATTRIBUTES GlobalObjectNode_obj : public  ::armory::logicnode::LogicNode_obj
{
	public:
		typedef  ::armory::logicnode::LogicNode_obj super;
		typedef GlobalObjectNode_obj OBJ_;
		GlobalObjectNode_obj();

	public:
		enum { _hx_ClassId = 0x323f5502 };

		void __construct( ::armory::logicnode::LogicTree tree);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.logicnode.GlobalObjectNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.logicnode.GlobalObjectNode"); }
		static hx::ObjectPtr< GlobalObjectNode_obj > __new( ::armory::logicnode::LogicTree tree);
		static hx::ObjectPtr< GlobalObjectNode_obj > __alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GlobalObjectNode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GlobalObjectNode","\xc4","\x4b","\xab","\x3e"); }

		 ::Dynamic get(int from);

};

} // end namespace armory
} // end namespace logicnode

#endif /* INCLUDED_armory_logicnode_GlobalObjectNode */ 
