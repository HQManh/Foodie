// rea decompile_all
// name: AnhPD.FoodOrder.GroupViewCuttingShake$$Play
// address: 0x4107164
// body: available
// range: 0x4107164-0x41073ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41073a4 to 0x4547928 DG.Tweening.TweenSettingsExtensions$$Append (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41073a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GroupViewCuttingShake__Play(float param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  if ((DAT_09516196 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091ce418);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd28);
    DAT_09516196 = 1;
  }
  lVar1 = UnityEngine_Component__get_gameObject(param_2,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    lVar1 = *(long *)(param_2 + 0x40);
    iVar6 = *(int *)(param_2 + 0x38);
    if (lVar1 != 0) {
      DG_Tweening_TweenExtensions__Kill(lVar1,0,0);
    }
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = DG_Tweening_DOTween__Sequence(0);
    *(undefined8 *)(param_2 + 0x40) = uVar2;
    thunk_FUN_03f5d7b8((long *)(param_2 + 0x40),uVar2);
    uVar3 = DG_Tweening_ShortcutExtensions__DOLocalRotate
                      (0,0,0xc1200000,0x3dcccccd,*(undefined8 *)(param_2 + 0x20),0,0);
    DG_Tweening_TweenSettingsExtensions__Append(uVar2,uVar3,0);
    if (0 < *(int *)(param_2 + 0x38)) {
      iVar5 = 0;
      do {
        uVar3 = *(undefined8 *)(param_2 + 0x20);
        if (DAT_0951615d == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_0951615d = '\x01';
        }
        lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
        uVar3 = DG_Tweening_ShortcutExtensions__DOPunchPosition
                          (*(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(lVar1 + 0x28),
                           *(undefined4 *)(lVar1 + 0x2c),(param_1 + -0.2) / (float)iVar6,0x3f800000,
                           uVar3,1,0,0);
        uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar4,param_2,DAT_091ce418,0);
        uVar3 = FUN_04d956bc(uVar3,uVar4,DAT_091dbd28);
        DG_Tweening_TweenSettingsExtensions__Append(uVar2,uVar3,0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_2 + 0x38));
    }
    uVar3 = DG_Tweening_ShortcutExtensions__DOLocalRotate
                      (0,0,0xc1f00000,0x3dcccccd,*(undefined8 *)(param_2 + 0x20),0,0);
    DG_Tweening_TweenSettingsExtensions__Append(uVar2,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

