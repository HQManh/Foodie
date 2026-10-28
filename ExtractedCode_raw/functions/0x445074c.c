// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$CheckEnd
// address: 0x445074c
// body: available
// range: 0x445074c-0x4450bab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445087c to 0x44496d0 CookingGraph.CookingLevelSimulation$$Emit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4450ba8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__CheckEnd(long param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  double dVar13;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_09518026 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6828);
    FUN_03f5c2a4(&DAT_091c66a0);
    FUN_03f5c2a4(&DAT_091c66a8);
    FUN_03f5c2a4(&DAT_091c9498);
    FUN_03f5c2a4(&DAT_091c96f8);
    FUN_03f5c2a4(&DAT_091ca588);
    FUN_03f5c2a4(&DAT_091caea0);
    FUN_03f5c2a4(&DAT_09178bf8);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_0917b328);
    FUN_03f5c2a4(&DAT_091aa7d8);
    FUN_03f5c2a4(&DAT_091b2508);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09518026 = 1;
  }
  uVar6 = DAT_091f5700;
  if (*(int *)(param_1 + 0x188) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x198) == *(int *)(param_1 + 0x114)) {
    *(undefined4 *)(param_1 + 0x188) = 1;
    CookingGraph_CookingLevelSimulation__Emit(param_1,0xb,0xffffffff,uVar6,0);
    return;
  }
  if ((*(long *)(param_1 + 0x78) == 0) ||
     (lVar10 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar10 == 0)) goto LAB_04450ba8;
  uVar6 = System_Linq_Enumerable__Range(0,*(undefined4 *)(lVar10 + 0x18),0);
  uVar7 = thunk_FUN_03f9944c(DAT_09178b98);
  FUN_05315754(uVar7,param_1,DAT_091c66a0,0);
  uVar3 = FUN_04ab6928(uVar6,uVar7,DAT_091c9498);
  if (*(long *)(param_1 + 0x90) == 0) goto LAB_04450ba8;
  uVar6 = System_Linq_Enumerable__Range(0,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0);
  uVar7 = thunk_FUN_03f9944c(DAT_09178b98);
  FUN_05315754(uVar7,param_1,DAT_091c66a8,0);
  uVar4 = FUN_04ab6928(uVar6,uVar7,DAT_091c9498);
  if (*(int *)(param_1 + 0x16c) < 0) {
    bVar1 = false;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x178);
    CookingGraph_CookingLevelSimulation__get_BagAddress(&local_48,param_1);
    if (lVar10 == 0) goto LAB_04450ba8;
    uStack_58 = uStack_40;
    local_60 = local_48;
    local_50 = local_38;
    plVar8 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar10,&local_60,0);
    if (plVar8 == (long *)0x0) goto LAB_04450ba8;
    lVar10 = *plVar8;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917b328) {
          puVar9 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_044509e8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b328,0);
LAB_044509e8:
    iVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    bVar1 = iVar5 != 0;
  }
  iVar5 = CookingGraph_CookingLevelSimulation__get_RemainingItems(param_1);
  if ((bVar1) || (((uVar4 | uVar3) & 1) != 0 || iVar5 != 0)) {
LAB_04450a54:
    if (*(char *)(param_1 + 0x148) != '\0') {
      if (*(long *)(param_1 + 0x178) == 0) {
LAB_04450ba8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar11 = CookingGraph_Execution_CookingExecution__get_HasPendingWork
                         (*(long *)(param_1 + 0x178),0);
      if (((uVar11 & 1) == 0) &&
         (cVar2 = CookingGraph_CookingLevelSimulation__NextCompletionIn(param_1), cVar2 == '\0')) {
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_04450ba8;
        if (0 < *(int *)(*(long *)(param_1 + 0x98) + 0x18)) {
          if (*(long *)(param_1 + 0x80) == 0) goto LAB_04450ba8;
          uVar6 = System_Linq_Enumerable__Range
                            (0,*(undefined4 *)(*(long *)(param_1 + 0x80) + 0x18),0);
          uVar7 = thunk_FUN_03f9944c(DAT_09178bf8);
          FUN_05315da8(uVar7,param_1,DAT_091c6828,0);
          uVar6 = FUN_04af3070(uVar6,uVar7,DAT_091ca588);
          uVar6 = FUN_04b046b4(uVar6,DAT_091caea0);
          uVar11 = FUN_04ad4b4c(uVar6,0,DAT_091c96f8);
          if ((uVar11 & 1) == 0) {
            uVar11 = FUN_04ad4b4c(uVar6,1,DAT_091c96f8);
            bVar1 = (uVar11 & 1) == 0;
            lVar10 = 0x128;
            if (bVar1) {
              lVar10 = 0x130;
            }
            dVar13 = *(double *)(param_1 + lVar10);
            iVar5 = 2;
            if (bVar1) {
              iVar5 = 5;
            }
            if (0.0 < dVar13) {
              lVar10 = *(long *)(param_1 + 0x178);
              if (*(int *)(param_1 + 0x140) == iVar5) {
                if (lVar10 == 0) goto LAB_04450ba8;
              }
              else {
                *(int *)(param_1 + 0x140) = iVar5;
                if (lVar10 == 0) goto LAB_04450ba8;
                *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(lVar10 + 0x80);
              }
              if (*(double *)(lVar10 + 0x80) - *(double *)(param_1 + 0x138) < dVar13) {
                return;
              }
            }
            goto LAB_04450a4c;
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  else {
    if (*(long *)(param_1 + 0x178) == 0) goto LAB_04450ba8;
    uVar11 = CookingGraph_Execution_CookingExecution__get_HasPendingWork
                       (*(long *)(param_1 + 0x178),0);
    if ((uVar11 & 1) != 0) goto LAB_04450a54;
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_04450ba8;
    if (*(int *)(*(long *)(param_1 + 0x98) + 0x18) < 1) goto LAB_04450a54;
    iVar5 = 1;
LAB_04450a4c:
    CookingGraph_CookingLevelSimulation__Lose(param_1,iVar5);
  }
  return;
}

