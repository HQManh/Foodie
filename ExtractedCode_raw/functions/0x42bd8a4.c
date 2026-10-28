// rea decompile_all
// name: CakeOrder.UI.UIPopupListRewardClaimed$$ShowElement
// address: 0x42bd8a4
// body: available
// range: 0x42bd8a4-0x42bdc2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42bdc18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bdc1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bdc20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bdc24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bdc28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIPopupListRewardClaimed__ShowElement
               (float param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined8 local_88;
  undefined8 *puStack_80;
  long *local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long *local_60;
  
  if ((DAT_09517301 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4a60);
    FUN_03f5c2a4(&DAT_091a4a68);
    FUN_03f5c2a4(&DAT_091a4a70);
    FUN_03f5c2a4(&DAT_091b1298);
    FUN_03f5c2a4(&DAT_091ad640);
    FUN_03f5c2a4(&DAT_091b14a0);
    DAT_09517301 = 1;
  }
  puStack_68 = (undefined8 *)0x0;
  local_70 = 0;
  local_60 = (long *)0x0;
  if (*(long *)(param_2 + 0xf8) != 0) {
    FUN_057e185c(&local_88,*(long *)(param_2 + 0xf8),DAT_091b1298);
    local_60 = local_78;
    puStack_68 = puStack_80;
    local_70 = local_88;
    local_88 = 0;
    puStack_80 = &local_70;
    while (uVar1 = FUN_071bd28c(&local_70,DAT_091a4a68), (uVar1 & 1) != 0) {
      if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*local_60 + 0x1a8))(local_60,*(undefined8 *)(*local_60 + 0x1b0));
    }
    FUN_071bd288(&local_70,DAT_091a4a60);
  }
  if (*(long *)(param_2 + 0x100) != 0) {
    FUN_057e185c(&local_88,*(long *)(param_2 + 0x100),DAT_091b1298);
    local_60 = local_78;
    puStack_68 = puStack_80;
    local_70 = local_88;
    local_88 = 0;
    puStack_80 = &local_70;
    while (uVar1 = FUN_071bd28c(&local_70,DAT_091a4a68), (uVar1 & 1) != 0) {
      if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*local_60 + 0x1a8))(local_60,*(undefined8 *)(*local_60 + 0x1b0));
    }
    FUN_071bd288(&local_70,DAT_091a4a60);
  }
  if (*(char *)(param_2 + 0x168) == '\0') {
    lVar2 = *(long *)(param_2 + 0x180);
    if (lVar2 != 0) {
      iVar3 = 0;
      while (*(long *)(lVar2 + 0x10) != 0) {
        if (*(int *)(*(long *)(lVar2 + 0x10) + 0x18) <= iVar3) goto LAB_042bda20;
        if ((*(long *)(param_2 + 0x170) == 0) ||
           (lVar2 = FUN_057e0998(*(long *)(param_2 + 0x170),iVar3,DAT_091b14a0), lVar2 == 0)) break;
        CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar2,0);
        lVar2 = *(long *)(param_2 + 0x180);
        iVar3 = iVar3 + 1;
        if (lVar2 == 0) break;
      }
    }
  }
  else if (*(long *)(param_2 + 0x158) != 0) {
    CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(param_2 + 0x158),0);
LAB_042bda20:
    CakeOrder_BaseUI_UIElementWithAnim__ShowElement(param_1,param_2,param_3,0);
    param_1 = *(float *)(param_2 + 0xf0) + param_1;
    if (*(long *)(param_2 + 0xf8) != 0) {
      FUN_057e185c(&local_88,*(long *)(param_2 + 0xf8),DAT_091b1298);
      local_60 = local_78;
      puStack_68 = puStack_80;
      local_70 = local_88;
      local_88 = 0;
      puStack_80 = &local_70;
      while (uVar1 = FUN_071bd28c(&local_70,DAT_091a4a68), (uVar1 & 1) != 0) {
        param_1 = param_1 + 0.05;
        if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*local_60 + 0x188))(param_1,local_60,0,*(undefined8 *)(*local_60 + 400));
      }
      FUN_071bd288(&local_70,DAT_091a4a60);
    }
    if (*(char *)(param_2 + 0x168) == '\0') {
      lVar2 = *(long *)(param_2 + 0x180);
      if (lVar2 != 0) {
        iVar3 = 0;
        while (*(long *)(lVar2 + 0x10) != 0) {
          if (*(int *)(*(long *)(lVar2 + 0x10) + 0x18) <= iVar3) goto LAB_042bdad4;
          if ((*(long *)(param_2 + 0x170) == 0) ||
             (lVar2 = FUN_057e0998(*(long *)(param_2 + 0x170),iVar3,DAT_091b14a0), lVar2 == 0))
          break;
          param_1 = param_1 + 0.05;
          CakeOrder_BaseUI_UIElementAbstract__Show(param_1,lVar2,0);
          lVar2 = *(long *)(param_2 + 0x180);
          iVar3 = iVar3 + 1;
          if (lVar2 == 0) break;
        }
      }
    }
    else if (*(long *)(param_2 + 0x158) != 0) {
      param_1 = param_1 + 0.05;
      CakeOrder_BaseUI_UIElementAbstract__Show(param_1,*(long *)(param_2 + 0x158),0);
LAB_042bdad4:
      if (*(long *)(param_2 + 0x100) != 0) {
        FUN_057e185c(&local_88,*(long *)(param_2 + 0x100),DAT_091b1298);
        local_60 = local_78;
        puStack_68 = puStack_80;
        local_70 = local_88;
        local_88 = 0;
        puStack_80 = &local_70;
        while (uVar1 = FUN_071bd28c(&local_70,DAT_091a4a68), (uVar1 & 1) != 0) {
          if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          param_1 = param_1 + 0.05;
          (**(code **)(*local_60 + 0x188))(param_1,local_60,0,*(undefined8 *)(*local_60 + 400));
        }
        FUN_071bd288(&local_70,DAT_091a4a60);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

