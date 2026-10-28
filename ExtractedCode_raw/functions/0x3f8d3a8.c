// rea decompile_all
// name: FUN_03f8d3a8
// address: 0x3f8d3a8
// body: available
// range: 0x3f8d3a8-0x3f8d45b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03f8d3a8(long *param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  FUN_03f5d894(auStack_28,&DAT_09534ac8);
  if (DAT_09534b18 != 0) {
    lVar2 = DAT_09534b18;
    do {
      if ((*(long *)(lVar2 + 0x30) == *param_1) && (*(long *)(lVar2 + 0x38) == param_1[1])) {
        FUN_03f5d920(auStack_28);
        if (param_2 == 0) {
          return false;
        }
        iVar1 = *(int *)(lVar2 + 0x24);
        if (iVar1 == 0) {
          return false;
        }
        if ((param_3 != 1) && (iVar1 == 1)) {
          return false;
        }
        return param_3 == 2 || iVar1 != 2;
      }
      lVar2 = *(long *)(lVar2 + 0x48);
    } while (lVar2 != 0);
  }
  FUN_03f5d920(auStack_28);
  return true;
}

