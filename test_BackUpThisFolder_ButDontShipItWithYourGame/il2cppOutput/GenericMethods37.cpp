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
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
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

// Unity.Properties.TypeConverter`2<System.SByte,System.Double>
struct TypeConverter_2_t5E464A227A8876C8A391D23E80463D2067185EF4  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.Guid>
struct TypeConverter_2_t747AFCC15C8BFA0AFDD898F23C52DC7FB88190C4  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.Int16>
struct TypeConverter_2_tCB184328EFADC1A97F95B4C02F3EF5F231C26ED5  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.Int32>
struct TypeConverter_2_t4AFAD8F57C104F4B593167BC91B6276C84452F43  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.Int32Enum>
struct TypeConverter_2_tBDEA0D2EAB5883C37AC04E47794D711FD5AFEA5C  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.Int64>
struct TypeConverter_2_tA7D9C1E13D2E49714E6B797CAFC9253829F52E11  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.Object>
struct TypeConverter_2_t0796610093B1B2B9435DC7DB273363A370036F74  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.SByte>
struct TypeConverter_2_t3591B86A04434345FD54CED27A1301DFDC512C1E  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.SceneManagement.Scene>
struct TypeConverter_2_t4EA6EE534015CAC7773B5148D49E33FB25622E06  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,Unity.Serialization.Json.SerializedArrayView>
struct TypeConverter_2_tD4C11661AA04387742328C034A6F990DF833E5A9  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,Unity.Serialization.Json.SerializedValueView>
struct TypeConverter_2_t6EB0CE6B593215F237A0B6AE3F7C9752FCAB417F  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.Single>
struct TypeConverter_2_tC7E475CB6C405DD84693D1A7B5BC0ECBE2D4A334  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.TimeSpan>
struct TypeConverter_2_tFF4AA23BE7C20D0E3CD55C7D81430FB40020205B  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt16>
struct TypeConverter_2_t618688D9DDDC1EB0CA653CB698DE7231972F0382  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt32>
struct TypeConverter_2_tE508B9EECFB7B37270EBB23182C6E54C202A8395  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt64>
struct TypeConverter_2_tF50276EFDD1F8EF9BAA1F1E4D722FED82EAFE5FF  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.Vector3>
struct TypeConverter_2_t618766BA4D81F46E0502DEC7E1F4FE4DD8AC25E0  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.Vector3Int>
struct TypeConverter_2_t2F4A3C1A7D7C9C0C92C19D96DD3CF5B531E983FF  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>
struct TypeConverter_2_t4C5ED81BA76C2502BD00790AAA2718549C16FD21  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>
struct TypeConverter_2_tFE7AFABD00B904AA25ADB37F22A941AC3A4A359F  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>
struct TypeConverter_2_t970CEAAC5B5EA3FEB7EA2670009731C8218C9BE0  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<UnityEngine.SceneManagement.Scene,System.Object>
struct TypeConverter_2_tC77FB035E70BD97E26F02F9AA59F4E1D765A419A  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<Unity.Serialization.Json.SerializedArrayView,System.Object>
struct TypeConverter_2_tFFEDDFFBE8B3985FD023AB44137659F374DD10D9  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<Unity.Serialization.Json.SerializedValueView,System.Object>
struct TypeConverter_2_tB4FF6E29F2B86A3BCFB88CAF1EA4F41857786BBC  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct TypeConverter_2_t20008B098FA20D7A589D4672F16F4237B1EF3354  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Boolean>
struct TypeConverter_2_tEB581B6C358C54EA7C00721EE7B02514873313F6  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Byte>
struct TypeConverter_2_t762D02D75D71B21C2AF54884486BBE79EAA86DCE  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Char>
struct TypeConverter_2_tD9530EE7101A65BAFF0AA656E79ACA1A7E82A325  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,UnityEngine.Color>
struct TypeConverter_2_t91ED39C0EDB210913A80B9E38C15E7415D8DF403  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.DateTime>
struct TypeConverter_2_t849A4D3D8BF6F3783C44D8EBD16A86B6BE260825  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Double>
struct TypeConverter_2_t86D1370C8BE52DD17536846E74DA56E2E76190A4  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Guid>
struct TypeConverter_2_tAA486F5129D00C68FABFADC4497CD00CCB6F7954  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Int16>
struct TypeConverter_2_tCE315AD0193552C299D20BBF04951C271DA734D0  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Int32>
struct TypeConverter_2_tE62DB5496E948FFCAED81E1D628FDE1F9C93D9B8  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Int32Enum>
struct TypeConverter_2_tF76FD072ABAB6667A0F9E8D30424B66EDA1A67CE  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Int64>
struct TypeConverter_2_t3E57E2286ABBE0BF6CBBA2BB3B7A9BFDCD8266F1  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.Object>
struct TypeConverter_2_t31E3BEF8E698B417057F5E2188267658C86288A7  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,System.SByte>
struct TypeConverter_2_tED6C405F13DEF199C742BE1815F30C090ECF83AA  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,UnityEngine.SceneManagement.Scene>
struct TypeConverter_2_t6BCD683865024E862EF5BC604064667074E5A57C  : public MulticastDelegate_t
{
};

// Unity.Properties.TypeConverter`2<System.Single,Unity.Serialization.Json.SerializedArrayView>
struct TypeConverter_2_tA34443F4B52CCF800690346602008FE363163164  : public MulticastDelegate_t
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

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Unity.Serialization.Json.SerializedArrayView

// Unity.Serialization.Json.SerializedArrayView

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

// Unity.Properties.TypeConverter`2<System.SByte,System.Double>

// Unity.Properties.TypeConverter`2<System.SByte,System.Double>

// Unity.Properties.TypeConverter`2<System.SByte,System.Guid>

// Unity.Properties.TypeConverter`2<System.SByte,System.Guid>

// Unity.Properties.TypeConverter`2<System.SByte,System.Int16>

// Unity.Properties.TypeConverter`2<System.SByte,System.Int16>

// Unity.Properties.TypeConverter`2<System.SByte,System.Int32>

// Unity.Properties.TypeConverter`2<System.SByte,System.Int32>

// Unity.Properties.TypeConverter`2<System.SByte,System.Int32Enum>

// Unity.Properties.TypeConverter`2<System.SByte,System.Int32Enum>

// Unity.Properties.TypeConverter`2<System.SByte,System.Int64>

// Unity.Properties.TypeConverter`2<System.SByte,System.Int64>

// Unity.Properties.TypeConverter`2<System.SByte,System.Object>

// Unity.Properties.TypeConverter`2<System.SByte,System.Object>

// Unity.Properties.TypeConverter`2<System.SByte,System.SByte>

// Unity.Properties.TypeConverter`2<System.SByte,System.SByte>

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.SceneManagement.Scene>

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.SceneManagement.Scene>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.Serialization.Json.SerializedArrayView>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.Serialization.Json.SerializedArrayView>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.Serialization.Json.SerializedValueView>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.Serialization.Json.SerializedValueView>

// Unity.Properties.TypeConverter`2<System.SByte,System.Single>

// Unity.Properties.TypeConverter`2<System.SByte,System.Single>

// Unity.Properties.TypeConverter`2<System.SByte,System.TimeSpan>

// Unity.Properties.TypeConverter`2<System.SByte,System.TimeSpan>

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt16>

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt16>

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt32>

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt32>

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt64>

// Unity.Properties.TypeConverter`2<System.SByte,System.UInt64>

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.Vector3>

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.Vector3>

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.Vector3Int>

// Unity.Properties.TypeConverter`2<System.SByte,UnityEngine.Vector3Int>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>

// Unity.Properties.TypeConverter`2<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>

// Unity.Properties.TypeConverter`2<UnityEngine.SceneManagement.Scene,System.Object>

// Unity.Properties.TypeConverter`2<UnityEngine.SceneManagement.Scene,System.Object>

// Unity.Properties.TypeConverter`2<Unity.Serialization.Json.SerializedArrayView,System.Object>

// Unity.Properties.TypeConverter`2<Unity.Serialization.Json.SerializedArrayView,System.Object>

// Unity.Properties.TypeConverter`2<Unity.Serialization.Json.SerializedValueView,System.Object>

// Unity.Properties.TypeConverter`2<Unity.Serialization.Json.SerializedValueView,System.Object>

// Unity.Properties.TypeConverter`2<System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>

// Unity.Properties.TypeConverter`2<System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>

// Unity.Properties.TypeConverter`2<System.Single,System.Boolean>

// Unity.Properties.TypeConverter`2<System.Single,System.Boolean>

// Unity.Properties.TypeConverter`2<System.Single,System.Byte>

// Unity.Properties.TypeConverter`2<System.Single,System.Byte>

// Unity.Properties.TypeConverter`2<System.Single,System.Char>

// Unity.Properties.TypeConverter`2<System.Single,System.Char>

// Unity.Properties.TypeConverter`2<System.Single,UnityEngine.Color>

// Unity.Properties.TypeConverter`2<System.Single,UnityEngine.Color>

// Unity.Properties.TypeConverter`2<System.Single,System.DateTime>

// Unity.Properties.TypeConverter`2<System.Single,System.DateTime>

// Unity.Properties.TypeConverter`2<System.Single,System.Double>

// Unity.Properties.TypeConverter`2<System.Single,System.Double>

// Unity.Properties.TypeConverter`2<System.Single,System.Guid>

// Unity.Properties.TypeConverter`2<System.Single,System.Guid>

// Unity.Properties.TypeConverter`2<System.Single,System.Int16>

// Unity.Properties.TypeConverter`2<System.Single,System.Int16>

// Unity.Properties.TypeConverter`2<System.Single,System.Int32>

// Unity.Properties.TypeConverter`2<System.Single,System.Int32>

// Unity.Properties.TypeConverter`2<System.Single,System.Int32Enum>

// Unity.Properties.TypeConverter`2<System.Single,System.Int32Enum>

// Unity.Properties.TypeConverter`2<System.Single,System.Int64>

// Unity.Properties.TypeConverter`2<System.Single,System.Int64>

// Unity.Properties.TypeConverter`2<System.Single,System.Object>

// Unity.Properties.TypeConverter`2<System.Single,System.Object>

// Unity.Properties.TypeConverter`2<System.Single,System.SByte>

// Unity.Properties.TypeConverter`2<System.Single,System.SByte>

// Unity.Properties.TypeConverter`2<System.Single,UnityEngine.SceneManagement.Scene>

// Unity.Properties.TypeConverter`2<System.Single,UnityEngine.SceneManagement.Scene>

// Unity.Properties.TypeConverter`2<System.Single,Unity.Serialization.Json.SerializedArrayView>

// Unity.Properties.TypeConverter`2<System.Single,Unity.Serialization.Json.SerializedArrayView>

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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.Double>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_mF1D61B8DEB5B81FDF49E8736E7A54087D96FEB18_gshared (int8_t* ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
	double V_1 = 0.0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		double* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t5E464A227A8876C8A391D23E80463D2067185EF4*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		double L_8;
		L_8 = ((  double (*) (TypeConverter_2_t5E464A227A8876C8A391D23E80463D2067185EF4*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t5E464A227A8876C8A391D23E80463D2067185EF4*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(double*)L_5 = L_8;
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
		double* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		double* L_19;
		L_19 = ((  double* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		double L_20 = (*(double*)L_19);
		*(double*)L_17 = L_20;
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
		double* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(double));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		double* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(double*)L_44 = ((*(double*)((double*)(double*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		double* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(double));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		double* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(double*)L_50 = ((*(double*)((double*)(double*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		double* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(double));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		double* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(double*)L_66 = ((*(double*)((double*)(double*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		double* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, double*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		double* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(double*)L_82 = ((*(double*)((double*)(double*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		double* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(double));
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
		double* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		double* L_96;
		L_96 = ((  double* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		double L_97 = (*(double*)L_96);
		*(double*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(double*)((double*)(double*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		double* L_106 = ___1_destination;
		double L_107 = V_1;
		*(double*)L_106 = L_107;
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
		double* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(double*)L_113 = ((*(double*)((double*)(double*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		double* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(double));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.Guid>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisGuid_t_m317ABD97963E6C40DA5975D6FB2F9A6E9DAE4941_gshared (int8_t* ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		Guid_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t747AFCC15C8BFA0AFDD898F23C52DC7FB88190C4*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Guid_t L_8;
		L_8 = ((  Guid_t (*) (TypeConverter_2_t747AFCC15C8BFA0AFDD898F23C52DC7FB88190C4*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t747AFCC15C8BFA0AFDD898F23C52DC7FB88190C4*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Guid_t*)L_5 = L_8;
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
		Guid_t* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		Guid_t* L_19;
		L_19 = ((  Guid_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		Guid_t L_20 = (*(Guid_t*)L_19);
		*(Guid_t*)L_17 = L_20;
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
		Guid_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Guid_t));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Guid_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(Guid_t*)L_44 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Guid_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(Guid_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Guid_t* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(Guid_t*)L_50 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Guid_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(Guid_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		Guid_t* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(Guid_t*)L_66 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		Guid_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, Guid_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Guid_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Guid_t*)L_82 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Guid_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(Guid_t));
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
		Guid_t* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		Guid_t* L_96;
		L_96 = ((  Guid_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		Guid_t L_97 = (*(Guid_t*)L_96);
		*(Guid_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		Guid_t* L_106 = ___1_destination;
		Guid_t L_107 = V_1;
		*(Guid_t*)L_106 = L_107;
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
		Guid_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(Guid_t*)L_113 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		Guid_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(Guid_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.Int16>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0BF68E92F3303569F3D014D2AD8F6ECC0E7272B9_gshared (int8_t* ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
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
	int16_t V_1 = 0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		int16_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tCB184328EFADC1A97F95B4C02F3EF5F231C26ED5*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int16_t L_8;
		L_8 = ((  int16_t (*) (TypeConverter_2_tCB184328EFADC1A97F95B4C02F3EF5F231C26ED5*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tCB184328EFADC1A97F95B4C02F3EF5F231C26ED5*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int16_t*)L_5 = L_8;
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
		int16_t* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		int16_t* L_19;
		L_19 = ((  int16_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int16_t L_20 = (*(int16_t*)L_19);
		*(int16_t*)L_17 = L_20;
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
		int16_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int16_t));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int16_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(int16_t*)L_44 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int16_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(int16_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int16_t* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(int16_t*)L_50 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int16_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(int16_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		int16_t* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(int16_t*)L_66 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		int16_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, int16_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int16_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int16_t*)L_82 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int16_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(int16_t));
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
		int16_t* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		int16_t* L_96;
		L_96 = ((  int16_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		int16_t L_97 = (*(int16_t*)L_96);
		*(int16_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		int16_t* L_106 = ___1_destination;
		int16_t L_107 = V_1;
		*(int16_t*)L_106 = L_107;
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
		int16_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(int16_t*)L_113 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		int16_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(int16_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.Int32>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA310EEED7903ED7892A10D49BE43F83A8A210094_gshared (int8_t* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		int32_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t4AFAD8F57C104F4B593167BC91B6276C84452F43*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int32_t L_8;
		L_8 = ((  int32_t (*) (TypeConverter_2_t4AFAD8F57C104F4B593167BC91B6276C84452F43*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t4AFAD8F57C104F4B593167BC91B6276C84452F43*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_5 = L_8;
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
		int32_t* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		int32_t* L_19;
		L_19 = ((  int32_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20 = (*(int32_t*)L_19);
		*(int32_t*)L_17 = L_20;
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
		int32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int32_t));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int32_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(int32_t*)L_44 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(int32_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int32_t* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(int32_t*)L_50 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(int32_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		int32_t* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(int32_t*)L_66 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		int32_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int32_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int32_t*)L_82 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(int32_t));
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
		int32_t* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		int32_t* L_96;
		L_96 = ((  int32_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_97 = (*(int32_t*)L_96);
		*(int32_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		int32_t* L_106 = ___1_destination;
		int32_t L_107 = V_1;
		*(int32_t*)L_106 = L_107;
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
		int32_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(int32_t*)L_113 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		int32_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(int32_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.Int32Enum>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2BC14B7F78C1B9F4895B1ED0DB71978ABE44930D_gshared (int8_t* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		int32_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tBDEA0D2EAB5883C37AC04E47794D711FD5AFEA5C*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int32_t L_8;
		L_8 = ((  int32_t (*) (TypeConverter_2_tBDEA0D2EAB5883C37AC04E47794D711FD5AFEA5C*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tBDEA0D2EAB5883C37AC04E47794D711FD5AFEA5C*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_5 = L_8;
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
		int32_t* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		int32_t* L_19;
		L_19 = ((  int32_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20 = (*(int32_t*)L_19);
		*(int32_t*)L_17 = L_20;
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
		int32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int32_t));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int32_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(int32_t*)L_44 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(int32_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int32_t* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(int32_t*)L_50 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(int32_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		int32_t* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(int32_t*)L_66 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		int32_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int32_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int32_t*)L_82 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(int32_t));
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
		int32_t* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		int32_t* L_96;
		L_96 = ((  int32_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_97 = (*(int32_t*)L_96);
		*(int32_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		int32_t* L_106 = ___1_destination;
		int32_t L_107 = V_1;
		*(int32_t*)L_106 = L_107;
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
		int32_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(int32_t*)L_113 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		int32_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(int32_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.Int64>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mADC4301D0B943403C43D1BF1DACC1517D942A5CC_gshared (int8_t* ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
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
	int64_t V_1 = 0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		int64_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tA7D9C1E13D2E49714E6B797CAFC9253829F52E11*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int64_t L_8;
		L_8 = ((  int64_t (*) (TypeConverter_2_tA7D9C1E13D2E49714E6B797CAFC9253829F52E11*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tA7D9C1E13D2E49714E6B797CAFC9253829F52E11*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int64_t*)L_5 = L_8;
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
		int64_t* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		int64_t* L_19;
		L_19 = ((  int64_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int64_t L_20 = (*(int64_t*)L_19);
		*(int64_t*)L_17 = L_20;
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
		int64_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int64_t));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int64_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(int64_t*)L_44 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int64_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(int64_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int64_t* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(int64_t*)L_50 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int64_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(int64_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		int64_t* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(int64_t*)L_66 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		int64_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, int64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int64_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int64_t*)L_82 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int64_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(int64_t));
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
		int64_t* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		int64_t* L_96;
		L_96 = ((  int64_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		int64_t L_97 = (*(int64_t*)L_96);
		*(int64_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		int64_t* L_106 = ___1_destination;
		int64_t L_107 = V_1;
		*(int64_t*)L_106 = L_107;
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
		int64_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(int64_t*)L_113 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		int64_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(int64_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisRuntimeObject_m3C90F85B68D6A7ED832305DC8450B2F2DDD069F8_gshared (int8_t* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
	int8_t V_6 = 0x0;
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
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t0796610093B1B2B9435DC7DB273363A370036F74*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (TypeConverter_2_t0796610093B1B2B9435DC7DB273363A370036F74*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t0796610093B1B2B9435DC7DB273363A370036F74*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		int8_t* L_18 = ___0_source;
		RuntimeObject** L_19;
		L_19 = ((  RuntimeObject** (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
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
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
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
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		RuntimeObject** L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
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
		int8_t* L_95 = ___0_source;
		RuntimeObject** L_96;
		L_96 = ((  RuntimeObject** (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_97 = (*(RuntimeObject**)L_96);
		*(RuntimeObject**)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_94, (void*)L_97);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
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
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.SByte>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m89D08AC60E76F21A3EC330CBBC21A1B4963D95A3_gshared (int8_t* ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
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
	int8_t V_1 = 0x0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		int8_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t3591B86A04434345FD54CED27A1301DFDC512C1E*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int8_t L_8;
		L_8 = ((  int8_t (*) (TypeConverter_2_t3591B86A04434345FD54CED27A1301DFDC512C1E*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t3591B86A04434345FD54CED27A1301DFDC512C1E*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int8_t*)L_5 = L_8;
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
		int8_t* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		int8_t* L_19;
		L_19 = ((  int8_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int8_t L_20 = (*(int8_t*)L_19);
		*(int8_t*)L_17 = L_20;
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
		int8_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int8_t));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int8_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(int8_t*)L_44 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(int8_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int8_t* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(int8_t*)L_50 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(int8_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		int8_t* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(int8_t*)L_66 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		int8_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int8_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int8_t*)L_82 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(int8_t));
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
		int8_t* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		int8_t* L_96;
		L_96 = ((  int8_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		int8_t L_97 = (*(int8_t*)L_96);
		*(int8_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		int8_t* L_106 = ___1_destination;
		int8_t L_107 = V_1;
		*(int8_t*)L_106 = L_107;
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
		int8_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(int8_t*)L_113 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		int8_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(int8_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,UnityEngine.SceneManagement.Scene>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisScene_tA1DC762B79745EB5140F054C884855B922318356_mFD20ED9E45AAC32BF59864541C78C1055E37B174_gshared (int8_t* ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
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
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t4EA6EE534015CAC7773B5148D49E33FB25622E06*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_8;
		L_8 = ((  Scene_tA1DC762B79745EB5140F054C884855B922318356 (*) (TypeConverter_2_t4EA6EE534015CAC7773B5148D49E33FB25622E06*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t4EA6EE534015CAC7773B5148D49E33FB25622E06*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_5 = L_8;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_19;
		L_19 = ((  Scene_tA1DC762B79745EB5140F054C884855B922318356* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_20 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_19);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_17 = L_20;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_44 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_50 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_66 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, Scene_tA1DC762B79745EB5140F054C884855B922318356*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_82 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_96;
		L_96 = ((  Scene_tA1DC762B79745EB5140F054C884855B922318356* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_97 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_96);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_106 = ___1_destination;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_107 = V_1;
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_106 = L_107;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_113 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,Unity.Serialization.Json.SerializedArrayView>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_m3B67753061C040502CA5523A9C3BE7178CBC8A95_gshared (int8_t* ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
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
	SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tD4C11661AA04387742328C034A6F990DF833E5A9*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_8;
		L_8 = ((  SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 (*) (TypeConverter_2_tD4C11661AA04387742328C034A6F990DF833E5A9*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tD4C11661AA04387742328C034A6F990DF833E5A9*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_5 = L_8;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_19;
		L_19 = ((  SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_20 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_19);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_17 = L_20;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_44 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_50 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_66 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_82 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_96;
		L_96 = ((  SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_97 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_96);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_106 = ___1_destination;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_107 = V_1;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_106 = L_107;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_113 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,Unity.Serialization.Json.SerializedValueView>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_mC44DA0FD6C2857805A0D43AB8B90F30FDD8F51A6_gshared (int8_t* ___0_source, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___1_destination, const RuntimeMethod* method) 
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
	SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t6EB0CE6B593215F237A0B6AE3F7C9752FCAB417F*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_8;
		L_8 = ((  SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC (*) (TypeConverter_2_t6EB0CE6B593215F237A0B6AE3F7C9752FCAB417F*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t6EB0CE6B593215F237A0B6AE3F7C9752FCAB417F*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_5 = L_8;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_19;
		L_19 = ((  SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_20 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_19);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_17 = L_20;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_44 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_50 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_66 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_82 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_96;
		L_96 = ((  SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_97 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_96);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_106 = ___1_destination;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_107 = V_1;
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_106 = L_107;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_113 = ((*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)((SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.Single>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m9D1E118B5071E97590AE888988B518019F8A0BAD_gshared (int8_t* ___0_source, float* ___1_destination, const RuntimeMethod* method) 
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
	float V_1 = 0.0f;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		float* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tC7E475CB6C405DD84693D1A7B5BC0ECBE2D4A334*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		float L_8;
		L_8 = ((  float (*) (TypeConverter_2_tC7E475CB6C405DD84693D1A7B5BC0ECBE2D4A334*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tC7E475CB6C405DD84693D1A7B5BC0ECBE2D4A334*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(float*)L_5 = L_8;
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
		float* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		float* L_19;
		L_19 = ((  float* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		float L_20 = (*(float*)L_19);
		*(float*)L_17 = L_20;
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
		float* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(float));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		float* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(float*)L_44 = ((*(float*)((float*)(float*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(float));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		float* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(float*)L_50 = ((*(float*)((float*)(float*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(float));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		float* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(float*)L_66 = ((*(float*)((float*)(float*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		float* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		float* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(float*)L_82 = ((*(float*)((float*)(float*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(float));
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
		float* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		float* L_96;
		L_96 = ((  float* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		float L_97 = (*(float*)L_96);
		*(float*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(float*)((float*)(float*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		float* L_106 = ___1_destination;
		float L_107 = V_1;
		*(float*)L_106 = L_107;
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
		float* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(float*)L_113 = ((*(float*)((float*)(float*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		float* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(float));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.TimeSpan>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m4A2759C120CE17199695CF8678DBF861907E9624_gshared (int8_t* ___0_source, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___1_destination, const RuntimeMethod* method) 
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
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tFF4AA23BE7C20D0E3CD55C7D81430FB40020205B*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8;
		L_8 = ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A (*) (TypeConverter_2_tFF4AA23BE7C20D0E3CD55C7D81430FB40020205B*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tFF4AA23BE7C20D0E3CD55C7D81430FB40020205B*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_5 = L_8;
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_19;
		L_19 = ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_20 = (*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_19);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_17 = L_20;
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_44 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_50 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_66 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_82 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_96;
		L_96 = ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_97 = (*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_96);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_106 = ___1_destination;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_107 = V_1;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_106 = L_107;
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
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_113 = ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.UInt16>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m5D9E733AAD4F0F717FCF295B2DF8B87EF9BCC11F_gshared (int8_t* ___0_source, uint16_t* ___1_destination, const RuntimeMethod* method) 
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
	uint16_t V_1 = 0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		uint16_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t618688D9DDDC1EB0CA653CB698DE7231972F0382*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		uint16_t L_8;
		L_8 = ((  uint16_t (*) (TypeConverter_2_t618688D9DDDC1EB0CA653CB698DE7231972F0382*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t618688D9DDDC1EB0CA653CB698DE7231972F0382*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint16_t*)L_5 = L_8;
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
		uint16_t* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		uint16_t* L_19;
		L_19 = ((  uint16_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint16_t L_20 = (*(uint16_t*)L_19);
		*(uint16_t*)L_17 = L_20;
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
		uint16_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint16_t));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		uint16_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(uint16_t*)L_44 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint16_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(uint16_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		uint16_t* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(uint16_t*)L_50 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint16_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(uint16_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		uint16_t* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(uint16_t*)L_66 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		uint16_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, uint16_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		uint16_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(uint16_t*)L_82 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint16_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(uint16_t));
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
		uint16_t* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		uint16_t* L_96;
		L_96 = ((  uint16_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint16_t L_97 = (*(uint16_t*)L_96);
		*(uint16_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		uint16_t* L_106 = ___1_destination;
		uint16_t L_107 = V_1;
		*(uint16_t*)L_106 = L_107;
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
		uint16_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(uint16_t*)L_113 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		uint16_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(uint16_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.UInt32>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m437450D8F581EE5752965565977F09559ED7BB94_gshared (int8_t* ___0_source, uint32_t* ___1_destination, const RuntimeMethod* method) 
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
	uint32_t V_1 = 0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		uint32_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tE508B9EECFB7B37270EBB23182C6E54C202A8395*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		uint32_t L_8;
		L_8 = ((  uint32_t (*) (TypeConverter_2_tE508B9EECFB7B37270EBB23182C6E54C202A8395*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tE508B9EECFB7B37270EBB23182C6E54C202A8395*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint32_t*)L_5 = L_8;
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
		uint32_t* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		uint32_t* L_19;
		L_19 = ((  uint32_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint32_t L_20 = (*(uint32_t*)L_19);
		*(uint32_t*)L_17 = L_20;
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
		uint32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint32_t));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		uint32_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(uint32_t*)L_44 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint32_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(uint32_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		uint32_t* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(uint32_t*)L_50 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint32_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(uint32_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		uint32_t* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(uint32_t*)L_66 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		uint32_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, uint32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		uint32_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(uint32_t*)L_82 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint32_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(uint32_t));
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
		uint32_t* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		uint32_t* L_96;
		L_96 = ((  uint32_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint32_t L_97 = (*(uint32_t*)L_96);
		*(uint32_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		uint32_t* L_106 = ___1_destination;
		uint32_t L_107 = V_1;
		*(uint32_t*)L_106 = L_107;
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
		uint32_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(uint32_t*)L_113 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		uint32_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(uint32_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,System.UInt64>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m02B7B7D71F15EF315E5C3E8A66E6B24C2A3740F0_gshared (int8_t* ___0_source, uint64_t* ___1_destination, const RuntimeMethod* method) 
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
	uint64_t V_1 = 0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		uint64_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tF50276EFDD1F8EF9BAA1F1E4D722FED82EAFE5FF*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		uint64_t L_8;
		L_8 = ((  uint64_t (*) (TypeConverter_2_tF50276EFDD1F8EF9BAA1F1E4D722FED82EAFE5FF*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tF50276EFDD1F8EF9BAA1F1E4D722FED82EAFE5FF*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint64_t*)L_5 = L_8;
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
		uint64_t* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		uint64_t* L_19;
		L_19 = ((  uint64_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint64_t L_20 = (*(uint64_t*)L_19);
		*(uint64_t*)L_17 = L_20;
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
		uint64_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint64_t));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		uint64_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(uint64_t*)L_44 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint64_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(uint64_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		uint64_t* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(uint64_t*)L_50 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint64_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(uint64_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		uint64_t* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(uint64_t*)L_66 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		uint64_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		uint64_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(uint64_t*)L_82 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint64_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(uint64_t));
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
		uint64_t* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		uint64_t* L_96;
		L_96 = ((  uint64_t* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint64_t L_97 = (*(uint64_t*)L_96);
		*(uint64_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		uint64_t* L_106 = ___1_destination;
		uint64_t L_107 = V_1;
		*(uint64_t*)L_106 = L_107;
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
		uint64_t* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(uint64_t*)L_113 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		uint64_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(uint64_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,UnityEngine.Vector3>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA1881ED461E25A60CCC080F7825A8E3EB1D96A47_gshared (int8_t* ___0_source, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_destination, const RuntimeMethod* method) 
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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	int8_t V_6 = 0x0;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t618766BA4D81F46E0502DEC7E1F4FE4DD8AC25E0*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (TypeConverter_2_t618766BA4D81F46E0502DEC7E1F4FE4DD8AC25E0*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t618766BA4D81F46E0502DEC7E1F4FE4DD8AC25E0*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_5 = L_8;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = ___1_destination;
		int8_t* L_18 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19;
		L_19 = ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_19);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_17 = L_20;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_44 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_50 = ___1_destination;
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_50 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_66 = ___1_destination;
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_66 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_82 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_94 = ___1_destination;
		int8_t* L_95 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_96;
		L_96 = ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_96);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_106 = ___1_destination;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = V_1;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_106 = L_107;
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_113 = ___1_destination;
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_113 = ((*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,UnityEngine.Vector3Int>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m8B810F9E122624C8CB853D63C5B456ACBE694242_gshared (int8_t* ___0_source, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___1_destination, const RuntimeMethod* method) 
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
	int8_t V_6 = 0x0;
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
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t2F4A3C1A7D7C9C0C92C19D96DD3CF5B531E983FF*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_8;
		L_8 = ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 (*) (TypeConverter_2_t2F4A3C1A7D7C9C0C92C19D96DD3CF5B531E983FF*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t2F4A3C1A7D7C9C0C92C19D96DD3CF5B531E983FF*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		int8_t* L_18 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_19;
		L_19 = ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
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
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
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
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
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
		int8_t* L_95 = ___0_source;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_96;
		L_96 = ((  Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_97 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_96);
		*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
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
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/CameraPathRecording>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisCameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0_mD9FB4C1F8EF016DD793B1BC3102D3D12FA16D3F9_gshared (int8_t* ___0_source, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* ___1_destination, const RuntimeMethod* method) 
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
	int8_t V_6 = 0x0;
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
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t4C5ED81BA76C2502BD00790AAA2718549C16FD21*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_8;
		L_8 = ((  CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 (*) (TypeConverter_2_t4C5ED81BA76C2502BD00790AAA2718549C16FD21*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t4C5ED81BA76C2502BD00790AAA2718549C16FD21*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		int8_t* L_18 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_19;
		L_19 = ((  CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
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
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
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
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
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
		int8_t* L_95 = ___0_source;
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* L_96;
		L_96 = ((  CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0 L_97 = (*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_96);
		*(CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((CameraPathRecording_tC580C3D181F1F03C5EC0976D18BCCC78D6D573C0*)L_94)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
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
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PlaneDataRecording>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisPlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0_m69D1088539D8EABEADECA698744CA8DFBDC857BB_gshared (int8_t* ___0_source, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* ___1_destination, const RuntimeMethod* method) 
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
	int8_t V_6 = 0x0;
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
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tFE7AFABD00B904AA25ADB37F22A941AC3A4A359F*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_8;
		L_8 = ((  PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 (*) (TypeConverter_2_tFE7AFABD00B904AA25ADB37F22A941AC3A4A359F*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tFE7AFABD00B904AA25ADB37F22A941AC3A4A359F*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		int8_t* L_18 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_19;
		L_19 = ((  PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
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
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
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
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
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
		int8_t* L_95 = ___0_source;
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* L_96;
		L_96 = ((  PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0 L_97 = (*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_96);
		*(PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((PlaneDataRecording_t9C2CB265D9D276595374D44C847FFCA7978595B0*)L_94)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
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
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.SByte,Unity.AR.Companion.Core.CompanionDataRecordingUtils/PointCloudRecording>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisPointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2_mD4752BDF3D2BFDFC4FF24A96C11BAD7E51322767_gshared (int8_t* ___0_source, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* ___1_destination, const RuntimeMethod* method) 
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
	int8_t V_6 = 0x0;
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
		int8_t* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t970CEAAC5B5EA3FEB7EA2670009731C8218C9BE0*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_8;
		L_8 = ((  PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 (*) (TypeConverter_2_t970CEAAC5B5EA3FEB7EA2670009731C8218C9BE0*, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t970CEAAC5B5EA3FEB7EA2670009731C8218C9BE0*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		int8_t* L_18 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_19;
		L_19 = ((  PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		int8_t* L_38 = ___0_source;
		int8_t L_39 = (*(int8_t*)L_38);
		int8_t L_40 = L_39;
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
		int8_t* L_51 = ___0_source;
		int8_t L_52 = (*(int8_t*)L_51);
		int8_t L_53 = L_52;
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
		int8_t* L_67 = ___0_source;
		int8_t L_68 = (*(int8_t*)L_67);
		int8_t L_69 = L_68;
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
		int8_t* L_72 = ___0_source;
		int8_t L_73 = (*(int8_t*)L_72);
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (int8_t, PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int8_t* L_85 = ___0_source;
		int8_t L_86 = (*(int8_t*)L_85);
		int8_t L_87 = L_86;
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
		int8_t* L_95 = ___0_source;
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* L_96;
		L_96 = ((  PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2* (*) (int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2 L_97 = (*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_96);
		*(PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((PointCloudRecording_tC2F4446AEDA7CE3488EA453774519BCDF6F097A2*)L_94)->___events_0), (void*)NULL);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		int8_t* L_98 = ___0_source;
		int8_t L_99 = (*(int8_t*)L_98);
		V_6 = L_99;
		int8_t L_100 = V_6;
		int8_t L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		int8_t L_103 = V_6;
		int8_t L_104 = L_103;
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
		int8_t* L_114 = ___0_source;
		int8_t L_115 = (*(int8_t*)L_114);
		int8_t L_116 = L_115;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<UnityEngine.SceneManagement.Scene,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisScene_tA1DC762B79745EB5140F054C884855B922318356_TisRuntimeObject_mA1819B7381576BBEE04CF6268862AD5F318A4DD2_gshared (Scene_tA1DC762B79745EB5140F054C884855B922318356* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_6;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tC77FB035E70BD97E26F02F9AA59F4E1D765A419A*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (TypeConverter_2_tC77FB035E70BD97E26F02F9AA59F4E1D765A419A*, Scene_tA1DC762B79745EB5140F054C884855B922318356*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tC77FB035E70BD97E26F02F9AA59F4E1D765A419A*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_18 = ___0_source;
		RuntimeObject** L_19;
		L_19 = ((  RuntimeObject** (*) (Scene_tA1DC762B79745EB5140F054C884855B922318356*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_38 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_39 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_38);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_40 = L_39;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_51 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_52 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_51);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_53 = L_52;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_67 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_68 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_67);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_69 = L_68;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_72 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_73 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_72);
		RuntimeObject** L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (Scene_tA1DC762B79745EB5140F054C884855B922318356, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_85 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_86 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_85);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_87 = L_86;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_95 = ___0_source;
		RuntimeObject** L_96;
		L_96 = ((  RuntimeObject** (*) (Scene_tA1DC762B79745EB5140F054C884855B922318356*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_97 = (*(RuntimeObject**)L_96);
		*(RuntimeObject**)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_94, (void*)L_97);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_98 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_99 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_98);
		V_6 = L_99;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_100 = V_6;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_103 = V_6;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_104 = L_103;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_114 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_115 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_114);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_116 = L_115;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<Unity.Serialization.Json.SerializedArrayView,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_TisRuntimeObject_mEF34EC4E80EC50573DC382ED8A5DE78351C72690_gshared (SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
	SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 V_6;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tFFEDDFFBE8B3985FD023AB44137659F374DD10D9*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (TypeConverter_2_tFFEDDFFBE8B3985FD023AB44137659F374DD10D9*, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tFFEDDFFBE8B3985FD023AB44137659F374DD10D9*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_18 = ___0_source;
		RuntimeObject** L_19;
		L_19 = ((  RuntimeObject** (*) (SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_38 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_39 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_38);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_40 = L_39;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_51 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_52 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_51);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_53 = L_52;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_67 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_68 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_67);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_69 = L_68;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_72 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_73 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_72);
		RuntimeObject** L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_85 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_86 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_85);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_87 = L_86;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_95 = ___0_source;
		RuntimeObject** L_96;
		L_96 = ((  RuntimeObject** (*) (SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_97 = (*(RuntimeObject**)L_96);
		*(RuntimeObject**)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_94, (void*)L_97);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_98 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_99 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_98);
		V_6 = L_99;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_100 = V_6;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_103 = V_6;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_104 = L_103;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_114 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_115 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_114);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_116 = L_115;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<Unity.Serialization.Json.SerializedValueView,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC_TisRuntimeObject_m5EEDCEF74B55CD31C1F2AF92682C29FF35E51186_gshared (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
	SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC V_6;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tB4FF6E29F2B86A3BCFB88CAF1EA4F41857786BBC*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (TypeConverter_2_tB4FF6E29F2B86A3BCFB88CAF1EA4F41857786BBC*, SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tB4FF6E29F2B86A3BCFB88CAF1EA4F41857786BBC*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_18 = ___0_source;
		RuntimeObject** L_19;
		L_19 = ((  RuntimeObject** (*) (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_38 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_39 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_38);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_40 = L_39;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_51 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_52 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_51);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_53 = L_52;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_67 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_68 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_67);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_69 = L_68;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_72 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_73 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_72);
		RuntimeObject** L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_85 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_86 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_85);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_87 = L_86;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_95 = ___0_source;
		RuntimeObject** L_96;
		L_96 = ((  RuntimeObject** (*) (SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_97 = (*(RuntimeObject**)L_96);
		*(RuntimeObject**)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_94, (void*)L_97);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_98 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_99 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_98);
		V_6 = L_99;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_100 = V_6;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_103 = V_6;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_104 = L_103;
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
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC* L_114 = ___0_source;
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_115 = (*(SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC*)L_114);
		SerializedValueView_t132982877F69EB6A5B24A9B8EB004A6B80D087DC L_116 = L_115;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisKeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_m3855371B42DEB80A3FF89B60F036BF6BAF76BAD3_gshared (float* ___0_source, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* ___1_destination, const RuntimeMethod* method) 
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
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t20008B098FA20D7A589D4672F16F4237B1EF3354*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_8;
		L_8 = ((  KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 (*) (TypeConverter_2_t20008B098FA20D7A589D4672F16F4237B1EF3354*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t20008B098FA20D7A589D4672F16F4237B1EF3354*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_5)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_5)->___value_1), (void*)NULL);
		#endif
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_19;
		L_19 = ((  KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_20 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_19);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_17 = L_20;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_17)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_17)->___value_1), (void*)NULL);
		#endif
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_44 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_44)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_44)->___value_1), (void*)NULL);
		#endif
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_50 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_50)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_50)->___value_1), (void*)NULL);
		#endif
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_66 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_66)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_66)->___value_1), (void*)NULL);
		#endif
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_82 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_82)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_82)->___value_1), (void*)NULL);
		#endif
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_96;
		L_96 = ((  KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_97 = (*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_96);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_94)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_94)->___value_1), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_106 = ___1_destination;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_107 = V_1;
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_106 = L_107;
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_106)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_106)->___value_1), (void*)NULL);
		#endif
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
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_113 = ((*(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_113)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230*)L_113)->___value_1), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Boolean>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC03F81BC816AD32A5B4AA4FC1D55FE9F20464476_gshared (float* ___0_source, bool* ___1_destination, const RuntimeMethod* method) 
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
	bool V_1 = false;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		bool* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tEB581B6C358C54EA7C00721EE7B02514873313F6*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		bool L_8;
		L_8 = ((  bool (*) (TypeConverter_2_tEB581B6C358C54EA7C00721EE7B02514873313F6*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tEB581B6C358C54EA7C00721EE7B02514873313F6*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(bool*)L_5 = L_8;
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
		bool* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		bool* L_19;
		L_19 = ((  bool* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		bool L_20 = (*(bool*)L_19);
		*(bool*)L_17 = L_20;
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
		bool* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(bool));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		bool* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(bool*)L_44 = ((*(bool*)((bool*)(bool*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		bool* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(bool));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		bool* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(bool*)L_50 = ((*(bool*)((bool*)(bool*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		bool* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(bool));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		bool* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(bool*)L_66 = ((*(bool*)((bool*)(bool*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		bool* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, bool*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		bool* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(bool*)L_82 = ((*(bool*)((bool*)(bool*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		bool* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(bool));
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
		bool* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		bool* L_96;
		L_96 = ((  bool* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		bool L_97 = (*(bool*)L_96);
		*(bool*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(bool*)((bool*)(bool*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		bool* L_106 = ___1_destination;
		bool L_107 = V_1;
		*(bool*)L_106 = L_107;
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
		bool* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(bool*)L_113 = ((*(bool*)((bool*)(bool*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		bool* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(bool));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Byte>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA17C42D97B4088ADDD4E39F556C5DFD91B47162E_gshared (float* ___0_source, uint8_t* ___1_destination, const RuntimeMethod* method) 
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
	uint8_t V_1 = 0x0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		uint8_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t762D02D75D71B21C2AF54884486BBE79EAA86DCE*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		uint8_t L_8;
		L_8 = ((  uint8_t (*) (TypeConverter_2_t762D02D75D71B21C2AF54884486BBE79EAA86DCE*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t762D02D75D71B21C2AF54884486BBE79EAA86DCE*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(uint8_t*)L_5 = L_8;
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
		uint8_t* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		uint8_t* L_19;
		L_19 = ((  uint8_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_20 = (*(uint8_t*)L_19);
		*(uint8_t*)L_17 = L_20;
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
		uint8_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(uint8_t));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		uint8_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(uint8_t*)L_44 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint8_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(uint8_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		uint8_t* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(uint8_t*)L_50 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint8_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(uint8_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		uint8_t* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(uint8_t*)L_66 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		uint8_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, uint8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		uint8_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(uint8_t*)L_82 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		uint8_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(uint8_t));
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
		uint8_t* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		uint8_t* L_96;
		L_96 = ((  uint8_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		uint8_t L_97 = (*(uint8_t*)L_96);
		*(uint8_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		uint8_t* L_106 = ___1_destination;
		uint8_t L_107 = V_1;
		*(uint8_t*)L_106 = L_107;
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
		uint8_t* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(uint8_t*)L_113 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		uint8_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(uint8_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Char>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mEB7F89001CA0BBBE8C0DD5E37C1397C204741DAA_gshared (float* ___0_source, Il2CppChar* ___1_destination, const RuntimeMethod* method) 
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
	Il2CppChar V_1 = 0x0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		Il2CppChar* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tD9530EE7101A65BAFF0AA656E79ACA1A7E82A325*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Il2CppChar L_8;
		L_8 = ((  Il2CppChar (*) (TypeConverter_2_tD9530EE7101A65BAFF0AA656E79ACA1A7E82A325*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tD9530EE7101A65BAFF0AA656E79ACA1A7E82A325*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Il2CppChar*)L_5 = L_8;
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
		Il2CppChar* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		Il2CppChar* L_19;
		L_19 = ((  Il2CppChar* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		Il2CppChar L_20 = (*(Il2CppChar*)L_19);
		*(Il2CppChar*)L_17 = L_20;
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
		Il2CppChar* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Il2CppChar));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Il2CppChar* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(Il2CppChar*)L_44 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Il2CppChar* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(Il2CppChar));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Il2CppChar* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(Il2CppChar*)L_50 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Il2CppChar* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(Il2CppChar));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		Il2CppChar* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(Il2CppChar*)L_66 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		Il2CppChar* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, Il2CppChar*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Il2CppChar* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Il2CppChar*)L_82 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Il2CppChar* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(Il2CppChar));
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
		Il2CppChar* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		Il2CppChar* L_96;
		L_96 = ((  Il2CppChar* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		Il2CppChar L_97 = (*(Il2CppChar*)L_96);
		*(Il2CppChar*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		Il2CppChar* L_106 = ___1_destination;
		Il2CppChar L_107 = V_1;
		*(Il2CppChar*)L_106 = L_107;
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
		Il2CppChar* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(Il2CppChar*)L_113 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		Il2CppChar* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(Il2CppChar));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,UnityEngine.Color>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m320BFFA57697AA4476D1BCAFDBD45006E5367EA0_gshared (float* ___0_source, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___1_destination, const RuntimeMethod* method) 
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
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t91ED39C0EDB210913A80B9E38C15E7415D8DF403*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (TypeConverter_2_t91ED39C0EDB210913A80B9E38C15E7415D8DF403*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t91ED39C0EDB210913A80B9E38C15E7415D8DF403*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_5 = L_8;
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_19;
		L_19 = ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_19);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_17 = L_20;
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_44 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_50 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_66 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_82 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_96;
		L_96 = ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_97 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_96);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_106 = ___1_destination;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_107 = V_1;
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_106 = L_107;
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
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)L_113 = ((*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)((Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.DateTime>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m395BB14873A000F6FB0374132025AFDCADFC6BB0_gshared (float* ___0_source, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* ___1_destination, const RuntimeMethod* method) 
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
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t849A4D3D8BF6F3783C44D8EBD16A86B6BE260825*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8;
		L_8 = ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (TypeConverter_2_t849A4D3D8BF6F3783C44D8EBD16A86B6BE260825*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t849A4D3D8BF6F3783C44D8EBD16A86B6BE260825*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_5 = L_8;
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_19;
		L_19 = ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_20 = (*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_19);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_17 = L_20;
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_44 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_50 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_66 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_82 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_96;
		L_96 = ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_97 = (*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_96);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_106 = ___1_destination;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_107 = V_1;
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_106 = L_107;
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
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)L_113 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Double>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m587F4BD9ED49D19D1DDF91FA04CA8DE87F616AD6_gshared (float* ___0_source, double* ___1_destination, const RuntimeMethod* method) 
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
	double V_1 = 0.0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		double* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t86D1370C8BE52DD17536846E74DA56E2E76190A4*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		double L_8;
		L_8 = ((  double (*) (TypeConverter_2_t86D1370C8BE52DD17536846E74DA56E2E76190A4*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t86D1370C8BE52DD17536846E74DA56E2E76190A4*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(double*)L_5 = L_8;
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
		double* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		double* L_19;
		L_19 = ((  double* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		double L_20 = (*(double*)L_19);
		*(double*)L_17 = L_20;
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
		double* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(double));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		double* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(double*)L_44 = ((*(double*)((double*)(double*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		double* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(double));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		double* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(double*)L_50 = ((*(double*)((double*)(double*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		double* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(double));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		double* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(double*)L_66 = ((*(double*)((double*)(double*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		double* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, double*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		double* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(double*)L_82 = ((*(double*)((double*)(double*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		double* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(double));
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
		double* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		double* L_96;
		L_96 = ((  double* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		double L_97 = (*(double*)L_96);
		*(double*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(double*)((double*)(double*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		double* L_106 = ___1_destination;
		double L_107 = V_1;
		*(double*)L_106 = L_107;
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
		double* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(double*)L_113 = ((*(double*)((double*)(double*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		double* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(double));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Guid>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisGuid_t_mB44FFB1B9190C04FC2AC563266C789AE0FB3F74F_gshared (float* ___0_source, Guid_t* ___1_destination, const RuntimeMethod* method) 
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
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		Guid_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tAA486F5129D00C68FABFADC4497CD00CCB6F7954*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Guid_t L_8;
		L_8 = ((  Guid_t (*) (TypeConverter_2_tAA486F5129D00C68FABFADC4497CD00CCB6F7954*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tAA486F5129D00C68FABFADC4497CD00CCB6F7954*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Guid_t*)L_5 = L_8;
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
		Guid_t* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		Guid_t* L_19;
		L_19 = ((  Guid_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		Guid_t L_20 = (*(Guid_t*)L_19);
		*(Guid_t*)L_17 = L_20;
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
		Guid_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Guid_t));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Guid_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(Guid_t*)L_44 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Guid_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(Guid_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Guid_t* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(Guid_t*)L_50 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Guid_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(Guid_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		Guid_t* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(Guid_t*)L_66 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		Guid_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, Guid_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Guid_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Guid_t*)L_82 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Guid_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(Guid_t));
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
		Guid_t* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		Guid_t* L_96;
		L_96 = ((  Guid_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		Guid_t L_97 = (*(Guid_t*)L_96);
		*(Guid_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		Guid_t* L_106 = ___1_destination;
		Guid_t L_107 = V_1;
		*(Guid_t*)L_106 = L_107;
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
		Guid_t* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(Guid_t*)L_113 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		Guid_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(Guid_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Int16>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mCE432F82FF3DBA3DE5F3D7C97302421B15963F89_gshared (float* ___0_source, int16_t* ___1_destination, const RuntimeMethod* method) 
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
	int16_t V_1 = 0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		int16_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tCE315AD0193552C299D20BBF04951C271DA734D0*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int16_t L_8;
		L_8 = ((  int16_t (*) (TypeConverter_2_tCE315AD0193552C299D20BBF04951C271DA734D0*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tCE315AD0193552C299D20BBF04951C271DA734D0*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int16_t*)L_5 = L_8;
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
		int16_t* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		int16_t* L_19;
		L_19 = ((  int16_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int16_t L_20 = (*(int16_t*)L_19);
		*(int16_t*)L_17 = L_20;
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
		int16_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int16_t));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int16_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(int16_t*)L_44 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int16_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(int16_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int16_t* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(int16_t*)L_50 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int16_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(int16_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		int16_t* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(int16_t*)L_66 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		int16_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, int16_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int16_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int16_t*)L_82 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int16_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(int16_t));
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
		int16_t* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		int16_t* L_96;
		L_96 = ((  int16_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		int16_t L_97 = (*(int16_t*)L_96);
		*(int16_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		int16_t* L_106 = ___1_destination;
		int16_t L_107 = V_1;
		*(int16_t*)L_106 = L_107;
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
		int16_t* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(int16_t*)L_113 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		int16_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(int16_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Int32>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m73AF1A01A00FB14D4FE0A37DFD9CA74DC5FD605A_gshared (float* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		int32_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tE62DB5496E948FFCAED81E1D628FDE1F9C93D9B8*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int32_t L_8;
		L_8 = ((  int32_t (*) (TypeConverter_2_tE62DB5496E948FFCAED81E1D628FDE1F9C93D9B8*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tE62DB5496E948FFCAED81E1D628FDE1F9C93D9B8*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_5 = L_8;
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
		int32_t* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		int32_t* L_19;
		L_19 = ((  int32_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20 = (*(int32_t*)L_19);
		*(int32_t*)L_17 = L_20;
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
		int32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int32_t));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int32_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(int32_t*)L_44 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(int32_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int32_t* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(int32_t*)L_50 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(int32_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		int32_t* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(int32_t*)L_66 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		int32_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int32_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int32_t*)L_82 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(int32_t));
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
		int32_t* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		int32_t* L_96;
		L_96 = ((  int32_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_97 = (*(int32_t*)L_96);
		*(int32_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		int32_t* L_106 = ___1_destination;
		int32_t L_107 = V_1;
		*(int32_t*)L_106 = L_107;
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
		int32_t* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(int32_t*)L_113 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		int32_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(int32_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Int32Enum>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mDEF2315EFEB00F558CB4F15C2D73643CA70B09E6_gshared (float* ___0_source, int32_t* ___1_destination, const RuntimeMethod* method) 
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
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		int32_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tF76FD072ABAB6667A0F9E8D30424B66EDA1A67CE*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int32_t L_8;
		L_8 = ((  int32_t (*) (TypeConverter_2_tF76FD072ABAB6667A0F9E8D30424B66EDA1A67CE*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tF76FD072ABAB6667A0F9E8D30424B66EDA1A67CE*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int32_t*)L_5 = L_8;
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
		int32_t* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		int32_t* L_19;
		L_19 = ((  int32_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_20 = (*(int32_t*)L_19);
		*(int32_t*)L_17 = L_20;
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
		int32_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int32_t));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int32_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(int32_t*)L_44 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(int32_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int32_t* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(int32_t*)L_50 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(int32_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		int32_t* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(int32_t*)L_66 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		int32_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int32_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int32_t*)L_82 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int32_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(int32_t));
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
		int32_t* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		int32_t* L_96;
		L_96 = ((  int32_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_97 = (*(int32_t*)L_96);
		*(int32_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		int32_t* L_106 = ___1_destination;
		int32_t L_107 = V_1;
		*(int32_t*)L_106 = L_107;
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
		int32_t* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(int32_t*)L_113 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		int32_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(int32_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Int64>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mFA9425AB8E70EC06F34814D9EB3F5C15095CAE02_gshared (float* ___0_source, int64_t* ___1_destination, const RuntimeMethod* method) 
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
	int64_t V_1 = 0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		int64_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t3E57E2286ABBE0BF6CBBA2BB3B7A9BFDCD8266F1*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int64_t L_8;
		L_8 = ((  int64_t (*) (TypeConverter_2_t3E57E2286ABBE0BF6CBBA2BB3B7A9BFDCD8266F1*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t3E57E2286ABBE0BF6CBBA2BB3B7A9BFDCD8266F1*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int64_t*)L_5 = L_8;
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
		int64_t* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		int64_t* L_19;
		L_19 = ((  int64_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int64_t L_20 = (*(int64_t*)L_19);
		*(int64_t*)L_17 = L_20;
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
		int64_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int64_t));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int64_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(int64_t*)L_44 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int64_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(int64_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int64_t* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(int64_t*)L_50 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int64_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(int64_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		int64_t* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(int64_t*)L_66 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		int64_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, int64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int64_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int64_t*)L_82 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int64_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(int64_t));
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
		int64_t* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		int64_t* L_96;
		L_96 = ((  int64_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		int64_t L_97 = (*(int64_t*)L_96);
		*(int64_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		int64_t* L_106 = ___1_destination;
		int64_t L_107 = V_1;
		*(int64_t*)L_106 = L_107;
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
		int64_t* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(int64_t*)L_113 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		int64_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(int64_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.Object>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisRuntimeObject_m9879A57EDAFDF7696333DF8CC730219F401610C4_gshared (float* ___0_source, RuntimeObject** ___1_destination, const RuntimeMethod* method) 
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
	float V_6 = 0.0f;
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
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t31E3BEF8E698B417057F5E2188267658C86288A7*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (TypeConverter_2_t31E3BEF8E698B417057F5E2188267658C86288A7*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t31E3BEF8E698B417057F5E2188267658C86288A7*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
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
		float* L_18 = ___0_source;
		RuntimeObject** L_19;
		L_19 = ((  RuntimeObject** (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
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
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
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
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		RuntimeObject** L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
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
		float* L_95 = ___0_source;
		RuntimeObject** L_96;
		L_96 = ((  RuntimeObject** (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		RuntimeObject* L_97 = (*(RuntimeObject**)L_96);
		*(RuntimeObject**)L_94 = L_97;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_94, (void*)L_97);
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
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
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,System.SByte>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mD8A16DD8DB3BEA4B07E04A5A94D1CED017D0C7BC_gshared (float* ___0_source, int8_t* ___1_destination, const RuntimeMethod* method) 
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
	int8_t V_1 = 0x0;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		int8_t* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tED6C405F13DEF199C742BE1815F30C090ECF83AA*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int8_t L_8;
		L_8 = ((  int8_t (*) (TypeConverter_2_tED6C405F13DEF199C742BE1815F30C090ECF83AA*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tED6C405F13DEF199C742BE1815F30C090ECF83AA*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(int8_t*)L_5 = L_8;
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
		int8_t* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		int8_t* L_19;
		L_19 = ((  int8_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		int8_t L_20 = (*(int8_t*)L_19);
		*(int8_t*)L_17 = L_20;
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
		int8_t* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(int8_t));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		int8_t* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(int8_t*)L_44 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(int8_t));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		int8_t* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(int8_t*)L_50 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(int8_t));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		int8_t* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(int8_t*)L_66 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		int8_t* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, int8_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		int8_t* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(int8_t*)L_82 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		int8_t* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(int8_t));
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
		int8_t* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		int8_t* L_96;
		L_96 = ((  int8_t* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		int8_t L_97 = (*(int8_t*)L_96);
		*(int8_t*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		int8_t* L_106 = ___1_destination;
		int8_t L_107 = V_1;
		*(int8_t*)L_106 = L_107;
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
		int8_t* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(int8_t*)L_113 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		int8_t* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(int8_t));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,UnityEngine.SceneManagement.Scene>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisScene_tA1DC762B79745EB5140F054C884855B922318356_m4B3E0A65F21CA56C54CECA1AC8A1DD7DB5C4F43F_gshared (float* ___0_source, Scene_tA1DC762B79745EB5140F054C884855B922318356* ___1_destination, const RuntimeMethod* method) 
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
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_t6BCD683865024E862EF5BC604064667074E5A57C*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_8;
		L_8 = ((  Scene_tA1DC762B79745EB5140F054C884855B922318356 (*) (TypeConverter_2_t6BCD683865024E862EF5BC604064667074E5A57C*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_t6BCD683865024E862EF5BC604064667074E5A57C*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_5 = L_8;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_19;
		L_19 = ((  Scene_tA1DC762B79745EB5140F054C884855B922318356* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_20 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_19);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_17 = L_20;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_44 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_50 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_66 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, Scene_tA1DC762B79745EB5140F054C884855B922318356*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_82 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_96;
		L_96 = ((  Scene_tA1DC762B79745EB5140F054C884855B922318356* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_97 = (*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_96);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_106 = ___1_destination;
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_107 = V_1;
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_106 = L_107;
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
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)L_113 = ((*(Scene_tA1DC762B79745EB5140F054C884855B922318356*)((Scene_tA1DC762B79745EB5140F054C884855B922318356*)(Scene_tA1DC762B79745EB5140F054C884855B922318356*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		Scene_tA1DC762B79745EB5140F054C884855B922318356* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(Scene_tA1DC762B79745EB5140F054C884855B922318356));
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
// System.Boolean Unity.Properties.TypeConversion::TryConvert<System.Single,Unity.Serialization.Json.SerializedArrayView>(TSource&,TDestination&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisSerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6_mA0E4525D4796E8C36CC488FC7BBE6CF61B0B6483_gshared (float* ___0_source, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* ___1_destination, const RuntimeMethod* method) 
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
	SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	bool V_5 = false;
	float V_6 = 0.0f;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_5 = ___1_destination;
		Delegate_t* L_6 = V_0;
		float* L_7 = ___0_source;
		NullCheck(((TypeConverter_2_tA34443F4B52CCF800690346602008FE363163164*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))));
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_8;
		L_8 = ((  SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 (*) (TypeConverter_2_tA34443F4B52CCF800690346602008FE363163164*, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(((TypeConverter_2_tA34443F4B52CCF800690346602008FE363163164*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 2))), L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_5 = L_8;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_17 = ___1_destination;
		float* L_18 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_19;
		L_19 = ((  SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 4));
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_20 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_19);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_17 = L_20;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_30 = ___1_destination;
		il2cpp_codegen_initobj(L_30, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
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
		float* L_38 = ___0_source;
		float L_39 = (*(float*)L_38);
		float L_40 = L_39;
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_40);
		Type_t* L_42 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_41, L_42, NULL);
		V_4 = L_43;
		// destination = (TDestination) Enum.ToObject(underlyingType, value);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_44 = ___1_destination;
		Type_t* L_45 = V_2;
		RuntimeObject* L_46 = V_4;
		RuntimeObject* L_47;
		L_47 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_45, L_46, NULL);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_44 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_47, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_49 = ___1_destination;
		il2cpp_codegen_initobj(L_49, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return true;
		return (bool)1;
	}

IL_0111:
	{
		// destination = (TDestination) System.Convert.ChangeType(source, underlyingType);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_50 = ___1_destination;
		float* L_51 = ___0_source;
		float L_52 = (*(float*)L_51);
		float L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_53);
		Type_t* L_55 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_56;
		L_56 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_54, L_55, NULL);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_50 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_56, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_65 = ___1_destination;
		il2cpp_codegen_initobj(L_65, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
		// return false;
		return (bool)0;
	}

IL_016c:
	{
		// destination = (TDestination) (object) source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_66 = ___1_destination;
		float* L_67 = ___0_source;
		float L_68 = (*(float*)L_67);
		float L_69 = L_68;
		RuntimeObject* L_70 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_69);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_66 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_70, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		float* L_72 = ___0_source;
		float L_73 = (*(float*)L_72);
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_74 = ___1_destination;
		il2cpp_codegen_runtime_class_init_inline(TypeConversion_tBF7D51D9000149A2F184551866DC4351036C3E17_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = ((  bool (*) (float, SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)))(L_73, L_74, il2cpp_rgctx_method(method->rgctx_data, 12));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_82 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		float* L_85 = ___0_source;
		float L_86 = (*(float*)L_85);
		float L_87 = L_86;
		RuntimeObject* L_88 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_87);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_89;
		L_89 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_84, ((String_t*)CastclassSealed((RuntimeObject*)L_88, String_t_il2cpp_TypeInfo_var)), NULL);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_82 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_89, il2cpp_rgctx_data(method->rgctx_data, 10)))));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_90 = ___1_destination;
		il2cpp_codegen_initobj(L_90, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_94 = ___1_destination;
		float* L_95 = ___0_source;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_96;
		L_96 = ((  SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* (*) (float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_95, il2cpp_rgctx_method(method->rgctx_data, 4));
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_97 = (*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_96);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_94 = L_97;
		// return true;
		return (bool)1;
	}

IL_021f:
	{
		// if (source is TDestination assignable)
		float* L_98 = ___0_source;
		float L_99 = (*(float*)L_98);
		V_6 = L_99;
		float L_100 = V_6;
		float L_101 = L_100;
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_101);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_102, il2cpp_rgctx_data(method->rgctx_data, 10))))
		{
			goto IL_0250;
		}
	}
	{
		float L_103 = V_6;
		float L_104 = L_103;
		RuntimeObject* L_105 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_104);
		V_1 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(((RuntimeObject*)IsInst((RuntimeObject*)L_105, il2cpp_rgctx_data(method->rgctx_data, 10))), il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// destination = assignable;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_106 = ___1_destination;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6 L_107 = V_1;
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_106 = L_107;
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
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_113 = ___1_destination;
		float* L_114 = ___0_source;
		float L_115 = (*(float*)L_114);
		float L_116 = L_115;
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data(method->rgctx_data, 9), &L_116);
		*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)L_113 = ((*(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)((SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6*)UnBox(L_117, il2cpp_rgctx_data(method->rgctx_data, 10)))));
		// return true;
		return (bool)1;
	}

IL_0283:
	{
		// destination = default;
		SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6* L_118 = ___1_destination;
		il2cpp_codegen_initobj(L_118, sizeof(SerializedArrayView_t811E52198172559E69CE9093CCE7C7970D3A46D6));
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
