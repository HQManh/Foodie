// rea decompile_all
// name: FUN_03f84238
// address: 0x3f84238
// body: available
// range: 0x3f84238-0x3f842d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03f84238(long param_1,ulong param_2)

{
  int *piVar1;
  long *plVar2;
  ushort uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return false;
  }
  plVar2 = (long *)(*(long *)(param_1 + 0x38) + (param_2 / 0x30) * 0x10);
  if ((*(byte *)((long)plVar2 + (param_2 % 0x30 >> 3) + 10) >> (param_2 % 0x30 & 7) & 1) != 0) {
    lVar4 = *plVar2;
    uVar3 = FUN_03f5fe4c((long)plVar2 + 10);
    piVar1 = (int *)(lVar4 + (ulong)uVar3 * 0x10);
    if (*(int *)(param_1 + 0x24) == *piVar1) {
      if (*(int *)(param_1 + 0x24) != 0) {
        return true;
      }
      return *(int *)(param_1 + 0x28) == piVar1[1];
    }
  }
  return false;
}

