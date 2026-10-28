// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$TryParseDateTimeIso
// address: 0x768d9f4
// body: available
// range: 0x768d9f4-0x768de37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeIso
               (undefined8 param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09522583 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835b0);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09522583 = 1;
  }
  local_60 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  if (*(int *)(DAT_091835b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = Newtonsoft_Json_Utilities_DateTimeParser__Parse
                    (&local_90,param_1,param_2 & 0xffffffff,param_2 >> 0x20);
  if ((uVar3 & 1) == 0) {
    *param_4 = 0;
    goto LAB_0768de18;
  }
  uStack_e8 = uStack_88;
  local_f0 = local_90;
  uStack_d8 = uStack_78;
  uStack_e0 = local_80;
  uStack_c8 = uStack_68;
  local_d0 = local_70;
  local_c0 = local_60;
  if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_128 = uStack_e8;
  local_130 = local_f0;
  uStack_118 = uStack_d8;
  uStack_120 = uStack_e0;
  uStack_108 = uStack_c8;
  local_110 = local_d0;
  local_100 = local_c0;
  local_98 = Newtonsoft_Json_Utilities_DateTimeUtils__CreateDateTime(&local_130);
  uVar2 = local_70;
  uVar1 = uStack_78._4_4_;
  if (local_70._4_4_ == 3) {
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_TimeSpan___ctor(&local_b0,uVar1,uVar2 & 0xffffffff,0,0);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = System_DateTime__get_Ticks(&local_98,0);
    lVar5 = lVar5 - local_b0;
    local_a8 = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10);
    lVar4 = System_DateTime__get_Ticks(&local_a8,0);
    uVar6 = local_98;
    if (lVar5 < lVar4) {
      if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = Newtonsoft_Json_Utilities_DateTimeUtils__GetUtcOffset(uVar6);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bd60);
      }
      lVar4 = lVar4 + lVar5;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_a8 = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10);
      lVar5 = System_DateTime__get_Ticks(&local_a8,0);
      if (lVar4 < lVar5) {
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_a8 = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10);
LAB_0768dd78:
        lVar4 = System_DateTime__get_Ticks(&local_a8,0);
      }
      goto LAB_0768dd8c;
    }
LAB_0768ddb4:
    local_f0 = 0;
    System_DateTime___ctor(&local_f0,lVar5,1,0);
    local_a8 = local_f0;
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_98 = System_DateTime__ToLocalTime(&local_a8,0);
  }
  else {
    if (local_70._4_4_ == 2) {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_TimeSpan___ctor(&local_a0,uVar1,uVar2 & 0xffffffff,0,0);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = System_DateTime__get_Ticks(&local_98,0);
      lVar5 = local_a0 + lVar5;
      local_a8 = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x18);
      lVar4 = System_DateTime__get_Ticks(&local_a8,0);
      uVar6 = local_98;
      if (lVar5 <= lVar4) goto LAB_0768ddb4;
      if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = Newtonsoft_Json_Utilities_DateTimeUtils__GetUtcOffset(uVar6);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bd60);
      }
      lVar4 = lVar4 + lVar5;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_a8 = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x18);
      lVar5 = System_DateTime__get_Ticks(&local_a8,0);
      if (lVar5 < lVar4) {
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_a8 = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x18);
        goto LAB_0768dd78;
      }
LAB_0768dd8c:
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = 2;
    }
    else {
      if (local_70._4_4_ != 1) goto LAB_0768ddf4;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = System_DateTime__get_Ticks(&local_98,0);
      uVar6 = 1;
    }
    System_DateTime___ctor(&local_98,lVar4,uVar6,0);
  }
LAB_0768ddf4:
  uVar6 = local_98;
  if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = Newtonsoft_Json_Utilities_DateTimeUtils__EnsureDateTime(uVar6,param_3);
  *param_4 = uVar6;
LAB_0768de18:
  return uVar3 & 1;
}

