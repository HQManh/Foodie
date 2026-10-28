// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ProcessPreservationOrder
// address: 0x4468968
// body: available
// range: 0x4468968-0x4468c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4468c34 to 0x4b0341c FUN_04b0341c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4468c54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4468c58 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingLevelSimulation__ProcessPreservationOrder(long param_1,uint param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if ((DAT_09518055 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca0f0);
    FUN_03f5c2a4(&DAT_091cac50);
    FUN_03f5c2a4(&DAT_091cac58);
    FUN_03f5c2a4(&DAT_09178b90);
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_09178bd8);
    FUN_03f5c2a4(&DAT_0918f690);
    FUN_03f5c2a4(&DAT_091e7810);
    FUN_03f5c2a4(&DAT_091e7c78);
    FUN_03f5c2a4(&DAT_091e7c80);
    FUN_03f5c2a4(&DAT_0918f428);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518055 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f428);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass163_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
    lVar5 = *(long *)(param_1 + 0x78);
    *(uint *)(lVar1 + 0x18) = param_2;
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0)) {
      if (*(uint *)(lVar5 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = *(long *)(lVar5 + (long)(int)param_2 * 8 + 0x20);
      if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
        uVar2 = System_Linq_Enumerable__Range
                          (*(undefined4 *)(*(long *)(lVar5 + 0x10) + 0x18),
                           *(undefined4 *)(lVar5 + 0x1c),0);
        if ((*(long *)(param_1 + 0x180) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar5 != 0)) {
          if ((*(char *)(lVar5 + 0x12) == '\0') &&
             (uVar3 = CookingGraph_CookingLevelSimulation__get_UrgentFirst(param_1),
             (uVar3 & 1) == 0)) {
            return uVar2;
          }
          uVar4 = thunk_FUN_03f9944c(DAT_09178b90);
          FUN_0531612c(uVar4,lVar1,DAT_091e7c78,0);
          if (*(int *)(DAT_0918f690 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = FUN_04aeaf6c(uVar2,uVar4,**(undefined8 **)(DAT_0918f690 + 0xb8),DAT_091ca0f0);
          uVar4 = thunk_FUN_03f9944c(DAT_09178bd8);
          FUN_05315e5c(uVar4,lVar1,DAT_091e7c80,0);
          uVar2 = FUN_04b034e8(uVar2,uVar4,DAT_091cac58);
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
          }
          puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          lVar1 = puVar6[0x92];
          if (lVar1 == 0) {
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
              puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            }
            uVar4 = *puVar6;
            lVar1 = thunk_FUN_03f9944c(DAT_09178bd0);
            FUN_05315cf4(lVar1,uVar4,DAT_091e7810,0);
            lVar5 = *(long *)(DAT_0918f298 + 0xb8);
            *(long *)(lVar5 + 0x490) = lVar1;
            thunk_FUN_03f5d7b8(lVar5 + 0x490,lVar1);
          }
          uVar2 = FUN_04b0341c(uVar2,lVar1,DAT_091cac50);
          return uVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

