// rea decompile_all
// name: CakeOrder.InGame.UIEndGameWin$$OnSetUpOnCreated
// address: 0x429b208
// body: available
// range: 0x429b208-0x429b86b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429b858 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429b85c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429b868 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIEndGameWin__OnSetUpOnCreated
               (undefined1 param_1 [16],float param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  int iVar16;
  double dVar17;
  int iVar18;
  double dVar19;
  float local_4c;
  undefined8 local_48;
  
  if ((DAT_095171fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b4948);
    FUN_03f5c2a4(&DAT_091b48b0);
    FUN_03f5c2a4(&DAT_091b4950);
    FUN_03f5c2a4(&DAT_091b48b8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_092185b8);
    FUN_03f5c2a4(&DAT_091f9610);
    DAT_095171fc = 1;
  }
  local_4c = 0.0;
  uVar6 = FUN_05a8eda4(DAT_091b4950);
  if ((uVar6 & 1) == 0) {
    return;
  }
  lVar7 = *(long *)(DAT_091b4948 + 0x20);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if ((((**(long **)(lVar7 + 0xb8) == 0) || (lVar12 = *(long *)(param_3 + 0x130), lVar12 == 0)) ||
      (*(long *)(param_3 + 0x110) == 0)) ||
     (plVar8 = *(long **)(lVar12 + 0x30), plVar8 == (long *)0x0)) goto LAB_0429b858;
  lVar7 = *(long *)(**(long **)(lVar7 + 0xb8) + 0x38);
  (**(code **)(*plVar8 + 0x178))
            (plVar8,*(undefined8 *)(lVar12 + 0x20),
             *(undefined4 *)(*(long *)(param_3 + 0x110) + 0x38),*(undefined8 *)(*plVar8 + 0x180));
  if (*(long *)(param_3 + 0x110) == 0) goto LAB_0429b858;
  uVar5 = CakeOrder_InGame_CakeLevelEndResultData__get_TotalSoftCurrencyEarned
                    (*(long *)(param_3 + 0x110),0);
  *(undefined4 *)(param_3 + 0x1bc) = uVar5;
  lVar12 = DAT_091b4948;
  if (lVar7 == 0) goto LAB_0429b858;
  lVar10 = *(long *)(lVar7 + 0x10);
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x18) == 0)) {
    uVar5 = 0x32;
  }
  else {
    if ((*(long *)(param_3 + 0x108) == 0) ||
       (lVar13 = *(long *)(*(long *)(param_3 + 0x108) + 0x28), lVar13 == 0)) goto LAB_0429b858;
    uVar2 = *(uint *)(lVar13 + 0x14);
    uVar11 = (uint)*(long *)(lVar10 + 0x18);
    uVar3 = uVar11 - 1;
    uVar1 = uVar2;
    if ((int)uVar3 <= (int)uVar2) {
      uVar1 = uVar3;
    }
    uVar3 = 0;
    if (-1 < (int)uVar2) {
      uVar3 = uVar1;
    }
    if (uVar11 <= uVar3) goto LAB_0429b85c;
    uVar5 = *(undefined4 *)(lVar10 + (long)(int)uVar3 * 4 + 0x20);
  }
  *(undefined4 *)(param_3 + 0x1c0) = uVar5;
  lVar12 = *(long *)(lVar12 + 0x20);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03f95a6c();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_03f95a6c();
  }
  lVar10 = *(long *)(param_3 + 0x108);
  if ((lVar10 == 0) || (**(long **)(lVar12 + 0xb8) == 0)) goto LAB_0429b858;
  fVar15 = (float)CakeOrder_CakeOrderSubsystem_GameProgressScenario__GetWinRewardMultipliers
                            (**(long **)(lVar12 + 0xb8),*(undefined8 *)(lVar10 + 0x10),
                             *(undefined4 *)(lVar10 + 0x1c),0);
  iVar16 = *(int *)(param_3 + 0x1bc);
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  param_2 = param_2 * (float)iVar16;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar19 = (double)param_2;
  dVar17 = modf(dVar19,(double *)&local_48);
  cVar4 = DAT_09515cf4;
  if (0.0 <= param_2) {
    if (dVar17 == 0.5) {
      dVar17 = 1.0;
      goto LAB_0429b480;
    }
    dVar19 = (double)(long)(dVar19 + 0.5);
  }
  else if (dVar17 == -0.5) {
    dVar17 = -1.0;
LAB_0429b480:
    dVar19 = (double)CONCAT44(local_48._4_4_,(int)local_48);
    if (((long)dVar19 & 1U) != 0) {
      dVar19 = dVar19 + dVar17;
    }
  }
  else {
    dVar19 = (double)(long)(dVar19 + -0.5);
  }
  iVar18 = *(int *)(param_3 + 0x1c0);
  iVar16 = -0x80000000;
  if (dVar19 != INFINITY) {
    iVar16 = (int)dVar19;
  }
  *(int *)(param_3 + 0x1bc) = iVar16;
  if (cVar4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  fVar15 = fVar15 * (float)iVar18;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar19 = (double)fVar15;
  dVar17 = modf(dVar19,(double *)&local_48);
  if (0.0 <= fVar15) {
    if (dVar17 == 0.5) {
      dVar17 = 1.0;
      goto LAB_0429b540;
    }
    dVar19 = (double)(long)(dVar19 + 0.5);
  }
  else if (dVar17 == -0.5) {
    dVar17 = -1.0;
LAB_0429b540:
    dVar19 = (double)CONCAT44(local_48._4_4_,(int)local_48);
    if (((long)dVar19 & 1U) != 0) {
      dVar19 = dVar19 + dVar17;
    }
  }
  else {
    dVar19 = (double)(long)(dVar19 + -0.5);
  }
  plVar8 = *(long **)(param_3 + 0x170);
  iVar16 = -0x80000000;
  if (dVar19 != INFINITY) {
    iVar16 = (int)dVar19;
  }
  *(int *)(param_3 + 0x1c0) = iVar16;
  uVar9 = System_Int32__ToString(param_3 + 0x1c0,0);
  if (plVar8 == (long *)0x0) goto LAB_0429b858;
  (**(code **)(*plVar8 + 0x558))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x560));
  uVar6 = FUN_05a8eda4(DAT_091b48b8);
  if ((uVar6 & 1) == 0) {
LAB_0429b614:
    lVar12 = *(long *)(param_3 + 0x108);
    if (lVar12 == 0) goto LAB_0429b858;
    if ((*(int *)(lVar12 + 0x18) < 1) && (*(int *)(lVar12 + 0x1c) + 1 < *(int *)(lVar7 + 0x18)))
    goto LAB_0429b63c;
    plVar8 = *(long **)(param_3 + 0x188);
    *(undefined1 *)(param_3 + 0x1b8) = 1;
    iVar16 = *(int *)(lVar7 + 0x28);
    *(int *)(param_3 + 0x1c8) = (iVar16 * *(int *)(param_3 + 0x1c0)) / 100;
    *(int *)(param_3 + 0x1c4) = (*(int *)(param_3 + 0x1bc) * iVar16) / 100;
    uVar9 = System_Int32__ToString(param_3 + 0x1c8,0);
    if (plVar8 == (long *)0x0) goto LAB_0429b858;
    (**(code **)(*plVar8 + 0x558))(plVar8,uVar9,*(undefined8 *)(*plVar8 + 0x560));
    iVar16 = *(int *)(lVar7 + 0x28);
    plVar14 = *(long **)(param_3 + 0x180);
    plVar8 = (long *)FUN_03f5c394(DAT_09180318,1);
    if ((iVar16 * -0x3d70a3d7 + 0x51eb850U >> 2 | iVar16 * 0x40000000) < 0x28f5c29) {
      local_48._0_4_ = *(int *)(lVar7 + 0x28) / 100;
      lVar7 = FUN_03f5c42c(DAT_09535420,&local_48);
    }
    else {
      local_4c = (float)*(int *)(lVar7 + 0x28) / 100.0;
      lVar7 = System_Single__ToString(&local_4c,DAT_091f9610,0);
    }
    if (plVar8 == (long *)0x0) goto LAB_0429b858;
    if ((lVar7 != 0) &&
       (lVar12 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar8 + 0x40)), lVar12 == 0)) {
      uVar9 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar9,0);
    }
    if ((int)plVar8[3] == 0) {
LAB_0429b85c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar8[4] = lVar7;
    thunk_FUN_03f5d7b8(plVar8 + 4,lVar7);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_092185b8,plVar8,0);
    if (plVar14 == (long *)0x0) goto LAB_0429b858;
    (**(code **)(*plVar14 + 0x558))(plVar14,uVar9,*(undefined8 *)(*plVar14 + 0x560));
  }
  else {
    lVar12 = *(long *)(DAT_091b48b0 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    if (**(long **)(lVar12 + 0xb8) == 0) goto LAB_0429b858;
    uVar6 = IapAdsSystem_AdsManager__get_IsWinBonusRewardAllowed(**(long **)(lVar12 + 0xb8),0);
    if ((uVar6 & 1) != 0) goto LAB_0429b614;
LAB_0429b63c:
    *(undefined1 *)(param_3 + 0x1b8) = 0;
  }
  uVar9 = *(undefined8 *)(param_3 + 0x160);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
  if ((uVar6 & 1) != 0) {
    if ((*(long *)(param_3 + 0x160) == 0) ||
       (lVar7 = UnityEngine_Component__get_gameObject(*(long *)(param_3 + 0x160),0), lVar7 == 0)) {
LAB_0429b858:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(lVar7,0,0);
  }
  return;
}

