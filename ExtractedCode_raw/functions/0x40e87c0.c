// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$PlayReleaseSequence
// address: 0x40e87c0
// body: available
// range: 0x40e87c0-0x40e8b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e8b68 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40e8b8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e8b90 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__PlayReleaseSequence
               (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  int iVar11;
  
  if ((DAT_095160c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091adb28);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091eb968);
    FUN_03f5c2a4(&DAT_09191768);
    FUN_03f5c2a4(&DAT_09191770);
    FUN_03f5c2a4(&DAT_091eb970);
    FUN_03f5c2a4(&DAT_09191778);
    DAT_095160c5 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09191768);
  System_Object___ctor(lVar3,0);
  if (lVar3 == 0) {
LAB_040e8b8c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar3 + 0x10) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),param_3);
  *(long *)(lVar3 + 0x18) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar3 + 0x18),param_1);
  plVar4 = (long *)(lVar3 + 0x20);
  *plVar4 = param_4;
  thunk_FUN_03f5d7b8(plVar4,param_4);
  AnhPD_FoodOrder_IngredientConveyorItem__ResetReleaseSequence(param_1);
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = DG_Tweening_DOTween__Sequence(0);
  *(undefined8 *)(param_1 + 400) = uVar5;
  thunk_FUN_03f5d7b8(param_1 + 400,uVar5);
  *(undefined8 *)(param_1 + 0x198) = param_5;
  thunk_FUN_03f5d7b8(param_1 + 0x198,param_5);
  if (*(int *)(param_1 + 0x98) < 1) {
LAB_040e8aa0:
    DG_Tweening_TweenExtensions__Kill(*(undefined8 *)(param_1 + 400),0,0);
    *(undefined8 *)(param_1 + 400) = 0;
    thunk_FUN_03f5d7b8(param_1 + 400,0);
    *(undefined8 *)(param_1 + 0x198) = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x198,0);
    lVar3 = *plVar4;
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x040e8b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      return;
    }
    return;
  }
  uVar9 = 0;
  bVar1 = true;
  do {
    while( true ) {
      lVar6 = thunk_FUN_03f9944c(DAT_09191770);
      System_Object___ctor(lVar6,0);
      if (lVar6 == 0) goto LAB_040e8b8c;
      *(long *)(lVar6 + 0x20) = lVar3;
      thunk_FUN_03f5d7b8((long *)(lVar6 + 0x20),lVar3);
      if (*(long *)(param_1 + 0x90) == 0) goto LAB_040e8b8c;
      lVar7 = FUN_057e0998(*(long *)(param_1 + 0x90),uVar9 & 0xffffffff,DAT_091adb28);
      plVar10 = (long *)(lVar6 + 0x10);
      *plVar10 = lVar7;
      thunk_FUN_03f5d7b8(plVar10,lVar7);
      if (*plVar10 != 0) break;
LAB_040e89d0:
      uVar9 = uVar9 + 1;
      if ((long)*(int *)(param_1 + 0x98) <= (long)uVar9) {
        if (bVar1) goto LAB_040e8aa0;
        goto LAB_040e8b08;
      }
    }
    if (param_2 == 0) goto LAB_040e8b8c;
    iVar2 = (**(code **)(param_2 + 0x18))
                      (*(undefined8 *)(param_2 + 0x40),*plVar10,*(undefined8 *)(param_2 + 0x28));
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 == 0) goto LAB_040e8b8c;
    if (*(uint *)(lVar7 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar6 + 0x18) = *(undefined8 *)(lVar7 + uVar9 * 8 + 0x20);
    thunk_FUN_03f5d7b8();
    iVar11 = iVar2 + -1;
    if (iVar2 < 1) goto LAB_040e89d0;
    do {
      lVar7 = thunk_FUN_03f9944c(DAT_09191778);
      System_Object___ctor(lVar7,0);
      if (lVar7 == 0) goto LAB_040e8b8c;
      *(long *)(lVar7 + 0x18) = lVar6;
      thunk_FUN_03f5d7b8((long *)(lVar7 + 0x18),lVar6);
      if ((!bVar1) && (0.0 < *(float *)(param_1 + 0x184))) {
        DG_Tweening_TweenSettingsExtensions__AppendInterval(*(undefined8 *)(param_1 + 400),0);
      }
      uVar8 = *(undefined8 *)(param_1 + 400);
      *(int *)(lVar7 + 0x10) = iVar11;
      uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar5,lVar7,DAT_091eb970,0);
      DG_Tweening_TweenSettingsExtensions__AppendCallback(uVar8,uVar5,0);
      iVar11 = iVar11 + -1;
      bVar1 = false;
    } while (iVar11 != -1);
    uVar9 = uVar9 + 1;
    bVar1 = false;
  } while ((long)uVar9 < (long)*(int *)(param_1 + 0x98));
LAB_040e8b08:
  uVar8 = *(undefined8 *)(param_1 + 400);
  uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
  DG_Tweening_TweenCallback___ctor(uVar5,lVar3,DAT_091eb968,0);
  FUN_04d956bc(uVar8,uVar5,DAT_091dbd18);
  return;
}

