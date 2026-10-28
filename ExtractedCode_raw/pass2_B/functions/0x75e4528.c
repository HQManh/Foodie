// rea decompile_all
// name: System.Buffer$$MemoryCopy
// address: 0x75e4528
// body: available
// range: 0x75e4528-0x75e45af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75e45ac to 0x75e45b0 System.Buffer$$Memmove (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Buffer__MemoryCopy(long param_1,long param_2,long param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  
  if (param_3 < (long)param_4) {
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0x17,0);
  }
  uVar2 = param_4;
  if (0xffffffff < (long)param_4) {
    do {
      System_Buffer__Memmove(param_2,param_1,0xffffffff);
      param_4 = uVar2 - 0xffffffff;
      param_1 = param_1 + -1;
      param_2 = param_2 + -1;
      bVar1 = 0x1fffffffe < uVar2;
      uVar2 = param_4;
    } while (bVar1);
  }
  System_Buffer__Memmove(param_2,param_1,param_4);
  return;
}

