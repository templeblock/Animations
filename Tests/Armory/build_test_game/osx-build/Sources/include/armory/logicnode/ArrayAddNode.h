// Generated by Haxe 3.4.4
#ifndef INCLUDED_armory_logicnode_ArrayAddNode
#define INCLUDED_armory_logicnode_ArrayAddNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
HX_DECLARE_CLASS2(armory,logicnode,ArrayAddNode)
HX_DECLARE_CLASS2(armory,logicnode,LogicNode)
HX_DECLARE_CLASS2(armory,logicnode,LogicTree)
HX_DECLARE_CLASS1(iron,Trait)

namespace armory{
namespace logicnode{


class HXCPP_CLASS_ATTRIBUTES ArrayAddNode_obj : public  ::armory::logicnode::LogicNode_obj
{
	public:
		typedef  ::armory::logicnode::LogicNode_obj super;
		typedef ArrayAddNode_obj OBJ_;
		ArrayAddNode_obj();

	public:
		enum { _hx_ClassId = 0x4a4e2a50 };

		void __construct( ::armory::logicnode::LogicTree tree);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.logicnode.ArrayAddNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.logicnode.ArrayAddNode"); }
		static hx::ObjectPtr< ArrayAddNode_obj > __new( ::armory::logicnode::LogicTree tree);
		static hx::ObjectPtr< ArrayAddNode_obj > __alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayAddNode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ArrayAddNode","\x4a","\x28","\xb9","\xfe"); }

		void run();

};

} // end namespace armory
} // end namespace logicnode

#endif /* INCLUDED_armory_logicnode_ArrayAddNode */ 
