// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo$$InitSerialize
// address: 0x74c018c
// body: available
// range: 0x74c018c-0x74c04db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c027c to 0x74bf814 System.Runtime.Serialization.Formatters.Binary.WriteObjectInfo$$InitNoMembers (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c04d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitSerialize
               (long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,long *param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  undefined8 local_58;
  
  if ((DAT_09521482 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09184940);
    FUN_03f5c2a4(&DAT_09186790);
    FUN_03f5c2a4(&DAT_0918a8b8);
    FUN_03f5c2a4(&DAT_0918a968);
    DAT_09521482 = 1;
  }
  local_58 = 0;
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),param_2);
  *(undefined8 *)(param_1 + 0x58) = param_5;
  *(undefined8 *)(param_1 + 0x50) = param_4;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),0);
  *(undefined8 *)(param_1 + 0x60) = param_6;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),param_6);
  if (param_2 == 0) {
LAB_074c04d8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = System_Type__get_IsArray(param_2,0);
  if ((uVar2 & 1) != 0) {
    System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitNoMembers(param_1);
    return;
  }
  if (param_8 != (long *)0x0) {
    (**(code **)(*param_8 + 0x178))
              (param_8,*(undefined8 *)(param_1 + 0x20),param_1 + 0x80,param_1 + 0x78,
               *(undefined8 *)(*param_8 + 0x180));
  }
  local_58 = 0;
  if (param_3 != (long *)0x0) {
    lVar6 = *param_3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09186790) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_074c02fc;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_3,DAT_09186790,0);
LAB_074c02fc:
    uVar4 = (*(code *)*puVar3)(param_3,param_2,param_4,param_5,&local_58,puVar3[1]);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    thunk_FUN_03f5d7b8();
  }
  if (*(long *)(param_1 + 0x48) == 0) {
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(DAT_09182b98 + 0xb8);
    if (*(long *)(lVar6 + 0xc0) == param_2) goto LAB_074c0398;
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar6 = *(long *)(DAT_09182b98 + 0xb8);
    }
    plVar5 = *(long **)(lVar6 + 0x30);
    if (plVar5 == (long *)0x0) goto LAB_074c04d8;
    uVar2 = (**(code **)(*plVar5 + 0x2b8))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x2c0));
    if ((uVar2 & 1) == 0) goto LAB_074c0398;
    if (*(int *)(DAT_09184940 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Runtime_Serialization_FormatterServices__UnsafeTypeForwardersIsEnabled(0);
    uVar4 = thunk_FUN_03f9944c(DAT_0918a968);
    System_Runtime_Serialization_SerializationInfo___ctor
              (uVar4,param_2,param_7,(uVar1 ^ 0xffffffff) & 1);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar4);
    uVar4 = thunk_FUN_03f9944c(DAT_0918a8b8);
    System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache___ctor(uVar4,param_2);
    puVar3 = (undefined8 *)(param_1 + 0x38);
    *puVar3 = uVar4;
    thunk_FUN_03f5d7b8(puVar3,uVar4);
    System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__CheckTypeForwardedFrom
              (*puVar3,param_2,*(undefined8 *)(param_1 + 0x80));
  }
  else {
    uVar4 = thunk_FUN_03f9944c(DAT_0918a968);
    System_Runtime_Serialization_SerializationInfo___ctor(uVar4,param_2,param_7,0);
    *(undefined8 *)(param_1 + 0x30) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar4);
    uVar4 = thunk_FUN_03f9944c(DAT_0918a8b8);
    System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCache___ctor(uVar4,param_2);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar4);
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
LAB_074c0398:
  if (*(char *)(param_1 + 0x28) == '\0') {
    System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__InitMemberInfo(param_1);
    System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo__CheckTypeForwardedFrom
              (*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x80));
  }
  return;
}

