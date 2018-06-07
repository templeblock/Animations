// Generated by Haxe 3.4.4
#ifndef INCLUDED_armory_logicnode_OnTimerNode
#define INCLUDED_armory_logicnode_OnTimerNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
HX_DECLARE_CLASS2(armory,logicnode,LogicNode)
HX_DECLARE_CLASS2(armory,logicnode,LogicTree)
HX_DECLARE_CLASS2(armory,logicnode,OnTimerNode)
HX_DECLARE_CLASS1(iron,Trait)

namespace armory{
namespace logicnode{


class HXCPP_CLASS_ATTRIBUTES OnTimerNode_obj : public  ::armory::logicnode::LogicNode_obj
{
	public:
		typedef  ::armory::logicnode::LogicNode_obj super;
		typedef OnTimerNode_obj OBJ_;
		OnTimerNode_obj();

	public:
		enum { _hx_ClassId = 0x1df5260e };

		void __construct( ::armory::logicnode::LogicTree tree);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.logicnode.OnTimerNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.logicnode.OnTimerNode"); }
		static hx::ObjectPtr< OnTimerNode_obj > __new( ::armory::logicnode::LogicTree tree);
		static hx::ObjectPtr< OnTimerNode_obj > __alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OnTimerNode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("OnTimerNode","\x28","\x37","\xca","\xff"); }

		Float duration;
		bool repeat;
		void update();
		::Dynamic update_dyn();

};

} // end namespace armory
} // end namespace logicnode

#endif /* INCLUDED_armory_logicnode_OnTimerNode */ 
