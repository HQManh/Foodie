// rea decompile_all
// name: CakeOrder.InGame.UICakePauseMenuInGame$$Awake
// address: 0x4292484
// body: available
// range: 0x4292484-0x4292b73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4292b6c to 0x4387f90 CakeOrder.InGame.CookingBotAutoRetry$$add_onSettingsRefreshed (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4292b70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakePauseMenuInGame__Awake(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_095171a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d55b0);
    FUN_03f5c2a4(&DAT_091dc690);
    FUN_03f5c2a4(&DAT_091dc6c0);
    FUN_03f5c2a4(&DAT_091dc6c8);
    FUN_03f5c2a4(&DAT_091dc6d0);
    FUN_03f5c2a4(&DAT_091dc6d8);
    FUN_03f5c2a4(&DAT_091dc6e0);
    FUN_03f5c2a4(&DAT_091dc6e8);
    FUN_03f5c2a4(&DAT_091dc6f0);
    FUN_03f5c2a4(&DAT_091dc6f8);
    FUN_03f5c2a4(&DAT_091dc700);
    FUN_03f5c2a4(&DAT_091dc708);
    FUN_03f5c2a4(&DAT_091dc710);
    FUN_03f5c2a4(&DAT_091dc718);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_091fc770);
    FUN_03f5c2a4(&DAT_092067f0);
    DAT_095171a4 = 1;
  }
  CakeOrder_UICakeSettingMenuBase__Awake(param_1,0);
  if (param_1[0x24] != 0) {
    lVar3 = *(long *)(param_1[0x24] + 0x100);
    uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar1,param_1,*(undefined8 *)(*param_1 + 0x2f0),0);
    if (lVar3 != 0) {
      UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
      if (param_1[0x25] != 0) {
        lVar3 = *(long *)(param_1[0x25] + 0x100);
        uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
        UnityEngine_Events_UnityAction___ctor(uVar1,param_1,*(undefined8 *)(*param_1 + 0x2e0),0);
        if (lVar3 != 0) {
          UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
          if (param_1[0x2c] != 0) {
            lVar3 = *(long *)(param_1[0x2c] + 0x100);
            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc700,0);
            if (lVar3 != 0) {
              UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
              if (param_1[0x2d] != 0) {
                lVar3 = *(long *)(param_1[0x2d] + 0x100);
                uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc708,0);
                if (lVar3 != 0) {
                  UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                  if (param_1[0x2e] != 0) {
                    lVar3 = *(long *)(param_1[0x2e] + 0x100);
                    uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                    UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc6f8,0);
                    if (lVar3 != 0) {
                      UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                      if (param_1[0x2f] != 0) {
                        lVar3 = *(long *)(param_1[0x2f] + 0x100);
                        uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                        UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc718,0);
                        if (lVar3 != 0) {
                          UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                          lVar3 = param_1[0x37];
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
                          if ((uVar2 & 1) != 0) {
                            if (param_1[0x37] == 0) goto LAB_04292b70;
                            lVar3 = *(long *)(param_1[0x37] + 0x100);
                            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc6d0,0);
                            if (lVar3 == 0) goto LAB_04292b70;
                            UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                          }
                          lVar3 = param_1[0x38];
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
                          if ((uVar2 & 1) != 0) {
                            if (param_1[0x38] == 0) goto LAB_04292b70;
                            lVar3 = *(long *)(param_1[0x38] + 0x100);
                            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc6d8,0);
                            if (lVar3 == 0) goto LAB_04292b70;
                            UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                          }
                          lVar3 = param_1[0x39];
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
                          if ((uVar2 & 1) != 0) {
                            if (param_1[0x39] == 0) goto LAB_04292b70;
                            lVar3 = *(long *)(param_1[0x39] + 0x100);
                            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc6c8,0);
                            if (lVar3 == 0) goto LAB_04292b70;
                            UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                          }
                          lVar3 = param_1[0x3a];
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
                          if ((uVar2 & 1) != 0) {
                            if (param_1[0x3a] == 0) goto LAB_04292b70;
                            lVar3 = *(long *)(param_1[0x3a] + 0x100);
                            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc6f0,0);
                            if (lVar3 == 0) goto LAB_04292b70;
                            UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                          }
                          lVar3 = param_1[0x31];
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
                          if ((uVar2 & 1) != 0) {
                            if (param_1[0x31] == 0) goto LAB_04292b70;
                            lVar3 = *(long *)(param_1[0x31] + 0x100);
                            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                            UnityEngine_Events_UnityAction___ctor(uVar1,0,DAT_091d55b0,0);
                            if (lVar3 == 0) goto LAB_04292b70;
                            UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                          }
                          lVar3 = param_1[0x34];
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
                          if ((uVar2 & 1) != 0) {
                            if (param_1[0x34] == 0) goto LAB_04292b70;
                            lVar3 = *(long *)(param_1[0x34] + 0x100);
                            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc6e0,0);
                            if (lVar3 == 0) goto LAB_04292b70;
                            UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                          }
                          lVar3 = param_1[0x35];
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
                          if ((uVar2 & 1) != 0) {
                            if (param_1[0x35] == 0) goto LAB_04292b70;
                            lVar3 = *(long *)(param_1[0x35] + 0x100);
                            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc6e8,0);
                            if (lVar3 == 0) goto LAB_04292b70;
                            UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                          }
                          lVar3 = param_1[0x3c];
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
                          if ((uVar2 & 1) != 0) {
                            if (param_1[0x3c] == 0) goto LAB_04292b70;
                            lVar3 = *(long *)(param_1[0x3c] + 0x100);
                            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc6c0,0);
                            if (lVar3 == 0) goto LAB_04292b70;
                            UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                          }
                          lVar3 = param_1[0x3e];
                          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
                          if ((uVar2 & 1) == 0) {
LAB_04292aec:
                            CakeOrder_InGame_UICakePauseMenuInGame__ConfigureLauncherLabel
                                      (param_1[0x30],DAT_092067f0);
                            CakeOrder_InGame_UICakePauseMenuInGame__ConfigureLauncherLabel
                                      (param_1[0x3f],DAT_091fc770);
                            uVar1 = thunk_FUN_03f9944c(DAT_09180e78);
                            System_Action___ctor(uVar1,param_1,DAT_091dc690,0);
                            if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
                              FUN_03f5c424();
                            }
                            CakeOrder_InGame_CookingBotAutoRetry__add_onSettingsRefreshed(uVar1,0);
                            return;
                          }
                          if (param_1[0x3e] != 0) {
                            lVar3 = *(long *)(param_1[0x3e] + 0x100);
                            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc710,0);
                            if (lVar3 != 0) {
                              UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                              goto LAB_04292aec;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04292b70:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

