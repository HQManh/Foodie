// rea decompile_all
// name: Utilities.UIScrollSnap$$OnEndDrag
// address: 0x452e360
// body: available
// range: 0x452e360-0x452e407 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIScrollSnap__OnEndDrag(long param_1)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  
  *(undefined1 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0x24) == 1) {
    uVar1 = (uint)(*(float *)(param_1 + 0xb4) <= 0.0);
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) goto LAB_0452e3ac;
    uVar1 = 3;
    if (*(float *)(param_1 + 0xb0) <= 0.0) {
      uVar1 = 2;
    }
  }
  *(uint *)(param_1 + 0xb8) = uVar1;
LAB_0452e3ac:
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  if (DAT_09516ea4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09516ea4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar2 = (float)uVar3;
  fVar4 = (float)((ulong)uVar3 >> 0x20);
  *(float *)(param_1 + 0xbc) = SQRT(fVar2 * fVar2 + fVar4 * fVar4);
  return;
}

