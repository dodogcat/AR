#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<Unity.Properties.ConversionRegistry/ConverterKey,System.Delegate>
struct Dictionary_2_tAB10456AFFB78DCA8DB1880A6FE6DCE9EB5AA527;
// System.Collections.Generic.List`1<Unity.MARS.Data.Recorded.PlaneEvent>
struct List_1_t7B8EC5BB9D03B36F6783903455513EA67E09F01C;
// System.Collections.Generic.List`1<Unity.MARS.Data.Recorded.PointCloudEvent>
struct List_1_tFB094D37B645DACDF8D283B25366ECB2269EA02E;
// System.Collections.Generic.List`1<Unity.MARS.Data.Recorded.PoseEvent>
struct List_1_t2B1F1A43FE5763EF744FB9C96B7B3FCF3764BADC;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Serialization.Json.PackedBinaryStreamData
struct PackedBinaryStreamData_t23F4FE48FE03F7214AAD21A50BDCE2C8FBD938CB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Properties.ConversionRegistry/ConverterKeyComparer
struct ConverterKeyComparer_t2DDDB49E88C1FAA1A2DE0E3AD0302DC2FE8F2639;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// Unity.Properties.ConversionRegistry
struct ConversionRegistry_tD54BDA6C1641116AFB5954F7D2954F3647200054 
{
	// System.Collections.Generic.Dictionary`2<Unity.Properties.ConversionRegistry/ConverterKey,System.Delegate> Unity.Properties.ConversionRegistry::m_Converters
	Dictionary_2_tAB10456AFFB78DCA8DB1880A6FE6DCE9EB5AA527* ___m_Converters_1;
};
// Native definition for P/Invoke marshalling of Unity.Properties.ConversionRegistry
struct ConversionRegistry_tD54BDA6C1641116AFB5954F7D2954F3647200054_marshaled_pinvoke
{
	Dictionary_2_tAB10456AFFB78DCA8DB1880A6FE6DCE9EB5AA527* ___m_Converters_1;
};
// Native definition for COM marshalling of Unity.Properties.ConversionRegistry
struct ConversionRegistry_tD54BDA6C1641116AFB5954F7D2954F3647200054_marshaled_com
{
	Dictionary_2_tAB10456AFFB78DCA8DB1880A6FE6DCE9EB5AA527* ___m_Converters_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// Unity.Serialization.Json.Handle
struct Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 
{
	// System.Int32 Unity.Serialization.Json.Handle::Index
	int32_t ___Index_0;
	// System.Int32 Unity.Serialization.Json.Handle::Version
	int32_t ___Version_1;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Unity.Serialization.Json.PackedBinaryStream
struct PackedBinaryStream_t133A1222531704BB16370BECAC49D2488AE4C864 
{
	// Unity.Collections.Allocator Unity.Serialization.Json.PackedBinaryStream::m_Label
	int32_t ___m_Label_4;
	// Unity.Serialization.Json.PackedBinaryStreamData* Unity.Serialization.Json.PackedBinaryStream::m_Data
	PackedBinaryStreamData_t23F4FE48FE03F7214AAD21A50BDCE2C8FBD938CB* ___m_Data_5;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording
struct CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 
{
	// System.Collections.Generic.List`1<Unity.MARS.Data.Recorded.PoseEvent> Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording::events
	List_1_t2B1F1A43FE5763EF744FB9C96B7B3FCF3764BADC* ___events_0;
};
// Native definition for P/Invoke marshalling of Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording
struct CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_marshaled_pinvoke
{
	List_1_t2B1F1A43FE5763EF744FB9C96B7B3FCF3764BADC* ___events_0;
};
// Native definition for COM marshalling of Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording
struct CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_marshaled_com
{
	List_1_t2B1F1A43FE5763EF744FB9C96B7B3FCF3764BADC* ___events_0;
};

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording
struct PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 
{
	// System.Collections.Generic.List`1<Unity.MARS.Data.Recorded.PlaneEvent> Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording::events
	List_1_t7B8EC5BB9D03B36F6783903455513EA67E09F01C* ___events_0;
};
// Native definition for P/Invoke marshalling of Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording
struct PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_marshaled_pinvoke
{
	List_1_t7B8EC5BB9D03B36F6783903455513EA67E09F01C* ___events_0;
};
// Native definition for COM marshalling of Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording
struct PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_marshaled_com
{
	List_1_t7B8EC5BB9D03B36F6783903455513EA67E09F01C* ___events_0;
};

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording
struct PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 
{
	// System.Collections.Generic.List`1<Unity.MARS.Data.Recorded.PointCloudEvent> Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording::events
	List_1_tFB094D37B645DACDF8D283B25366ECB2269EA02E* ___events_0;
};
// Native definition for P/Invoke marshalling of Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording
struct PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_marshaled_pinvoke
{
	List_1_tFB094D37B645DACDF8D283B25366ECB2269EA02E* ___events_0;
};
// Native definition for COM marshalling of Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording
struct PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_marshaled_com
{
	List_1_tFB094D37B645DACDF8D283B25366ECB2269EA02E* ___events_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Serialization.Json.SerializedArrayView
struct SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 
{
	// Unity.Serialization.Json.PackedBinaryStream Unity.Serialization.Json.SerializedArrayView::m_Stream
	PackedBinaryStream_t133A1222531704BB16370BECAC49D2488AE4C864 ___m_Stream_0;
	// Unity.Serialization.Json.Handle Unity.Serialization.Json.SerializedArrayView::m_Handle
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle_1;
};

// Unity.Serialization.Json.SerializedObjectView
struct SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 
{
	// Unity.Serialization.Json.PackedBinaryStream Unity.Serialization.Json.SerializedObjectView::m_Stream
	PackedBinaryStream_t133A1222531704BB16370BECAC49D2488AE4C864 ___m_Stream_0;
	// Unity.Serialization.Json.Handle Unity.Serialization.Json.SerializedObjectView::m_Handle
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle_1;
};

// Unity.Serialization.Json.SerializedValueView
struct SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC 
{
	// Unity.Serialization.Json.PackedBinaryStream Unity.Serialization.Json.SerializedValueView::m_Stream
	PackedBinaryStream_t133A1222531704BB16370BECAC49D2488AE4C864 ___m_Stream_0;
	// Unity.Serialization.Json.Handle Unity.Serialization.Json.SerializedValueView::m_Handle
	Handle_t734A63706EDE11FF0429B53F7756AE2873E1F665 ___m_Handle_1;
};

// Unity.Properties.TypeConversion
struct TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17  : public RuntimeObject
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// Unity.Properties.TypeConverter`2<System.UInt64,UnityEngine.Vector3Int>
struct TypeConverter_2_t4E30572F5C7C5810BFB14927891C3A938AD104F0  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>
struct TypeConverter_2_t23E6E89EE274C5610B7D769085FB5CABC8AE6C56  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>
struct TypeConverter_2_t9E981FAEB216FA8FE85D39B0535A6B5B07435D30  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>
struct TypeConverter_2_t6FDB5FBDADBBF801089902DED710ACA4F4D060EB  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<UnityEngine.Vector3,System.Object>
struct TypeConverter_2_t43C18062040B8DFB0384E41E58C755747BCF143E  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<UnityEngine.Vector3Int,System.Object>
struct TypeConverter_2_t1563054B6CEFC23DC2DC19F6F27BD4A623ABD781  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording,System.Object>
struct TypeConverter_2_t03901A3811818D565ED45756F60EB627E50E4C20  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording,System.Object>
struct TypeConverter_2_tAD607BB556EA04BDE8DDEB8662B0D8FAADBA2059  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording,System.Object>
struct TypeConverter_2_t86E743E059E80FD4A872FFED8DF09B63B3562D65  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// Unity.Properties.ConversionRegistry
struct ConversionRegistry_tD54BDA6C1641116AFB5954F7D2954F3647200054_StaticFields
{
	// Unity.Properties.ConversionRegistry/ConverterKeyComparer Unity.Properties.ConversionRegistry::Comparer
	ConverterKeyComparer_t2DDDB49E88C1FAA1A2DE0E3AD0302DC2FE8F2639* ___Comparer_0;
};

// Unity.Properties.ConversionRegistry

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// System.Double

// System.Double

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// Unity.Serialization.Json.Handle

// Unity.Serialization.Json.Handle

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Unity.Serialization.Json.PackedBinaryStream

// Unity.Serialization.Json.PackedBinaryStream

// System.SByte

// System.SByte

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
};

// UnityEngine.Vector3Int

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording

// Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Unity.Serialization.Json.SerializedArrayView

// Unity.Serialization.Json.SerializedArrayView

// Unity.Serialization.Json.SerializedObjectView

// Unity.Serialization.Json.SerializedObjectView

// Unity.Serialization.Json.SerializedValueView

// Unity.Serialization.Json.SerializedValueView

// Unity.Properties.TypeConversion
struct TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields
{
	// Unity.Properties.ConversionRegistry Unity.Properties.TypeConversion::s_GlobalConverters
	ConversionRegistry_tD54BDA6C1641116AFB5954F7D2954F3647200054 ___s_GlobalConverters_0;
};

// Unity.Properties.TypeConversion

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// Unity.Properties.TypeConverter`2<System.UInt64,UnityEngine.Vector3Int>

// Unity.Properties.TypeConverter`2<System.UInt64,UnityEngine.Vector3Int>

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>

// Unity.Properties.TypeConverter`2<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>

// Unity.Properties.TypeConverter`2<UnityEngine.Vector3,System.Object>

// Unity.Properties.TypeConverter`2<UnityEngine.Vector3,System.Object>

// Unity.Properties.TypeConverter`2<UnityEngine.Vector3Int,System.Object>

// Unity.Properties.TypeConverter`2<UnityEngine.Vector3Int,System.Object>

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording,System.Object>

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording,System.Object>

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording,System.Object>

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording,System.Object>

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording,System.Object>

// Unity.Properties.TypeConverter`2<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording,System.Object>

// System.ArgumentException

// System.ArgumentException
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean Unity.Properties.ConversionRegistry::TryGetConverter(System.Type,System.Type,System.Delegate&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929 (ConversionRegistry_tD54BDA6C1641116AFB5954F7D2954F3647200054* __this, Type_t* ___0_source, Type_t* ___1_destination, Delegate_t** ___2_converter, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Type System.Enum::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___0_value, Type_t* ___1_conversionType, const RuntimeMethod* method) ;
// System.Object System.Enum::ToObject(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F (Type_t* ___0_enumType, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean Unity.Properties.TypeConversion::IsNumericType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.UInt64,UnityEngine.Vector3Int>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mEC482A93FC753662E09EC4688720CF4CA9F1F9F0_gshared (uint64_t* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	uint64_t V_6 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		uint64_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t4E30572F5C7C5810BFB14927891C3A938AD104F0*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_8;
		L_8 = ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 (*) (TypeConverter_2_t4E30572F5C7C5810BFB14927891C3A938AD104F0*, uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t4E30572F5C7C5810BFB14927891C3A938AD104F0*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_5 = L_8;
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_10, NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_17 = ___1_destination;
		uint64_t* L_18 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_19;
		L_19 = ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_20 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_19);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_17 = L_20;
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_21;
		L_21 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_21)
		{
			goto IL_012f;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_22;
		L_22 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		Type_t* L_25;
		L_25 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_25, L_28, NULL);
		if (!L_29)
		{
			goto IL_00b4;
		}
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		return (bool)0;
	}

IL_00b4:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
		// if (underlyingType.IsEnum)
		Type_t* L_34 = V_2;
		NullCheck(L_34);
		bool L_35;
		L_35 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_34);
		if (!L_35)
		{
			goto IL_00fb;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_36, NULL);
		V_3 = L_37;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		uint64_t* L_38 = ___0_source;
		uint64_t L_39 = (*(uint64_t*)L_38);
		uint64_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_44 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_00fb:
	{
		// if (source == null)
		goto IL_0111;
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_50 = ___1_destination;
		uint64_t* L_51 = ___0_source;
		uint64_t L_52 = (*(uint64_t*)L_51);
		uint64_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_50 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_012f:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_57;
		L_57 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0184;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		Type_t* L_62;
		L_62 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_62, NULL);
		if (!L_63)
		{
			goto IL_0184;
		}
	}
	{
		// if (null == source)
		goto IL_016c;
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_66 = ___1_destination;
		uint64_t* L_67 = ___0_source;
		uint64_t L_68 = (*(uint64_t*)L_67);
		uint64_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_66 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0184:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_71;
		L_71 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		if (!L_71)
		{
			goto IL_019b;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (uint64_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
		if (!L_75)
		{
			goto IL_019b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_019b:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_76;
		L_76 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		if (!L_76)
		{
			goto IL_021f;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01fb;
		}
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		uint64_t* L_85 = ___0_source;
		uint64_t L_86 = (*(uint64_t*)L_85);
		uint64_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_82 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// }
		goto IL_01f9;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e9;
		}
		throw e;
	}

CATCH_01e9:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028c;
	}// end catch (depth: 1)

IL_01f9:
	{
		// return true;
		return (bool)1;
	}

IL_01fb:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_92, NULL);
		if (!L_93)
		{
			goto IL_021f;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_94 = ___1_destination;
		uint64_t* L_95 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_96;
		L_96 = ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_97 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_96);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		uint64_t* L_98 = ___0_source;
		uint64_t L_99 = (*(uint64_t*)L_98);
		V_6 = L_99;
		uint64_t L_100 = V_6;
		uint64_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		uint64_t L_103 = V_6;
		uint64_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_106 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_107 = V_1;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_106 = L_107;
		// return true;
		return (bool)1;
	}

IL_0250:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		NullCheck(L_109);
		bool L_112;
		L_112 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_109, L_111);
		if (!L_112)
		{
			goto IL_0283;
		}
	}
	{
		// destination = (TDestination) (object) source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_113 = ___1_destination;
		uint64_t* L_114 = ___0_source;
		uint64_t L_115 = (*(uint64_t*)L_114);
		uint64_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_113 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		return (bool)0;
	}

IL_028c:
	{
		// }
		bool L_119 = V_5;
		return L_119;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_m3D6410ACBD8D11BC80FC8D9CCD0F4E791BFE9A70_gshared (uint64_t* ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	uint64_t V_6 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		uint64_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t23E6E89EE274C5610B7D769085FB5CABC8AE6C56*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_8;
		L_8 = ((  CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 (*) (TypeConverter_2_t23E6E89EE274C5610B7D769085FB5CABC8AE6C56*, uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t23E6E89EE274C5610B7D769085FB5CABC8AE6C56*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_5)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_10, NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_17 = ___1_destination;
		uint64_t* L_18 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_19;
		L_19 = ((  CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_20 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_19);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_17 = L_20;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_17)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_21;
		L_21 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_21)
		{
			goto IL_012f;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_22;
		L_22 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		Type_t* L_25;
		L_25 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_25, L_28, NULL);
		if (!L_29)
		{
			goto IL_00b4;
		}
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		return (bool)0;
	}

IL_00b4:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
		// if (underlyingType.IsEnum)
		Type_t* L_34 = V_2;
		NullCheck(L_34);
		bool L_35;
		L_35 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_34);
		if (!L_35)
		{
			goto IL_00fb;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_36, NULL);
		V_3 = L_37;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		uint64_t* L_38 = ___0_source;
		uint64_t L_39 = (*(uint64_t*)L_38);
		uint64_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_44 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_44)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_00fb:
	{
		// if (source == null)
		goto IL_0111;
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_50 = ___1_destination;
		uint64_t* L_51 = ___0_source;
		uint64_t L_52 = (*(uint64_t*)L_51);
		uint64_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_50 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_50)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_012f:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_57;
		L_57 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0184;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		Type_t* L_62;
		L_62 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_62, NULL);
		if (!L_63)
		{
			goto IL_0184;
		}
	}
	{
		// if (null == source)
		goto IL_016c;
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_66 = ___1_destination;
		uint64_t* L_67 = ___0_source;
		uint64_t L_68 = (*(uint64_t*)L_67);
		uint64_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_66 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_66)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0184:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_71;
		L_71 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		if (!L_71)
		{
			goto IL_019b;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (uint64_t, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
		if (!L_75)
		{
			goto IL_019b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_019b:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_76;
		L_76 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		if (!L_76)
		{
			goto IL_021f;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01fb;
		}
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		uint64_t* L_85 = ___0_source;
		uint64_t L_86 = (*(uint64_t*)L_85);
		uint64_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_82 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_82)->___events_0), (void*)NULL);
		// }
		goto IL_01f9;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e9;
		}
		throw e;
	}

CATCH_01e9:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028c;
	}// end catch (depth: 1)

IL_01f9:
	{
		// return true;
		return (bool)1;
	}

IL_01fb:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_92, NULL);
		if (!L_93)
		{
			goto IL_021f;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_94 = ___1_destination;
		uint64_t* L_95 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_96;
		L_96 = ((  CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_97 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_96);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_94)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		uint64_t* L_98 = ___0_source;
		uint64_t L_99 = (*(uint64_t*)L_98);
		V_6 = L_99;
		uint64_t L_100 = V_6;
		uint64_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		uint64_t L_103 = V_6;
		uint64_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_106 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_107 = V_1;
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_106 = L_107;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_106)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0250:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		NullCheck(L_109);
		bool L_112;
		L_112 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_109, L_111);
		if (!L_112)
		{
			goto IL_0283;
		}
	}
	{
		// destination = (TDestination) (object) source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_113 = ___1_destination;
		uint64_t* L_114 = ___0_source;
		uint64_t L_115 = (*(uint64_t*)L_114);
		uint64_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_113 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_113)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		return (bool)0;
	}

IL_028c:
	{
		// }
		bool L_119 = V_5;
		return L_119;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_mBB5FDF344E86A083E560EA564390DD910B812169_gshared (uint64_t* ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	uint64_t V_6 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		uint64_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t9E981FAEB216FA8FE85D39B0535A6B5B07435D30*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_8;
		L_8 = ((  PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 (*) (TypeConverter_2_t9E981FAEB216FA8FE85D39B0535A6B5B07435D30*, uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t9E981FAEB216FA8FE85D39B0535A6B5B07435D30*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_5)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_10, NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_17 = ___1_destination;
		uint64_t* L_18 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_19;
		L_19 = ((  PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_20 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_19);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_17 = L_20;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_17)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_21;
		L_21 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_21)
		{
			goto IL_012f;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_22;
		L_22 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		Type_t* L_25;
		L_25 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_25, L_28, NULL);
		if (!L_29)
		{
			goto IL_00b4;
		}
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		return (bool)0;
	}

IL_00b4:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
		// if (underlyingType.IsEnum)
		Type_t* L_34 = V_2;
		NullCheck(L_34);
		bool L_35;
		L_35 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_34);
		if (!L_35)
		{
			goto IL_00fb;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_36, NULL);
		V_3 = L_37;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		uint64_t* L_38 = ___0_source;
		uint64_t L_39 = (*(uint64_t*)L_38);
		uint64_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_44 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_44)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_00fb:
	{
		// if (source == null)
		goto IL_0111;
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_50 = ___1_destination;
		uint64_t* L_51 = ___0_source;
		uint64_t L_52 = (*(uint64_t*)L_51);
		uint64_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_50 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_50)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_012f:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_57;
		L_57 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0184;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		Type_t* L_62;
		L_62 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_62, NULL);
		if (!L_63)
		{
			goto IL_0184;
		}
	}
	{
		// if (null == source)
		goto IL_016c;
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_66 = ___1_destination;
		uint64_t* L_67 = ___0_source;
		uint64_t L_68 = (*(uint64_t*)L_67);
		uint64_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_66 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_66)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0184:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_71;
		L_71 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		if (!L_71)
		{
			goto IL_019b;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (uint64_t, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
		if (!L_75)
		{
			goto IL_019b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_019b:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_76;
		L_76 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		if (!L_76)
		{
			goto IL_021f;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01fb;
		}
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		uint64_t* L_85 = ___0_source;
		uint64_t L_86 = (*(uint64_t*)L_85);
		uint64_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_82 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_82)->___events_0), (void*)NULL);
		// }
		goto IL_01f9;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e9;
		}
		throw e;
	}

CATCH_01e9:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028c;
	}// end catch (depth: 1)

IL_01f9:
	{
		// return true;
		return (bool)1;
	}

IL_01fb:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_92, NULL);
		if (!L_93)
		{
			goto IL_021f;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_94 = ___1_destination;
		uint64_t* L_95 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_96;
		L_96 = ((  PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_97 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_96);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_94)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		uint64_t* L_98 = ___0_source;
		uint64_t L_99 = (*(uint64_t*)L_98);
		V_6 = L_99;
		uint64_t L_100 = V_6;
		uint64_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		uint64_t L_103 = V_6;
		uint64_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_106 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_107 = V_1;
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_106 = L_107;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_106)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0250:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		NullCheck(L_109);
		bool L_112;
		L_112 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_109, L_111);
		if (!L_112)
		{
			goto IL_0283;
		}
	}
	{
		// destination = (TDestination) (object) source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_113 = ___1_destination;
		uint64_t* L_114 = ___0_source;
		uint64_t L_115 = (*(uint64_t*)L_114);
		uint64_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_113 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_113)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		return (bool)0;
	}

IL_028c:
	{
		// }
		bool L_119 = V_5;
		return L_119;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.UInt64,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_m55AEBBC1C83922D11D6131BE5E330DD247B8E7D8_gshared (uint64_t* ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	uint64_t V_6 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		uint64_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t6FDB5FBDADBBF801089902DED710ACA4F4D060EB*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_8;
		L_8 = ((  PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 (*) (TypeConverter_2_t6FDB5FBDADBBF801089902DED710ACA4F4D060EB*, uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t6FDB5FBDADBBF801089902DED710ACA4F4D060EB*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_5)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_10, NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_17 = ___1_destination;
		uint64_t* L_18 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_19;
		L_19 = ((  PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_20 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_19);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_17 = L_20;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_17)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_21;
		L_21 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_21)
		{
			goto IL_012f;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_22;
		L_22 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		Type_t* L_25;
		L_25 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_25, L_28, NULL);
		if (!L_29)
		{
			goto IL_00b4;
		}
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		return (bool)0;
	}

IL_00b4:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
		// if (underlyingType.IsEnum)
		Type_t* L_34 = V_2;
		NullCheck(L_34);
		bool L_35;
		L_35 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_34);
		if (!L_35)
		{
			goto IL_00fb;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_36, NULL);
		V_3 = L_37;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		uint64_t* L_38 = ___0_source;
		uint64_t L_39 = (*(uint64_t*)L_38);
		uint64_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_44 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_44)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_00fb:
	{
		// if (source == null)
		goto IL_0111;
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_50 = ___1_destination;
		uint64_t* L_51 = ___0_source;
		uint64_t L_52 = (*(uint64_t*)L_51);
		uint64_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_50 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_50)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_012f:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_57;
		L_57 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0184;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		Type_t* L_62;
		L_62 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_62, NULL);
		if (!L_63)
		{
			goto IL_0184;
		}
	}
	{
		// if (null == source)
		goto IL_016c;
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_66 = ___1_destination;
		uint64_t* L_67 = ___0_source;
		uint64_t L_68 = (*(uint64_t*)L_67);
		uint64_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_66 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_66)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0184:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_71;
		L_71 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		if (!L_71)
		{
			goto IL_019b;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		uint64_t* L_72 = ___0_source;
		uint64_t L_73 = (*(uint64_t*)L_72);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (uint64_t, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
		if (!L_75)
		{
			goto IL_019b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_019b:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_76;
		L_76 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		if (!L_76)
		{
			goto IL_021f;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01fb;
		}
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		uint64_t* L_85 = ___0_source;
		uint64_t L_86 = (*(uint64_t*)L_85);
		uint64_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_82 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_82)->___events_0), (void*)NULL);
		// }
		goto IL_01f9;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e9;
		}
		throw e;
	}

CATCH_01e9:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028c;
	}// end catch (depth: 1)

IL_01f9:
	{
		// return true;
		return (bool)1;
	}

IL_01fb:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_92, NULL);
		if (!L_93)
		{
			goto IL_021f;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_94 = ___1_destination;
		uint64_t* L_95 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_96;
		L_96 = ((  PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_97 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_96);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_94)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		uint64_t* L_98 = ___0_source;
		uint64_t L_99 = (*(uint64_t*)L_98);
		V_6 = L_99;
		uint64_t L_100 = V_6;
		uint64_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		uint64_t L_103 = V_6;
		uint64_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_106 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_107 = V_1;
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_106 = L_107;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_106)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0250:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		NullCheck(L_109);
		bool L_112;
		L_112 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_109, L_111);
		if (!L_112)
		{
			goto IL_0283;
		}
	}
	{
		// destination = (TDestination) (object) source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_113 = ___1_destination;
		uint64_t* L_114 = ___0_source;
		uint64_t L_115 = (*(uint64_t*)L_114);
		uint64_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_113 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_113)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		return (bool)0;
	}

IL_028c:
	{
		// }
		bool L_119 = V_5;
		return L_119;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<UnityEngine.Vector3,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisRuntimeObject_m25A1F4F6D1758B85090522002232ABA9A4374A17_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		RuntimeObject** L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t43C18062040B8DFB0384E41E58C755747BCF143E*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (TypeConverter_2_t43C18062040B8DFB0384E41E58C755747BCF143E*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t43C18062040B8DFB0384E41E58C755747BCF143E*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(RuntimeObject**)L_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)L_8);
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_10, NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_17 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = ___0_source;
		RuntimeObject** L_19;
		L_19 = ((  RuntimeObject** (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_20 = (*(RuntimeObject**)L_19);
		*(RuntimeObject**)L_17 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)L_20);
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_21;
		L_21 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_21)
		{
			goto IL_012f;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_22;
		L_22 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		Type_t* L_25;
		L_25 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_25, L_28, NULL);
		if (!L_29)
		{
			goto IL_00b4;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_00b4:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
		// if (underlyingType.IsEnum)
		Type_t* L_34 = V_2;
		NullCheck(L_34);
		bool L_35;
		L_35 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_34);
		if (!L_35)
		{
			goto IL_00fb;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_36, NULL);
		V_3 = L_37;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		RuntimeObject** L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(RuntimeObject**)L_44 = ((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_44, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_00fb:
	{
		// if (source == null)
		goto IL_0111;
	}
	{
		// destination = default;
		RuntimeObject** L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(RuntimeObject*));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		RuntimeObject** L_50 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_51 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(RuntimeObject**)L_50 = ((RuntimeObject*)Castclass((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_50, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_012f:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_57;
		L_57 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0184;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		Type_t* L_62;
		L_62 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_62, NULL);
		if (!L_63)
		{
			goto IL_0184;
		}
	}
	{
		// if (null == source)
		goto IL_016c;
	}
	{
		// destination = default;
		RuntimeObject** L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_66 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_67 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(RuntimeObject**)L_66 = ((RuntimeObject*)Castclass((RuntimeObject*)L_70, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_66, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_70, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_0184:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_71;
		L_71 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		if (!L_71)
		{
			goto IL_019b;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_72 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_72);
		RuntimeObject** L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
		if (!L_75)
		{
			goto IL_019b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_019b:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_76;
		L_76 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		if (!L_76)
		{
			goto IL_021f;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01fb;
		}
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		RuntimeObject** L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_85 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(RuntimeObject**)L_82 = ((RuntimeObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_82, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// }
		goto IL_01f9;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e9;
		}
		throw e;
	}

CATCH_01e9:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		RuntimeObject** L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(RuntimeObject*));
		// return false;
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028c;
	}// end catch (depth: 1)

IL_01f9:
	{
		// return true;
		return (bool)1;
	}

IL_01fb:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_92, NULL);
		if (!L_93)
		{
			goto IL_021f;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_94 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_95 = ___0_source;
		RuntimeObject** L_96;
		L_96 = ((  RuntimeObject** (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_97 = (*(RuntimeObject**)L_96);
		*(RuntimeObject**)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_94, (void*)L_97);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_98 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_98);
		V_6 = L_99;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)));
		// destination = assignable;
		RuntimeObject** L_106 = ___1_destination;
		RuntimeObject* L_107 = V_1;
		*(RuntimeObject**)L_106 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_106, (void*)L_107);
		// return true;
		return (bool)1;
	}

IL_0250:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		NullCheck(L_109);
		bool L_112;
		L_112 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_109, L_111);
		if (!L_112)
		{
			goto IL_0283;
		}
	}
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_113 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_114 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_114);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(RuntimeObject**)L_113 = ((RuntimeObject*)Castclass((RuntimeObject*)L_117, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_113, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_117, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		RuntimeObject** L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_028c:
	{
		// }
		bool L_119 = V_5;
		return L_119;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<UnityEngine.Vector3Int,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_TisRuntimeObject_m80B2579359FEBB5DCC04C3F73014664FBE39FC88_gshared (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_6;
	memset((&V_6), 0, sizeof(V_6));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		RuntimeObject** L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t1563054B6CEFC23DC2DC19F6F27BD4A623ABD781*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (TypeConverter_2_t1563054B6CEFC23DC2DC19F6F27BD4A623ABD781*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t1563054B6CEFC23DC2DC19F6F27BD4A623ABD781*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(RuntimeObject**)L_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)L_8);
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_10, NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_17 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_18 = ___0_source;
		RuntimeObject** L_19;
		L_19 = ((  RuntimeObject** (*) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_20 = (*(RuntimeObject**)L_19);
		*(RuntimeObject**)L_17 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)L_20);
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_21;
		L_21 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_21)
		{
			goto IL_012f;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_22;
		L_22 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		Type_t* L_25;
		L_25 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_25, L_28, NULL);
		if (!L_29)
		{
			goto IL_00b4;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_00b4:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
		// if (underlyingType.IsEnum)
		Type_t* L_34 = V_2;
		NullCheck(L_34);
		bool L_35;
		L_35 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_34);
		if (!L_35)
		{
			goto IL_00fb;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_36, NULL);
		V_3 = L_37;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_38 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_39 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_38);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		RuntimeObject** L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(RuntimeObject**)L_44 = ((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_44, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_00fb:
	{
		// if (source == null)
		goto IL_0111;
	}
	{
		// destination = default;
		RuntimeObject** L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(RuntimeObject*));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		RuntimeObject** L_50 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_51 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_52 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_51);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(RuntimeObject**)L_50 = ((RuntimeObject*)Castclass((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_50, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_012f:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_57;
		L_57 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0184;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		Type_t* L_62;
		L_62 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_62, NULL);
		if (!L_63)
		{
			goto IL_0184;
		}
	}
	{
		// if (null == source)
		goto IL_016c;
	}
	{
		// destination = default;
		RuntimeObject** L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_66 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_67 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_68 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_67);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(RuntimeObject**)L_66 = ((RuntimeObject*)Castclass((RuntimeObject*)L_70, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_66, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_70, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_0184:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_71;
		L_71 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		if (!L_71)
		{
			goto IL_019b;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_72 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_73 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_72);
		RuntimeObject** L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
		if (!L_75)
		{
			goto IL_019b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_019b:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_76;
		L_76 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		if (!L_76)
		{
			goto IL_021f;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01fb;
		}
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		RuntimeObject** L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_85 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_86 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_85);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(RuntimeObject**)L_82 = ((RuntimeObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_82, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// }
		goto IL_01f9;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e9;
		}
		throw e;
	}

CATCH_01e9:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		RuntimeObject** L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(RuntimeObject*));
		// return false;
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028c;
	}// end catch (depth: 1)

IL_01f9:
	{
		// return true;
		return (bool)1;
	}

IL_01fb:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_92, NULL);
		if (!L_93)
		{
			goto IL_021f;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_94 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_95 = ___0_source;
		RuntimeObject** L_96;
		L_96 = ((  RuntimeObject** (*) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_97 = (*(RuntimeObject**)L_96);
		*(RuntimeObject**)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_94, (void*)L_97);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_98 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_99 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_98);
		V_6 = L_99;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_100 = V_6;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_103 = V_6;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)));
		// destination = assignable;
		RuntimeObject** L_106 = ___1_destination;
		RuntimeObject* L_107 = V_1;
		*(RuntimeObject**)L_106 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_106, (void*)L_107);
		// return true;
		return (bool)1;
	}

IL_0250:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		NullCheck(L_109);
		bool L_112;
		L_112 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_109, L_111);
		if (!L_112)
		{
			goto IL_0283;
		}
	}
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_113 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_114 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_115 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_114);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(RuntimeObject**)L_113 = ((RuntimeObject*)Castclass((RuntimeObject*)L_117, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_113, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_117, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		RuntimeObject** L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_028c:
	{
		// }
		bool L_119 = V_5;
		return L_119;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_TisRuntimeObject_m3EF73D2AA5FB9C2405EE9D11EC9ED885DE084E01_gshared (CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 V_6;
	memset((&V_6), 0, sizeof(V_6));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		RuntimeObject** L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t03901A3811818D565ED45756F60EB627E50E4C20*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (TypeConverter_2_t03901A3811818D565ED45756F60EB627E50E4C20*, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t03901A3811818D565ED45756F60EB627E50E4C20*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(RuntimeObject**)L_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)L_8);
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_10, NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_17 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_18 = ___0_source;
		RuntimeObject** L_19;
		L_19 = ((  RuntimeObject** (*) (CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_20 = (*(RuntimeObject**)L_19);
		*(RuntimeObject**)L_17 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)L_20);
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_21;
		L_21 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_21)
		{
			goto IL_012f;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_22;
		L_22 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		Type_t* L_25;
		L_25 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_25, L_28, NULL);
		if (!L_29)
		{
			goto IL_00b4;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_00b4:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
		// if (underlyingType.IsEnum)
		Type_t* L_34 = V_2;
		NullCheck(L_34);
		bool L_35;
		L_35 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_34);
		if (!L_35)
		{
			goto IL_00fb;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_36, NULL);
		V_3 = L_37;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_38 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_39 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_38);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		RuntimeObject** L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(RuntimeObject**)L_44 = ((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_44, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_00fb:
	{
		// if (source == null)
		goto IL_0111;
	}
	{
		// destination = default;
		RuntimeObject** L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(RuntimeObject*));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		RuntimeObject** L_50 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_51 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_52 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_51);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(RuntimeObject**)L_50 = ((RuntimeObject*)Castclass((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_50, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_012f:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_57;
		L_57 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0184;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		Type_t* L_62;
		L_62 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_62, NULL);
		if (!L_63)
		{
			goto IL_0184;
		}
	}
	{
		// if (null == source)
		goto IL_016c;
	}
	{
		// destination = default;
		RuntimeObject** L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_66 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_67 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_68 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_67);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(RuntimeObject**)L_66 = ((RuntimeObject*)Castclass((RuntimeObject*)L_70, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_66, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_70, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_0184:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_71;
		L_71 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		if (!L_71)
		{
			goto IL_019b;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_72 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_73 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_72);
		RuntimeObject** L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
		if (!L_75)
		{
			goto IL_019b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_019b:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_76;
		L_76 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		if (!L_76)
		{
			goto IL_021f;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01fb;
		}
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		RuntimeObject** L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_85 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_86 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_85);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(RuntimeObject**)L_82 = ((RuntimeObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_82, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// }
		goto IL_01f9;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e9;
		}
		throw e;
	}

CATCH_01e9:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		RuntimeObject** L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(RuntimeObject*));
		// return false;
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028c;
	}// end catch (depth: 1)

IL_01f9:
	{
		// return true;
		return (bool)1;
	}

IL_01fb:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_92, NULL);
		if (!L_93)
		{
			goto IL_021f;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_94 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_95 = ___0_source;
		RuntimeObject** L_96;
		L_96 = ((  RuntimeObject** (*) (CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_97 = (*(RuntimeObject**)L_96);
		*(RuntimeObject**)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_94, (void*)L_97);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_98 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_99 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_98);
		V_6 = L_99;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_100 = V_6;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_103 = V_6;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)));
		// destination = assignable;
		RuntimeObject** L_106 = ___1_destination;
		RuntimeObject* L_107 = V_1;
		*(RuntimeObject**)L_106 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_106, (void*)L_107);
		// return true;
		return (bool)1;
	}

IL_0250:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		NullCheck(L_109);
		bool L_112;
		L_112 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_109, L_111);
		if (!L_112)
		{
			goto IL_0283;
		}
	}
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_113 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_114 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_115 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_114);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(RuntimeObject**)L_113 = ((RuntimeObject*)Castclass((RuntimeObject*)L_117, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_113, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_117, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		RuntimeObject** L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_028c:
	{
		// }
		bool L_119 = V_5;
		return L_119;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_TisRuntimeObject_mB99D3DDE1E3827794D3DEF1FA56F612F3A5D3E60_gshared (PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 V_6;
	memset((&V_6), 0, sizeof(V_6));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		RuntimeObject** L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tAD607BB556EA04BDE8DDEB8662B0D8FAADBA2059*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (TypeConverter_2_tAD607BB556EA04BDE8DDEB8662B0D8FAADBA2059*, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tAD607BB556EA04BDE8DDEB8662B0D8FAADBA2059*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(RuntimeObject**)L_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)L_8);
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_10, NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_17 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_18 = ___0_source;
		RuntimeObject** L_19;
		L_19 = ((  RuntimeObject** (*) (PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_20 = (*(RuntimeObject**)L_19);
		*(RuntimeObject**)L_17 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)L_20);
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_21;
		L_21 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_21)
		{
			goto IL_012f;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_22;
		L_22 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		Type_t* L_25;
		L_25 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_25, L_28, NULL);
		if (!L_29)
		{
			goto IL_00b4;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_00b4:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
		// if (underlyingType.IsEnum)
		Type_t* L_34 = V_2;
		NullCheck(L_34);
		bool L_35;
		L_35 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_34);
		if (!L_35)
		{
			goto IL_00fb;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_36, NULL);
		V_3 = L_37;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_38 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_39 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_38);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		RuntimeObject** L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(RuntimeObject**)L_44 = ((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_44, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_00fb:
	{
		// if (source == null)
		goto IL_0111;
	}
	{
		// destination = default;
		RuntimeObject** L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(RuntimeObject*));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		RuntimeObject** L_50 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_51 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_52 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_51);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(RuntimeObject**)L_50 = ((RuntimeObject*)Castclass((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_50, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_012f:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_57;
		L_57 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0184;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		Type_t* L_62;
		L_62 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_62, NULL);
		if (!L_63)
		{
			goto IL_0184;
		}
	}
	{
		// if (null == source)
		goto IL_016c;
	}
	{
		// destination = default;
		RuntimeObject** L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_66 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_67 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_68 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_67);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(RuntimeObject**)L_66 = ((RuntimeObject*)Castclass((RuntimeObject*)L_70, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_66, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_70, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_0184:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_71;
		L_71 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		if (!L_71)
		{
			goto IL_019b;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_72 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_73 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_72);
		RuntimeObject** L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
		if (!L_75)
		{
			goto IL_019b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_019b:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_76;
		L_76 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		if (!L_76)
		{
			goto IL_021f;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01fb;
		}
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		RuntimeObject** L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_85 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_86 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_85);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(RuntimeObject**)L_82 = ((RuntimeObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_82, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// }
		goto IL_01f9;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e9;
		}
		throw e;
	}

CATCH_01e9:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		RuntimeObject** L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(RuntimeObject*));
		// return false;
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028c;
	}// end catch (depth: 1)

IL_01f9:
	{
		// return true;
		return (bool)1;
	}

IL_01fb:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_92, NULL);
		if (!L_93)
		{
			goto IL_021f;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_94 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_95 = ___0_source;
		RuntimeObject** L_96;
		L_96 = ((  RuntimeObject** (*) (PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_97 = (*(RuntimeObject**)L_96);
		*(RuntimeObject**)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_94, (void*)L_97);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_98 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_99 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_98);
		V_6 = L_99;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_100 = V_6;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_103 = V_6;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)));
		// destination = assignable;
		RuntimeObject** L_106 = ___1_destination;
		RuntimeObject* L_107 = V_1;
		*(RuntimeObject**)L_106 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_106, (void*)L_107);
		// return true;
		return (bool)1;
	}

IL_0250:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		NullCheck(L_109);
		bool L_112;
		L_112 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_109, L_111);
		if (!L_112)
		{
			goto IL_0283;
		}
	}
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_113 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_114 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_115 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_114);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(RuntimeObject**)L_113 = ((RuntimeObject*)Castclass((RuntimeObject*)L_117, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_113, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_117, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		RuntimeObject** L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_028c:
	{
		// }
		bool L_119 = V_5;
		return L_119;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvert<Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_TisRuntimeObject_m7DEA726CCD2DD8E637C05C91EB02169070B48675_gshared (PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (s_GlobalConverters.TryGetConverter(typeof(TSource), typeof(TDestination), out var converter))
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = ConversionRegistry_TryGetConverter_mD440DC9009991B8037A75667405A04572A315929((&((TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var))->___s_GlobalConverters_0), L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// destination = ((TypeConverter<TSource, TDestination>) converter)(ref source);
		RuntimeObject** L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t86E743E059E80FD4A872FFED8DF09B63B3562D65*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (TypeConverter_2_t86E743E059E80FD4A872FFED8DF09B63B3562D65*, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t86E743E059E80FD4A872FFED8DF09B63B3562D65*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(RuntimeObject**)L_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)L_8);
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// if (typeof(TSource).IsValueType && typeof(TSource) == typeof(TDestination))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_10, NULL);
		if (!L_11)
		{
			goto IL_0075;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_17 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_18 = ___0_source;
		RuntimeObject** L_19;
		L_19 = ((  RuntimeObject** (*) (PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_20 = (*(RuntimeObject**)L_19);
		*(RuntimeObject**)L_17 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)L_20);
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		// if (TypeTraits<TDestination>.IsNullable)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_21;
		L_21 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (!L_21)
		{
			goto IL_012f;
		}
	}
	{
		// if (TypeTraits<TSource>.IsNullable && Nullable.GetUnderlyingType(typeof(TDestination)) != Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_22;
		L_22 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		Type_t* L_25;
		L_25 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_25, L_28, NULL);
		if (!L_29)
		{
			goto IL_00b4;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_00b4:
	{
		// var underlyingType = Nullable.GetUnderlyingType(typeof(TDestination));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		Type_t* L_33;
		L_33 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_32, NULL);
		V_2 = L_33;
		// if (underlyingType.IsEnum)
		Type_t* L_34 = V_2;
		NullCheck(L_34);
		bool L_35;
		L_35 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_34);
		if (!L_35)
		{
			goto IL_00fb;
		}
	}
	{
		// var enumUnderlyingType = Enum.GetUnderlyingType(underlyingType);
		Type_t* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_36, NULL);
		V_3 = L_37;
		// var value = System.Convert.ChangeType(source, enumUnderlyingType);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_38 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_39 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_38);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		RuntimeObject** L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(RuntimeObject**)L_44 = ((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_44, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_00fb:
	{
		// if (source == null)
		goto IL_0111;
	}
	{
		// destination = default;
		RuntimeObject** L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(RuntimeObject*));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		RuntimeObject** L_50 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_51 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_52 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_51);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(RuntimeObject**)L_50 = ((RuntimeObject*)Castclass((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_50, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_56, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_012f:
	{
		// if (TypeTraits<TSource>.IsNullable && typeof(TDestination) == Nullable.GetUnderlyingType(typeof(TSource)))
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 8));
		bool L_57;
		L_57 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)))(il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_57)
		{
			goto IL_0184;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_60 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_61;
		L_61 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_60, NULL);
		Type_t* L_62;
		L_62 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_61, NULL);
		bool L_63;
		L_63 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_62, NULL);
		if (!L_63)
		{
			goto IL_0184;
		}
	}
	{
		// if (null == source)
		goto IL_016c;
	}
	{
		// destination = default;
		RuntimeObject** L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_66 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_67 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_68 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_67);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(RuntimeObject**)L_66 = ((RuntimeObject*)Castclass((RuntimeObject*)L_70, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_66, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_70, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_0184:
	{
		// if (TypeTraits<TDestination>.IsUnityObject)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_71;
		L_71 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)))(il2cpp_rgctx_method(method->rgctx_data, 11));
		if (!L_71)
		{
			goto IL_019b;
		}
	}
	{
		// if (TryConvertToUnityEngineObject(source, out destination))
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_72 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_73 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_72);
		RuntimeObject** L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
		if (!L_75)
		{
			goto IL_019b;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_019b:
	{
		// if (TypeTraits<TDestination>.IsEnum)
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		bool L_76;
		L_76 = ((  bool (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)))(il2cpp_rgctx_method(method->rgctx_data, 13));
		if (!L_76)
		{
			goto IL_021f;
		}
	}
	{
		// if (typeof(TSource) == typeof(string))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01fb;
		}
	}
	try
	{// begin try (depth: 1)
		// destination = (TDestination) Enum.Parse(typeof(TDestination), (string) (object) source);
		RuntimeObject** L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_85 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_86 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_85);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(RuntimeObject**)L_82 = ((RuntimeObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_82, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_89, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// }
		goto IL_01f9;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01e9;
		}
		throw e;
	}

CATCH_01e9:
	{// begin catch(System.ArgumentException)
		// catch (ArgumentException)
		// destination = default;
		RuntimeObject** L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(RuntimeObject*));
		// return false;
		V_5 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_028c;
	}// end catch (depth: 1)

IL_01f9:
	{
		// return true;
		return (bool)1;
	}

IL_01fb:
	{
		// if (IsNumericType(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = TypeConversion_IsNumericType_mC369570424722B46B53543BE7226E7491A0418C1(L_92, NULL);
		if (!L_93)
		{
			goto IL_021f;
		}
	}
	{
		// destination = UnsafeUtility.As<TSource, TDestination>(ref source);
		RuntimeObject** L_94 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_95 = ___0_source;
		RuntimeObject** L_96;
		L_96 = ((  RuntimeObject** (*) (PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_97 = (*(RuntimeObject**)L_96);
		*(RuntimeObject**)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_94, (void*)L_97);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_98 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_99 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_98);
		V_6 = L_99;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_100 = V_6;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_103 = V_6;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)));
		// destination = assignable;
		RuntimeObject** L_106 = ___1_destination;
		RuntimeObject* L_107 = V_1;
		*(RuntimeObject**)L_106 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_106, (void*)L_107);
		// return true;
		return (bool)1;
	}

IL_0250:
	{
		// if (typeof(TDestination).IsAssignableFrom(typeof(TSource)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_111;
		L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
		NullCheck(L_109);
		bool L_112;
		L_112 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_109, L_111);
		if (!L_112)
		{
			goto IL_0283;
		}
	}
	{
		// destination = (TDestination) (object) source;
		RuntimeObject** L_113 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_114 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_115 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_114);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(RuntimeObject**)L_113 = ((RuntimeObject*)Castclass((RuntimeObject*)L_117, il2cpp_rgctx_data(method->rgctx_data, 10)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_113, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_117, il2cpp_rgctx_data(method->rgctx_data, 10))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		RuntimeObject** L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_028c:
	{
		// }
		bool L_119 = V_5;
		return L_119;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_TisRuntimeObject_m75255D7A743703F5F7CBC03255E3FE913BF7BB7B_gshared (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_11 = ___0_source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		RuntimeObject** L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(RuntimeObject*));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		RuntimeObject** L_21 = ___1_destination;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_22 = ___0_source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(RuntimeObject**)L_21 = ((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)));
		// destination = d;
		RuntimeObject** L_28 = ___1_destination;
		RuntimeObject* L_29 = V_1;
		*(RuntimeObject**)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)L_29);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		RuntimeObject** L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m818155C4DDCDB6851E286ACA47312F9038495686_gshared (bool ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_21 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_21)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_21)->___value_1), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_28 = ___1_destination;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_29 = V_1;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_28)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_28)->___value_1), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m404A34DC02697B1482EC6808F1C3BAA856FFE504_gshared (bool ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	bool V_1 = false;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		bool* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(bool));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		bool* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(bool));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		bool* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(bool*)L_21 = ((*(bool*)((bool*)(bool*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(bool*)((bool*)(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		bool* L_28 = ___1_destination;
		bool L_29 = V_1;
		*(bool*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		bool* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(bool));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9A144DD048A41C605364A346CD8013912C8A167F_gshared (bool ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint8_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint8_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint8_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint8_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint8_t* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint8_t*)L_21 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint8_t* L_28 = ___1_destination;
		uint8_t L_29 = V_1;
		*(uint8_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint8_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint8_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mFF7FD831902185D7780FEB9B68743118D3C6940B_gshared (bool ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Il2CppChar* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Il2CppChar));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Il2CppChar* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Il2CppChar));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Il2CppChar* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Il2CppChar*)L_21 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Il2CppChar* L_28 = ___1_destination;
		Il2CppChar L_29 = V_1;
		*(Il2CppChar*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Il2CppChar* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Il2CppChar));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m5F1EDA90779EBE7E70EDA128ACFD873DC53E2E30_gshared (bool ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_21 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28 = ___1_destination;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_mE77798E41001B4290F0E7E980CFBD37C36071C45_gshared (bool ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_21 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_28 = ___1_destination;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29 = V_1;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m76F2DD68F0ED30A0D24AA4EEF9E5D70595CAB8CD_gshared (bool ___0_source, double* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	double V_1 = 0.0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		double* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(double));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		double* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(double));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		double* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(double*)L_21 = ((*(double*)((double*)(double*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(double*)((double*)(double*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		double* L_28 = ___1_destination;
		double L_29 = V_1;
		*(double*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		double* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(double));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisGuid_t_m58F02AFB1258A10669AF80D50D8059D105ACAD45_gshared (bool ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Guid_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Guid_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Guid_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Guid_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Guid_t* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Guid_t*)L_21 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Guid_t* L_28 = ___1_destination;
		Guid_t L_29 = V_1;
		*(Guid_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Guid_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Guid_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mBB94CADFAFDD18C8FE1A482D9E79B76E549D1441_gshared (bool ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int16_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int16_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int16_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int16_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int16_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int16_t* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int16_t*)L_21 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int16_t* L_28 = ___1_destination;
		int16_t L_29 = V_1;
		*(int16_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int16_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int16_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8EF9E3D8A34F648F280C6394F958FEB765A92CE3_gshared (bool ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int32_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int32_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int32_t*)L_21 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int32_t* L_28 = ___1_destination;
		int32_t L_29 = V_1;
		*(int32_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int32_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m75FB557A652DCB3AAE17102422E418C8891C11A5_gshared (bool ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int32_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int32_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int32_t*)L_21 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int32_t* L_28 = ___1_destination;
		int32_t L_29 = V_1;
		*(int32_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int32_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m44175C9190682536003B43EC1B4768461DF1701B_gshared (bool ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int64_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int64_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int64_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int64_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int64_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int64_t* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int64_t*)L_21 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int64_t* L_28 = ___1_destination;
		int64_t L_29 = V_1;
		*(int64_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int64_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int64_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisRuntimeObject_m6F9CDB63247C732B32ACA5064E223F0507DEB7DE_gshared (bool ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		RuntimeObject** L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(RuntimeObject*));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		RuntimeObject** L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(RuntimeObject**)L_21 = ((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)));
		// destination = d;
		RuntimeObject** L_28 = ___1_destination;
		RuntimeObject* L_29 = V_1;
		*(RuntimeObject**)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)L_29);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		RuntimeObject** L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5DE7DADA78EF426A166A521D0EAA6E355A11B317_gshared (bool ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int8_t V_1 = 0x0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int8_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int8_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int8_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int8_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int8_t* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int8_t*)L_21 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int8_t* L_28 = ___1_destination;
		int8_t L_29 = V_1;
		*(int8_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int8_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int8_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisScene_tA1DC762B79745EB5140F054C884855B922318356_mE17D9146DFED3C6D881E903723CC7BCCC5998EF4_gshared (bool ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_21 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_28 = ___1_destination;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_29 = V_1;
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m002360E8EAC7DD63D51FBFA0D04EA93419613BFF_gshared (bool ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_21 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_28 = ___1_destination;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_29 = V_1;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,Unity.Serialization.Json.SerializedObjectView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561_mA57A9F2B20273680383AD0111C4A06E63D23D7FF_gshared (bool ___0_source, SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_21 = ((*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)((SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)((SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_28 = ___1_destination;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561 L_29 = V_1;
		*(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(SerializedObjectView_t3371CA1D296BF0161DBD7A002673B96D76927561));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m2B588113CE68260E143C8B321A51DDCAA03D9A54_gshared (bool ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_21 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_28 = ___1_destination;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_29 = V_1;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m13752CB4022D52E797CF996D1B55AABED813AAAC_gshared (bool ___0_source, float* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		float* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(float));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		float* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(float));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		float* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(float*)L_21 = ((*(float*)((float*)(float*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(float*)((float*)(float*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		float* L_28 = ___1_destination;
		float L_29 = V_1;
		*(float*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		float* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(float));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m896849BEC7134C426D05DD716C441D07E28491CF_gshared (bool ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_21 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_28 = ___1_destination;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_29 = V_1;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8042469D358DDDBBED4CC924DC254D5980BE31B1_gshared (bool ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint16_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint16_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint16_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint16_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint16_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint16_t* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint16_t*)L_21 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint16_t* L_28 = ___1_destination;
		uint16_t L_29 = V_1;
		*(uint16_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint16_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint16_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m061BD873CDF280DE259BEDA134C357B458CBDCFC_gshared (bool ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint32_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint32_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint32_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint32_t* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint32_t*)L_21 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint32_t* L_28 = ___1_destination;
		uint32_t L_29 = V_1;
		*(uint32_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint32_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m9E5F751BDC629FFED56DF9B0E3EC34FC66686C32_gshared (bool ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint64_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint64_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint64_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint64_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint64_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint64_t* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint64_t*)L_21 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint64_t* L_28 = ___1_destination;
		uint64_t L_29 = V_1;
		*(uint64_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint64_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint64_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m59C9E1B80DBD6B5DFBCF512C02C0D669F7CF5437_gshared (bool ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_21 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,UnityEngine.Vector3Int>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mFF0E61DF69DA3A49F27203D5DC2F94019E69567E_gshared (bool ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_21 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_28 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_29 = V_1;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_mE03C7BA0EB8D3DBA0FF285B8F0147D79C6D42703_gshared (bool ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_21 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_21)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_28 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_29 = V_1;
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_28)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_m23F1F10B866AF39ACD3AF234A51A8F314590A292_gshared (bool ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_21 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_21)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_28 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_29 = V_1;
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_28)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Boolean,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_mE11699C9F32B3CF5C03B209FD47D04518D70AFAF_gshared (bool ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		bool L_11 = ___0_source;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_21 = ___1_destination;
		bool L_22 = ___0_source;
		bool L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_21 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_21)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (bool*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_28 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_29 = V_1;
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_28)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m6AB2D1D24D4BE0F41E1A79330069AA4CDCAF628D_gshared (uint8_t ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_21 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_21)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_21)->___value_1), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_28 = ___1_destination;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_29 = V_1;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_28)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_28)->___value_1), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8A088EC6116EF784E1FBA76461A0C28FA6E2E6C4_gshared (uint8_t ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	bool V_1 = false;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		bool* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(bool));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		bool* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(bool));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		bool* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(bool*)L_21 = ((*(bool*)((bool*)(bool*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(bool*)((bool*)(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		bool* L_28 = ___1_destination;
		bool L_29 = V_1;
		*(bool*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		bool* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(bool));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD5F3623BA07020116EC9EFCFEFCFA2E1FEB4F9DD_gshared (uint8_t ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint8_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint8_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint8_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint8_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint8_t* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint8_t*)L_21 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint8_t* L_28 = ___1_destination;
		uint8_t L_29 = V_1;
		*(uint8_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint8_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint8_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mC3FB503E685FCDDC6454860061490758096C88DF_gshared (uint8_t ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Il2CppChar* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Il2CppChar));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Il2CppChar* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Il2CppChar));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Il2CppChar* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Il2CppChar*)L_21 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Il2CppChar* L_28 = ___1_destination;
		Il2CppChar L_29 = V_1;
		*(Il2CppChar*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Il2CppChar* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Il2CppChar));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m74B99D0B9164971BB5D4F8E5865968377DCAC7A1_gshared (uint8_t ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_21 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28 = ___1_destination;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m3C45CF7DB8746D5DF7A43F171974E6D7836A0CC0_gshared (uint8_t ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_21 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_28 = ___1_destination;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29 = V_1;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m22FAFC97FC246207B9BB33D91361D1A7336740E2_gshared (uint8_t ___0_source, double* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	double V_1 = 0.0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		double* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(double));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		double* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(double));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		double* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(double*)L_21 = ((*(double*)((double*)(double*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(double*)((double*)(double*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		double* L_28 = ___1_destination;
		double L_29 = V_1;
		*(double*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		double* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(double));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisGuid_t_mF195A8D2006341251080B484B873F77FD03E234A_gshared (uint8_t ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Guid_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Guid_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Guid_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Guid_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Guid_t* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Guid_t*)L_21 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Guid_t* L_28 = ___1_destination;
		Guid_t L_29 = V_1;
		*(Guid_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Guid_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Guid_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE25F0BEF153AA7AB384FCDBD37764FE55F1C1BEB_gshared (uint8_t ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int16_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int16_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int16_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int16_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int16_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int16_t* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int16_t*)L_21 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int16_t* L_28 = ___1_destination;
		int16_t L_29 = V_1;
		*(int16_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int16_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int16_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB161722E755193565ECC29591E08177844AE81FB_gshared (uint8_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int32_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int32_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int32_t*)L_21 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int32_t* L_28 = ___1_destination;
		int32_t L_29 = V_1;
		*(int32_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int32_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m903D9E76FCE7E763B8E1CD8314195D98E09E706F_gshared (uint8_t ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int32_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int32_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int32_t*)L_21 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int32_t* L_28 = ___1_destination;
		int32_t L_29 = V_1;
		*(int32_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int32_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m1582D2234A8C8A02688F2352D44B536331F2BBE0_gshared (uint8_t ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int64_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int64_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int64_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int64_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int64_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int64_t* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int64_t*)L_21 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int64_t* L_28 = ___1_destination;
		int64_t L_29 = V_1;
		*(int64_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int64_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int64_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m08EFB2517D3B877A2E93072C5144A4579133A261_gshared (uint8_t ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		RuntimeObject** L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(RuntimeObject*));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		RuntimeObject** L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(RuntimeObject**)L_21 = ((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)));
		// destination = d;
		RuntimeObject** L_28 = ___1_destination;
		RuntimeObject* L_29 = V_1;
		*(RuntimeObject**)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)L_29);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		RuntimeObject** L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mF2464EB7E77FAC5BE41B5BDCDBB679D62621AF17_gshared (uint8_t ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int8_t V_1 = 0x0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int8_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int8_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int8_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int8_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int8_t* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int8_t*)L_21 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int8_t* L_28 = ___1_destination;
		int8_t L_29 = V_1;
		*(int8_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int8_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int8_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisScene_tA1DC762B79745EB5140F054C884855B922318356_mE9BFEC1331A3FA4B23E1B6D4C4DEA127EDDB53AB_gshared (uint8_t ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_21 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_28 = ___1_destination;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_29 = V_1;
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m72A9786AB0F28CD189E3DD6EA768EBFB1B66E2C7_gshared (uint8_t ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_21 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_28 = ___1_destination;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_29 = V_1;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m59E3FD0833F0B1A24A29C036E5F2A9464FC6D3B4_gshared (uint8_t ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_21 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_28 = ___1_destination;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_29 = V_1;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB1D05A688C354553A6F6CFCABBCC42EAEBB54C4E_gshared (uint8_t ___0_source, float* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		float* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(float));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		float* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(float));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		float* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(float*)L_21 = ((*(float*)((float*)(float*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(float*)((float*)(float*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		float* L_28 = ___1_destination;
		float L_29 = V_1;
		*(float*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		float* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(float));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m72BFD2DFD029BB0177086053A295573A067ABBE3_gshared (uint8_t ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_21 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_28 = ___1_destination;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_29 = V_1;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2257AA83B72CC37357D0268182F7D63118935098_gshared (uint8_t ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint16_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint16_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint16_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint16_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint16_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint16_t* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint16_t*)L_21 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint16_t* L_28 = ___1_destination;
		uint16_t L_29 = V_1;
		*(uint16_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint16_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint16_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m1077081ADB99A0A21768CFFEA86A3B00417CC3CB_gshared (uint8_t ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint32_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint32_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint32_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint32_t* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint32_t*)L_21 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint32_t* L_28 = ___1_destination;
		uint32_t L_29 = V_1;
		*(uint32_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint32_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m39327BC18446D5F028C9CF5B2F1BBB0767F5A088_gshared (uint8_t ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint64_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint64_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint64_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint64_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint64_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint64_t* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint64_t*)L_21 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint64_t* L_28 = ___1_destination;
		uint64_t L_29 = V_1;
		*(uint64_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint64_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint64_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mE201D9FE0BCC9F30F621A07A0789078584E718E9_gshared (uint8_t ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_21 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,UnityEngine.Vector3Int>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mA04BFE7336069BD22DF1E3809A14DEF17694E84A_gshared (uint8_t ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_21 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_28 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_29 = V_1;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_m5EB0A080C71E9017A192D82F3148D8808DC1784B_gshared (uint8_t ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_21 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_21)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_28 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_29 = V_1;
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_28)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_m0EA9E58CC104DB548A7B0F8CF2E89156E8D8A966_gshared (uint8_t ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_21 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_21)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_28 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_29 = V_1;
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_28)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Byte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_m78E1744EEAA46C4EE9562A3DCD49F63548D4ED27_gshared (uint8_t ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		uint8_t L_11 = ___0_source;
		uint8_t L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_21 = ___1_destination;
		uint8_t L_22 = ___0_source;
		uint8_t L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_21 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_21)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (uint8_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_28 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_29 = V_1;
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_28)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_mC1F07F09DE21732B581B7A9D42A2C48F309C649F_gshared (Il2CppChar ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_21 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_21)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_21)->___value_1), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_28 = ___1_destination;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_29 = V_1;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_28)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_28)->___value_1), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m324FD22CE249CE4A4FA3749DB75A73DC5F39680D_gshared (Il2CppChar ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	bool V_1 = false;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		bool* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(bool));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		bool* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(bool));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		bool* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(bool*)L_21 = ((*(bool*)((bool*)(bool*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(bool*)((bool*)(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		bool* L_28 = ___1_destination;
		bool L_29 = V_1;
		*(bool*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		bool* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(bool));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5E53C35CE04E8427B14C7121EF205D08886EE9B3_gshared (Il2CppChar ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint8_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint8_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint8_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint8_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint8_t* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint8_t*)L_21 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint8_t* L_28 = ___1_destination;
		uint8_t L_29 = V_1;
		*(uint8_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint8_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint8_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3333BF0DBB888B019A470FB5D51A0684F31FD848_gshared (Il2CppChar ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Il2CppChar* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Il2CppChar));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Il2CppChar* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Il2CppChar));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Il2CppChar* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Il2CppChar*)L_21 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Il2CppChar* L_28 = ___1_destination;
		Il2CppChar L_29 = V_1;
		*(Il2CppChar*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Il2CppChar* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Il2CppChar));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m8219000C2C2116FE850ABFE5AF2B09CFAF7C076B_gshared (Il2CppChar ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_21 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28 = ___1_destination;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m91003FB3601FBA7476C641A31CB737E4E6F2593B_gshared (Il2CppChar ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_21 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_28 = ___1_destination;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29 = V_1;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mBB17D18F6F4A736C48FC472ACE41B27A65BE31C8_gshared (Il2CppChar ___0_source, double* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	double V_1 = 0.0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		double* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(double));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		double* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(double));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		double* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(double*)L_21 = ((*(double*)((double*)(double*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(double*)((double*)(double*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		double* L_28 = ___1_destination;
		double L_29 = V_1;
		*(double*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		double* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(double));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisGuid_t_m78A73097BEF603629199E0BB3FBB42DD2C68393F_gshared (Il2CppChar ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Guid_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Guid_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Guid_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Guid_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Guid_t* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Guid_t*)L_21 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Guid_t* L_28 = ___1_destination;
		Guid_t L_29 = V_1;
		*(Guid_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Guid_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Guid_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m6E5C2E1D9DABA5667E423240795271CDD2827521_gshared (Il2CppChar ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int16_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int16_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int16_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int16_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int16_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int16_t* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int16_t*)L_21 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int16_t* L_28 = ___1_destination;
		int16_t L_29 = V_1;
		*(int16_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int16_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int16_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9F6B1A89EE8FA8D350A116C065AB6705636D5A23_gshared (Il2CppChar ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int32_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int32_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int32_t*)L_21 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int32_t* L_28 = ___1_destination;
		int32_t L_29 = V_1;
		*(int32_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int32_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m5921B11A071939C2956763266A6562816F6CD7BE_gshared (Il2CppChar ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int32_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int32_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int32_t*)L_21 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int32_t* L_28 = ___1_destination;
		int32_t L_29 = V_1;
		*(int32_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int32_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m68DFF6DBCB0F940FF9437EDE92E8E62210E427DF_gshared (Il2CppChar ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int64_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int64_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int64_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int64_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int64_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int64_t* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int64_t*)L_21 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int64_t* L_28 = ___1_destination;
		int64_t L_29 = V_1;
		*(int64_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int64_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int64_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisRuntimeObject_mA54AD7F2C077FC072EC7BDD4F3E4124D8F90F5A4_gshared (Il2CppChar ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		RuntimeObject** L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(RuntimeObject*));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		RuntimeObject** L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(RuntimeObject**)L_21 = ((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)));
		// destination = d;
		RuntimeObject** L_28 = ___1_destination;
		RuntimeObject* L_29 = V_1;
		*(RuntimeObject**)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)L_29);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		RuntimeObject** L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m6DAE18EFE69F797F1B855B3F835D46C074EE7FFA_gshared (Il2CppChar ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int8_t V_1 = 0x0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int8_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int8_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int8_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int8_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int8_t* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int8_t*)L_21 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int8_t* L_28 = ___1_destination;
		int8_t L_29 = V_1;
		*(int8_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int8_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int8_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m3DA2C033309E5337E5685060866C43519F965D83_gshared (Il2CppChar ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_21 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_28 = ___1_destination;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_29 = V_1;
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m927B43D9C8A9C105DF34CD5EF6CF504F1E2AB4DF_gshared (Il2CppChar ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_21 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_28 = ___1_destination;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_29 = V_1;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m87D15371C6BDE1FFD3F01A3AAD8C879236823D96_gshared (Il2CppChar ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_21 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_28 = ___1_destination;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_29 = V_1;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m48172575E70C6133E613D045C5A96D3851DE5CCC_gshared (Il2CppChar ___0_source, float* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		float* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(float));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		float* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(float));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		float* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(float*)L_21 = ((*(float*)((float*)(float*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(float*)((float*)(float*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		float* L_28 = ___1_destination;
		float L_29 = V_1;
		*(float*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		float* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(float));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m7A85F76A9539DC3933DB9A51BC65A2D7E5961337_gshared (Il2CppChar ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_21 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_28 = ___1_destination;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_29 = V_1;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7FB7346A9E5F91396409236175727C3BD8289488_gshared (Il2CppChar ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint16_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint16_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint16_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint16_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint16_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint16_t* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint16_t*)L_21 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint16_t* L_28 = ___1_destination;
		uint16_t L_29 = V_1;
		*(uint16_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint16_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint16_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mA80CC42E52FD4EC6E605BDBFAE5B2EAB2F147011_gshared (Il2CppChar ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint32_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint32_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint32_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint32_t* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint32_t*)L_21 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint32_t* L_28 = ___1_destination;
		uint32_t L_29 = V_1;
		*(uint32_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint32_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mDD6AD81FF723699A80C1BB7B9C464FD7E36E1B7F_gshared (Il2CppChar ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint64_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint64_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint64_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint64_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint64_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint64_t* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint64_t*)L_21 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint64_t* L_28 = ___1_destination;
		uint64_t L_29 = V_1;
		*(uint64_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint64_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint64_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m23AF31D7771A4BC975BEDACAA32C61212C6FCEF9_gshared (Il2CppChar ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_21 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,UnityEngine.Vector3Int>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m8CAC0805004F259A060FD143EEB2E129FD03958A_gshared (Il2CppChar ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_21 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)((Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_28 = ___1_destination;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_29 = V_1;
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_mF2C7A0EF0FC45C578433241D65D71E55FD1D280D_gshared (Il2CppChar ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_21 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_21)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_28 = ___1_destination;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_29 = V_1;
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_28)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_mCA5A1806512865BA8ADB325CD76ED81AE6D5842D_gshared (Il2CppChar ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_21 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_21)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_28 = ___1_destination;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_29 = V_1;
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_28)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Char,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_m756E1A2D1260EC7EC037BB0BF641913BDB428B08_gshared (Il2CppChar ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___0_source;
		Il2CppChar L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_21 = ___1_destination;
		Il2CppChar L_22 = ___0_source;
		Il2CppChar L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_21 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_21)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Il2CppChar*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_28 = ___1_destination;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_29 = V_1;
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_28)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<UnityEngine.Color,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_TisRuntimeObject_m0D1124B7C6A4AE09439478ED402686320EE728E1_gshared (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___0_source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		RuntimeObject** L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(RuntimeObject*));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		RuntimeObject** L_21 = ___1_destination;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ___0_source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(RuntimeObject**)L_21 = ((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)));
		// destination = d;
		RuntimeObject** L_28 = ___1_destination;
		RuntimeObject* L_29 = V_1;
		*(RuntimeObject**)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)L_29);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		RuntimeObject** L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m5EB699CAD5DA9E518F42E35E9779F6B59EE0DAB3_gshared (double ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_21 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_21)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_21)->___value_1), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_28 = ___1_destination;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_29 = V_1;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_28)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_28)->___value_1), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Boolean>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m93B6CFC39F817BAC1645866521C9484187F1DDCC_gshared (double ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	bool V_1 = false;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		bool* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(bool));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		bool* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(bool));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		bool* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(bool*)L_21 = ((*(bool*)((bool*)(bool*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(bool*)((bool*)(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		bool* L_28 = ___1_destination;
		bool L_29 = V_1;
		*(bool*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		bool* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(bool));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Byte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m01CF6EDA6A69810129DD9DB1C970671E33CFE8FF_gshared (double ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint8_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint8_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint8_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint8_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint8_t* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint8_t*)L_21 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint8_t* L_28 = ___1_destination;
		uint8_t L_29 = V_1;
		*(uint8_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint8_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint8_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Char>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m65EF24417B584A6D0235067BC1780A375404CF0B_gshared (double ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Il2CppChar* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Il2CppChar));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Il2CppChar* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Il2CppChar));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Il2CppChar* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Il2CppChar*)L_21 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Il2CppChar* L_28 = ___1_destination;
		Il2CppChar L_29 = V_1;
		*(Il2CppChar*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Il2CppChar* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Il2CppChar));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,UnityEngine.Color>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mB970FD6A68F3691F3299F32115F3C3EF1C50CCCF_gshared (double ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_21 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28 = ___1_destination;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.DateTime>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m31F7F6B3DB820408809AA6051BD4A00D0EAB91F3_gshared (double ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_21 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_28 = ___1_destination;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29 = V_1;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Double>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m25406550071D96C4BDA877D00804C8D8B226B0CC_gshared (double ___0_source, double* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	double V_1 = 0.0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		double* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(double));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		double* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(double));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		double* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(double*)L_21 = ((*(double*)((double*)(double*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(double*)((double*)(double*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		double* L_28 = ___1_destination;
		double L_29 = V_1;
		*(double*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		double* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(double));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Guid>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisGuid_t_m96FF9608FD72A31F349207B7596CF59605243491_gshared (double ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Guid_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Guid_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Guid_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Guid_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Guid_t* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Guid_t*)L_21 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Guid_t* L_28 = ___1_destination;
		Guid_t L_29 = V_1;
		*(Guid_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Guid_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Guid_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Int16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m8A8F1A38466B8B8AA60C8D1E81BE1E0C17698125_gshared (double ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int16_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int16_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int16_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int16_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int16_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int16_t* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int16_t*)L_21 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int16_t* L_28 = ___1_destination;
		int16_t L_29 = V_1;
		*(int16_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int16_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int16_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Int32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8033E9E12E07232F65845933EFFB55AF195314D1_gshared (double ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int32_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int32_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int32_t*)L_21 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int32_t* L_28 = ___1_destination;
		int32_t L_29 = V_1;
		*(int32_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int32_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Int32Enum>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m5F323DD84AC7EF3DCCECB9AE8729BF53B703DE15_gshared (double ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int32_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int32_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int32_t* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int32_t*)L_21 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int32_t* L_28 = ___1_destination;
		int32_t L_29 = V_1;
		*(int32_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int32_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Int64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mB7B8E4B866E4CA4FE3599DA35ED5093BDA630217_gshared (double ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int64_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int64_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int64_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int64_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int64_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int64_t* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int64_t*)L_21 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int64_t* L_28 = ___1_destination;
		int64_t L_29 = V_1;
		*(int64_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int64_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int64_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Object>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisRuntimeObject_m89EC928F28F4A615C57EB00369653B36CC490D0A_gshared (double ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		RuntimeObject** L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		RuntimeObject** L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(RuntimeObject*));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		RuntimeObject** L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(RuntimeObject**)L_21 = ((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_24, il2cpp_rgctx_data(method->rgctx_data, 3))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)));
		// destination = d;
		RuntimeObject** L_28 = ___1_destination;
		RuntimeObject* L_29 = V_1;
		*(RuntimeObject**)L_28 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)L_29);
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		RuntimeObject** L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(RuntimeObject*));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.SByte>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m00BAEC746C84B0070AD806E20A1E0DF086889756_gshared (double ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	int8_t V_1 = 0x0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		int8_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(int8_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		int8_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(int8_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		int8_t* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(int8_t*)L_21 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		int8_t* L_28 = ___1_destination;
		int8_t L_29 = V_1;
		*(int8_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		int8_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int8_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,UnityEngine.SceneManagement.Scene>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m4BDD7F79CB48ED8DD15A996D3BAF81BAC75EC7C8_gshared (double ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_21 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_28 = ___1_destination;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_29 = V_1;
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,Unity.Serialization.Json.SerializedArrayView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m2B36E161985FF627615F78871B2CE80AB0329FF1_gshared (double ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_21 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_28 = ___1_destination;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_29 = V_1;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,Unity.Serialization.Json.SerializedValueView>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_m1F01BC708B8F816B5584D43FA09D8293B74A3E95_gshared (double ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_21 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_28 = ___1_destination;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_29 = V_1;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.Single>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m01ACE2ECC0EBC53EDCF3BB3896BF4D6E2B75F660_gshared (double ___0_source, float* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		float* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(float));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		float* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(float));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		float* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(float*)L_21 = ((*(float*)((float*)(float*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(float*)((float*)(float*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		float* L_28 = ___1_destination;
		float L_29 = V_1;
		*(float*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		float* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(float));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.TimeSpan>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_mE1DFA1B798CFA46EB20883F665BA306DEA24CBE8_gshared (double ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_21 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_28 = ___1_destination;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_29 = V_1;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.UInt16>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m2153F126FBB8BE6410DB21E60FA93CBF374418CF_gshared (double ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint16_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint16_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint16_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint16_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint16_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint16_t* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint16_t*)L_21 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint16_t* L_28 = ___1_destination;
		uint16_t L_29 = V_1;
		*(uint16_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint16_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint16_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.UInt32>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE8C605B725C2CC152365C5F7DF63F7896CC901D8_gshared (double ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint32_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint32_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint32_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint32_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint32_t* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint32_t*)L_21 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint32_t* L_28 = ___1_destination;
		uint32_t L_29 = V_1;
		*(uint32_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint32_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,System.UInt64>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mA968A294DCDDCB3BD192AFBA3602D9AD5CC62615_gshared (double ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	uint64_t V_1 = 0;
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		uint64_t* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(uint64_t));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		uint64_t* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(uint64_t));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		uint64_t* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(uint64_t*)L_21 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		uint64_t* L_28 = ___1_destination;
		uint64_t L_29 = V_1;
		*(uint64_t*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		uint64_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint64_t));
		// return false;
		return (bool)0;
	}
}
// System.Boolean Unity.Properties.TypeConversion::TryConvertToUnityEngineObject<System.Double,UnityEngine.Vector3>(TSource,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m4585B038F61E030D8EDCF1C17DAC296F1AD37860_gshared (double ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!typeof(UnityEngine.Object).IsAssignableFrom(typeof(TDestination)))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (typeof(UnityEngine.Object).IsAssignableFrom(typeof(TSource)) ||
		//     source is UnityEngine.Object)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(23 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		double L_11 = ___0_source;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_12);
		if (!((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_13, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		// if (null == source)
		goto IL_005d;
	}
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return true;
		return (bool)1;
	}

IL_005d:
	{
		// if (typeof(TDestination) == typeof(UnityEngine.Object))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_008b;
		}
	}
	{
		// destination = (TDestination)(object)source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = ___1_destination;
		double L_22 = ___0_source;
		double L_23 = L_22;
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), &L_23);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_21 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_24, il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// return true;
		return (bool)1;
	}

IL_008b:
	{
		// if (TryConvert(ref source, out UnityEngine.Object obj) &&
		//     obj is TDestination d)
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = ((  bool (*) (double*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))((&___0_source), (&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
		if (!L_25)
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26 = V_0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_26, il2cpp_rgctx_data(method->rgctx_data, 3))))
		{
			goto IL_00b3;
		}
	}
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_27 = V_0;
		V_1 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 3))), il2cpp_rgctx_data(method->rgctx_data, 3)))));
		// destination = d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_28 = L_29;
		// return true;
		return (bool)1;
	}

IL_00b3:
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		return (bool)0;
	}
}
