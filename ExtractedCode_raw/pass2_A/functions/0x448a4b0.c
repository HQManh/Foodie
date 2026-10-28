// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c$$<ReplanPlates>b__27_2
// address: 0x448a4b0
// body: available
// range: 0x448a4b0-0x448a5df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x448a5dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CookingGraph_CookingLevelSimulation_<>c__<ReplanPlates>b__27_2(undefined8 param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_09518116 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c93c8);
    FUN_03f5c2a4(&DAT_09178468);
    FUN_03f5c2a4(&DAT_091e7978);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518116 = 1;
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    uVar2 = CookingGraph_Execution_CookingAssemblySnapshot__get_Complete
                      (*(long *)(param_2 + 0x10),0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_2 + 0x10) == 0) goto LAB_0448a5dc;
      uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x38);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar6 = puVar4[0xc];
      if (lVar6 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar7 = *puVar4;
        lVar6 = thunk_FUN_03f9944c(DAT_09178468);
        FUN_05311eac(lVar6,uVar7,DAT_091e7978,0);
        plVar3 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x60);
        *plVar3 = lVar6;
        thunk_FUN_03f5d7b8(plVar3,lVar6);
      }
      uVar1 = FUN_04ab5cb8(uVar5,lVar6,DAT_091c93c8);
      uVar1 = uVar1 ^ 1;
    }
    else {
      uVar1 = 0;
    }
    return uVar1 & 1;
  }
LAB_0448a5dc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

