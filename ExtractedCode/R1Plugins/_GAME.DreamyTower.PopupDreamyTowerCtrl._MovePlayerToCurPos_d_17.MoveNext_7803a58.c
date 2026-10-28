// rea decompile_all
// name: _GAME.DreamyTower.PopupDreamyTowerCtrl.<MovePlayerToCurPos>d__17$$MoveNext
// address: 0x7803a58
// body: available
// range: 0x7803a58-0x7803ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7803e8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803e90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803e98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803e9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803ea0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803ea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyTower_PopupDreamyTowerCtrl_<MovePlayerToCurPos>d__17__MoveNext
               (undefined1 param_1 [16],undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_095231c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c20e0);
    FUN_03f5c2a4(&DAT_09183d80);
    FUN_03f5c2a4(&DAT_091b11a8);
    FUN_03f5c2a4(&DAT_091ac788);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095231c8 = 1;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_3 == 0) {
    local_60 = *(undefined1 (*) [16])(param_3 + 10);
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    *param_3 = -1;
  }
  else {
    lVar11 = *(long *)(param_3 + 6);
    if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09183d80 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(undefined4 *)(**(long **)(DAT_09183d80 + 0xb8) + 0x28);
    *(undefined4 *)(lVar11 + 0x118) = uVar1;
    if (*(long *)(lVar11 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = FUN_057e0998(*(long *)(lVar11 + 0xf0),uVar1,DAT_091ac788);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar5 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar13 = UnityEngine_Transform__get_position(*(long *)(lVar5 + 0x40),0);
    if ((float)param_3[8] < 0.0) {
      if (*(long *)(lVar11 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Transform__set_position(uVar13,param_2,*(long *)(lVar11 + 0x108),0);
      goto LAB_07803da8;
    }
    _GAME_Utils_HelperDOTween__CompleteAndKill(*(undefined8 *)(lVar11 + 0x120),0);
    lVar5 = *(long *)(lVar11 + 0x120);
    uVar13 = DG_Tweening_ShortcutExtensions__DOMoveY
                       (param_2,param_3[8],*(undefined8 *)(lVar11 + 0x108),0,0);
    lVar11 = DAT_091b11a8;
    if (lVar5 == 0) {
LAB_07803ea0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 == 0) goto LAB_07803ea0;
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
      *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar13;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar5,uVar13,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    iVar14 = param_3[8];
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(iVar14,0,8,0,0,0);
    thunk_FUN_03f5d7b8(local_50,0);
    uVar4 = local_50._8_8_;
    uVar13 = local_50._0_8_;
    local_60 = local_50;
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
    if ((long *)uVar13 != (long *)0x0) {
      lVar11 = *(long *)uVar13;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091868c0) {
            puVar6 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07803d00;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(uVar13,DAT_091868c0,0);
LAB_07803d00:
      iVar14 = (*(code *)*puVar6)(uVar13,uVar4 & 0xffffffff,puVar6[1]);
      if (iVar14 == 0) {
        *param_3 = 0;
        *(undefined1 (*) [16])(param_3 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_3 + 10,0);
        FUN_049b2350(param_3 + 2,local_60,param_3,DAT_091c20e0);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar13 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar11 = *(long *)local_60._0_8_;
    uVar12 = local_60._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07803d98;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07803d98:
    (*(code *)*puVar6)(uVar13,uVar12,puVar6[1]);
  }
LAB_07803da8:
  cVar3 = DAT_095162d8;
  *param_3 = -2;
  if (cVar3 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar10 = *(long **)(param_3 + 2);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07803e30;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091866a8,2);
LAB_07803e30:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return;
}

