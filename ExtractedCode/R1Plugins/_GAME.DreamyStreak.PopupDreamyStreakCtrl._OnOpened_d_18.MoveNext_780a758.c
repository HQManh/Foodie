// rea decompile_all
// name: _GAME.DreamyStreak.PopupDreamyStreakCtrl.<OnOpened>d__18$$MoveNext
// address: 0x780a758
// body: available
// range: 0x780a758-0x780abff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x780abd4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780abd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780abdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780abe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780abe4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780abe8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780abec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780abf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780abf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780abf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780abfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0780abd4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_DreamyStreak_PopupDreamyStreakCtrl_<OnOpened>d__18__MoveNext(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 local_60 [16];
  long local_48;
  undefined1 local_40 [16];
  int local_24;
  
  if ((DAT_09523219 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c2d40);
    FUN_03f5c2a4(&DAT_09183d70);
    FUN_03f5c2a4(&DAT_091c9ea0);
    FUN_03f5c2a4(&DAT_091b10a8);
    FUN_03f5c2a4(&DAT_091b10b0);
    FUN_03f5c2a4(&DAT_091d5f50);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_091d6150);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09523219 = 1;
  }
  local_24 = *param_1;
  local_48 = *(long *)(param_1 + 10);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (local_24 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_24 = -1;
    *param_1 = -1;
LAB_0780aaa4:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar7 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar8 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_0780ab28;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0780ab28:
      (*(code *)*puVar3)(uVar7,uVar8,puVar3[1]);
    }
  }
  else {
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_48 + 0xd8) = 1;
    if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = **(long **)(DAT_09183d70 + 0xb8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar4 + 0x11) != '\0') {
      if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar4 = **(long **)(DAT_09183d70 + 0xb8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *(long *)(local_48 + 0xf0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar4 + 0x24) < *(int *)(lVar2 + 0x18)) {
        lVar4 = FUN_057e0998(lVar2,*(int *)(lVar4 + 0x24),DAT_091b10b0);
      }
      else {
        lVar4 = FUN_04ae7d78(lVar2,DAT_091c9ea0);
      }
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar7 = *(undefined8 *)(local_48 + 0x100);
      UnityEngine_Transform__get_position(lVar4,0);
      DG_Tweening_ShortcutExtensions__DOMove(uVar7,0,0);
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_40 = _GAME_DreamyStreak_PopupDreamyStreakCtrl__MoveViewToCurLevel();
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      thunk_FUN_03f5d7b8(local_40,0);
      local_60 = local_40;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      uVar7 = local_60._0_8_;
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar4 = *(long *)local_60._0_8_;
        uVar8 = local_60._8_8_ & 0xffff;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_091868c0) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0780aa90;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0780aa90:
        iVar1 = (*(code *)*puVar3)(uVar7,uVar8,puVar3[1]);
        if (iVar1 == 0) {
          local_24 = 0;
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 0xc,0);
          FUN_049c8d78(param_1 + 2,local_60,param_1,DAT_091c2d40);
          iVar1 = 9;
          goto LAB_0780ab3c;
        }
      }
      goto LAB_0780aaa4;
    }
    if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_DreamyStreak_DreamyStreakManager__SaveFirstOpen();
    if (*(int *)(DAT_09189468 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = FUN_04ca5cb8(DAT_091d5f50);
    lVar4 = local_48;
    uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar7,lVar4,DAT_091d6150,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_DreamyStreak_PopupDreamyStreakInfoCtrl__Open(lVar2,uVar7);
  }
  iVar1 = 0xc;
LAB_0780ab3c:
  if (local_24 < 0) {
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_48 + 0xd8) = 0;
  }
  if ((iVar1 == 0) || (iVar1 == 0xc)) {
    *param_1 = -2;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  }
  return;
}

