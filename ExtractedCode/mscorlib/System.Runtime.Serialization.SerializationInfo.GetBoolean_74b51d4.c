// rea decompile_all
// name: System.Runtime.Serialization.SerializationInfo$$GetBoolean
// address: 0x74b51d4
// body: available
// range: 0x74b51d4-0x74b531f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74b5318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74b531c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte System_Runtime_Serialization_SerializationInfo__GetBoolean(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long local_38;
  
  if ((DAT_09521441 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185c18);
    DAT_09521441 = 1;
  }
  local_38 = 0;
  plVar3 = (long *)System_Runtime_Serialization_SerializationInfo__GetElement
                             (param_1,param_2,&local_38);
  lVar1 = local_38;
  lVar4 = DAT_09535400;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  lVar4 = System_Type__GetTypeFromHandle(lVar4 + 0x20,0);
  if (lVar1 == lVar4) {
    if (plVar3 == (long *)0x0) goto LAB_074b5318;
    if (*(long *)(*plVar3 + 0x40) != *(long *)(DAT_09535400 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar3);
    }
    pcVar6 = (char *)thunk_FUN_03f99594();
    bVar2 = *pcVar6 != '\0';
  }
  else {
    plVar9 = *(long **)(param_1 + 0x38);
    if (plVar9 == (long *)0x0) {
LAB_074b5318:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185c18) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_074b52f0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185c18,1);
LAB_074b52f0:
    bVar2 = (*(code *)*puVar5)(plVar9,plVar3,puVar5[1]);
  }
  return bVar2 & 1;
}

