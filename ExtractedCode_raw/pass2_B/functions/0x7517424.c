// rea decompile_all
// name: System.TimeZoneInfo$$CreateAdjustmentRule
// address: 0x7517424
// body: available
// range: 0x7517424-0x7517cc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7517cc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7517cc4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_TimeZoneInfo__CreateAdjustmentRule(undefined4 param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 local_170;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  undefined4 local_164;
  undefined1 local_160;
  undefined4 local_15f;
  undefined3 uStack_15b;
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  undefined1 local_14d;
  undefined4 local_14c;
  undefined1 local_148;
  undefined4 local_147;
  undefined3 uStack_143;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined4 local_11c;
  undefined1 local_118;
  undefined4 local_117;
  undefined3 uStack_113;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_ff;
  undefined3 uStack_fb;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_df;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 uStack_d7;
  undefined3 uStack_d3;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  undefined1 local_c0;
  undefined4 local_bf;
  undefined3 uStack_bb;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_64 [4];
  
  if ((DAT_0952171c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091b3e88);
    FUN_03f5c2a4(&DAT_091b3e80);
    FUN_03f5c2a4(&DAT_0917d828);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_0952171c = 1;
  }
  local_64[0] = '\0';
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_9c = 0;
  local_a8 = 0;
  lVar9 = thunk_FUN_03f9944c(DAT_0917d828);
  FUN_057e0400(lVar9,DAT_091b3e80);
  uVar10 = System_CurrentSystemTimeZone__GetTimeZoneData(param_1,param_2,param_3,local_64,0);
  if ((uVar10 & 1) == 0) {
    return lVar9;
  }
  lVar14 = *param_2;
  if (lVar14 == 0) goto LAB_07517cc0;
  if (*(int *)(lVar14 + 0x18) == 0) goto LAB_07517cc4;
  uVar17 = *(undefined8 *)(lVar14 + 0x20);
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_DateTime___ctor(&uStack_70,uVar17,0);
  lVar14 = *param_2;
  if (lVar14 == 0) goto LAB_07517cc0;
  if ((*(uint *)(lVar14 + 0x18) & 0xfffffffe) == 0) goto LAB_07517cc4;
  System_DateTime___ctor(&local_78,*(undefined8 *)(lVar14 + 0x28),0);
  lVar14 = *param_2;
  if (lVar14 == 0) goto LAB_07517cc0;
  if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) {
LAB_07517cc4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar17 = *(undefined8 *)(lVar14 + 0x38);
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar14 = *param_2;
    if (lVar14 == 0) goto LAB_07517cc0;
  }
  if ((*(uint *)(lVar14 + 0x18) & 0xfffffffc) == 0) goto LAB_07517cc4;
  if (*(long *)(lVar14 + 0x38) != 0) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_98 = System_DateTime__get_TimeOfDay(&uStack_70,0);
    uVar11 = System_DateTime__get_TimeOfDay(&local_78,0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar10 = System_TimeSpan__Equals(&local_98,uVar11,0);
    if ((uVar10 & 1) != 0) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_9c = System_DateTime__get_Month(&uStack_70,0);
      uVar2 = System_DateTime__get_Month(&local_78,0);
      uVar10 = System_Int32__Equals(&local_9c,uVar2,0);
      if ((uVar10 & 1) != 0) {
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_9c = System_DateTime__get_Day(&uStack_70,0);
        uVar2 = System_DateTime__get_Day(&local_78,0);
        uVar10 = System_Int32__Equals(&local_9c,uVar2,0);
        if ((uVar10 & 1) != 0) {
          return lVar9;
        }
      }
    }
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_DateTime___ctor(&uStack_80,param_1,1,1,0,0,0,0,0);
    uVar2 = System_DateTime__DaysInMonth(param_1,0xc,0);
    System_DateTime___ctor(&local_88,param_1,0xc,uVar2,0);
    uVar2 = System_DateTime__DaysInMonth(param_1,0xc,0);
    System_DateTime___ctor(&uStack_90,param_1,0xc,uVar2,0x17,0x3b,0x3b,999,0);
    if (local_64[0] == '\0') {
      local_b0 = 0;
      System_DateTime___ctor(&local_b0,1,1,1,0);
      local_a8 = local_b0;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = System_DateTime__get_TimeOfDay(&uStack_70,0);
      uVar11 = System_DateTime__Add(&local_a8,uVar11,0);
      uVar2 = System_DateTime__get_Month(&uStack_70,0);
      uVar3 = System_DateTime__get_Day(&uStack_70,0);
      System_TimeZoneInfo_TransitionTime__ValidateTransitionTime(uVar11,uVar2,1,uVar3,0);
      local_b8 = 0;
      System_DateTime___ctor(&local_b8,1,1,1,0);
      local_a8 = local_b8;
      uVar12 = System_DateTime__get_TimeOfDay(&local_78,0);
      uVar12 = System_DateTime__Add(&local_a8,uVar12,0);
      uVar4 = System_DateTime__get_Month(&local_78,0);
      uVar5 = System_DateTime__get_Day(&local_78,0);
      System_TimeZoneInfo_TransitionTime__ValidateTransitionTime(uVar12,uVar4,1,uVar5,0);
      local_c8 = (undefined1)uVar2;
      local_c7 = 1;
      local_c6 = (undefined1)uVar3;
      local_c5 = 0;
      local_c4 = 0;
      local_c0 = 1;
      local_bf = 0;
      uStack_bb = 0;
      local_e0 = (undefined1)uVar4;
      local_df = 1;
      local_de = (undefined1)uVar5;
      local_dd = 0;
      local_dc = 0;
      local_d8 = 1;
      uStack_d3 = 0;
      uStack_d7 = 0;
      local_e8 = uVar12;
      local_d0 = uVar11;
      uVar17 = System_TimeZoneInfo_AdjustmentRule__CreateAdjustmentRule
                         (uStack_80,local_88,uVar17,&local_d0,&local_e8);
      if (lVar9 == 0) goto LAB_07517cc0;
      iVar16 = *(int *)(lVar9 + 0x1c);
      lVar14 = *(long *)(lVar9 + 0x10);
    }
    else {
      local_b0 = 0;
      System_DateTime___ctor(&local_b0,1,1,1,0);
      uVar11 = local_b0;
      System_TimeZoneInfo_TransitionTime__ValidateTransitionTime(local_b0,1,1,1,0);
      local_b8 = 0;
      System_DateTime___ctor(&local_b8,1,1,1,0);
      local_a8 = local_b8;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = System_DateTime__get_TimeOfDay(&uStack_70,0);
      uVar12 = System_DateTime__Add(&local_a8,uVar12,0);
      uVar2 = System_DateTime__get_Month(&uStack_70,0);
      uVar3 = System_DateTime__get_Day(&uStack_70,0);
      System_TimeZoneInfo_TransitionTime__ValidateTransitionTime(uVar12,uVar2,1,uVar3,0);
      local_f0 = 0;
      System_DateTime___ctor(&local_f0,param_1,1,1,0);
      uVar4 = System_DateTime__get_Year(&uStack_70,0);
      uVar5 = System_DateTime__get_Month(&uStack_70,0);
      uVar6 = System_DateTime__get_Day(&uStack_70,0);
      local_f8 = 0;
      System_DateTime___ctor(&local_f8,uVar4,uVar5,uVar6,0);
      local_110 = uVar11;
      local_104 = 0;
      local_100 = 1;
      local_108 = 0x10101;
      local_ff = 0;
      uStack_fb = 0;
      local_120 = (undefined1)uVar2;
      local_11f = 1;
      local_11e = (undefined1)uVar3;
      local_11d = 0;
      local_11c = 0;
      local_118 = 1;
      local_117 = 0;
      uStack_113 = 0;
      local_128 = uVar12;
      uVar11 = System_TimeZoneInfo_AdjustmentRule__CreateAdjustmentRule
                         (local_f0,local_f8,uVar17,&local_110,&local_128);
      lVar14 = DAT_091b3e88;
      if (lVar9 == 0) goto LAB_07517cc0;
      lVar15 = *(long *)(lVar9 + 0x10);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar15 == 0) goto LAB_07517cc0;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar9,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70)
                    );
      }
      local_130 = 0;
      System_DateTime___ctor(&local_130,1,1,1,0);
      local_a8 = local_130;
      uVar11 = System_DateTime__get_TimeOfDay(&local_78,0);
      uVar11 = System_DateTime__Add(&local_a8,uVar11,0);
      uVar2 = System_DateTime__get_Month(&local_78,0);
      uVar3 = System_DateTime__get_Day(&local_78,0);
      System_TimeZoneInfo_TransitionTime__ValidateTransitionTime(uVar11,uVar2,1,uVar3,0);
      local_138 = 0;
      System_DateTime___ctor(&local_138,1,1,1,0);
      local_a8 = local_138;
      uVar12 = System_DateTime__get_TimeOfDay(&uStack_90,0);
      uVar12 = System_DateTime__Add(&local_a8,uVar12,0);
      uVar4 = System_DateTime__get_Month(&uStack_90,0);
      uVar5 = System_DateTime__get_Day(&uStack_90,0);
      System_TimeZoneInfo_TransitionTime__ValidateTransitionTime(uVar12,uVar4,1,uVar5,0);
      uVar6 = System_DateTime__get_Year(&uStack_70,0);
      uVar7 = System_DateTime__get_Month(&uStack_70,0);
      uVar8 = System_DateTime__get_Day(&uStack_70,0);
      local_140 = 0;
      System_DateTime___ctor(&local_140,uVar6,uVar7,uVar8,0);
      local_a8 = local_140;
      uVar13 = System_DateTime__AddDays(0x3ff0000000000000,&local_a8,0);
      local_150 = (undefined1)uVar2;
      local_14f = 1;
      local_14e = (undefined1)uVar3;
      local_14d = 0;
      local_14c = 0;
      local_148 = 1;
      local_147 = 0;
      uStack_143 = 0;
      local_168 = (undefined1)uVar4;
      local_167 = 1;
      local_166 = (undefined1)uVar5;
      local_165 = 0;
      local_164 = 0;
      local_160 = 1;
      local_15f = 0;
      uStack_15b = 0;
      local_170 = uVar12;
      local_158 = uVar11;
      uVar17 = System_TimeZoneInfo_AdjustmentRule__CreateAdjustmentRule
                         (uVar13,local_88,uVar17,&local_158,&local_170);
      iVar16 = *(int *)(lVar9 + 0x1c);
      lVar14 = *(long *)(lVar9 + 0x10);
    }
    lVar15 = DAT_091b3e88;
    *(int *)(lVar9 + 0x1c) = iVar16 + 1;
    if (lVar14 == 0) {
LAB_07517cc0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar17;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar9,uVar17,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
  }
  return lVar9;
}

