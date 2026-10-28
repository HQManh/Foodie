// rea decompile_all
// name: FUN_03fc2b44
// address: 0x3fc2b44
// body: available
// range: 0x3fc2b44-0x3fc2bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fc2b44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
  local_98 = param_1;
  FUN_03fca040(auStack_58,&DAT_09535a60,&local_a0);
  local_60 = 0;
  local_a0 = &DAT_09535a60;
  local_98 = lRam0000000009535aa0;
  local_90 = lRam0000000009535aa8;
  local_88 = lRam0000000009535aa8;
  local_80 = 0;
  lStack_78 = lRam0000000009535aa0;
  local_70 = lRam0000000009535aa8;
  lStack_68 = lRam0000000009535aa8;
  FUN_03fb1c90(&local_a0);
  if ((((local_50 == local_98) && (local_48 == local_90)) && (local_40 == local_88)) &&
     ((local_40 == local_48 || (local_38 == local_80)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(local_38 + 0x10);
  }
  return uVar1;
}

