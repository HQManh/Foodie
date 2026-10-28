// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ProcessGridOrder
// address: 0x4468c5c
// body: available
// range: 0x4468c5c-0x4468edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4468eb8 to 0x4b0341c FUN_04b0341c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4468ed8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingLevelSimulation__ProcessGridOrder(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((DAT_09518056 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6738);
    FUN_03f5c2a4(&DAT_091c6740);
    FUN_03f5c2a4(&DAT_091ca0f0);
    FUN_03f5c2a4(&DAT_091cac50);
    FUN_03f5c2a4(&DAT_091cac58);
    FUN_03f5c2a4(&DAT_09178b90);
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_09178bd8);
    FUN_03f5c2a4(&DAT_0918f690);
    FUN_03f5c2a4(&DAT_091e7808);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518056 = 1;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    uVar1 = System_Linq_Enumerable__Range(0,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0);
    if ((*(long *)(param_1 + 0x180) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar4 != 0)) {
      if ((*(char *)(lVar4 + 0x12) == '\0') &&
         (uVar2 = CookingGraph_CookingLevelSimulation__get_UrgentFirst(param_1), (uVar2 & 1) == 0))
      {
        return uVar1;
      }
      uVar3 = thunk_FUN_03f9944c(DAT_09178b90);
      FUN_0531612c(uVar3,param_1,DAT_091c6738,0);
      if (*(int *)(DAT_0918f690 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = FUN_04aeaf6c(uVar1,uVar3,**(undefined8 **)(DAT_0918f690 + 0xb8),DAT_091ca0f0);
      uVar3 = thunk_FUN_03f9944c(DAT_09178bd8);
      FUN_05315e5c(uVar3,param_1,DAT_091c6740,0);
      uVar1 = FUN_04b034e8(uVar1,uVar3,DAT_091cac58);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
      }
      puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar4 = puVar6[0x93];
      if (lVar4 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
          puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar3 = *puVar6;
        lVar4 = thunk_FUN_03f9944c(DAT_09178bd0);
        FUN_05315cf4(lVar4,uVar3,DAT_091e7808,0);
        lVar5 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar5 + 0x498) = lVar4;
        thunk_FUN_03f5d7b8(lVar5 + 0x498,lVar4);
      }
      uVar1 = FUN_04b0341c(uVar1,lVar4,DAT_091cac50);
      return uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

