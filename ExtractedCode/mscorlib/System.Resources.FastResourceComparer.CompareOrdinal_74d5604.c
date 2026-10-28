// rea decompile_all
// name: System.Resources.FastResourceComparer$$CompareOrdinal
// address: 0x74d5604
// body: available
// range: 0x74d5604-0x74d56b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d56b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Resources_FastResourceComparer__CompareOrdinal(long param_1,long param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = iVar5;
  if (param_3 <= iVar5) {
    iVar1 = param_3;
  }
  if (param_3 == 0) {
    param_3 = -(uint)(iVar5 != 0);
  }
  else {
    if (param_2 == 0) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)0x0;
      if (*(int *)(param_2 + 0x18) != 0) {
        puVar6 = (ushort *)(param_2 + 0x20);
      }
    }
    if (0 < iVar1) {
      iVar5 = 0;
      do {
        uVar2 = *puVar6;
        uVar4 = System_String__get_Chars(param_1,iVar5,0);
        iVar3 = (uVar4 & 0xffff) - (uint)uVar2;
        if (iVar3 != 0) break;
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar5 < iVar1);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    param_3 = *(int *)(param_1 + 0x10) - param_3;
  }
  return param_3;
}

