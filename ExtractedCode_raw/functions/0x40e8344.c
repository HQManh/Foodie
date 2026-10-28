// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$PlayReleasePop
// address: 0x40e8344
// body: available
// range: 0x40e8344-0x40e87bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e87b8 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40e87bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__PlayReleasePop(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  
  if ((DAT_095160c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_09175e18);
    FUN_03f5c2a4(&DAT_09175e68);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091eb960);
    FUN_03f5c2a4(&DAT_091eb978);
    FUN_03f5c2a4(&DAT_091eb980);
    FUN_03f5c2a4(&DAT_09191780);
    FUN_03f5c2a4(&DAT_09191760);
    DAT_095160c7 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09191780);
  System_Object___ctor(lVar2,0);
  if (lVar2 == 0) {
LAB_040e87bc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(lVar2 + 0x10) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
  plVar7 = (long *)(lVar2 + 0x18);
  *plVar7 = param_2;
  thunk_FUN_03f5d7b8(plVar7,param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Application__get_isPlaying(0);
    if (((uVar3 & 1) != 0) &&
       ((0.0 < *(float *)(param_1 + 0x168) || (0.0 < *(float *)(param_1 + 0x174))))) {
      AnhPD_FoodOrder_IngredientConveyorItem__ResetReleasePop(param_1);
      *(undefined1 *)(param_1 + 0xe1) = 1;
      AnhPD_FoodOrder_IngredientConveyorItem__ClearHintDim(param_1);
      AnhPD_FoodOrder_IngredientConveyorItem__RefreshTapTint(param_1);
      AnhPD_FoodOrder_IngredientConveyorItem__SetMaskInteraction(param_1,0);
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar3 & 1) == 0) {
        iVar1 = 0;
      }
      else {
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_040e87bc;
        iVar1 = UnityEngine_Rendering_SortingGroup__get_sortingOrder(*(long *)(param_1 + 0x58),0);
      }
      AnhPD_FoodOrder_IngredientConveyorItem__SetSortingOrder
                (param_1,*(int *)(param_1 + 0x180) + iVar1);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = DG_Tweening_DOTween__Sequence(0);
      *(undefined8 *)(param_1 + 0x188) = uVar5;
      thunk_FUN_03f5d7b8(param_1 + 0x188,uVar5);
      if (0.0 < *(float *)(param_1 + 0x168)) {
        uVar6 = *(undefined8 *)(param_1 + 0x188);
        uVar5 = DG_Tweening_ShortcutExtensions__DOLocalMoveY
                          (*(float *)(param_1 + 0x11c) + *(float *)(param_1 + 0x164),
                           *(undefined8 *)(param_1 + 0x60),0,0);
        uVar5 = FUN_04d95e8c(uVar5,*(undefined4 *)(param_1 + 0x16c),DAT_091dbeb0);
        DG_Tweening_TweenSettingsExtensions__Append(uVar6,uVar5,0);
      }
      if (0.0 < *(float *)(param_1 + 0x174)) {
        fVar9 = *(float *)(param_1 + 0x170);
        uVar6 = *(undefined8 *)(param_1 + 0x188);
        uVar5 = DG_Tweening_ShortcutExtensions__DOScale
                          (*(float *)(param_1 + 0x1a0) * fVar9,*(float *)(param_1 + 0x1a4) * fVar9,
                           *(float *)(param_1 + 0x1a8) * fVar9,*(undefined8 *)(param_1 + 0x60),0);
        uVar5 = FUN_04d95e8c(uVar5,*(undefined4 *)(param_1 + 0x178),DAT_091dbeb0);
        DG_Tweening_TweenSettingsExtensions__Append(uVar6,uVar5,0);
        uVar5 = *(undefined8 *)(param_1 + 0x188);
        if (*(int *)(DAT_09191760 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = *(undefined8 **)(DAT_09191760 + 0xb8);
        lVar8 = puVar4[1];
        if (lVar8 == 0) {
          if (*(int *)(DAT_09191760 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar4 = *(undefined8 **)(DAT_09191760 + 0xb8);
          }
          uVar6 = *puVar4;
          lVar8 = thunk_FUN_03f9944c(DAT_09175e18);
          FUN_06dfb188(lVar8,uVar6,DAT_091eb960,0);
          plVar7 = (long *)(*(long *)(DAT_09191760 + 0xb8) + 8);
          *plVar7 = lVar8;
          thunk_FUN_03f5d7b8(plVar7,lVar8);
        }
        uVar6 = thunk_FUN_03f9944c(DAT_09175e68);
        FUN_06dfc2b4(uVar6,lVar2,DAT_091eb978,0);
        uVar10 = *(undefined4 *)(param_1 + 0x174);
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = DG_Tweening_DOTween__To(0,uVar10,lVar8,uVar6,0);
        uVar6 = FUN_04d95e8c(uVar6,*(undefined4 *)(param_1 + 0x17c),DAT_091dbe80);
        DG_Tweening_TweenSettingsExtensions__Join(uVar5,uVar6,0);
      }
      uVar6 = *(undefined8 *)(param_1 + 0x188);
      uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar5,lVar2,DAT_091eb980,0);
      FUN_04d956bc(uVar6,uVar5,DAT_091dbd18);
      return;
    }
  }
  lVar2 = *plVar7;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x040e84f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

