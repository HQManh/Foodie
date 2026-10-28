// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewCoating$$Play
// address: 0x41053bc
// body: available
// range: 0x41053bc-0x4105717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410570c to 0x4d957c4 FUN_04d957c4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4105710 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4105714 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewCoating__Play(undefined4 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  
  if ((DAT_0951618a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091ce3f8);
    FUN_03f5c2a4(&DAT_091ce400);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbdc8);
    FUN_03f5c2a4(&DAT_091dbe60);
    FUN_03f5c2a4(&DAT_091dbf10);
    DAT_0951618a = 1;
  }
  lVar1 = UnityEngine_Component__get_transform(param_2,0);
  if (lVar1 != 0) {
    UnityEngine_Transform__set_localPosition
              (*(undefined4 *)(param_2 + 0x3c),*(undefined4 *)(param_2 + 0x40),0,lVar1,0);
    lVar1 = UnityEngine_Component__get_gameObject(param_2,0);
    if (lVar1 != 0) {
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      AnhPD_FoodOrder_GroupViewCoating__SetCoatingAlpha(0,param_2);
      plVar5 = (long *)(param_2 + 0x48);
      if (*plVar5 != 0) {
        DG_Tweening_TweenExtensions__Kill(*plVar5,0,0);
      }
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = DG_Tweening_DOTween__Sequence(0);
      *(undefined8 *)(param_2 + 0x48) = uVar2;
      thunk_FUN_03f5d7b8(plVar5,uVar2);
      lVar1 = *(long *)(param_2 + 0x20);
      if (lVar1 != 0) {
        if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
          uVar7 = 0;
          uVar4 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
          do {
            if (uVar4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar6 = *plVar5;
            uVar2 = DG_Tweening_DOTweenModuleSprite__DOFade
                              (0x3f800000,param_1,*(undefined8 *)(lVar1 + 0x20 + uVar7 * 8),0);
            DG_Tweening_TweenSettingsExtensions__Join(lVar6,uVar2,0);
            uVar4 = (ulong)*(uint *)(lVar1 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)(int)*(uint *)(lVar1 + 0x18));
        }
        if (*(char *)(param_2 + 0x38) == '\0') {
          lVar1 = *(long *)(DAT_091b48d0 + 0x20);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
            lVar1 = FUN_03f95a6c();
          }
          if (**(long **)(lVar1 + 0xb8) == 0) goto LAB_04105714;
          CakeOrder_AudioManagerCakeOrder__PlaySfx
                    (0x3f000000,**(long **)(lVar1 + 0xb8),*(undefined8 *)(param_2 + 0x30),5,0);
          uVar2 = UnityEngine_Component__get_transform(param_2,0);
          uVar2 = DG_Tweening_ShortcutExtensions__DOPunchRotation
                            (0,0,0x40a00000,0x3dcccccd,0x3f800000,uVar2,10,0);
          uVar2 = FUN_04d9629c(uVar2,0xffffffff,DAT_091dbf10);
          uVar9 = FUN_04d95c7c(0x3e800000,uVar2,DAT_091dbe60);
          uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
          uVar2 = DAT_091ce400;
        }
        else {
          uVar2 = UnityEngine_Component__get_transform(param_2,0);
          if (DAT_09515faa == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515faa = '\x01';
          }
          uVar9 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
          fVar8 = (float)((ulong)uVar9 >> 0x20) * 0.5;
          uVar2 = DG_Tweening_ShortcutExtensions__DOPunchPosition
                            (CONCAT44(fVar8,(float)uVar9 * 0.5),fVar8,
                             *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x20) * 0.5,0x3e99999a,
                             0x3f800000,uVar2,1,0,0);
          uVar2 = FUN_04d9629c(uVar2,0xffffffff,DAT_091dbf10);
          uVar9 = FUN_04d95c7c(0x3e800000,uVar2,DAT_091dbe60);
          uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
          uVar2 = DAT_091ce3f8;
        }
        DG_Tweening_TweenCallback___ctor(uVar3,param_2,uVar2,0);
        FUN_04d957c4(uVar9,uVar3,DAT_091dbdc8);
        return;
      }
    }
  }
LAB_04105714:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

