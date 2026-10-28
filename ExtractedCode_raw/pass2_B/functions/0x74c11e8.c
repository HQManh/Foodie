// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo$$GetMemberInfo
// address: 0x74c11e8
// body: available
// range: 0x74c11e8-0x74c1377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c1270 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c1370 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c1374 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__GetMemberInfo
          (long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if (*(long *)(*(long *)(param_1 + 0x30) + 0x28) != 0) {
      iVar1 = System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__Position
                        (param_1,param_2);
      if (iVar1 == -1) {
        return 0;
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        lVar8 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
        uVar2 = System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__Position
                          (param_1,param_2);
        if (lVar8 != 0) {
          if (*(uint *)(lVar8 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          return *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar3 = FUN_03f5c394(uVar3,1);
    plVar9 = *(long **)(param_1 + 0x18);
    puVar4 = &DAT_09208908;
  }
  else {
    uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar3 = FUN_03f5c394(uVar3,1);
    plVar9 = *(long **)(param_1 + 0x18);
    puVar4 = &DAT_09207aa0;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar4);
  uVar6 = 0;
  if (plVar9 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
  }
  uVar7 = thunk_FUN_03fc39d4(&DAT_091f5a98);
  uVar6 = System_String__Concat(uVar6,uVar7,param_2,0);
  FUN_039b1d98(uVar3);
  FUN_039b0da0(uVar3,uVar6);
  FUN_039af17c(uVar3,0,uVar6);
  uVar3 = System_Environment__GetResourceString(uVar5,uVar3,0);
  thunk_FUN_03fc39d4(&DAT_0918a948);
  uVar6 = thunk_FUN_03f9944c();
  System_Runtime_Serialization_SerializationException___ctor(uVar6,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091d6f20);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar3);
}

