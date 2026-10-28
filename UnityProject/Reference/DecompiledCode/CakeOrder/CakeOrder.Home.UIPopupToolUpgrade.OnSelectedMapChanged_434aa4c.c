// rea decompile_all
// name: CakeOrder.Home.UIPopupToolUpgrade$$OnSelectedMapChanged
// address: 0x434aa4c
// body: available
// range: 0x434aa4c-0x434ab73 inclusive
// range: 0x434abc0-0x434ac8f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434ab68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434ab6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434ab70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434ac80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434ac84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434ac88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434ac8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIPopupToolUpgrade__OnSelectedMapChanged(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  
  if ((DAT_0951778d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a0690);
    FUN_03f5c2a4(&DAT_091a6a68);
    FUN_03f5c2a4(&DAT_091a6a70);
    FUN_03f5c2a4(&DAT_091a6a78);
    FUN_03f5c2a4(&DAT_091a99c0);
    FUN_03f5c2a4(&DAT_091a99c8);
    DAT_0951778d = 1;
  }
  local_40 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  uVar2 = CakeOrder_BaseUI_UIElementAbstract__get_IsShowing(param_1,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x100) == 0) goto LAB_0434ac8c;
    FUN_06fd8888(&local_88,*(long *)(param_1 + 0x100),DAT_091a0690);
    local_40 = local_68;
    puStack_58 = puStack_80;
    local_60 = local_88;
    local_48 = lStack_70;
    local_50 = local_78;
    local_88 = 0;
    puStack_80 = &local_60;
    while (uVar2 = FUN_072753d4(&local_60,DAT_091a6a70), (uVar2 & 1) != 0) {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *(long *)(local_48 + 0x20);
      uVar1 = System_String__op_Equality
                        (local_50,*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x20),0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_BaseUI_UIElementWithAnimHighlight__SetStateImmediate(lVar3,uVar1 & 1,0);
    }
  }
  else {
    if (*(long *)(param_1 + 0x100) == 0) goto LAB_0434ac8c;
    FUN_06fd8888(&local_88,*(long *)(param_1 + 0x100),DAT_091a0690);
    local_40 = local_68;
    puStack_58 = puStack_80;
    local_60 = local_88;
    local_48 = lStack_70;
    local_50 = local_78;
    local_88 = 0;
    puStack_80 = &local_60;
    while (uVar2 = FUN_072753d4(&local_60,DAT_091a6a70), (uVar2 & 1) != 0) {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *(long *)(local_48 + 0x20);
      uVar1 = System_String__op_Equality
                        (local_50,*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x20),0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_BaseUI_UIElementWithAnimHighlight__UpdateState(0,lVar3,uVar1 & 1,0);
    }
  }
  FUN_072754f4(&local_60,DAT_091a6a68);
  if (*(long *)(param_1 + 0xf8) != 0) {
    auVar4 = CakeOrder_Home_UIPopupToolUpgrade__LoadTabPage
                       (param_1,*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x20));
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar4._0_8_,auVar4._8_8_,0);
    return;
  }
LAB_0434ac8c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

