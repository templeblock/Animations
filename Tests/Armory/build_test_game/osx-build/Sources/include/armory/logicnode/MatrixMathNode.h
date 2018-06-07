// Generated by Haxe 3.4.4
#ifndef INCLUDED_armory_logicnode_MatrixMathNode
#define INCLUDED_armory_logicnode_MatrixMathNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
HX_DECLARE_CLASS2(armory,logicnode,LogicNode)
HX_DECLARE_CLASS2(armory,logicnode,LogicTree)
HX_DECLARE_CLASS2(armory,logicnode,MatrixMathNode)
HX_DECLARE_CLASS1(iron,Trait)
HX_DECLARE_CLASS2(iron,math,Mat4)

namespace armory{
namespace logicnode{


class HXCPP_CLASS_ATTRIBUTES MatrixMathNode_obj : public  ::armory::logicnode::LogicNode_obj
{
	public:
		typedef  ::armory::logicnode::LogicNode_obj super;
		typedef MatrixMathNode_obj OBJ_;
		MatrixMathNode_obj();

	public:
		enum { _hx_ClassId = 0x72b13af1 };

		void __construct( ::armory::logicnode::LogicTree tree);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.logicnode.MatrixMathNode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.logicnode.MatrixMathNode"); }
		static hx::ObjectPtr< MatrixMathNode_obj > __new( ::armory::logicnode::LogicTree tree);
		static hx::ObjectPtr< MatrixMathNode_obj > __alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MatrixMathNode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MatrixMathNode","\x6b","\x2b","\x53","\x56"); }

		::String property0;
		 ::iron::math::Mat4 m;
		 ::Dynamic get(int from);

};

} // end namespace armory
} // end namespace logicnode

#endif /* INCLUDED_armory_logicnode_MatrixMathNode */ 
