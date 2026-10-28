// rea decompile_all
// name: _GAME.WeeklyContest.WeeklyContestHomeTabUICtrl$$Init
// address: 0x77e1cf8
// body: available
// range: 0x77e1cf8-0x77e205b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e1fb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e2058 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_WeeklyContestHomeTabUICtrl__Init(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_54;
  
  if ((DAT_09523065 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091af138);
    FUN_03f5c2a4(&DAT_091af140);
    FUN_03f5c2a4(&DAT_091ba470);
    FUN_03f5c2a4(&DAT_0917e740);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_091df300);
    FUN_03f5c2a4(&DAT_091df308);
    FUN_03f5c2a4(&DAT_091df310);
    FUN_03f5c2a4(&DAT_091df2f8);
    FUN_03f5c2a4(&DAT_09206d10);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_09523065 = 1;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x100);
    uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091df2f8,0);
    if (lVar4 != 0) {
      UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar2,0);
      if (*(long *)(param_1 + 0x60) != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x60) + 0x100);
        uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
        UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091df310,0);
        if (lVar4 != 0) {
          UnityEngine_Events_UnityEvent__AddListener(lVar4,uVar2,0);
          if (*(long *)(param_1 + 0x70) != 0) {
            _GAME_WeeklyContest_WeeklyContestHomeTabCheat__Init(*(long *)(param_1 + 0x70),param_1);
            _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(param_1 + 0x28),0,0);
            uVar5 = *(undefined8 *)(param_1 + 0x30);
            lVar4 = FUN_03f5c394(DAT_091805f8,1);
            local_54 = _GAME_Bridge_CookOrderBridge__get_WeeklyContestUnlockLevel(0);
            uVar2 = FUN_03f5c42c(DAT_09535420,&local_54);
            uVar2 = System_String__Format(DAT_09226038,uVar2,0);
            if (lVar4 != 0) {
              if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              *(undefined8 *)(lVar4 + 0x20) = uVar2;
              thunk_FUN_03f5d7b8();
              _GAME_Localize_LocalizeHelper__SetTextLocalizedByKey(uVar5,DAT_09206d10,lVar4,0);
              _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(param_1 + 0x40),0,0);
              _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(param_1 + 0x50),0,0);
              lVar4 = *(long *)(param_1 + 0x68);
              if (lVar4 != 0) {
                iVar3 = 0;
                do {
                  if (*(int *)(lVar4 + 0x18) <= iVar3) {
                    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
                    System_Action___ctor(uVar2,param_1,DAT_091df300,0);
                    if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar1 = FUN_060df21c(uVar2,1,param_1,DAT_091ba470);
                    uVar2 = DAT_09180e78;
                    *(undefined4 *)(param_1 + 0x78) = uVar1;
                    uVar2 = thunk_FUN_03f9944c(uVar2);
                    System_Action___ctor(uVar2,param_1,DAT_091df308,0);
                    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar1 = _GAME_BaseGame_TimerManager__AddCallbackTick(uVar2,param_1);
                    *(undefined4 *)(param_1 + 0x7c) = uVar1;
                    return;
                  }
                  lVar4 = FUN_057e0998(lVar4,iVar3,DAT_091af140);
                  if (lVar4 == 0) break;
                  _GAME_WeeklyContest_PlayerWCRankItemUICtrl__SetRank(lVar4,iVar3);
                  lVar4 = *(long *)(param_1 + 0x68);
                  iVar3 = iVar3 + 1;
                } while (lVar4 != 0);
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

