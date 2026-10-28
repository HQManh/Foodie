// rea decompile_all
// name: System.Resources.ResourceReader$$GetNamePosition
// address: 0x74daa64
// body: available
// range: 0x74daa64-0x74dab7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74dab70 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dab74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74dab78 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Resources_ResourceReader__GetNamePosition(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_14;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    lVar4 = *(long *)(param_1 + 0x40);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar4 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar1 = *(uint *)(lVar4 + (long)(int)param_2 * 4 + 0x20);
  }
  else {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x48) + (long)(int)param_2 * 4);
  }
  if ((-1 < (int)uVar1) &&
     ((long)(ulong)uVar1 <= *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20))) {
    return (ulong)uVar1;
  }
  uVar2 = thunk_FUN_03fc39d4(&DAT_09180318);
  uVar2 = FUN_03f5c394(uVar2,1);
  local_14 = uVar1;
  uVar3 = FUN_03f5c42c(DAT_09535420,&local_14);
  FUN_039b1d98(uVar2);
  FUN_039b0da0(uVar2,uVar3);
  FUN_039af17c(uVar2,0,uVar3);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091ff320);
  uVar2 = System_Environment__GetResourceString(uVar3,uVar2,0);
  thunk_FUN_03fc39d4(&DAT_09184908);
  uVar3 = thunk_FUN_03f9944c();
  System_FormatException___ctor(uVar3,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091d7cd8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

