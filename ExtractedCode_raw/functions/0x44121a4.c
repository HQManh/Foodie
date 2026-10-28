// rea decompile_all
// name: CookingGraph.CookingEstimatorBot$$ShouldDeferForGridCapacity
// address: 0x44121a4
// body: available
// range: 0x44121a4-0x44124f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44124f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_CookingEstimatorBot__ShouldDeferForGridCapacity
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  bool bVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  
  if ((DAT_09517eef & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c97f8);
    FUN_03f5c2a4(&DAT_091784a8);
    FUN_03f5c2a4(&DAT_091ab498);
    FUN_03f5c2a4(&DAT_0917bd30);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091e6be0);
    FUN_03f5c2a4(&DAT_091e6be8);
    FUN_03f5c2a4(&DAT_0918eee0);
    DAT_09517eef = 1;
  }
  if (param_2 != 0) {
    if ((*(long *)(param_2 + 0x38) == 0) ||
       (lVar12 = *(long *)(*(long *)(param_2 + 0x38) + 0x10), lVar12 == 0)) {
      lVar12 = thunk_FUN_03f9944c(DAT_0917bd30);
      FUN_057e0400(lVar12,DAT_091ab498);
    }
    if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar10 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
    lVar11 = puVar10[0x14];
    if (lVar11 == 0) {
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar10 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      }
      uVar13 = *puVar10;
      lVar11 = thunk_FUN_03f9944c(DAT_091784a8);
      FUN_05322d94(lVar11,uVar13,DAT_091e6be0,0);
      plVar8 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0xa0);
      *plVar8 = lVar11;
      thunk_FUN_03f5d7b8(plVar8,lVar11);
    }
    iVar1 = FUN_04adc4d0(lVar12,lVar11,DAT_091c97f8);
    if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918eee0);
    }
    puVar10 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
    lVar11 = puVar10[0x15];
    if (lVar11 == 0) {
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918eee0);
        puVar10 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      }
      uVar13 = *puVar10;
      lVar11 = thunk_FUN_03f9944c(DAT_091784a8);
      FUN_05322d94(lVar11,uVar13,DAT_091e6be8,0);
      plVar8 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0xa8);
      *plVar8 = lVar11;
      thunk_FUN_03f5d7b8(plVar8,lVar11);
    }
    iVar2 = FUN_04adc4d0(lVar12,lVar11,DAT_091c97f8);
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar3 = CookingGraph_EstimatorBotScorer__EstimateCommittedFootprint
                        (*(long *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x48));
      if (*(long *)(param_1 + 0x30) != 0) {
        uVar4 = CookingGraph_EstimatorBotScorer__EstimateCommittedFootprint
                          (*(long *)(param_1 + 0x30),param_4);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187e80);
        }
        iVar5 = System_Math__Max(uVar3,uVar4,0);
        if ((param_3 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
          iVar6 = CookingGraph_EstimatorBotScorer__EstimateProjectedFootprint
                            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x48),param_4,
                             *(undefined8 *)(param_3 + 0x10),param_2);
          lVar12 = CookingGraph_CookingEstimatorBot__EffectiveSettings(param_1);
          if (lVar12 != 0) {
            fVar14 = (float)System_Math__Max(0,*(float *)(lVar12 + 100) + -0.5,0);
            iVar7 = -0x80000000;
            if ((float)(int)(fVar14 * 10.0) != INFINITY) {
              iVar7 = (int)(fVar14 * 10.0);
            }
            uVar13 = System_Math__Max(0,iVar1 + -1,0);
            iVar7 = System_Math__Min(uVar13,iVar7,0);
            iVar7 = System_Math__Max(1,iVar1 - iVar7,0);
            iVar6 = iVar6 + iVar2;
            *(int *)(param_3 + 0x3c) = iVar6;
            *(int *)(param_3 + 0x40) = iVar1;
            if (*(long *)(param_3 + 0x10) != 0) {
              bVar9 = false;
              if ((0 < iVar1) && (*(char *)(*(long *)(param_3 + 0x10) + 0x30) == '\0')) {
                bVar9 = (0 < iVar5 && iVar6 != iVar7) && (0 >= iVar5 || iVar7 <= iVar6);
              }
              *(bool *)(param_3 + 0x38) = bVar9;
              return bVar9;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

