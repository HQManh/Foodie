// rea decompile_all
// name: _GAME.GameUI.DropItemController.<DropItemToTargetAsync>d__69$$MoveNext
// address: 0x77568d4
// body: available
// range: 0x77568d4-0x7756e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7756df8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7756dfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7756e00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7756e04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7756e08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController_<DropItemToTargetAsync>d__69__MoveNext(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  if ((DAT_09522be0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09199a98);
    FUN_03f5c2a4(&DAT_09199b28);
    FUN_03f5c2a4(&DAT_0919a5c0);
    FUN_03f5c2a4(&DAT_0919a5c8);
    FUN_03f5c2a4(&DAT_091e92f0);
    FUN_03f5c2a4(&DAT_091902e0);
    FUN_03f5c2a4(&DAT_091bde20);
    DAT_09522be0 = 1;
  }
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  if (*param_1 == 0) {
    local_80 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
LAB_07756a30:
    uVar5 = local_80._0_8_;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      uVar1 = local_80._12_2_;
      lVar3 = *(long *)(DAT_0919a5c0 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c(lVar3);
      }
      lVar7 = *(long *)uVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07756d10;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(uVar5,lVar3,0);
LAB_07756d10:
      iVar2 = (*(code *)*puVar4)(uVar5,uVar1,puVar4[1]);
      goto LAB_07756d24;
    }
  }
  else {
    if (*param_1 == 1) {
      local_80 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
    }
    else {
      lVar7 = *(long *)(param_1 + 0xc);
      lVar3 = thunk_FUN_03f9944c(DAT_091902e0);
      _GAME_GameUI_DropItemController_<>c__DisplayClass69_0___ctor(lVar3,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 8);
      thunk_FUN_03f5d7b8();
      uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar5,lVar3,DAT_091e92f0,0);
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar8 = _GAME_GameUI_DropItemController__IsBurstItem
                        (*(undefined4 *)(*(long *)(param_1 + 10) + 0x10),0);
      if ((uVar8 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar2 = *(int *)(lVar3 + 0x14);
        iVar12 = param_1[0xe];
        iVar13 = param_1[0xf];
        uVar11 = *(undefined8 *)(param_1 + 0x14);
        iVar14 = param_1[0x10];
        iVar15 = param_1[0x11];
        iVar16 = param_1[0x12];
        iVar17 = param_1[0x13];
        uVar6 = _GAME_GameUI_DropItemController__BurstIcon(*(undefined4 *)(lVar3 + 0x10),0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar18 = _GAME_GameUI_DropItemController__DropGoldBurstAsync
                            (iVar12,iVar13,iVar14,iVar15,iVar16,iVar17,lVar7,(long)iVar2,uVar5,
                             uVar11,uVar6,0);
        local_70._0_8_ = 0;
        local_70._8_8_ = 0;
        if ((*(byte *)(*(long *)(DAT_091bde20 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_70 = auVar18;
        thunk_FUN_03f5d7b8(local_70,0);
        local_80 = local_70;
        uVar8 = FUN_0429cb44(local_80,DAT_0919a5c8);
        if ((uVar8 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x16) = local_80;
          thunk_FUN_03f5d7b8(param_1 + 0x16,0);
          FUN_047918d4(param_1 + 2,local_80,param_1,DAT_09199a98);
          return;
        }
        goto LAB_07756a30;
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar18 = _GAME_GameUI_DropItemController__DropSingleItemAsync
                          (param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],
                           param_1[0x13],lVar7,*(undefined8 *)(param_1 + 10),uVar5,
                           *(undefined8 *)(param_1 + 0x14),0);
      local_70._0_8_ = 0;
      local_70._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bde20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_70 = auVar18;
      thunk_FUN_03f5d7b8(local_70,0);
      local_80 = local_70;
      uVar8 = FUN_0429cb44(local_80,DAT_0919a5c8);
      if ((uVar8 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x16) = local_80;
        thunk_FUN_03f5d7b8(param_1 + 0x16,0);
        FUN_047918d4(param_1 + 2,local_80,param_1,DAT_09199a98);
        return;
      }
    }
    uVar5 = local_80._0_8_;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      uVar1 = local_80._12_2_;
      lVar3 = *(long *)(DAT_0919a5c0 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c(lVar3);
      }
      lVar7 = *(long *)uVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_07756cf0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(uVar5,lVar3,0);
LAB_07756cf0:
      iVar2 = (*(code *)*puVar4)(uVar5,uVar1,puVar4[1]);
      goto LAB_07756d24;
    }
  }
  iVar2 = local_80._8_4_;
LAB_07756d24:
  plVar10 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar10 == (long *)0x0) {
    param_1[6] = iVar2;
  }
  else {
    lVar3 = *(long *)(DAT_09199b28 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07756dc8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar10,lVar3,2);
LAB_07756dc8:
    (*(code *)*puVar4)(plVar10,iVar2,puVar4[1]);
  }
  return;
}

