// rea decompile_all
// name: System.ThrowHelper$$GetArgumentName
// address: 0x75d8154
// body: available
// range: 0x75d8154-0x75d82cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_ThrowHelper__GetArgumentName(uint param_1)

{
  undefined **ppuVar1;
  
  if ((DAT_09521e8d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09219b28);
    FUN_03f5c2a4(&DAT_0921dc48);
    FUN_03f5c2a4(&DAT_09225568);
    FUN_03f5c2a4(&DAT_09221428);
    FUN_03f5c2a4(&DAT_0921d350);
    FUN_03f5c2a4(&DAT_09218f20);
    FUN_03f5c2a4(&DAT_09225370);
    FUN_03f5c2a4(&DAT_0921e8f8);
    FUN_03f5c2a4(&DAT_09219a88);
    FUN_03f5c2a4(&DAT_092201e0);
    FUN_03f5c2a4(&DAT_0921a6f8);
    FUN_03f5c2a4(&DAT_0921d490);
    FUN_03f5c2a4(&DAT_0921f8a0);
    FUN_03f5c2a4(&DAT_092179d0);
    FUN_03f5c2a4(&DAT_092179f8);
    FUN_03f5c2a4(&DAT_0921a6f0);
    FUN_03f5c2a4(&DAT_092188d0);
    FUN_03f5c2a4(&DAT_0921fa28);
    FUN_03f5c2a4(&DAT_092206f0);
    FUN_03f5c2a4(&DAT_0921f240);
    FUN_03f5c2a4(&DAT_09223268);
    FUN_03f5c2a4(&DAT_0921df98);
    FUN_03f5c2a4(&DAT_09223180);
    FUN_03f5c2a4(&DAT_09222fc0);
    DAT_09521e8d = 1;
  }
  ppuVar1 = &PTR_DAT_08a61c20 + (int)param_1;
  if (0x17 < param_1) {
    ppuVar1 = (undefined **)(DAT_09535468 + 0xb8);
  }
  return *(undefined8 *)*ppuVar1;
}

