#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// Mono.Security.ASN1
struct ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E;
// Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension
struct SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A;
// Mono.Security.X509.X509Crl
struct X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_tDE05F8A01DC519BB1FE337AEB5F974EE2DE8D37F;
// Mono.Security.X509.X509Extension
struct X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19;
// Mono.Security.X509.X509Extension[]
struct X509ExtensionU5BU5D_t7B1B29AAD3EEC2C51495C0B9BDF5A35E517A53F7;
// Mono.Security.X509.X509Store
struct X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB;
// Mono.Security.X509.X509StoreManager
struct X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0;
// Mono.Security.X509.X509Stores
struct X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325;
// Mono.Security.X509.X509Stores/Names
struct Names_t8F9528D73B2FC36C37A81242CED178D0972B3AA3;
// Mono.Security.X509.X520
struct X520_t276CE76F28ED8BFD0E5D02C562989DFC34A2C633;
// Mono.Security.X509.X520/AttributeTypeAndValue
struct AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A;
// Mono.Security.X509.X520/CommonName
struct CommonName_tEAA1DA734A678C5D6FA6757181798BED7F30359F;
// Mono.Security.X509.X520/CountryName
struct CountryName_t8675CFBE35E1541CB37CF24C10E6C869EF3B0D84;
// Mono.Security.X509.X520/DnQualifier
struct DnQualifier_tBD6B191969DDAA13FA8E96D356BDC0BE1A831FB6;
// Mono.Security.X509.X520/DomainComponent
struct DomainComponent_tD3C4701F2DC22119E9E25E06CF12E4D8B120C3F2;
// Mono.Security.X509.X520/EmailAddress
struct EmailAddress_tB969FD5FB8E80150451C39F65D86BBF04E306B46;
// Mono.Security.X509.X520/GivenName
struct GivenName_tCB6893F22D446029B75FE298D1D6E15F0BD40A8F;
// Mono.Security.X509.X520/Initial
struct Initial_tB336018BAFC01A1D5239C1AB24C21E2C3B99D3FE;
// Mono.Security.X509.X520/LocalityName
struct LocalityName_t4F4F9AC4FCD56C08B788B58BA653DF6BDFD00DFD;
// Mono.Security.X509.X520/Name
struct Name_tDA52F4C52A08230323C5F27CE19F6AE51E628BBD;
// Mono.Security.X509.X520/Oid
struct Oid_t21BE127A3ADD51797D9F4369E2904FCDDB378685;
// Mono.Security.X509.X520/OrganizationName
struct OrganizationName_t0DE9CA8F8329779E696752071DC4CE4D0FAEE461;
// Mono.Security.X509.X520/OrganizationalUnitName
struct OrganizationalUnitName_t2F837B2D291EC2BAA8FBAECD7DDAE8FB74453EB1;
// Mono.Security.X509.X520/SerialNumber
struct SerialNumber_t2892A2F131DEEE22A2113E5A21964BF165B24450;
// Mono.Security.X509.X520/StateOrProvinceName
struct StateOrProvinceName_tDDC2D6BC4CED251EAABFF6949D27AE2341BFE17A;
// Mono.Security.X509.X520/Surname
struct Surname_t84F1D61A0AB7D02E268164C41F170AD36B0219CA;
// Mono.Security.X509.X520/Title
struct Title_t2FB1075E3A7E4014327A13E3BCFAF0B33DD51556;
// Mono.Security.X509.X520/UserId
struct UserId_tE203B27097A4BA57E2C00E0E0B2285EF6B4A470C;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.ArrayList
struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4;
// System.Collections.CollectionBase
struct CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.DirectoryInfo
struct DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.DSA
struct DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF;
// System.Security.Cryptography.RSA
struct RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02E18DE4C5216B02627EA40BE865A3178791CBA7;
IL2CPP_EXTERN_C String_t* _stringLiteral03C970B1ADED3B0DB15F235BEAA10FF96753E22B;
IL2CPP_EXTERN_C String_t* _stringLiteral088FB1A4AB057F4FCF7D487006499060C7FE5773;
IL2CPP_EXTERN_C String_t* _stringLiteral099600A10A944114AAC406D136B625FB416DD779;
IL2CPP_EXTERN_C String_t* _stringLiteral09ACBB7D1DA8AA3DAFF4C1EC8076713606974C64;
IL2CPP_EXTERN_C String_t* _stringLiteral11F6501687713C72B4CE567FB195C2A8DE8772D8;
IL2CPP_EXTERN_C String_t* _stringLiteral19E258979D8F780760217319B04EFEA66F35C4C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2037DE437C80264CCBCE8A8B61D0BF9F593D2322;
IL2CPP_EXTERN_C String_t* _stringLiteral2118C8699C55066293A0E34341B9953F6C1811BD;
IL2CPP_EXTERN_C String_t* _stringLiteral2C809D24DC7F35393288F0A442B7E00E8982AA9D;
IL2CPP_EXTERN_C String_t* _stringLiteral33A579FFC0DCCBFF15BE01734EA4138EA4E7635C;
IL2CPP_EXTERN_C String_t* _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727;
IL2CPP_EXTERN_C String_t* _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9;
IL2CPP_EXTERN_C String_t* _stringLiteral513E853432982DFE130969DDB6E9757C8FDBA201;
IL2CPP_EXTERN_C String_t* _stringLiteral52596FD1F8D7EA10A7682B8EBD09CDC8F17478D3;
IL2CPP_EXTERN_C String_t* _stringLiteral5C7A91EFCEDF247304D1731FF3B75E425CE37B31;
IL2CPP_EXTERN_C String_t* _stringLiteral69B85846222F763F537AAE189724E50D8A16971F;
IL2CPP_EXTERN_C String_t* _stringLiteral6E92A15D5DD78974F49420D2215A264BB0B93A55;
IL2CPP_EXTERN_C String_t* _stringLiteral72F73068315E3A6873135BAAB8A88CB488A78803;
IL2CPP_EXTERN_C String_t* _stringLiteral7AFEC00C242908DCFA9B158615E0E680F8AA5506;
IL2CPP_EXTERN_C String_t* _stringLiteral7B152A24BBC8DB09B568453879784A9FBD2A9FFC;
IL2CPP_EXTERN_C String_t* _stringLiteral805BC953BA9AFAADC1F3528D02F3CCDA4F21B358;
IL2CPP_EXTERN_C String_t* _stringLiteral810419514AFB3C1841D939548427EE61141CC51B;
IL2CPP_EXTERN_C String_t* _stringLiteral81D15B787B58E9D0C9E091EC2E37EECA9333608E;
IL2CPP_EXTERN_C String_t* _stringLiteral8ADFFDF82EC866E0D56098906F71E699AB3CCCD4;
IL2CPP_EXTERN_C String_t* _stringLiteral8B634E3C4021FA5591147E5F0822C6B238D316A4;
IL2CPP_EXTERN_C String_t* _stringLiteral8DF69D1C4EF702A3DE785DB5E798CC1CE8FEEFAE;
IL2CPP_EXTERN_C String_t* _stringLiteral8F5D2C9CBCE0E20D27CF160D1AAE711EE77BE9A5;
IL2CPP_EXTERN_C String_t* _stringLiteral91748B1F939750C890C0756623A211BEAB6138CA;
IL2CPP_EXTERN_C String_t* _stringLiteral9F792B61D0EC544D91E7AFF34E2E99EE3CF2B313;
IL2CPP_EXTERN_C String_t* _stringLiteralB41E4AA57D2AD7EB1B29835A1B483E209DCC3C0E;
IL2CPP_EXTERN_C String_t* _stringLiteralB6105E110ED68EA73600D4EEAA37DC8F6CB18335;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralBC6D1739033594C8571EAA3DC5D10DF255DC2E04;
IL2CPP_EXTERN_C String_t* _stringLiteralBC6E67BC4F59310F473E7E6D8ED4A8FBFA3F50C0;
IL2CPP_EXTERN_C String_t* _stringLiteralC118BE4848FE4BC138712E127B11AA021E689F71;
IL2CPP_EXTERN_C String_t* _stringLiteralC276D29F33E8F3F411A0BAFB43D3E6BD00ECA48E;
IL2CPP_EXTERN_C String_t* _stringLiteralC7EB5BBC6C8481A27394D0B29BB892C16FF5D5B1;
IL2CPP_EXTERN_C String_t* _stringLiteralC842E9E9BC835B364523756986E087621D98DDA0;
IL2CPP_EXTERN_C String_t* _stringLiteralCB6BFAA42C941FDE4E1BC257CC7992DB4AEF007A;
IL2CPP_EXTERN_C String_t* _stringLiteralD013A00CC3B2473FDE9F7A61FDC9BFE531B1B6A3;
IL2CPP_EXTERN_C String_t* _stringLiteralDD3B0CAB4F2ACC9D42995B79C553B786890D1014;
IL2CPP_EXTERN_C String_t* _stringLiteralE542FDE26AABF73571BE27EAF76FD5707293BBED;
IL2CPP_EXTERN_C String_t* _stringLiteralF3D7B63284337204E5B808210EB82D4A589B203A;
IL2CPP_EXTERN_C String_t* _stringLiteralF4056FB2AB91AFF879F8761A8F0F25B3C5E3F653;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C81EF410616CA8103A6D5A609E5F846445877A;
IL2CPP_EXTERN_C String_t* _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64;
IL2CPP_EXTERN_C String_t* _stringLiteralFF432B467F0803C332354C8259DBF1D890AB808C;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m03D674052100D1E9D6214ADD31FE7E5F7E6788DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AttributeTypeAndValue_set_Value_m317A65618DA99A9D3D87AE89236ACD7443DE57C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ExtensionCollection_AddRange_m85AC174C111FF3CA20D983B42EDD517BDA482287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ExtensionCollection_AddRange_mFDCAC80492B3C0DE3A247B30E0DBC08DA5F73C42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ExtensionCollection_Add_m6D1C33115BB33BCA81D94CF032176F2CD43DC88E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ExtensionCollection_CopyTo_m83E9F131564A1C6E77F6DF1ABA24FBF8057BFD09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ExtensionCollection_IndexOf_m4E013A4DA9A020885247FA65321B661CB0C6CD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ExtensionCollection_IndexOf_m8821D9D903993924EDA8C7B302946346AA406377_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ExtensionCollection_Insert_m2D09C62CB8D8364819979BC9CD4C2D5EDF7DD84C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ExtensionCollection_Remove_m07B303CF23A7194773E10B5A536BEF643CA008E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ExtensionCollection_Remove_m6A7ED6913A48A5249E0897F4B5F77234DE86DDE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Extension__ctor_mB40626B9F809BED1E069D14D297C9B231EC991A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Store_CheckStore_m3B586D9A34CCCE7CE85200097EECD26A964F11B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Store_Import_mEC83234B0B3AA2A80D59BFF0F85F60E75727267C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Store_Load_mC9B8AADD2AE5FE280E4E148E7E9090F98AAA5A76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Store_Remove_m9A961B2D523A77EED8E32E7473517FD54F8EDDBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Stores_Open_mFB8D3E95E549891F1F63721EE2421D46D823B2DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AttributeTypeAndValue_GetASN1_m90E44F6B17F7B4752065A1C9360F82F3650676F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AttributeTypeAndValue_set_Value_m317A65618DA99A9D3D87AE89236ACD7443DE57C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CommonName__ctor_mC30002FFDC5D5DFFB81C1FF117CE4FA1F24E0FD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CountryName__ctor_m60ADD661C06486D7A14686423C8A01C9C472095C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DnQualifier__ctor_mCE52E86BCCE73B6DFE3E54CBDBB13B658A3DC990_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DomainComponent__ctor_mB5895E696B1787E23CD3EA702B273936E3EABA3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EmailAddress__ctor_m9EF8048D5A02CA279B9F8669FDEA1E6ECDE1331D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GivenName__ctor_m07C0036741DAE6C4DE5EF3A3EB9FD934B209D43C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Initial__ctor_m30BD7B9895EE5C4C99E1E2388CF671983CFD0471_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LocalityName__ctor_mE60344D8B84625D95B6B644A00315746AA7980E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Name__ctor_m9870AA328B72210906EF9B3F4FE5921EA4C4CBC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OrganizationName__ctor_m285DCE36C40D5C3878D51F4992092AC8E829FB18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OrganizationalUnitName__ctor_m0F81FB3E66D5CB8485565EE238ACA27B95E811D1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SerialNumber__ctor_m60AD56CF59A29833F54C64CA3583DB4F8C397D95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StateOrProvinceName__ctor_m9E94BB097B0F5C7AC470C676C9E373EC22274C60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Surname__ctor_m6CDA4FF7FF0D3CBF98347A11E8987FD737CE9A2F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Title__ctor_mC56D2B0A8B66843F1D15CFD104DC5131128CA3BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UserId__ctor_mB8CEBB9083CD491CD54D4E9D2436E7D209F93862_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509CrlEntry_GetBytes_mCFBC78EA1D99F9C9929673B312DC88154D30EEF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509CrlEntry__ctor_m8DA86F7F5CACB666328374F7F22F71AFD7147CF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509CrlEntry__ctor_mA34D89592A8B579B875CF6078E2D9DF54F8C2FAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509CrlEntry_get_SerialNumber_m4C9D9420D7DC18BF3E0DCCD811FC1D7B66243DE6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509ExtensionCollection_AddRange_m85AC174C111FF3CA20D983B42EDD517BDA482287_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509ExtensionCollection_AddRange_mFDCAC80492B3C0DE3A247B30E0DBC08DA5F73C42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509ExtensionCollection_Add_m6D1C33115BB33BCA81D94CF032176F2CD43DC88E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509ExtensionCollection_CopyTo_m83E9F131564A1C6E77F6DF1ABA24FBF8057BFD09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509ExtensionCollection_GetBytes_m0A54DFF3DDDBFEA3EC887939DC4018807AD09018_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509ExtensionCollection_IndexOf_m4E013A4DA9A020885247FA65321B661CB0C6CD70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509ExtensionCollection_IndexOf_m8821D9D903993924EDA8C7B302946346AA406377_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509ExtensionCollection_Insert_m2D09C62CB8D8364819979BC9CD4C2D5EDF7DD84C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509ExtensionCollection_Remove_m07B303CF23A7194773E10B5A536BEF643CA008E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509ExtensionCollection_Remove_m6A7ED6913A48A5249E0897F4B5F77234DE86DDE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509ExtensionCollection_get_Item_m238E6DF2D236A61A1446F8983F4BDD6B50E57EA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509ExtensionCollection_get_Item_m7E4C7EDDC57517E65EA0998F8D384A87C9EAFDCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Extension_Equals_m142690BDE93BA49B3EF04CDF1F14A51D274F38FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Extension_ToString_m6E272E5A762E6CC4AE476A5AF8627D164308C3A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Extension_WriteLine_m3C538A06F19ABFD9F3BC9F531C8CA96329E8EFF2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Extension__ctor_mB40626B9F809BED1E069D14D297C9B231EC991A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Extension_get_ASN1_mEE5890FAEC41BF25539B672EAE5C8FEB5219E674_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_CurrentUserPath_m9D30739764CC416AFE38521B3259B2199680A807_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_CurrentUser_mE6B27212DC2033EEF32C57ED898F9E158875D369_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_IntermediateCACertificates_m329CE1FDB7D5676AC7021EDDF7BF6AAFFCA2321B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_IntermediateCACrls_m466BDCA3837A192A00581F50352C053408E5428A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_LocalMachinePath_m2FFA1E8899F38DDB697EBAAB0C24F90955AC3895_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_LocalMachine_m4742A449590646EDEF7C549270086795B0A5381E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_NewCurrentUserPath_m678C839E06D71B863FE140A93316EEE9E86AF059_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_NewCurrentUser_m377A61DFA78783CA7C5DA0A1558B463BF79745A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_NewLocalMachinePath_m3D318947C9AFFCB0ED249953322AAAB45981632C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_NewLocalMachine_m2378297F3A92120504BD929503444E886B95C4F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_TrustedRootCACrls_mC5C86497B0EC360AF4C92D7FE668DAF651DEF6BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_TrustedRootCertificates_mBD56BED96B6E692046A8B922AD348327E70C82DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509StoreManager_get_UntrustedCertificates_m5347AE75EB4675F546D39720A1BCA81D4F9D6299_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_BuildCertificatesCollection_m38BE87E16F58481AE1CCA740DDE60DA1A09BED55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_BuildCrlsCollection_m295A43B0ED3469636553A7A04F12A2E6B01AFE1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_CheckStore_m3B586D9A34CCCE7CE85200097EECD26A964F11B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_GetUniqueName_m612727D7E19DC6AD5764187EEF5179124AB684BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_GetUniqueName_m6DF8037A58E1381373C0C39458B0A707F225DAC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_GetUniqueName_m96158212713169D2D267B4A0E7C570C6F7665041_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_GetUniqueName_mBEC442BC3F2AC338905E3C51578260EC98B9E6A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_ImportNewFormat_m703CA17205865FD57FB031C85DCE7190E5E8B881_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_Import_mDD1F487AABDCF30CDDE087FB06550E3EEE248304_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_Import_mEC83234B0B3AA2A80D59BFF0F85F60E75727267C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_LoadCertificate_m5B3D55AB0923EC03076530159AF49EF028BE8024_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_LoadCrl_mC9358FFD818E246CF0F7A82B19A18EACFCFFC78E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_Load_mC9B8AADD2AE5FE280E4E148E7E9090F98AAA5A76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_RemoveNewFormat_m612E97E9604D4EB224B20F7AE1466F6C1AD58CFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_Remove_m95238DB0256FC3A3241414885F1FB23B2140BDC4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_Remove_m9A961B2D523A77EED8E32E7473517FD54F8EDDBF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_get_Crls_m1E82961E5031C510EDBB616061D50D94B234BE8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Store_get_Name_mBD22C5AED5CF7D79C3461C04ABC21EAD98AD677A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Stores_Open_mFB8D3E95E549891F1F63721EE2421D46D823B2DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Stores_get_IntermediateCA_m54F3793A2A85820EA2F864E872369E3FE7E83A53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Stores_get_OtherPeople_mC9CD5B1109CCD1D6C26F2A165E884235CEC24312_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Stores_get_Personal_mA6B502D4DC022C5CD5A17AAE2995B859036C7F91_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Stores_get_TrustedRoot_mB2A929D0D46EB23691AC5316F31D126AEFCFBBC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t X509Stores_get_Untrusted_m8E7A1534EDEA12DC53C74CBFB777F0101153EBA1_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct X509ExtensionU5BU5D_t7B1B29AAD3EEC2C51495C0B9BDF5A35E517A53F7;
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Mono.Security.ASN1
struct  ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E, ___m_aValue_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_aValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E, ___elist_2)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elist_2), (void*)value);
	}
};


// Mono.Security.X509.X509Extension
struct  X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extnOid_0), (void*)value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF, ___extnValue_2)); }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extnValue_2), (void*)value);
	}
};


// Mono.Security.X509.X509Store
struct  X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * ____certificates_1;
	// System.Collections.ArrayList Mono.Security.X509.X509Store::_crls
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ____crls_2;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_3;
	// System.Boolean Mono.Security.X509.X509Store::_newFormat
	bool ____newFormat_4;
	// System.String Mono.Security.X509.X509Store::_name
	String_t* ____name_5;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storePath_0), (void*)value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB, ____certificates_1)); }
	inline X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____certificates_1), (void*)value);
	}

	inline static int32_t get_offset_of__crls_2() { return static_cast<int32_t>(offsetof(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB, ____crls_2)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get__crls_2() const { return ____crls_2; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of__crls_2() { return &____crls_2; }
	inline void set__crls_2(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		____crls_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crls_2), (void*)value);
	}

	inline static int32_t get_offset_of__crl_3() { return static_cast<int32_t>(offsetof(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB, ____crl_3)); }
	inline bool get__crl_3() const { return ____crl_3; }
	inline bool* get_address_of__crl_3() { return &____crl_3; }
	inline void set__crl_3(bool value)
	{
		____crl_3 = value;
	}

	inline static int32_t get_offset_of__newFormat_4() { return static_cast<int32_t>(offsetof(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB, ____newFormat_4)); }
	inline bool get__newFormat_4() const { return ____newFormat_4; }
	inline bool* get_address_of__newFormat_4() { return &____newFormat_4; }
	inline void set__newFormat_4(bool value)
	{
		____newFormat_4 = value;
	}

	inline static int32_t get_offset_of__name_5() { return static_cast<int32_t>(offsetof(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB, ____name_5)); }
	inline String_t* get__name_5() const { return ____name_5; }
	inline String_t** get_address_of__name_5() { return &____name_5; }
	inline void set__name_5(String_t* value)
	{
		____name_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_5), (void*)value);
	}
};


// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0  : public RuntimeObject
{
public:

public:
};

struct X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields
{
public:
	// System.String Mono.Security.X509.X509StoreManager::_userPath
	String_t* ____userPath_0;
	// System.String Mono.Security.X509.X509StoreManager::_localMachinePath
	String_t* ____localMachinePath_1;
	// System.String Mono.Security.X509.X509StoreManager::_newUserPath
	String_t* ____newUserPath_2;
	// System.String Mono.Security.X509.X509StoreManager::_newLocalMachinePath
	String_t* ____newLocalMachinePath_3;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * ____userStore_4;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * ____machineStore_5;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_newUserStore
	X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * ____newUserStore_6;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_newMachineStore
	X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * ____newMachineStore_7;

public:
	inline static int32_t get_offset_of__userPath_0() { return static_cast<int32_t>(offsetof(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields, ____userPath_0)); }
	inline String_t* get__userPath_0() const { return ____userPath_0; }
	inline String_t** get_address_of__userPath_0() { return &____userPath_0; }
	inline void set__userPath_0(String_t* value)
	{
		____userPath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userPath_0), (void*)value);
	}

	inline static int32_t get_offset_of__localMachinePath_1() { return static_cast<int32_t>(offsetof(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields, ____localMachinePath_1)); }
	inline String_t* get__localMachinePath_1() const { return ____localMachinePath_1; }
	inline String_t** get_address_of__localMachinePath_1() { return &____localMachinePath_1; }
	inline void set__localMachinePath_1(String_t* value)
	{
		____localMachinePath_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____localMachinePath_1), (void*)value);
	}

	inline static int32_t get_offset_of__newUserPath_2() { return static_cast<int32_t>(offsetof(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields, ____newUserPath_2)); }
	inline String_t* get__newUserPath_2() const { return ____newUserPath_2; }
	inline String_t** get_address_of__newUserPath_2() { return &____newUserPath_2; }
	inline void set__newUserPath_2(String_t* value)
	{
		____newUserPath_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newUserPath_2), (void*)value);
	}

	inline static int32_t get_offset_of__newLocalMachinePath_3() { return static_cast<int32_t>(offsetof(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields, ____newLocalMachinePath_3)); }
	inline String_t* get__newLocalMachinePath_3() const { return ____newLocalMachinePath_3; }
	inline String_t** get_address_of__newLocalMachinePath_3() { return &____newLocalMachinePath_3; }
	inline void set__newLocalMachinePath_3(String_t* value)
	{
		____newLocalMachinePath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newLocalMachinePath_3), (void*)value);
	}

	inline static int32_t get_offset_of__userStore_4() { return static_cast<int32_t>(offsetof(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields, ____userStore_4)); }
	inline X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * get__userStore_4() const { return ____userStore_4; }
	inline X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 ** get_address_of__userStore_4() { return &____userStore_4; }
	inline void set__userStore_4(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * value)
	{
		____userStore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userStore_4), (void*)value);
	}

	inline static int32_t get_offset_of__machineStore_5() { return static_cast<int32_t>(offsetof(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields, ____machineStore_5)); }
	inline X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * get__machineStore_5() const { return ____machineStore_5; }
	inline X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 ** get_address_of__machineStore_5() { return &____machineStore_5; }
	inline void set__machineStore_5(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * value)
	{
		____machineStore_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____machineStore_5), (void*)value);
	}

	inline static int32_t get_offset_of__newUserStore_6() { return static_cast<int32_t>(offsetof(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields, ____newUserStore_6)); }
	inline X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * get__newUserStore_6() const { return ____newUserStore_6; }
	inline X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 ** get_address_of__newUserStore_6() { return &____newUserStore_6; }
	inline void set__newUserStore_6(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * value)
	{
		____newUserStore_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newUserStore_6), (void*)value);
	}

	inline static int32_t get_offset_of__newMachineStore_7() { return static_cast<int32_t>(offsetof(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields, ____newMachineStore_7)); }
	inline X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * get__newMachineStore_7() const { return ____newMachineStore_7; }
	inline X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 ** get_address_of__newMachineStore_7() { return &____newMachineStore_7; }
	inline void set__newMachineStore_7(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * value)
	{
		____newMachineStore_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____newMachineStore_7), (void*)value);
	}
};


// Mono.Security.X509.X509Stores
struct  X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// System.Boolean Mono.Security.X509.X509Stores::_newFormat
	bool ____newFormat_1;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_personal
	X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * ____personal_2;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_other
	X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * ____other_3;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_intermediate
	X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * ____intermediate_4;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * ____trusted_5;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_untrusted
	X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * ____untrusted_6;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storePath_0), (void*)value);
	}

	inline static int32_t get_offset_of__newFormat_1() { return static_cast<int32_t>(offsetof(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325, ____newFormat_1)); }
	inline bool get__newFormat_1() const { return ____newFormat_1; }
	inline bool* get_address_of__newFormat_1() { return &____newFormat_1; }
	inline void set__newFormat_1(bool value)
	{
		____newFormat_1 = value;
	}

	inline static int32_t get_offset_of__personal_2() { return static_cast<int32_t>(offsetof(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325, ____personal_2)); }
	inline X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * get__personal_2() const { return ____personal_2; }
	inline X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB ** get_address_of__personal_2() { return &____personal_2; }
	inline void set__personal_2(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * value)
	{
		____personal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____personal_2), (void*)value);
	}

	inline static int32_t get_offset_of__other_3() { return static_cast<int32_t>(offsetof(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325, ____other_3)); }
	inline X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * get__other_3() const { return ____other_3; }
	inline X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB ** get_address_of__other_3() { return &____other_3; }
	inline void set__other_3(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * value)
	{
		____other_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____other_3), (void*)value);
	}

	inline static int32_t get_offset_of__intermediate_4() { return static_cast<int32_t>(offsetof(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325, ____intermediate_4)); }
	inline X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * get__intermediate_4() const { return ____intermediate_4; }
	inline X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB ** get_address_of__intermediate_4() { return &____intermediate_4; }
	inline void set__intermediate_4(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * value)
	{
		____intermediate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____intermediate_4), (void*)value);
	}

	inline static int32_t get_offset_of__trusted_5() { return static_cast<int32_t>(offsetof(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325, ____trusted_5)); }
	inline X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * get__trusted_5() const { return ____trusted_5; }
	inline X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB ** get_address_of__trusted_5() { return &____trusted_5; }
	inline void set__trusted_5(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * value)
	{
		____trusted_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____trusted_5), (void*)value);
	}

	inline static int32_t get_offset_of__untrusted_6() { return static_cast<int32_t>(offsetof(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325, ____untrusted_6)); }
	inline X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * get__untrusted_6() const { return ____untrusted_6; }
	inline X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB ** get_address_of__untrusted_6() { return &____untrusted_6; }
	inline void set__untrusted_6(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * value)
	{
		____untrusted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____untrusted_6), (void*)value);
	}
};


// Mono.Security.X509.X509Stores_Names
struct  Names_t8F9528D73B2FC36C37A81242CED178D0972B3AA3  : public RuntimeObject
{
public:

public:
};


// Mono.Security.X509.X520
struct  X520_t276CE76F28ED8BFD0E5D02C562989DFC34A2C633  : public RuntimeObject
{
public:

public:
};


// Mono.Security.X509.X520_AttributeTypeAndValue
struct  AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X520_AttributeTypeAndValue::oid
	String_t* ___oid_0;
	// System.String Mono.Security.X509.X520_AttributeTypeAndValue::attrValue
	String_t* ___attrValue_1;
	// System.Int32 Mono.Security.X509.X520_AttributeTypeAndValue::upperBound
	int32_t ___upperBound_2;
	// System.Byte Mono.Security.X509.X520_AttributeTypeAndValue::encoding
	uint8_t ___encoding_3;

public:
	inline static int32_t get_offset_of_oid_0() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A, ___oid_0)); }
	inline String_t* get_oid_0() const { return ___oid_0; }
	inline String_t** get_address_of_oid_0() { return &___oid_0; }
	inline void set_oid_0(String_t* value)
	{
		___oid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oid_0), (void*)value);
	}

	inline static int32_t get_offset_of_attrValue_1() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A, ___attrValue_1)); }
	inline String_t* get_attrValue_1() const { return ___attrValue_1; }
	inline String_t** get_address_of_attrValue_1() { return &___attrValue_1; }
	inline void set_attrValue_1(String_t* value)
	{
		___attrValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attrValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_upperBound_2() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A, ___upperBound_2)); }
	inline int32_t get_upperBound_2() const { return ___upperBound_2; }
	inline int32_t* get_address_of_upperBound_2() { return &___upperBound_2; }
	inline void set_upperBound_2(int32_t value)
	{
		___upperBound_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A, ___encoding_3)); }
	inline uint8_t get_encoding_3() const { return ___encoding_3; }
	inline uint8_t* get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(uint8_t value)
	{
		___encoding_3 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct  ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____items_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_5), (void*)value);
	}
};


// System.Collections.CollectionBase
struct  CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01, ___list_0)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.IO.Path
struct  Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752  : public RuntimeObject
{
public:

public:
};

struct Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_StaticFields
{
public:
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___trimEndCharsUnix_9;

public:
	inline static int32_t get_offset_of_InvalidPathChars_0() { return static_cast<int32_t>(offsetof(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_StaticFields, ___InvalidPathChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_InvalidPathChars_0() const { return ___InvalidPathChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_InvalidPathChars_0() { return &___InvalidPathChars_0; }
	inline void set_InvalidPathChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___InvalidPathChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InvalidPathChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_AltDirectorySeparatorChar_1() { return static_cast<int32_t>(offsetof(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_StaticFields, ___AltDirectorySeparatorChar_1)); }
	inline Il2CppChar get_AltDirectorySeparatorChar_1() const { return ___AltDirectorySeparatorChar_1; }
	inline Il2CppChar* get_address_of_AltDirectorySeparatorChar_1() { return &___AltDirectorySeparatorChar_1; }
	inline void set_AltDirectorySeparatorChar_1(Il2CppChar value)
	{
		___AltDirectorySeparatorChar_1 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorChar_2() { return static_cast<int32_t>(offsetof(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_StaticFields, ___DirectorySeparatorChar_2)); }
	inline Il2CppChar get_DirectorySeparatorChar_2() const { return ___DirectorySeparatorChar_2; }
	inline Il2CppChar* get_address_of_DirectorySeparatorChar_2() { return &___DirectorySeparatorChar_2; }
	inline void set_DirectorySeparatorChar_2(Il2CppChar value)
	{
		___DirectorySeparatorChar_2 = value;
	}

	inline static int32_t get_offset_of_PathSeparator_3() { return static_cast<int32_t>(offsetof(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_StaticFields, ___PathSeparator_3)); }
	inline Il2CppChar get_PathSeparator_3() const { return ___PathSeparator_3; }
	inline Il2CppChar* get_address_of_PathSeparator_3() { return &___PathSeparator_3; }
	inline void set_PathSeparator_3(Il2CppChar value)
	{
		___PathSeparator_3 = value;
	}

	inline static int32_t get_offset_of_DirectorySeparatorStr_4() { return static_cast<int32_t>(offsetof(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_StaticFields, ___DirectorySeparatorStr_4)); }
	inline String_t* get_DirectorySeparatorStr_4() const { return ___DirectorySeparatorStr_4; }
	inline String_t** get_address_of_DirectorySeparatorStr_4() { return &___DirectorySeparatorStr_4; }
	inline void set_DirectorySeparatorStr_4(String_t* value)
	{
		___DirectorySeparatorStr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DirectorySeparatorStr_4), (void*)value);
	}

	inline static int32_t get_offset_of_VolumeSeparatorChar_5() { return static_cast<int32_t>(offsetof(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_StaticFields, ___VolumeSeparatorChar_5)); }
	inline Il2CppChar get_VolumeSeparatorChar_5() const { return ___VolumeSeparatorChar_5; }
	inline Il2CppChar* get_address_of_VolumeSeparatorChar_5() { return &___VolumeSeparatorChar_5; }
	inline void set_VolumeSeparatorChar_5(Il2CppChar value)
	{
		___VolumeSeparatorChar_5 = value;
	}

	inline static int32_t get_offset_of_PathSeparatorChars_6() { return static_cast<int32_t>(offsetof(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_StaticFields, ___PathSeparatorChars_6)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_PathSeparatorChars_6() const { return ___PathSeparatorChars_6; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_PathSeparatorChars_6() { return &___PathSeparatorChars_6; }
	inline void set_PathSeparatorChars_6(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___PathSeparatorChars_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PathSeparatorChars_6), (void*)value);
	}

	inline static int32_t get_offset_of_dirEqualsVolume_7() { return static_cast<int32_t>(offsetof(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_StaticFields, ___dirEqualsVolume_7)); }
	inline bool get_dirEqualsVolume_7() const { return ___dirEqualsVolume_7; }
	inline bool* get_address_of_dirEqualsVolume_7() { return &___dirEqualsVolume_7; }
	inline void set_dirEqualsVolume_7(bool value)
	{
		___dirEqualsVolume_7 = value;
	}

	inline static int32_t get_offset_of_trimEndCharsWindows_8() { return static_cast<int32_t>(offsetof(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_StaticFields, ___trimEndCharsWindows_8)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_trimEndCharsWindows_8() const { return ___trimEndCharsWindows_8; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_trimEndCharsWindows_8() { return &___trimEndCharsWindows_8; }
	inline void set_trimEndCharsWindows_8(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___trimEndCharsWindows_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trimEndCharsWindows_8), (void*)value);
	}

	inline static int32_t get_offset_of_trimEndCharsUnix_9() { return static_cast<int32_t>(offsetof(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_StaticFields, ___trimEndCharsUnix_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_trimEndCharsUnix_9() const { return ___trimEndCharsUnix_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_trimEndCharsUnix_9() { return &___trimEndCharsUnix_9; }
	inline void set_trimEndCharsUnix_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___trimEndCharsUnix_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trimEndCharsUnix_9), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2  : public RuntimeObject
{
public:
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313 * ___impl_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_3;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2, ___impl_0)); }
	inline X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313 * get_impl_0() const { return ___impl_0; }
	inline X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(X509CertificateImpl_t89610BFDE87B872143A4623CFC7F17275EB48313 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___impl_0), (void*)value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_issuer_name_2() { return static_cast<int32_t>(offsetof(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2, ___issuer_name_2)); }
	inline String_t* get_issuer_name_2() const { return ___issuer_name_2; }
	inline String_t** get_address_of_issuer_name_2() { return &___issuer_name_2; }
	inline void set_issuer_name_2(String_t* value)
	{
		___issuer_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_subject_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2, ___subject_name_3)); }
	inline String_t* get_subject_name_3() const { return ___subject_name_3; }
	inline String_t** get_address_of_subject_name_3() { return &___subject_name_3; }
	inline void set_subject_name_3(String_t* value)
	{
		___subject_name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_name_3), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension
struct  SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9  : public X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF
{
public:
	// System.Byte[] Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::ski
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___ski_3;

public:
	inline static int32_t get_offset_of_ski_3() { return static_cast<int32_t>(offsetof(SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9, ___ski_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_ski_3() const { return ___ski_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_ski_3() { return &___ski_3; }
	inline void set_ski_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___ski_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ski_3), (void*)value);
	}
};


// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A  : public CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01
{
public:

public:
};


// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19  : public CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};


// Mono.Security.X509.X520_CommonName
struct  CommonName_tEAA1DA734A678C5D6FA6757181798BED7F30359F  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_CountryName
struct  CountryName_t8675CFBE35E1541CB37CF24C10E6C869EF3B0D84  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_DnQualifier
struct  DnQualifier_tBD6B191969DDAA13FA8E96D356BDC0BE1A831FB6  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_DomainComponent
struct  DomainComponent_tD3C4701F2DC22119E9E25E06CF12E4D8B120C3F2  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_EmailAddress
struct  EmailAddress_tB969FD5FB8E80150451C39F65D86BBF04E306B46  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_GivenName
struct  GivenName_tCB6893F22D446029B75FE298D1D6E15F0BD40A8F  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_Initial
struct  Initial_tB336018BAFC01A1D5239C1AB24C21E2C3B99D3FE  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_LocalityName
struct  LocalityName_t4F4F9AC4FCD56C08B788B58BA653DF6BDFD00DFD  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_Name
struct  Name_tDA52F4C52A08230323C5F27CE19F6AE51E628BBD  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_Oid
struct  Oid_t21BE127A3ADD51797D9F4369E2904FCDDB378685  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_OrganizationName
struct  OrganizationName_t0DE9CA8F8329779E696752071DC4CE4D0FAEE461  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_OrganizationalUnitName
struct  OrganizationalUnitName_t2F837B2D291EC2BAA8FBAECD7DDAE8FB74453EB1  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_SerialNumber
struct  SerialNumber_t2892A2F131DEEE22A2113E5A21964BF165B24450  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_StateOrProvinceName
struct  StateOrProvinceName_tDDC2D6BC4CED251EAABFF6949D27AE2341BFE17A  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_Surname
struct  Surname_t84F1D61A0AB7D02E268164C41F170AD36B0219CA  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_Title
struct  Title_t2FB1075E3A7E4014327A13E3BCFAF0B33DD51556  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// Mono.Security.X509.X520_UserId
struct  UserId_tE203B27097A4BA57E2C00E0E0B2285EF6B4A470C  : public AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Mono.Security.X509.X509Certificate
struct  X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___serialnumber_20;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___issuerUniqueID_21;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___subjectUniqueID_22;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * ___extensions_23;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___decoder_0)); }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_encodedcert_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encodedcert_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_from_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_until_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___issuer_4)); }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_issuername_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keyalgo_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keyalgoparams_7), (void*)value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___subject_8)); }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * get_subject_8() const { return ___subject_8; }
	inline ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subject_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_publickey_10)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_publickey_10), (void*)value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___signature_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_signaturealgo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_signaturealgoparams_13), (void*)value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___certhash_14)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certhash_14), (void*)value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ____rsa_15)); }
	inline RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_tB6C4B434B2AC02E3F8981DB2908C2018E251D145 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rsa_15), (void*)value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ____dsa_16)); }
	inline DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t932F4A94DD2B782BFFC197544398826E6CDB64CF * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dsa_16), (void*)value);
	}

	inline static int32_t get_offset_of_version_19() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___version_19)); }
	inline int32_t get_version_19() const { return ___version_19; }
	inline int32_t* get_address_of_version_19() { return &___version_19; }
	inline void set_version_19(int32_t value)
	{
		___version_19 = value;
	}

	inline static int32_t get_offset_of_serialnumber_20() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___serialnumber_20)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_serialnumber_20() const { return ___serialnumber_20; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_serialnumber_20() { return &___serialnumber_20; }
	inline void set_serialnumber_20(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___serialnumber_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialnumber_20), (void*)value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_21() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___issuerUniqueID_21)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_issuerUniqueID_21() const { return ___issuerUniqueID_21; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_issuerUniqueID_21() { return &___issuerUniqueID_21; }
	inline void set_issuerUniqueID_21(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___issuerUniqueID_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuerUniqueID_21), (void*)value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_22() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___subjectUniqueID_22)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_subjectUniqueID_22() const { return ___subjectUniqueID_22; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_subjectUniqueID_22() { return &___subjectUniqueID_22; }
	inline void set_subjectUniqueID_22(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___subjectUniqueID_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subjectUniqueID_22), (void*)value);
	}

	inline static int32_t get_offset_of_extensions_23() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B, ___extensions_23)); }
	inline X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * get_extensions_23() const { return ___extensions_23; }
	inline X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 ** get_address_of_extensions_23() { return &___extensions_23; }
	inline void set_extensions_23(X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * value)
	{
		___extensions_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_23), (void*)value);
	}
};

struct X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_24;

public:
	inline static int32_t get_offset_of_encoding_error_24() { return static_cast<int32_t>(offsetof(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_StaticFields, ___encoding_error_24)); }
	inline String_t* get_encoding_error_24() const { return ___encoding_error_24; }
	inline String_t** get_address_of_encoding_error_24() { return &___encoding_error_24; }
	inline void set_encoding_error_24(String_t* value)
	{
		___encoding_error_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_error_24), (void*)value);
	}
};


// Mono.Security.X509.X509Crl
struct  X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Crl::issuer
	String_t* ___issuer_0;
	// System.Byte Mono.Security.X509.X509Crl::version
	uint8_t ___version_1;
	// System.DateTime Mono.Security.X509.X509Crl::thisUpdate
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___thisUpdate_2;
	// System.DateTime Mono.Security.X509.X509Crl::nextUpdate
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___nextUpdate_3;
	// System.Collections.ArrayList Mono.Security.X509.X509Crl::entries
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___entries_4;
	// System.String Mono.Security.X509.X509Crl::signatureOID
	String_t* ___signatureOID_5;
	// System.Byte[] Mono.Security.X509.X509Crl::signature
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___signature_6;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::extensions
	X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * ___extensions_7;
	// System.Byte[] Mono.Security.X509.X509Crl::encoded
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___encoded_8;
	// System.Byte[] Mono.Security.X509.X509Crl::hash_value
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___hash_value_9;

public:
	inline static int32_t get_offset_of_issuer_0() { return static_cast<int32_t>(offsetof(X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E, ___issuer_0)); }
	inline String_t* get_issuer_0() const { return ___issuer_0; }
	inline String_t** get_address_of_issuer_0() { return &___issuer_0; }
	inline void set_issuer_0(String_t* value)
	{
		___issuer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E, ___version_1)); }
	inline uint8_t get_version_1() const { return ___version_1; }
	inline uint8_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint8_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_thisUpdate_2() { return static_cast<int32_t>(offsetof(X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E, ___thisUpdate_2)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_thisUpdate_2() const { return ___thisUpdate_2; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_thisUpdate_2() { return &___thisUpdate_2; }
	inline void set_thisUpdate_2(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___thisUpdate_2 = value;
	}

	inline static int32_t get_offset_of_nextUpdate_3() { return static_cast<int32_t>(offsetof(X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E, ___nextUpdate_3)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_nextUpdate_3() const { return ___nextUpdate_3; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_nextUpdate_3() { return &___nextUpdate_3; }
	inline void set_nextUpdate_3(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___nextUpdate_3 = value;
	}

	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E, ___entries_4)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_entries_4() const { return ___entries_4; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_4), (void*)value);
	}

	inline static int32_t get_offset_of_signatureOID_5() { return static_cast<int32_t>(offsetof(X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E, ___signatureOID_5)); }
	inline String_t* get_signatureOID_5() const { return ___signatureOID_5; }
	inline String_t** get_address_of_signatureOID_5() { return &___signatureOID_5; }
	inline void set_signatureOID_5(String_t* value)
	{
		___signatureOID_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signatureOID_5), (void*)value);
	}

	inline static int32_t get_offset_of_signature_6() { return static_cast<int32_t>(offsetof(X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E, ___signature_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_signature_6() const { return ___signature_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_signature_6() { return &___signature_6; }
	inline void set_signature_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___signature_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_6), (void*)value);
	}

	inline static int32_t get_offset_of_extensions_7() { return static_cast<int32_t>(offsetof(X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E, ___extensions_7)); }
	inline X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * get_extensions_7() const { return ___extensions_7; }
	inline X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 ** get_address_of_extensions_7() { return &___extensions_7; }
	inline void set_extensions_7(X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * value)
	{
		___extensions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_7), (void*)value);
	}

	inline static int32_t get_offset_of_encoded_8() { return static_cast<int32_t>(offsetof(X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E, ___encoded_8)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_encoded_8() const { return ___encoded_8; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_encoded_8() { return &___encoded_8; }
	inline void set_encoded_8(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___encoded_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoded_8), (void*)value);
	}

	inline static int32_t get_offset_of_hash_value_9() { return static_cast<int32_t>(offsetof(X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E, ___hash_value_9)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_hash_value_9() const { return ___hash_value_9; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_hash_value_9() { return &___hash_value_9; }
	inline void set_hash_value_9(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___hash_value_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hash_value_9), (void*)value);
	}
};


// Mono.Security.X509.X509Crl_X509CrlEntry
struct  X509CrlEntry_tDE05F8A01DC519BB1FE337AEB5F974EE2DE8D37F  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.X509Crl_X509CrlEntry::sn
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl_X509CrlEntry::revocationDate
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl_X509CrlEntry::extensions
	X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * ___extensions_2;

public:
	inline static int32_t get_offset_of_sn_0() { return static_cast<int32_t>(offsetof(X509CrlEntry_tDE05F8A01DC519BB1FE337AEB5F974EE2DE8D37F, ___sn_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_sn_0() const { return ___sn_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_sn_0() { return &___sn_0; }
	inline void set_sn_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___sn_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sn_0), (void*)value);
	}

	inline static int32_t get_offset_of_revocationDate_1() { return static_cast<int32_t>(offsetof(X509CrlEntry_tDE05F8A01DC519BB1FE337AEB5F974EE2DE8D37F, ___revocationDate_1)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_revocationDate_1() const { return ___revocationDate_1; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_revocationDate_1() { return &___revocationDate_1; }
	inline void set_revocationDate_1(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___revocationDate_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(X509CrlEntry_tDE05F8A01DC519BB1FE337AEB5F974EE2DE8D37F, ___extensions_2)); }
	inline X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * get_extensions_2() const { return ___extensions_2; }
	inline X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_2), (void*)value);
	}
};


// System.Environment_SpecialFolder
struct  SpecialFolder_t5A2C2AE97BD6C2DF95061C8904B2225228AC9BA0 
{
public:
	// System.Int32 System.Environment_SpecialFolder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpecialFolder_t5A2C2AE97BD6C2DF95061C8904B2225228AC9BA0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct  FileAttributes_t224B42F6F82954C94B51791913857C005C559876 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t224B42F6F82954C94B51791913857C005C559876, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;

public:
	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_7), (void*)value);
	}

	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_8), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_9)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_9() const { return ___safeHandle_9; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_9() { return &___safeHandle_9; }
	inline void set_safeHandle_9(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_9), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_10)); }
	inline bool get_isExposed_10() const { return ___isExposed_10; }
	inline bool* get_address_of_isExposed_10() { return &___isExposed_10; }
	inline void set_isExposed_10(bool value)
	{
		___isExposed_10 = value;
	}

	inline static int32_t get_offset_of_append_startpos_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_11)); }
	inline int64_t get_append_startpos_11() const { return ___append_startpos_11; }
	inline int64_t* get_address_of_append_startpos_11() { return &___append_startpos_11; }
	inline void set_append_startpos_11(int64_t value)
	{
		___append_startpos_11 = value;
	}

	inline static int32_t get_offset_of_access_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_12)); }
	inline int32_t get_access_12() const { return ___access_12; }
	inline int32_t* get_address_of_access_12() { return &___access_12; }
	inline void set_access_12(int32_t value)
	{
		___access_12 = value;
	}

	inline static int32_t get_offset_of_owner_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_13)); }
	inline bool get_owner_13() const { return ___owner_13; }
	inline bool* get_address_of_owner_13() { return &___owner_13; }
	inline void set_owner_13(bool value)
	{
		___owner_13 = value;
	}

	inline static int32_t get_offset_of_async_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_14)); }
	inline bool get_async_14() const { return ___async_14; }
	inline bool* get_address_of_async_14() { return &___async_14; }
	inline void set_async_14(bool value)
	{
		___async_14 = value;
	}

	inline static int32_t get_offset_of_canseek_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_15)); }
	inline bool get_canseek_15() const { return ___canseek_15; }
	inline bool* get_address_of_canseek_15() { return &___canseek_15; }
	inline void set_canseek_15(bool value)
	{
		___canseek_15 = value;
	}

	inline static int32_t get_offset_of_anonymous_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_16)); }
	inline bool get_anonymous_16() const { return ___anonymous_16; }
	inline bool* get_address_of_anonymous_16() { return &___anonymous_16; }
	inline void set_anonymous_16(bool value)
	{
		___anonymous_16 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_17)); }
	inline bool get_buf_dirty_17() const { return ___buf_dirty_17; }
	inline bool* get_address_of_buf_dirty_17() { return &___buf_dirty_17; }
	inline void set_buf_dirty_17(bool value)
	{
		___buf_dirty_17 = value;
	}

	inline static int32_t get_offset_of_buf_size_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_18)); }
	inline int32_t get_buf_size_18() const { return ___buf_size_18; }
	inline int32_t* get_address_of_buf_size_18() { return &___buf_size_18; }
	inline void set_buf_size_18(int32_t value)
	{
		___buf_size_18 = value;
	}

	inline static int32_t get_offset_of_buf_length_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_19)); }
	inline int32_t get_buf_length_19() const { return ___buf_length_19; }
	inline int32_t* get_address_of_buf_length_19() { return &___buf_length_19; }
	inline void set_buf_length_19(int32_t value)
	{
		___buf_length_19 = value;
	}

	inline static int32_t get_offset_of_buf_offset_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_20)); }
	inline int32_t get_buf_offset_20() const { return ___buf_offset_20; }
	inline int32_t* get_address_of_buf_offset_20() { return &___buf_offset_20; }
	inline void set_buf_offset_20(int32_t value)
	{
		___buf_offset_20 = value;
	}

	inline static int32_t get_offset_of_buf_start_21() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_21)); }
	inline int64_t get_buf_start_21() const { return ___buf_start_21; }
	inline int64_t* get_address_of_buf_start_21() { return &___buf_start_21; }
	inline void set_buf_start_21(int64_t value)
	{
		___buf_start_21 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_6;

public:
	inline static int32_t get_offset_of_buf_recycle_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_5() const { return ___buf_recycle_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_5() { return &___buf_recycle_5; }
	inline void set_buf_recycle_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_5), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_6)); }
	inline RuntimeObject * get_buf_recycle_lock_6() const { return ___buf_recycle_lock_6; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_6() { return &___buf_recycle_lock_6; }
	inline void set_buf_recycle_lock_6(RuntimeObject * value)
	{
		___buf_recycle_lock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_6), (void*)value);
	}
};


// System.IO.MonoIOStat
struct  MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.FormatException
struct  FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.IO.FileSystemInfo
struct  FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____data_1)); }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t819C03DA1902AA493BDBF4B55E76DCE6FB16A124  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.IO.DirectoryInfo
struct  DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F  : public FileSystemInfo_t6831B76FBA37F7181E4A5AEB28194730EB356A3D
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Mono.Security.X509.X509Extension[]
struct X509ExtensionU5BU5D_t7B1B29AAD3EEC2C51495C0B9BDF5A35E517A53F7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * m_Items[1];

public:
	inline X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Array::Reverse<System.Byte>(!!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m03D674052100D1E9D6214ADD31FE7E5F7E6788DA_gshared (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_m009D1FA8F4EA1BCF236002C901176D8C3CBDB8FC (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.ASN1::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, const RuntimeMethod* method);
// System.Void System.Array::Reverse<System.Byte>(!!0[])
inline void Array_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m03D674052100D1E9D6214ADD31FE7E5F7E6788DA (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))Array_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m03D674052100D1E9D6214ADD31FE7E5F7E6788DA_gshared)(___array0, method);
}
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ASN1Convert_ToDateTime_m94B39FD0657B85FB9AB61B04CAD71E759C9FE152 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___time0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___asn10, const RuntimeMethod* method);
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_mE8C710213E323617A6F46F2B36DCDDD4C7CF5176 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_m6DD2E5BD0B12A6BFA95E1822A55B2294B8C237BC (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, uint8_t ___tag0, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mAB2593792CB61AD1542F4F9D6FB6E8BB96DE007E (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, uint8_t ___tag0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___asn10, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromDateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ASN1Convert_FromDateTime_m6B84A4018353BE63A0263F542FAE1630894E0866 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___dt0, const RuntimeMethod* method);
// System.Int32 System.Collections.CollectionBase::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionBase_get_Count_mFB8B3BCCCE581FEFA96FF5A6C1629E7EC092D92C (CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01 * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509ExtensionCollection::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509ExtensionCollection_GetBytes_m0A54DFF3DDDBFEA3EC887939DC4018807AD09018 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mE005F52336402C3D41EAD9E28A95910B3C0865DA (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.Byte Mono.Security.ASN1::get_Tag()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862_inline (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, const RuntimeMethod* method);
// System.String Locale::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_m67B66557188C94648AA7A23F6A7501BE7D455ADA (String_t* ___msg0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ASN1Convert_ToOid_mFFA93B4BBEFCA8E4E86DAE87CDB998E78BFB2D5A (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___asn10, const RuntimeMethod* method);
// System.Int32 Mono.Security.ASN1::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63 (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1_set_Value_m225FF9AC03EA872809C7742070A34A264C58588E (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * X509Extension_get_Value_mDDB38DDE3E714212A7E5DD60027BA0BB707712EC (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509Extension::get_Oid()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* X509Extension_get_Oid_m45C32C3103B9B042C28F16D6A937DF17A97565C4_inline (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_m988BAFEF41E252919E1448B098E95C910235C8BB_inline (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ASN1Convert_FromOid_mC178E72357986C1AB75A1FFC9DA7687ECA20E462 (String_t* ___oid0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_ASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * X509Extension_get_ASN1_mEE5890FAEC41BF25539B672EAE5C8FEB5219E674 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m731FDB27391432D7F14B6769B5D0A3E248803D25 (uint8_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m2FF337FDDCAD52939473E0D7ED3FBFD49A4C2E18 (uint8_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m5D4F4667FA5D1E2DBDD4DF9696D0CE76C83EF318 (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension_WriteLine_m3C538A06F19ABFD9F3BC9F531C8CA96329E8EFF2 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, StringBuilder_t * ___sb0, int32_t ___n1, int32_t ___pos2, const RuntimeMethod* method);
// System.Void System.Collections.CollectionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionBase__ctor_mE3F20EEAA96F8613088EDD69A17E49C22E97ADF9 (CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___asn10, const RuntimeMethod* method);
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A (CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, String_t* ___message0, const RuntimeMethod* method);
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * X509ExtensionCollection_get_Item_m238E6DF2D236A61A1446F8983F4BDD6B50E57EA5 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(Mono.Security.X509.X509Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_IndexOf_m4E013A4DA9A020885247FA65321B661CB0C6CD70 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * ___extension0, const RuntimeMethod* method);
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_IndexOf_m8821D9D903993924EDA8C7B302946346AA406377 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, String_t* ___oid0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * X509Store_BuildCertificatesCollection_m38BE87E16F58481AE1CCA740DDE60DA1A09BED55 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___storeName0, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6 (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * __this, const RuntimeMethod* method);
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * X509Store_BuildCrlsCollection_m295A43B0ED3469636553A7A04F12A2E6B01AFE1B (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___storeName0, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Store::ClearCertificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_ClearCertificates_m7569D992FB7522DE5AEDC628C55CF39225BF22C3 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Store::ClearCrls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_ClearCrls_m8353905DF499C721D1BE70C209408FB33DD89DB2 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, const RuntimeMethod* method);
// System.Void System.Collections.CollectionBase::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionBase_Clear_m532DA443B53F9D48FAC7184B5C405D8E725E554A (CollectionBase_tF5D4583FF325726066A9803839A04E9C0084ED01 * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Store_CheckStore_m3B586D9A34CCCE7CE85200097EECD26A964F11B5 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___path0, bool ___throwException1, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Store::ImportNewFormat(Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_ImportNewFormat_m703CA17205865FD57FB031C85DCE7190E5E8B881 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * ___certificate0, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509Certificate,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueName_m96158212713169D2D267B4A0E7C570C6F7665041 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * ___certificate0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___serial1, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB (String_t* ___path0, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509Store::GetUniqueNameWithSerial(Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueNameWithSerial_mCA113F7098903657F1001CD5C7F0E79DACB11028 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * ___certificate0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * File_Create_mE6AF90C7A82E96EC1315821EB061327CF3EB55DD (String_t* ___path0, const RuntimeMethod* method);
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * X509Store_LoadCertificate_m5B3D55AB0923EC03076530159AF49EF028BE8024 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___filename0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509Crl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueName_m612727D7E19DC6AD5764187EEF5179124AB684BF (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * ___crl0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Crl::get_RawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Crl_get_RawData_mA8FD4E39FFAC912DC1F90F4A6178EDB474942000 (X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Store::RemoveNewFormat(Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_RemoveNewFormat_m612E97E9604D4EB224B20F7AE1466F6C1AD58CFB (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * ___certificate0, const RuntimeMethod* method);
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mBE814E569EAB07FAD140C6DCDB957F1CB8C85DE2 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate__ctor_m1CBB1959D5C85EE236244CD85AA73473F19C6A6C (X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.Int64 System.Security.Cryptography.X509Certificates.X509Helper2::GetSubjectNameHash(System.Security.Cryptography.X509Certificates.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t X509Helper2_GetSubjectNameHash_mFCB2DF1283F1668EF21A9DA384C50134854E103C (X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * ___certificate0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Security.Cryptography.X509Certificates.X509Helper2::ExportAsPEM(System.Security.Cryptography.X509Certificates.X509Certificate,System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Helper2_ExportAsPEM_m4D4867AAD708F34D2E4558D65B606B42A7EFDA00 (X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * ___certificate0, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream1, bool ___includeHumanReadableForm2, const RuntimeMethod* method);
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * X509Certificate_get_Extensions_mE52F13B34388D1C995E7EEB623857126D3F62B92_inline (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509ExtensionCollection,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Store_GetUniqueName_mBEC442BC3F2AC338905E3C51578260EC98B9E6A2 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * ___extensions0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___serial1, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Certificate_get_Hash_m98F87F567B93867132207087ABD84184E6343D5A (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509Store::GetUniqueName(System.String,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueName_m6DF8037A58E1381373C0C39458B0A707F225DAC3 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___method0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___name1, String_t* ___fileExtension2, const RuntimeMethod* method);
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * X509Crl_get_Extensions_m096FCA079A08A0C8D876C095AEFEBD63B260EFD7_inline (X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Crl_get_Hash_m0F6DE36BBCAC0E6B46EC96BD36103B16CBCBA8B8 (X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * X509ExtensionCollection_get_Item_m7E4C7EDDC57517E65EA0998F8D384A87C9EAFDCA (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, String_t* ___oid0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::.ctor(Mono.Security.X509.X509Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubjectKeyIdentifierExtension__ctor_m120C4D2B72CAB151E06C6C98EEDE84C114106D04 (SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9 * __this, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * ___extension0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::get_Identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* SubjectKeyIdentifierExtension_get_Identifier_mFE168340F9598B188718B17F4F7A0BCC2D99997C (SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9 * __this, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353 (RuntimeArray * ___src0, int32_t ___srcOffset1, RuntimeArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m53E278FB62B3EAEFAF82890C97219B9B5E2A56C3 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * File_OpenRead_m3B2974AB5AA8011E587AC834BE71862BF77C2129 (String_t* ___path0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Store_Load_mC9B8AADD2AE5FE280E4E148E7E9090F98AAA5A76 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___filename0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate__ctor_mE2BC6649D450A36E902A2D6BEB50C49130411129 (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Crl__ctor_m26E1B657BB5581ED9A7013211C18F45A1A42A230 (X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___crl0, const RuntimeMethod* method);
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_mB77956D89305E16FEFCBDFC55CCC98F03AEE4D84 (String_t* ___path0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t432CD06DF148701E930708371CB985BC0E8EF87F * Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41 (String_t* ___path0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_mC7C07103044E3520FC785CD5BF0018F27C3132EE (X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * __this, const RuntimeMethod* method);
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Directory_GetFiles_m1BD24AE83787D2A8A81B8C40016C25A874AC3B25 (String_t* ___path0, String_t* ___searchPattern1, const RuntimeMethod* method);
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_Add_mC060190867D9C5D182236A313FE912DFCCE1F785 (X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * __this, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * ___value0, const RuntimeMethod* method);
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * X509Store_LoadCrl_mC9358FFD818E246CF0F7A82B19A18EACFCFFC78E (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___filename0, const RuntimeMethod* method);
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetFolderPath_m536A7D7C29197A7B66B60EA9A78B63C7B0BE9C17 (int32_t ___folder0, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509StoreManager::get_CurrentUserPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509StoreManager_get_CurrentUserPath_m9D30739764CC416AFE38521B3259B2199680A807 (const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Stores::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Stores__ctor_m5C72B0FDAD6A19C57DBA655B10D28499580C0093 (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, String_t* ___path0, bool ___newFormat1, const RuntimeMethod* method);
// System.String Mono.Security.X509.X509StoreManager::get_LocalMachinePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509StoreManager_get_LocalMachinePath_m2FFA1E8899F38DDB697EBAAB0C24F90955AC3895 (const RuntimeMethod* method);
// System.String Mono.Security.X509.X509StoreManager::get_NewCurrentUserPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509StoreManager_get_NewCurrentUserPath_m678C839E06D71B863FE140A93316EEE9E86AF059 (const RuntimeMethod* method);
// System.String Mono.Security.X509.X509StoreManager::get_NewLocalMachinePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509StoreManager_get_NewLocalMachinePath_m3D318947C9AFFCB0ED249953322AAAB45981632C (const RuntimeMethod* method);
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * X509StoreManager_get_CurrentUser_mE6B27212DC2033EEF32C57ED898F9E158875D369 (const RuntimeMethod* method);
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_IntermediateCA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * X509Stores_get_IntermediateCA_m54F3793A2A85820EA2F864E872369E3FE7E83A53 (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * X509Store_get_Certificates_mDCBF6C2FA25F37AEE61A9319B61A17A950579C35 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateCollection_AddRange_m046B42958BAC6DD2587CA737FC1EA2A2750C26A3 (X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * __this, X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * ___value0, const RuntimeMethod* method);
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * X509StoreManager_get_LocalMachine_m4742A449590646EDEF7C549270086795B0A5381E (const RuntimeMethod* method);
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * X509Store_get_Crls_m1E82961E5031C510EDBB616061D50D94B234BE8F (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * X509Stores_get_TrustedRoot_mB2A929D0D46EB23691AC5316F31D126AEFCFBBC3 (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, const RuntimeMethod* method);
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_Untrusted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * X509Stores_get_Untrusted_m8E7A1534EDEA12DC53C74CBFB777F0101153EBA1 (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store__ctor_m9B43F02DA2040FD3041270FA71B0F7D9F96D1AEB (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___path0, bool ___crl1, bool ___newFormat2, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509Store::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_Clear_m9D96EE12E529DD3EEAD7CCB7AB41103B117DBD93 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_m89167FF9884AE20232190FE9286DC50E146A4F14 (FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC * __this, String_t* ___message0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * AttributeTypeAndValue_GetASN1_m544B52615D7EAC53EA0420138CD8F9CB7CB97154 (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, const RuntimeMethod* method);
// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::SelectBestEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AttributeTypeAndValue_SelectBestEncoding_mD47EF9E4E041FD08D2ED6826FF07EF2AC0FB23FF (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E (const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_BigEndianUnicode_m6CC17642A36943FE038F54729446D7E30D582BDD (const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * AttributeTypeAndValue_GetASN1_m90E44F6B17F7B4752065A1C9360F82F3650676F0 (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, uint8_t ___encoding0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053 (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, String_t* ___oid0, int32_t ___upperBound1, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeTypeAndValue__ctor_m6146F7176EDB99F76A07A93D2797F7B98DA1071E (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, String_t* ___oid0, int32_t ___upperBound1, uint8_t ___encoding2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509Crl_X509CrlEntry::.ctor(System.Byte[],System.DateTime,Mono.Security.X509.X509ExtensionCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CrlEntry__ctor_mA34D89592A8B579B875CF6078E2D9DF54F8C2FAE (X509CrlEntry_tDE05F8A01DC519BB1FE337AEB5F974EE2DE8D37F * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___serialNumber0, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___revocationDate1, X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * ___extensions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CrlEntry__ctor_mA34D89592A8B579B875CF6078E2D9DF54F8C2FAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ___serialNumber0;
		__this->set_sn_0(L_0);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_1 = ___revocationDate1;
		__this->set_revocationDate_1(L_1);
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_2 = ___extensions2;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_3 = (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 *)il2cpp_codegen_object_new(X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19_il2cpp_TypeInfo_var);
		X509ExtensionCollection__ctor_m009D1FA8F4EA1BCF236002C901176D8C3CBDB8FC(L_3, /*hidden argument*/NULL);
		__this->set_extensions_2(L_3);
		return;
	}

IL_0023:
	{
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_4 = ___extensions2;
		__this->set_extensions_2(L_4);
		return;
	}
}
// System.Void Mono.Security.X509.X509Crl_X509CrlEntry::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CrlEntry__ctor_m8DA86F7F5CACB666328374F7F22F71AFD7147CF7 (X509CrlEntry_tDE05F8A01DC519BB1FE337AEB5F974EE2DE8D37F * __this, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___entry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CrlEntry__ctor_m8DA86F7F5CACB666328374F7F22F71AFD7147CF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = ___entry0;
		NullCheck(L_0);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_1 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_1, /*hidden argument*/NULL);
		__this->set_sn_0(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = __this->get_sn_0();
		Array_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m03D674052100D1E9D6214ADD31FE7E5F7E6788DA(L_3, /*hidden argument*/Array_Reverse_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m03D674052100D1E9D6214ADD31FE7E5F7E6788DA_RuntimeMethod_var);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_4 = ___entry0;
		NullCheck(L_4);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_5 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_4, 1, /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_6 = ASN1Convert_ToDateTime_m94B39FD0657B85FB9AB61B04CAD71E759C9FE152(L_5, /*hidden argument*/NULL);
		__this->set_revocationDate_1(L_6);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_7 = ___entry0;
		NullCheck(L_7);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_8 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_7, 2, /*hidden argument*/NULL);
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_9 = (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 *)il2cpp_codegen_object_new(X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19_il2cpp_TypeInfo_var);
		X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662(L_9, L_8, /*hidden argument*/NULL);
		__this->set_extensions_2(L_9);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Crl_X509CrlEntry::get_SerialNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509CrlEntry_get_SerialNumber_m4C9D9420D7DC18BF3E0DCCD811FC1D7B66243DE6 (X509CrlEntry_tDE05F8A01DC519BB1FE337AEB5F974EE2DE8D37F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CrlEntry_get_SerialNumber_m4C9D9420D7DC18BF3E0DCCD811FC1D7B66243DE6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = __this->get_sn_0();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		RuntimeObject * L_1 = Array_Clone_mE8C710213E323617A6F46F2B36DCDDD4C7CF5176((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)Castclass((RuntimeObject*)L_1, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var));
	}
}
// System.DateTime Mono.Security.X509.X509Crl_X509CrlEntry::get_RevocationDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  X509CrlEntry_get_RevocationDate_mF2F9F2B8E2608EFCE45B0B00159400DC58B474C4 (X509CrlEntry_tDE05F8A01DC519BB1FE337AEB5F974EE2DE8D37F * __this, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_revocationDate_1();
		return L_0;
	}
}
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl_X509CrlEntry::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * X509CrlEntry_get_Extensions_mC9EE2F8B0FDA77C3A1DED347DDA977A1A088A30C (X509CrlEntry_tDE05F8A01DC519BB1FE337AEB5F974EE2DE8D37F * __this, const RuntimeMethod* method)
{
	{
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_0 = __this->get_extensions_2();
		return L_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Crl_X509CrlEntry::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509CrlEntry_GetBytes_mCFBC78EA1D99F9C9929673B312DC88154D30EEF6 (X509CrlEntry_tDE05F8A01DC519BB1FE337AEB5F974EE2DE8D37F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509CrlEntry_GetBytes_mCFBC78EA1D99F9C9929673B312DC88154D30EEF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_0 = NULL;
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_m6DD2E5BD0B12A6BFA95E1822A55B2294B8C237BC(L_0, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_1 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = __this->get_sn_0();
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_3 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_mAB2593792CB61AD1542F4F9D6FB6E8BB96DE007E(L_3, (uint8_t)2, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B(L_1, L_3, /*hidden argument*/NULL);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_4 = V_0;
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_5 = __this->get_revocationDate_1();
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_6 = ASN1Convert_FromDateTime_m6B84A4018353BE63A0263F542FAE1630894E0866(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B(L_4, L_6, /*hidden argument*/NULL);
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_7 = __this->get_extensions_2();
		NullCheck(L_7);
		int32_t L_8 = CollectionBase_get_Count_mFB8B3BCCCE581FEFA96FF5A6C1629E7EC092D92C(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_9 = V_0;
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_10 = __this->get_extensions_2();
		NullCheck(L_10);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = X509ExtensionCollection_GetBytes_m0A54DFF3DDDBFEA3EC887939DC4018807AD09018(L_10, /*hidden argument*/NULL);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_12 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_mE005F52336402C3D41EAD9E28A95910B3C0865DA(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B(L_9, L_12, /*hidden argument*/NULL);
	}

IL_0052:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_13);
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509Extension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_mBE3EF1F1475E3C4E8F813546230AC86765740319 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		__this->set_extnCritical_1((bool)0);
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * G_B7_0 = NULL;
	X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * G_B8_1 = NULL;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = ___asn10;
		NullCheck(L_0);
		uint8_t L_1 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862_inline(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0019;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_2 = ___asn10;
		NullCheck(L_2);
		int32_t L_3 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0029;
		}
	}

IL_0019:
	{
		String_t* L_4 = Locale_GetText_m67B66557188C94648AA7A23F6A7501BE7D455ADA(_stringLiteral69B85846222F763F537AAE189724E50D8A16971F, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_5 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37_RuntimeMethod_var);
	}

IL_0029:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_6 = ___asn10;
		NullCheck(L_6);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_7 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_6, 0, /*hidden argument*/NULL);
		NullCheck(L_7);
		uint8_t L_8 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862_inline(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)6)))
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_9 = Locale_GetText_m67B66557188C94648AA7A23F6A7501BE7D455ADA(_stringLiteral69B85846222F763F537AAE189724E50D8A16971F, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_10 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37_RuntimeMethod_var);
	}

IL_0048:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_11 = ___asn10;
		NullCheck(L_11);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_12 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_11, 0, /*hidden argument*/NULL);
		String_t* L_13 = ASN1Convert_ToOid_mFFA93B4BBEFCA8E4E86DAE87CDB998E78BFB2D5A(L_12, /*hidden argument*/NULL);
		__this->set_extnOid_0(L_13);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_14 = ___asn10;
		NullCheck(L_14);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_15 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_14, 1, /*hidden argument*/NULL);
		NullCheck(L_15);
		uint8_t L_16 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862_inline(L_15, /*hidden argument*/NULL);
		G_B6_0 = __this;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			G_B7_0 = __this;
			goto IL_0081;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_17 = ___asn10;
		NullCheck(L_17);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_18 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_17, 1, /*hidden argument*/NULL);
		NullCheck(L_18);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_19 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		int32_t L_20 = 0;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		G_B8_0 = ((((int32_t)L_21) == ((int32_t)((int32_t)255)))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_0082;
	}

IL_0081:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_0082:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_extnCritical_1((bool)G_B8_0);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_22 = ___asn10;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_23 = ___asn10;
		NullCheck(L_23);
		int32_t L_24 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_25 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_22, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)), /*hidden argument*/NULL);
		__this->set_extnValue_2(L_25);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_26 = __this->get_extnValue_2();
		NullCheck(L_26);
		uint8_t L_27 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862_inline(L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)4))))
		{
			goto IL_00f3;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_28 = __this->get_extnValue_2();
		NullCheck(L_28);
		int32_t L_29 = ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00f3;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_30 = __this->get_extnValue_2();
		NullCheck(L_30);
		int32_t L_31 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00f3;
		}
	}

IL_00c4:
	try
	{ // begin try (depth: 1)
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_32 = __this->get_extnValue_2();
		NullCheck(L_32);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_32, /*hidden argument*/NULL);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_34 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_mE005F52336402C3D41EAD9E28A95910B3C0865DA(L_34, L_33, /*hidden argument*/NULL);
		V_0 = L_34;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_35 = __this->get_extnValue_2();
		NullCheck(L_35);
		ASN1_set_Value_m225FF9AC03EA872809C7742070A34A264C58588E(L_35, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_36 = __this->get_extnValue_2();
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_37 = V_0;
		NullCheck(L_36);
		ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B(L_36, L_37, /*hidden argument*/NULL);
		goto IL_00f3;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00f0;
		throw e;
	}

CATCH_00f0:
	{ // begin catch(System.Object)
		goto IL_00f3;
	} // end catch (depth: 1)

IL_00f3:
	{
		VirtActionInvoker0::Invoke(4 /* System.Void Mono.Security.X509.X509Extension::Decode() */, __this);
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.X509.X509Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_mB40626B9F809BED1E069D14D297C9B231EC991A1 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension__ctor_mB40626B9F809BED1E069D14D297C9B231EC991A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_0 = ___extension0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, X509Extension__ctor_mB40626B9F809BED1E069D14D297C9B231EC991A1_RuntimeMethod_var);
	}

IL_0014:
	{
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_2 = ___extension0;
		NullCheck(L_2);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_3 = X509Extension_get_Value_mDDB38DDE3E714212A7E5DD60027BA0BB707712EC(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_4 = ___extension0;
		NullCheck(L_4);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_5 = X509Extension_get_Value_mDDB38DDE3E714212A7E5DD60027BA0BB707712EC(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		uint8_t L_6 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862_inline(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_0038;
		}
	}
	{
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_7 = ___extension0;
		NullCheck(L_7);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_8 = X509Extension_get_Value_mDDB38DDE3E714212A7E5DD60027BA0BB707712EC(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}

IL_0038:
	{
		String_t* L_10 = Locale_GetText_m67B66557188C94648AA7A23F6A7501BE7D455ADA(_stringLiteral69B85846222F763F537AAE189724E50D8A16971F, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_11 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, X509Extension__ctor_mB40626B9F809BED1E069D14D297C9B231EC991A1_RuntimeMethod_var);
	}

IL_0048:
	{
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_12 = ___extension0;
		NullCheck(L_12);
		String_t* L_13 = X509Extension_get_Oid_m45C32C3103B9B042C28F16D6A937DF17A97565C4_inline(L_12, /*hidden argument*/NULL);
		__this->set_extnOid_0(L_13);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_14 = ___extension0;
		NullCheck(L_14);
		bool L_15 = X509Extension_get_Critical_m988BAFEF41E252919E1448B098E95C910235C8BB_inline(L_14, /*hidden argument*/NULL);
		__this->set_extnCritical_1(L_15);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_16 = ___extension0;
		NullCheck(L_16);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_17 = X509Extension_get_Value_mDDB38DDE3E714212A7E5DD60027BA0BB707712EC(L_16, /*hidden argument*/NULL);
		__this->set_extnValue_2(L_17);
		VirtActionInvoker0::Invoke(4 /* System.Void Mono.Security.X509.X509Extension::Decode() */, __this);
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::Decode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension_Decode_mF26997CE00B1366C7EF9F00502EDA6214287206E (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension_Encode_mD54AE543FC92F1C125EECB3C0346B49BB8DF359F (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_ASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * X509Extension_get_ASN1_mEE5890FAEC41BF25539B672EAE5C8FEB5219E674 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_get_ASN1_mEE5890FAEC41BF25539B672EAE5C8FEB5219E674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_0 = NULL;
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_m6DD2E5BD0B12A6BFA95E1822A55B2294B8C237BC(L_0, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_1 = V_0;
		String_t* L_2 = __this->get_extnOid_0();
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_3 = ASN1Convert_FromOid_mC178E72357986C1AB75A1FFC9DA7687ECA20E462(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B(L_1, L_3, /*hidden argument*/NULL);
		bool L_4 = __this->get_extnCritical_1();
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_5 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)255));
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_8 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_mAB2593792CB61AD1542F4F9D6FB6E8BB96DE007E(L_8, (uint8_t)1, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B(L_5, L_8, /*hidden argument*/NULL);
	}

IL_003d:
	{
		VirtActionInvoker0::Invoke(5 /* System.Void Mono.Security.X509.X509Extension::Encode() */, __this);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_9 = V_0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_10 = __this->get_extnValue_2();
		NullCheck(L_9);
		ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B(L_9, L_10, /*hidden argument*/NULL);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_11 = V_0;
		return L_11;
	}
}
// System.String Mono.Security.X509.X509Extension::get_Oid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Extension_get_Oid_m45C32C3103B9B042C28F16D6A937DF17A97565C4 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_extnOid_0();
		return L_0;
	}
}
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_m988BAFEF41E252919E1448B098E95C910235C8BB (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_extnCritical_1();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509Extension::set_Critical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension_set_Critical_m2F9E1F072DFDA07F12AC19DA3E601C6E4F17A4B8 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_extnCritical_1(L_0);
		return;
	}
}
// System.String Mono.Security.X509.X509Extension::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Extension_get_Name_mCDAF5CA718B630C5F53CD55CD4F203B591876200 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_extnOid_0();
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * X509Extension_get_Value_mDDB38DDE3E714212A7E5DD60027BA0BB707712EC (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = __this->get_extnValue_2();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void Mono.Security.X509.X509Extension::Encode() */, __this);
	}

IL_000e:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_1 = __this->get_extnValue_2();
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Extension_Equals_m142690BDE93BA49B3EF04CDF1F14A51D274F38FD (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_Equals_m142690BDE93BA49B3EF04CDF1F14A51D274F38FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF *)IsInstClass((RuntimeObject*)L_1, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_il2cpp_TypeInfo_var));
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		bool L_3 = __this->get_extnCritical_1();
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = L_4->get_extnCritical_1();
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		String_t* L_6 = __this->get_extnOid_0();
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_extnOid_0();
		bool L_9 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		return (bool)0;
	}

IL_0036:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_10 = __this->get_extnValue_2();
		NullCheck(L_10);
		int32_t L_11 = ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63(L_10, /*hidden argument*/NULL);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_12 = V_0;
		NullCheck(L_12);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_13 = L_12->get_extnValue_2();
		NullCheck(L_13);
		int32_t L_14 = ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)L_14)))
		{
			goto IL_0050;
		}
	}
	{
		return (bool)0;
	}

IL_0050:
	{
		V_1 = 0;
		goto IL_0074;
	}

IL_0054:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_15 = __this->get_extnValue_2();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_17 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_15, L_16, /*hidden argument*/NULL);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_18 = V_0;
		NullCheck(L_18);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_19 = L_18->get_extnValue_2();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_21 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_19, L_20, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)L_17) == ((RuntimeObject*)(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)L_21)))
		{
			goto IL_0070;
		}
	}
	{
		return (bool)0;
	}

IL_0070:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0074:
	{
		int32_t L_23 = V_1;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_24 = __this->get_extnValue_2();
		NullCheck(L_24);
		int32_t L_25 = ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0054;
		}
	}
	{
		return (bool)1;
	}
}
// System.Byte[] Mono.Security.X509.X509Extension::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Extension_GetBytes_mAB1211186B8785B0975F5F017F103B3CC83E511D (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = X509Extension_get_ASN1_mEE5890FAEC41BF25539B672EAE5C8FEB5219E674(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_0);
		return L_1;
	}
}
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509Extension_GetHashCode_mD1B128B323E782A9DF0672FB3223948A8E59882F (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_extnOid_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension_WriteLine_m3C538A06F19ABFD9F3BC9F531C8CA96329E8EFF2 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, StringBuilder_t * ___sb0, int32_t ___n1, int32_t ___pos2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_WriteLine_m3C538A06F19ABFD9F3BC9F531C8CA96329E8EFF2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = __this->get_extnValue_2();
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ASN1_get_Value_m9BD6239E12A6148AF9507C2F58058C6B8147A079(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___pos2;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0055;
	}

IL_0012:
	{
		int32_t L_3 = V_2;
		int32_t L_4 = ___n1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0045;
		}
	}
	{
		StringBuilder_t * L_5 = ___sb0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
		NullCheck(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_9 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_10 = Byte_ToString_m731FDB27391432D7F14B6769B5D0A3E248803D25((uint8_t*)((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), _stringLiteral9F792B61D0EC544D91E7AFF34E2E99EE3CF2B313, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_5, L_10, /*hidden argument*/NULL);
		StringBuilder_t * L_11 = ___sb0;
		NullCheck(L_11);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_11, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, /*hidden argument*/NULL);
		goto IL_0051;
	}

IL_0045:
	{
		StringBuilder_t * L_12 = ___sb0;
		NullCheck(L_12);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_12, _stringLiteral088FB1A4AB057F4FCF7D487006499060C7FE5773, /*hidden argument*/NULL);
	}

IL_0051:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0055:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)8)))
		{
			goto IL_0012;
		}
	}
	{
		StringBuilder_t * L_15 = ___sb0;
		NullCheck(L_15);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_15, _stringLiteral099600A10A944114AAC406D136B625FB416DD779, /*hidden argument*/NULL);
		int32_t L_16 = ___pos2;
		V_1 = L_16;
		V_3 = 0;
		goto IL_009a;
	}

IL_006b:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		NullCheck(L_17);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_4 = L_21;
		uint8_t L_22 = V_4;
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0088;
		}
	}
	{
		StringBuilder_t * L_23 = ___sb0;
		NullCheck(L_23);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_23, _stringLiteral3A52CE780950D4D969792A2559CD519D7EE8C727, /*hidden argument*/NULL);
		goto IL_0096;
	}

IL_0088:
	{
		StringBuilder_t * L_24 = ___sb0;
		uint8_t L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_26 = Convert_ToChar_m2FF337FDDCAD52939473E0D7ED3FBFD49A4C2E18(L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_24, L_26, /*hidden argument*/NULL);
	}

IL_0096:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_009a:
	{
		int32_t L_28 = V_3;
		int32_t L_29 = ___n1;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_006b;
		}
	}
	{
		StringBuilder_t * L_30 = ___sb0;
		String_t* L_31 = Environment_get_NewLine_m5D4F4667FA5D1E2DBDD4DF9696D0CE76C83EF318(/*hidden argument*/NULL);
		NullCheck(L_30);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_30, L_31, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mono.Security.X509.X509Extension::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Extension_ToString_m6E272E5A762E6CC4AE476A5AF8627D164308C3A5 (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_ToString_m6E272E5A762E6CC4AE476A5AF8627D164308C3A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_1 = __this->get_extnValue_2();
		NullCheck(L_1);
		int32_t L_2 = ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63(L_1, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_2>>(int32_t)3));
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_3 = __this->get_extnValue_2();
		NullCheck(L_3);
		int32_t L_4 = ASN1_get_Length_mD0AC74E8F07244961D697B341599BD83D989EF63(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)((int32_t)L_5<<(int32_t)3))));
		V_3 = 0;
		V_4 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		StringBuilder_t * L_6 = V_0;
		int32_t L_7 = V_3;
		X509Extension_WriteLine_m3C538A06F19ABFD9F3BC9F531C8CA96329E8EFF2(__this, L_6, 8, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)8));
		int32_t L_9 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_10 = V_4;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_002b;
		}
	}
	{
		StringBuilder_t * L_12 = V_0;
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		X509Extension_WriteLine_m3C538A06F19ABFD9F3BC9F531C8CA96329E8EFF2(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		StringBuilder_t * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		return L_16;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_m009D1FA8F4EA1BCF236002C901176D8C3CBDB8FC (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, const RuntimeMethod* method)
{
	{
		CollectionBase__ctor_mE3F20EEAA96F8613088EDD69A17E49C22E97ADF9(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * ___asn10, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * V_1 = NULL;
	{
		X509ExtensionCollection__ctor_m009D1FA8F4EA1BCF236002C901176D8C3CBDB8FC(__this, /*hidden argument*/NULL);
		__this->set_readOnly_1((bool)1);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = ___asn10;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_1 = ___asn10;
		NullCheck(L_1);
		uint8_t L_2 = ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862_inline(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)48))))
		{
			goto IL_0026;
		}
	}
	{
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(L_3, _stringLiteral7B152A24BBC8DB09B568453879784A9FBD2A9FFC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, X509ExtensionCollection__ctor_mE4744D19F24BBC5F7FE1EE171FD5C301B38A9662_RuntimeMethod_var);
	}

IL_0026:
	{
		V_0 = 0;
		goto IL_0048;
	}

IL_002a:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_4 = ___asn10;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_6 = ASN1_get_Item_m88B75C57A7E130A02A709AE8FFD2E0972E71FC08(L_4, L_5, /*hidden argument*/NULL);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_7 = (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF *)il2cpp_codegen_object_new(X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_il2cpp_TypeInfo_var);
		X509Extension__ctor_mDEE4DCDDDD91D3C1DD2FDF3D793AD447D86C4F37(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_8 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_9 = V_1;
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_11 = V_0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_12 = ___asn10;
		NullCheck(L_12);
		int32_t L_13 = ASN1_get_Count_m5A0E71B4C4A2257C0875AE1041AAA953C5B12A19(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}
}
// System.Int32 Mono.Security.X509.X509ExtensionCollection::Add(Mono.Security.X509.X509Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_Add_m6D1C33115BB33BCA81D94CF032176F2CD43DC88E (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_Add_m6D1C33115BB33BCA81D94CF032176F2CD43DC88E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_0 = ___extension0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, X509ExtensionCollection_Add_m6D1C33115BB33BCA81D94CF032176F2CD43DC88E_RuntimeMethod_var);
	}

IL_000e:
	{
		bool L_2 = __this->get_readOnly_1();
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_3 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_3, _stringLiteralBC6E67BC4F59310F473E7E6D8ED4A8FBFA3F50C0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, X509ExtensionCollection_Add_m6D1C33115BB33BCA81D94CF032176F2CD43DC88E_RuntimeMethod_var);
	}

IL_0021:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_4 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_5 = ___extension0;
		NullCheck(L_4);
		int32_t L_6 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_5);
		return L_6;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::AddRange(Mono.Security.X509.X509Extension[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection_AddRange_mFDCAC80492B3C0DE3A247B30E0DBC08DA5F73C42 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, X509ExtensionU5BU5D_t7B1B29AAD3EEC2C51495C0B9BDF5A35E517A53F7* ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_AddRange_mFDCAC80492B3C0DE3A247B30E0DBC08DA5F73C42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		X509ExtensionU5BU5D_t7B1B29AAD3EEC2C51495C0B9BDF5A35E517A53F7* L_0 = ___extension0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, X509ExtensionCollection_AddRange_mFDCAC80492B3C0DE3A247B30E0DBC08DA5F73C42_RuntimeMethod_var);
	}

IL_000e:
	{
		bool L_2 = __this->get_readOnly_1();
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_3 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_3, _stringLiteralBC6E67BC4F59310F473E7E6D8ED4A8FBFA3F50C0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, X509ExtensionCollection_AddRange_mFDCAC80492B3C0DE3A247B30E0DBC08DA5F73C42_RuntimeMethod_var);
	}

IL_0021:
	{
		V_0 = 0;
		goto IL_0038;
	}

IL_0025:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_4 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		X509ExtensionU5BU5D_t7B1B29AAD3EEC2C51495C0B9BDF5A35E517A53F7* L_5 = ___extension0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0038:
	{
		int32_t L_10 = V_0;
		X509ExtensionU5BU5D_t7B1B29AAD3EEC2C51495C0B9BDF5A35E517A53F7* L_11 = ___extension0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))
		{
			goto IL_0025;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::AddRange(Mono.Security.X509.X509ExtensionCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection_AddRange_m85AC174C111FF3CA20D983B42EDD517BDA482287 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * ___collection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_AddRange_m85AC174C111FF3CA20D983B42EDD517BDA482287_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral2037DE437C80264CCBCE8A8B61D0BF9F593D2322, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, X509ExtensionCollection_AddRange_m85AC174C111FF3CA20D983B42EDD517BDA482287_RuntimeMethod_var);
	}

IL_000e:
	{
		bool L_2 = __this->get_readOnly_1();
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_3 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mD023A89A5C1F740F43F0A9CD6C49DC21230B3CEE(L_3, _stringLiteralBC6E67BC4F59310F473E7E6D8ED4A8FBFA3F50C0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, X509ExtensionCollection_AddRange_m85AC174C111FF3CA20D983B42EDD517BDA482287_RuntimeMethod_var);
	}

IL_0021:
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0025:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_4 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_5 = ___collection0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_7 = X509ExtensionCollection_get_Item_m238E6DF2D236A61A1446F8983F4BDD6B50E57EA5(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_9 = V_0;
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_10 = ___collection0;
		NullCheck(L_10);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_11 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
		if ((((int32_t)L_9) < ((int32_t)L_12)))
		{
			goto IL_0025;
		}
	}
	{
		return;
	}
}
// System.Boolean Mono.Security.X509.X509ExtensionCollection::Contains(Mono.Security.X509.X509Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509ExtensionCollection_Contains_m6C4CEB7406DE445AC67DF8FFD1C5FECB184BB1D1 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * ___extension0, const RuntimeMethod* method)
{
	{
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_0 = ___extension0;
		int32_t L_1 = X509ExtensionCollection_IndexOf_m4E013A4DA9A020885247FA65321B661CB0C6CD70(__this, L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Mono.Security.X509.X509ExtensionCollection::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509ExtensionCollection_Contains_m6790F2436480D1EDDBFD8216230CABB30BEBEA6D (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___oid0;
		int32_t L_1 = X509ExtensionCollection_IndexOf_m8821D9D903993924EDA8C7B302946346AA406377(__this, L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::CopyTo(Mono.Security.X509.X509Extension[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection_CopyTo_m83E9F131564A1C6E77F6DF1ABA24FBF8057BFD09 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, X509ExtensionU5BU5D_t7B1B29AAD3EEC2C51495C0B9BDF5A35E517A53F7* ___extensions0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_CopyTo_m83E9F131564A1C6E77F6DF1ABA24FBF8057BFD09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509ExtensionU5BU5D_t7B1B29AAD3EEC2C51495C0B9BDF5A35E517A53F7* L_0 = ___extensions0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralFF432B467F0803C332354C8259DBF1D890AB808C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, X509ExtensionCollection_CopyTo_m83E9F131564A1C6E77F6DF1ABA24FBF8057BFD09_RuntimeMethod_var);
	}

IL_000e:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_2 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		X509ExtensionU5BU5D_t7B1B29AAD3EEC2C51495C0B9BDF5A35E517A53F7* L_3 = ___extensions0;
		int32_t L_4 = ___index1;
		NullCheck(L_2);
		VirtActionInvoker2< RuntimeArray *, int32_t >::Invoke(35 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_2, (RuntimeArray *)(RuntimeArray *)L_3, L_4);
		return;
	}
}
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(Mono.Security.X509.X509Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_IndexOf_m4E013A4DA9A020885247FA65321B661CB0C6CD70 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_IndexOf_m4E013A4DA9A020885247FA65321B661CB0C6CD70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_0 = ___extension0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, X509ExtensionCollection_IndexOf_m4E013A4DA9A020885247FA65321B661CB0C6CD70_RuntimeMethod_var);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0031;
	}

IL_0012:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_2 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_4 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_5 = ___extension0;
		NullCheck(((X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF *)CastclassClass((RuntimeObject*)L_4, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_il2cpp_TypeInfo_var)));
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, ((X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF *)CastclassClass((RuntimeObject*)L_4, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_il2cpp_TypeInfo_var)), L_5);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002d:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_10 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_10);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509ExtensionCollection_IndexOf_m8821D9D903993924EDA8C7B302946346AA406377 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_IndexOf_m8821D9D903993924EDA8C7B302946346AA406377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___oid0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral2118C8699C55066293A0E34341B9953F6C1811BD, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, X509ExtensionCollection_IndexOf_m8821D9D903993924EDA8C7B302946346AA406377_RuntimeMethod_var);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0012:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_2 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_4 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		NullCheck(((X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF *)CastclassClass((RuntimeObject*)L_4, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_il2cpp_TypeInfo_var)));
		String_t* L_5 = X509Extension_get_Oid_m45C32C3103B9B042C28F16D6A937DF17A97565C4_inline(((X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF *)CastclassClass((RuntimeObject*)L_4, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		String_t* L_6 = ___oid0;
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_0032:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_10 = V_0;
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_11 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::Insert(System.Int32,Mono.Security.X509.X509Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection_Insert_m2D09C62CB8D8364819979BC9CD4C2D5EDF7DD84C (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, int32_t ___index0, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * ___extension1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_Insert_m2D09C62CB8D8364819979BC9CD4C2D5EDF7DD84C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_0 = ___extension1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, X509ExtensionCollection_Insert_m2D09C62CB8D8364819979BC9CD4C2D5EDF7DD84C_RuntimeMethod_var);
	}

IL_000e:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_2 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___index0;
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_4 = ___extension1;
		NullCheck(L_2);
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(39 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_2, L_3, L_4);
		return;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::Remove(Mono.Security.X509.X509Extension)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection_Remove_m6A7ED6913A48A5249E0897F4B5F77234DE86DDE0 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * ___extension0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_Remove_m6A7ED6913A48A5249E0897F4B5F77234DE86DDE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_0 = ___extension0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralF98961015A0AC393630F4EDA3749D644A716DA64, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, X509ExtensionCollection_Remove_m6A7ED6913A48A5249E0897F4B5F77234DE86DDE0_RuntimeMethod_var);
	}

IL_000e:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_2 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_3 = ___extension0;
		NullCheck(L_2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(41 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_2, L_3);
		return;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection_Remove_m07B303CF23A7194773E10B5A536BEF643CA008E0 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_Remove_m07B303CF23A7194773E10B5A536BEF643CA008E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___oid0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral2118C8699C55066293A0E34341B9953F6C1811BD, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, X509ExtensionCollection_Remove_m07B303CF23A7194773E10B5A536BEF643CA008E0_RuntimeMethod_var);
	}

IL_000e:
	{
		String_t* L_2 = ___oid0;
		int32_t L_3 = X509ExtensionCollection_IndexOf_m8821D9D903993924EDA8C7B302946346AA406377(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_5 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker1< int32_t >::Invoke(42 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_5, L_6);
	}

IL_0026:
	{
		return;
	}
}
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_mD30D6DB62F39FFEF51B79A9992537250C4B3A756 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(37 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * X509ExtensionCollection_get_Item_m238E6DF2D236A61A1446F8983F4BDD6B50E57EA5 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_get_Item_m238E6DF2D236A61A1446F8983F4BDD6B50E57EA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF *)CastclassClass((RuntimeObject*)L_2, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_il2cpp_TypeInfo_var));
	}
}
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * X509ExtensionCollection_get_Item_m7E4C7EDDC57517E65EA0998F8D384A87C9EAFDCA (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_get_Item_m7E4C7EDDC57517E65EA0998F8D384A87C9EAFDCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___oid0;
		int32_t L_1 = X509ExtensionCollection_IndexOf_m8821D9D903993924EDA8C7B302946346AA406377(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_000e;
		}
	}
	{
		return (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF *)NULL;
	}

IL_000e:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_3 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		return ((X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF *)CastclassClass((RuntimeObject*)L_5, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_il2cpp_TypeInfo_var));
	}
}
// System.Byte[] Mono.Security.X509.X509ExtensionCollection::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509ExtensionCollection_GetBytes_m0A54DFF3DDDBFEA3EC887939DC4018807AD09018 (X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_GetBytes_m0A54DFF3DDDBFEA3EC887939DC4018807AD09018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_0 = NULL;
	int32_t V_1 = 0;
	X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * V_2 = NULL;
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		if ((((int32_t)L_1) >= ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		return (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
	}

IL_0010:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_2 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_m6DD2E5BD0B12A6BFA95E1822A55B2294B8C237BC(L_2, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_003f;
	}

IL_001c:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_3 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_1;
		NullCheck(L_3);
		RuntimeObject * L_5 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		V_2 = ((X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF *)CastclassClass((RuntimeObject*)L_5, X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF_il2cpp_TypeInfo_var));
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_6 = V_0;
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_7 = V_2;
		NullCheck(L_7);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_8 = X509Extension_get_ASN1_mEE5890FAEC41BF25539B672EAE5C8FEB5219E674(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B(L_6, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_10 = V_1;
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_11 = CollectionBase_get_InnerList_m56EDE16DE8F8FA2AA6346730CC725E0B3BF0750A(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_13);
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store__ctor_m9B43F02DA2040FD3041270FA71B0F7D9F96D1AEB (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___path0, bool ___crl1, bool ___newFormat2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___path0;
		__this->set__storePath_0(L_0);
		bool L_1 = ___crl1;
		__this->set__crl_3(L_1);
		bool L_2 = ___newFormat2;
		__this->set__newFormat_4(L_2);
		return;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * X509Store_get_Certificates_mDCBF6C2FA25F37AEE61A9319B61A17A950579C35 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_0 = __this->get__certificates_1();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_2 = X509Store_BuildCertificatesCollection_m38BE87E16F58481AE1CCA740DDE60DA1A09BED55(__this, L_1, /*hidden argument*/NULL);
		__this->set__certificates_1(L_2);
	}

IL_001a:
	{
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_3 = __this->get__certificates_1();
		return L_3;
	}
}
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * X509Store_get_Crls_m1E82961E5031C510EDBB616061D50D94B234BE8F (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_get_Crls_m1E82961E5031C510EDBB616061D50D94B234BE8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__crl_3();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_1 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_1, /*hidden argument*/NULL);
		__this->set__crls_2(L_1);
	}

IL_0013:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_2 = __this->get__crls_2();
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_3 = __this->get__storePath_0();
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_4 = X509Store_BuildCrlsCollection_m295A43B0ED3469636553A7A04F12A2E6B01AFE1B(__this, L_3, /*hidden argument*/NULL);
		__this->set__crls_2(L_4);
	}

IL_002d:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_5 = __this->get__crls_2();
		return L_5;
	}
}
// System.String Mono.Security.X509.X509Store::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Store_get_Name_mBD22C5AED5CF7D79C3461C04ABC21EAD98AD677A (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_get_Name_mBD22C5AED5CF7D79C3461C04ABC21EAD98AD677A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = __this->get__name_5();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = ((Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_StaticFields*)il2cpp_codegen_static_fields_for(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var))->get_DirectorySeparatorChar_2();
		NullCheck(L_1);
		int32_t L_3 = String_LastIndexOf_m76C37E3915E802044761572007B8FB0635995F59(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = __this->get__storePath_0();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		__this->set__name_5(L_6);
	}

IL_002d:
	{
		String_t* L_7 = __this->get__name_5();
		return L_7;
	}
}
// System.Void Mono.Security.X509.X509Store::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_Clear_m9D96EE12E529DD3EEAD7CCB7AB41103B117DBD93 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, const RuntimeMethod* method)
{
	{
		X509Store_ClearCertificates_m7569D992FB7522DE5AEDC628C55CF39225BF22C3(__this, /*hidden argument*/NULL);
		X509Store_ClearCrls_m8353905DF499C721D1BE70C209408FB33DD89DB2(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509Store::ClearCertificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_ClearCertificates_m7569D992FB7522DE5AEDC628C55CF39225BF22C3 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, const RuntimeMethod* method)
{
	{
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_0 = __this->get__certificates_1();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_1 = __this->get__certificates_1();
		NullCheck(L_1);
		CollectionBase_Clear_m532DA443B53F9D48FAC7184B5C405D8E725E554A(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		__this->set__certificates_1((X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A *)NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509Store::ClearCrls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_ClearCrls_m8353905DF499C721D1BE70C209408FB33DD89DB2 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get__crls_2();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_1 = __this->get__crls_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_1);
	}

IL_0013:
	{
		__this->set__crls_2((ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509Store::Import(Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_Import_mDD1F487AABDCF30CDDE087FB06550E3EEE248304 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * ___certificate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_Import_mDD1F487AABDCF30CDDE087FB06550E3EEE248304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	String_t* V_3 = NULL;
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_4 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = __this->get__storePath_0();
		X509Store_CheckStore_m3B586D9A34CCCE7CE85200097EECD26A964F11B5(__this, L_0, (bool)1, /*hidden argument*/NULL);
		bool L_1 = __this->get__newFormat_4();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_2 = ___certificate0;
		X509Store_ImportNewFormat_m703CA17205865FD57FB031C85DCE7190E5E8B881(__this, L_2, /*hidden argument*/NULL);
		return;
	}

IL_001e:
	{
		String_t* L_3 = __this->get__storePath_0();
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_4 = ___certificate0;
		String_t* L_5 = X509Store_GetUniqueName_m96158212713169D2D267B4A0E7C570C6F7665041(__this, L_4, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_6 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		bool L_8 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_9 = __this->get__storePath_0();
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_10 = ___certificate0;
		String_t* L_11 = X509Store_GetUniqueNameWithSerial_mCA113F7098903657F1001CD5C7F0E79DACB11028(__this, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_12 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_9, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		bool L_14 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_00f1;
		}
	}
	{
		String_t* L_15 = V_0;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_16 = File_Create_mE6AF90C7A82E96EC1315821EB061327CF3EB55DD(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_005f:
	try
	{ // begin try (depth: 1)
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_17 = ___certificate0;
		NullCheck(L_17);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_17);
		V_2 = L_18;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_19 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_2;
		NullCheck(L_21);
		NullCheck(L_19);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(32 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))));
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_22 = V_1;
		NullCheck(L_22);
		VirtActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_22);
		IL2CPP_LEAVE(0x83, FINALLY_0079);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		{
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_23 = V_1;
			if (!L_23)
			{
				goto IL_0082;
			}
		}

IL_007c:
		{
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_24 = V_1;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_24);
		}

IL_0082:
		{
			IL2CPP_END_FINALLY(121)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x83, IL_0083)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0083:
	{
		X509Store_ClearCertificates_m7569D992FB7522DE5AEDC628C55CF39225BF22C3(__this, /*hidden argument*/NULL);
		return;
	}

IL_008a:
	{
		String_t* L_25 = __this->get__storePath_0();
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_26 = ___certificate0;
		String_t* L_27 = X509Store_GetUniqueNameWithSerial_mCA113F7098903657F1001CD5C7F0E79DACB11028(__this, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_28 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_25, L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		String_t* L_29 = V_0;
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_30 = X509Store_LoadCertificate_m5B3D55AB0923EC03076530159AF49EF028BE8024(__this, L_29, /*hidden argument*/NULL);
		String_t* L_31 = X509Store_GetUniqueNameWithSerial_mCA113F7098903657F1001CD5C7F0E79DACB11028(__this, L_30, /*hidden argument*/NULL);
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_32 = ___certificate0;
		String_t* L_33 = X509Store_GetUniqueNameWithSerial_mCA113F7098903657F1001CD5C7F0E79DACB11028(__this, L_32, /*hidden argument*/NULL);
		bool L_34 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_31, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00f1;
		}
	}
	{
		String_t* L_35 = V_3;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_36 = File_Create_mE6AF90C7A82E96EC1315821EB061327CF3EB55DD(L_35, /*hidden argument*/NULL);
		V_4 = L_36;
	}

IL_00c0:
	try
	{ // begin try (depth: 1)
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_37 = ___certificate0;
		NullCheck(L_37);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_37);
		V_5 = L_38;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_39 = V_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_40 = V_5;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_41 = V_5;
		NullCheck(L_41);
		NullCheck(L_39);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(32 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_39, L_40, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))));
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_42 = V_4;
		NullCheck(L_42);
		VirtActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_42);
		IL2CPP_LEAVE(0xEB, FINALLY_00df);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00df;
	}

FINALLY_00df:
	{ // begin finally (depth: 1)
		{
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_43 = V_4;
			if (!L_43)
			{
				goto IL_00ea;
			}
		}

IL_00e3:
		{
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_44 = V_4;
			NullCheck(L_44);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_44);
		}

IL_00ea:
		{
			IL2CPP_END_FINALLY(223)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(223)
	{
		IL2CPP_JUMP_TBL(0xEB, IL_00eb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00eb:
	{
		X509Store_ClearCertificates_m7569D992FB7522DE5AEDC628C55CF39225BF22C3(__this, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Store::Import(Mono.Security.X509.X509Crl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_Import_mEC83234B0B3AA2A80D59BFF0F85F60E75727267C (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * ___crl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_Import_mEC83234B0B3AA2A80D59BFF0F85F60E75727267C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = __this->get__storePath_0();
		X509Store_CheckStore_m3B586D9A34CCCE7CE85200097EECD26A964F11B5(__this, L_0, (bool)1, /*hidden argument*/NULL);
		bool L_1 = __this->get__newFormat_4();
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_2 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, X509Store_Import_mEC83234B0B3AA2A80D59BFF0F85F60E75727267C_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_3 = __this->get__storePath_0();
		X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * L_4 = ___crl0;
		String_t* L_5 = X509Store_GetUniqueName_m612727D7E19DC6AD5764187EEF5179124AB684BF(__this, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_6 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		bool L_8 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_9 = V_0;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_10 = File_Create_mE6AF90C7A82E96EC1315821EB061327CF3EB55DD(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * L_11 = ___crl0;
		NullCheck(L_11);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = X509Crl_get_RawData_mA8FD4E39FFAC912DC1F90F4A6178EDB474942000(L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_13 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_15 = V_2;
		NullCheck(L_15);
		NullCheck(L_13);
		VirtActionInvoker3< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(32 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))));
		IL2CPP_LEAVE(0x5C, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_16 = V_1;
			if (!L_16)
			{
				goto IL_005b;
			}
		}

IL_0055:
		{
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_17 = V_1;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_17);
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005c:
	{
		X509Store_ClearCrls_m8353905DF499C721D1BE70C209408FB33DD89DB2(__this, /*hidden argument*/NULL);
	}

IL_0062:
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Store::Remove(Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_Remove_m95238DB0256FC3A3241414885F1FB23B2140BDC4 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * ___certificate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_Remove_m95238DB0256FC3A3241414885F1FB23B2140BDC4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0 = __this->get__newFormat_4();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_1 = ___certificate0;
		X509Store_RemoveNewFormat_m612E97E9604D4EB224B20F7AE1466F6C1AD58CFB(__this, L_1, /*hidden argument*/NULL);
		return;
	}

IL_0010:
	{
		String_t* L_2 = __this->get__storePath_0();
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_3 = ___certificate0;
		String_t* L_4 = X509Store_GetUniqueNameWithSerial_mCA113F7098903657F1001CD5C7F0E79DACB11028(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_5 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		bool L_7 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_8 = V_0;
		File_Delete_mBE814E569EAB07FAD140C6DCDB957F1CB8C85DE2(L_8, /*hidden argument*/NULL);
		X509Store_ClearCertificates_m7569D992FB7522DE5AEDC628C55CF39225BF22C3(__this, /*hidden argument*/NULL);
		return;
	}

IL_0038:
	{
		String_t* L_9 = __this->get__storePath_0();
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_10 = ___certificate0;
		String_t* L_11 = X509Store_GetUniqueName_m96158212713169D2D267B4A0E7C570C6F7665041(__this, L_10, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_12 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_9, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		String_t* L_13 = V_0;
		bool L_14 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_15 = V_0;
		File_Delete_mBE814E569EAB07FAD140C6DCDB957F1CB8C85DE2(L_15, /*hidden argument*/NULL);
		X509Store_ClearCertificates_m7569D992FB7522DE5AEDC628C55CF39225BF22C3(__this, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Store::Remove(Mono.Security.X509.X509Crl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_Remove_m9A961B2D523A77EED8E32E7473517FD54F8EDDBF (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * ___crl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_Remove_m9A961B2D523A77EED8E32E7473517FD54F8EDDBF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0 = __this->get__newFormat_4();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_1 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, X509Store_Remove_m9A961B2D523A77EED8E32E7473517FD54F8EDDBF_RuntimeMethod_var);
	}

IL_000e:
	{
		String_t* L_2 = __this->get__storePath_0();
		X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * L_3 = ___crl0;
		String_t* L_4 = X509Store_GetUniqueName_m612727D7E19DC6AD5764187EEF5179124AB684BF(__this, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_5 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_2, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		bool L_7 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_8 = V_0;
		File_Delete_mBE814E569EAB07FAD140C6DCDB957F1CB8C85DE2(L_8, /*hidden argument*/NULL);
		X509Store_ClearCrls_m8353905DF499C721D1BE70C209408FB33DD89DB2(__this, /*hidden argument*/NULL);
	}

IL_0035:
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Store::ImportNewFormat(Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_ImportNewFormat_m703CA17205865FD57FB031C85DCE7190E5E8B881 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * ___certificate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_ImportNewFormat_m703CA17205865FD57FB031C85DCE7190E5E8B881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * V_0 = NULL;
	int64_t V_1 = 0;
	String_t* V_2 = NULL;
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_0 = ___certificate0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_0);
		X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * L_2 = (X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 *)il2cpp_codegen_object_new(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m1CBB1959D5C85EE236244CD85AA73473F19C6A6C(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * L_3 = V_0;
			int64_t L_4 = X509Helper2_GetSubjectNameHash_mFCB2DF1283F1668EF21A9DA384C50134854E103C(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
			String_t* L_5 = __this->get__storePath_0();
			int64_t L_6 = V_1;
			int64_t L_7 = L_6;
			RuntimeObject * L_8 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_7);
			String_t* L_9 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral19E258979D8F780760217319B04EFEA66F35C4C1, L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
			String_t* L_10 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_5, L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			String_t* L_11 = V_2;
			bool L_12 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0058;
			}
		}

IL_0037:
		{
			String_t* L_13 = V_2;
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_14 = File_Create_mE6AF90C7A82E96EC1315821EB061327CF3EB55DD(L_13, /*hidden argument*/NULL);
			V_3 = L_14;
		}

IL_003e:
		try
		{ // begin try (depth: 2)
			X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * L_15 = V_0;
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_16 = V_3;
			X509Helper2_ExportAsPEM_m4D4867AAD708F34D2E4558D65B606B42A7EFDA00(L_15, L_16, (bool)1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x52, FINALLY_0048);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0048;
		}

FINALLY_0048:
		{ // begin finally (depth: 2)
			{
				FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_17 = V_3;
				if (!L_17)
				{
					goto IL_0051;
				}
			}

IL_004b:
			{
				FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_18 = V_3;
				NullCheck(L_18);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_18);
			}

IL_0051:
			{
				IL2CPP_END_FINALLY(72)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(72)
		{
			IL2CPP_JUMP_TBL(0x52, IL_0052)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0052:
		{
			X509Store_ClearCertificates_m7569D992FB7522DE5AEDC628C55CF39225BF22C3(__this, /*hidden argument*/NULL);
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x64, FINALLY_005a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		{
			X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * L_19 = V_0;
			if (!L_19)
			{
				goto IL_0063;
			}
		}

IL_005d:
		{
			X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * L_20 = V_0;
			NullCheck(L_20);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_20);
		}

IL_0063:
		{
			IL2CPP_END_FINALLY(90)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0064:
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Store::RemoveNewFormat(Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_RemoveNewFormat_m612E97E9604D4EB224B20F7AE1466F6C1AD58CFB (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * ___certificate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_RemoveNewFormat_m612E97E9604D4EB224B20F7AE1466F6C1AD58CFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * V_0 = NULL;
	int64_t V_1 = 0;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_0 = ___certificate0;
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_0);
		X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * L_2 = (X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 *)il2cpp_codegen_object_new(X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m1CBB1959D5C85EE236244CD85AA73473F19C6A6C(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * L_3 = V_0;
			int64_t L_4 = X509Helper2_GetSubjectNameHash_mFCB2DF1283F1668EF21A9DA384C50134854E103C(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
			String_t* L_5 = __this->get__storePath_0();
			int64_t L_6 = V_1;
			int64_t L_7 = L_6;
			RuntimeObject * L_8 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_7);
			String_t* L_9 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral19E258979D8F780760217319B04EFEA66F35C4C1, L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
			String_t* L_10 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_5, L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			String_t* L_11 = V_2;
			bool L_12 = File_Exists_m6B9BDD8EEB33D744EB0590DD27BC0152FAFBD1FB(L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0043;
			}
		}

IL_0037:
		{
			String_t* L_13 = V_2;
			File_Delete_mBE814E569EAB07FAD140C6DCDB957F1CB8C85DE2(L_13, /*hidden argument*/NULL);
			X509Store_ClearCertificates_m7569D992FB7522DE5AEDC628C55CF39225BF22C3(__this, /*hidden argument*/NULL);
		}

IL_0043:
		{
			IL2CPP_LEAVE(0x4F, FINALLY_0045);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		{
			X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * L_14 = V_0;
			if (!L_14)
			{
				goto IL_004e;
			}
		}

IL_0048:
		{
			X509Certificate_t6859B8914E252B6831D6F59A2A720CD23F7FA7B2 * L_15 = V_0;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_15);
		}

IL_004e:
		{
			IL2CPP_END_FINALLY(69)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004f:
	{
		return;
	}
}
// System.String Mono.Security.X509.X509Store::GetUniqueNameWithSerial(Mono.Security.X509.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueNameWithSerial_mCA113F7098903657F1001CD5C7F0E79DACB11028 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * ___certificate0, const RuntimeMethod* method)
{
	{
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_0 = ___certificate0;
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_1 = ___certificate0;
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(13 /* System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber() */, L_1);
		String_t* L_3 = X509Store_GetUniqueName_m96158212713169D2D267B4A0E7C570C6F7665041(__this, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509Certificate,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueName_m96158212713169D2D267B4A0E7C570C6F7665041 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * ___certificate0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___serial1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_GetUniqueName_m96158212713169D2D267B4A0E7C570C6F7665041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_0 = ___certificate0;
		NullCheck(L_0);
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_1 = X509Certificate_get_Extensions_mE52F13B34388D1C995E7EEB623857126D3F62B92_inline(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = ___serial1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = X509Store_GetUniqueName_mBEC442BC3F2AC338905E3C51578260EC98B9E6A2(__this, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_1;
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = _stringLiteralB41E4AA57D2AD7EB1B29835A1B483E209DCC3C0E;
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_5 = ___certificate0;
		NullCheck(L_5);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = X509Certificate_get_Hash_m98F87F567B93867132207087ABD84184E6343D5A(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0026;
	}

IL_0020:
	{
		V_0 = _stringLiteral03C970B1ADED3B0DB15F235BEAA10FF96753E22B;
	}

IL_0026:
	{
		String_t* L_7 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_8 = V_1;
		String_t* L_9 = X509Store_GetUniqueName_m6DF8037A58E1381373C0C39458B0A707F225DAC3(__this, L_7, L_8, _stringLiteralF4C81EF410616CA8103A6D5A609E5F846445877A, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.String Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509Crl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueName_m612727D7E19DC6AD5764187EEF5179124AB684BF (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * ___crl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_GetUniqueName_m612727D7E19DC6AD5764187EEF5179124AB684BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * L_0 = ___crl0;
		NullCheck(L_0);
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_1 = X509Crl_get_Extensions_m096FCA079A08A0C8D876C095AEFEBD63B260EFD7_inline(L_0, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = X509Store_GetUniqueName_mBEC442BC3F2AC338905E3C51578260EC98B9E6A2(__this, L_1, (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL, /*hidden argument*/NULL);
		V_1 = L_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_1;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		V_0 = _stringLiteralB41E4AA57D2AD7EB1B29835A1B483E209DCC3C0E;
		X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * L_4 = ___crl0;
		NullCheck(L_4);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = X509Crl_get_Hash_m0F6DE36BBCAC0E6B46EC96BD36103B16CBCBA8B8(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0026;
	}

IL_0020:
	{
		V_0 = _stringLiteral03C970B1ADED3B0DB15F235BEAA10FF96753E22B;
	}

IL_0026:
	{
		String_t* L_6 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_1;
		String_t* L_8 = X509Store_GetUniqueName_m6DF8037A58E1381373C0C39458B0A707F225DAC3(__this, L_6, L_7, _stringLiteral810419514AFB3C1841D939548427EE61141CC51B, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Byte[] Mono.Security.X509.X509Store::GetUniqueName(Mono.Security.X509.X509ExtensionCollection,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Store_GetUniqueName_mBEC442BC3F2AC338905E3C51578260EC98B9E6A2 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * ___extensions0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___serial1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_GetUniqueName_mBEC442BC3F2AC338905E3C51578260EC98B9E6A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * V_0 = NULL;
	SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9 * V_1 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_2 = NULL;
	{
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_0 = ___extensions0;
		NullCheck(L_0);
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_1 = X509ExtensionCollection_get_Item_m7E4C7EDDC57517E65EA0998F8D384A87C9EAFDCA(L_0, _stringLiteralC842E9E9BC835B364523756986E087621D98DDA0, /*hidden argument*/NULL);
		V_0 = L_1;
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		return (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
	}

IL_0011:
	{
		X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * L_3 = V_0;
		SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9 * L_4 = (SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9 *)il2cpp_codegen_object_new(SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9_il2cpp_TypeInfo_var);
		SubjectKeyIdentifierExtension__ctor_m120C4D2B72CAB151E06C6C98EEDE84C114106D04(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = ___serial1;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9 * L_6 = V_1;
		NullCheck(L_6);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = SubjectKeyIdentifierExtension_get_Identifier_mFE168340F9598B188718B17F4F7A0BCC2D99997C(L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0022:
	{
		SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9 * L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_9 = SubjectKeyIdentifierExtension_get_Identifier_mFE168340F9598B188718B17F4F7A0BCC2D99997C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = ___serial1;
		NullCheck(L_10);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))));
		V_2 = L_11;
		SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9 * L_12 = V_1;
		NullCheck(L_12);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = SubjectKeyIdentifierExtension_get_Identifier_mFE168340F9598B188718B17F4F7A0BCC2D99997C(L_12, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_2;
		SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9 * L_15 = V_1;
		NullCheck(L_15);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = SubjectKeyIdentifierExtension_get_Identifier_mFE168340F9598B188718B17F4F7A0BCC2D99997C(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_13, 0, (RuntimeArray *)(RuntimeArray *)L_14, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_17 = ___serial1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_2;
		SubjectKeyIdentifierExtension_t96C5F12087433E8CD18C2B5DBB0A89DCC6C3B1C9 * L_19 = V_1;
		NullCheck(L_19);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_20 = SubjectKeyIdentifierExtension_get_Identifier_mFE168340F9598B188718B17F4F7A0BCC2D99997C(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = ___serial1;
		NullCheck(L_21);
		Buffer_BlockCopy_m1F882D595976063718AF6E405664FC761924D353((RuntimeArray *)(RuntimeArray *)L_17, 0, (RuntimeArray *)(RuntimeArray *)L_18, (((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))), (((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_22 = V_2;
		return L_22;
	}
}
// System.String Mono.Security.X509.X509Store::GetUniqueName(System.String,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Store_GetUniqueName_m6DF8037A58E1381373C0C39458B0A707F225DAC3 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___method0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___name1, String_t* ___fileExtension2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_GetUniqueName_m6DF8037A58E1381373C0C39458B0A707F225DAC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		String_t* L_0 = ___method0;
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m53E278FB62B3EAEFAF82890C97219B9B5E2A56C3(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		StringBuilder_t * L_2 = V_0;
		NullCheck(L_2);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_2, _stringLiteral3BC15C8AAE3E4124DD409035F32EA2FD6835EFC9, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = ___name1;
		V_1 = L_3;
		V_2 = 0;
		goto IL_0039;
	}

IL_0019:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_9 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_10 = Byte_ToString_m731FDB27391432D7F14B6769B5D0A3E248803D25((uint8_t*)(&V_3), _stringLiteral9F792B61D0EC544D91E7AFF34E2E99EE3CF2B313, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_8, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0039:
	{
		int32_t L_12 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_0019;
		}
	}
	{
		StringBuilder_t * L_14 = V_0;
		String_t* L_15 = ___fileExtension2;
		NullCheck(L_14);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_14, L_15, /*hidden argument*/NULL);
		StringBuilder_t * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		return L_17;
	}
}
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* X509Store_Load_mC9B8AADD2AE5FE280E4E148E7E9090F98AAA5A76 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_Load_mC9B8AADD2AE5FE280E4E148E7E9090F98AAA5A76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL;
		String_t* L_0 = ___filename0;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_1 = File_OpenRead_m3B2974AB5AA8011E587AC834BE71862BF77C2129(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_2 = V_1;
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
		if ((int64_t)(L_3) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), X509Store_Load_mC9B8AADD2AE5FE280E4E148E7E9090F98AAA5A76_RuntimeMethod_var);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_3)));
		V_0 = L_4;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_5 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))));
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_8 = V_1;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_8);
		IL2CPP_LEAVE(0x34, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_9 = V_1;
			if (!L_9)
			{
				goto IL_0033;
			}
		}

IL_002d:
		{
			FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_10 = V_1;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_10);
		}

IL_0033:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x34, IL_0034)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0034:
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_11 = V_0;
		return L_11;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * X509Store_LoadCertificate_m5B3D55AB0923EC03076530159AF49EF028BE8024 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_LoadCertificate_m5B3D55AB0923EC03076530159AF49EF028BE8024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___filename0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = X509Store_Load_mC9B8AADD2AE5FE280E4E148E7E9090F98AAA5A76(__this, L_0, /*hidden argument*/NULL);
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_2 = (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B *)il2cpp_codegen_object_new(X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B_il2cpp_TypeInfo_var);
		X509Certificate__ctor_mE2BC6649D450A36E902A2D6BEB50C49130411129(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * X509Store_LoadCrl_mC9358FFD818E246CF0F7A82B19A18EACFCFFC78E (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___filename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_LoadCrl_mC9358FFD818E246CF0F7A82B19A18EACFCFFC78E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___filename0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = X509Store_Load_mC9B8AADD2AE5FE280E4E148E7E9090F98AAA5A76(__this, L_0, /*hidden argument*/NULL);
		X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * L_2 = (X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E *)il2cpp_codegen_object_new(X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E_il2cpp_TypeInfo_var);
		X509Crl__ctor_m26E1B657BB5581ED9A7013211C18F45A1A42A230(L_2, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Store_CheckStore_m3B586D9A34CCCE7CE85200097EECD26A964F11B5 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___path0, bool ___throwException1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_CheckStore_m3B586D9A34CCCE7CE85200097EECD26A964F11B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___path0;
			bool L_1 = Directory_Exists_mB77956D89305E16FEFCBDFC55CCC98F03AEE4D84(L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_000c;
			}
		}

IL_0008:
		{
			V_0 = (bool)1;
			goto IL_0026;
		}

IL_000c:
		{
			String_t* L_2 = ___path0;
			Directory_CreateDirectory_m0C9CAA2ECA801C4D07EA35820DA0907402ED4D41(L_2, /*hidden argument*/NULL);
			String_t* L_3 = ___path0;
			bool L_4 = Directory_Exists_mB77956D89305E16FEFCBDFC55CCC98F03AEE4D84(L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			goto IL_0026;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001c;
		throw e;
	}

CATCH_001c:
	{ // begin catch(System.Object)
		{
			bool L_5 = ___throwException1;
			if (!L_5)
			{
				goto IL_0022;
			}
		}

IL_0020:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local, X509Store_CheckStore_m3B586D9A34CCCE7CE85200097EECD26A964F11B5_RuntimeMethod_var);
		}

IL_0022:
		{
			V_0 = (bool)0;
			goto IL_0026;
		}
	} // end catch (depth: 1)

IL_0026:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * X509Store_BuildCertificatesCollection_m38BE87E16F58481AE1CCA740DDE60DA1A09BED55 (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___storeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_BuildCertificatesCollection_m38BE87E16F58481AE1CCA740DDE60DA1A09BED55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_0 = (X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A *)il2cpp_codegen_object_new(X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_mC7C07103044E3520FC785CD5BF0018F27C3132EE(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = __this->get__storePath_0();
		String_t* L_2 = ___storeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		bool L_5 = X509Store_CheckStore_m3B586D9A34CCCE7CE85200097EECD26A964F11B5(__this, L_4, (bool)0, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_6 = V_0;
		return L_6;
	}

IL_001f:
	{
		String_t* L_7 = V_1;
		bool L_8 = __this->get__newFormat_4();
		G_B3_0 = L_7;
		if (L_8)
		{
			G_B4_0 = L_7;
			goto IL_002f;
		}
	}
	{
		G_B5_0 = _stringLiteral81D15B787B58E9D0C9E091EC2E37EECA9333608E;
		G_B5_1 = G_B3_0;
		goto IL_0034;
	}

IL_002f:
	{
		G_B5_0 = _stringLiteralCB6BFAA42C941FDE4E1BC257CC7992DB4AEF007A;
		G_B5_1 = G_B4_0;
	}

IL_0034:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = Directory_GetFiles_m1BD24AE83787D2A8A81B8C40016C25A874AC3B25(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		V_2 = L_9;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = V_2;
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = V_2;
		NullCheck(L_11);
		if (!(((RuntimeArray*)L_11)->max_length))
		{
			goto IL_0073;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_2;
		V_3 = L_12;
		V_4 = 0;
		goto IL_006c;
	}

IL_0048:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_13 = V_3;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		String_t* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = L_16;
	}

IL_004e:
	try
	{ // begin try (depth: 1)
		String_t* L_17 = V_5;
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_18 = X509Store_LoadCertificate_m5B3D55AB0923EC03076530159AF49EF028BE8024(__this, L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_19 = V_0;
		X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * L_20 = V_6;
		NullCheck(L_19);
		X509CertificateCollection_Add_mC060190867D9C5D182236A313FE912DFCCE1F785(L_19, L_20, /*hidden argument*/NULL);
		goto IL_0066;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0063;
		throw e;
	}

CATCH_0063:
	{ // begin catch(System.Object)
		goto IL_0066;
	} // end catch (depth: 1)

IL_0066:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_006c:
	{
		int32_t L_22 = V_4;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = V_3;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))))
		{
			goto IL_0048;
		}
	}

IL_0073:
	{
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_24 = V_0;
		return L_24;
	}
}
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * X509Store_BuildCrlsCollection_m295A43B0ED3469636553A7A04F12A2E6B01AFE1B (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * __this, String_t* ___storeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Store_BuildCrlsCollection_m295A43B0ED3469636553A7A04F12A2E6B01AFE1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = __this->get__storePath_0();
		String_t* L_2 = ___storeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		bool L_5 = X509Store_CheckStore_m3B586D9A34CCCE7CE85200097EECD26A964F11B5(__this, L_4, (bool)0, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_6 = V_0;
		return L_6;
	}

IL_001f:
	{
		String_t* L_7 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = Directory_GetFiles_m1BD24AE83787D2A8A81B8C40016C25A874AC3B25(L_7, _stringLiteralF3D7B63284337204E5B808210EB82D4A589B203A, /*hidden argument*/NULL);
		V_2 = L_8;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = V_2;
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = V_2;
		NullCheck(L_10);
		if (!(((RuntimeArray*)L_10)->max_length))
		{
			goto IL_0064;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = V_2;
		V_3 = L_11;
		V_4 = 0;
		goto IL_005d;
	}

IL_0039:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = V_3;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		String_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = L_15;
	}

IL_003f:
	try
	{ // begin try (depth: 1)
		String_t* L_16 = V_5;
		X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * L_17 = X509Store_LoadCrl_mC9358FFD818E246CF0F7A82B19A18EACFCFFC78E(__this, L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_18 = V_0;
		X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * L_19 = V_6;
		NullCheck(L_18);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_18, L_19);
		goto IL_0057;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0054;
		throw e;
	}

CATCH_0054:
	{ // begin catch(System.Object)
		goto IL_0057;
	} // end catch (depth: 1)

IL_0057:
	{
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_005d:
	{
		int32_t L_21 = V_4;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))))
		{
			goto IL_0039;
		}
	}

IL_0064:
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_23 = V_0;
		return L_23;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509StoreManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509StoreManager__ctor_mA21A94078F899DFE0AF608CEC94A40FB84EBACC4 (X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mono.Security.X509.X509StoreManager::get_CurrentUserPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509StoreManager_get_CurrentUserPath_m9D30739764CC416AFE38521B3259B2199680A807 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_CurrentUserPath_m9D30739764CC416AFE38521B3259B2199680A807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__userPath_0();
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_1 = Environment_GetFolderPath_m536A7D7C29197A7B66B60EA9A78B63C7B0BE9C17(((int32_t)26), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, _stringLiteralD013A00CC3B2473FDE9F7A61FDC9BFE531B1B6A3, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__userPath_0(L_2);
		String_t* L_3 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__userPath_0();
		String_t* L_4 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_3, _stringLiteralC7EB5BBC6C8481A27394D0B29BB892C16FF5D5B1, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__userPath_0(L_4);
	}

IL_0031:
	{
		String_t* L_5 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__userPath_0();
		return L_5;
	}
}
// System.String Mono.Security.X509.X509StoreManager::get_LocalMachinePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509StoreManager_get_LocalMachinePath_m2FFA1E8899F38DDB697EBAAB0C24F90955AC3895 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_LocalMachinePath_m2FFA1E8899F38DDB697EBAAB0C24F90955AC3895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__localMachinePath_1();
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_1 = Environment_GetFolderPath_m536A7D7C29197A7B66B60EA9A78B63C7B0BE9C17(((int32_t)35), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, _stringLiteralD013A00CC3B2473FDE9F7A61FDC9BFE531B1B6A3, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__localMachinePath_1(L_2);
		String_t* L_3 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__localMachinePath_1();
		String_t* L_4 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_3, _stringLiteralC7EB5BBC6C8481A27394D0B29BB892C16FF5D5B1, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__localMachinePath_1(L_4);
	}

IL_0031:
	{
		String_t* L_5 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__localMachinePath_1();
		return L_5;
	}
}
// System.String Mono.Security.X509.X509StoreManager::get_NewCurrentUserPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509StoreManager_get_NewCurrentUserPath_m678C839E06D71B863FE140A93316EEE9E86AF059 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_NewCurrentUserPath_m678C839E06D71B863FE140A93316EEE9E86AF059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__newUserPath_2();
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_1 = Environment_GetFolderPath_m536A7D7C29197A7B66B60EA9A78B63C7B0BE9C17(((int32_t)26), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, _stringLiteralD013A00CC3B2473FDE9F7A61FDC9BFE531B1B6A3, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__newUserPath_2(L_2);
		String_t* L_3 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__newUserPath_2();
		String_t* L_4 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_3, _stringLiteral11F6501687713C72B4CE567FB195C2A8DE8772D8, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__newUserPath_2(L_4);
	}

IL_0031:
	{
		String_t* L_5 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__newUserPath_2();
		return L_5;
	}
}
// System.String Mono.Security.X509.X509StoreManager::get_NewLocalMachinePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509StoreManager_get_NewLocalMachinePath_m3D318947C9AFFCB0ED249953322AAAB45981632C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_NewLocalMachinePath_m3D318947C9AFFCB0ED249953322AAAB45981632C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__newLocalMachinePath_3();
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_1 = Environment_GetFolderPath_m536A7D7C29197A7B66B60EA9A78B63C7B0BE9C17(((int32_t)35), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, _stringLiteralD013A00CC3B2473FDE9F7A61FDC9BFE531B1B6A3, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__newLocalMachinePath_3(L_2);
		String_t* L_3 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__newLocalMachinePath_3();
		String_t* L_4 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_3, _stringLiteral11F6501687713C72B4CE567FB195C2A8DE8772D8, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__newLocalMachinePath_3(L_4);
	}

IL_0031:
	{
		String_t* L_5 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__newLocalMachinePath_3();
		return L_5;
	}
}
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * X509StoreManager_get_CurrentUser_mE6B27212DC2033EEF32C57ED898F9E158875D369 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_CurrentUser_mE6B27212DC2033EEF32C57ED898F9E158875D369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_0 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__userStore_4();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = X509StoreManager_get_CurrentUserPath_m9D30739764CC416AFE38521B3259B2199680A807(/*hidden argument*/NULL);
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_2 = (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 *)il2cpp_codegen_object_new(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325_il2cpp_TypeInfo_var);
		X509Stores__ctor_m5C72B0FDAD6A19C57DBA655B10D28499580C0093(L_2, L_1, (bool)0, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__userStore_4(L_2);
	}

IL_0017:
	{
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_3 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__userStore_4();
		return L_3;
	}
}
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * X509StoreManager_get_LocalMachine_m4742A449590646EDEF7C549270086795B0A5381E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_LocalMachine_m4742A449590646EDEF7C549270086795B0A5381E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_0 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__machineStore_5();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = X509StoreManager_get_LocalMachinePath_m2FFA1E8899F38DDB697EBAAB0C24F90955AC3895(/*hidden argument*/NULL);
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_2 = (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 *)il2cpp_codegen_object_new(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325_il2cpp_TypeInfo_var);
		X509Stores__ctor_m5C72B0FDAD6A19C57DBA655B10D28499580C0093(L_2, L_1, (bool)0, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__machineStore_5(L_2);
	}

IL_0017:
	{
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_3 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__machineStore_5();
		return L_3;
	}
}
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_NewCurrentUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * X509StoreManager_get_NewCurrentUser_m377A61DFA78783CA7C5DA0A1558B463BF79745A3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_NewCurrentUser_m377A61DFA78783CA7C5DA0A1558B463BF79745A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_0 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__newUserStore_6();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = X509StoreManager_get_NewCurrentUserPath_m678C839E06D71B863FE140A93316EEE9E86AF059(/*hidden argument*/NULL);
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_2 = (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 *)il2cpp_codegen_object_new(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325_il2cpp_TypeInfo_var);
		X509Stores__ctor_m5C72B0FDAD6A19C57DBA655B10D28499580C0093(L_2, L_1, (bool)1, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__newUserStore_6(L_2);
	}

IL_0017:
	{
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_3 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__newUserStore_6();
		return L_3;
	}
}
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_NewLocalMachine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * X509StoreManager_get_NewLocalMachine_m2378297F3A92120504BD929503444E886B95C4F3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_NewLocalMachine_m2378297F3A92120504BD929503444E886B95C4F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_0 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__newMachineStore_7();
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = X509StoreManager_get_NewLocalMachinePath_m3D318947C9AFFCB0ED249953322AAAB45981632C(/*hidden argument*/NULL);
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_2 = (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 *)il2cpp_codegen_object_new(X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325_il2cpp_TypeInfo_var);
		X509Stores__ctor_m5C72B0FDAD6A19C57DBA655B10D28499580C0093(L_2, L_1, (bool)1, /*hidden argument*/NULL);
		((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->set__newMachineStore_7(L_2);
	}

IL_0017:
	{
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_3 = ((X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_StaticFields*)il2cpp_codegen_static_fields_for(X509StoreManager_tF633415B27E355BBCE141D30F4956ED858F153B0_il2cpp_TypeInfo_var))->get__newMachineStore_7();
		return L_3;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_IntermediateCACertificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * X509StoreManager_get_IntermediateCACertificates_m329CE1FDB7D5676AC7021EDDF7BF6AAFFCA2321B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_IntermediateCACertificates_m329CE1FDB7D5676AC7021EDDF7BF6AAFFCA2321B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_0 = (X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A *)il2cpp_codegen_object_new(X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_mC7C07103044E3520FC785CD5BF0018F27C3132EE(L_0, /*hidden argument*/NULL);
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_1 = L_0;
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_2 = X509StoreManager_get_CurrentUser_mE6B27212DC2033EEF32C57ED898F9E158875D369(/*hidden argument*/NULL);
		NullCheck(L_2);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_3 = X509Stores_get_IntermediateCA_m54F3793A2A85820EA2F864E872369E3FE7E83A53(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_4 = X509Store_get_Certificates_mDCBF6C2FA25F37AEE61A9319B61A17A950579C35(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		X509CertificateCollection_AddRange_m046B42958BAC6DD2587CA737FC1EA2A2750C26A3(L_1, L_4, /*hidden argument*/NULL);
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_5 = L_1;
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_6 = X509StoreManager_get_LocalMachine_m4742A449590646EDEF7C549270086795B0A5381E(/*hidden argument*/NULL);
		NullCheck(L_6);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_7 = X509Stores_get_IntermediateCA_m54F3793A2A85820EA2F864E872369E3FE7E83A53(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_8 = X509Store_get_Certificates_mDCBF6C2FA25F37AEE61A9319B61A17A950579C35(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509CertificateCollection_AddRange_m046B42958BAC6DD2587CA737FC1EA2A2750C26A3(L_5, L_8, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.ArrayList Mono.Security.X509.X509StoreManager::get_IntermediateCACrls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * X509StoreManager_get_IntermediateCACrls_m466BDCA3837A192A00581F50352C053408E5428A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_IntermediateCACrls_m466BDCA3837A192A00581F50352C053408E5428A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_0, /*hidden argument*/NULL);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_1 = L_0;
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_2 = X509StoreManager_get_CurrentUser_mE6B27212DC2033EEF32C57ED898F9E158875D369(/*hidden argument*/NULL);
		NullCheck(L_2);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_3 = X509Stores_get_IntermediateCA_m54F3793A2A85820EA2F864E872369E3FE7E83A53(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_4 = X509Store_get_Crls_m1E82961E5031C510EDBB616061D50D94B234BE8F(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< RuntimeObject* >::Invoke(30 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_1, L_4);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_5 = L_1;
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_6 = X509StoreManager_get_LocalMachine_m4742A449590646EDEF7C549270086795B0A5381E(/*hidden argument*/NULL);
		NullCheck(L_6);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_7 = X509Stores_get_IntermediateCA_m54F3793A2A85820EA2F864E872369E3FE7E83A53(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_8 = X509Store_get_Crls_m1E82961E5031C510EDBB616061D50D94B234BE8F(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< RuntimeObject* >::Invoke(30 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_5, L_8);
		return L_5;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_TrustedRootCertificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * X509StoreManager_get_TrustedRootCertificates_mBD56BED96B6E692046A8B922AD348327E70C82DA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_TrustedRootCertificates_mBD56BED96B6E692046A8B922AD348327E70C82DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_0 = (X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A *)il2cpp_codegen_object_new(X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_mC7C07103044E3520FC785CD5BF0018F27C3132EE(L_0, /*hidden argument*/NULL);
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_1 = L_0;
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_2 = X509StoreManager_get_CurrentUser_mE6B27212DC2033EEF32C57ED898F9E158875D369(/*hidden argument*/NULL);
		NullCheck(L_2);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_3 = X509Stores_get_TrustedRoot_mB2A929D0D46EB23691AC5316F31D126AEFCFBBC3(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_4 = X509Store_get_Certificates_mDCBF6C2FA25F37AEE61A9319B61A17A950579C35(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		X509CertificateCollection_AddRange_m046B42958BAC6DD2587CA737FC1EA2A2750C26A3(L_1, L_4, /*hidden argument*/NULL);
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_5 = L_1;
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_6 = X509StoreManager_get_LocalMachine_m4742A449590646EDEF7C549270086795B0A5381E(/*hidden argument*/NULL);
		NullCheck(L_6);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_7 = X509Stores_get_TrustedRoot_mB2A929D0D46EB23691AC5316F31D126AEFCFBBC3(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_8 = X509Store_get_Certificates_mDCBF6C2FA25F37AEE61A9319B61A17A950579C35(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509CertificateCollection_AddRange_m046B42958BAC6DD2587CA737FC1EA2A2750C26A3(L_5, L_8, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Collections.ArrayList Mono.Security.X509.X509StoreManager::get_TrustedRootCACrls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * X509StoreManager_get_TrustedRootCACrls_mC5C86497B0EC360AF4C92D7FE668DAF651DEF6BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_TrustedRootCACrls_mC5C86497B0EC360AF4C92D7FE668DAF651DEF6BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_0, /*hidden argument*/NULL);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_1 = L_0;
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_2 = X509StoreManager_get_CurrentUser_mE6B27212DC2033EEF32C57ED898F9E158875D369(/*hidden argument*/NULL);
		NullCheck(L_2);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_3 = X509Stores_get_TrustedRoot_mB2A929D0D46EB23691AC5316F31D126AEFCFBBC3(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_4 = X509Store_get_Crls_m1E82961E5031C510EDBB616061D50D94B234BE8F(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< RuntimeObject* >::Invoke(30 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_1, L_4);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_5 = L_1;
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_6 = X509StoreManager_get_LocalMachine_m4742A449590646EDEF7C549270086795B0A5381E(/*hidden argument*/NULL);
		NullCheck(L_6);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_7 = X509Stores_get_TrustedRoot_mB2A929D0D46EB23691AC5316F31D126AEFCFBBC3(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_8 = X509Store_get_Crls_m1E82961E5031C510EDBB616061D50D94B234BE8F(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< RuntimeObject* >::Invoke(30 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_5, L_8);
		return L_5;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_UntrustedCertificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * X509StoreManager_get_UntrustedCertificates_m5347AE75EB4675F546D39720A1BCA81D4F9D6299 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_UntrustedCertificates_m5347AE75EB4675F546D39720A1BCA81D4F9D6299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_0 = (X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A *)il2cpp_codegen_object_new(X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_mC7C07103044E3520FC785CD5BF0018F27C3132EE(L_0, /*hidden argument*/NULL);
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_1 = L_0;
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_2 = X509StoreManager_get_CurrentUser_mE6B27212DC2033EEF32C57ED898F9E158875D369(/*hidden argument*/NULL);
		NullCheck(L_2);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_3 = X509Stores_get_Untrusted_m8E7A1534EDEA12DC53C74CBFB777F0101153EBA1(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_4 = X509Store_get_Certificates_mDCBF6C2FA25F37AEE61A9319B61A17A950579C35(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		X509CertificateCollection_AddRange_m046B42958BAC6DD2587CA737FC1EA2A2750C26A3(L_1, L_4, /*hidden argument*/NULL);
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_5 = L_1;
		X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * L_6 = X509StoreManager_get_LocalMachine_m4742A449590646EDEF7C549270086795B0A5381E(/*hidden argument*/NULL);
		NullCheck(L_6);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_7 = X509Stores_get_Untrusted_m8E7A1534EDEA12DC53C74CBFB777F0101153EBA1(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		X509CertificateCollection_t423BA1B9FAA983BA745023994C648C6DAC3E5A1A * L_8 = X509Store_get_Certificates_mDCBF6C2FA25F37AEE61A9319B61A17A950579C35(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509CertificateCollection_AddRange_m046B42958BAC6DD2587CA737FC1EA2A2750C26A3(L_5, L_8, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509Stores::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Stores__ctor_m5C72B0FDAD6A19C57DBA655B10D28499580C0093 (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, String_t* ___path0, bool ___newFormat1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___path0;
		__this->set__storePath_0(L_0);
		bool L_1 = ___newFormat1;
		__this->set__newFormat_1(L_1);
		return;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_Personal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * X509Stores_get_Personal_mA6B502D4DC022C5CD5A17AAE2995B859036C7F91 (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_get_Personal_mA6B502D4DC022C5CD5A17AAE2995B859036C7F91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_0 = __this->get__personal_2();
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, _stringLiteral6E92A15D5DD78974F49420D2215A264BB0B93A55, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_4 = (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)il2cpp_codegen_object_new(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB_il2cpp_TypeInfo_var);
		X509Store__ctor_m9B43F02DA2040FD3041270FA71B0F7D9F96D1AEB(L_4, L_3, (bool)0, (bool)0, /*hidden argument*/NULL);
		__this->set__personal_2(L_4);
	}

IL_0027:
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_5 = __this->get__personal_2();
		return L_5;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_OtherPeople()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * X509Stores_get_OtherPeople_mC9CD5B1109CCD1D6C26F2A165E884235CEC24312 (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_get_OtherPeople_mC9CD5B1109CCD1D6C26F2A165E884235CEC24312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_0 = __this->get__other_3();
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, _stringLiteral8B634E3C4021FA5591147E5F0822C6B238D316A4, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_4 = (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)il2cpp_codegen_object_new(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB_il2cpp_TypeInfo_var);
		X509Store__ctor_m9B43F02DA2040FD3041270FA71B0F7D9F96D1AEB(L_4, L_3, (bool)0, (bool)0, /*hidden argument*/NULL);
		__this->set__other_3(L_4);
	}

IL_0027:
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_5 = __this->get__other_3();
		return L_5;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_IntermediateCA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * X509Stores_get_IntermediateCA_m54F3793A2A85820EA2F864E872369E3FE7E83A53 (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_get_IntermediateCA_m54F3793A2A85820EA2F864E872369E3FE7E83A53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_0 = __this->get__intermediate_4();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, _stringLiteral09ACBB7D1DA8AA3DAFF4C1EC8076713606974C64, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4 = __this->get__newFormat_1();
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_5 = (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)il2cpp_codegen_object_new(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB_il2cpp_TypeInfo_var);
		X509Store__ctor_m9B43F02DA2040FD3041270FA71B0F7D9F96D1AEB(L_5, L_3, (bool)1, L_4, /*hidden argument*/NULL);
		__this->set__intermediate_4(L_5);
	}

IL_002c:
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_6 = __this->get__intermediate_4();
		return L_6;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * X509Stores_get_TrustedRoot_mB2A929D0D46EB23691AC5316F31D126AEFCFBBC3 (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_get_TrustedRoot_mB2A929D0D46EB23691AC5316F31D126AEFCFBBC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_0 = __this->get__trusted_5();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, _stringLiteral33A579FFC0DCCBFF15BE01734EA4138EA4E7635C, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4 = __this->get__newFormat_1();
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_5 = (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)il2cpp_codegen_object_new(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB_il2cpp_TypeInfo_var);
		X509Store__ctor_m9B43F02DA2040FD3041270FA71B0F7D9F96D1AEB(L_5, L_3, (bool)1, L_4, /*hidden argument*/NULL);
		__this->set__trusted_5(L_5);
	}

IL_002c:
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_6 = __this->get__trusted_5();
		return L_6;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_Untrusted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * X509Stores_get_Untrusted_m8E7A1534EDEA12DC53C74CBFB777F0101153EBA1 (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_get_Untrusted_m8E7A1534EDEA12DC53C74CBFB777F0101153EBA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_0 = __this->get__untrusted_6();
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, _stringLiteralC118BE4848FE4BC138712E127B11AA021E689F71, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4 = __this->get__newFormat_1();
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_5 = (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)il2cpp_codegen_object_new(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB_il2cpp_TypeInfo_var);
		X509Store__ctor_m9B43F02DA2040FD3041270FA71B0F7D9F96D1AEB(L_5, L_3, (bool)0, L_4, /*hidden argument*/NULL);
		__this->set__untrusted_6(L_5);
	}

IL_002c:
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_6 = __this->get__untrusted_6();
		return L_6;
	}
}
// System.Void Mono.Security.X509.X509Stores::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Stores_Clear_m2D94453058209DBA3247A13FAFA37652C5BDF721 (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, const RuntimeMethod* method)
{
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_0 = __this->get__personal_2();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_1 = __this->get__personal_2();
		NullCheck(L_1);
		X509Store_Clear_m9D96EE12E529DD3EEAD7CCB7AB41103B117DBD93(L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		__this->set__personal_2((X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)NULL);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_2 = __this->get__other_3();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_3 = __this->get__other_3();
		NullCheck(L_3);
		X509Store_Clear_m9D96EE12E529DD3EEAD7CCB7AB41103B117DBD93(L_3, /*hidden argument*/NULL);
	}

IL_002d:
	{
		__this->set__other_3((X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)NULL);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_4 = __this->get__intermediate_4();
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_5 = __this->get__intermediate_4();
		NullCheck(L_5);
		X509Store_Clear_m9D96EE12E529DD3EEAD7CCB7AB41103B117DBD93(L_5, /*hidden argument*/NULL);
	}

IL_0047:
	{
		__this->set__intermediate_4((X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)NULL);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_6 = __this->get__trusted_5();
		if (!L_6)
		{
			goto IL_0061;
		}
	}
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_7 = __this->get__trusted_5();
		NullCheck(L_7);
		X509Store_Clear_m9D96EE12E529DD3EEAD7CCB7AB41103B117DBD93(L_7, /*hidden argument*/NULL);
	}

IL_0061:
	{
		__this->set__trusted_5((X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)NULL);
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_8 = __this->get__untrusted_6();
		if (!L_8)
		{
			goto IL_007b;
		}
	}
	{
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_9 = __this->get__untrusted_6();
		NullCheck(L_9);
		X509Store_Clear_m9D96EE12E529DD3EEAD7CCB7AB41103B117DBD93(L_9, /*hidden argument*/NULL);
	}

IL_007b:
	{
		__this->set__untrusted_6((X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)NULL);
		return;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::Open(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * X509Stores_Open_mFB8D3E95E549891F1F63721EE2421D46D823B2DA (X509Stores_tAFFFBFC92483EF51F87AC66FADBF738C5CFB3325 * __this, String_t* ___storeName0, bool ___create1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_Open_mFB8D3E95E549891F1F63721EE2421D46D823B2DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___storeName0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralC276D29F33E8F3F411A0BAFB43D3E6BD00ECA48E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, X509Stores_Open_mFB8D3E95E549891F1F63721EE2421D46D823B2DA_RuntimeMethod_var);
	}

IL_000e:
	{
		String_t* L_2 = __this->get__storePath_0();
		String_t* L_3 = ___storeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_4 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = ___create1;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7 = Directory_Exists_mB77956D89305E16FEFCBDFC55CCC98F03AEE4D84(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0028;
		}
	}
	{
		return (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)NULL;
	}

IL_0028:
	{
		String_t* L_8 = V_0;
		X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB * L_9 = (X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB *)il2cpp_codegen_object_new(X509Store_tC85724B8ADD30DE263CC790A1C3A45648E9920FB_il2cpp_TypeInfo_var);
		X509Store__ctor_m9B43F02DA2040FD3041270FA71B0F7D9F96D1AEB(L_9, L_8, (bool)1, (bool)0, /*hidden argument*/NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509Stores_Names::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Names__ctor_m35289C792F9D5482D15A21881B27647793EC9A52 (Names_t8F9528D73B2FC36C37A81242CED178D0972B3AA3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X520__ctor_mBA4F77668F0A4722B5AE2848DE11D898AA32A774 (X520_t276CE76F28ED8BFD0E5D02C562989DFC34A2C633 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_AttributeTypeAndValue::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053 (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, String_t* ___oid0, int32_t ___upperBound1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oid0;
		__this->set_oid_0(L_0);
		int32_t L_1 = ___upperBound1;
		__this->set_upperBound_2(L_1);
		__this->set_encoding_3((uint8_t)((int32_t)255));
		return;
	}
}
// System.Void Mono.Security.X509.X520_AttributeTypeAndValue::.ctor(System.String,System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeTypeAndValue__ctor_m6146F7176EDB99F76A07A93D2797F7B98DA1071E (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, String_t* ___oid0, int32_t ___upperBound1, uint8_t ___encoding2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oid0;
		__this->set_oid_0(L_0);
		int32_t L_1 = ___upperBound1;
		__this->set_upperBound_2(L_1);
		uint8_t L_2 = ___encoding2;
		__this->set_encoding_3(L_2);
		return;
	}
}
// System.String Mono.Security.X509.X520_AttributeTypeAndValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AttributeTypeAndValue_get_Value_mE2459C27EF63667088334BA30E81C19FF3F7652B (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_attrValue_1();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X520_AttributeTypeAndValue::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeTypeAndValue_set_Value_m317A65618DA99A9D3D87AE89236ACD7443DE57C0 (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeTypeAndValue_set_Value_m317A65618DA99A9D3D87AE89236ACD7443DE57C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_attrValue_1();
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_1 = __this->get_attrValue_1();
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_upperBound_2();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_4 = Locale_GetText_m67B66557188C94648AA7A23F6A7501BE7D455ADA(_stringLiteral805BC953BA9AFAADC1F3528D02F3CCDA4F21B358, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_upperBound_2();
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(L_4, L_7, /*hidden argument*/NULL);
		FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC * L_9 = (FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC *)il2cpp_codegen_object_new(FormatException_t2808E076CDE4650AF89F55FD78F49290D0EC5BDC_il2cpp_TypeInfo_var);
		FormatException__ctor_m89167FF9884AE20232190FE9286DC50E146A4F14(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, AttributeTypeAndValue_set_Value_m317A65618DA99A9D3D87AE89236ACD7443DE57C0_RuntimeMethod_var);
	}

IL_003b:
	{
		String_t* L_10 = ___value0;
		__this->set_attrValue_1(L_10);
		return;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X520_AttributeTypeAndValue::get_ASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * AttributeTypeAndValue_get_ASN1_mB0259BA95D635E4269261B33656C8AE03899AACB (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, const RuntimeMethod* method)
{
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = AttributeTypeAndValue_GetASN1_m544B52615D7EAC53EA0420138CD8F9CB7CB97154(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X520_AttributeTypeAndValue::GetASN1(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * AttributeTypeAndValue_GetASN1_m90E44F6B17F7B4752065A1C9360F82F3650676F0 (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, uint8_t ___encoding0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AttributeTypeAndValue_GetASN1_m90E44F6B17F7B4752065A1C9360F82F3650676F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * V_1 = NULL;
	{
		uint8_t L_0 = ___encoding0;
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0011;
		}
	}
	{
		uint8_t L_2 = AttributeTypeAndValue_SelectBestEncoding_mD47EF9E4E041FD08D2ED6826FF07EF2AC0FB23FF(__this, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0011:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_3 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_m6DD2E5BD0B12A6BFA95E1822A55B2294B8C237BC(L_3, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_1 = L_3;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_4 = V_1;
		String_t* L_5 = __this->get_oid_0();
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_6 = ASN1Convert_FromOid_mC178E72357986C1AB75A1FFC9DA7687ECA20E462(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B(L_4, L_6, /*hidden argument*/NULL);
		uint8_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)19))))
		{
			goto IL_003c;
		}
	}
	{
		uint8_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)22))))
		{
			goto IL_005c;
		}
	}
	{
		uint8_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)30))))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_009a;
	}

IL_003c:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_10 = V_1;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_11 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		String_t* L_12 = __this->get_attrValue_1();
		NullCheck(L_11);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_13 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_11, L_12);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_14 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_mAB2593792CB61AD1542F4F9D6FB6E8BB96DE007E(L_14, (uint8_t)((int32_t)19), L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B(L_10, L_14, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_005c:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_15 = V_1;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_16 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		String_t* L_17 = __this->get_attrValue_1();
		NullCheck(L_16);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_19 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_mAB2593792CB61AD1542F4F9D6FB6E8BB96DE007E(L_19, (uint8_t)((int32_t)22), L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B(L_15, L_19, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_007c:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_20 = V_1;
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_21 = Encoding_get_BigEndianUnicode_m6CC17642A36943FE038F54729446D7E30D582BDD(/*hidden argument*/NULL);
		String_t* L_22 = __this->get_attrValue_1();
		NullCheck(L_21);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_23 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_21, L_22);
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_24 = (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E *)il2cpp_codegen_object_new(ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E_il2cpp_TypeInfo_var);
		ASN1__ctor_mAB2593792CB61AD1542F4F9D6FB6E8BB96DE007E(L_24, (uint8_t)((int32_t)30), L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		ASN1_Add_mF6ED0416BB021A1C333F99E42F8B17AF8B26639B(L_20, L_24, /*hidden argument*/NULL);
	}

IL_009a:
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_25 = V_1;
		return L_25;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X520_AttributeTypeAndValue::GetASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * AttributeTypeAndValue_GetASN1_m544B52615D7EAC53EA0420138CD8F9CB7CB97154 (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_encoding_3();
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_1 = AttributeTypeAndValue_GetASN1_m90E44F6B17F7B4752065A1C9360F82F3650676F0(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Byte[] Mono.Security.X509.X520_AttributeTypeAndValue::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* AttributeTypeAndValue_GetBytes_mD7E8BE6CB462D6EA61AC3414CE642E8032D4E8E2 (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, uint8_t ___encoding0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___encoding0;
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_1 = AttributeTypeAndValue_GetASN1_m90E44F6B17F7B4752065A1C9360F82F3650676F0(__this, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_1);
		return L_2;
	}
}
// System.Byte[] Mono.Security.X509.X520_AttributeTypeAndValue::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* AttributeTypeAndValue_GetBytes_mE3D1630A86D7A7CDC996AF3CFAF981DBB9C4D66C (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, const RuntimeMethod* method)
{
	{
		ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * L_0 = AttributeTypeAndValue_GetASN1_m544B52615D7EAC53EA0420138CD8F9CB7CB97154(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = VirtFuncInvoker0< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_0);
		return L_1;
	}
}
// System.Byte Mono.Security.X509.X520_AttributeTypeAndValue::SelectBestEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AttributeTypeAndValue_SelectBestEncoding_mD47EF9E4E041FD08D2ED6826FF07EF2AC0FB23FF (AttributeTypeAndValue_tCB3C246D1FCBC2B28E2128874428A1328C9D9A8A * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = __this->get_attrValue_1();
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_000b:
	{
		String_t* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		Il2CppChar L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)64))))
		{
			goto IL_001d;
		}
	}
	{
		Il2CppChar L_5 = V_2;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)95)))))
		{
			goto IL_0020;
		}
	}

IL_001d:
	{
		return (uint8_t)((int32_t)30);
	}

IL_0020:
	{
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0028;
		}
	}
	{
		return (uint8_t)((int32_t)30);
	}

IL_0028:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002c:
	{
		int32_t L_8 = V_1;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000b;
		}
	}
	{
		return (uint8_t)((int32_t)19);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_CommonName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonName__ctor_mC30002FFDC5D5DFFB81C1FF117CE4FA1F24E0FD2 (CommonName_tEAA1DA734A678C5D6FA6757181798BED7F30359F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CommonName__ctor_mC30002FFDC5D5DFFB81C1FF117CE4FA1F24E0FD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053(__this, _stringLiteral2C809D24DC7F35393288F0A442B7E00E8982AA9D, ((int32_t)64), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_CountryName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountryName__ctor_m60ADD661C06486D7A14686423C8A01C9C472095C (CountryName_t8675CFBE35E1541CB37CF24C10E6C869EF3B0D84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CountryName__ctor_m60ADD661C06486D7A14686423C8A01C9C472095C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m6146F7176EDB99F76A07A93D2797F7B98DA1071E(__this, _stringLiteral5C7A91EFCEDF247304D1731FF3B75E425CE37B31, 2, (uint8_t)((int32_t)19), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_DnQualifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnQualifier__ctor_mCE52E86BCCE73B6DFE3E54CBDBB13B658A3DC990 (DnQualifier_tBD6B191969DDAA13FA8E96D356BDC0BE1A831FB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DnQualifier__ctor_mCE52E86BCCE73B6DFE3E54CBDBB13B658A3DC990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m6146F7176EDB99F76A07A93D2797F7B98DA1071E(__this, _stringLiteral513E853432982DFE130969DDB6E9757C8FDBA201, 2, (uint8_t)((int32_t)19), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_DomainComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DomainComponent__ctor_mB5895E696B1787E23CD3EA702B273936E3EABA3B (DomainComponent_tD3C4701F2DC22119E9E25E06CF12E4D8B120C3F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DomainComponent__ctor_mB5895E696B1787E23CD3EA702B273936E3EABA3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m6146F7176EDB99F76A07A93D2797F7B98DA1071E(__this, _stringLiteral91748B1F939750C890C0756623A211BEAB6138CA, ((int32_t)2147483647LL), (uint8_t)((int32_t)22), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_EmailAddress::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmailAddress__ctor_m9EF8048D5A02CA279B9F8669FDEA1E6ECDE1331D (EmailAddress_tB969FD5FB8E80150451C39F65D86BBF04E306B46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EmailAddress__ctor_m9EF8048D5A02CA279B9F8669FDEA1E6ECDE1331D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m6146F7176EDB99F76A07A93D2797F7B98DA1071E(__this, _stringLiteral8DF69D1C4EF702A3DE785DB5E798CC1CE8FEEFAE, ((int32_t)128), (uint8_t)((int32_t)22), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_GivenName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GivenName__ctor_m07C0036741DAE6C4DE5EF3A3EB9FD934B209D43C (GivenName_tCB6893F22D446029B75FE298D1D6E15F0BD40A8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GivenName__ctor_m07C0036741DAE6C4DE5EF3A3EB9FD934B209D43C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053(__this, _stringLiteral02E18DE4C5216B02627EA40BE865A3178791CBA7, ((int32_t)16), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_Initial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initial__ctor_m30BD7B9895EE5C4C99E1E2388CF671983CFD0471 (Initial_tB336018BAFC01A1D5239C1AB24C21E2C3B99D3FE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Initial__ctor_m30BD7B9895EE5C4C99E1E2388CF671983CFD0471_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053(__this, _stringLiteralF4056FB2AB91AFF879F8761A8F0F25B3C5E3F653, 5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_LocalityName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalityName__ctor_mE60344D8B84625D95B6B644A00315746AA7980E9 (LocalityName_t4F4F9AC4FCD56C08B788B58BA653DF6BDFD00DFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalityName__ctor_mE60344D8B84625D95B6B644A00315746AA7980E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053(__this, _stringLiteralB6105E110ED68EA73600D4EEAA37DC8F6CB18335, ((int32_t)128), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_Name::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Name__ctor_m9870AA328B72210906EF9B3F4FE5921EA4C4CBC7 (Name_tDA52F4C52A08230323C5F27CE19F6AE51E628BBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Name__ctor_m9870AA328B72210906EF9B3F4FE5921EA4C4CBC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053(__this, _stringLiteralE542FDE26AABF73571BE27EAF76FD5707293BBED, ((int32_t)32768), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_Oid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m85E2007357E566088B97ACA2EFBA55A0432E97AE (Oid_t21BE127A3ADD51797D9F4369E2904FCDDB378685 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___oid0;
		AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053(__this, L_0, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_OrganizationName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrganizationName__ctor_m285DCE36C40D5C3878D51F4992092AC8E829FB18 (OrganizationName_t0DE9CA8F8329779E696752071DC4CE4D0FAEE461 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrganizationName__ctor_m285DCE36C40D5C3878D51F4992092AC8E829FB18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053(__this, _stringLiteral72F73068315E3A6873135BAAB8A88CB488A78803, ((int32_t)64), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_OrganizationalUnitName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrganizationalUnitName__ctor_m0F81FB3E66D5CB8485565EE238ACA27B95E811D1 (OrganizationalUnitName_t2F837B2D291EC2BAA8FBAECD7DDAE8FB74453EB1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrganizationalUnitName__ctor_m0F81FB3E66D5CB8485565EE238ACA27B95E811D1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053(__this, _stringLiteral7AFEC00C242908DCFA9B158615E0E680F8AA5506, ((int32_t)64), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_SerialNumber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialNumber__ctor_m60AD56CF59A29833F54C64CA3583DB4F8C397D95 (SerialNumber_t2892A2F131DEEE22A2113E5A21964BF165B24450 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerialNumber__ctor_m60AD56CF59A29833F54C64CA3583DB4F8C397D95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m6146F7176EDB99F76A07A93D2797F7B98DA1071E(__this, _stringLiteral52596FD1F8D7EA10A7682B8EBD09CDC8F17478D3, ((int32_t)64), (uint8_t)((int32_t)19), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_StateOrProvinceName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateOrProvinceName__ctor_m9E94BB097B0F5C7AC470C676C9E373EC22274C60 (StateOrProvinceName_tDDC2D6BC4CED251EAABFF6949D27AE2341BFE17A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StateOrProvinceName__ctor_m9E94BB097B0F5C7AC470C676C9E373EC22274C60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053(__this, _stringLiteralDD3B0CAB4F2ACC9D42995B79C553B786890D1014, ((int32_t)128), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_Surname::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surname__ctor_m6CDA4FF7FF0D3CBF98347A11E8987FD737CE9A2F (Surname_t84F1D61A0AB7D02E268164C41F170AD36B0219CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Surname__ctor_m6CDA4FF7FF0D3CBF98347A11E8987FD737CE9A2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053(__this, _stringLiteralBC6D1739033594C8571EAA3DC5D10DF255DC2E04, ((int32_t)32768), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_Title::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Title__ctor_mC56D2B0A8B66843F1D15CFD104DC5131128CA3BF (Title_t2FB1075E3A7E4014327A13E3BCFAF0B33DD51556 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Title__ctor_mC56D2B0A8B66843F1D15CFD104DC5131128CA3BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053(__this, _stringLiteral8F5D2C9CBCE0E20D27CF160D1AAE711EE77BE9A5, ((int32_t)64), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520_UserId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserId__ctor_mB8CEBB9083CD491CD54D4E9D2436E7D209F93862 (UserId_tE203B27097A4BA57E2C00E0E0B2285EF6B4A470C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserId__ctor_mB8CEBB9083CD491CD54D4E9D2436E7D209F93862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_mD5A542F330413500864036E6ADF09EC5D9D15053(__this, _stringLiteral8ADFFDF82EC866E0D56098906F71E699AB3CCCD4, ((int32_t)256), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1346989AC839D85A9E0A211525A6B551974E4862_inline (ASN1_t2B883D12D3493F8395B31D1F0ABD93F43948B27E * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_m_nTag_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* X509Extension_get_Oid_m45C32C3103B9B042C28F16D6A937DF17A97565C4_inline (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_extnOid_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_m988BAFEF41E252919E1448B098E95C910235C8BB_inline (X509Extension_tAFB7F8F9ACD149988C19FC212B12F9FD0A4CF1BF * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_extnCritical_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * X509Certificate_get_Extensions_mE52F13B34388D1C995E7EEB623857126D3F62B92_inline (X509Certificate_t592E2574612B2C554C7B707754AEC3B66A4B476B * __this, const RuntimeMethod* method)
{
	{
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_0 = __this->get_extensions_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * X509Crl_get_Extensions_m096FCA079A08A0C8D876C095AEFEBD63B260EFD7_inline (X509Crl_tF4B10B4B5D4360253680428D92F7EF73409C315E * __this, const RuntimeMethod* method)
{
	{
		X509ExtensionCollection_t64150C4CB662DB5B4A434CC41C612FE573707D19 * L_0 = __this->get_extensions_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
