// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_5f5af744d9ff5693
#define INCLUDED_5f5af744d9ff5693
#include "cpp/Pointer.h"
#endif
#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dfc089f514597626_56_new,"haxe.format.JsonPrinter","new",0xeb68de75,"haxe.format.JsonPrinter.new","/Applications/blender.app/armsdk/Kha/Tools/haxe/std/haxe/format/JsonPrinter.hx",56,0x14239a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_dfc089f514597626_79_write,"haxe.format.JsonPrinter","write",0x755dea34,"haxe.format.JsonPrinter.write","/Applications/blender.app/armsdk/Kha/Tools/haxe/std/haxe/format/JsonPrinter.hx",79,0x14239a3b)
static const ::String _hx_array_data_f7b98003_4[] = {
	HX_("null",87,9e,0e,49),
};
static const ::String _hx_array_data_f7b98003_5[] = {
	HX_("\"<fun>\"",09,3c,cc,8b),
};
static const ::String _hx_array_data_f7b98003_6[] = {
	HX_("\"???\"",45,2f,74,bd),
};
HX_LOCAL_STACK_FRAME(_hx_pos_dfc089f514597626_167_fieldsString,"haxe.format.JsonPrinter","fieldsString",0x974bd375,"haxe.format.JsonPrinter.fieldsString","/Applications/blender.app/armsdk/Kha/Tools/haxe/std/haxe/format/JsonPrinter.hx",167,0x14239a3b)
HX_LOCAL_STACK_FRAME(_hx_pos_dfc089f514597626_193_quote,"haxe.format.JsonPrinter","quote",0x02f6a091,"haxe.format.JsonPrinter.quote","/Applications/blender.app/armsdk/Kha/Tools/haxe/std/haxe/format/JsonPrinter.hx",193,0x14239a3b)
static const ::String _hx_array_data_f7b98003_11[] = {
	HX_("\\b",86,50,00,00),
};
static const ::String _hx_array_data_f7b98003_12[] = {
	HX_("\\t",98,50,00,00),
};
static const ::String _hx_array_data_f7b98003_13[] = {
	HX_("\\n",92,50,00,00),
};
static const ::String _hx_array_data_f7b98003_14[] = {
	HX_("\\f",8a,50,00,00),
};
static const ::String _hx_array_data_f7b98003_15[] = {
	HX_("\\r",96,50,00,00),
};
static const ::String _hx_array_data_f7b98003_16[] = {
	HX_("\\\"",46,50,00,00),
};
static const ::String _hx_array_data_f7b98003_17[] = {
	HX_("\\\\",80,50,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_dfc089f514597626_225_quoteUtf8,"haxe.format.JsonPrinter","quoteUtf8",0x88683e62,"haxe.format.JsonPrinter.quoteUtf8","/Applications/blender.app/armsdk/Kha/Tools/haxe/std/haxe/format/JsonPrinter.hx",225,0x14239a3b)
static const ::String _hx_array_data_f7b98003_20[] = {
	HX_("\"",22,00,00,00),
};
static const ::String _hx_array_data_f7b98003_21[] = {
	HX_("\"",22,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_dfc089f514597626_44_print,"haxe.format.JsonPrinter","print",0x6d8fd582,"haxe.format.JsonPrinter.print","/Applications/blender.app/armsdk/Kha/Tools/haxe/std/haxe/format/JsonPrinter.hx",44,0x14239a3b)
namespace haxe{
namespace format{

void JsonPrinter_obj::__construct( ::Dynamic replacer,::String space){
            	HX_GC_STACKFRAME(&_hx_pos_dfc089f514597626_56_new)
HXLINE(  57)		this->replacer = replacer;
HXLINE(  58)		this->indent = space;
HXLINE(  59)		this->pretty = hx::IsNotNull( space );
HXLINE(  60)		this->nind = (int)0;
HXLINE(  67)		this->buf =  ::StringBuf_obj::__alloc( HX_CTX );
            	}

Dynamic JsonPrinter_obj::__CreateEmpty() { return new JsonPrinter_obj; }

void *JsonPrinter_obj::_hx_vtable = 0;

Dynamic JsonPrinter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JsonPrinter_obj > _hx_result = new JsonPrinter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool JsonPrinter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55464e91;
}

void JsonPrinter_obj::write( ::Dynamic k, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_dfc089f514597626_79_write)
HXLINE(  80)		if (hx::IsNotNull( this->replacer )) {
HXLINE(  80)			v = this->replacer(k,v);
            		}
HXLINE(  81)		{
HXLINE(  81)			 ::ValueType _g = ::Type_obj::_hx_typeof(v);
HXDLIN(  81)			switch((int)(_hx_getEnumValueIndex(_g))){
            				case (int)0: {
HXLINE( 136)					 ::StringBuf _this = this->buf;
HXDLIN( 136)					if (hx::IsNotNull( _this->charBuf )) {
HXLINE( 136)						_this->flush();
            					}
HXDLIN( 136)					if (hx::IsNull( _this->b )) {
HXLINE( 136)						_this->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_4,1);
            					}
            					else {
HXLINE( 136)						_this->b->push(HX_("null",87,9e,0e,49));
            					}
            				}
            				break;
            				case (int)1: {
HXLINE(  87)					::String v1 = ( (::String)(v) );
HXDLIN(  87)					{
HXLINE(  87)						 ::StringBuf _this1 = this->buf;
HXDLIN(  87)						if (hx::IsNotNull( _this1->charBuf )) {
HXLINE(  87)							_this1->flush();
            						}
HXDLIN(  87)						if (hx::IsNull( _this1->b )) {
HXLINE(  87)							_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v1));
            						}
            						else {
HXLINE(  87)							::Array< ::String > _this2 = _this1->b;
HXDLIN(  87)							_this2->push(::Std_obj::string(v1));
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE(  89)					::String v2;
HXDLIN(  89)					if (::Math_obj::isFinite(( (Float)(v) ))) {
HXLINE(  89)						v2 = ( (::String)(v) );
            					}
            					else {
HXLINE(  89)						v2 = HX_("null",87,9e,0e,49);
            					}
HXDLIN(  89)					{
HXLINE(  89)						 ::StringBuf _this3 = this->buf;
HXDLIN(  89)						if (hx::IsNotNull( _this3->charBuf )) {
HXLINE(  89)							_this3->flush();
            						}
HXDLIN(  89)						if (hx::IsNull( _this3->b )) {
HXLINE(  89)							_this3->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v2));
            						}
            						else {
HXLINE(  89)							::Array< ::String > _this4 = _this3->b;
HXDLIN(  89)							_this4->push(::Std_obj::string(v2));
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 134)					::String v3 = ( (::String)(v) );
HXDLIN( 134)					{
HXLINE( 134)						 ::StringBuf _this5 = this->buf;
HXDLIN( 134)						if (hx::IsNotNull( _this5->charBuf )) {
HXLINE( 134)							_this5->flush();
            						}
HXDLIN( 134)						if (hx::IsNull( _this5->b )) {
HXLINE( 134)							_this5->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v3));
            						}
            						else {
HXLINE( 134)							::Array< ::String > _this6 = _this5->b;
HXDLIN( 134)							_this6->push(::Std_obj::string(v3));
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE(  85)					this->fieldsString(v,::Reflect_obj::fields(v));
            				}
            				break;
            				case (int)5: {
HXLINE(  91)					 ::StringBuf _this7 = this->buf;
HXDLIN(  91)					if (hx::IsNotNull( _this7->charBuf )) {
HXLINE(  91)						_this7->flush();
            					}
HXDLIN(  91)					if (hx::IsNull( _this7->b )) {
HXLINE(  91)						_this7->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_5,1);
            					}
            					else {
HXLINE(  91)						_this7->b->push(HX_("\"<fun>\"",09,3c,cc,8b));
            					}
            				}
            				break;
            				case (int)6: {
HXLINE(  92)					hx::Class c = _g->_hx_getObject(0).StaticCast< hx::Class >();
HXLINE(  93)					if (hx::IsEq( c,hx::ClassOf< ::String >() )) {
HXLINE(  94)						this->quote(( (::String)(v) ));
            					}
            					else {
HXLINE(  95)						if (hx::IsEq( c,hx::ArrayBase::__mClass )) {
HXLINE(  96)							::cpp::VirtualArray v4 = ( (::cpp::VirtualArray)(v) );
HXLINE(  97)							{
HXLINE(  97)								 ::StringBuf _this8 = this->buf;
HXDLIN(  97)								if (hx::IsNull( _this8->charBuf )) {
HXLINE(  97)									_this8->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN(  97)								_this8->charBuf->push((int)91);
            							}
HXLINE(  99)							int len = v4->get_length();
HXLINE( 100)							int last = (len - (int)1);
HXLINE( 101)							{
HXLINE( 101)								int _g1 = (int)0;
HXDLIN( 101)								int _g2 = len;
HXDLIN( 101)								while((_g1 < _g2)){
HXLINE( 101)									_g1 = (_g1 + (int)1);
HXDLIN( 101)									int i = (_g1 - (int)1);
HXLINE( 103)									if ((i > (int)0)) {
HXLINE( 103)										 ::StringBuf _this9 = this->buf;
HXDLIN( 103)										if (hx::IsNull( _this9->charBuf )) {
HXLINE( 103)											_this9->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 103)										_this9->charBuf->push((int)44);
            									}
            									else {
HXLINE( 103)										this->nind++;
            									}
HXLINE( 104)									if (this->pretty) {
HXLINE( 104)										 ::StringBuf _this10 = this->buf;
HXDLIN( 104)										if (hx::IsNull( _this10->charBuf )) {
HXLINE( 104)											_this10->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 104)										_this10->charBuf->push((int)10);
            									}
HXLINE( 105)									if (this->pretty) {
HXLINE( 105)										::String v5 = this->indent;
HXDLIN( 105)										::String v6 = ::StringTools_obj::lpad(HX_("",00,00,00,00),v5,(this->nind * this->indent.length));
HXDLIN( 105)										{
HXLINE( 105)											 ::StringBuf _this11 = this->buf;
HXDLIN( 105)											if (hx::IsNotNull( _this11->charBuf )) {
HXLINE( 105)												_this11->flush();
            											}
HXDLIN( 105)											if (hx::IsNull( _this11->b )) {
HXLINE( 105)												_this11->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v6));
            											}
            											else {
HXLINE( 105)												::Array< ::String > _this12 = _this11->b;
HXDLIN( 105)												_this12->push(::Std_obj::string(v6));
            											}
            										}
            									}
HXLINE( 106)									this->write(i,v4->__get(i));
HXLINE( 107)									if ((i == last)) {
HXLINE( 109)										this->nind--;
HXLINE( 110)										if (this->pretty) {
HXLINE( 110)											 ::StringBuf _this13 = this->buf;
HXDLIN( 110)											if (hx::IsNull( _this13->charBuf )) {
HXLINE( 110)												_this13->charBuf = ::Array_obj< char >::__new();
            											}
HXDLIN( 110)											_this13->charBuf->push((int)10);
            										}
HXLINE( 111)										if (this->pretty) {
HXLINE( 111)											::String v7 = this->indent;
HXDLIN( 111)											::String v8 = ::StringTools_obj::lpad(HX_("",00,00,00,00),v7,(this->nind * this->indent.length));
HXDLIN( 111)											{
HXLINE( 111)												 ::StringBuf _this14 = this->buf;
HXDLIN( 111)												if (hx::IsNotNull( _this14->charBuf )) {
HXLINE( 111)													_this14->flush();
            												}
HXDLIN( 111)												if (hx::IsNull( _this14->b )) {
HXLINE( 111)													_this14->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v8));
            												}
            												else {
HXLINE( 111)													::Array< ::String > _this15 = _this14->b;
HXDLIN( 111)													_this15->push(::Std_obj::string(v8));
            												}
            											}
            										}
            									}
            								}
            							}
HXLINE( 114)							{
HXLINE( 114)								 ::StringBuf _this16 = this->buf;
HXDLIN( 114)								if (hx::IsNull( _this16->charBuf )) {
HXLINE( 114)									_this16->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 114)								_this16->charBuf->push((int)93);
            							}
            						}
            						else {
HXLINE( 115)							if (hx::IsEq( c,hx::ClassOf< ::haxe::ds::StringMap >() )) {
HXLINE( 116)								 ::haxe::ds::StringMap v9 = ( ( ::haxe::ds::StringMap)(v) );
HXLINE( 117)								 ::Dynamic o =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE( 118)								{
HXLINE( 118)									 ::Dynamic k1 = v9->keys();
HXDLIN( 118)									while(( (bool)(k1->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 118)										::String k2 = ( (::String)(k1->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 119)										::Reflect_obj::setField(o,k2,v9->get(k2));
            									}
            								}
HXLINE( 120)								this->fieldsString(o,::Reflect_obj::fields(o));
            							}
            							else {
HXLINE( 121)								if (hx::IsEq( c,hx::ClassOf< ::Date >() )) {
HXLINE( 122)									 ::Date v10 = ( ( ::Date)(v) );
HXLINE( 123)									this->quote(v10->toString());
            								}
            								else {
HXLINE( 128)									this->fieldsString(v,::Reflect_obj::fields(v));
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 131)					 ::Dynamic i1 = _hx_getEnumValueIndex(v);
HXLINE( 132)					{
HXLINE( 132)						::String v11 = ( (::String)(i1) );
HXDLIN( 132)						{
HXLINE( 132)							 ::StringBuf _this17 = this->buf;
HXDLIN( 132)							if (hx::IsNotNull( _this17->charBuf )) {
HXLINE( 132)								_this17->flush();
            							}
HXDLIN( 132)							if (hx::IsNull( _this17->b )) {
HXLINE( 132)								_this17->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v11));
            							}
            							else {
HXLINE( 132)								::Array< ::String > _this18 = _this17->b;
HXDLIN( 132)								_this18->push(::Std_obj::string(v11));
            							}
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE(  83)					 ::StringBuf _this19 = this->buf;
HXDLIN(  83)					if (hx::IsNotNull( _this19->charBuf )) {
HXLINE(  83)						_this19->flush();
            					}
HXDLIN(  83)					if (hx::IsNull( _this19->b )) {
HXLINE(  83)						_this19->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_6,1);
            					}
            					else {
HXLINE(  83)						_this19->b->push(HX_("\"???\"",45,2f,74,bd));
            					}
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(JsonPrinter_obj,write,(void))

void JsonPrinter_obj::fieldsString( ::Dynamic v,::Array< ::String > fields){
            	HX_STACKFRAME(&_hx_pos_dfc089f514597626_167_fieldsString)
HXLINE( 168)		{
HXLINE( 168)			 ::StringBuf _this = this->buf;
HXDLIN( 168)			if (hx::IsNull( _this->charBuf )) {
HXLINE( 168)				_this->charBuf = ::Array_obj< char >::__new();
            			}
HXDLIN( 168)			_this->charBuf->push((int)123);
            		}
HXLINE( 169)		int len = fields->length;
HXLINE( 170)		int last = (len - (int)1);
HXLINE( 171)		bool first = true;
HXLINE( 172)		{
HXLINE( 172)			int _g1 = (int)0;
HXDLIN( 172)			int _g = len;
HXDLIN( 172)			while((_g1 < _g)){
HXLINE( 172)				_g1 = (_g1 + (int)1);
HXDLIN( 172)				int i = (_g1 - (int)1);
HXLINE( 173)				::String f = fields->__get(i);
HXLINE( 174)				 ::Dynamic value = ::Reflect_obj::field(v,f);
HXLINE( 175)				if (::Reflect_obj::isFunction(value)) {
HXLINE( 175)					continue;
            				}
HXLINE( 176)				if (first) {
HXLINE( 176)					this->nind++;
HXDLIN( 176)					first = false;
            				}
            				else {
HXLINE( 176)					 ::StringBuf _this1 = this->buf;
HXDLIN( 176)					if (hx::IsNull( _this1->charBuf )) {
HXLINE( 176)						_this1->charBuf = ::Array_obj< char >::__new();
            					}
HXDLIN( 176)					_this1->charBuf->push((int)44);
            				}
HXLINE( 177)				if (this->pretty) {
HXLINE( 177)					 ::StringBuf _this2 = this->buf;
HXDLIN( 177)					if (hx::IsNull( _this2->charBuf )) {
HXLINE( 177)						_this2->charBuf = ::Array_obj< char >::__new();
            					}
HXDLIN( 177)					_this2->charBuf->push((int)10);
            				}
HXLINE( 178)				if (this->pretty) {
HXLINE( 178)					::String v1 = this->indent;
HXDLIN( 178)					::String v2 = ::StringTools_obj::lpad(HX_("",00,00,00,00),v1,(this->nind * this->indent.length));
HXDLIN( 178)					{
HXLINE( 178)						 ::StringBuf _this3 = this->buf;
HXDLIN( 178)						if (hx::IsNotNull( _this3->charBuf )) {
HXLINE( 178)							_this3->flush();
            						}
HXDLIN( 178)						if (hx::IsNull( _this3->b )) {
HXLINE( 178)							_this3->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v2));
            						}
            						else {
HXLINE( 178)							::Array< ::String > _this4 = _this3->b;
HXDLIN( 178)							_this4->push(::Std_obj::string(v2));
            						}
            					}
            				}
HXLINE( 179)				this->quote(f);
HXLINE( 180)				{
HXLINE( 180)					 ::StringBuf _this5 = this->buf;
HXDLIN( 180)					if (hx::IsNull( _this5->charBuf )) {
HXLINE( 180)						_this5->charBuf = ::Array_obj< char >::__new();
            					}
HXDLIN( 180)					_this5->charBuf->push((int)58);
            				}
HXLINE( 181)				if (this->pretty) {
HXLINE( 181)					 ::StringBuf _this6 = this->buf;
HXDLIN( 181)					if (hx::IsNull( _this6->charBuf )) {
HXLINE( 181)						_this6->charBuf = ::Array_obj< char >::__new();
            					}
HXDLIN( 181)					_this6->charBuf->push((int)32);
            				}
HXLINE( 182)				this->write(f,value);
HXLINE( 183)				if ((i == last)) {
HXLINE( 185)					this->nind--;
HXLINE( 186)					if (this->pretty) {
HXLINE( 186)						 ::StringBuf _this7 = this->buf;
HXDLIN( 186)						if (hx::IsNull( _this7->charBuf )) {
HXLINE( 186)							_this7->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 186)						_this7->charBuf->push((int)10);
            					}
HXLINE( 187)					if (this->pretty) {
HXLINE( 187)						::String v3 = this->indent;
HXDLIN( 187)						::String v4 = ::StringTools_obj::lpad(HX_("",00,00,00,00),v3,(this->nind * this->indent.length));
HXDLIN( 187)						{
HXLINE( 187)							 ::StringBuf _this8 = this->buf;
HXDLIN( 187)							if (hx::IsNotNull( _this8->charBuf )) {
HXLINE( 187)								_this8->flush();
            							}
HXDLIN( 187)							if (hx::IsNull( _this8->b )) {
HXLINE( 187)								_this8->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v4));
            							}
            							else {
HXLINE( 187)								::Array< ::String > _this9 = _this8->b;
HXDLIN( 187)								_this9->push(::Std_obj::string(v4));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 190)		{
HXLINE( 190)			 ::StringBuf _this10 = this->buf;
HXDLIN( 190)			if (hx::IsNull( _this10->charBuf )) {
HXLINE( 190)				_this10->charBuf = ::Array_obj< char >::__new();
            			}
HXDLIN( 190)			_this10->charBuf->push((int)125);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(JsonPrinter_obj,fieldsString,(void))

void JsonPrinter_obj::quote(::String s){
            	HX_STACKFRAME(&_hx_pos_dfc089f514597626_193_quote)
HXLINE( 195)		int s1 = s.length;
HXDLIN( 195)		if ((s1 != ::haxe::Utf8_obj::length(s))) {
HXLINE( 196)			this->quoteUtf8(s);
HXLINE( 197)			return;
            		}
HXLINE( 200)		{
HXLINE( 200)			 ::StringBuf _this = this->buf;
HXDLIN( 200)			if (hx::IsNull( _this->charBuf )) {
HXLINE( 200)				_this->charBuf = ::Array_obj< char >::__new();
            			}
HXDLIN( 200)			_this->charBuf->push((int)34);
            		}
HXLINE( 201)		int i = (int)0;
HXLINE( 202)		while(true){
HXLINE( 203)			i = (i + (int)1);
HXDLIN( 203)			int c = s.cca((i - (int)1));
HXLINE( 204)			if ((c == (int)0)) {
HXLINE( 204)				goto _hx_goto_9;
            			}
HXLINE( 205)			switch((int)(c)){
            				case (int)8: {
HXLINE( 211)					 ::StringBuf _this1 = this->buf;
HXDLIN( 211)					if (hx::IsNotNull( _this1->charBuf )) {
HXLINE( 211)						_this1->flush();
            					}
HXDLIN( 211)					if (hx::IsNull( _this1->b )) {
HXLINE( 211)						_this1->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_11,1);
            					}
            					else {
HXLINE( 211)						_this1->b->push(HX_("\\b",86,50,00,00));
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 210)					 ::StringBuf _this2 = this->buf;
HXDLIN( 210)					if (hx::IsNotNull( _this2->charBuf )) {
HXLINE( 210)						_this2->flush();
            					}
HXDLIN( 210)					if (hx::IsNull( _this2->b )) {
HXLINE( 210)						_this2->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_12,1);
            					}
            					else {
HXLINE( 210)						_this2->b->push(HX_("\\t",98,50,00,00));
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 208)					 ::StringBuf _this3 = this->buf;
HXDLIN( 208)					if (hx::IsNotNull( _this3->charBuf )) {
HXLINE( 208)						_this3->flush();
            					}
HXDLIN( 208)					if (hx::IsNull( _this3->b )) {
HXLINE( 208)						_this3->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_13,1);
            					}
            					else {
HXLINE( 208)						_this3->b->push(HX_("\\n",92,50,00,00));
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 212)					 ::StringBuf _this4 = this->buf;
HXDLIN( 212)					if (hx::IsNotNull( _this4->charBuf )) {
HXLINE( 212)						_this4->flush();
            					}
HXDLIN( 212)					if (hx::IsNull( _this4->b )) {
HXLINE( 212)						_this4->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_14,1);
            					}
            					else {
HXLINE( 212)						_this4->b->push(HX_("\\f",8a,50,00,00));
            					}
            				}
            				break;
            				case (int)13: {
HXLINE( 209)					 ::StringBuf _this5 = this->buf;
HXDLIN( 209)					if (hx::IsNotNull( _this5->charBuf )) {
HXLINE( 209)						_this5->flush();
            					}
HXDLIN( 209)					if (hx::IsNull( _this5->b )) {
HXLINE( 209)						_this5->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_15,1);
            					}
            					else {
HXLINE( 209)						_this5->b->push(HX_("\\r",96,50,00,00));
            					}
            				}
            				break;
            				case (int)34: {
HXLINE( 206)					 ::StringBuf _this6 = this->buf;
HXDLIN( 206)					if (hx::IsNotNull( _this6->charBuf )) {
HXLINE( 206)						_this6->flush();
            					}
HXDLIN( 206)					if (hx::IsNull( _this6->b )) {
HXLINE( 206)						_this6->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_16,1);
            					}
            					else {
HXLINE( 206)						_this6->b->push(HX_("\\\"",46,50,00,00));
            					}
            				}
            				break;
            				case (int)92: {
HXLINE( 207)					 ::StringBuf _this7 = this->buf;
HXDLIN( 207)					if (hx::IsNotNull( _this7->charBuf )) {
HXLINE( 207)						_this7->flush();
            					}
HXDLIN( 207)					if (hx::IsNull( _this7->b )) {
HXLINE( 207)						_this7->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_17,1);
            					}
            					else {
HXLINE( 207)						_this7->b->push(HX_("\\\\",80,50,00,00));
            					}
            				}
            				break;
            				default:{
HXLINE( 217)					 ::StringBuf _this8 = this->buf;
HXDLIN( 217)					if (hx::IsNull( _this8->charBuf )) {
HXLINE( 217)						_this8->charBuf = ::Array_obj< char >::__new();
            					}
HXDLIN( 217)					_this8->charBuf->push(c);
            				}
            			}
            		}
            		_hx_goto_9:;
HXLINE( 221)		{
HXLINE( 221)			 ::StringBuf _this9 = this->buf;
HXDLIN( 221)			if (hx::IsNull( _this9->charBuf )) {
HXLINE( 221)				_this9->charBuf = ::Array_obj< char >::__new();
            			}
HXDLIN( 221)			_this9->charBuf->push((int)34);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(JsonPrinter_obj,quote,(void))

void JsonPrinter_obj::quoteUtf8(::String s){
            	HX_GC_STACKFRAME(&_hx_pos_dfc089f514597626_225_quoteUtf8)
HXLINE( 226)		 ::haxe::Utf8 u =  ::haxe::Utf8_obj::__alloc( HX_CTX ,null());
HXLINE( 227)		{
HXLINE( 227)			::cpp::Pointer< char > src = cpp::Pointer_obj::fromPointer(s.__s);
HXDLIN( 227)			::cpp::Pointer< char > end = src->add(s.length);
HXDLIN( 227)			while(true){
HXLINE( 227)				::cpp::Pointer< char > tmp = end;
HXDLIN( 227)				if (!(src->lt(tmp))) {
HXLINE( 227)					goto _hx_goto_18;
            				}
HXLINE( 228)				int c = _hx_utf8_decode_advance(src->ptr);
HXDLIN( 228)				switch((int)(c)){
            					case (int)8: {
HXLINE( 233)						u->addChar((int)92);
HXDLIN( 233)						u->addChar((int)98);
            					}
            					break;
            					case (int)9: {
HXLINE( 232)						u->addChar((int)92);
HXDLIN( 232)						u->addChar((int)116);
            					}
            					break;
            					case (int)10: {
HXLINE( 230)						u->addChar((int)92);
HXDLIN( 230)						u->addChar((int)110);
            					}
            					break;
            					case (int)12: {
HXLINE( 234)						u->addChar((int)92);
HXDLIN( 234)						u->addChar((int)102);
            					}
            					break;
            					case (int)13: {
HXLINE( 231)						u->addChar((int)92);
HXDLIN( 231)						u->addChar((int)114);
            					}
            					break;
            					case (int)34: case (int)92: {
HXLINE( 229)						u->addChar((int)92);
HXDLIN( 229)						u->addChar(c);
            					}
            					break;
            					default:{
HXLINE( 235)						u->addChar(c);
            					}
            				}
            			}
            			_hx_goto_18:;
            		}
HXLINE( 238)		{
HXLINE( 238)			 ::StringBuf _this = this->buf;
HXDLIN( 238)			if (hx::IsNotNull( _this->charBuf )) {
HXLINE( 238)				_this->flush();
            			}
HXDLIN( 238)			if (hx::IsNull( _this->b )) {
HXLINE( 238)				_this->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_20,1);
            			}
            			else {
HXLINE( 238)				_this->b->push(HX_("\"",22,00,00,00));
            			}
            		}
HXLINE( 239)		{
HXLINE( 239)			 ::StringBuf _this1 = this->buf;
HXDLIN( 239)			::String x = u->toString();
HXDLIN( 239)			if (hx::IsNotNull( _this1->charBuf )) {
HXLINE( 239)				_this1->flush();
            			}
HXDLIN( 239)			if (hx::IsNull( _this1->b )) {
HXLINE( 239)				_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 239)				::Array< ::String > _this2 = _this1->b;
HXDLIN( 239)				_this2->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 240)		{
HXLINE( 240)			 ::StringBuf _this3 = this->buf;
HXDLIN( 240)			if (hx::IsNotNull( _this3->charBuf )) {
HXLINE( 240)				_this3->flush();
            			}
HXDLIN( 240)			if (hx::IsNull( _this3->b )) {
HXLINE( 240)				_this3->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_21,1);
            			}
            			else {
HXLINE( 240)				_this3->b->push(HX_("\"",22,00,00,00));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(JsonPrinter_obj,quoteUtf8,(void))

::String JsonPrinter_obj::print( ::Dynamic o, ::Dynamic replacer,::String space){
            	HX_GC_STACKFRAME(&_hx_pos_dfc089f514597626_44_print)
HXLINE(  45)		 ::haxe::format::JsonPrinter printer =  ::haxe::format::JsonPrinter_obj::__alloc( HX_CTX ,replacer,space);
HXLINE(  46)		printer->write(HX_("",00,00,00,00),o);
HXLINE(  47)		return printer->buf->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JsonPrinter_obj,print,return )


hx::ObjectPtr< JsonPrinter_obj > JsonPrinter_obj::__new( ::Dynamic replacer,::String space) {
	hx::ObjectPtr< JsonPrinter_obj > __this = new JsonPrinter_obj();
	__this->__construct(replacer,space);
	return __this;
}

hx::ObjectPtr< JsonPrinter_obj > JsonPrinter_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic replacer,::String space) {
	JsonPrinter_obj *__this = (JsonPrinter_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(JsonPrinter_obj), true, "haxe.format.JsonPrinter"));
	*(void **)__this = JsonPrinter_obj::_hx_vtable;
	__this->__construct(replacer,space);
	return __this;
}

JsonPrinter_obj::JsonPrinter_obj()
{
}

void JsonPrinter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JsonPrinter);
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_MEMBER_NAME(replacer,"replacer");
	HX_MARK_MEMBER_NAME(indent,"indent");
	HX_MARK_MEMBER_NAME(pretty,"pretty");
	HX_MARK_MEMBER_NAME(nind,"nind");
	HX_MARK_END_CLASS();
}

void JsonPrinter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buf,"buf");
	HX_VISIT_MEMBER_NAME(replacer,"replacer");
	HX_VISIT_MEMBER_NAME(indent,"indent");
	HX_VISIT_MEMBER_NAME(pretty,"pretty");
	HX_VISIT_MEMBER_NAME(nind,"nind");
}

hx::Val JsonPrinter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return hx::Val( buf ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"nind") ) { return hx::Val( nind ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return hx::Val( write_dyn() ); }
		if (HX_FIELD_EQ(inName,"quote") ) { return hx::Val( quote_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"indent") ) { return hx::Val( indent ); }
		if (HX_FIELD_EQ(inName,"pretty") ) { return hx::Val( pretty ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"replacer") ) { return hx::Val( replacer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"quoteUtf8") ) { return hx::Val( quoteUtf8_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fieldsString") ) { return hx::Val( fieldsString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool JsonPrinter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true; }
	}
	return false;
}

hx::Val JsonPrinter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast<  ::StringBuf >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"nind") ) { nind=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"indent") ) { indent=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pretty") ) { pretty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"replacer") ) { replacer=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JsonPrinter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"));
	outFields->push(HX_HCSTRING("indent","\x6c","\x0c","\xf3","\x93"));
	outFields->push(HX_HCSTRING("pretty","\xb6","\x82","\xc1","\xae"));
	outFields->push(HX_HCSTRING("nind","\x31","\x85","\x05","\x49"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo JsonPrinter_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::StringBuf*/ ,(int)offsetof(JsonPrinter_obj,buf),HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JsonPrinter_obj,replacer),HX_HCSTRING("replacer","\xbe","\xe5","\x16","\x18")},
	{hx::fsString,(int)offsetof(JsonPrinter_obj,indent),HX_HCSTRING("indent","\x6c","\x0c","\xf3","\x93")},
	{hx::fsBool,(int)offsetof(JsonPrinter_obj,pretty),HX_HCSTRING("pretty","\xb6","\x82","\xc1","\xae")},
	{hx::fsInt,(int)offsetof(JsonPrinter_obj,nind),HX_HCSTRING("nind","\x31","\x85","\x05","\x49")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *JsonPrinter_obj_sStaticStorageInfo = 0;
#endif

static ::String JsonPrinter_obj_sMemberFields[] = {
	HX_HCSTRING("buf","\x33","\xc3","\x4a","\x00"),
	HX_HCSTRING("replacer","\xbe","\xe5","\x16","\x18"),
	HX_HCSTRING("indent","\x6c","\x0c","\xf3","\x93"),
	HX_HCSTRING("pretty","\xb6","\x82","\xc1","\xae"),
	HX_HCSTRING("nind","\x31","\x85","\x05","\x49"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	HX_HCSTRING("fieldsString","\x2a","\xcc","\x56","\x34"),
	HX_HCSTRING("quote","\x3c","\x23","\xf2","\x5d"),
	HX_HCSTRING("quoteUtf8","\x8d","\xf2","\xd1","\x09"),
	::String(null()) };

static void JsonPrinter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JsonPrinter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JsonPrinter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JsonPrinter_obj::__mClass,"__mClass");
};

#endif

hx::Class JsonPrinter_obj::__mClass;

static ::String JsonPrinter_obj_sStaticFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	::String(null())
};

void JsonPrinter_obj::__register()
{
	hx::Object *dummy = new JsonPrinter_obj;
	JsonPrinter_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.format.JsonPrinter","\x03","\x80","\xb9","\xf7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JsonPrinter_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JsonPrinter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(JsonPrinter_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JsonPrinter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JsonPrinter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JsonPrinter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JsonPrinter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JsonPrinter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace format
