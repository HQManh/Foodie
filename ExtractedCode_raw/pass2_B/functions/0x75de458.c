// rea decompile_all
// name: System.Array.SorterObjectArray$$Heapsort
// address: 0x75de458
// body: available
// range: 0x75de458-0x75de4f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array_SorterObjectArray__Heapsort(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  uVar1 = (param_3 - param_2) + 1;
  if (1 < (int)uVar1) {
    uVar3 = uVar1 >> 1;
    do {
      System_Array_SorterObjectArray__DownHeap(param_1,uVar3,uVar1,param_2);
      bVar2 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar2 && uVar3 != 0);
    if (1 < (int)uVar1) {
      do {
        System_Array_SorterObjectArray__Swap(param_1,param_2,param_3);
        System_Array_SorterObjectArray__DownHeap(param_1,1,-param_2 + param_3,param_2);
        param_3 = param_3 + -1;
      } while (2 < -param_2 + param_3 + 2U);
    }
  }
  return;
}

