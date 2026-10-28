// rea decompile_all
// name: FUN_03f9b8fc
// address: 0x3f9b8fc
// body: available
// range: 0x3f9b8fc-0x3f9b9df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_03f9b8fc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  undefined8 local_48;
  
  FUN_03f85e5c(param_1 + 0x80);
  uStack_90 = param_2[1];
  local_98 = *param_2;
  local_a0[0] = 0;
  FUN_03fa1698(&local_88,param_1,local_a0);
  lVar4 = local_68;
  lVar3 = local_70;
  lVar2 = local_78;
  lVar1 = local_80;
  local_80 = *(long *)(param_1 + 0x48);
  local_78 = *(long *)(param_1 + 0x50);
  local_48 = 0;
  local_68 = 0;
  local_88 = param_1;
  local_70 = local_78;
  lStack_60 = local_80;
  local_58 = local_78;
  lStack_50 = local_78;
  FUN_03fa18f4(&local_88);
  if ((((lVar1 == local_80) && (lVar2 == local_78)) && (lVar3 == local_70)) &&
     ((lVar3 == lVar2 || (lVar4 == local_68)))) {
    uVar5 = 0;
  }
  else {
    *param_3 = *(undefined8 *)(*(long *)(param_1 + 0x70) + *(long *)(lVar4 + 0x18) * 8);
    uVar5 = 1;
  }
  FUN_03f85e64(param_1 + 0x80);
  return uVar5;
}

