// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_iron_data_Data
#include <iron/data/Data.h>
#endif
#ifndef INCLUDED_iron_data_ShaderContext
#include <iron/data/ShaderContext.h>
#endif
#ifndef INCLUDED_iron_data_ShaderData
#include <iron/data/ShaderData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_feb600d75be7ecbc_18_new,"iron.data.ShaderData","new",0x6be7a01f,"iron.data.ShaderData.new","iron/data/ShaderData.hx",18,0x8b5e6fd1)
static const int _hx_array_data_1237a4ad_3[] = {
	(int)0,
};
HX_DEFINE_STACK_FRAME(_hx_pos_feb600d75be7ecbc_37_new,"iron.data.ShaderData","new",0x6be7a01f,"iron.data.ShaderData.new","iron/data/ShaderData.hx",37,0x8b5e6fd1)
HX_LOCAL_STACK_FRAME(_hx_pos_feb600d75be7ecbc_57_delete,"iron.data.ShaderData","delete",0x8e9011cc,"iron.data.ShaderData.delete","iron/data/ShaderData.hx",57,0x8b5e6fd1)
HX_LOCAL_STACK_FRAME(_hx_pos_feb600d75be7ecbc_60_getContext,"iron.data.ShaderData","getContext",0x5c90521a,"iron.data.ShaderData.getContext","iron/data/ShaderData.hx",60,0x8b5e6fd1)
HX_LOCAL_STACK_FRAME(_hx_pos_feb600d75be7ecbc_46_parse,"iron.data.ShaderData","parse",0x114c0db2,"iron.data.ShaderData.parse","iron/data/ShaderData.hx",46,0x8b5e6fd1)
namespace iron{
namespace data{

void ShaderData_obj::__construct( ::Dynamic raw, ::Dynamic overrideContext, ::Dynamic done){
            	HX_GC_STACKFRAME(&_hx_pos_feb600d75be7ecbc_18_new)
HXLINE(  23)		this->contexts = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  25)		 ::iron::data::ShaderData _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  26)		super::__construct();
HXLINE(  28)		this->raw = raw;
HXLINE(  29)		this->name = ( (::String)(raw->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) );
HXLINE(  31)		{
HXLINE(  31)			int _g = (int)0;
HXDLIN(  31)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(raw->__Field(HX_("contexts",a4,9b,2b,2f),hx::paccDynamic)) );
HXDLIN(  31)			while((_g < _g1->length)){
HXLINE(  31)				 ::Dynamic c = _g1->__get(_g);
HXDLIN(  31)				_g = (_g + (int)1);
HXDLIN(  31)				this->contexts->push(null());
            			}
            		}
HXLINE(  32)		::Array< int > contextsLoaded = ::Array_obj< int >::fromData( _hx_array_data_1237a4ad_3,1);
HXLINE(  34)		{
HXLINE(  34)			int _g11 = (int)0;
HXDLIN(  34)			int _g2 = ( (::Array< ::Dynamic>)(raw->__Field(HX_("contexts",a4,9b,2b,2f),hx::paccDynamic)) )->length;
HXDLIN(  34)			while((_g11 < _g2)){
            				HX_BEGIN_LOCAL_FUNC_S5(hx::LocalFunc,_hx_Closure_0, ::iron::data::ShaderData,_gthis, ::Dynamic,raw, ::Dynamic,done,::Array< int >,contextsLoaded,int,i) HXARGC(1)
            				void _hx_run( ::iron::data::ShaderContext con){
            					HX_STACKFRAME(&_hx_pos_feb600d75be7ecbc_37_new)
HXLINE(  38)					_gthis->contexts[i] = con;
HXLINE(  39)					contextsLoaded[(int)0]++;
HXLINE(  40)					if ((contextsLoaded->__get((int)0) == ( (::Array< ::Dynamic>)(raw->__Field(HX_("contexts",a4,9b,2b,2f),hx::paccDynamic)) )->length)) {
HXLINE(  40)						done(_gthis);
            					}
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE(  34)				_g11 = (_g11 + (int)1);
HXDLIN(  34)				int i = (_g11 - (int)1);
HXLINE(  35)				 ::Dynamic c1 =  ::Dynamic(raw->__Field(HX_("contexts",a4,9b,2b,2f),hx::paccDynamic))->__GetItem(i);
HXLINE(  37)				 ::iron::data::ShaderContext_obj::__alloc( HX_CTX ,c1,overrideContext, ::Dynamic(new _hx_Closure_0(_gthis,raw,done,contextsLoaded,i)));
            			}
            		}
            	}

Dynamic ShaderData_obj::__CreateEmpty() { return new ShaderData_obj; }

void *ShaderData_obj::_hx_vtable = 0;

Dynamic ShaderData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ShaderData_obj > _hx_result = new ShaderData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ShaderData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x12d552f5) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x12d552f5;
	} else {
		return inClassId==(int)0x25e6a720;
	}
}

void ShaderData_obj::_hx_delete(){
            	HX_STACKFRAME(&_hx_pos_feb600d75be7ecbc_57_delete)
HXDLIN(  57)		int _g = (int)0;
HXDLIN(  57)		::Array< ::Dynamic> _g1 = this->contexts;
HXDLIN(  57)		while((_g < _g1->length)){
HXDLIN(  57)			 ::iron::data::ShaderContext c = _g1->__get(_g).StaticCast<  ::iron::data::ShaderContext >();
HXDLIN(  57)			_g = (_g + (int)1);
HXDLIN(  57)			c->_hx_delete();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ShaderData_obj,_hx_delete,(void))

 ::iron::data::ShaderContext ShaderData_obj::getContext(::String name){
            	HX_STACKFRAME(&_hx_pos_feb600d75be7ecbc_60_getContext)
HXLINE(  61)		{
HXLINE(  61)			int _g = (int)0;
HXDLIN(  61)			::Array< ::Dynamic> _g1 = this->contexts;
HXDLIN(  61)			while((_g < _g1->length)){
HXLINE(  61)				 ::iron::data::ShaderContext c = _g1->__get(_g).StaticCast<  ::iron::data::ShaderContext >();
HXDLIN(  61)				_g = (_g + (int)1);
HXDLIN(  61)				if ((( (::String)(c->raw->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) ) == name)) {
HXLINE(  61)					return c;
            				}
            			}
            		}
HXLINE(  62)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ShaderData_obj,getContext,return )

void ShaderData_obj::parse(::String file,::String name, ::Dynamic overrideContext, ::Dynamic done){
            		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_hx_Closure_0,::String,name, ::Dynamic,overrideContext, ::Dynamic,done) HXARGC(1)
            		void _hx_run( ::Dynamic format){
            			HX_GC_STACKFRAME(&_hx_pos_feb600d75be7ecbc_46_parse)
HXLINE(  47)			 ::Dynamic raw = ::iron::data::Data_obj::getShaderRawByName(( (::Array< ::Dynamic>)(format->__Field(HX_("shader_datas",2f,7f,c3,0b),hx::paccDynamic)) ),name);
HXLINE(  48)			if (hx::IsNull( raw )) {
HXLINE(  49)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  49)				_hx_tmp(((HX_("Shader data \"",27,98,73,4b) + name) + HX_("\" not found!",4a,86,fb,0a)),hx::SourceInfo(HX_("ShaderData.hx",0f,ba,4d,d5),49,HX_("iron.data.ShaderData",ad,a4,37,12),HX_("parse",33,90,55,bd)));
HXLINE(  50)				done(null());
            			}
HXLINE(  52)			 ::iron::data::ShaderData_obj::__alloc( HX_CTX ,raw,overrideContext,done);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_feb600d75be7ecbc_46_parse)
HXDLIN(  46)		::iron::data::Data_obj::getSceneRaw(file, ::Dynamic(new _hx_Closure_0(name,overrideContext,done)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ShaderData_obj,parse,(void))


hx::ObjectPtr< ShaderData_obj > ShaderData_obj::__new( ::Dynamic raw, ::Dynamic overrideContext, ::Dynamic done) {
	hx::ObjectPtr< ShaderData_obj > __this = new ShaderData_obj();
	__this->__construct(raw,overrideContext,done);
	return __this;
}

hx::ObjectPtr< ShaderData_obj > ShaderData_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic raw, ::Dynamic overrideContext, ::Dynamic done) {
	ShaderData_obj *__this = (ShaderData_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ShaderData_obj), true, "iron.data.ShaderData"));
	*(void **)__this = ShaderData_obj::_hx_vtable;
	__this->__construct(raw,overrideContext,done);
	return __this;
}

ShaderData_obj::ShaderData_obj()
{
}

void ShaderData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderData);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(raw,"raw");
	HX_MARK_MEMBER_NAME(contexts,"contexts");
	HX_MARK_END_CLASS();
}

void ShaderData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(raw,"raw");
	HX_VISIT_MEMBER_NAME(contexts,"contexts");
}

hx::Val ShaderData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"raw") ) { return hx::Val( raw ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"delete") ) { return hx::Val( _hx_delete_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contexts") ) { return hx::Val( contexts ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getContext") ) { return hx::Val( getContext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ShaderData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

hx::Val ShaderData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"raw") ) { raw=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contexts") ) { contexts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("raw","\xe8","\xd5","\x56","\x00"));
	outFields->push(HX_HCSTRING("contexts","\xa4","\x9b","\x2b","\x2f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ShaderData_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ShaderData_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ShaderData_obj,raw),HX_HCSTRING("raw","\xe8","\xd5","\x56","\x00")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ShaderData_obj,contexts),HX_HCSTRING("contexts","\xa4","\x9b","\x2b","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ShaderData_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderData_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("raw","\xe8","\xd5","\x56","\x00"),
	HX_HCSTRING("contexts","\xa4","\x9b","\x2b","\x2f"),
	HX_HCSTRING("delete","\x2b","\xc0","\xd8","\x6a"),
	HX_HCSTRING("getContext","\xf9","\x1b","\xd9","\x68"),
	::String(null()) };

static void ShaderData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShaderData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderData_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderData_obj::__mClass;

static ::String ShaderData_obj_sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null())
};

void ShaderData_obj::__register()
{
	hx::Object *dummy = new ShaderData_obj;
	ShaderData_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.data.ShaderData","\xad","\xa4","\x37","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderData_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ShaderData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ShaderData_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ShaderData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShaderData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShaderData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron
} // end namespace data
