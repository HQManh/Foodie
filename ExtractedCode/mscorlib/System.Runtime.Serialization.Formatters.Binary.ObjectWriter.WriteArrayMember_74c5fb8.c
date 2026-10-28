// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectWriter$$WriteArrayMember
// address: 0x74c5fb8
// body: available
// range: 0x74c5fb8-0x74c6257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c6238 to 0x74c99e8 System.Runtime.Serialization.Formatters.Binary.SerStack$$Push (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c6254 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteArrayMember
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_095214ab & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    DAT_095214ab = 1;
  }
  if (param_3 == 0) goto LAB_074c6254;
  *(undefined1 *)(param_3 + 0x3a) = 1;
  uVar2 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__CheckForNull
                    (param_1,param_2,param_3,param_3,param_4);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(char *)(param_3 + 0x3c) == '\0') {
    uVar2 = System_Runtime_Serialization_Formatters_Binary_NameInfo__get_IsSealed(param_3,0);
    lVar4 = param_3;
    if ((uVar2 & 1) == 0) {
      if (param_4 == 0) goto LAB_074c6254;
      lVar3 = System_Object__GetType(param_4,0);
      if (*(long *)(param_3 + 0x30) != lVar3) {
        if (lVar3 == 0) goto LAB_074c6030;
        goto LAB_074c6040;
      }
    }
  }
  else {
    if (param_4 == 0) goto LAB_074c6254;
LAB_074c6030:
    lVar3 = System_Object__GetType(param_4,0);
LAB_074c6040:
    uVar1 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__ToCode(param_1,lVar3);
    lVar4 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__TypeToNameInfo
                      (param_1,lVar3,0,uVar1,0);
    if (lVar4 == 0) goto LAB_074c6254;
    uVar8 = *(undefined8 *)(param_3 + 0x20);
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    *(undefined1 *)(lVar4 + 0x3c) = 1;
    *(undefined8 *)(lVar4 + 0x20) = uVar8;
    *(undefined8 *)(lVar4 + 0x18) = uVar6;
  }
  *(undefined1 *)(lVar4 + 0x3a) = 1;
  uVar2 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteKnownValueClass
                    (param_1,param_3,lVar4,param_4);
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_3 + 0x30);
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__Schedule
                      (param_1,param_4,lVar3 == *(long *)(*(long *)(DAT_09182b98 + 0xb8) + 0xc0),
                       *(undefined8 *)(lVar4 + 0x30),0);
    *(ulong *)(param_3 + 0x18) = uVar2;
    *(ulong *)(lVar4 + 0x18) = uVar2;
    if ((long)uVar2 < 1) {
      lVar5 = System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__Serialize
                        (param_4,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                         *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x78),
                         *(undefined8 *)(param_1 + 0x80),param_1,*(undefined8 *)(param_1 + 0x70));
      lVar3 = DAT_09182b98;
      if (lVar5 == 0) goto LAB_074c6254;
      lVar7 = *(long *)(param_3 + 0x30);
      *(ulong *)(lVar5 + 0x68) = uVar2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar3 = DAT_09182b98;
      }
      if ((lVar7 == *(long *)(*(long *)(lVar3 + 0xb8) + 0xc0)) ||
         (lVar3 = System_Nullable__GetUnderlyingType(*(undefined8 *)(param_3 + 0x30),0), lVar3 != 0)
         ) {
        uVar6 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__GetAssemblyId
                          (param_1,lVar5);
      }
      else {
        uVar6 = *(undefined8 *)(lVar4 + 0x20);
      }
      *(undefined8 *)(lVar5 + 0x70) = uVar6;
      lVar3 = System_Runtime_Serialization_Formatters_Binary_ObjectWriter__TypeToNameInfo
                        (param_1,lVar5);
      if (lVar3 == 0) goto LAB_074c6254;
      *(ulong *)(lVar3 + 0x18) = uVar2;
      *(ulong *)(lVar5 + 0x68) = uVar2;
      System_Runtime_Serialization_Formatters_Binary_ObjectWriter__Write(param_1,lVar5,lVar4,lVar3);
      System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__PutObjectInfo
                (*(undefined8 *)(lVar5 + 0x60),lVar5);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x40);
      if (lVar3 == 0) goto LAB_074c6254;
      System_Runtime_Serialization_Formatters_Binary___BinaryWriter__InternalWriteItemNull(lVar3);
      System_Runtime_Serialization_Formatters_Binary___BinaryWriter__WriteMemberObjectRef
                (lVar3,param_3,uVar2 & 0xffffffff);
    }
  }
  if (*(char *)(param_3 + 0x3c) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    System_Runtime_Serialization_Formatters_Binary_SerStack__Push(*(long *)(param_1 + 0xb8),lVar4,0)
    ;
    return;
  }
LAB_074c6254:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

