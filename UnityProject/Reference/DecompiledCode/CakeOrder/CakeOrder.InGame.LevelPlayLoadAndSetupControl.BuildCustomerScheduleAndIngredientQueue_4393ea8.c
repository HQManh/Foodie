// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$BuildCustomerScheduleAndIngredientQueue
// address: 0x4393ea8
// body: available
// range: 0x4393ea8-0x43943a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4393ff4 to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43943a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl__BuildCustomerScheduleAndIngredientQueue
               (long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_09517a4c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0158);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091870e0);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_091b4ab0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189e78);
    FUN_03f5c2a4(&DAT_09213de0);
    FUN_03f5c2a4(&DAT_09213df0);
    FUN_03f5c2a4(&DAT_09226318);
    FUN_03f5c2a4(&DAT_09226310);
    FUN_03f5c2a4(&DAT_09213de8);
    FUN_03f5c2a4(&DAT_09208a70);
    FUN_03f5c2a4(&DAT_092088c8);
    DAT_09517a4c = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_58 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(DAT_092088c8,0);
      return;
    }
    uVar2 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__TryBuildCustomerScheduleAndIngredientQueue
                      (param_1,&uStack_38,&local_40,&local_48,&local_50);
    if ((uVar2 & 1) != 0) {
LAB_04394014:
      CakeOrder_InGame_LevelPlayLoadAndSetupControl__ApplyCustomerScheduleAndIngredientQueue
                (param_1,uStack_38,local_40,local_48);
      return;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      uVar7 = *(undefined8 *)(lVar4 + 0x10);
      local_5c = *(int *)(lVar4 + 0x1c) + 1;
      uVar6 = FUN_03f5c42c(DAT_09535420,&local_5c);
      uVar6 = System_String__Format(DAT_09226318,uVar7,uVar6,local_50,0);
      uVar6 = System_String__Concat(DAT_09213de8,uVar6,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar6,0);
      lVar4 = *(long *)(param_1 + 0x30);
      if (lVar4 != 0) {
        uVar6 = *(undefined8 *)(lVar4 + 0x10);
        uVar1 = *(undefined4 *)(lVar4 + 0x1c);
        if (*(int *)(DAT_09189e78 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = CakeOrder_RemoteConfigDefaultSetterCakeOrder__GetRemoteKeyForMapLevelDesign
                          (uVar6,uVar1,0);
        uVar2 = FUN_05a8eda4(DAT_091b4ab0);
        uVar7 = 0;
        if ((uVar2 & 1) != 0) {
          lVar4 = *(long *)(DAT_091b4aa8 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_043943a0;
          uVar7 = IapAdsSystem_RemoteConfigManager__GetStringWithoutRuntimeOverride
                            (**(long **)(lVar4 + 0xb8),uVar6,0);
        }
        uVar2 = System_String__IsNullOrEmpty(uVar7,0);
        if ((uVar2 & 1) == 0) {
          CakeOrder_InGame_LevelPlayLoadAndSetupControl__ProcessLevelDesignData(param_1,uVar7);
          uVar2 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__TryBuildCustomerScheduleAndIngredientQueue
                            (param_1,&uStack_38,&local_40,&local_48,&local_58);
          uVar6 = local_58;
          if ((uVar2 & 1) != 0) {
            lVar4 = *(long *)(param_1 + 0x30);
            if (lVar4 != 0) {
              uVar7 = *(undefined8 *)(lVar4 + 0x10);
              local_5c = *(int *)(lVar4 + 0x1c) + 1;
              uVar6 = FUN_03f5c42c(DAT_09535420,&local_5c);
              uVar6 = System_String__Format(DAT_09226310,uVar7,uVar6,0);
              uVar6 = System_String__Concat(DAT_09213df0,uVar6,0);
              if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_091835d0);
              }
              UnityEngine_Debug__LogWarning(uVar6,0);
              goto LAB_04394014;
            }
            goto LAB_043943a0;
          }
        }
        else {
          lVar4 = *(long *)(param_1 + 0x30);
          if (lVar4 == 0) goto LAB_043943a0;
          uVar7 = *(undefined8 *)(lVar4 + 0x10);
          local_5c = *(int *)(lVar4 + 0x1c) + 1;
          uVar6 = FUN_03f5c42c(DAT_09535420,&local_5c);
          uVar6 = System_String__Format(DAT_09226310,uVar7,uVar6,0);
          uVar3 = System_String__Concat(DAT_09208a70,uVar6,0);
          uVar7 = local_50;
          uVar6 = thunk_FUN_03f9944c(DAT_091870e0);
          System_InvalidOperationException___ctor(uVar6,uVar3,uVar7,0);
        }
        local_50 = uVar6;
        uVar6 = System_String__Format(DAT_09213de0,uVar6,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogError(uVar6,0);
        lVar4 = DAT_091c0158;
        lVar8 = *(long *)(param_1 + 0x30);
        lVar5 = *(long *)(DAT_091c0158 + 0x38);
        if (lVar5 == 0) {
          FUN_03f95ac8(DAT_091c0158);
          lVar5 = *(long *)(lVar4 + 0x38);
        }
        lVar5 = *(long *)(lVar5 + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        if (lVar8 != 0) {
          puVar9 = (undefined8 *)(lVar8 + 0x98);
          *puVar9 = **(undefined8 **)(lVar4 + 0xb8);
          thunk_FUN_03f5d7b8(puVar9);
          if (*(long *)(param_1 + 0x30) != 0) {
            puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + 0xa0);
            *puVar9 = 0;
            thunk_FUN_03f5d7b8(puVar9,0);
            return;
          }
        }
      }
    }
  }
LAB_043943a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

