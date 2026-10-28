// rea decompile_all
// name: CookingGraph.CookingEstimatorBot$$ClampIntelligent
// address: 0x440cb38
// body: available
// range: 0x440cb38-0x440cc3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x440cbc0 to 0x75b675c System.Math$$Max (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x440cc3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingEstimatorBot__ClampIntelligent(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint local_24;
  
  if ((DAT_09517ef1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09517ef1 = 1;
  }
  if ((param_1 & 0x7fffffff) < 0x7f800001) {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Math__Min(0x3f800000,param_1,0);
    System_Math__Max(0,uVar5,0);
    return;
  }
  local_24 = param_1;
  uVar1 = FUN_03f5c42c(DAT_09535450,&local_24);
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_09225370);
  uVar4 = thunk_FUN_03fc39d4(&DAT_09204f78);
  System_ArgumentOutOfRangeException___ctor(uVar2,uVar3,uVar1,uVar4,0);
  uVar1 = thunk_FUN_03fc39d4(&DAT_091c6400);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar1);
}

