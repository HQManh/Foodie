// rea decompile_all
// name: CakeOrder.Localization.CakeLocalization$$SetActiveMap
// address: 0x42dcf74
// body: available
// range: 0x42dcf74-0x42dd0d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42dd0b8 to 0x42dce88 CakeOrder.Localization.CakeLocalization$$Release (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42dd0cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42dd0d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_CakeLocalization__SetActiveMap(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_0951741d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09187a78);
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_0951741d = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_09187a78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = CakeOrder_Localization_LocTables__Map(param_1);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182278);
    }
    uVar1 = System_String__op_Equality
                      (lVar2,*(undefined8 *)(*(long *)(DAT_09182278 + 0xb8) + 0x20),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar3 = (long *)(*(long *)(DAT_09182278 + 0xb8) + 0x20);
      lVar5 = *plVar3;
      *plVar3 = lVar2;
      thunk_FUN_03f5d7b8(plVar3,lVar2);
      lVar4 = FUN_03f5c394(DAT_091805f8,1);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(long *)(lVar4 + 0x20) = lVar2;
      thunk_FUN_03f5d7b8((long *)(lVar4 + 0x20),lVar2);
      auVar6 = CakeOrder_Localization_CakeLocalization__PreloadAsync(lVar4);
      Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar6._0_8_,auVar6._8_8_,0);
      if (lVar5 != 0) {
        if (*(int *)(DAT_09182278 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CakeOrder_Localization_CakeLocalization__Release(lVar5);
        return;
      }
    }
  }
  return;
}

