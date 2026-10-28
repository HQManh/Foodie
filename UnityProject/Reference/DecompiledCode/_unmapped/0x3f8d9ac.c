// rea decompile_all
// name: FUN_03f8d9ac
// address: 0x3f8d9ac
// body: available
// range: 0x3f8d9ac-0x3f8da5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_03f8d9ac(int *param_1,void *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  ulong uVar3;
  
  if ((*(byte *)(param_1 + 10) >> 1 & 1) == 0) {
    uVar3 = 0xffffffff;
    *param_4 = 5;
  }
  else {
    do {
      uVar3 = write(*param_1,param_2,(long)param_3);
      if ((int)uVar3 != -1) {
        piVar2 = (int *)FUN_03f8d254();
        if ((piVar2 == param_1) || (piVar2 = (int *)FUN_03f8d1a0(), piVar2 == param_1)) {
          FUN_03f874c4(param_2,param_3);
        }
        goto LAB_03f8da48;
      }
      piVar2 = (int *)__errno();
    } while (*piVar2 == 4);
    uVar1 = FUN_03f89920();
    uVar3 = 0xffffffff;
    *param_4 = uVar1;
  }
LAB_03f8da48:
  return uVar3 & 0xffffffff;
}

