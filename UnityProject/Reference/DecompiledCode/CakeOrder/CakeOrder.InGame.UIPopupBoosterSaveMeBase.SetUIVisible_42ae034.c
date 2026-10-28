// rea decompile_all
// name: CakeOrder.InGame.UIPopupBoosterSaveMeBase$$SetUIVisible
// address: 0x42ae034
// body: available
// range: 0x42ae034-0x42ae29f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ae278 to 0x42558b0 CakeOrder.AudioManagerCakeOrder$$SetDuckSuspended (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42ae298 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ae29c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupBoosterSaveMeBase__SetUIVisible(long param_1,byte param_2,uint param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  
  if ((DAT_09517299 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b48d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dc030);
    DAT_09517299 = 1;
  }
  bVar1 = (param_2 ^ 1) & 1;
  *(byte *)(param_1 + 0x15c) = bVar1;
  if (((param_2 ^ 1) & 1) == 0) {
    *(undefined4 *)(param_1 + 0x158) = 0x80000000;
  }
  CakeOrder_BaseUI_UICakePopup__SetPeekHidden(param_1,bVar1,param_3 & 1,0);
  DG_Tweening_TweenExtensions__Kill(*(undefined8 *)(param_1 + 0x160),0,0);
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = DG_Tweening_DOTween__Sequence(0);
  uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc030);
  lVar6 = *(long *)(param_1 + 0x150);
  if ((lVar6 != 0) && (0 < (int)*(ulong *)(lVar6 + 0x18))) {
    uVar7 = 0;
    uVar4 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
    uVar8 = 0x3f800000;
    if ((param_2 & 1) == 0) {
      uVar8 = 0;
    }
    do {
      if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = *(long *)(lVar6 + 0x20 + uVar7 * 8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Equality(lVar5,0,0);
      if ((uVar4 & 1) == 0) {
        if ((param_3 & 1) == 0) {
          uVar3 = DG_Tweening_DOTweenModuleUI__DOFade(uVar8,0x3e4ccccd,lVar5,0);
          DG_Tweening_TweenSettingsExtensions__Join(uVar2,uVar3,0);
        }
        else {
          if (lVar5 == 0) goto LAB_042ae29c;
          UnityEngine_CanvasGroup__set_alpha(uVar8,lVar5,0);
        }
      }
      uVar4 = (ulong)*(uint *)(lVar6 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
  }
  if ((param_3 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x160) = uVar2;
    thunk_FUN_03f5d7b8(param_1 + 0x160,uVar2);
  }
  else {
    DG_Tweening_TweenExtensions__Kill(uVar2,0,0);
  }
  uVar7 = FUN_05a8eda4(DAT_091b48d8);
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar6 = *(long *)(DAT_091b48d0 + 0x20);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  if (**(long **)(lVar6 + 0xb8) != 0) {
    CakeOrder_AudioManagerCakeOrder__SetDuckSuspended
              (**(long **)(lVar6 + 0xb8),*(undefined1 *)(param_1 + 0x15c),0);
    return;
  }
LAB_042ae29c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

