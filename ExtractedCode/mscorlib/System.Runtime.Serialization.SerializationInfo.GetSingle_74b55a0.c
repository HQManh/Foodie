// rea decompile_all
// name: System.Runtime.Serialization.SerializationInfo$$GetSingle
// address: 0x74b55a0
// body: available
// range: 0x74b55a0-0x74b56df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b56d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b56dc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
System_Runtime_Serialization_SerializationInfo__GetSingle(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined4 uVar9;
  undefined4 extraout_s0;
  undefined4 uVar11;
  undefined4 extraout_var;
  undefined8 uVar12;
  undefined8 extraout_var_00;
  undefined1 auVar10 [16];
  long local_38;
  
  if ((DAT_09521444 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185c18);
    DAT_09521444 = 1;
  }
  local_38 = 0;
  plVar2 = (long *)System_Runtime_Serialization_SerializationInfo__GetElement
                             (param_1,param_2,&local_38);
  lVar1 = local_38;
  lVar3 = DAT_09535450;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  lVar3 = System_Type__GetTypeFromHandle(lVar3 + 0x20,0);
  if (lVar1 == lVar3) {
    if (plVar2 == (long *)0x0) goto LAB_074b56d8;
    if (*(long *)(*plVar2 + 0x40) != *(long *)(DAT_09535450 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar2);
    }
    puVar5 = (undefined4 *)thunk_FUN_03f99594();
    uVar9 = *puVar5;
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    plVar8 = *(long **)(param_1 + 0x38);
    if (plVar8 == (long *)0x0) {
LAB_074b56d8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185c18) {
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar7 + 4) * 0x10 + 0x138);
          goto LAB_074b56b4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185c18,4);
LAB_074b56b4:
    (*(code *)*puVar4)(plVar8,plVar2,puVar4[1]);
    uVar9 = extraout_s0;
    uVar11 = extraout_var;
    uVar12 = extraout_var_00;
  }
  auVar10._4_4_ = uVar11;
  auVar10._0_4_ = uVar9;
  auVar10._8_8_ = uVar12;
  return auVar10;
}

