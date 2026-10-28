// rea decompile_all
// name: System.DateTimeParse$$ParseTimeZone
// address: 0x75a2890
// body: available
// range: 0x75a2890-0x75a2ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_DateTimeParse__ParseTimeZone(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09521c39 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c39 = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  local_48 = 0;
  uStack_50 = 0;
  if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System___DTString__GetSubString(&local_60,param_1,0);
  if (uStack_50._4_4_ == 1) {
    sVar3 = System_DTSubString__get_Item(&local_60,0,0);
    if ((sVar3 != 0x2d) && (sVar3 != 0x2b)) {
      return 0;
    }
    uStack_78 = uStack_58;
    local_80 = local_60;
    uStack_68 = local_48;
    uStack_70 = uStack_50;
    if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_98 = uStack_78;
    local_a0 = local_80;
    uStack_88 = uStack_68;
    uStack_90 = uStack_70;
    System___DTString__ConsumeSubString(param_1,&local_a0,0);
    System___DTString__GetSubString(&local_c0,param_1,0);
    uStack_58 = uStack_b8;
    local_60 = local_c0;
    local_48 = uStack_a8;
    uVar1 = local_48;
    uStack_50 = uStack_b0;
    uVar5 = uStack_50;
    local_48._0_4_ = (int)uStack_a8;
    if ((int)local_48 != 2) {
      return 0;
    }
    uStack_50._4_4_ = (int)((ulong)uStack_b0 >> 0x20);
    local_48._4_4_ = (uint)((ulong)uStack_a8 >> 0x20);
    iVar6 = local_48._4_4_;
    uStack_50 = uVar5;
    local_48 = uVar1;
    if (uStack_50._4_4_ - 3U < 2) {
      uStack_78 = uStack_b8;
      local_80 = local_c0;
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      iVar6 = (int)local_48._4_4_ / 100;
      uVar7 = (int)local_48._4_4_ % 100;
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_138 = uStack_78;
      local_140 = local_80;
      uStack_128 = uStack_68;
      uStack_130 = uStack_70;
      System___DTString__ConsumeSubString(param_1,&local_140,0);
    }
    else {
      if (1 < uStack_50._4_4_ - 1U) {
        return 0;
      }
      uStack_78 = uStack_b8;
      local_80 = local_c0;
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_d8 = uStack_78;
      local_e0 = local_80;
      uStack_c8 = uStack_68;
      uStack_d0 = uStack_70;
      System___DTString__ConsumeSubString(param_1,&local_e0,0);
      System___DTString__GetSubString(&local_c0,param_1,0);
      uStack_58 = uStack_b8;
      local_60 = local_c0;
      local_48 = uStack_a8;
      uStack_50 = uStack_b0;
      uVar5 = uStack_50;
      uStack_50._4_4_ = (int)((ulong)uStack_b0 >> 0x20);
      bVar2 = uStack_50._4_4_ != 1;
      uStack_50 = uVar5;
      if ((bVar2) || (sVar4 = System_DTSubString__get_Item(&local_60,0,0), sVar4 != 0x3a)) {
        uVar7 = 0;
        goto LAB_075a2b3c;
      }
      uStack_78 = uStack_58;
      local_80 = local_60;
      uStack_68 = local_48;
      uStack_70 = uStack_50;
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_f8 = uStack_78;
      local_100 = local_80;
      uStack_e8 = uStack_68;
      uStack_f0 = uStack_70;
      System___DTString__ConsumeSubString(param_1,&local_100,0);
      System___DTString__GetSubString(&local_c0,param_1,0);
      uStack_58 = uStack_b8;
      local_60 = local_c0;
      local_48 = uStack_a8;
      uVar1 = local_48;
      uStack_50 = uStack_b0;
      uVar5 = uStack_50;
      local_48._0_4_ = (int)uStack_a8;
      if ((int)local_48 != 2) {
        return 0;
      }
      uStack_50._4_4_ = (int)((ulong)uStack_b0 >> 0x20);
      if (1 < uStack_50._4_4_ - 1U) {
        return 0;
      }
      local_48._4_4_ = (uint)((ulong)uStack_a8 >> 0x20);
      uVar7 = local_48._4_4_;
      uStack_78 = uStack_b8;
      local_80 = local_c0;
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      uStack_50 = uVar5;
      local_48 = uVar1;
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_118 = uStack_78;
      local_120 = local_80;
      uStack_108 = uStack_68;
      uStack_110 = uStack_70;
      System___DTString__ConsumeSubString(param_1,&local_120,0);
    }
    if (uVar7 < 0x3c) {
LAB_075a2b3c:
      local_80 = 0;
      System_TimeSpan___ctor(&local_80,iVar6,uVar7,0,0);
      *param_2 = local_80;
      if (sVar3 != 0x2d) {
        return 1;
      }
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_TimeSpan__Negate(param_2,0);
      *param_2 = uVar5;
      return 1;
    }
  }
  return 0;
}

