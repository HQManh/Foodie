// rea decompile_all
// name: FUN_03f8d1a0
// address: 0x3f8d1a0
// body: available
// range: 0x3f8d1a0-0x3f8d1f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f8d1a0(void)

{
  undefined8 *puVar1;
  
  if (DAT_09534b20 == (undefined8 *)0x0) {
    puVar1 = operator_new(0x50);
    *(undefined4 *)puVar1 = 0xffffffff;
    DAT_09534b20 = puVar1;
    *(undefined8 *)((long)puVar1 + 0xc) = 0;
    *(undefined8 *)((long)puVar1 + 4) = 0;
    *(undefined8 *)((long)puVar1 + 0x25) = 0;
    *(undefined8 *)((long)puVar1 + 0x1d) = 0;
    *(undefined8 *)((long)puVar1 + 0x1c) = 0;
    *(undefined8 *)((long)puVar1 + 0x14) = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    *puVar1 = 0x200000002;
    *(undefined4 *)(puVar1 + 5) = 3;
    puVar1[4] = 0xffffffff00000000;
  }
  return;
}

