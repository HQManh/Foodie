// rea decompile_all
// name: FUN_03f968a0
// address: 0x3f968a0
// body: available
// range: 0x3f968a0-0x3f96927 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f968a0(uint param_1)

{
  ulong uVar1;
  void *__src;
  long lVar2;
  undefined8 *puVar3;
  void *__dest;
  
  lVar2 = DAT_09534fa0;
  if (param_1 != 0) {
    uVar1 = (-(ulong)(param_1 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_1 << 1) + 0x1a;
    if (uVar1 < param_1) {
      puVar3 = (undefined8 *)FUN_03fa5c84();
      __src = (void *)*puVar3;
      uVar1 = puVar3[1];
      lVar2 = FUN_03f968a0(uVar1 & 0xffffffff);
      __dest = (void *)FUN_03f92aa4();
      memcpy(__dest,__src,-(uVar1 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar1 & 0xffffffff) << 1);
      return lVar2;
    }
    lVar2 = FUN_03f9860c(uVar1,DAT_09535468);
    *(uint *)(lVar2 + 0x10) = param_1;
    *(undefined2 *)(lVar2 + (long)(int)param_1 * 2 + 0x14) = 0;
    if (DAT_09535130 < '\0') {
      FUN_03fa8190(lVar2,DAT_09535468);
    }
  }
  return lVar2;
}

