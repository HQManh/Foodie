// rea decompile_all
// name: _GAME.Team.PopupFreeLivesCtrl.<FetchLifeHelp>d__11$$MoveNext
// address: 0x776ba30
// body: available
// range: 0x776ba30-0x776bedf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776bec8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776becc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776bed0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776bed4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776bed8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776bedc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0776bec8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_Team_PopupFreeLivesCtrl_<FetchLifeHelp>d__11__MoveNext(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 local_60 [16];
  long local_50;
  int local_44;
  undefined1 local_40 [16];
  
  if ((DAT_09522c89 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091c2d68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_092087b8);
    DAT_09522c89 = 1;
  }
  local_44 = *param_1;
  local_60._8_8_ = 0;
  local_50 = *(long *)(param_1 + 10);
  local_60._0_8_ = 0;
  if (local_44 == 0) {
LAB_0776bc10:
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_44 = -1;
    *param_1 = -1;
  }
  else {
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_Utils_HelperButton__Interactable(*(undefined8 *)(local_50 + 0xd0),0,0);
    if (local_44 == 0) goto LAB_0776bc10;
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = _GAME_Team_TeamManager__FetchLifeHelp(100,0,1,0);
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
    uVar1 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar10 = local_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0776bc38;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0776bc38:
      iVar2 = (*(code *)*puVar3)(uVar1,uVar10,puVar3[1]);
      if (iVar2 == 0) {
        local_44 = 0;
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_049c999c(param_1 + 2,local_60,param_1,DAT_091c2d68);
        uVar9 = 5;
        goto LAB_0776bdec;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar1 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar4 = *(long *)local_60._0_8_;
    uVar10 = local_60._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0776bcd0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0776bcd0:
    (*(code *)*puVar3)(uVar1,uVar10,puVar3[1]);
  }
  lVar4 = local_50;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Equality(lVar4,0,0);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = local_50;
    lVar4 = DAT_091c0310;
    lVar5 = **(long **)(DAT_0918b978 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar5 + 0x68) == 0) {
      lVar6 = *(long *)(DAT_091c0310 + 0x38);
      if (lVar6 == 0) {
        FUN_03f95ac8(DAT_091c0310);
        lVar6 = *(long *)(lVar4 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      _GAME_GameUI_ToastController__ShowLocalizeMessage
                (DAT_092087b8,**(undefined8 **)(lVar4 + 0xb8),0);
    }
    else {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar5 = **(long **)(DAT_0918b978 + 0xb8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Team_PopupFreeLivesCtrl__UpdateListLifeHelp(lVar6,*(undefined8 *)(lVar5 + 0x68));
    }
    uVar9 = 0xc;
  }
  else {
    uVar9 = 7;
  }
LAB_0776bdec:
  lVar4 = local_50;
  if (local_44 < 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = UnityEngine_Object__op_Inequality(lVar4,0,0);
    if ((uVar7 & 1) != 0) {
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Utils_HelperButton__Interactable(*(undefined8 *)(local_50 + 0xd0),1,0);
    }
  }
  if ((uVar9 < 0xd) && ((1 << (ulong)uVar9 & 0x1081U) != 0)) {
    *param_1 = -2;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  }
  return;
}

