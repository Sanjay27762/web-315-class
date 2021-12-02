#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
185,
190,
191,
192,
193,
194,
195,
196,
197,
198,
201,
202,
319,
320,
322,
351,
352,
353,
373,
374,
375,
376,
377,
450,
451,
452,
455,
515,
516,
518,
520,
522,
524,
529,
537,
538,
539,
540,
541,
542,
543,
544,
545,
546,
547,
548,
549,
550,
551,
552,
553,
554,
555,
556,
557,
558,
559,
560,
561,
562,
563,
645,
646,
647,
648,
649,
650,
651,
652,
653,
654,
655,
656,
657,
658,
659,
660,
661,
662,
663,
664,
665,
666,
667,
668,
669,
793,
794,
802,
805,
807,
812,
813,
815,
816,
821,
822,
823,
824,
826,
827,
828,
831,
832,
835,
836,
837,
907,
908,
910,
918,
919,
920,
921,
922,
926,
927,
928,
929,
930,
931,
933,
934,
935,
937,
938,
939,
943,
944,
945,
1213,
1403,
1404,
7507,
7508,
7510,
7511,
7512,
7513,
7514,
7516,
7518,
7520,
7521,
7522,
7530,
7532,
7536,
7537,
7539,
7541,
7543,
7556,
7565,
7566,
7568,
7569,
7570,
7571,
7572,
7574,
7576,
8589,
8593,
8595,
8596,
8597,
8598,
8651,
8652,
8653,
8654,
8673,
8674,
8675,
8676,
8712,
8760,
8763,
8772,
8773,
8774,
9157,
9158,
9163,
9164,
9165,
9200,
9201,
9202,
9221,
9227,
9234,
9244,
9247,
9327,
9328,
9340,
9341,
9342,
9343,
9344,
9345,
9346,
9353,
9366,
9386,
9387,
9395,
9397,
9404,
9405,
9408,
9410,
9415,
9421,
9422,
9429,
9431,
9441,
9444,
9445,
9446,
9456,
9467,
9473,
9474,
9475,
9477,
9478,
9488,
9506,
9524,
9525,
9526,
9544,
9549,
9579,
9580,
9966,
10109,
10351,
10352,
10365,
10366,
10367,
10372,
10435,
10597,
10598,
11465,
11466,
12215,
12234,
12241,
12242,
12244,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
float ves_icall_System_Math_Abs_single (float);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
int ves_icall_System_Math_ILogB (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
int ves_icall_System_MathF_ILogB (float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_InternalGetAssemblyName_raw (int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
int ves_icall_System_Reflection_Assembly_InternalGetReferencedAssemblies_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 185,
ves_icall_System_Array_InternalCreate,
// token 190,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 191,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 192,
ves_icall_System_Array_CanChangePrimitive,
// token 193,
ves_icall_System_Array_FastCopy_raw,
// token 194,
ves_icall_System_Array_GetLength_raw,
// token 195,
ves_icall_System_Array_GetLowerBound_raw,
// token 196,
ves_icall_System_Array_GetGenericValue_icall,
// token 197,
ves_icall_System_Array_GetValueImpl_raw,
// token 198,
ves_icall_System_Array_SetGenericValue_icall,
// token 201,
ves_icall_System_Array_SetValueImpl_raw,
// token 202,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 319,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 320,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 322,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 351,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 352,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 353,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 373,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 374,
ves_icall_System_Enum_ToObject_raw,
// token 375,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 376,
ves_icall_System_Enum_get_underlying_type_raw,
// token 377,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 450,
ves_icall_System_Environment_get_ProcessorCount,
// token 451,
ves_icall_System_Environment_get_TickCount,
// token 452,
ves_icall_System_Environment_get_TickCount64,
// token 455,
ves_icall_System_Environment_FailFast_raw,
// token 515,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 516,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 518,
ves_icall_System_GC_SuppressFinalize_raw,
// token 520,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 522,
ves_icall_System_GC_GetGCMemoryInfo,
// token 524,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 529,
ves_icall_System_Object_MemberwiseClone_raw,
// token 537,
ves_icall_System_Math_Abs_double,
// token 538,
ves_icall_System_Math_Abs_single,
// token 539,
ves_icall_System_Math_Acos,
// token 540,
ves_icall_System_Math_Acosh,
// token 541,
ves_icall_System_Math_Asin,
// token 542,
ves_icall_System_Math_Asinh,
// token 543,
ves_icall_System_Math_Atan,
// token 544,
ves_icall_System_Math_Atan2,
// token 545,
ves_icall_System_Math_Atanh,
// token 546,
ves_icall_System_Math_Cbrt,
// token 547,
ves_icall_System_Math_Ceiling,
// token 548,
ves_icall_System_Math_Cos,
// token 549,
ves_icall_System_Math_Cosh,
// token 550,
ves_icall_System_Math_Exp,
// token 551,
ves_icall_System_Math_Floor,
// token 552,
ves_icall_System_Math_Log,
// token 553,
ves_icall_System_Math_Log10,
// token 554,
ves_icall_System_Math_Pow,
// token 555,
ves_icall_System_Math_Sin,
// token 556,
ves_icall_System_Math_Sinh,
// token 557,
ves_icall_System_Math_Sqrt,
// token 558,
ves_icall_System_Math_Tan,
// token 559,
ves_icall_System_Math_Tanh,
// token 560,
ves_icall_System_Math_FusedMultiplyAdd,
// token 561,
ves_icall_System_Math_ILogB,
// token 562,
ves_icall_System_Math_Log2,
// token 563,
ves_icall_System_Math_ModF,
// token 645,
ves_icall_System_MathF_Acos,
// token 646,
ves_icall_System_MathF_Acosh,
// token 647,
ves_icall_System_MathF_Asin,
// token 648,
ves_icall_System_MathF_Asinh,
// token 649,
ves_icall_System_MathF_Atan,
// token 650,
ves_icall_System_MathF_Atan2,
// token 651,
ves_icall_System_MathF_Atanh,
// token 652,
ves_icall_System_MathF_Cbrt,
// token 653,
ves_icall_System_MathF_Ceiling,
// token 654,
ves_icall_System_MathF_Cos,
// token 655,
ves_icall_System_MathF_Cosh,
// token 656,
ves_icall_System_MathF_Exp,
// token 657,
ves_icall_System_MathF_Floor,
// token 658,
ves_icall_System_MathF_Log,
// token 659,
ves_icall_System_MathF_Log10,
// token 660,
ves_icall_System_MathF_Pow,
// token 661,
ves_icall_System_MathF_Sin,
// token 662,
ves_icall_System_MathF_Sinh,
// token 663,
ves_icall_System_MathF_Sqrt,
// token 664,
ves_icall_System_MathF_Tan,
// token 665,
ves_icall_System_MathF_Tanh,
// token 666,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 667,
ves_icall_System_MathF_ILogB,
// token 668,
ves_icall_System_MathF_Log2,
// token 669,
ves_icall_System_MathF_ModF,
// token 793,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 794,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 802,
ves_icall_RuntimeType_make_array_type_raw,
// token 805,
ves_icall_RuntimeType_make_byref_type_raw,
// token 807,
ves_icall_RuntimeType_MakePointerType_raw,
// token 812,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 813,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 815,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 816,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 821,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 822,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 823,
ves_icall_System_RuntimeType_getFullName_raw,
// token 824,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 826,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 827,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 828,
ves_icall_RuntimeType_GetFields_native_raw,
// token 831,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 832,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 835,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 836,
ves_icall_RuntimeType_get_Name_raw,
// token 837,
ves_icall_RuntimeType_get_Namespace_raw,
// token 907,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 908,
ves_icall_reflection_get_token_raw,
// token 910,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 918,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 919,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 920,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 921,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 922,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 926,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 927,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 928,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 929,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 930,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 931,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 933,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 934,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 935,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 937,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 938,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 939,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 943,
ves_icall_System_String_FastAllocateString_raw,
// token 944,
ves_icall_System_String_InternalIsInterned_raw,
// token 945,
ves_icall_System_String_InternalIntern_raw,
// token 1213,
ves_icall_System_Type_internal_from_handle_raw,
// token 1403,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1404,
ves_icall_System_ValueType_Equals_raw,
// token 7507,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7508,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7510,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7511,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7512,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7513,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7514,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7516,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7518,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7520,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 7521,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7522,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 7530,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7532,
mono_monitor_exit_icall_raw,
// token 7536,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 7537,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7539,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7541,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7543,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7556,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 7565,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7566,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7568,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7569,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7570,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7571,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7572,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7574,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7576,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8589,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8593,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8595,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8596,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8597,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8598,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8651,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8652,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8653,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8654,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8673,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8674,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8675,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8676,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 8712,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8760,
mono_object_hash_icall_raw,
// token 8763,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8772,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8773,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8774,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9157,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9158,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9163,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9164,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9165,
ves_icall_System_Reflection_Assembly_InternalGetAssemblyName_raw,
// token 9200,
mono_digest_get_public_token,
// token 9201,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9202,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 9221,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9227,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9234,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9244,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9247,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9327,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9328,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9340,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 9341,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 9342,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 9343,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9344,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9345,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9346,
ves_icall_System_Reflection_Assembly_InternalGetReferencedAssemblies_raw,
// token 9353,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9366,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9386,
ves_icall_reflection_get_token_raw,
// token 9387,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9395,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9397,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9404,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9405,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9408,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9410,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9415,
ves_icall_reflection_get_token_raw,
// token 9421,
ves_icall_get_method_info_raw,
// token 9422,
ves_icall_get_method_attributes,
// token 9429,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9431,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9441,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9444,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9445,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9446,
ves_icall_reflection_get_token_raw,
// token 9456,
ves_icall_InternalInvoke_raw,
// token 9467,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9473,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9474,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9475,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9477,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9478,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9488,
ves_icall_InternalInvoke_raw,
// token 9506,
ves_icall_reflection_get_token_raw,
// token 9524,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 9525,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 9526,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9544,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 9549,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9579,
ves_icall_reflection_get_token_raw,
// token 9580,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9966,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10109,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10351,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10352,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10365,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10366,
ves_icall_ModuleBuilder_getToken_raw,
// token 10367,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10372,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10435,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10597,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10598,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11465,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 11466,
ves_icall_System_Diagnostics_Debugger_Log,
// token 12215,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12234,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12241,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 12242,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12244,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
};
