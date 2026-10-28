// rea decompile_all
// name: System.TimeZoneInfo$$ConvertTime
// address: 0x75135ac
// body: available
// range: 0x75135ac-0x7513a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7513998 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x751399c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_TimeZoneInfo__ConvertTime
          (undefined8 param_1,long param_2,long param_3,uint param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  
  local_68 = param_1;
  if ((DAT_095216f9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_095216f9 = 1;
  }
  local_70 = 0;
  local_74[0] = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar12 = thunk_FUN_03f9944c();
    puVar7 = &DAT_09222ff8;
  }
  else {
    if (param_3 != 0) {
      if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = System_TimeZoneInfo_CachedData__GetCorrespondingKind(param_5,param_2);
      if ((param_4 >> 1 & 1) != 0) {
LAB_0751368c:
        lVar5 = System_TimeZoneInfo__GetAdjustmentRuleForTime(param_2,local_68,0,&local_70);
        lVar11 = *(long *)(param_2 + 0x30);
        if (lVar5 == 0) goto LAB_075137f8;
        uVar12 = *(undefined8 *)(lVar5 + 0x58);
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar11 = System_TimeSpan__op_Addition(lVar11,uVar12,0);
        uVar6 = System_TimeZoneInfo_AdjustmentRule__get_HasDaylightSaving(lVar5);
        if ((uVar6 & 1) == 0) goto LAB_075137f8;
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_DateTime__get_Year(&local_68,0);
        System_TimeZoneInfo__GetDaylightTime(&local_98,param_2,uVar3,lVar5,local_70);
        uVar12 = local_68;
        if ((param_4 >> 1 & 1) == 0) {
          uStack_a8 = uStack_90;
          local_b0 = local_98;
          local_a0 = local_88;
          if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = System_TimeZoneInfo__GetIsInvalidTime(uVar12,lVar5,&local_b0);
          if ((uVar6 & 1) != 0) {
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar12 = thunk_FUN_03f9944c();
            uVar8 = thunk_FUN_03fc39d4(&DAT_09210028);
            puVar10 = &DAT_0921a290;
            goto LAB_075139fc;
          }
        }
        uVar12 = local_68;
        uStack_c8 = uStack_90;
        local_d0 = local_98;
        local_c0 = local_88;
        if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_e8 = uStack_c8;
        local_f0 = local_d0;
        local_e0 = local_c0;
        uVar6 = System_TimeZoneInfo__GetIsDaylightSavings(uVar12,lVar5,&local_f0);
        if ((uVar6 & 1) == 0) {
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar10 = *(undefined8 **)(DAT_0918bd60 + 0xb8);
        }
        else {
          puVar10 = (undefined8 *)(lVar5 + 0x20);
        }
        uVar12 = *puVar10;
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar11 = System_TimeSpan__op_Addition(lVar11,uVar12,0);
LAB_075137f8:
        iVar2 = System_TimeZoneInfo_CachedData__GetCorrespondingKind(param_5,param_3);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183548);
        }
        iVar4 = System_DateTime__get_Kind(&local_68,0);
        if (((iVar4 == 0) || (iVar1 == 0)) || (iVar1 != iVar2)) {
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = System_DateTime__get_Ticks(&local_68,0);
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918bd60);
          }
          if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          local_80 = System_TimeZoneInfo__ConvertUtcToTimeZone(lVar5 - lVar11,param_3,local_74);
          if (iVar2 == 2) {
            if (*(int *)(DAT_09183548 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar12 = System_DateTime__get_Ticks(&local_80,0);
            local_58 = 0;
            System_DateTime___ctor(&local_58,uVar12,2,local_74[0],0);
          }
          else {
            if (*(int *)(DAT_09183548 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar12 = System_DateTime__get_Ticks(&local_80,0);
            local_58 = 0;
            System_DateTime___ctor(&local_58,uVar12,iVar2,0);
          }
        }
        else {
          local_58 = local_68;
        }
        return local_58;
      }
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System_DateTime__get_Kind(&local_68,0);
      if (iVar2 == 0) goto LAB_0751368c;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System_DateTime__get_Kind(&local_68,0);
      if (iVar2 == iVar1) goto LAB_0751368c;
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar12 = thunk_FUN_03f9944c();
      uVar8 = thunk_FUN_03fc39d4(&DAT_0920f2b0);
      puVar10 = (undefined8 *)&DAT_09222ff8;
LAB_075139fc:
      uVar9 = thunk_FUN_03fc39d4(puVar10);
      System_ArgumentException___ctor(uVar12,uVar8,uVar9);
      goto LAB_07513984;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar12 = thunk_FUN_03f9944c();
    puVar7 = &DAT_0921a5e8;
  }
  uVar8 = thunk_FUN_03fc39d4(puVar7);
  System_ArgumentNullException___ctor(uVar12,uVar8);
LAB_07513984:
  uVar8 = thunk_FUN_03fc39d4(&DAT_091db728);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar12,uVar8);
}

