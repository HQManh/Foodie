// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$PresentAutoDishAtShelf
// address: 0x44ad0fc
// body: available
// range: 0x44ad0fc-0x44ad58b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ad24c to 0x6fd8440 FUN_06fd8440 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44ad578 to 0x44aa50c CookOrder.Cooking.Implement.CookingGameplayPresentation$$HoldEffect (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44ad57c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ad588 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__PresentAutoDishAtShelf
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_0951821a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c54d0);
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_0919f568);
    FUN_03f5c2a4(&DAT_091abbf8);
    FUN_03f5c2a4(&DAT_091ac208);
    FUN_03f5c2a4(&DAT_091ac618);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbea8);
    FUN_03f5c2a4(&DAT_091dbed8);
    FUN_03f5c2a4(&DAT_091e70c0);
    FUN_03f5c2a4(&DAT_0918f108);
    DAT_0951821a = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918f108);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass36_0___ctor(lVar3,0);
  if ((*(long *)(param_4 + 0x400) == 0) ||
     (uVar4 = DG_Tweening_TweenExtensions__IsActive(*(long *)(param_4 + 0x400),0), (uVar4 & 1) == 0)
     ) {
    if ((param_5 != 0) && (lVar3 != 0)) {
      uStack_88 = *(undefined8 *)(param_5 + 0x18);
      local_90 = *(undefined8 *)(param_5 + 0x10);
      local_80 = *(undefined8 *)(param_5 + 0x20);
      uVar4 = CookOrder_Cooking_Implement_CookingGameplayPresentation__TryAnchor
                        (param_4,&local_90,lVar3 + 0x10);
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (*(long *)(lVar3 + 0x10) != 0) {
        uVar11 = UnityEngine_Transform__get_position(*(long *)(lVar3 + 0x10),0);
        if ((((*(long *)(param_4 + 0x2e0) != 0) &&
             (lVar7 = *(long *)(*(long *)(param_4 + 0x2e0) + 0x20), lVar7 != 0)) &&
            (*(long *)(param_4 + 0x2d8) != 0)) &&
           (((lVar8 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x120), lVar8 != 0 &&
             (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) &&
            ((*(long *)(param_4 + 0x60) != 0 && (lVar8 = *(long *)(lVar8 + 0x10), lVar8 != 0)))))) {
          lVar10 = *(long *)(lVar7 + 0x50);
          lVar7 = FUN_057e0998(lVar8,*(undefined4 *)(*(long *)(param_4 + 0x60) + 0x34),DAT_091ac208)
          ;
          if (((lVar7 != 0) && (*(long *)(param_4 + 0x60) != 0)) &&
             ((*(long *)(lVar7 + 0x20) != 0 &&
              (((lVar7 = FUN_057e0998(*(long *)(lVar7 + 0x20),
                                      *(undefined4 *)(*(long *)(param_4 + 0x60) + 0x38),DAT_091ac618
                                     ), lVar7 != 0 && (*(long *)(lVar7 + 0x10) != 0)) &&
               (lVar10 != 0)))))) {
            plVar6 = *(long **)(*(long *)(lVar7 + 0x10) + 0x20);
            if ((plVar6 != (long *)0x0) && (*plVar6 != DAT_091828a0)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar6,DAT_091828a0);
            }
            uVar1 = FUN_057e1a08(lVar10,plVar6,DAT_091abbf8);
            if (*(long *)(lVar3 + 0x10) != 0) {
              lVar7 = FUN_04a6a14c(*(long *)(lVar3 + 0x10),DAT_091c54d0);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              uVar4 = UnityEngine_Object__op_Implicit(lVar7,0);
              if ((uVar4 & 1) == 0) {
                uVar2 = 0;
              }
              else {
                if (lVar7 == 0) goto LAB_044ad57c;
                uVar2 = UnityEngine_Rendering_SortingGroup__get_sortingLayerID(lVar7,0);
              }
              lVar8 = DAT_09188ad0;
              *(undefined4 *)(lVar3 + 0x18) = uVar2;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                FUN_03f5c424(lVar8);
              }
              uVar4 = UnityEngine_Object__op_Implicit(lVar7,0);
              if ((uVar4 & 1) == 0) {
                uVar2 = 0;
              }
              else {
                if (lVar7 == 0) goto LAB_044ad57c;
                uVar2 = UnityEngine_Rendering_SortingGroup__get_sortingOrder(lVar7,0);
              }
              lVar7 = *(long *)(param_4 + 0x2e8);
              *(undefined4 *)(lVar3 + 0x1c) = uVar2;
              if (lVar7 != 0) {
                lVar7 = *(long *)(lVar7 + 0x28);
                CookOrder_Cooking_Implement_CookingGameplayPresentation__GatherAutoPlate
                          (param_4,*(undefined8 *)(lVar3 + 0x10),param_5,uVar1);
                if (lVar7 != 0) {
                  uVar9 = *(undefined8 *)(param_4 + 0x38);
                  uVar5 = DG_Tweening_ShortcutExtensions__DOMove
                                    (uVar11,param_2,param_3,*(undefined4 *)(lVar7 + 100),
                                     *(undefined8 *)(lVar3 + 0x10),0,0);
                  uVar5 = FUN_04d95dc4(uVar5,*(undefined8 *)(lVar7 + 0x68),DAT_091dbea8);
                  DG_Tweening_TweenSettingsExtensions__Append(uVar9,uVar5,0);
                  uVar5 = *(undefined8 *)(param_4 + 0x38);
                  uVar9 = *(undefined8 *)(lVar3 + 0x10);
                  if (DAT_09515cf3 == '\0') {
                    FUN_03f5c2a4(&DAT_0918cbd0);
                    DAT_09515cf3 = '\x01';
                  }
                  fVar12 = *(float *)(lVar7 + 0x50);
                  lVar8 = *(long *)(DAT_0918cbd0 + 0xb8);
                  uVar9 = DG_Tweening_ShortcutExtensions__DOPunchScale
                                    (*(float *)(lVar8 + 0xc) * fVar12,
                                     *(float *)(lVar8 + 0x10) * fVar12,
                                     *(float *)(lVar8 + 0x14) * fVar12,*(undefined4 *)(lVar7 + 0x54)
                                     ,0x3f800000,uVar9,10,0);
                  uVar9 = FUN_04d95dc4(uVar9,*(undefined8 *)(lVar7 + 0x58),DAT_091dbed8);
                  DG_Tweening_TweenSettingsExtensions__Join(uVar5,uVar9,0);
                  uVar9 = *(undefined8 *)(param_4 + 0x38);
                  uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
                  DG_Tweening_TweenCallback___ctor(uVar5,lVar3,DAT_091e70c0,0);
                  DG_Tweening_TweenSettingsExtensions__AppendCallback(uVar9,uVar5,0);
                  CookOrder_Cooking_Implement_CookingGameplayPresentation__HoldEffect
                            (param_4,*(undefined8 *)(param_4 + 0x38));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  else if (param_5 != 0) {
    uStack_68 = *(undefined8 *)(param_5 + 0x18);
    local_70 = *(undefined8 *)(param_5 + 0x10);
    local_60 = *(undefined8 *)(param_5 + 0x20);
    lVar3 = *(long *)(param_4 + 0x428);
    uVar5 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_70);
    if (lVar3 != 0) {
      FUN_06fd8440(lVar3,uVar5,param_5,DAT_0919f568);
      return;
    }
  }
LAB_044ad57c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

