// rea decompile_all
// name: _GAME.DreamyTower.DreamyTowerManager.<CheckFirstOpenPopup>d__22$$MoveNext
// address: 0x7801578
// body: available
// range: 0x7801578-0x78016bb inclusive
// range: 0x78016c8-0x78019bb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x78016b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x78016b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x78019b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyTower_DreamyTowerManager_<CheckFirstOpenPopup>d__22__MoveNext(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  if ((DAT_095231b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1fb0);
    FUN_03f5c2a4(&DAT_09183d80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d5f68);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_091b85c8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095231b7 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (*param_1 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
    goto LAB_078017b8;
  }
  if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09183d80 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(**(long **)(DAT_09183d80 + 0xb8) + 0x11) == '\0') {
    if (*(int *)(DAT_09189468 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = (long *)FUN_04ca5cb8(DAT_091d5f68);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar4 + 0x2c8))(plVar4,*(undefined8 *)(*plVar4 + 0x2d0));
    while( true ) {
      lVar5 = *(long *)(DAT_091b85c8 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      uVar9 = **(undefined8 **)(lVar5 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar6 & 1) == 0) break;
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar11 = Cysharp_Threading_Tasks_UniTask__WaitForEndOfFrame(0,0);
      local_60 = auVar11;
      thunk_FUN_03f5d7b8(local_60,0);
      uVar2 = local_60._8_8_;
      uVar9 = local_60._0_8_;
      local_70 = local_60;
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
      if ((long *)uVar9 != (long *)0x0) {
        lVar5 = *(long *)uVar9;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091868c0) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_078017a4;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(uVar9,DAT_091868c0,0);
LAB_078017a4:
        iVar3 = (*(code *)*puVar7)(uVar9,uVar2 & 0xffffffff,puVar7[1]);
        if (iVar3 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 6) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 6,0);
          FUN_049b139c(param_1 + 2,local_70,param_1,DAT_091c1fb0);
          return;
        }
      }
LAB_078017b8:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar9 = local_70._0_8_;
      if ((long *)local_70._0_8_ != (long *)0x0) {
        lVar5 = *(long *)local_70._0_8_;
        uVar10 = local_70._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091868c0) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_07801834;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_07801834:
        (*(code *)*puVar7)(uVar9,uVar10,puVar7[1]);
      }
    }
    if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09183d80 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(**(long **)(DAT_09183d80 + 0xb8) + 0x11) = 1;
    _GAME_DreamyTower_DreamyTowerDbModel__AddSaveAction();
  }
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar4 = *(long **)(param_1 + 2);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091866a8) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_07801990;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091866a8,2);
LAB_07801990:
    (*(code *)*puVar7)(plVar4,puVar7[1]);
  }
  return;
}

