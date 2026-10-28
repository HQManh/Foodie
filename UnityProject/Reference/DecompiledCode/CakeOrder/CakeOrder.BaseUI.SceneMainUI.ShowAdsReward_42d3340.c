// rea decompile_all
// name: CakeOrder.BaseUI.SceneMainUI$$ShowAdsReward
// address: 0x42d3340
// body: available
// range: 0x42d3340-0x42d35bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d35b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d35b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d35b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d35bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_SceneMainUI__ShowAdsReward
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 *puVar5;
  
  if ((DAT_095173b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091839b0);
    FUN_03f5c2a4(&DAT_091b48b0);
    FUN_03f5c2a4(&DAT_091b48b8);
    FUN_03f5c2a4(&DAT_091ef818);
    FUN_03f5c2a4(&DAT_091941d0);
    FUN_03f5c2a4(&DAT_09224078);
    FUN_03f5c2a4(&DAT_09224018);
    DAT_095173b3 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091941d0);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),param_3);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),param_1);
  *(undefined8 *)(lVar1 + 0x30) = param_4;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30),param_4);
  puVar5 = (undefined8 *)(lVar1 + 0x28);
  *puVar5 = DAT_09224018;
  *(undefined1 *)(lVar1 + 0x10) = 0;
  thunk_FUN_03f5d7b8(puVar5);
  uVar2 = FUN_05a8eda4(DAT_091b48b8);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(DAT_091b48b0 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    IapAdsSystem_AdsManager__TrackRewardClick(**(long **)(lVar3 + 0xb8),param_2,0);
  }
  uVar2 = FUN_05a8eda4(DAT_091b48b8);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(DAT_091b48b0 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = IapAdsSystem_AdsManager__get_IsRewardAvailable(**(long **)(lVar3 + 0xb8),0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(DAT_091b48b0 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = **(long **)(lVar3 + 0xb8);
      uVar4 = thunk_FUN_03f9944c(DAT_091839b0);
      IapAdsSystem_DelegateAdsShowResultEvent___ctor(uVar4,lVar1,DAT_091ef818,0);
      if (lVar3 != 0) {
        IapAdsSystem_AdsManager__ShowVideo(lVar3,param_2,uVar4,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  *puVar5 = DAT_09224078;
  thunk_FUN_03f5d7b8(puVar5);
  CakeOrder_BaseUI_SceneMainUI_<>c__DisplayClass78_0__<ShowAdsReward>g__OnDoneOrCanceled_0
            (lVar1,extraout_x1,2);
  return;
}

