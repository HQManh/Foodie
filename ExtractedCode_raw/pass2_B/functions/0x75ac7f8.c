// rea decompile_all
// name: System.__DTString$$MatchLongestWords
// address: 0x75ac7f8
// body: available
// range: 0x75ac7f8-0x75ac8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ac8ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ac8f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System___DTString__MatchLongestWords(undefined8 param_1,long param_2,int *param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int local_44;
  
  if ((DAT_09521c87 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c87 = 1;
  }
  local_44 = 0;
  if (param_2 == 0) {
LAB_075ac8ec:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  if ((int)uVar1 < 1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar5 = 0;
    uVar3 = 0xffffffff;
    do {
      if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar4 = *(long *)(param_2 + (long)(int)uVar5 * 8 + 0x20);
      if (lVar4 == 0) goto LAB_075ac8ec;
      local_44 = *(int *)(lVar4 + 0x10);
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System___DTString__MatchSpecifiedWords(param_1,lVar4,0,&local_44);
      if (((uVar2 & 1) != 0) && (*param_3 < local_44)) {
        *param_3 = local_44;
        uVar3 = uVar5;
      }
      uVar1 = *(uint *)(param_2 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar1);
  }
  return uVar3;
}

