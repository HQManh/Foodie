// rea decompile_all
// name: FUN_03fc0e84
// address: 0x3fc0e84
// body: available
// range: 0x3fc0e84-0x3fc0efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc0e84(long param_1)

{
  long lVar1;
  undefined2 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar5 = *(undefined8 *)(param_1 + 0xf0);
  uVar3 = FUN_03fac998(uVar5);
  puVar4 = (uint *)FUN_03fa7f20((ulong)uVar3 * 2 + 4);
  *puVar4 = uVar3;
  if (uVar3 != 0) {
    uVar6 = 0;
    do {
      FUN_03fac7e4(uVar5,uVar6 & 0xffffffff);
      uVar2 = FUN_03faca90();
      uVar3 = *puVar4;
      lVar1 = uVar6 * 2;
      uVar6 = uVar6 + 1;
      *(undefined2 *)((long)puVar4 + lVar1 + 4) = uVar2;
    } while (uVar6 < uVar3);
  }
  *(uint **)(param_1 + 0xc0) = puVar4;
  return;
}

