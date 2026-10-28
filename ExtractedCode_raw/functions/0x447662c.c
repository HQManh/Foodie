// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$<CleanTableCells>b__63_1
// address: 0x447662c
// body: available
// range: 0x447662c-0x44767b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44767b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CookingLevelSimulation__<CleanTableCells>b__63_1(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_09518088 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9830);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_091e75f8);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_09518088 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x178);
  CookingGraph_CookingLevelSimulation__GridAddress(&local_60,param_2);
  if (lVar5 != 0) {
    uStack_78 = uStack_58;
    local_80 = local_60;
    local_70 = local_50;
    uVar2 = CookingGraph_Execution_CookingExecution__UnitsAt(lVar5,&local_80,0);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar5 = puVar4[0x2b];
    if (lVar5 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar6 = *puVar4;
      lVar5 = thunk_FUN_03f9944c(DAT_09178768);
      FUN_053136a4(lVar5,uVar6,DAT_091e75f8,0);
      lVar3 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar3 + 0x158) = lVar5;
      thunk_FUN_03f5d7b8(lVar3 + 0x158,lVar5);
    }
    uVar1 = FUN_04adb820(uVar2,lVar5,DAT_091c9830);
    local_48 = 0;
    FUN_066c1fdc(&local_48,param_2,uVar1,DAT_091bec98);
    return local_48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

