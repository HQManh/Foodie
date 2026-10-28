// rea decompile_all
// name: CakeOrder.UICakeSettingMenuBase$$Awake
// address: 0x4272124
// body: available
// range: 0x4272124-0x427270b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4272704 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4272708 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UICakeSettingMenuBase__Awake(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  if ((DAT_09517032 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5538);
    FUN_03f5c2a4(&DAT_0918e650);
    FUN_03f5c2a4(&DAT_09184b60);
    FUN_03f5c2a4(&DAT_091cd808);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b48d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dc7f8);
    FUN_03f5c2a4(&DAT_091dc800);
    FUN_03f5c2a4(&DAT_091dc808);
    FUN_03f5c2a4(&DAT_091dc7c8);
    FUN_03f5c2a4(&DAT_091dc7d0);
    FUN_03f5c2a4(&DAT_091dc7d8);
    FUN_03f5c2a4(&DAT_091dc7e0);
    FUN_03f5c2a4(&DAT_091dc7e8);
    FUN_03f5c2a4(&DAT_091dc7f0);
    FUN_03f5c2a4(&DAT_0917f698);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_091bdff8);
    DAT_09517032 = 1;
  }
  CakeOrder_BaseUI_UICakePopup__Awake(param_1,0);
  if ((*(long *)(param_1 + 0xd0) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0xd0) + 0x10), lVar7 != 0)) {
    lVar7 = *(long *)(lVar7 + 0x100);
    uVar3 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar3,0,DAT_091dc7e8,0);
    if (lVar7 != 0) {
      UnityEngine_Events_UnityEvent__AddListener(lVar7,uVar3,0);
      if ((*(long *)(param_1 + 0xd8) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 0xd8) + 0x10), lVar7 != 0)) {
        lVar7 = *(long *)(lVar7 + 0x100);
        uVar3 = thunk_FUN_03f9944c(DAT_0918c678);
        UnityEngine_Events_UnityAction___ctor(uVar3,0,DAT_091dc7e0,0);
        if (lVar7 != 0) {
          UnityEngine_Events_UnityEvent__AddListener(lVar7,uVar3,0);
          if ((*(long *)(param_1 + 0xe0) != 0) &&
             (lVar7 = *(long *)(*(long *)(param_1 + 0xe0) + 0x10), lVar7 != 0)) {
            lVar7 = *(long *)(lVar7 + 0x100);
            uVar3 = thunk_FUN_03f9944c(DAT_0918c678);
            UnityEngine_Events_UnityAction___ctor(uVar3,0,DAT_091dc7f0,0);
            if (lVar7 != 0) {
              UnityEngine_Events_UnityEvent__AddListener(lVar7,uVar3,0);
              uVar4 = FUN_05a8eda4(DAT_091b48d8);
              if ((uVar4 & 1) != 0) {
                lVar7 = *(long *)(DAT_091b48d0 + 0x20);
                if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = FUN_03f95a6c();
                }
                lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
                if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = FUN_03f95a6c();
                }
                lVar7 = **(long **)(lVar7 + 0xb8);
                uVar3 = thunk_FUN_03f9944c(DAT_0918e650);
                CakeOrder_AudioManagerCakeOrder_DelegateSettingToggled___ctor
                          (uVar3,param_1,DAT_091dc7f8,0);
                if (lVar7 == 0) goto LAB_04272708;
                CakeOrder_AudioManagerCakeOrder__add_onBgmToggled(lVar7,uVar3,0);
                lVar7 = *(long *)(DAT_091b48d0 + 0x20);
                if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = FUN_03f95a6c();
                }
                lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
                if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = FUN_03f95a6c();
                }
                lVar7 = **(long **)(lVar7 + 0xb8);
                uVar3 = thunk_FUN_03f9944c(DAT_0918e650);
                CakeOrder_AudioManagerCakeOrder_DelegateSettingToggled___ctor
                          (uVar3,param_1,DAT_091dc808,0);
                if (lVar7 == 0) goto LAB_04272708;
                CakeOrder_AudioManagerCakeOrder__add_onSfxToggled(lVar7,uVar3,0);
                lVar7 = *(long *)(DAT_091b48d0 + 0x20);
                if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = FUN_03f95a6c();
                }
                lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
                if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                  lVar7 = FUN_03f95a6c();
                }
                lVar7 = **(long **)(lVar7 + 0xb8);
                uVar3 = thunk_FUN_03f9944c(DAT_0918e650);
                CakeOrder_AudioManagerCakeOrder_DelegateSettingToggled___ctor
                          (uVar3,param_1,DAT_091dc800,0);
                if (lVar7 == 0) goto LAB_04272708;
                CakeOrder_AudioManagerCakeOrder__add_onHapticToggled(lVar7,uVar3,0);
              }
              if (*(int *)(DAT_09184b60 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = CakeOrder_GameFrameRate__get_Saved();
              iVar5 = 0x3c;
              if (0x68 < uVar1) {
                iVar5 = 0x78;
              }
              if ((int)uVar1 < 0x2d) {
                iVar5 = 0x1e;
              }
              iVar2 = Utilities_DeviceTier__get_MaxRefreshRate(0);
              uVar3 = *(undefined8 *)(param_1 + 0xf8);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
              if ((uVar4 & 1) != 0) {
                if ((*(long *)(param_1 + 0xf8) == 0) ||
                   (lVar7 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0xf8),0),
                   lVar7 == 0)) goto LAB_04272708;
                UnityEngine_GameObject__SetActive(lVar7,0x77 < iVar2,0);
              }
              iVar6 = 0x78;
              if (iVar2 < 0x78) {
                iVar6 = 0x3c;
              }
              if (iVar5 != 0x78) {
                iVar6 = iVar5;
              }
              if (iVar6 == 0x3c) {
                lVar7 = *(long *)(param_1 + 0xf0);
              }
              else if (iVar6 == 0x1e) {
                lVar7 = *(long *)(param_1 + 0xe8);
              }
              else {
                lVar7 = *(long *)(param_1 + 0xf8);
              }
              if (lVar7 != 0) {
                UnityEngine_UI_Toggle__set_isOn(lVar7,1,0);
                if (*(long *)(param_1 + 0xe8) != 0) {
                  lVar7 = *(long *)(*(long *)(param_1 + 0xe8) + 0x118);
                  uVar3 = thunk_FUN_03f9944c(DAT_0917f698);
                  FUN_06478934(uVar3,param_1,DAT_091dc7c8,0);
                  if (lVar7 != 0) {
                    FUN_0647e4d0(lVar7,uVar3,DAT_091bdff8);
                    if (*(long *)(param_1 + 0xf0) != 0) {
                      lVar7 = *(long *)(*(long *)(param_1 + 0xf0) + 0x118);
                      uVar3 = thunk_FUN_03f9944c(DAT_0917f698);
                      FUN_06478934(uVar3,param_1,DAT_091dc7d0,0);
                      if (lVar7 != 0) {
                        FUN_0647e4d0(lVar7,uVar3,DAT_091bdff8);
                        if (*(long *)(param_1 + 0xf8) != 0) {
                          lVar7 = *(long *)(*(long *)(param_1 + 0xf8) + 0x118);
                          uVar3 = thunk_FUN_03f9944c(DAT_0917f698);
                          FUN_06478934(uVar3,param_1,DAT_091dc7d8,0);
                          if (lVar7 != 0) {
                            FUN_0647e4d0(lVar7,uVar3,DAT_091bdff8);
                            if (*(long *)(param_1 + 0x100) != 0) {
                              uVar3 = FUN_04a6a14c(*(long *)(param_1 + 0x100),DAT_091c5538);
                              *(undefined8 *)(param_1 + 0x108) = uVar3;
                              thunk_FUN_03f5d7b8(param_1 + 0x108,uVar3);
                              uVar3 = *(undefined8 *)(param_1 + 0x108);
                              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
                              if ((uVar4 & 1) != 0) {
                                return;
                              }
                              if ((*(long *)(param_1 + 0x100) != 0) &&
                                 (lVar7 = UnityEngine_Component__get_gameObject
                                                    (*(long *)(param_1 + 0x100),0), lVar7 != 0)) {
                                uVar3 = FUN_04b7c294(lVar7,DAT_091cd808);
                                *(undefined8 *)(param_1 + 0x108) = uVar3;
                                thunk_FUN_03f5d7b8(param_1 + 0x108);
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
LAB_04272708:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

