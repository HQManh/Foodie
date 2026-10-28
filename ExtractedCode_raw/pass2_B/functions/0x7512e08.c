// rea decompile_all
// name: System.TimeZoneInfo$$GetPreviousAdjustmentRule
// address: 0x7512e08
// body: available
// range: 0x7512e08-0x7512f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7512f20 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7512f24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_TimeZoneInfo__GetPreviousAdjustmentRule(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong local_28;
  
  local_28 = param_3;
  if ((DAT_095216f3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_091b6fc0);
    DAT_095216f3 = 1;
  }
  if (((param_3 & 0xff) != 0) && (iVar3 = FUN_05c307a4(&local_28,DAT_091b6fc0), 0 < iVar3)) {
    iVar3 = FUN_05c307a4(&local_28,DAT_091b6fc0);
    lVar6 = *(long *)(param_1 + 0x40);
    if (lVar6 == 0) goto LAB_07512f24;
    if (iVar3 < *(int *)(lVar6 + 0x18)) {
      uVar4 = FUN_05c307a4(&local_28,DAT_091b6fc0);
      uVar5 = *(uint *)(lVar6 + 0x18);
LAB_07512efc:
      if (uVar4 - 1 < uVar5) {
        return *(long *)(lVar6 + (long)(int)(uVar4 - 1) * 8 + 0x20);
      }
LAB_07512f20:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 != 0) {
    uVar5 = *(uint *)(lVar6 + 0x18);
    uVar1 = uVar5;
    if ((int)uVar5 < 2) {
      uVar1 = 1;
    }
    uVar2 = uVar5;
    if (uVar5 < 2) {
      uVar2 = 1;
    }
    if (1 < (int)uVar5) {
      uVar4 = 1;
      do {
        if (uVar2 == uVar4) goto LAB_07512f20;
        if (*(long *)(lVar6 + (long)(int)uVar4 * 8 + 0x20) == param_2) goto LAB_07512efc;
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
    return param_2;
  }
LAB_07512f24:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

