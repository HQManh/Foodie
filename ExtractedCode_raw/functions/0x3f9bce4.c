// rea decompile_all
// name: FUN_03f9bce4
// address: 0x3f9bce4
// body: available
// range: 0x3f9bce4-0x3f9be8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f9bce4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 local_50;
  long lStack_48;
  
  FUN_03f85e5c(param_1 + 0x78);
  local_50 = *param_2;
  local_58[0] = 0;
  FUN_03fa28f8(&local_a8,param_1,local_58);
  lVar2 = local_88;
  lVar1 = local_90;
  lVar3 = local_98;
  lVar5 = local_a0;
  local_a0 = *(long *)(param_1 + 0x40);
  local_98 = *(long *)(param_1 + 0x48);
  local_68 = 0;
  local_88 = 0;
  local_a8 = param_1;
  local_90 = local_98;
  lStack_80 = local_a0;
  local_78 = local_98;
  lStack_70 = local_98;
  FUN_03fa2b50(&local_a8);
  if ((((lVar5 == local_a0) && (lVar3 == local_98)) && (lVar1 == local_90)) &&
     ((lVar1 == lVar3 || (lVar2 == local_88)))) {
    lVar5 = *(long *)(param_1 + 0x70);
    if (lVar5 == 0) {
      *(undefined8 *)(param_1 + 0x70) = 8;
      uVar4 = FUN_03f5da88(0x40,0);
      *(undefined8 *)(param_1 + 0x68) = uVar4;
    }
    else if (*(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x38) == lVar5) {
      lVar3 = FUN_03f5da88(lVar5 << 4,0);
      local_a0 = *(long *)(param_1 + 0x68);
      local_98 = *(long *)(param_1 + 0x70) << 3;
      local_a8 = lVar3;
      thunk_FUN_03fd69a8(FUN_03fa2c00,&local_a8);
      thunk_FUN_03fd1308(*(undefined8 *)(param_1 + 0x68));
      FUN_03f5d7b8(lVar3,*(long *)(param_1 + 0x70) << 3);
      *(long *)(param_1 + 0x68) = lVar3;
      *(long *)(param_1 + 0x70) = lVar5 << 1;
    }
    local_50 = *param_2;
    local_58[0] = 0;
    lVar5 = *(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x38);
    lStack_48 = lVar5;
    FUN_03fa2c20(param_1,1);
    FUN_03fa2d74(&local_a8,param_1,local_58);
    *(undefined8 *)(*(long *)(param_1 + 0x68) + lVar5 * 8) = param_3;
    FUN_03f5d7b8(*(long *)(param_1 + 0x68) + lVar5 * 8);
  }
  else {
    param_3 = *(undefined8 *)(*(long *)(param_1 + 0x68) + *(long *)(lVar2 + 0x10) * 8);
  }
  FUN_03f85e64(param_1 + 0x78);
  return param_3;
}

