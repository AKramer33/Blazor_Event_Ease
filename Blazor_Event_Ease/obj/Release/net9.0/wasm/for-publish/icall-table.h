#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
187,
198,
199,
200,
201,
202,
203,
204,
205,
206,
209,
210,
319,
320,
321,
344,
345,
346,
363,
364,
365,
461,
462,
463,
466,
498,
499,
501,
503,
505,
507,
512,
520,
521,
522,
523,
524,
525,
526,
527,
607,
616,
617,
686,
692,
695,
697,
702,
703,
705,
706,
710,
711,
713,
714,
717,
718,
719,
722,
724,
727,
729,
731,
740,
804,
806,
808,
818,
819,
820,
822,
828,
829,
830,
831,
832,
840,
841,
842,
846,
847,
849,
853,
854,
855,
1147,
1307,
1308,
7396,
7397,
7399,
7400,
7401,
7402,
7403,
7405,
7406,
7407,
7424,
7426,
7431,
7433,
7435,
7437,
7488,
7489,
7491,
7492,
7493,
7494,
7495,
7497,
7499,
8461,
8465,
8467,
8468,
8469,
8470,
8885,
8886,
8887,
8888,
8906,
8907,
8908,
8952,
9017,
9020,
9028,
9029,
9030,
9031,
9032,
9309,
9313,
9314,
9341,
9375,
9382,
9389,
9400,
9404,
9427,
9505,
9507,
9516,
9518,
9519,
9526,
9541,
9561,
9562,
9570,
9572,
9579,
9580,
9583,
9585,
9590,
9596,
9597,
9604,
9606,
9618,
9621,
9622,
9623,
9634,
9644,
9650,
9651,
9652,
9654,
9655,
9672,
9674,
9689,
9707,
9734,
9764,
9765,
10248,
10332,
10333,
10517,
10518,
10522,
10523,
10524,
10529,
10580,
10979,
10980,
11176,
11181,
11191,
11989,
12010,
12012,
12014,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
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
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw (int,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
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
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
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
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
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
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 187,
ves_icall_System_Array_InternalCreate,
// token 198,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 199,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 200,
ves_icall_System_Array_CanChangePrimitive,
// token 201,
ves_icall_System_Array_FastCopy,
// token 202,
ves_icall_System_Array_GetLengthInternal_raw,
// token 203,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 204,
ves_icall_System_Array_GetGenericValue_icall,
// token 205,
ves_icall_System_Array_GetValueImpl_raw,
// token 206,
ves_icall_System_Array_SetGenericValue_icall,
// token 209,
ves_icall_System_Array_SetValueImpl_raw,
// token 210,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 319,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 320,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 321,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 344,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 345,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 346,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 363,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 364,
ves_icall_System_Enum_InternalGetCorElementType,
// token 365,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 461,
ves_icall_System_Environment_get_ProcessorCount,
// token 462,
ves_icall_System_Environment_get_TickCount,
// token 463,
ves_icall_System_Environment_get_TickCount64,
// token 466,
ves_icall_System_Environment_FailFast_raw,
// token 498,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 499,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 501,
ves_icall_System_GC_SuppressFinalize_raw,
// token 503,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 505,
ves_icall_System_GC_GetGCMemoryInfo,
// token 507,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 512,
ves_icall_System_Object_MemberwiseClone_raw,
// token 520,
ves_icall_System_Math_Ceiling,
// token 521,
ves_icall_System_Math_Cos,
// token 522,
ves_icall_System_Math_Floor,
// token 523,
ves_icall_System_Math_Pow,
// token 524,
ves_icall_System_Math_Sin,
// token 525,
ves_icall_System_Math_Sqrt,
// token 526,
ves_icall_System_Math_Tan,
// token 527,
ves_icall_System_Math_ModF,
// token 607,
ves_icall_RuntimeMethodHandle_GetFunctionPointer_raw,
// token 616,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 617,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 686,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 692,
ves_icall_RuntimeType_make_array_type_raw,
// token 695,
ves_icall_RuntimeType_make_byref_type_raw,
// token 697,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 702,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 703,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 705,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 706,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 710,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 711,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 713,
ves_icall_System_RuntimeType_getFullName_raw,
// token 714,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 717,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 718,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 719,
ves_icall_RuntimeType_GetFields_native_raw,
// token 722,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 724,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 727,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 729,
ves_icall_RuntimeType_GetName_raw,
// token 731,
ves_icall_RuntimeType_GetNamespace_raw,
// token 740,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 804,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 806,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 808,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 818,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 819,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 820,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 822,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 828,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 829,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 830,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 831,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 832,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 840,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 841,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 842,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 846,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 847,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 849,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 853,
ves_icall_System_String_FastAllocateString_raw,
// token 854,
ves_icall_System_String_InternalIsInterned_raw,
// token 855,
ves_icall_System_String_InternalIntern_raw,
// token 1147,
ves_icall_System_Type_internal_from_handle_raw,
// token 1307,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1308,
ves_icall_System_ValueType_Equals_raw,
// token 7396,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 7397,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 7399,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 7400,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 7401,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 7402,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 7403,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 7405,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 7406,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 7407,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 7424,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 7426,
mono_monitor_exit_icall_raw,
// token 7431,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 7433,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 7435,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 7437,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 7488,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7489,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7491,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7492,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7493,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7494,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7495,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7497,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7499,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 8461,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8465,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8467,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8468,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8469,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8470,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8885,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8886,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8887,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8888,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8906,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8907,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8908,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8952,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9017,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 9020,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9028,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9029,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9030,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 9031,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9032,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalBox_raw,
// token 9309,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9313,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9314,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9341,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9375,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9382,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9389,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9400,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9404,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9427,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 9505,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9507,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9516,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9518,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9519,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9526,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9541,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9561,
ves_icall_reflection_get_token_raw,
// token 9562,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9570,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9572,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9579,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9580,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9583,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9585,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9590,
ves_icall_reflection_get_token_raw,
// token 9596,
ves_icall_get_method_info_raw,
// token 9597,
ves_icall_get_method_attributes,
// token 9604,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9606,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9618,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9621,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9622,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9623,
ves_icall_reflection_get_token_raw,
// token 9634,
ves_icall_InternalInvoke_raw,
// token 9644,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9650,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9651,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9652,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9654,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9655,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9672,
ves_icall_InvokeClassConstructor_raw,
// token 9674,
ves_icall_InternalInvoke_raw,
// token 9689,
ves_icall_reflection_get_token_raw,
// token 9707,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9734,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9764,
ves_icall_reflection_get_token_raw,
// token 9765,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10248,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10332,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10333,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10517,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10518,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10522,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10523,
ves_icall_ModuleBuilder_getToken_raw,
// token 10524,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 10529,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10580,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10979,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10980,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11176,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 11181,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 11191,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11989,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12010,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12012,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12014,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
0,
0,
0,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
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
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
};
