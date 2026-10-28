// rea decompile_all
// name: System.TimeZoneInfo$$TZif_CreateAdjustmentRuleForPosixFormat
// address: 0x751100c
// body: available
// range: 0x751100c-0x75113f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75113f0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo__TZif_CreateAdjustmentRuleForPosixFormat
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180 [2];
  undefined8 local_170;
  undefined8 local_160 [2];
  undefined8 local_150;
  char local_140 [9];
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined7 local_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 local_99;
  undefined7 uStack_98;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_095216e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091b77f8);
    FUN_03f5c2a4(&DAT_091b7800);
    FUN_03f5c2a4(&DAT_091b7510);
    FUN_03f5c2a4(&DAT_091b7518);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_095216e5 = 1;
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100._0_8_ = 0;
  local_100._8_8_ = 0;
  local_118._8_8_ = 0;
  local_108 = 0;
  local_120 = 0;
  local_118._0_8_ = 0;
  local_90 = 0;
  uStack_89 = 0;
  uStack_88 = 0;
  uStack_81 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_79 = 0;
  local_b0 = 0;
  uStack_a9 = 0;
  uStack_a8 = 0;
  uStack_a1 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  local_99 = 0;
  if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_TimeZoneInfo__TZif_ParsePosixFormat
                    (param_1,&uStack_b8,&local_c0,&local_c8,&local_d0,&uStack_d8,&local_e0,
                     &uStack_e8,&local_f0);
  uVar4 = local_c0;
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_100 = System_TimeZoneInfo__TZif_ParseOffsetString(uVar4);
    if ((local_100._0_8_ & 0xff) != 0) {
      local_108 = FUN_05c38210(local_100,DAT_091b7518);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bd60);
      }
      uVar4 = System_TimeSpan__Negate(&local_108,0);
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bdc0);
      }
      uVar5 = System_TimeZoneInfo__TZif_CalculateTransitionOffsetFromBase(uVar4,param_3);
      uVar3 = System_String__IsNullOrEmpty(local_c8,0);
      uVar4 = local_d0;
      if ((uVar3 & 1) == 0) {
        if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_118 = System_TimeZoneInfo__TZif_ParseOffsetString(uVar4);
        if ((local_118._0_8_ & 0xff) == 0) {
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_TimeSpan___ctor(&local_120,1,0,0,0);
        }
        else {
          local_108 = FUN_05c38210(local_118,DAT_091b7518);
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918bd60);
          }
          uVar4 = System_TimeSpan__Negate(&local_108,0);
          local_120 = uVar4;
          if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918bdc0);
          }
          local_120 = System_TimeZoneInfo__TZif_CalculateTransitionOffsetFromBase(uVar4,param_3);
          local_120 = System_TimeZoneInfo__TZif_CalculateTransitionOffsetFromBase(local_120,uVar5);
        }
        uVar9 = uStack_d8;
        uVar4 = local_e0;
        if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_TimeZoneInfo__TZif_CreateTransitionTimeFromPosixRule(local_140,uVar9,uVar4);
        cVar2 = local_140[0];
        uStack_88 = uStack_137;
        local_90 = (undefined7)local_140._1_8_;
        uStack_89 = SUB81(local_140._1_8_,7);
        local_79 = (undefined1)uStack_128;
        uStack_78 = (undefined7)((ulong)uStack_128 >> 8);
        uStack_81 = uStack_130;
        uStack_80 = uStack_12f;
        System_TimeZoneInfo__TZif_CreateTransitionTimeFromPosixRule(local_140,uStack_e8,local_f0);
        uVar4 = 0;
        uStack_a8 = uStack_137;
        local_b0 = (undefined7)local_140._1_8_;
        uStack_a9 = SUB81(local_140._1_8_,7);
        local_99 = (undefined1)uStack_128;
        uStack_98 = (undefined7)((ulong)uStack_128 >> 8);
        uStack_a1 = uStack_130;
        uStack_a0 = uStack_12f;
        if ((cVar2 == '\0') || (local_140[0] == '\0')) goto LAB_075113c0;
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_150 = CONCAT71(uStack_78,local_79);
        puVar6 = local_160;
        local_160[0] = CONCAT71(uStack_88,uStack_89);
        local_180[0] = CONCAT71(uStack_a8,uStack_a9);
        puVar7 = local_180;
        local_170 = CONCAT71(uStack_98,local_99);
        uVar9 = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x18);
        uVar8 = 0;
        uVar4 = local_120;
      }
      else {
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183548);
        }
        uVar9 = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x18);
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar6 = &uStack_198;
        puVar7 = &local_1b0;
        uVar8 = 1;
        local_190 = 0;
        uStack_188 = 0;
        local_1a0 = 0;
        uStack_198 = 0;
        local_1b0 = 0;
        uStack_1a8 = 0;
        uVar4 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
      }
      uVar4 = System_TimeZoneInfo_AdjustmentRule__CreateAdjustmentRule
                        (param_2,uVar9,uVar4,puVar6,puVar7,uVar5,uVar8);
      goto LAB_075113c0;
    }
  }
  uVar4 = 0;
LAB_075113c0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

