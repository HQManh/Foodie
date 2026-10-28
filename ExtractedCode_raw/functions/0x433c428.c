// rea decompile_all
// name: CakeOrder.Home.UICakeSettingHome$$Awake
// address: 0x433c428
// body: available
// range: 0x433c428-0x433cadb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433cac4 to 0x647eec0 FUN_0647eec0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x433cad8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UICakeSettingHome__Awake(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_09517727 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d55b0);
    FUN_03f5c2a4(&DAT_091dc730);
    FUN_03f5c2a4(&DAT_091dc738);
    FUN_03f5c2a4(&DAT_091dc740);
    FUN_03f5c2a4(&DAT_091dc748);
    FUN_03f5c2a4(&DAT_091dc750);
    FUN_03f5c2a4(&DAT_091dc758);
    FUN_03f5c2a4(&DAT_091dc760);
    FUN_03f5c2a4(&DAT_091dc768);
    FUN_03f5c2a4(&DAT_091dc770);
    FUN_03f5c2a4(&DAT_091dc778);
    FUN_03f5c2a4(&DAT_091dc780);
    FUN_03f5c2a4(&DAT_091dc788);
    FUN_03f5c2a4(&DAT_091dc790);
    FUN_03f5c2a4(&DAT_091dc798);
    FUN_03f5c2a4(&DAT_091dc7a0);
    FUN_03f5c2a4(&DAT_091dc7a8);
    FUN_03f5c2a4(&DAT_0917f6c0);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_091be050);
    DAT_09517727 = 1;
  }
  CakeOrder_UICakeSettingMenuBase__Awake(param_1,0);
  if (*(long *)(param_1 + 0x128) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x128) + 0x100);
    uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc790,0);
    if (lVar3 != 0) {
      UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
      if (*(long *)(param_1 + 0x130) != 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x130) + 0x100);
        uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
        UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc788,0);
        if (lVar3 != 0) {
          UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
          if (*(long *)(param_1 + 0x208) != 0) {
            lVar3 = *(long *)(*(long *)(param_1 + 0x208) + 0x40);
            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc780,0);
            if (lVar3 != 0) {
              UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
              if (*(long *)(param_1 + 0x1f8) != 0) {
                lVar3 = *(long *)(*(long *)(param_1 + 0x1f8) + 0x100);
                uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc798,0);
                if (lVar3 != 0) {
                  UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                  if (*(long *)(param_1 + 0x200) != 0) {
                    lVar3 = *(long *)(*(long *)(param_1 + 0x200) + 0x100);
                    uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                    UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc7a0,0);
                    if (lVar3 != 0) {
                      UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                      CakeOrder_Home_UICakeSettingHome__SetUpRestorePurchase(param_1);
                      if (*(long *)(param_1 + 0x150) != 0) {
                        lVar3 = *(long *)(*(long *)(param_1 + 0x150) + 0x100);
                        uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                        UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc778,0);
                        if (lVar3 != 0) {
                          UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                          if (*(long *)(param_1 + 0x158) != 0) {
                            lVar3 = *(long *)(*(long *)(param_1 + 0x158) + 0x100);
                            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                            UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc768,0);
                            if (lVar3 != 0) {
                              UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                              if (*(long *)(param_1 + 0x160) != 0) {
                                lVar3 = *(long *)(*(long *)(param_1 + 0x160) + 0x100);
                                uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                                UnityEngine_Events_UnityAction___ctor(uVar1,param_1,DAT_091dc760,0);
                                if (lVar3 != 0) {
                                  UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                                  if (*(long *)(param_1 + 0x148) != 0) {
                                    lVar3 = *(long *)(*(long *)(param_1 + 0x148) + 0x100);
                                    uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                                    UnityEngine_Events_UnityAction___ctor
                                              (uVar1,param_1,DAT_091dc748,0);
                                    if (lVar3 != 0) {
                                      UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                                      if (*(long *)(param_1 + 0x168) != 0) {
                                        lVar3 = *(long *)(*(long *)(param_1 + 0x168) + 0x100);
                                        uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                                        UnityEngine_Events_UnityAction___ctor
                                                  (uVar1,param_1,DAT_091dc738,0);
                                        if (lVar3 != 0) {
                                          UnityEngine_Events_UnityEvent__AddListener(lVar3,uVar1,0);
                                          if (*(long *)(param_1 + 0x178) != 0) {
                                            lVar3 = *(long *)(*(long *)(param_1 + 0x178) + 0x100);
                                            uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                                            UnityEngine_Events_UnityAction___ctor
                                                      (uVar1,param_1,DAT_091dc740,0);
                                            if (lVar3 != 0) {
                                              UnityEngine_Events_UnityEvent__AddListener
                                                        (lVar3,uVar1,0);
                                              if (*(long *)(param_1 + 0x188) != 0) {
                                                lVar3 = *(long *)(*(long *)(param_1 + 0x188) + 0x100
                                                                 );
                                                uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                                                UnityEngine_Events_UnityAction___ctor
                                                          (uVar1,0,DAT_091d55b0,0);
                                                if (lVar3 != 0) {
                                                  UnityEngine_Events_UnityEvent__AddListener
                                                            (lVar3,uVar1,0);
                                                  uVar1 = *(undefined8 *)(param_1 + 0x198);
                                                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                                    FUN_03f5c424();
                                                  }
                                                  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
                                                  if ((uVar2 & 1) != 0) {
                                                    if (*(long *)(param_1 + 0x198) == 0)
                                                    goto LAB_0433cad8;
                                                    lVar3 = *(long *)(*(long *)(param_1 + 0x198) +
                                                                     0x100);
                                                    uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                                                    UnityEngine_Events_UnityAction___ctor
                                                              (uVar1,param_1,DAT_091dc758,0);
                                                    if (lVar3 == 0) goto LAB_0433cad8;
                                                    UnityEngine_Events_UnityEvent__AddListener
                                                              (lVar3,uVar1,0);
                                                  }
                                                  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
                                                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                                    FUN_03f5c424();
                                                  }
                                                  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
                                                  if ((uVar2 & 1) != 0) {
                                                    if (*(long *)(param_1 + 0x1a8) == 0)
                                                    goto LAB_0433cad8;
                                                    lVar3 = *(long *)(*(long *)(param_1 + 0x1a8) +
                                                                     0x100);
                                                    uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                                                    UnityEngine_Events_UnityAction___ctor
                                                              (uVar1,param_1,DAT_091dc730,0);
                                                    if (lVar3 == 0) goto LAB_0433cad8;
                                                    UnityEngine_Events_UnityEvent__AddListener
                                                              (lVar3,uVar1,0);
                                                  }
                                                  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
                                                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                                    FUN_03f5c424();
                                                  }
                                                  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
                                                  if ((uVar2 & 1) != 0) {
                                                    if (*(long *)(param_1 + 0x1b8) == 0)
                                                    goto LAB_0433cad8;
                                                    lVar3 = *(long *)(*(long *)(param_1 + 0x1b8) +
                                                                     0x100);
                                                    uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                                                    UnityEngine_Events_UnityAction___ctor
                                                              (uVar1,param_1,DAT_091dc750,0);
                                                    if (lVar3 == 0) goto LAB_0433cad8;
                                                    UnityEngine_Events_UnityEvent__AddListener
                                                              (lVar3,uVar1,0);
                                                  }
                                                  uVar1 = *(undefined8 *)(param_1 + 0x1c8);
                                                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                                    FUN_03f5c424();
                                                  }
                                                  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
                                                  if ((uVar2 & 1) != 0) {
                                                    if (*(long *)(param_1 + 0x1c8) == 0)
                                                    goto LAB_0433cad8;
                                                    lVar3 = *(long *)(*(long *)(param_1 + 0x1c8) +
                                                                     0x100);
                                                    uVar1 = thunk_FUN_03f9944c(DAT_0918c678);
                                                    UnityEngine_Events_UnityAction___ctor
                                                              (uVar1,param_1,DAT_091dc770,0);
                                                    if (lVar3 == 0) goto LAB_0433cad8;
                                                    UnityEngine_Events_UnityEvent__AddListener
                                                              (lVar3,uVar1,0);
                                                  }
                                                  CakeOrder_Home_UICakeSettingHome__SetUpOverrideAuthorDropdown
                                                            (param_1);
                                                  uVar1 = *(undefined8 *)(param_1 + 0x1e8);
                                                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                                    FUN_03f5c424();
                                                  }
                                                  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
                                                  if ((uVar2 & 1) == 0) {
                                                    return;
                                                  }
                                                  if (*(long *)(param_1 + 0x1e8) != 0) {
                                                    lVar3 = *(long *)(*(long *)(param_1 + 0x1e8) +
                                                                     0x140);
                                                    uVar1 = thunk_FUN_03f9944c(DAT_0917f6c0);
                                                    FUN_06478a9c(uVar1,param_1,DAT_091dc7a8,0);
                                                    if (lVar3 != 0) {
                                                      FUN_0647eec0(lVar3,uVar1,DAT_091be050);
                                                      return;
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
LAB_0433cad8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

