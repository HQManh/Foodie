// rea decompile_all
// name: FUN_03fc2f50
// address: 0x3fc2f50
// body: available
// range: 0x3fc2f50-0x3fc3197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc2f50(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  uStack_58 = param_3[1];
  local_60 = *param_3;
  local_68 = param_2;
  FUN_03f77ad8(&local_48,&local_68);
  local_c0[0] = 0;
  local_b8 = local_48;
  FUN_03fca4d0(&local_b0,&DAT_09535990,local_c0);
  lVar6 = local_90;
  lVar3 = local_98;
  lVar2 = local_a0;
  lVar1 = local_a8;
  local_70 = 0;
  local_b0 = &DAT_09535990;
  local_a8 = DAT_095359d0;
  local_a0 = DAT_095359d8;
  local_98 = DAT_095359d8;
  local_90 = 0;
  lStack_88 = DAT_095359d0;
  local_80 = DAT_095359d8;
  lStack_78 = DAT_095359d8;
  FUN_03fb3db0(&local_b0);
  if ((((lVar1 == local_a8) && (lVar2 == local_a0)) && (lVar3 == local_98)) &&
     ((lVar3 == lVar2 || (lVar6 == local_90)))) {
    local_60 = FUN_03fc320c(*param_3);
    uStack_58 = FUN_03fc320c(param_3[1]);
    local_c0[0] = 0;
    local_b8 = local_48;
    FUN_03fca4d0(&local_b0,&DAT_09535990,local_c0);
    lVar6 = local_90;
    lVar3 = local_98;
    lVar2 = local_a0;
    lVar1 = local_a8;
    local_70 = 0;
    local_b0 = &DAT_09535990;
    local_a8 = DAT_095359d0;
    local_a0 = DAT_095359d8;
    local_98 = DAT_095359d8;
    local_90 = 0;
    lStack_88 = DAT_095359d0;
    local_80 = DAT_095359d8;
    lStack_78 = DAT_095359d8;
    FUN_03fb3db0(&local_b0);
    if (((lVar1 == local_a8) && ((lVar2 == local_a0 && (lVar3 == local_98)))) &&
       ((lVar3 == lVar2 || (lVar6 == local_90)))) {
      local_60 = FUN_03fc3408(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0xf0),*param_3);
      uStack_58 = FUN_03fc3408(*(undefined8 *)(param_2 + 0x40),param_3[1]);
      local_c0[0] = 0;
      local_b8 = local_48;
      FUN_03fca4d0(&local_b0,&DAT_09535990,local_c0);
      lVar6 = local_90;
      lVar3 = local_98;
      lVar2 = local_a0;
      lVar1 = local_a8;
      local_70 = 0;
      local_b0 = &DAT_09535990;
      local_a8 = DAT_095359d0;
      local_a0 = DAT_095359d8;
      local_98 = DAT_095359d8;
      local_90 = 0;
      lStack_88 = DAT_095359d0;
      local_80 = DAT_095359d8;
      lStack_78 = DAT_095359d8;
      FUN_03fb3db0(&local_b0);
      if ((((lVar1 == local_a8) && (lVar2 == local_a0)) && (lVar3 == local_98)) &&
         ((lVar3 == lVar2 || (lVar6 == local_90)))) {
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 3) = 0;
        param_1[2] = 0;
        return;
      }
      uVar4 = *(undefined8 *)(lVar6 + 0x10);
      uVar5 = 1;
      goto LAB_03fc30b4;
    }
  }
  uVar4 = *(undefined8 *)(lVar6 + 0x10);
  uVar5 = 0;
LAB_03fc30b4:
  FUN_03fc3198(param_1,uVar4,uVar5);
  return;
}

