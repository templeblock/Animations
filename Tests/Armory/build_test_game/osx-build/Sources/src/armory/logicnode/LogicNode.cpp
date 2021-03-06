// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_armory_logicnode_LogicNode
#include <armory/logicnode/LogicNode.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicNodeInput
#include <armory/logicnode/LogicNodeInput.h>
#endif
#ifndef INCLUDED_armory_logicnode_LogicTree
#include <armory/logicnode/LogicTree.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b4c0f79543f6af29_3_new,"armory.logicnode.LogicNode","new",0x94bed970,"armory.logicnode.LogicNode.new","armory/logicnode/LogicNode.hx",3,0xfdb86a42)
HX_LOCAL_STACK_FRAME(_hx_pos_b4c0f79543f6af29_14_addInput,"armory.logicnode.LogicNode","addInput",0x5b250719,"armory.logicnode.LogicNode.addInput","armory/logicnode/LogicNode.hx",14,0xfdb86a42)
HX_LOCAL_STACK_FRAME(_hx_pos_b4c0f79543f6af29_18_addOutputs,"armory.logicnode.LogicNode","addOutputs",0x44157721,"armory.logicnode.LogicNode.addOutputs","armory/logicnode/LogicNode.hx",18,0xfdb86a42)
HX_LOCAL_STACK_FRAME(_hx_pos_b4c0f79543f6af29_21_run,"armory.logicnode.LogicNode","run",0x94c1f05b,"armory.logicnode.LogicNode.run","armory/logicnode/LogicNode.hx",21,0xfdb86a42)
HX_LOCAL_STACK_FRAME(_hx_pos_b4c0f79543f6af29_23_runOutputs,"armory.logicnode.LogicNode","runOutputs",0x4707db37,"armory.logicnode.LogicNode.runOutputs","armory/logicnode/LogicNode.hx",23,0xfdb86a42)
HX_LOCAL_STACK_FRAME(_hx_pos_b4c0f79543f6af29_26_get,"armory.logicnode.LogicNode","get",0x94b989a6,"armory.logicnode.LogicNode.get","armory/logicnode/LogicNode.hx",26,0xfdb86a42)
HX_LOCAL_STACK_FRAME(_hx_pos_b4c0f79543f6af29_29_set,"armory.logicnode.LogicNode","set",0x94c2a4b2,"armory.logicnode.LogicNode.set","armory/logicnode/LogicNode.hx",29,0xfdb86a42)
namespace armory{
namespace logicnode{

void LogicNode_obj::__construct( ::armory::logicnode::LogicTree tree){
            	HX_STACKFRAME(&_hx_pos_b4c0f79543f6af29_3_new)
HXLINE(   7)		this->outputs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(   6)		this->inputs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  10)		this->tree = tree;
            	}

Dynamic LogicNode_obj::__CreateEmpty() { return new LogicNode_obj; }

void *LogicNode_obj::_hx_vtable = 0;

Dynamic LogicNode_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LogicNode_obj > _hx_result = new LogicNode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LogicNode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e933162;
}

void LogicNode_obj::addInput( ::armory::logicnode::LogicNode node,int from){
            	HX_GC_STACKFRAME(&_hx_pos_b4c0f79543f6af29_14_addInput)
HXDLIN(  14)		::Array< ::Dynamic> _hx_tmp = this->inputs;
HXDLIN(  14)		_hx_tmp->push( ::armory::logicnode::LogicNodeInput_obj::__alloc( HX_CTX ,node,from));
            	}


HX_DEFINE_DYNAMIC_FUNC2(LogicNode_obj,addInput,(void))

void LogicNode_obj::addOutputs(::Array< ::Dynamic> nodes){
            	HX_STACKFRAME(&_hx_pos_b4c0f79543f6af29_18_addOutputs)
HXDLIN(  18)		this->outputs->push(nodes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogicNode_obj,addOutputs,(void))

void LogicNode_obj::run(){
            	HX_STACKFRAME(&_hx_pos_b4c0f79543f6af29_21_run)
HXDLIN(  21)		int _g = (int)0;
HXDLIN(  21)		::Array< ::Dynamic> _g1 = this->outputs;
HXDLIN(  21)		while((_g < _g1->length)){
HXDLIN(  21)			::Array< ::Dynamic> ar = _g1->__get(_g).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  21)			_g = (_g + (int)1);
HXDLIN(  21)			{
HXDLIN(  21)				int _g2 = (int)0;
HXDLIN(  21)				while((_g2 < ar->length)){
HXDLIN(  21)					 ::armory::logicnode::LogicNode o = ar->__get(_g2).StaticCast<  ::armory::logicnode::LogicNode >();
HXDLIN(  21)					_g2 = (_g2 + (int)1);
HXDLIN(  21)					o->run();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LogicNode_obj,run,(void))

void LogicNode_obj::runOutputs(int i){
            	HX_STACKFRAME(&_hx_pos_b4c0f79543f6af29_23_runOutputs)
HXDLIN(  23)		int _g = (int)0;
HXDLIN(  23)		::Array< ::Dynamic> _g1 = this->outputs->__get(i).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  23)		while((_g < _g1->length)){
HXDLIN(  23)			 ::armory::logicnode::LogicNode o = _g1->__get(_g).StaticCast<  ::armory::logicnode::LogicNode >();
HXDLIN(  23)			_g = (_g + (int)1);
HXDLIN(  23)			o->run();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogicNode_obj,runOutputs,(void))

 ::Dynamic LogicNode_obj::get(int from){
            	HX_STACKFRAME(&_hx_pos_b4c0f79543f6af29_26_get)
HXDLIN(  26)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogicNode_obj,get,return )

void LogicNode_obj::set( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b4c0f79543f6af29_29_set)
            	}


HX_DEFINE_DYNAMIC_FUNC1(LogicNode_obj,set,(void))


hx::ObjectPtr< LogicNode_obj > LogicNode_obj::__new( ::armory::logicnode::LogicTree tree) {
	hx::ObjectPtr< LogicNode_obj > __this = new LogicNode_obj();
	__this->__construct(tree);
	return __this;
}

hx::ObjectPtr< LogicNode_obj > LogicNode_obj::__alloc(hx::Ctx *_hx_ctx, ::armory::logicnode::LogicTree tree) {
	LogicNode_obj *__this = (LogicNode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LogicNode_obj), true, "armory.logicnode.LogicNode"));
	*(void **)__this = LogicNode_obj::_hx_vtable;
	__this->__construct(tree);
	return __this;
}

LogicNode_obj::LogicNode_obj()
{
}

void LogicNode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogicNode);
	HX_MARK_MEMBER_NAME(tree,"tree");
	HX_MARK_MEMBER_NAME(inputs,"inputs");
	HX_MARK_MEMBER_NAME(outputs,"outputs");
	HX_MARK_END_CLASS();
}

void LogicNode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tree,"tree");
	HX_VISIT_MEMBER_NAME(inputs,"inputs");
	HX_VISIT_MEMBER_NAME(outputs,"outputs");
}

hx::Val LogicNode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return hx::Val( run_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { return hx::Val( tree ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inputs") ) { return hx::Val( inputs ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outputs") ) { return hx::Val( outputs ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addInput") ) { return hx::Val( addInput_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addOutputs") ) { return hx::Val( addOutputs_dyn() ); }
		if (HX_FIELD_EQ(inName,"runOutputs") ) { return hx::Val( runOutputs_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val LogicNode_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { tree=inValue.Cast<  ::armory::logicnode::LogicTree >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inputs") ) { inputs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outputs") ) { outputs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogicNode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d"));
	outFields->push(HX_HCSTRING("inputs","\x29","\xc5","\xed","\x9b"));
	outFields->push(HX_HCSTRING("outputs","\x52","\x12","\x6c","\xe4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo LogicNode_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::armory::logicnode::LogicTree*/ ,(int)offsetof(LogicNode_obj,tree),HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LogicNode_obj,inputs),HX_HCSTRING("inputs","\x29","\xc5","\xed","\x9b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LogicNode_obj,outputs),HX_HCSTRING("outputs","\x52","\x12","\x6c","\xe4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *LogicNode_obj_sStaticStorageInfo = 0;
#endif

static ::String LogicNode_obj_sMemberFields[] = {
	HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d"),
	HX_HCSTRING("inputs","\x29","\xc5","\xed","\x9b"),
	HX_HCSTRING("outputs","\x52","\x12","\x6c","\xe4"),
	HX_HCSTRING("addInput","\x29","\xea","\x7a","\x37"),
	HX_HCSTRING("addOutputs","\x31","\x3e","\xf6","\x4b"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("runOutputs","\x47","\xa2","\xe8","\x4e"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void LogicNode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogicNode_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LogicNode_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogicNode_obj::__mClass,"__mClass");
};

#endif

hx::Class LogicNode_obj::__mClass;

void LogicNode_obj::__register()
{
	hx::Object *dummy = new LogicNode_obj;
	LogicNode_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.logicnode.LogicNode","\x7e","\xa1","\xa1","\x81");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LogicNode_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LogicNode_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LogicNode_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LogicNode_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogicNode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogicNode_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace logicnode
