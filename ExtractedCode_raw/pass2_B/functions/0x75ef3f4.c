// rea decompile_all
// name: System.Exception$$GetObjectData
// address: 0x75ef3f4
// body: available
// range: 0x75ef3f4-0x75ef86b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ef864 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ef868 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Exception__GetObjectData
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 local_64;
  
  if ((DAT_09521f24 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091716f0);
    FUN_03f5c2a4(&DAT_09171b90);
    FUN_03f5c2a4(&DAT_09172b78);
    FUN_03f5c2a4(&DAT_0920ba20);
    FUN_03f5c2a4(&DAT_0920c678);
    FUN_03f5c2a4(&DAT_0920ba18);
    FUN_03f5c2a4(&DAT_09203e48);
    FUN_03f5c2a4(&DAT_09204c00);
    FUN_03f5c2a4(&DAT_091fe9b8);
    FUN_03f5c2a4(&DAT_0920d4c0);
    FUN_03f5c2a4(&DAT_09203c68);
    FUN_03f5c2a4(&DAT_09207c40);
    FUN_03f5c2a4(&DAT_091fff08);
    FUN_03f5c2a4(&DAT_0920d888);
    FUN_03f5c2a4(&DAT_09201c28);
    DAT_09521f24 = 1;
  }
  if (param_2 != 0) {
    lVar1 = param_1[8];
    if ((param_1[7] != 0) && (lVar1 == 0)) {
      lVar1 = System_Environment__GetStackTrace(param_1,1,0);
    }
    if (param_1[0xd] == 0) {
      lVar2 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
      param_1[0xd] = lVar2;
      thunk_FUN_03f5d7b8(param_1 + 0xd,lVar2);
    }
    uVar3 = System_Exception__GetClassName(param_1);
    lVar2 = DAT_09535468;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar4 = System_Type__GetTypeFromHandle(lVar2 + 0x20,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_091fe9b8,uVar3,uVar4,0);
    lVar2 = param_1[3];
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_09207c40,lVar2,uVar3,0);
    lVar2 = param_1[4];
    uVar3 = System_Type__GetTypeFromHandle(DAT_09171b90,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_091fff08,lVar2,uVar3,0);
    lVar2 = param_1[5];
    uVar3 = System_Type__GetTypeFromHandle(DAT_091716f0,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_09204c00,lVar2,uVar3,0);
    lVar2 = param_1[6];
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_09203e48,lVar2,uVar3,0);
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_0920d888,lVar1,uVar3,0);
    lVar1 = param_1[9];
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_0920ba20,lVar1,uVar3,0);
    local_64 = (undefined4)param_1[10];
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_64);
    uVar4 = System_Type__GetTypeFromHandle(DAT_09535420 + 0x20,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_0920ba18,uVar3,uVar4,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_09201c28,0,0);
    System_Runtime_Serialization_SerializationInfo__AddValue
              (param_2,DAT_09203c68,(int)param_1[0xc],0);
    lVar1 = param_1[0xd];
    uVar3 = System_Type__GetTypeFromHandle(DAT_09535468 + 0x20,0);
    System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_0920d4c0,lVar1,uVar3,0);
    if ((param_1[0xe] != 0) &&
       (uVar5 = System_Runtime_Serialization_SafeSerializationManager__get_IsActive(param_1[0xe],0),
       uVar3 = DAT_09172b78, (uVar5 & 1) != 0)) {
      lVar1 = param_1[0xe];
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      System_Runtime_Serialization_SerializationInfo__AddValue(param_2,DAT_0920c678,lVar1,uVar3,0);
      if (param_1[0xe] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Runtime_Serialization_SafeSerializationManager__CompleteSerialization
                (param_1[0xe],param_1,param_2,param_3,param_4,0);
    }
    return;
  }
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar3 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_0921d490);
  System_ArgumentNullException___ctor(uVar3,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091cb938);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

