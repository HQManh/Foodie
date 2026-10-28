// rea decompile_all
// name: Mono.Globalization.Unicode.ContractionComparer$$Compare
// address: 0x741546c
// body: available
// range: 0x741546c-0x7415503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74154fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7415500 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int Mono_Globalization_Unicode_ContractionComparer__Compare
              (undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ushort *puVar6;
  long lVar7;
  ushort *puVar8;
  int iVar9;
  
  if ((((param_2 != 0) && (param_3 != 0)) && (lVar5 = *(long *)(param_2 + 0x18), lVar5 != 0)) &&
     (lVar7 = *(long *)(param_3 + 0x18), lVar7 != 0)) {
    iVar3 = *(int *)(lVar5 + 0x18);
    iVar1 = *(int *)(lVar7 + 0x18);
    iVar4 = iVar1;
    if (iVar3 <= iVar1) {
      iVar4 = iVar3;
    }
    if (0 < iVar4) {
      puVar6 = (ushort *)(lVar5 + 0x20);
      puVar8 = (ushort *)(lVar7 + 0x20);
      iVar9 = iVar3;
      iVar2 = iVar1;
      do {
        if ((iVar9 == 0) || (iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558(param_1);
        }
        if ((uint)*puVar6 - (uint)*puVar8 != 0) {
          return (uint)*puVar6 - (uint)*puVar8;
        }
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 + -1;
        puVar8 = puVar8 + 1;
        iVar2 = iVar2 + -1;
        iVar9 = iVar9 + -1;
        param_1 = 0;
      } while (iVar4 != 0);
    }
    iVar3 = iVar3 - iVar1;
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_2 + 0x10) - *(int *)(param_3 + 0x10);
    }
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

