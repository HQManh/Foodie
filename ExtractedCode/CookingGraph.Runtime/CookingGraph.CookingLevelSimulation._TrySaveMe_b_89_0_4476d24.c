// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$<TrySaveMe>b__89_0
// address: 0x4476d24
// body: available
// range: 0x4476d24-0x4476e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4476e38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__<TrySaveMe>b__89_0(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_0951808c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca3a0);
    FUN_03f5c2a4(&DAT_09178758);
    FUN_03f5c2a4(&DAT_091e7f18);
    FUN_03f5c2a4(&DAT_0918f5f8);
    DAT_0951808c = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f5f8);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass89_1___ctor(lVar1,0);
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x178);
    *(undefined4 *)(lVar1 + 0x10) = param_2;
    CookingGraph_CookingLevelSimulation__GridAddress(&local_48,param_2);
    if (lVar4 != 0) {
      uStack_58 = uStack_40;
      local_60 = local_48;
      local_50 = local_38;
      uVar2 = CookingGraph_Execution_CookingExecution__UnitsAt(lVar4,&local_60,0);
      uVar3 = thunk_FUN_03f9944c(DAT_09178758);
      FUN_05313258(uVar3,lVar1,DAT_091e7f18,0);
      FUN_04af0de4(uVar2,uVar3,DAT_091ca3a0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

