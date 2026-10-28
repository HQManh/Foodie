// rea decompile_all
// name: CakeOrder.BaseUI.UIInGameChallengeConditionCounter$$UpdateVisualAmount
// address: 0x42d01b8
// body: available
// range: 0x42d01b8-0x42d052b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d0528 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIInGameChallengeConditionCounter__UpdateVisualAmount
               (float param_1,long param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 uStack_44;
  
  local_4c = 0;
  if (0 < *(int *)(param_2 + 0x84)) {
    plVar5 = *(long **)(param_2 + 0x58);
    if (plVar5 == (long *)0x0) goto LAB_042d0528;
    (**(code **)(*plVar5 + 0x428))(param_1,plVar5,*(undefined8 *)(*plVar5 + 0x430));
    if (DAT_09515cf4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09515cf4 = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar11 = (double)param_1;
    dVar9 = modf(dVar11,(double *)&local_48);
    if (0.0 <= param_1) {
      if (dVar9 == 0.5) {
        dVar9 = 1.0;
        goto LAB_042d02e4;
      }
      dVar11 = (double)(long)(dVar11 + 0.5);
    }
    else if (dVar9 == -0.5) {
      dVar9 = -1.0;
LAB_042d02e4:
      dVar11 = (double)CONCAT44(uStack_44,local_48);
      if (((long)dVar11 & 1U) != 0) {
        dVar11 = dVar11 + dVar9;
      }
    }
    else {
      dVar11 = (double)(long)(dVar11 + -0.5);
    }
    iVar1 = -0x80000000;
    if (dVar11 != INFINITY) {
      iVar1 = (int)dVar11;
    }
    if (iVar1 != *(int *)(param_2 + 0x88)) {
      plVar5 = *(long **)(param_2 + 0x60);
      uVar8 = *(undefined8 *)(param_2 + 0x70);
      *(int *)(param_2 + 0x88) = iVar1;
      local_48 = iVar1;
      uVar6 = FUN_03f5c42c(DAT_09535420,&local_48);
      local_50 = *(undefined4 *)(param_2 + 0x84);
      uVar7 = FUN_03f5c42c(DAT_09535420,&local_50);
      uVar6 = System_String__Format(uVar8,uVar6,uVar7,0);
      if (plVar5 == (long *)0x0) goto LAB_042d0528;
      (**(code **)(*plVar5 + 0x558))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x560));
    }
    if (*(long *)(param_2 + 0x78) != 0) {
      param_1 = param_1 / (float)*(int *)(param_2 + 0x84);
      fVar2 = 1.0;
      if (param_1 <= 1.0) {
        fVar2 = param_1;
      }
      fVar3 = 0.0;
      if (0.0 <= param_1) {
        fVar3 = fVar2;
      }
      CakeOrder_BaseUI_UIInGameChallengeConditionCounter_VisualConfig__ApplyProgress(fVar3);
      return;
    }
    goto LAB_042d0528;
  }
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar11 = (double)param_1;
  dVar9 = modf(dVar11,(double *)&local_48);
  cVar4 = DAT_09515cf4;
  if (0.0 <= param_1) {
    if (dVar9 == 0.5) {
      dVar9 = 1.0;
      goto LAB_042d030c;
    }
    dVar10 = (double)(long)(dVar11 + 0.5);
  }
  else if (dVar9 == -0.5) {
    dVar9 = -1.0;
LAB_042d030c:
    dVar10 = (double)CONCAT44(uStack_44,local_48);
    if (((long)dVar10 & 1U) != 0) {
      dVar10 = dVar10 + dVar9;
    }
  }
  else {
    dVar10 = (double)(long)(dVar11 + -0.5);
  }
  iVar1 = -0x80000000;
  if (dVar10 != INFINITY) {
    iVar1 = (int)dVar10;
  }
  if (iVar1 == *(int *)(param_2 + 0x88)) {
    return;
  }
  plVar5 = *(long **)(param_2 + 0x60);
  *(int *)(param_2 + 0x88) = iVar1;
  if (cVar4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar9 = modf(dVar11,(double *)&local_48);
  if (0.0 <= param_1) {
    if (dVar9 == 0.5) {
      dVar9 = 1.0;
      goto LAB_042d04a4;
    }
    dVar11 = (double)(long)(dVar11 + 0.5);
  }
  else if (dVar9 == -0.5) {
    dVar9 = -1.0;
LAB_042d04a4:
    dVar11 = (double)CONCAT44(uStack_44,local_48);
    if (((long)dVar11 & 1U) != 0) {
      dVar11 = dVar11 + dVar9;
    }
  }
  else {
    dVar11 = (double)(long)(dVar11 + -0.5);
  }
  local_4c = -0x80000000;
  if (dVar11 != INFINITY) {
    local_4c = (int)dVar11;
  }
  uVar6 = System_Int32__ToString(&local_4c,0);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x558))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x560));
    return;
  }
LAB_042d0528:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

