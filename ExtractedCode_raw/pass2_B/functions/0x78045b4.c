// rea decompile_all
// name: _GAME.DreamyTower.PopupDreamyTowerCtrl.<OnOpened>d__14$$MoveNext
// address: 0x78045b4
// body: available
// range: 0x78045b4-0x7804cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7804c98 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7804c9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7804ca0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7804ca4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7804ca8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07804c98) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_DreamyTower_PopupDreamyTowerCtrl_<OnOpened>d__14__MoveNext(uint *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 local_60 [16];
  long local_50;
  uint local_44;
  undefined1 local_40 [16];
  
  if ((DAT_095231ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2d50);
    FUN_03f5c2a4(&DAT_09183d80);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095231ca = 1;
  }
  local_44 = *param_1;
  local_50 = *(long *)(param_1 + 10);
  local_60._8_8_ = 0;
  local_60._0_8_ = 0;
  if (2 < local_44) {
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_50 + 0xd8) = 1;
  }
  if (local_44 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_44 = 0xffffffff;
    *param_1 = 0xffffffff;
    goto LAB_078047c8;
  }
  if (local_44 == 1) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_44 = 0xffffffff;
    *param_1 = 0xffffffff;
    goto LAB_0780495c;
  }
  if (local_44 == 2) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_44 = 0xffffffff;
    *param_1 = 0xffffffff;
  }
  else {
    if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = _GAME_DreamyTower_DreamyTowerManager__CheckFirstOpenPopup();
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
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_078047b4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_078047b4:
      iVar2 = (*(code *)*puVar3)(uVar1,uVar7,puVar3[1]);
      if (iVar2 != 0) goto LAB_078047c8;
      local_44 = 0;
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049c9250(param_1 + 2,local_60,param_1,DAT_091c2d50);
LAB_07804c3c:
      iVar2 = 8;
      goto LAB_07804c40;
    }
LAB_078047c8:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar1 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_07804848;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07804848:
      (*(code *)*puVar3)(uVar1,uVar7,puVar3[1]);
    }
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar8 = _GAME_DreamyTower_PopupDreamyTowerCtrl__MoveViewToTargetLevelCheckPoint(0x3f800000);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar8;
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
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07804948;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_07804948:
      iVar2 = (*(code *)*puVar3)(uVar1,uVar7,puVar3[1]);
      if (iVar2 == 0) {
        local_44 = 1;
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_049c9250(param_1 + 2,local_60,param_1,DAT_091c2d50);
        goto LAB_07804c3c;
      }
    }
LAB_0780495c:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar1 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_60._0_8_;
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
            goto LAB_078049dc;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_078049dc:
      (*(code *)*puVar3)(uVar1,uVar7,puVar3[1]);
    }
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar8 = _GAME_DreamyTower_PopupDreamyTowerCtrl__CheckMovePlayerPos();
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar8;
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
      uVar7 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07804ad8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_07804ad8:
      iVar2 = (*(code *)*puVar3)(uVar1,uVar7,puVar3[1]);
      if (iVar2 == 0) {
        local_44 = 2;
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_049c9250(param_1 + 2,local_60,param_1,DAT_091c2d50);
        goto LAB_07804c3c;
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
    uVar7 = local_60._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_07804b6c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07804b6c:
    (*(code *)*puVar3)(uVar1,uVar7,puVar3[1]);
  }
  iVar2 = 0xd;
LAB_07804c40:
  if ((int)local_44 < 0) {
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_50 + 0xd8) = 0;
  }
  if ((iVar2 == 0) || (iVar2 == 0xd)) {
    *param_1 = 0xfffffffe;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  }
  return;
}

