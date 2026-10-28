// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo$$InitReadConstructor
// address: 0x74c09d4
// body: available
// range: 0x74c09d4-0x74c0b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c0a50 to 0x74c0d3c System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo$$InitNoMembers (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c0b80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__InitReadConstructor
               (long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 local_38;
  
  if ((DAT_09521489 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09186790);
    DAT_09521489 = 1;
  }
  local_38 = 0;
  if (param_2 == 0) {
LAB_074c0b80:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = System_Type__get_IsArray(param_2,0);
  if ((uVar1 & 1) != 0) {
    System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__InitNoMembers(param_1);
    return;
  }
  local_38 = 0;
  if (param_3 != (long *)0x0) {
    lVar5 = *param_3;
    uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09186790) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_074c0ab0;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_3,DAT_09186790,0);
LAB_074c0ab0:
    uVar3 = (*(code *)*puVar2)(param_3,param_2,param_4,param_5,&local_38,puVar2[1]);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    thunk_FUN_03f5d7b8();
  }
  if (*(long *)(param_1 + 0x50) == 0) {
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    if (*(long *)(lVar5 + 0xc0) == param_2) goto LAB_074c0aec;
    if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = *(long *)(DAT_09182b98 + 0xb8);
    }
    plVar4 = *(long **)(lVar5 + 0x30);
    if (plVar4 == (long *)0x0) goto LAB_074c0b80;
    uVar1 = (**(code **)(*plVar4 + 0x2b8))(plVar4,param_2,*(undefined8 *)(*plVar4 + 0x2c0));
    if ((uVar1 & 1) == 0) goto LAB_074c0aec;
  }
  *(undefined1 *)(param_1 + 0x2c) = 1;
LAB_074c0aec:
  if (*(char *)(param_1 + 0x2c) == '\0') {
    System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__InitMemberInfo(param_1);
  }
  else {
    System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__InitSiRead(param_1);
  }
  return;
}

