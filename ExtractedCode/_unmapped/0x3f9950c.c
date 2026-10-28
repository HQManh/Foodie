// rea decompile_all
// name: FUN_03f9950c
// address: 0x3f9950c
// body: available
// range: 0x3f9950c-0x3f99593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_03f9950c(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  size_t __n;
  
  plVar3 = (long *)FUN_03fd12f8(*(undefined4 *)(param_1 + 0xf8));
  uVar2 = *(uint *)(param_1 + 0xf8);
  *plVar3 = param_1;
  plVar3[1] = 0;
  if (uVar2 < 0x80) {
    plVar1 = (long *)((long)plVar3 + (ulong)uVar2);
    if (plVar1 <= plVar3 + 2) goto LAB_03f99574;
    if (plVar1 <= plVar3 + 3) {
      plVar1 = plVar3 + 3;
    }
    __n = ((long)plVar1 + (-0x11 - (long)plVar3) & 0xfffffffffffffff8U) + 8;
  }
  else {
    __n = (ulong)uVar2 - 0x10;
  }
  memset(plVar3 + 2,0,__n);
LAB_03f99574:
  FUN_0404c020(1,&DAT_09534428);
  return plVar3;
}

