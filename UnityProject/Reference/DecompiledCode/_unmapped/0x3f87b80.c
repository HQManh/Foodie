// rea decompile_all
// name: FUN_03f87b80
// address: 0x3f87b80
// body: available
// range: 0x3f87b80-0x3f87c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f87b80(undefined8 param_1,ulong *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  
  puVar1 = (undefined1 *)FUN_0404c4e0();
  pthread_once((pthread_once_t *)0x9534a08,FUN_03f87cbc);
  if (puRam0000000009534a10 <= puVar1) {
    puVar4 = &end;
    if (cRam0000000009534a18 == '\0') {
      puVar4 = (undefined1 *)0x0;
    }
    if (puVar1 <= puVar4) goto LAB_03f87bfc;
  }
  if (puVar1 < puRam0000000009534a20) {
    return 5;
  }
  if (puRam0000000009534a28 < puVar1) {
    return 5;
  }
LAB_03f87bfc:
  uVar3 = *param_2;
  if (uVar3 < 0x80) {
    uVar2 = 0;
    *param_2 = uVar3 + 1;
    param_2[uVar3 + 1] = (ulong)puVar1;
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}

