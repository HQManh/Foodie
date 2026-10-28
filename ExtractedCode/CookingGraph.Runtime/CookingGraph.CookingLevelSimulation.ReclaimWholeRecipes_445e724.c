// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ReclaimWholeRecipes
// address: 0x445e724
// body: available
// range: 0x445e724-0x445ea8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x445ea84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445ea88 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__ReclaimWholeRecipes(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09518030 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9460);
    FUN_03f5c2a4(&DAT_091c9548);
    FUN_03f5c2a4(&DAT_091cacd8);
    FUN_03f5c2a4(&DAT_09179360);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_0918f678);
    FUN_03f5c2a4(&DAT_091e78e8);
    FUN_03f5c2a4(&DAT_091e7af8);
    FUN_03f5c2a4(&DAT_0918f308);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518030 = 1;
  }
  uVar1 = CookingGraph_CookingLevelSimulation__WholeProcessSources(param_1);
  lVar2 = FUN_04b03f44(uVar1,DAT_091cacd8);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar9 = 0;
      puVar10 = (undefined8 *)(lVar2 + 0x20);
      do {
        lVar3 = thunk_FUN_03f9944c(DAT_0918f308);
        CookingGraph_CookingLevelSimulation_<>c__DisplayClass112_0___ctor(lVar3,0);
        if (*(uint *)(lVar2 + 0x18) <= uVar9) {
LAB_0445ea88:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar3 == 0) goto LAB_0445ea84;
        uVar11 = puVar10[2];
        uVar5 = puVar10[5];
        uVar1 = puVar10[4];
        uVar13 = puVar10[1];
        uVar12 = *puVar10;
        *(undefined8 *)(lVar3 + 0x28) = puVar10[3];
        *(undefined8 *)(lVar3 + 0x20) = uVar11;
        *(undefined8 *)(lVar3 + 0x38) = uVar5;
        *(undefined8 *)(lVar3 + 0x30) = uVar1;
        *(undefined8 *)(lVar3 + 0x18) = uVar13;
        *(undefined8 *)(lVar3 + 0x10) = uVar12;
        thunk_FUN_03f5d7b8(lVar3 + 0x18,0);
        if (*(long *)(param_1 + 0x178) == 0) goto LAB_0445ea84;
        uVar4 = CookingGraph_Execution_CookingExecution__IsUnitClaimed
                          (*(long *)(param_1 + 0x178),*(undefined8 *)(lVar3 + 0x28),0);
        if ((uVar4 & 1) == 0) {
          if (*(long *)(param_1 + 0x178) == 0) goto LAB_0445ea84;
          uStack_78 = *(undefined8 *)(lVar3 + 0x18);
          local_80 = *(undefined8 *)(lVar3 + 0x10);
          local_70 = *(undefined8 *)(lVar3 + 0x20);
          uVar1 = CookingGraph_Execution_CookingExecution__UnitsAt
                            (*(long *)(param_1 + 0x178),&local_80,0);
          uVar5 = thunk_FUN_03f9944c(DAT_09178768);
          FUN_053136a4(uVar5,lVar3,DAT_091e7af8,0);
          uVar4 = FUN_04ab6608(uVar1,uVar5,DAT_091c9460);
          if ((uVar4 & 1) != 0) {
            if ((*(long *)(param_1 + 0x78) == 0) ||
               (lVar6 = *(long *)(*(long *)(param_1 + 0x78) + 0x28), lVar6 == 0)) goto LAB_0445ea84;
            if (*(uint *)(lVar6 + 0x18) <= *(uint *)(lVar3 + 0x30)) goto LAB_0445ea88;
            uVar1 = *(undefined8 *)(lVar6 + (long)(int)*(uint *)(lVar3 + 0x30) * 8 + 0x20);
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar6 = puVar7[99];
            if (lVar6 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
                puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar5 = *puVar7;
              lVar6 = thunk_FUN_03f9944c(DAT_09179360);
              FUN_05322d94(lVar6,uVar5,DAT_091e78e8,0);
              lVar8 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar8 + 0x318) = lVar6;
              thunk_FUN_03f5d7b8(lVar8 + 0x318,lVar6);
            }
            uVar4 = FUN_04ab6f28(uVar1,lVar6,DAT_091c9548);
            if ((uVar4 & 1) != 0) {
              lVar6 = thunk_FUN_03f9944c(DAT_0918f678);
              CookingGraph_CookingLevelSimulation_PickPlan___ctor(lVar6,0);
              uStack_98 = *(undefined8 *)(lVar3 + 0x30);
              local_a0 = *(undefined8 *)(lVar3 + 0x28);
              local_90 = *(undefined8 *)(lVar3 + 0x38);
              uStack_b8 = *(undefined8 *)(lVar3 + 0x18);
              local_c0 = *(undefined8 *)(lVar3 + 0x10);
              local_b0 = *(undefined8 *)(lVar3 + 0x20);
              uVar4 = CookingGraph_CookingLevelSimulation__PlanWholeRecipeCapture
                                (param_1,&local_a0,&local_c0,lVar6);
              if ((uVar4 & 1) != 0) {
                if ((lVar6 == 0) || (*(long *)(lVar6 + 0x30) == 0)) goto LAB_0445ea84;
                CookingGraph_CookingLevelSimulation__Dispatch
                          (param_1,*(undefined8 *)(lVar6 + 0x18),0,0,0,
                           *(undefined8 *)(*(long *)(lVar6 + 0x30) + 0x28));
              }
            }
          }
        }
        uVar9 = uVar9 + 1;
        puVar10 = puVar10 + 6;
      } while ((long)uVar9 < (long)*(int *)(lVar2 + 0x18));
    }
    return;
  }
LAB_0445ea84:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

