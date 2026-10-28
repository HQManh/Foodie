// rea decompile_all
// name: DG.Tweening.Plugins.Color2Plugin$$SetFrom
// address: 0x4560f70
// body: available
// range: 0x4560f70-0x456111b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4561118 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Color2Plugin__SetFrom
               (undefined8 param_1,long param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_88 = 0;
  if ((param_5 & 1) == 0) {
    uStack_48 = param_3[1];
    local_50 = *param_3;
    local_38 = param_3[3];
    local_40 = param_3[2];
    if (param_2 == 0) goto LAB_04561118;
  }
  else {
    if ((param_2 == 0) || (lVar1 = *(long *)(param_2 + 0x188), lVar1 == 0)) goto LAB_04561118;
    (**(code **)(lVar1 + 0x18))
              (&local_50,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    uStack_c8 = *(undefined8 *)(param_2 + 0x14c);
    local_d0 = *(undefined8 *)(param_2 + 0x144);
    uStack_b8 = *(undefined8 *)(param_2 + 0x15c);
    uStack_c0 = *(undefined8 *)(param_2 + 0x154);
    uStack_e8 = uStack_48;
    local_f0 = local_50;
    uStack_d8 = local_38;
    uStack_e0 = local_40;
    uStack_68 = uStack_48;
    local_70 = local_50;
    uStack_58 = local_38;
    uStack_60 = local_40;
    DG_Tweening_Color2__op_Addition(&local_b0,&local_d0,&local_f0,0);
    *(undefined8 *)(param_2 + 0x14c) = uStack_a8;
    *(undefined8 *)(param_2 + 0x144) = local_b0;
    *(undefined8 *)(param_2 + 0x15c) = uStack_98;
    *(undefined8 *)(param_2 + 0x154) = uStack_a0;
    uStack_128 = param_3[1];
    local_130 = *param_3;
    uStack_118 = param_3[3];
    uStack_120 = param_3[2];
    uStack_148 = uStack_68;
    local_150 = local_70;
    uStack_138 = uStack_58;
    uStack_140 = uStack_60;
    DG_Tweening_Color2__op_Addition(&local_110,&local_130,&local_150,0);
    param_3[1] = uStack_108;
    *param_3 = local_110;
    param_3[3] = uStack_f8;
    param_3[2] = uStack_100;
    uStack_48 = param_3[1];
    local_50 = *param_3;
    local_38 = param_3[3];
    local_40 = param_3[2];
  }
  *(undefined8 *)(param_2 + 300) = uStack_48;
  *(undefined8 *)(param_2 + 0x124) = local_50;
  *(undefined8 *)(param_2 + 0x13c) = local_38;
  *(undefined8 *)(param_2 + 0x134) = local_40;
  if ((param_4 & 1) != 0) {
    local_80 = *param_3;
    local_78 = *(undefined4 *)(param_3 + 1);
    local_90 = param_3[2];
    uVar2 = *(undefined4 *)((long)param_3 + 0xc);
    local_88 = *(undefined4 *)(param_3 + 3);
    if (*(char *)(param_2 + 0x184) != '\0') {
      lVar1 = *(long *)(param_2 + 0x188);
      if (lVar1 == 0) goto LAB_04561118;
      (**(code **)(lVar1 + 0x18))
                (&local_50,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      uVar2 = *(undefined4 *)((long)param_3 + 0xc);
      local_80 = local_50;
      local_78 = (undefined4)uStack_48;
      local_90 = local_40;
      local_88 = (undefined4)local_38;
    }
    lVar1 = *(long *)(param_2 + 400);
    if (lVar1 == 0) {
LAB_04561118:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_50 = local_80;
    local_38 = CONCAT44(*(undefined4 *)((long)param_3 + 0x1c),local_88);
    uStack_48 = CONCAT44(uVar2,local_78);
    local_40 = local_90;
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),&local_50,*(undefined8 *)(lVar1 + 0x28));
  }
  return;
}

