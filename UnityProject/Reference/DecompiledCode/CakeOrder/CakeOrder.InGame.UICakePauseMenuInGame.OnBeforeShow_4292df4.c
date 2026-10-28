// rea decompile_all
// name: CakeOrder.InGame.UICakePauseMenuInGame$$OnBeforeShow
// address: 0x4292df4
// body: available
// range: 0x4292df4-0x429319b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4293194 to 0x457bda0 EssentialSystemR1.OnlineTimeCheck$$add_TimeOffsetChanged (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4293198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakePauseMenuInGame__OnBeforeShow(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_095171a6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091824f0);
    FUN_03f5c2a4(&DAT_091b4948);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_091b4950);
    FUN_03f5c2a4(&DAT_091b4c30);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_091dc720);
    DAT_095171a6 = 1;
  }
  CakeOrder_UICakeSettingMenuBase__OnBeforeShow(param_1,0);
  CakeOrder_TimeControlCakeOrder__StopTime(param_1,0);
  CakeOrder_InGame_UICakePauseMenuInGame__ShowAllElementImmediate(param_1);
  if (*(long *)(param_1 + 0x148) != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x148) + 0x18);
    if (lVar2 == 0) goto LAB_04293198;
    CakeOrder_BaseUI_UIElementAbstract__Show(0,lVar2,0,0,0);
    if ((*(long *)(param_1 + 0x148) == 0) ||
       (lVar2 = *(long *)(*(long *)(param_1 + 0x148) + 0x28), lVar2 == 0)) goto LAB_04293198;
    Utilities_UINumberCounterAbstract__Show(0,lVar2,0);
  }
  uVar3 = FUN_05a8eda4(DAT_091b4950);
  if ((uVar3 & 1) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(DAT_091b4948 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_04293198;
    lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x30);
  }
  uVar3 = FUN_05a8f088(DAT_091b4c30);
  if ((uVar3 & 1) == 0) {
LAB_04292ff8:
    if ((*(long *)(param_1 + 0x130) == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x130),0), lVar2 == 0))
    goto LAB_04293198;
    UnityEngine_GameObject__SetActive(lVar2,0,0);
    if ((*(long *)(param_1 + 0x128) == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x128),0), lVar2 == 0))
    goto LAB_04293198;
    uVar5 = 1;
  }
  else {
    lVar4 = *(long *)(DAT_091b4c28 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_04293198;
    if ((((lVar2 == 0) || (lVar4 = *(long *)(**(long **)(lVar4 + 0xb8) + 0x38), lVar4 == 0)) ||
        (*(int *)(lVar4 + 0x30) != 0)) || (*(int *)(lVar2 + 0x10) <= *(int *)(lVar4 + 0x34) + 1))
    goto LAB_04292ff8;
    if ((*(long *)(param_1 + 0x130) == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x130),0), lVar2 == 0))
    goto LAB_04293198;
    UnityEngine_GameObject__SetActive(lVar2,1,0);
    if ((*(long *)(param_1 + 0x128) == 0) ||
       (lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x128),0), lVar2 == 0))
    goto LAB_04293198;
    uVar5 = 0;
  }
  UnityEngine_GameObject__SetActive(lVar2,uVar5,0);
  if (*(long *)(param_1 + 0x158) != 0) {
    lVar2 = UnityEngine_GameObject__get_gameObject(*(long *)(param_1 + 0x158),0);
    if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091824f0);
    }
    uVar1 = CakeOrder_CheatManagerCakeOrder__get_IsShowCheatButtons(0);
    if (lVar2 != 0) {
      UnityEngine_GameObject__SetActive(lVar2,uVar1 & 1,0);
      if (*(long *)(param_1 + 0x160) != 0) {
        lVar2 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x160),0);
        if (DAT_09517208 == '\0') {
          FUN_03f5c2a4(&DAT_091824f0);
          DAT_09517208 = '\x01';
        }
        if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar2 != 0) {
          UnityEngine_GameObject__SetActive
                    (lVar2,*(undefined1 *)(*(long *)(DAT_091824f0 + 0xb8) + 0xc),0);
          CakeOrder_InGame_UICakePauseMenuInGame__CloseCheatPanel(param_1);
          CakeOrder_InGame_UICakePauseMenuInGame__RefreshAutoplayButton(param_1);
          CakeOrder_InGame_UICakePauseMenuInGame__RefreshServeFxLabel(param_1);
          CakeOrder_InGame_UICakePauseMenuInGame__RefreshCheatOnlineTimeStatus(param_1);
          *(undefined4 *)(param_1 + 0x1b0) = 0xffffffff;
          CakeOrder_InGame_UICakePauseMenuInGame__RefreshCheatInterCapText(param_1);
          uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar5,param_1,DAT_091dc720,0);
          if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          EssentialSystemR1_OnlineTimeCheck__remove_TimeOffsetChanged(uVar5,0);
          uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar5,param_1,DAT_091dc720,0);
          EssentialSystemR1_OnlineTimeCheck__add_TimeOffsetChanged(uVar5,0);
          return;
        }
      }
    }
  }
LAB_04293198:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

