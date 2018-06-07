// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <kha/arrays/Float32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_kore_Sound
#include <kha/kore/Sound.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cccf4343f8efafc4_33_new,"kha.kore.Sound","new",0x4b148154,"kha.kore.Sound.new","kha/kore/Sound.hx",33,0x7012c0fc)
HX_LOCAL_STACK_FRAME(_hx_pos_cccf4343f8efafc4_25_initWav,"kha.kore.Sound","initWav",0x7a2fa2f0,"kha.kore.Sound.initWav","kha/kore/Sound.hx",25,0x7012c0fc)
HX_LOCAL_STACK_FRAME(_hx_pos_cccf4343f8efafc4_30_initOgg,"kha.kore.Sound","initOgg",0x7a299613,"kha.kore.Sound.initOgg","kha/kore/Sound.hx",30,0x7012c0fc)
HX_LOCAL_STACK_FRAME(_hx_pos_cccf4343f8efafc4_47__createData,"kha.kore.Sound","_createData",0x3883a959,"kha.kore.Sound._createData","kha/kore/Sound.hx",47,0x7012c0fc)
namespace kha{
namespace kore{

void Sound_obj::__construct(::String filename){
            	HX_STACKFRAME(&_hx_pos_cccf4343f8efafc4_33_new)
HXLINE(  34)		super::__construct();
HXLINE(  35)		if (::StringTools_obj::endsWith(filename,HX_(".wav",be,71,c2,1e))) {
HXLINE(  36)			this->initWav(filename);
            		}
            		else {
HXLINE(  38)			if (::StringTools_obj::endsWith(filename,HX_(".ogg",e1,64,bc,1e))) {
HXLINE(  39)				this->initOgg(filename);
            			}
            			else {
HXLINE(  42)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  42)				_hx_tmp((HX_("Unknown sound format: ",04,53,85,0f) + filename),hx::SourceInfo(HX_("Sound.hx",6f,1d,3b,f3),42,HX_("kha.kore.Sound",62,87,c4,f4),HX_("new",60,d0,53,00)));
            			}
            		}
            	}

Dynamic Sound_obj::__CreateEmpty() { return new Sound_obj; }

void *Sound_obj::_hx_vtable = 0;

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sound_obj > _hx_result = new Sound_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Sound_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21ee7440) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21ee7440;
	} else {
		return inClassId==(int)0x6dd9d24b;
	}
}

void Sound_obj::initWav(::String filename){
            	HX_STACKFRAME(&_hx_pos_cccf4343f8efafc4_25_initWav)
            	
		Kore::Sound* sound = new Kore::Sound(filename.c_str());
		this->_createData(sound->size * 2);
		Kore::s16* left = (Kore::s16*)&sound->left[0];
		Kore::s16* right = (Kore::s16*)&sound->right[0];
		for (int i = 0; i < sound->size; i += 1) {
			uncompressedData->self.data[i * 2 + 0] = (float)(left [i] / 32767.0);
			uncompressedData->self.data[i * 2 + 1] = (float)(right[i] / 32767.0);
		}
		delete sound;
	

            	}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,initWav,(void))

void Sound_obj::initOgg(::String filename){
            	HX_STACKFRAME(&_hx_pos_cccf4343f8efafc4_30_initOgg)
HXDLIN(  30)		this->compressedData = ::sys::io::File_obj::getBytes(filename);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,initOgg,(void))

void Sound_obj::_createData(int size){
            	HX_GC_STACKFRAME(&_hx_pos_cccf4343f8efafc4_47__createData)
HXDLIN(  47)		 ::kha::arrays::Float32ArrayPrivate this1 =  ::kha::arrays::Float32ArrayPrivate_obj::__alloc( HX_CTX ,size);
HXDLIN(  47)		this->uncompressedData = this1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,_createData,(void))


hx::ObjectPtr< Sound_obj > Sound_obj::__new(::String filename) {
	hx::ObjectPtr< Sound_obj > __this = new Sound_obj();
	__this->__construct(filename);
	return __this;
}

hx::ObjectPtr< Sound_obj > Sound_obj::__alloc(hx::Ctx *_hx_ctx,::String filename) {
	Sound_obj *__this = (Sound_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sound_obj), true, "kha.kore.Sound"));
	*(void **)__this = Sound_obj::_hx_vtable;
	__this->__construct(filename);
	return __this;
}

Sound_obj::Sound_obj()
{
}

hx::Val Sound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"initWav") ) { return hx::Val( initWav_dyn() ); }
		if (HX_FIELD_EQ(inName,"initOgg") ) { return hx::Val( initOgg_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_createData") ) { return hx::Val( _createData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Sound_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Sound_obj_sStaticStorageInfo = 0;
#endif

static ::String Sound_obj_sMemberFields[] = {
	HX_HCSTRING("initWav","\xfc","\x67","\x91","\xcb"),
	HX_HCSTRING("initOgg","\x1f","\x5b","\x8b","\xcb"),
	HX_HCSTRING("_createData","\x65","\xe4","\x7a","\x27"),
	::String(null()) };

static void Sound_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sound_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
};

#endif

hx::Class Sound_obj::__mClass;

void Sound_obj::__register()
{
	hx::Object *dummy = new Sound_obj;
	Sound_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.kore.Sound","\x62","\x87","\xc4","\xf4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sound_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Sound_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sound_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sound_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sound_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sound_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace kore
