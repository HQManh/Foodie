// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$PlayCoverPop
// address: 0x40ee914
// body: available
// range: 0x40ee914-0x40eec47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40eec40 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40eec44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte AnhPD_FoodOrder_IngredientConveyorItem__PlayCoverPop(long param_1)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  float fVar11;
  undefined4 uVar12;
  
  if ((DAT_095160cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091cfdc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbe70);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dbfd8);
    DAT_095160cd = 1;
  }
  AnhPD_FoodOrder_IngredientConveyorItem__CaptureCover(param_1);
  if (*(float *)(param_1 + 0x1b0) <= 0.0) {
    bVar7 = true;
  }
  else {
    bVar7 = *(float *)(param_1 + 0x1b4) <= 0.0;
  }
  if (*(float *)(param_1 + 0x1bc) <= 0.0) {
    bVar10 = true;
  }
  else {
    bVar10 = *(float *)(param_1 + 0x1c0) <= 0.0;
  }
  if ((*(float *)(param_1 + 0x1c4) <= 0.0) || (*(long *)(param_1 + 0x1f0) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(*(long *)(param_1 + 0x1f0) + 0x18) == 0;
  }
  bVar1 = bVar7 & bVar10 & bVar2;
  if (bVar1 == 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
LAB_040eec44:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = UnityEngine_GameObject__get_transform(*(long *)(param_1 + 0x38),0);
    AnhPD_FoodOrder_IngredientConveyorItem__ResetCoverPop(param_1);
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = DG_Tweening_DOTween__Sequence(0);
    uVar4 = FUN_04d9642c(uVar4,uVar3,DAT_091dbfd8);
    *(undefined8 *)(param_1 + 0x1d0) = uVar4;
    thunk_FUN_03f5d7b8(param_1 + 0x1d0,uVar4);
    if (bVar7 == false) {
      uVar6 = *(undefined8 *)(param_1 + 0x1d0);
      uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMoveY
                        (*(float *)(param_1 + 0x1dc) + *(float *)(param_1 + 0x1b0),
                         *(undefined4 *)(param_1 + 0x1b4),uVar3,0,0);
      uVar4 = FUN_04d95e8c(uVar4,*(undefined4 *)(param_1 + 0x1b8),DAT_091dbeb0);
      DG_Tweening_TweenSettingsExtensions__Append(uVar6,uVar4,0);
    }
    if (bVar10 == false) {
      fVar11 = *(float *)(param_1 + 0x1bc);
      uVar4 = *(undefined8 *)(param_1 + 0x1d0);
      uVar3 = DG_Tweening_ShortcutExtensions__DOPunchScale
                        (*(float *)(param_1 + 0x1e4) * fVar11,*(float *)(param_1 + 0x1e8) * fVar11,
                         *(float *)(param_1 + 0x1ec) * fVar11,*(undefined4 *)(param_1 + 0x1c0),
                         0x3f000000,uVar3,1,0);
      DG_Tweening_TweenSettingsExtensions__Append(uVar4,uVar3,0);
    }
    if (bVar2 == false) {
      uVar12 = 0;
      if (bVar7 == false) {
        uVar12 = *(undefined4 *)(param_1 + 0x1b4);
      }
      lVar8 = *(long *)(param_1 + 0x1f0);
      if (lVar8 == 0) goto LAB_040eec44;
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar9 = 0;
        uVar5 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        do {
          if (uVar5 <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar3 = *(undefined8 *)(lVar8 + 0x20 + uVar9 * 8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Implicit(uVar3,0);
          if ((uVar5 & 1) != 0) {
            uVar4 = *(undefined8 *)(param_1 + 0x1d0);
            uVar3 = DG_Tweening_DOTweenModuleSprite__DOFade
                              (0,*(undefined4 *)(param_1 + 0x1c4),uVar3,0);
            uVar3 = FUN_04d95e8c(uVar3,*(undefined4 *)(param_1 + 0x1c8),DAT_091dbe70);
            DG_Tweening_TweenSettingsExtensions__Insert(uVar12,uVar4,uVar3,0);
          }
          uVar5 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
    }
    uVar4 = *(undefined8 *)(param_1 + 0x1d0);
    uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar3,param_1,DAT_091cfdc0,0);
    FUN_04d956bc(uVar4,uVar3,DAT_091dbd18);
  }
  return bVar1 ^ 1;
}

