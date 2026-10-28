// rea decompile_all
// name: System.Threading.AsyncFlowControl$$Equals
// address: 0x76220dc
// body: available
// range: 0x76220dc-0x7622177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Threading_AsyncFlowControl__Equals(byte *param_1,long *param_2)

{
  bool bVar1;
  byte *pbVar2;
  
  if ((DAT_0952213c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091816f8);
    DAT_0952213c = 1;
  }
  if ((((param_2 == (long *)0x0) || (*param_2 != DAT_091816f8)) ||
      (pbVar2 = (byte *)thunk_FUN_03f99594(param_2), (*pbVar2 & 1) != *param_1)) ||
     (*(long *)(pbVar2 + 8) != *(long *)(param_1 + 8))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(pbVar2 + 0x10) == *(long *)(param_1 + 0x10);
  }
  return bVar1;
}

