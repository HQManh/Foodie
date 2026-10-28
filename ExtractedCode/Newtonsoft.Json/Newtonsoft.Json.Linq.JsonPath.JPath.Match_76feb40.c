// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.JPath$$Match
// address: 0x76feb40
// body: available
// range: 0x76feb40-0x76febe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76febe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Newtonsoft_Json_Linq_JsonPath_JPath__Match(long param_1,long param_2)

{
  short sVar1;
  short sVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 == 0) {
LAB_076febe4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar5 = *(int *)(param_1 + 0x20);
  bVar6 = *(int *)(param_2 + 0x10) < 1;
  if (0 < *(int *)(param_2 + 0x10)) {
    iVar4 = 0;
    do {
      lVar3 = *(long *)(param_1 + 0x10);
      if (lVar3 == 0) goto LAB_076febe4;
      if (*(int *)(lVar3 + 0x10) <= iVar5 + iVar4) {
        return bVar6;
      }
      sVar1 = System_String__get_Chars(lVar3,iVar5 + iVar4,0);
      sVar2 = System_String__get_Chars(param_2,iVar4,0);
      if (sVar1 != sVar2) {
        return bVar6;
      }
      iVar4 = iVar4 + 1;
      bVar6 = *(int *)(param_2 + 0x10) <= iVar4;
    } while (iVar4 < *(int *)(param_2 + 0x10));
    iVar5 = iVar5 + iVar4;
  }
  *(int *)(param_1 + 0x20) = iVar5;
  return bVar6;
}

