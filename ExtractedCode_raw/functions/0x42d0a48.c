// rea decompile_all
// name: CakeOrder.BaseUI.SceneMainUI$$IsAnyPopupShowing
// address: 0x42d0a48
// body: available
// range: 0x42d0a48-0x42d0b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d0b38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d0b3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CakeOrder_BaseUI_SceneMainUI__IsAnyPopupShowing(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_0951739f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4a78);
    FUN_03f5c2a4(&DAT_091a4a80);
    FUN_03f5c2a4(&DAT_091a4a88);
    FUN_03f5c2a4(&DAT_091bb490);
    DAT_0951739f = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_061a17cc(&local_48,*(long *)(param_1 + 0x58),DAT_091bb490);
  do {
    uVar1 = FUN_071bec70(&local_48,DAT_091a4a80);
    if ((uVar1 & 1) == 0) break;
    lVar2 = FUN_071bed54(&local_48,DAT_091a4a88);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  } while (*(int *)(lVar2 + 0x28) != 1);
  FUN_071bec64(&local_48,DAT_091a4a78);
  return uVar1 & 1;
}

