// rea decompile_all
// name: FUN_03f9d18c
// address: 0x3f9d18c
// body: available
// range: 0x3f9d18c-0x3f9d23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f9d18c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_88 [2];
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  local_88[0] = 0;
  local_80 = param_1;
  FUN_03fa4e1c(&local_78,DAT_09535058,local_88);
  lVar4 = local_58;
  lVar3 = local_60;
  lVar2 = local_68;
  lVar1 = local_70;
  local_70 = *(long *)(DAT_09535058 + 0x40);
  local_68 = *(long *)(DAT_09535058 + 0x48);
  local_38 = 0;
  local_78 = DAT_09535058;
  local_58 = 0;
  local_60 = local_68;
  lStack_50 = local_70;
  local_48 = local_68;
  lStack_40 = local_68;
  FUN_03f6054c(&local_78);
  if ((((lVar1 == local_70) && (lVar2 == local_68)) && (lVar3 == local_60)) &&
     ((lVar3 == lVar2 || (lVar4 == local_58)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
  }
  return uVar5;
}

