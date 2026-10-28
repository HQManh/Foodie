// rea decompile_all
// name: FUN_03fad8a4
// address: 0x3fad8a4
// body: available
// range: 0x3fad8a4-0x3fad92f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fad92c to 0x3f91940 <EXTERNAL>::free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fad8a4(void *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_03fad930();
  free(*(void **)((long)param_1 + 0x38));
  if (*(int *)((long)param_1 + 0x20) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(long *)((long)param_1 + 0x28);
      if ((*(byte *)(lVar1 + lVar2) >> 1 & 1) == 0) {
        free(*(void **)(lVar1 + lVar2 + 8));
        free(*(void **)(*(long *)((long)param_1 + 0x28) + lVar2 + 0x18));
        lVar1 = *(long *)((long)param_1 + 0x28);
      }
      free(*(void **)(lVar1 + lVar2 + 0x28));
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x48;
    } while (uVar3 < *(uint *)((long)param_1 + 0x20));
  }
  free(*(void **)((long)param_1 + 0x28));
  free(param_1);
  return;
}

