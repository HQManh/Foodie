// rea decompile_all
// name: FUN_03fbeccc
// address: 0x3fbeccc
// body: available
// range: 0x3fbeccc-0x3fbed57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_03fbeccc(long param_1,char *param_2)

{
  int iVar1;
  char *__s2;
  ulong uVar2;
  
joined_r0x03fbecd4:
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    if (uVar2 == 0) {
      FUN_03fbec70(param_1);
      if (*(short *)(param_1 + 0x124) == 0) break;
      uVar2 = *(ulong *)(param_1 + 0x80);
    }
    else {
      uVar2 = uVar2 + 0x20;
      if (*(long *)(param_1 + 0x80) + (ulong)*(ushort *)(param_1 + 0x124) * 0x20 <= uVar2) break;
    }
    if (uVar2 == 0) break;
    __s2 = (char *)FUN_03f98700(uVar2);
    iVar1 = strcmp(param_2,__s2);
    if (iVar1 == 0) {
      return uVar2;
    }
  } while( true );
  param_1 = *(long *)(param_1 + 0x58);
  goto joined_r0x03fbecd4;
}

