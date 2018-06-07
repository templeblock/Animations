// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState
#include <kha/audio2/ogg/vorbis/VorbisDecodeState.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Page
#include <kha/audio2/ogg/vorbis/data/Page.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderError
#include <kha/audio2/ogg/vorbis/data/ReaderError.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderErrorType
#include <kha/audio2/ogg/vorbis/data/ReaderErrorType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aa6fbbe5315f390a_14_new,"kha.audio2.ogg.vorbis.data.Page","new",0xa090c191,"kha.audio2.ogg.vorbis.data.Page.new","kha/audio2/ogg/vorbis/data/Page.hx",14,0x2c32c11e)
HX_LOCAL_STACK_FRAME(_hx_pos_aa6fbbe5315f390a_18_clone,"kha.audio2.ogg.vorbis.data.Page","clone",0x26a372ce,"kha.audio2.ogg.vorbis.data.Page.clone","kha/audio2/ogg/vorbis/data/Page.hx",18,0x2c32c11e)
HX_LOCAL_STACK_FRAME(_hx_pos_aa6fbbe5315f390a_25_start,"kha.audio2.ogg.vorbis.data.Page","start",0x624bd3d3,"kha.audio2.ogg.vorbis.data.Page.start","kha/audio2/ogg/vorbis/data/Page.hx",25,0x2c32c11e)
HX_LOCAL_STACK_FRAME(_hx_pos_aa6fbbe5315f390a_31_startWithoutCapturePattern,"kha.audio2.ogg.vorbis.data.Page","startWithoutCapturePattern",0xbc8317ff,"kha.audio2.ogg.vorbis.data.Page.startWithoutCapturePattern","kha/audio2/ogg/vorbis/data/Page.hx",31,0x2c32c11e)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

void Page_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_aa6fbbe5315f390a_14_new)
            	}

Dynamic Page_obj::__CreateEmpty() { return new Page_obj; }

void *Page_obj::_hx_vtable = 0;

Dynamic Page_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Page_obj > _hx_result = new Page_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Page_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x095879bb;
}

 ::kha::audio2::ogg::vorbis::data::Page Page_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_aa6fbbe5315f390a_18_clone)
HXLINE(  19)		 ::kha::audio2::ogg::vorbis::data::Page page =  ::kha::audio2::ogg::vorbis::data::Page_obj::__alloc( HX_CTX );
HXLINE(  20)		page->flag = this->flag;
HXLINE(  21)		return page;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Page_obj,clone,return )

void Page_obj::start( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState){
            	HX_GC_STACKFRAME(&_hx_pos_aa6fbbe5315f390a_25_start)
HXLINE(  26)		bool _hx_tmp;
HXDLIN(  26)		bool _hx_tmp1;
HXDLIN(  26)		bool _hx_tmp2;
HXDLIN(  26)		 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState1 = decodeState;
HXDLIN(  26)		decodeState1->inputPosition = (decodeState1->inputPosition + (int)1);
HXDLIN(  26)		if ((decodeState->input->readByte() == (int)79)) {
HXLINE(  26)			 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState2 = decodeState;
HXDLIN(  26)			decodeState2->inputPosition = (decodeState2->inputPosition + (int)1);
HXDLIN(  26)			_hx_tmp2 = (decodeState->input->readByte() != (int)103);
            		}
            		else {
HXLINE(  26)			_hx_tmp2 = true;
            		}
HXDLIN(  26)		if (!(_hx_tmp2)) {
HXLINE(  26)			 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState3 = decodeState;
HXDLIN(  26)			decodeState3->inputPosition = (decodeState3->inputPosition + (int)1);
HXDLIN(  26)			_hx_tmp1 = (decodeState->input->readByte() != (int)103);
            		}
            		else {
HXLINE(  26)			_hx_tmp1 = true;
            		}
HXDLIN(  26)		if (!(_hx_tmp1)) {
HXLINE(  26)			 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState4 = decodeState;
HXDLIN(  26)			decodeState4->inputPosition = (decodeState4->inputPosition + (int)1);
HXDLIN(  26)			_hx_tmp = (decodeState->input->readByte() != (int)83);
            		}
            		else {
HXLINE(  26)			_hx_tmp = true;
            		}
HXDLIN(  26)		if (_hx_tmp) {
HXLINE(  26)			HX_STACK_DO_THROW( ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__alloc( HX_CTX ,::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::MISSING_CAPTURE_PATTERN_dyn(),null(),hx::SourceInfo(HX_("VorbisDecodeState.hx",6e,33,f8,9f),323,HX_("kha.audio2.ogg.vorbis.VorbisDecodeState",3c,6b,03,19),HX_("capturePattern",6a,1a,b8,20))));
            		}
HXLINE(  27)		this->startWithoutCapturePattern(decodeState);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Page_obj,start,(void))

void Page_obj::startWithoutCapturePattern( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState){
            	HX_GC_STACKFRAME(&_hx_pos_aa6fbbe5315f390a_31_startWithoutCapturePattern)
HXLINE(  32)		 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState1 = decodeState;
HXDLIN(  32)		decodeState1->inputPosition = (decodeState1->inputPosition + (int)1);
HXDLIN(  32)		int version = decodeState->input->readByte();
HXLINE(  33)		if ((version != (int)0)) {
HXLINE(  34)			HX_STACK_DO_THROW( ::kha::audio2::ogg::vorbis::data::ReaderError_obj::__alloc( HX_CTX ,::kha::audio2::ogg::vorbis::data::ReaderErrorType_obj::INVALID_STREAM_STRUCTURE_VERSION_dyn(),(HX_("",00,00,00,00) + version),hx::SourceInfo(HX_("Page.hx",af,ab,7e,58),34,HX_("kha.audio2.ogg.vorbis.data.Page",1f,a5,b2,c9),HX_("startWithoutCapturePattern",10,03,9b,8e))));
            		}
HXLINE(  37)		 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState2 = decodeState;
HXDLIN(  37)		decodeState2->inputPosition = (decodeState2->inputPosition + (int)1);
HXDLIN(  37)		this->flag = decodeState->input->readByte();
HXLINE(  38)		 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState3 = decodeState;
HXDLIN(  38)		decodeState3->inputPosition = (decodeState3->inputPosition + (int)4);
HXDLIN(  38)		int loc0 = decodeState->input->readInt32();
HXLINE(  39)		 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState4 = decodeState;
HXDLIN(  39)		decodeState4->inputPosition = (decodeState4->inputPosition + (int)4);
HXDLIN(  39)		int loc1 = decodeState->input->readInt32();
HXLINE(  42)		{
HXLINE(  42)			 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState5 = decodeState;
HXDLIN(  42)			decodeState5->inputPosition = (decodeState5->inputPosition + (int)4);
HXDLIN(  42)			decodeState->input->readInt32();
            		}
HXLINE(  46)		{
HXLINE(  46)			 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState6 = decodeState;
HXDLIN(  46)			decodeState6->inputPosition = (decodeState6->inputPosition + (int)4);
HXDLIN(  46)			decodeState->input->readInt32();
            		}
HXLINE(  49)		{
HXLINE(  49)			 ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState7 = decodeState;
HXDLIN(  49)			decodeState7->inputPosition = (decodeState7->inputPosition + (int)4);
HXDLIN(  49)			decodeState->input->readInt32();
            		}
HXLINE(  52)		decodeState->setup(loc0,loc1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Page_obj,startWithoutCapturePattern,(void))


hx::ObjectPtr< Page_obj > Page_obj::__new() {
	hx::ObjectPtr< Page_obj > __this = new Page_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Page_obj > Page_obj::__alloc(hx::Ctx *_hx_ctx) {
	Page_obj *__this = (Page_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Page_obj), false, "kha.audio2.ogg.vorbis.data.Page"));
	*(void **)__this = Page_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Page_obj::Page_obj()
{
}

hx::Val Page_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flag") ) { return hx::Val( flag ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"startWithoutCapturePattern") ) { return hx::Val( startWithoutCapturePattern_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Page_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flag") ) { flag=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Page_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Page_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Page_obj,flag),HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Page_obj_sStaticStorageInfo = 0;
#endif

static ::String Page_obj_sMemberFields[] = {
	HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("startWithoutCapturePattern","\x10","\x03","\x9b","\x8e"),
	::String(null()) };

static void Page_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Page_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Page_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Page_obj::__mClass,"__mClass");
};

#endif

hx::Class Page_obj::__mClass;

void Page_obj::__register()
{
	hx::Object *dummy = new Page_obj;
	Page_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.Page","\x1f","\xa5","\xb2","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Page_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Page_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Page_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Page_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Page_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Page_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data
