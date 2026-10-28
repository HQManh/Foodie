// rea decompile_all
// name: AnhPD.FoodOrder.SandwichStackDisplay$$PlayAssembleAnim
// address: 0x4160800
// body: available
// range: 0x4160800-0x4160bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4160b98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4160bfc to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SandwichStackDisplay__PlayAssembleAnim(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  
  if ((DAT_0951652d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091aab28);
    FUN_03f5c2a4(&DAT_091aab30);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8408);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dbfd8);
    DAT_0951652d = 1;
  }
  AnhPD_FoodOrder_SandwichStackDisplay__CaptureBaseScale(param_1);
  AnhPD_FoodOrder_SandwichStackDisplay__KillAnim(param_1);
  if (*(long *)(param_1 + 0x68) == 0) {
LAB_04160b98:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(*(long *)(param_1 + 0x68) + 0x18) != 0) {
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Application__get_isPlaying(0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = DG_Tweening_DOTween__Sequence(0);
      uVar4 = UnityEngine_Component__get_transform(param_1,0);
      uVar3 = FUN_04d9642c(uVar3,uVar4,DAT_091dbfd8);
      *(undefined8 *)(param_1 + 0x80) = uVar3;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x80),uVar3);
      fVar7 = *(float *)(param_1 + 0x50);
      if ((fVar7 <= 0.0) || (*(float *)(param_1 + 0x54) <= 0.0)) {
        bVar1 = true;
      }
      else {
        uVar10 = *(undefined4 *)(param_1 + 0x78);
        uVar4 = *(undefined8 *)(param_1 + 0x80);
        fVar8 = *(float *)(param_1 + 0x70);
        fVar9 = *(float *)(param_1 + 0x74);
        uVar3 = UnityEngine_Component__get_transform(param_1,0);
        uVar3 = DG_Tweening_ShortcutExtensions__DOScale
                          ((fVar7 + 1.0) * fVar8,(1.0 - fVar7) * fVar9,uVar10,
                           *(undefined4 *)(param_1 + 0x54),uVar3,0);
        uVar3 = FUN_04d95e8c(uVar3,6,DAT_091dbeb0);
        DG_Tweening_TweenSettingsExtensions__Append(uVar4,uVar3,0);
        bVar1 = false;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      uVar3 = UnityEngine_Component__get_transform(param_1,0);
      uVar3 = DG_Tweening_ShortcutExtensions__DOScale
                        (*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                         *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x58),uVar3,0);
      uVar3 = FUN_04d95e8c(uVar3,0x1b,DAT_091dbeb0);
      DG_Tweening_TweenSettingsExtensions__Append(uVar4,uVar3,0);
      lVar5 = *(long *)(param_1 + 0x68);
      if (lVar5 != 0) {
        iVar6 = 0;
        do {
          if (*(int *)(lVar5 + 0x18) <= iVar6) {
            fVar7 = 0.0;
            if (!bVar1) {
              fVar7 = *(float *)(param_1 + 0x54);
            }
            fVar8 = *(float *)(param_1 + 0x58);
            iVar6 = 0;
            do {
              if (*(int *)(lVar5 + 0x18) <= iVar6) {
                uVar4 = *(undefined8 *)(param_1 + 0x80);
                uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
                DG_Tweening_TweenCallback___ctor(uVar3,param_1,DAT_091d8408,0);
                FUN_04d956bc(uVar4,uVar3,DAT_091dbd18);
                return;
              }
              auVar11 = FUN_056c0cf8(lVar5,iVar6,DAT_091aab30);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = UnityEngine_Object__op_Implicit(auVar11._0_8_,0);
              if ((uVar2 & 1) != 0) {
                fVar9 = *(float *)(param_1 + 100);
                uVar4 = *(undefined8 *)(param_1 + 0x80);
                uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMoveY
                                  (auVar11._8_8_ & 0xffffffff,*(undefined4 *)(param_1 + 0x60),
                                   auVar11._0_8_,0,0);
                uVar3 = FUN_04d95e8c(uVar3,0x1e,DAT_091dbeb0);
                DG_Tweening_TweenSettingsExtensions__Insert
                          (fVar7 + fVar8 + fVar9 * (float)iVar6,uVar4,uVar3,0);
              }
              lVar5 = *(long *)(param_1 + 0x68);
              iVar6 = iVar6 + 1;
            } while (lVar5 != 0);
            break;
          }
          auVar12 = FUN_056c0cf8(lVar5,iVar6,DAT_091aab30);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Implicit(auVar12._0_8_,0);
          iVar6 = iVar6 + 1;
          if ((uVar2 & 1) != 0) {
            uVar4 = *(undefined8 *)(param_1 + 0x80);
            uVar3 = DG_Tweening_ShortcutExtensions__DOLocalMoveY
                              (*(float *)(param_1 + 0x5c) * (float)iVar6 + auVar12._8_4_,
                               *(undefined4 *)(param_1 + 0x58),auVar12._0_8_,0,0);
            uVar3 = FUN_04d95e8c(uVar3,0x1b,DAT_091dbeb0);
            DG_Tweening_TweenSettingsExtensions__Join(uVar4,uVar3,0);
          }
          lVar5 = *(long *)(param_1 + 0x68);
        } while (lVar5 != 0);
      }
      goto LAB_04160b98;
    }
  }
  return;
}

