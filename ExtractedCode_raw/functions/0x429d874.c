// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder$$Awake
// address: 0x429d874
// body: available
// range: 0x429d874-0x429dcc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429dc88 to 0x8674db4 UnityEngine.Events.UnityEvent$$AddListener (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x429dcb8 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x429dcbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x429dcc0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder__Awake(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if ((DAT_09517218 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a18);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091824f0);
    FUN_03f5c2a4(&DAT_091b4ce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcc30);
    FUN_03f5c2a4(&DAT_091dcc38);
    FUN_03f5c2a4(&DAT_091dcc40);
    FUN_03f5c2a4(&DAT_091dcc70);
    FUN_03f5c2a4(&DAT_091dcbd8);
    FUN_03f5c2a4(&DAT_091dcbe0);
    FUN_03f5c2a4(&DAT_091dcbe8);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_09517218 = 1;
  }
  FUN_05a8f11c(param_1,DAT_091b4ce8);
  lVar4 = *(long *)(param_1 + 0xe0);
  uVar2 = thunk_FUN_03f9944c(DAT_09174a18);
  FUN_070a8c30(uVar2,param_1,DAT_091dcbe0,0);
  if (lVar4 != 0) {
    CakeOrder_InGame_UIButtonHUD__add_onClicked(lVar4,uVar2,0);
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0x100);
      uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar2,param_1,DAT_091dcc70,0);
      if (lVar4 == 0) goto LAB_0429dcbc;
      CakeOrder_InGame_UIInLevelHUDPuzzleStyle__add_onSpeedBudgetRechargeRequested(lVar4,uVar2);
    }
    if (*(long *)(param_1 + 0xd8) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x18);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0xd8) == 0) goto LAB_0429dcbc;
        lVar4 = *(long *)(*(long *)(param_1 + 0xd8) + 0x18);
        uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar2,param_1,DAT_091dcc38,0);
        if (lVar4 == 0) goto LAB_0429dcbc;
        CakeOrder_UI_UIHeartCounter__add_onClickMore(lVar4,uVar2,0);
      }
      if (*(long *)(param_1 + 0xd8) != 0) {
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
        if ((uVar3 & 1) != 0) {
          if (*(long *)(param_1 + 0xd8) == 0) goto LAB_0429dcbc;
          lVar4 = *(long *)(*(long *)(param_1 + 0xd8) + 0x20);
          uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar2,param_1,DAT_091dcc40,0);
          if (lVar4 == 0) goto LAB_0429dcbc;
          CakeOrder_UICurrencyCounter__add_onClickMore(lVar4,uVar2,0);
        }
        if (*(long *)(param_1 + 0xd8) != 0) {
          uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0x28);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
          if ((uVar3 & 1) != 0) {
            if (*(long *)(param_1 + 0xd8) == 0) goto LAB_0429dcbc;
            lVar4 = *(long *)(*(long *)(param_1 + 0xd8) + 0x28);
            uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar2,param_1,DAT_091dcc30,0);
            if (lVar4 == 0) goto LAB_0429dcbc;
            CakeOrder_UICurrencyCounter__add_onClickMore(lVar4,uVar2,0);
          }
          lVar4 = *(long *)(param_1 + 0x160);
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (0 < (int)uVar1) {
              uVar6 = 0;
              do {
                if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar5 = *(long *)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
                if (lVar5 == 0) goto LAB_0429dcbc;
                uVar2 = *(undefined8 *)(lVar5 + 0x18);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
                if ((uVar3 & 1) != 0) {
                  lVar5 = *(long *)(lVar5 + 0x18);
                  uVar2 = thunk_FUN_03f9944c(DAT_09174a18);
                  FUN_070a8c30(uVar2,param_1,DAT_091dcbd8,0);
                  if (lVar5 == 0) goto LAB_0429dcbc;
                  CakeOrder_InGame_UIButtonHUD__add_onClicked(lVar5,uVar2,0);
                }
                uVar1 = *(uint *)(lVar4 + 0x18);
                uVar6 = uVar6 + 1;
              } while ((int)uVar6 < (int)uVar1);
            }
            if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = CakeOrder_CheatManagerCakeOrder__get_IsHaveHideUI(0);
            lVar4 = *(long *)(param_1 + 0x138);
            if ((uVar3 & 1) == 0) {
              if ((lVar4 != 0) &&
                 (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 != 0)) {
                UnityEngine_GameObject__SetActive(lVar4,0,0);
                return;
              }
            }
            else if (lVar4 != 0) {
              lVar4 = *(long *)(lVar4 + 0x100);
              uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
              UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091dcbe8,0);
              if (lVar4 != 0) {
                UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar2,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0429dcbc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

