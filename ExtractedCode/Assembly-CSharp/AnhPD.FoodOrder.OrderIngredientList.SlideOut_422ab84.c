// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$SlideOut
// address: 0x422ab84
// body: available
// range: 0x422ab84-0x422ad93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422ad8c to 0x4d95e8c FUN_04d95e8c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x422ad90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_OrderIngredientList__SlideOut
          (undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_09516da7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_091af778);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091dbe90);
    DAT_09516da7 = 1;
  }
  AnhPD_FoodOrder_OrderIngredientList__CapturePos(param_3);
  DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_3 + 0xb0),0,0);
  lVar4 = *(long *)(DAT_091b48d0 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    CakeOrder_AudioManagerCakeOrder__PlaySfxAndHaptic
              (**(long **)(lVar4 + 0xb8),*(undefined8 *)(param_3 + 0x38),3,0);
    lVar4 = AnhPD_FoodOrder_OrderIngredientList__ShownTopDown(param_3);
    uVar5 = AnhPD_FoodOrder_OrderIngredientList__get_UsesSlots(param_3);
    if ((uVar5 & 1) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(param_3 + 0x11c) == '\0';
    }
    if (lVar4 != 0) {
      bVar1 = bVar2;
      if (1 < *(int *)(lVar4 + 0x18)) {
        bVar1 = true;
      }
      if ((*(int *)(lVar4 + 0x18) != 0) && (bVar1 != false)) {
        AnhPD_FoodOrder_OrderIngredientList__FreeBoards(param_3);
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = DG_Tweening_DOTween__Sequence(0);
        if (0 < *(int *)(lVar4 + 0x18)) {
          iVar8 = 0;
          do {
            uVar7 = FUN_057e0998(lVar4,iVar8,DAT_091af778);
            uVar3 = AnhPD_FoodOrder_OrderIngredientList__ExitsUp(param_3,lVar4,iVar8,bVar2);
            uVar7 = AnhPD_FoodOrder_OrderIngredientList__SlideBoardOut(param_3,uVar7,uVar3 & 1);
            DG_Tweening_TweenSettingsExtensions__Join(uVar6,uVar7,0);
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)(lVar4 + 0x18));
        }
        return uVar6;
      }
      uVar6 = *(undefined8 *)(param_3 + 0xb0);
      auVar9 = AnhPD_FoodOrder_OrderIngredientList__get_HiddenPos(param_3);
      uVar6 = DG_Tweening_DOTweenModuleUI__DOAnchorPos
                        (auVar9,param_2,*(undefined4 *)(param_3 + 0x28),uVar6,0,0);
      uVar6 = FUN_04d95e8c(uVar6,*(undefined4 *)(param_3 + 0x34),DAT_091dbe90);
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

