// rea decompile_all
// name: System.TimeZoneInfo$$TZif_GenerateAdjustmentRule
// address: 0x7510354
// body: available
// range: 0x7510354-0x7510a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7510a68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7510a6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo__TZif_GenerateAdjustmentRule
               (uint *param_1,undefined8 param_2,long param_3,long param_4,long param_5,long param_6
               ,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined1 auVar16 [16];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined4 local_c7;
  undefined3 uStack_c3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long local_88;
  undefined4 local_80;
  undefined3 uStack_7c;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  if ((DAT_095216e3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091b3e88);
    FUN_03f5c2a4(&DAT_091b3ea8);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_095216e3 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_7c = 0;
  local_90 = 0;
  local_88 = 0;
  if (param_4 == 0) goto LAB_07510a6c;
  uVar1 = *param_1;
  uVar11 = *(uint *)(param_4 + 0x18);
  if ((int)uVar1 < (int)uVar11) {
    do {
      if (uVar11 <= uVar1) goto LAB_07510a68;
      uVar13 = *(undefined8 *)(param_4 + (long)(int)uVar1 * 8 + 0x20);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_DateTime__op_Equality
                        (uVar13,*(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10),0);
      if ((uVar4 & 1) == 0) break;
      uVar11 = *(uint *)(param_4 + 0x18);
      uVar1 = *param_1 + 1;
      *param_1 = uVar1;
    } while ((int)uVar1 < (int)uVar11);
  }
  if (param_3 == 0) goto LAB_07510a6c;
  uVar1 = *param_1;
  uVar11 = *(uint *)(param_4 + 0x18);
  if ((*(int *)(param_3 + 0x18) == 0) && ((int)uVar1 < (int)uVar11)) {
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar16 = System_TimeZoneInfo__TZif_GetEarlyDateTransitionType(param_6);
    if (*(uint *)(param_4 + 0x18) <= *param_1) goto LAB_07510a68;
    local_68 = *(undefined8 *)(param_4 + (long)(int)*param_1 * 8 + 0x20);
    uVar13 = System_TimeZoneInfo__TZif_CalculateTransitionOffsetFromBase(auVar16._0_8_,param_2);
    if ((auVar16._8_8_ & 1) == 0) {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bd60);
      }
      uVar8 = uVar13;
      uVar13 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
    }
    else {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bd60);
      }
      uVar8 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
    }
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar12 = *(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10);
    uVar5 = System_DateTime__AddTicks(&local_68,0xffffffffffffffff,0);
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    lVar6 = System_TimeZoneInfo_AdjustmentRule__CreateAdjustmentRule
                      (uVar12,uVar5,uVar13,&uStack_a8,&local_c0,uVar8,1);
    local_70 = lVar6;
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bdc0);
    }
    uVar4 = System_TimeZoneInfo__IsValidAdjustmentRuleOffest(param_2,lVar6);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_TimeZoneInfo__NormalizeAdjustmentRuleOffset(param_2,&local_70);
      lVar6 = local_70;
    }
LAB_075108c4:
    lVar10 = DAT_091b3e88;
    lVar9 = *(long *)(param_3 + 0x10);
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (lVar9 == 0) {
LAB_07510a6c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(param_3 + 0x18);
    if (*(uint *)(lVar9 + 0x18) <= uVar1) {
      lVar10 = *(long *)(lVar10 + 0x20);
LAB_07510a30:
      FUN_057e0c68(param_3,lVar6,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x70));
      goto LAB_07510a3c;
    }
    *(uint *)(param_3 + 0x18) = uVar1 + 1;
    plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
    *plVar7 = lVar6;
  }
  else {
    uVar3 = uVar1 - 1;
    if ((int)uVar1 < (int)uVar11) {
      if (uVar11 <= uVar3) goto LAB_07510a68;
      if (param_5 == 0) goto LAB_07510a6c;
      if (*(uint *)(param_5 + 0x18) <= uVar3) goto LAB_07510a68;
      if (param_6 == 0) goto LAB_07510a6c;
      bVar2 = *(byte *)(param_5 + (int)uVar3 + 0x20);
      if ((*(uint *)(param_6 + 0x18) <= (uint)bVar2) || (uVar11 <= uVar1)) goto LAB_07510a68;
      param_6 = param_6 + (ulong)bVar2 * 0x10;
      uVar13 = *(undefined8 *)(param_6 + 0x20);
      uVar4 = *(ulong *)(param_6 + 0x28);
      uVar8 = *(undefined8 *)(param_4 + (long)(int)uVar3 * 8 + 0x20);
      local_78 = *(undefined8 *)(param_4 + (long)(int)uVar1 * 8 + 0x20);
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar13 = System_TimeZoneInfo__TZif_CalculateTransitionOffsetFromBase(uVar13,param_2);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918bd60);
        }
        uVar15 = 0;
        uVar14 = 0;
        local_80 = 0;
        uStack_7c = 0;
        uVar12 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
        uVar5 = uVar13;
      }
      else {
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918bd60);
        }
        uVar5 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar14 = System_DateTime__AddMilliseconds
                           (0x4000000000000000,*(long *)(DAT_09183548 + 0xb8) + 0x10,0);
        local_80 = 0;
        uStack_7c = 0;
        uVar15 = 1;
        System_TimeZoneInfo_TransitionTime__ValidateTransitionTime(uVar14,1,1,1,0);
        uVar12 = uVar13;
      }
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar13 = System_DateTime__AddTicks(&local_78,0xffffffffffffffff,0);
      local_e8 = 0;
      uStack_e0 = 0;
      local_f0 = 0;
      local_cd = 0;
      local_cc = 0;
      local_c7 = local_80;
      uStack_c3 = uStack_7c;
      local_d8 = uVar14;
      local_d0 = uVar15;
      local_cf = uVar15;
      local_ce = uVar15;
      local_c8 = uVar15;
      lVar6 = System_TimeZoneInfo_AdjustmentRule__CreateAdjustmentRule
                        (uVar8,uVar13,uVar12,&local_d8,&local_f0,uVar5,1);
      local_88 = lVar6;
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bdc0);
      }
      uVar4 = System_TimeZoneInfo__IsValidAdjustmentRuleOffest(param_2,lVar6);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_TimeZoneInfo__NormalizeAdjustmentRuleOffset(param_2,&local_88);
        lVar6 = local_88;
      }
      goto LAB_075108c4;
    }
    if (uVar11 <= uVar3) goto LAB_07510a68;
    uVar13 = *(undefined8 *)(param_4 + (long)(int)uVar3 * 8 + 0x20);
    uVar4 = System_String__IsNullOrEmpty(param_9,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = System_TimeZoneInfo__TZif_CreateAdjustmentRuleForPosixFormat(param_9,uVar13,param_2);
      local_90 = lVar6;
      if (lVar6 == 0) goto LAB_07510700;
    }
    else {
      local_90 = 0;
LAB_07510700:
      if (param_5 == 0) goto LAB_07510a6c;
      if (*(uint *)(param_5 + 0x18) <= *param_1 - 1) {
LAB_07510a68:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (param_6 == 0) goto LAB_07510a6c;
      bVar2 = *(byte *)(param_5 + (int)(*param_1 - 1) + 0x20);
      if (*(uint *)(param_6 + 0x18) <= (uint)bVar2) goto LAB_07510a68;
      param_6 = param_6 + (ulong)bVar2 * 0x10;
      uVar8 = *(undefined8 *)(param_6 + 0x20);
      uVar4 = *(ulong *)(param_6 + 0x28);
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System_TimeZoneInfo__TZif_CalculateTransitionOffsetFromBase(uVar8,param_2);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918bd60);
        }
        uVar5 = uVar8;
        uVar8 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
      }
      else {
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918bd60);
        }
        uVar5 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
      }
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      lVar6 = System_TimeZoneInfo_AdjustmentRule__CreateAdjustmentRule
                        (uVar13,*(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x18),uVar8,
                         &uStack_108,&local_120,uVar5,1);
    }
    local_90 = lVar6;
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_TimeZoneInfo__IsValidAdjustmentRuleOffest(param_2,lVar6);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_TimeZoneInfo__NormalizeAdjustmentRuleOffset(param_2,&local_90);
      lVar6 = local_90;
    }
    lVar10 = DAT_091b3e88;
    lVar9 = *(long *)(param_3 + 0x10);
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (lVar9 == 0) goto LAB_07510a6c;
    uVar1 = *(uint *)(param_3 + 0x18);
    if (*(uint *)(lVar9 + 0x18) <= uVar1) {
      lVar10 = *(long *)(lVar10 + 0x20);
      goto LAB_07510a30;
    }
    *(uint *)(param_3 + 0x18) = uVar1 + 1;
    plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
    *plVar7 = lVar6;
  }
  thunk_FUN_03f5d7b8(plVar7,lVar6);
LAB_07510a3c:
  *param_1 = *param_1 + 1;
  return;
}

