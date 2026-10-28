// rea decompile_all
// name: Klak.Math.XXHash$$GetRange
// address: 0x44f3a3c
// body: available
// range: 0x44f3a3c-0x44f3a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int Klak_Math_XXHash__GetRange(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = param_4 + param_1 * -0x3d4d51c3 + 0x165667b5;
  uVar1 = (uVar1 >> 0xf | uVar1 * 0x20000) * 0x27d4eb2f;
  uVar1 = (uVar1 ^ uVar1 >> 0xf) * -0x7a143589;
  uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51c3;
  uVar3 = param_3 - param_2;
  uVar1 = uVar1 ^ uVar1 >> 0x10;
  iVar2 = 0;
  if (uVar3 != 0) {
    iVar2 = (int)uVar1 / (int)uVar3;
  }
  iVar2 = uVar1 - iVar2 * uVar3;
  return iVar2 + param_2 + (uVar3 & iVar2 >> 0x1f);
}

