// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$LaneMayHandOver
// address: 0x44453c4
// body: available
// range: 0x44453c4-0x44455d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44455d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CookingGraph_CookingLevelSimulation__LaneMayHandOver
               (undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_09518049 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9248);
    FUN_03f5c2a4(&DAT_091c9558);
    FUN_03f5c2a4(&DAT_09178290);
    FUN_03f5c2a4(&DAT_091793e8);
    FUN_03f5c2a4(&DAT_091e76d8);
    FUN_03f5c2a4(&DAT_091e7bb8);
    FUN_03f5c2a4(&DAT_0918f3a0);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518049 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918f3a0);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass148_0___ctor(lVar2,0);
  if (lVar2 != 0) {
    puVar6 = (undefined8 *)(lVar2 + 0x10);
    *puVar6 = param_3;
    thunk_FUN_03f5d7b8(puVar6,param_3);
    uVar7 = *puVar6;
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar8 = puVar4[0x83];
    if (lVar8 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar9 = *puVar4;
      lVar8 = thunk_FUN_03f9944c(DAT_091793e8);
      FUN_0532a53c(lVar8,uVar9,DAT_091e76d8,0);
      lVar5 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar5 + 0x418) = lVar8;
      thunk_FUN_03f5d7b8(lVar5 + 0x418,lVar8);
    }
    uVar3 = FUN_04ab7924(uVar7,lVar8,DAT_091c9558);
    if (((uVar3 & 1) == 0) &&
       (lVar8 = CookingGraph_CookingLevelSimulation__LaneRecipe(param_1,param_2,*puVar6), lVar8 != 0
       )) {
      uVar7 = CookingGraph_CookingLevelSimulation__ParkedIngredients(param_1);
      *(undefined8 *)(lVar2 + 0x18) = uVar7;
      thunk_FUN_03f5d7b8();
      uVar9 = *(undefined8 *)(lVar8 + 0x30);
      uVar7 = thunk_FUN_03f9944c(DAT_09178290);
      FUN_0530cf38(uVar7,lVar2,DAT_091e7bb8,0);
      uVar1 = FUN_04ab1e00(uVar9,uVar7,DAT_091c9248);
      uVar1 = uVar1 ^ 1;
    }
    else {
      uVar1 = 0;
    }
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

