// rea decompile_all
// name: System.Globalization.TimeSpanParse$$ProcessTerminal_D
// address: 0x750aca4
// body: available
// range: 0x750aca4-0x750af6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750adc8 to 0x752c730 System.Globalization.TimeSpanParse.TimeSpanResult$$SetFailure (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_TimeSpanParse__ProcessTerminal_D(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
  if ((DAT_095216ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_0920efa0);
    FUN_03f5c2a4(&DAT_0920dc98);
    DAT_095216ca = 1;
  }
  local_48 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((*(int *)(param_1 + 8) != 2) || ((param_2 >> 2 & 1) != 0)) {
    uVar3 = System_Globalization_TimeSpanParse_TimeSpanResult__SetFailure
                      (param_3,2,DAT_0920dc98,0,0,0);
    return uVar3;
  }
  if ((param_2 & 1) == 0) {
    if (((param_2 & 0xff) >> 1 & 1) != 0) {
LAB_0750ad20:
      System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_PositiveLocalized(&local_f8,param_1,0)
      ;
      uStack_118 = uStack_f0;
      local_120 = local_f8;
      uStack_108 = uStack_e0;
      uStack_110 = uStack_e8;
      local_100 = local_d8;
      uVar1 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullDMatch(param_1,&local_120,0);
      if ((uVar1 & 1) != 0) goto LAB_0750ae30;
      System_Globalization_TimeSpanParse_TimeSpanRawInfo__get_NegativeLocalized(&local_f8,param_1,0)
      ;
      uStack_148 = uStack_f0;
      local_150 = local_f8;
      uStack_138 = uStack_e0;
      uStack_140 = uStack_e8;
      local_130 = local_d8;
      uVar2 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullDMatch(param_1,&local_150,0);
      if ((uVar2 & 1) != 0) {
        uVar1 = uVar1 & (uVar2 ^ 1);
        goto LAB_0750aeb4;
      }
    }
LAB_0750ae9c:
    uVar4 = 2;
    uVar5 = DAT_0920dc98;
  }
  else {
    if (DAT_095216d2 == '\0') {
      FUN_03f5c2a4(&DAT_0918bd68);
      DAT_095216d2 = '\x01';
    }
    if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar6 = *(undefined8 **)(DAT_0918bd68 + 0xb8);
    uStack_98 = puVar6[1];
    local_a0 = *puVar6;
    uStack_88 = puVar6[3];
    uStack_90 = puVar6[2];
    local_80 = puVar6[4];
    uVar3 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullDMatch(param_1,&local_a0,0);
    if ((uVar3 & 1) == 0) {
      if (DAT_095216d3 == '\0') {
        FUN_03f5c2a4(&DAT_0918bd68);
        DAT_095216d3 = '\x01';
      }
      if (*(int *)(DAT_0918bd68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(DAT_0918bd68 + 0xb8);
      uStack_c8 = *(undefined8 *)(lVar7 + 0x30);
      local_d0 = *(undefined8 *)(lVar7 + 0x28);
      uStack_b8 = *(undefined8 *)(lVar7 + 0x40);
      uStack_c0 = *(undefined8 *)(lVar7 + 0x38);
      local_b0 = *(undefined8 *)(lVar7 + 0x48);
      uVar3 = System_Globalization_TimeSpanParse_TimeSpanRawInfo__FullDMatch(param_1,&local_d0,0);
      if (((param_2 & 0xff) >> 1 & 1) == 0) {
        if ((uVar3 & 1) == 0) goto LAB_0750ae9c;
      }
      else if ((uVar3 & 1) == 0) goto LAB_0750ad20;
      uVar1 = 0;
    }
    else {
LAB_0750ae30:
      uVar1 = 1;
    }
LAB_0750aeb4:
    local_48 = 0;
    System_Globalization_TimeSpanParse_TimeSpanToken___ctor(&local_70,0,0);
    uStack_168 = *(undefined8 *)(param_1 + 0x80);
    local_170 = *(undefined8 *)(param_1 + 0x78);
    uStack_158 = *(undefined8 *)(param_1 + 0x90);
    uStack_160 = *(undefined8 *)(param_1 + 0x88);
    uStack_1e8 = uStack_68;
    local_1f0 = local_70;
    uStack_1d8 = uStack_58;
    uStack_1e0 = uStack_60;
    uStack_1c8 = uStack_68;
    local_1d0 = local_70;
    uStack_1b8 = uStack_58;
    uStack_1c0 = uStack_60;
    uStack_1a8 = uStack_68;
    local_1b0 = local_70;
    uStack_198 = uStack_58;
    uStack_1a0 = uStack_60;
    uStack_188 = uStack_68;
    local_190 = local_70;
    uStack_178 = uStack_58;
    uStack_180 = uStack_60;
    uVar3 = System_Globalization_TimeSpanParse__TryTimeToTicks
                      (uVar1 & 1,&local_170,&local_190,&local_1b0,&local_1d0,&local_1f0,&local_48);
    if ((uVar3 & 1) != 0) {
      if ((uVar1 & 1) == 0) {
        local_48 = -local_48;
        if (0 < local_48) goto LAB_0750af24;
      }
      *param_3 = local_48;
      uVar1 = 1;
      goto LAB_0750af54;
    }
LAB_0750af24:
    uVar4 = 4;
    uVar5 = DAT_0920efa0;
  }
  uVar1 = System_Globalization_TimeSpanParse_TimeSpanResult__SetFailure(param_3,uVar4,uVar5,0,0,0);
LAB_0750af54:
  return (ulong)(uVar1 & 1);
}

