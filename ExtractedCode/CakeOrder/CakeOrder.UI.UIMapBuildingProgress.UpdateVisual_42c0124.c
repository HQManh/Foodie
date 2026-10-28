// rea decompile_all
// name: CakeOrder.UI.UIMapBuildingProgress$$UpdateVisual
// address: 0x42c0124
// body: available
// range: 0x42c0124-0x42c03bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c03b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIMapBuildingProgress__UpdateVisual(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  unkbyte10 Var8;
  
  if ((DAT_09517318 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_09192a18);
    FUN_03f5c2a4(&DAT_091dbcc0);
    FUN_03f5c2a4(&DAT_091dc030);
    FUN_03f5c2a4(&DAT_091f1768);
    FUN_03f5c2a4(&DAT_09195730);
    DAT_09517318 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09195730);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
    Var8 = CakeOrder_UI_UIMapBuildingProgress__ComputeState(param_1);
    lVar3 = *(long *)(param_1 + 0x20);
    *(byte *)(param_1 + 200) = (byte)((unkuint10)Var8 >> 0x48) & 1;
    iVar7 = (int)((unkuint10)Var8 >> 0x20);
    *(int *)(lVar2 + 0x18) = iVar7;
    *(byte *)(param_1 + 0xc9) = (byte)((unkuint10)Var8 >> 0x40) & 1;
    if (lVar3 != 0) {
      UnityEngine_UI_Slider__set_maxValue((float)iVar7,lVar3,0);
      uVar1 = CakeOrder_UI_UIMapBuildingProgress__GetTextTransitionStartValue(param_1);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183190);
      }
      uVar4 = DG_Tweening_DOTween__Sequence(0);
      uVar5 = DG_Tweening_DOTweenModuleUI__DOValue
                        ((float)(int)Var8,*(undefined4 *)(param_1 + 0x88),
                         *(undefined8 *)(param_1 + 0x20),0,0);
      uVar4 = DG_Tweening_TweenSettingsExtensions__Join(uVar4,uVar5,0);
      uVar5 = DG_Tweening_DOTweenModuleUI__DOFade
                        (0x3f800000,*(undefined4 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x28),
                         0);
      uVar4 = DG_Tweening_TweenSettingsExtensions__Join(uVar4,uVar5,0);
      uVar4 = FUN_04d9656c(uVar4,1,DAT_091dc030);
      uVar4 = FUN_04d8dd74(uVar4,DAT_091dbcc0);
      *(undefined8 *)(param_1 + 0xa8) = uVar4;
      thunk_FUN_03f5d7b8();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      uVar4 = thunk_FUN_03f9944c(DAT_09192a18);
      Utilities_MonoBehaviourExtension_TextFormatDelegateInt___ctor(uVar4,lVar2,DAT_091f1768,0);
      uVar4 = Utilities_MonoBehaviourExtension__PlayTextTransitionUnscaledTime
                        (*(undefined4 *)(param_1 + 0x88),0,uVar5,uVar4,uVar1,
                         (ulong)Var8 & 0xffffffff,0,0);
      *(undefined8 *)(param_1 + 0xb0) = uVar4;
      thunk_FUN_03f5d7b8();
      CakeOrder_UI_UIMapBuildingProgress__RememberProgressValue(param_1,(ulong)Var8 & 0xffffffff);
      uVar6 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x90),0);
      if ((uVar6 & 1) == 0) {
        if (*(long *)(param_1 + 0xc0) == 0) goto LAB_042c03b8;
        FUN_053ec72c(*(long *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x90),DAT_091a86b8);
      }
      CakeOrder_UI_UIMapBuildingProgress__UpdateChestState(param_1);
      lVar2 = *(long *)(param_1 + 0xd0);
      if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x042c039c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        return;
      }
      return;
    }
  }
LAB_042c03b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

