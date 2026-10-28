// rea decompile_all
// name: CookingGraph.CookingEstimatorBot$$AccumulateFailure
// address: 0x4412838
// body: available
// range: 0x4412838-0x44129ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4412970 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44129ec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingEstimatorBot__AccumulateFailure(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((DAT_09517ee7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d5f0);
    FUN_03f5c2a4(&DAT_092027c8);
    DAT_09517ee7 = 1;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar3 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_091fd4d8);
    System_InvalidOperationException___ctor(uVar3,uVar2,0);
  }
  else {
    if (param_2 != 0) {
      if (*(int *)(param_1 + 0x50) < 1) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = (float)*(int *)(param_1 + 0x54) / (float)*(int *)(param_1 + 0x50);
      }
      if (*(long *)(param_1 + 0x70) != 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x48);
        uVar8 = *(undefined4 *)(param_1 + 0x4c);
        lVar4 = *(long *)(param_1 + 0xb8);
        uVar6 = *(undefined4 *)(param_1 + 0x58);
        uVar1 = *(undefined4 *)(param_1 + 0xa8);
        uVar2 = FUN_06ef0310(*(long *)(param_1 + 0x70),DAT_0919d5f0);
        if (lVar4 != 0) {
          CookingGraph_CookingBotFailureKnowledge__Accumulate
                    (uVar7,uVar8,fVar5,uVar6,lVar4,param_2,uVar1,uVar2);
          if (*(long *)(param_1 + 0x30) != 0) {
            *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x30) = *(undefined8 *)(param_1 + 0xb8);
            thunk_FUN_03f5d7b8();
            lVar4 = *(long *)(param_1 + 0x30);
            uVar2 = CookingGraph_CookingEstimatorBot__EffectiveSettings(param_1);
            if (lVar4 != 0) {
              CookingGraph_EstimatorBotScorer__SetSettings(lVar4,uVar2);
              CookingGraph_CookingEstimatorBot__Verbose(param_1,0xd,DAT_092027c8,0,0,0);
              return *(undefined8 *)(param_1 + 0xb8);
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_0921b528);
    System_ArgumentNullException___ctor(uVar3,uVar2,0);
  }
  uVar2 = thunk_FUN_03fc39d4(&DAT_091c63f8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

