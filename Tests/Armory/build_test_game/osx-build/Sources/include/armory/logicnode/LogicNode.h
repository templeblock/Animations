// Generated by Haxe 3.4.4
#ifndef INCLUDED_armory_logicnode_LogicNode
#define INCLUDED_armory_logicnode_LogicNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(armory,logicnode,LogicNode)
HX_DECLARE_CLASS2(armory,logicnode,LogicNodeInput)
HX_DECLARE_CLASS2(armory,logicnode,LogicTree)
HX_DECLARE_CLASS1(iron,Trait)

namespace armory{
namespace logicnode{


class HXCPP_CLASS_ATTRIBUTES LogicNode_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef LogicNode_obj OBJ_;
		LogicNode_obj();

	public:
		enum { _hx_ClassId = 0x2e933162 };

		void __construct( ::armory::logicnode::LogicTree tree);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.logicnode.LogicNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.logicnode.LogicNode"); }
		static hx::ObjectPtr< LogicNode_obj > __new( ::armory::logicnode::LogicTree tree);
		static hx::ObjectPtr< LogicNode_obj > __alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LogicNode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("LogicNode","\x60","\xf6","\xb4","\x57"); }

		 ::armory::logicnode::LogicTree tree;
		::Array< ::Dynamic> inputs;
		::Array< ::Dynamic> outputs;
		void addInput( ::armory::logicnode::LogicNode node,int from);
		::Dynamic addInput_dyn();

		void addOutputs(::Array< ::Dynamic> nodes);
		::Dynamic addOutputs_dyn();

		virtual void run();
		::Dynamic run_dyn();

		void runOutputs(int i);
		::Dynamic runOutputs_dyn();

		virtual  ::Dynamic get(int from);
		::Dynamic get_dyn();

		virtual void set( ::Dynamic value);
		::Dynamic set_dyn();

};

} // end namespace armory
} // end namespace logicnode

#endif /* INCLUDED_armory_logicnode_LogicNode */ 
