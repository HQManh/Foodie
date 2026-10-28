// rea decompile_all
// name: CookingGraph.CookingBotFailureKnowledge$$Accumulate
// address: 0x440af50
// body: available
// range: 0x440af50-0x440b2d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440b288 to 0x440bde4 CookingGraph.CookingBotFailureKnowledge$$RefreshRecommendedStrategy (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x440b2d0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingBotFailureKnowledge__Accumulate
               (float param_1,float param_2,undefined4 param_3,float param_4,long param_5,
               long param_6,uint param_7,undefined8 param_8)

{
  int iVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_09517ed2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09517ed2 = 1;
  }
  if (param_6 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_09221900);
    System_ArgumentNullException___ctor(uVar3,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c6358);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  iVar5 = *(int *)(param_6 + 0x10);
  if (iVar5 != 3) {
    *(undefined4 *)(param_5 + 0x10) = 3;
    if (param_7 == 7) {
      iVar1 = *(int *)(param_5 + 0x50) + -1;
      *(int *)(param_5 + 0x54) = *(int *)(param_5 + 0x54) + 1;
      if (iVar1 == 0 || *(int *)(param_5 + 0x50) < 1) {
        *(undefined1 *)(param_5 + 0x58) = 1;
      }
      else {
        *(int *)(param_5 + 0x50) = iVar1;
      }
    }
    else {
      *(uint *)(param_5 + 0x34) = *(uint *)(param_5 + 0x34) | 1 << (ulong)(param_7 & 0x1f);
    }
    fVar6 = 0.0;
    if (0.0 <= *(float *)(param_6 + 0x14)) {
      fVar6 = (float)CookingGraph_CookingBotFailureKnowledge__Clamp
                               (*(float *)(param_6 + 0x14),0,0x3f800000);
      iVar5 = *(int *)(param_6 + 0x10);
      fVar6 = (1.0 - fVar6) * 0.1;
    }
    fVar16 = 1.0;
    fVar14 = fVar16;
    if (iVar5 != 1) {
      fVar14 = 0.0;
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar7 = (float)System_Math__Max(0,param_1 + -0.7,0);
    if (*(int *)(param_6 + 0x10) != 2) {
      fVar16 = 0.0;
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar8 = (float)System_Math__Max(0,param_2 + -0.35,0);
    iVar5 = *(int *)(param_6 + 0x10);
    fVar11 = 0.2;
    fVar12 = 0.15;
    if (iVar5 != 5) {
      fVar11 = 0.0;
    }
    fVar13 = 1.0;
    if (iVar5 != 5) {
      fVar13 = 0.0;
    }
    fVar2 = 1.0;
    if (iVar5 != 4) {
      fVar12 = 0.0;
      fVar2 = 0.0;
    }
    fVar15 = 0.75;
    if (1 < iVar5 - 1U) {
      fVar15 = 0.0;
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar9 = (float)System_Math__Max(0,param_4 + -0.25,0);
    *(int *)(param_5 + 0x14) = *(int *)(param_5 + 0x14) + 1;
    uVar10 = CookingGraph_CookingBotFailureKnowledge__Clamp
                       (fVar14 + fVar7 + *(float *)(param_5 + 0x18) * 0.85,0,0x40400000);
    *(undefined4 *)(param_5 + 0x18) = uVar10;
    uVar10 = CookingGraph_CookingBotFailureKnowledge__Clamp
                       (fVar16 + fVar8 + *(float *)(param_5 + 0x1c) * 0.85,0,0x40400000);
    *(undefined4 *)(param_5 + 0x1c) = uVar10;
    uVar10 = CookingGraph_CookingBotFailureKnowledge__Clamp
                       (fVar6 + *(float *)(param_5 + 0x20) * 0.85,0,0x40400000);
    *(undefined4 *)(param_5 + 0x20) = uVar10;
    uVar10 = CookingGraph_CookingBotFailureKnowledge__Clamp
                       (fVar2 + fVar11 + *(float *)(param_5 + 0x24) * 0.85,0,0x40400000);
    *(undefined4 *)(param_5 + 0x24) = uVar10;
    uVar10 = CookingGraph_CookingBotFailureKnowledge__Clamp
                       (fVar13 + fVar12 + *(float *)(param_5 + 0x28) * 0.85,0,0x40400000);
    *(undefined4 *)(param_5 + 0x28) = uVar10;
    fVar14 = *(float *)(param_5 + 0x2c);
    fVar6 = (float)CookingGraph_CookingBotFailureKnowledge__Clamp(param_3,0,0x3f800000);
    uVar10 = CookingGraph_CookingBotFailureKnowledge__Clamp(fVar14 * 0.85 + fVar6,0,0x40400000);
    *(undefined4 *)(param_5 + 0x2c) = uVar10;
    uVar10 = CookingGraph_CookingBotFailureKnowledge__Clamp
                       (fVar15 + fVar9 + *(float *)(param_5 + 0x30) * 0.85,0,0x40400000);
    *(undefined4 *)(param_5 + 0x30) = uVar10;
    CookingGraph_CookingBotFailureKnowledge__MergeFailedCustomers(param_5,param_8);
    CookingGraph_CookingBotFailureKnowledge__RefreshRecommendedStrategy(param_5);
    return;
  }
  return;
}

