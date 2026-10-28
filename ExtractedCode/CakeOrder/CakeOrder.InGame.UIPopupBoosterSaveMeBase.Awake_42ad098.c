// rea decompile_all
// name: CakeOrder.InGame.UIPopupBoosterSaveMeBase$$Awake
// address: 0x42ad098
// body: available
// range: 0x42ad098-0x42ad403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ad3ec to 0x44fd158 Utilities.ForwardUIPointerEvent$$add_onMouseUp (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42ad400 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupBoosterSaveMeBase__Awake(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_0951728f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174c90);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918ea68);
    FUN_03f5c2a4(&DAT_091dcef0);
    FUN_03f5c2a4(&DAT_091dcef8);
    FUN_03f5c2a4(&DAT_091dcf00);
    FUN_03f5c2a4(&DAT_091dcf08);
    FUN_03f5c2a4(&DAT_091dcf10);
    FUN_03f5c2a4(&DAT_091dcf18);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_0951728f = 1;
  }
  CakeOrder_BaseUI_UICakePopup__Awake(param_1,0);
  if (param_1[0x18] != 0) {
    lVar4 = *(long *)(param_1[0x18] + 0x100);
    uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091dcf08,0);
    if (lVar4 != 0) {
      UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar2,0);
      if (param_1[0x19] != 0) {
        lVar4 = *(long *)(param_1[0x19] + 0x100);
        uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
        UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091dcf00,0);
        if (lVar4 != 0) {
          UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar2,0);
          if (param_1[0x1a] != 0) {
            lVar4 = *(long *)(param_1[0x1a] + 0x100);
            uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
            UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091dcf10,0);
            if (lVar4 != 0) {
              UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar2,0);
              if (param_1[0x25] != 0) {
                lVar4 = *(long *)(param_1[0x25] + 0x100);
                uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
                UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091dcf18,0);
                if (lVar4 != 0) {
                  UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar2,0);
                  lVar4 = *(long *)(DAT_091b4b48 + 0x20);
                  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                    lVar4 = FUN_03f95a6c();
                  }
                  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
                  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                    lVar4 = FUN_03f95a6c();
                  }
                  lVar4 = **(long **)(lVar4 + 0xb8);
                  uVar2 = thunk_FUN_03f9944c(DAT_0918ea68);
                  CakeOrder_SaveProfile_CakeItemCurrencyDataAccess_OnItemChangedDelegate___ctor
                            (uVar2,param_1,*(undefined8 *)(*param_1 + 0x310),0);
                  if (lVar4 != 0) {
                    CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__add_onItemChanged
                              (lVar4,uVar2,0);
                    lVar4 = param_1[0x29];
                    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
                    if ((uVar3 & 1) == 0) {
                      return;
                    }
                    if (param_1[0x29] != 0) {
                      lVar4 = UnityEngine_Component__get_gameObject(param_1[0x29],0);
                      uVar1 = (**(code **)(*param_1 + 0x2c8))
                                        (param_1,*(undefined8 *)(*param_1 + 0x2d0));
                      if (lVar4 != 0) {
                        UnityEngine_GameObject__SetActive(lVar4,uVar1 & 1,0);
                        uVar3 = (**(code **)(*param_1 + 0x2c8))
                                          (param_1,*(undefined8 *)(*param_1 + 0x2d0));
                        if ((uVar3 & 1) == 0) {
                          return;
                        }
                        lVar4 = param_1[0x29];
                        uVar2 = thunk_FUN_03f9944c(DAT_09174c90);
                        FUN_071cd244(uVar2,param_1,DAT_091dcef0,0);
                        if (lVar4 != 0) {
                          Utilities_ForwardUIPointerEvent__add_onMouseDown(lVar4,uVar2,0);
                          lVar4 = param_1[0x29];
                          uVar2 = thunk_FUN_03f9944c(DAT_09174c90);
                          FUN_071cd244(uVar2,param_1,DAT_091dcef8,0);
                          if (lVar4 != 0) {
                            Utilities_ForwardUIPointerEvent__add_onMouseUp(lVar4,uVar2,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

