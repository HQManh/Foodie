// rea decompile_all
// name: System.TimeZoneInfo.AdjustmentRule$$ValidateAdjustmentRule
// address: 0x75181ec
// body: available
// range: 0x75181ec-0x75186d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7518588 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75186d0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo_AdjustmentRule__ValidateAdjustmentRule
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 *param_5,uint param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = param_3;
  local_40 = param_2;
  local_38 = param_1;
  if ((DAT_09521729 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09521729 = 1;
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = System_DateTime__get_Kind(&local_38,0);
  if (iVar1 == 0) {
LAB_07518288:
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = System_DateTime__get_Kind(&local_40,0);
    if (iVar1 == 0) {
LAB_075182cc:
      uStack_58 = param_5[1];
      local_60 = *param_5;
      local_50 = param_5[2];
      uVar2 = System_TimeZoneInfo_TransitionTime__Equals(param_4,&local_60);
      uVar6 = local_38;
      uVar3 = local_40;
      if (((uVar2 & 1) != 0) && ((param_6 & 1) == 0)) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar3 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_0920ecb0);
        puVar5 = &DAT_0921a2e0;
        goto LAB_075186a8;
      }
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTime__op_GreaterThan(uVar6,uVar3,0);
      if ((uVar2 & 1) != 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar3 = thunk_FUN_03f9944c();
        puVar5 = &DAT_0920ec68;
        goto LAB_07518668;
      }
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar8 = (double)System_TimeSpan__get_TotalHours(&local_48,0);
      if (dVar8 < -23.0) {
LAB_07518510:
        local_68 = local_48;
        uVar3 = thunk_FUN_03fc39d4(&DAT_0918bd60);
        uVar3 = FUN_03f5c42c(uVar3,&local_68);
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar6 = thunk_FUN_03f9944c();
        uVar7 = thunk_FUN_03fc39d4(&DAT_0921a2d8);
        uVar4 = thunk_FUN_03fc39d4(&DAT_0920efb0);
        System_ArgumentOutOfRangeException___ctor(uVar6,uVar7,uVar3,uVar4);
        uVar3 = thunk_FUN_03fc39d4(&DAT_091f0df0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar3);
      }
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar8 = (double)System_TimeSpan__get_TotalHours(&local_48,0);
      if (14.0 < dVar8) goto LAB_07518510;
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = local_38;
      if (0x72884f610 <
          (local_48 * -0x6832fd919f07a5f5 + 0x72884f61000U >> 9 |
          local_48 * -0x6832fd919f07a5f5 << 0x37)) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar3 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_0920efa8);
        puVar5 = &DAT_0921a2d8;
        goto LAB_075186a8;
      }
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTime__op_Inequality
                        (uVar3,*(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10),0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar1 = System_DateTime__get_Kind(&local_38,0);
        if (iVar1 == 0) {
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_DateTime__get_TimeOfDay(&local_38,0);
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918bd60);
          }
          uVar2 = System_TimeSpan__op_Inequality(uVar3,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
          if ((uVar2 & 1) != 0) {
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar3 = thunk_FUN_03f9944c();
            puVar5 = &DAT_09210008;
            goto LAB_07518668;
          }
        }
      }
      uVar3 = local_40;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTime__op_Inequality
                        (uVar3,*(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x18),0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = System_DateTime__get_Kind(&local_40,0);
      if (iVar1 != 0) {
        return;
      }
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_DateTime__get_TimeOfDay(&local_40,0);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bd60);
      }
      uVar2 = System_TimeSpan__op_Inequality(uVar3,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar3 = thunk_FUN_03f9944c();
      puVar5 = &DAT_09210008;
    }
    else {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = System_DateTime__get_Kind(&local_40,0);
      if (iVar1 == 1) goto LAB_075182cc;
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar3 = thunk_FUN_03f9944c();
      puVar5 = &DAT_09210010;
    }
    uVar6 = thunk_FUN_03fc39d4(puVar5);
    puVar5 = &DAT_0921a280;
  }
  else {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = System_DateTime__get_Kind(&local_38,0);
    if (iVar1 == 1) goto LAB_07518288;
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar3 = thunk_FUN_03f9944c();
    puVar5 = &DAT_09210010;
LAB_07518668:
    uVar6 = thunk_FUN_03fc39d4(puVar5);
    puVar5 = &DAT_0921a288;
  }
LAB_075186a8:
  uVar7 = thunk_FUN_03fc39d4(puVar5);
  System_ArgumentException___ctor(uVar3,uVar6,uVar7);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091f0df0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar6);
}

