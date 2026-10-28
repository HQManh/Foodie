// rea decompile_all
// name: System.String$$IndexOfAny
// address: 0x74351c0
// body: available
// range: 0x74351c0-0x743524b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_String__IndexOfAny(long param_1,short param_2,short param_3,ulong param_4,int param_5)

{
  short *psVar1;
  short sVar2;
  ulong uVar3;
  
  if (0 < param_5) {
    uVar3 = -(param_4 >> 0x1f & 1) & 0xfffffffe00000000 | (param_4 & 0xffffffff) << 1;
    param_5 = param_5 + 2;
    do {
      psVar1 = (short *)(param_1 + 0x14 + uVar3);
      sVar2 = *psVar1;
      if (sVar2 == param_2 || sVar2 == param_3) {
        if ((long)uVar3 < 0) {
          uVar3 = uVar3 + 1;
        }
        return uVar3 >> 1;
      }
      sVar2 = psVar1[1];
      if ((sVar2 == param_2) || (sVar2 == param_3)) {
        if (param_5 == 3) {
          return 0xffffffff;
        }
        if ((long)uVar3 < 0) {
          uVar3 = uVar3 + 1;
        }
        return (ulong)((int)(uVar3 >> 1) + 1);
      }
      param_5 = param_5 + -2;
      uVar3 = uVar3 + 4;
    } while (2 < param_5);
  }
  return 0xffffffff;
}

