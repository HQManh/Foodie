// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$PlanSaveMe
// address: 0x444043c
// body: available
// range: 0x444043c-0x4440747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4440744 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingLevelSimulation__PlanSaveMe(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if ((DAT_09517fea & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6730);
    FUN_03f5c2a4(&DAT_09182e40);
    FUN_03f5c2a4(&DAT_091ca020);
    FUN_03f5c2a4(&DAT_091ca988);
    FUN_03f5c2a4(&DAT_091ca3b8);
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_09178778);
    FUN_03f5c2a4(&DAT_09178b60);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091e77c0);
    FUN_03f5c2a4(&DAT_091e77c8);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09517fea = 1;
  }
  uVar4 = CookingGraph_CookingLevelSimulation__CanSaveMe(param_1);
  if ((uVar4 & 1) == 0) {
    uVar10 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x18c) & 0xfffffffe) == 2) {
      uVar5 = CookingGraph_CookingLevelSimulation__GridRescueCells(param_1);
    }
    else {
      uVar5 = FUN_03f5c394(DAT_091801b8,0);
    }
    lVar7 = *(long *)(param_1 + 0x178);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(undefined8 *)(lVar7 + 0x70);
    uVar2 = *(undefined8 *)(lVar7 + 0x78);
    uVar9 = *(undefined8 *)(param_1 + 400);
    uVar3 = *(undefined4 *)(param_1 + 0x18c);
    uVar10 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar7 = puVar8[6];
    if (lVar7 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar11 = *puVar8;
      lVar7 = thunk_FUN_03f9944c(DAT_09178bd0);
      FUN_05315cf4(lVar7,uVar11,DAT_091e77c0,0);
      plVar6 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x30);
      *plVar6 = lVar7;
      thunk_FUN_03f5d7b8(plVar6,lVar7);
    }
    uVar11 = FUN_04aea844(uVar10,lVar7,DAT_091ca020);
    uVar10 = thunk_FUN_03f9944c(DAT_09178b60);
    FUN_0531612c(uVar10,param_1,DAT_091c6730,0);
    uVar10 = FUN_04afa860(uVar5,uVar10,DAT_091ca988);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar7 = puVar8[7];
    if (lVar7 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar12 = *puVar8;
      lVar7 = thunk_FUN_03f9944c(DAT_09178778);
      FUN_05313f40(lVar7,uVar12,DAT_091e77c8,0);
      plVar6 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x38);
      *plVar6 = lVar7;
      thunk_FUN_03f5d7b8(plVar6,lVar7);
    }
    uVar12 = FUN_04af142c(uVar10,lVar7,DAT_091ca3b8);
    uVar10 = thunk_FUN_03f9944c(DAT_09182e40);
    CookingGraph_CookingSaveMePlan___ctor(uVar10,uVar1,uVar2,uVar9,uVar3,uVar5,uVar11,uVar12,0);
  }
  return uVar10;
}

