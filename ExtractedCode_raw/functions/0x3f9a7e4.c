// rea decompile_all
// name: FUN_03f9a7e4
// address: 0x3f9a7e4
// body: available
// range: 0x3f9a7e4-0x3f9a98f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f9a7e4(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  FUN_03f85e5c(param_1 + 0x80);
  uStack_50 = param_2[1];
  local_58 = *param_2;
  local_60[0] = 0;
  FUN_03fa1698(&local_b0,param_1,local_60);
  lVar2 = local_90;
  lVar1 = local_98;
  lVar3 = local_a0;
  lVar5 = local_a8;
  local_a8 = *(long *)(param_1 + 0x48);
  local_a0 = *(long *)(param_1 + 0x50);
  local_70 = 0;
  local_90 = 0;
  local_b0 = param_1;
  local_98 = local_a0;
  lStack_88 = local_a8;
  local_80 = local_a0;
  lStack_78 = local_a0;
  FUN_03fa18f4(&local_b0);
  if ((((lVar5 == local_a8) && (lVar3 == local_a0)) && (lVar1 == local_98)) &&
     ((lVar1 == lVar3 || (lVar2 == local_90)))) {
    lVar5 = *(long *)(param_1 + 0x78);
    if (lVar5 == 0) {
      *(undefined8 *)(param_1 + 0x78) = 8;
      uVar4 = FUN_03f5da88(0x40,0);
      *(undefined8 *)(param_1 + 0x70) = uVar4;
    }
    else if (*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x40) == lVar5) {
      lVar3 = FUN_03f5da88(lVar5 << 4,0);
      local_a8 = *(long *)(param_1 + 0x70);
      local_a0 = *(long *)(param_1 + 0x78) << 3;
      local_b0 = lVar3;
      thunk_FUN_03fd69a8(FUN_03fa19d0,&local_b0);
      thunk_FUN_03fd1308(*(undefined8 *)(param_1 + 0x70));
      FUN_03f5d7b8(lVar3,*(long *)(param_1 + 0x78) << 3);
      *(long *)(param_1 + 0x70) = lVar3;
      *(long *)(param_1 + 0x78) = lVar5 << 1;
    }
    uStack_50 = param_2[1];
    local_58 = *param_2;
    local_60[0] = 0;
    lVar5 = *(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x40);
    local_48 = lVar5;
    FUN_03fa19f0(param_1,1);
    FUN_03fa1b44(&local_b0,param_1,local_60);
    *(undefined8 *)(*(long *)(param_1 + 0x70) + lVar5 * 8) = param_3;
    FUN_03f5d7b8(*(long *)(param_1 + 0x70) + lVar5 * 8);
  }
  else {
    param_3 = *(undefined8 *)(*(long *)(param_1 + 0x70) + *(long *)(lVar2 + 0x18) * 8);
  }
  FUN_03f85e64(param_1 + 0x80);
  return param_3;
}

