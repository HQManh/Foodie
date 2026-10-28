// rea decompile_all
// name: CakeOrder.InGame.UIEndGameWin$$ApplyAndShowAutoCurrencyFly
// address: 0x429be00
// body: available
// range: 0x429be00-0x429bfb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429bfac to 0x452ab00 Utilities.UIImageFlyToCounter$$ShowCurrencyFly (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x429bfb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIEndGameWin__ApplyAndShowAutoCurrencyFly(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_09517201 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_0921e738);
    DAT_09517201 = 1;
  }
  if ((*(char *)(param_1 + 0x15c) == '\0') &&
     (*(undefined1 *)(param_1 + 0x15c) = 1, 0 < *(int *)(param_1 + 0x1bc))) {
    lVar4 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      lVar5 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x48);
      lVar4 = *(long *)(DAT_091b4b48 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if ((lVar5 != 0) && (**(long **)(lVar4 + 0xb8) != 0)) {
        CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                  (**(long **)(lVar4 + 0xb8),*(undefined8 *)(lVar5 + 0x18),
                   *(undefined4 *)(param_1 + 0x1bc),DAT_0921e738,0,0);
        lVar4 = *(long *)(DAT_091b4b48 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        if (**(long **)(lVar4 + 0xb8) != 0) {
          CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar4 + 0xb8),0);
          if ((*(long *)(param_1 + 0x130) != 0) &&
             (lVar4 = *(long *)(*(long *)(param_1 + 0x130) + 0x30), lVar4 != 0)) {
            iVar1 = *(int *)(param_1 + 0x1bc);
            iVar2 = *(int *)(param_1 + 0x150);
            iVar3 = 0;
            if (iVar2 != 0) {
              iVar3 = iVar1 / iVar2;
            }
            if (iVar1 != iVar3 * iVar2 && -1 < iVar1 - iVar3 * iVar2) {
              iVar3 = iVar3 + 1;
            }
            if (*(int *)(param_1 + 0x154) <= iVar3) {
              iVar3 = *(int *)(param_1 + 0x154);
            }
            Utilities_UIImageFlyToCounter__ShowCurrencyFly
                      (0,lVar4,iVar1,iVar3,*(undefined8 *)(param_1 + 0x148),0,0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

