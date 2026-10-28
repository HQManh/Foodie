// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$TickFullAlert
// address: 0x4233328
// body: available
// range: 0x4233328-0x4233837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42334f0 to 0x4244908 AnhPD.FoodOrder.IngGridFullAlert$$Hide (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4233818 to 0x4235af8 AnhPD.FoodOrder.IngGridFullAlert$$Tick (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4233830 to 0x4234f84 AnhPD.FoodOrder.GridIngController$$LoseOnDeadlock (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4233834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GridIngController__TickFullAlert(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  
  if ((DAT_09516de3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_091b4c30);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516de3 = 1;
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    return;
  }
  uVar8 = FUN_05a8f088(DAT_091b4c30);
  if ((uVar8 & 1) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(DAT_091b4c28 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_03f95a6c();
    }
    lVar9 = **(long **)(lVar9 + 0xb8);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = UnityEngine_Object__op_Equality(lVar9,0,0);
  if ((uVar8 & 1) != 0) {
LAB_042334ac:
    *(undefined4 *)(param_1 + 0x11c) = 0xbf800000;
    *(undefined4 *)(param_1 + 0xf8) = 0xbf800000;
    *(undefined1 *)(param_1 + 0x118) = 0;
    AnhPD_FoodOrder_GridIngController__SetOutOfSlotAlert(param_1,0,0);
    lVar9 = *(long *)(param_1 + 0xa0);
    if (lVar9 != 0) {
      *(undefined2 *)(lVar9 + 0x30) = 0;
      *(undefined1 *)(lVar9 + 0x32) = 0;
      *(undefined4 *)(lVar9 + 0x3c) = 0;
      AnhPD_FoodOrder_IngGridFullAlert__Hide();
      return;
    }
    goto LAB_04233834;
  }
  if (lVar9 == 0) goto LAB_04233834;
  if (*(int *)(lVar9 + 0x50) != 4) goto LAB_042334ac;
  uVar12 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = UnityEngine_Object__op_Implicit(uVar12,0);
  lVar13 = 0;
  if ((uVar8 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_04233834;
    lVar13 = AnhPD_FoodOrder_MessyController__get_LineHandle(**(long **)(DAT_091881a0 + 0xb8),0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = UnityEngine_Object__op_Implicit(lVar13,0);
  if ((uVar8 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    if (lVar13 == 0) goto LAB_04233834;
    uVar4 = AnhPD_FoodOrder_FCustomerLineHandle__get_IsClearingForNextCustomer(lVar13,0);
    uVar4 = uVar4 & 1;
  }
  uVar12 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = UnityEngine_Object__op_Implicit(uVar12,0);
  lVar13 = 0;
  if ((uVar8 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_04233834;
    lVar13 = AnhPD_FoodOrder_MessyController__get_ServeShelf(**(long **)(DAT_091881a0 + 0xb8),0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = UnityEngine_Object__op_Implicit(lVar13,0);
  if ((uVar8 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    if (lVar13 == 0) goto LAB_04233834;
    uVar5 = AnhPD_FoodOrder_ServeShelfController__get_HasMergesInFlight(lVar13,0);
  }
  uVar12 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = UnityEngine_Object__op_Implicit(uVar12,0);
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_04233834;
    uVar6 = AnhPD_FoodOrder_MessyController__get_IsBoosterHolding
                      (**(long **)(DAT_091881a0 + 0xb8),0);
  }
  if ((uVar4 == 0 && (uVar5 & 1) == 0) && (uVar6 & 1) == 0) {
    bVar1 = AnhPD_FoodOrder_GridIngController__AnyStationResolvingJam();
  }
  else {
    bVar1 = 1;
  }
  bVar2 = AnhPD_FoodOrder_GridIngController__AnyStationMidCook();
  bVar3 = CakeOrder_InGame_LevelBaseCakeOrderAbstract__get_IsAllowInteract(lVar9,0);
  iVar7 = AnhPD_FoodOrder_GridIngController__CountFreeCells(param_1,*(int *)(param_1 + 0x80) + 1);
  bVar11 = bVar1 | bVar2 | bVar3 ^ 1;
  AnhPD_FoodOrder_GridIngController__TickDrainedRescue(param_1,bVar11 & 1 | iVar7 == 0);
  if ((((*(char *)(param_1 + 0xee) != '\0') && (iVar7 != 0)) &&
      (*(char *)(param_1 + 0xef) == '\0' && (bVar11 & 1) == 0)) &&
     (uVar8 = AnhPD_FoodOrder_GridIngController__AnyGridItemHasMove(), (uVar8 & 1) == 0)) {
    if (*(float *)(param_1 + 0xf0) < 0.0) {
      uVar14 = UnityEngine_Time__get_time(0);
      *(undefined4 *)(param_1 + 0xf0) = uVar14;
    }
    *(undefined1 *)(param_1 + 0x118) = 1;
    AnhPD_FoodOrder_GridIngController__SetOutOfSlotAlert(param_1,0,0);
    if (*(long *)(param_1 + 0xa0) != 0) {
      AnhPD_FoodOrder_IngGridFullAlert__Tick(*(long *)(param_1 + 0xa0),0,0);
      fVar15 = (float)UnityEngine_Time__get_time(0);
      if (fVar15 - *(float *)(param_1 + 0xf0) < *(float *)(param_1 + 0x94)) {
        return;
      }
      AnhPD_FoodOrder_GridIngController__LoseOnDeadlock(param_1);
      return;
    }
    goto LAB_04233834;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0xbf800000;
  if ((bVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0xa0) == 0) goto LAB_04233834;
    if (*(char *)(*(long *)(param_1 + 0xa0) + 0x32) != '\0') goto LAB_04233684;
LAB_042337b0:
    *(undefined4 *)(param_1 + 0x11c) = 0xbf800000;
    *(undefined1 *)(param_1 + 0x118) = 0;
    AnhPD_FoodOrder_GridIngController__SetOutOfSlotAlert(param_1,0,0);
    lVar9 = *(long *)(param_1 + 0xa0);
    if (lVar9 == 0) {
LAB_04233834:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar12 = 0;
  }
  else {
LAB_04233684:
    if ((*(int *)(param_1 + 0x80) < iVar7) && (*(char *)(param_1 + 0xec) == '\0')) {
      bVar11 = 1;
      if (iVar7 != 0) goto LAB_04233728;
LAB_042336a0:
      if (*(char *)(param_1 + 0xed) != '\0') goto LAB_04233728;
LAB_04233730:
      if ((bVar11 & 1) != 0) goto LAB_042337b0;
      if (((bVar1 | bVar2) & 1) != 0) goto LAB_042337dc;
      if (*(float *)(param_1 + 0x11c) < 0.0) {
        uVar14 = UnityEngine_Time__get_time(0);
        *(undefined4 *)(param_1 + 0x11c) = uVar14;
      }
      fVar15 = (float)UnityEngine_Time__get_time(0);
      lVar9 = *(long *)(param_1 + 0xa0);
      if (*(float *)(param_1 + 0x84) <= fVar15 - *(float *)(param_1 + 0x11c)) {
        if (lVar9 == 0) goto LAB_04233834;
        if (*(char *)(lVar9 + 0x32) == '\0') {
          *(undefined1 *)(param_1 + 0x118) = 1;
          AnhPD_FoodOrder_GridIngController__SetOutOfSlotAlert(param_1,1,0);
          lVar9 = *(long *)(param_1 + 0xa0);
          if (lVar9 == 0) goto LAB_04233834;
        }
        uVar12 = 1;
        uVar10 = 1;
        goto LAB_04233808;
      }
    }
    else {
      bVar11 = bVar1;
      if (iVar7 == 0) goto LAB_042336a0;
LAB_04233728:
      if (*(char *)(param_1 + 0xec) != '\0') goto LAB_04233730;
      if ((bVar11 & 1) != 0) goto LAB_042337b0;
LAB_042337dc:
      *(undefined4 *)(param_1 + 0x11c) = 0xbf800000;
      *(undefined1 *)(param_1 + 0x118) = 0;
      AnhPD_FoodOrder_GridIngController__SetOutOfSlotAlert(param_1,0,0);
      lVar9 = *(long *)(param_1 + 0xa0);
    }
    if (lVar9 == 0) goto LAB_04233834;
    uVar12 = 1;
  }
  uVar10 = 0;
LAB_04233808:
  AnhPD_FoodOrder_IngGridFullAlert__Tick(lVar9,uVar12,uVar10);
  return;
}

