// rea decompile_all
// name: _GAME.GameUI.DropItemController.<DropItemToBagAsync>d__68$$MoveNext
// address: 0x7755fe0
// body: available
// range: 0x7755fe0-0x775674b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77563dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7756728 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775672c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7756730 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7756734 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7756738 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775673c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7756740 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7756744 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7756748 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07756724) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_GameUI_DropItemController_<DropItemToBagAsync>d__68__MoveNext(uint *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  int iVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_a0;
  int local_98;
  undefined1 local_90 [16];
  long local_80;
  uint local_74;
  undefined1 local_70 [16];
  
  if ((DAT_09522bde & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09199a90);
    FUN_03f5c2a4(&DAT_09199b28);
    FUN_03f5c2a4(&DAT_0919a5c0);
    FUN_03f5c2a4(&DAT_0919a5c8);
    FUN_03f5c2a4(&DAT_091e92e8);
    FUN_03f5c2a4(&DAT_091902d8);
    FUN_03f5c2a4(&DAT_091bde20);
    DAT_09522bde = 1;
  }
  local_74 = *param_1;
  local_90._8_8_ = 0;
  local_90._0_8_ = 0;
  local_98 = 0;
  local_80 = *(long *)(param_1 + 8);
  if (local_74 < 2) {
    uVar4 = 0;
  }
  else {
    uVar4 = thunk_FUN_03f9944c(DAT_091902d8);
    _GAME_GameUI_DropItemController_<>c__DisplayClass68_0___ctor(uVar4,0);
    *(undefined8 *)(param_1 + 0x16) = uVar4;
    thunk_FUN_03f5d7b8(param_1 + 0x16,uVar4);
    if (*(long *)(param_1 + 0x16) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(param_1 + 0x16) + 0x18) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03f5d7b8();
    lVar11 = *(long *)(param_1 + 0x16);
    if ((char)param_1[10] == '\0') {
      uVar2 = 0xffffffff;
    }
    else {
      if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = _GAME_GameUI_DropItemController__ShowBag(local_80,0);
    }
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined4 *)(lVar11 + 0x14) = uVar2;
    lVar11 = *(long *)(param_1 + 0x16);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar11 + 0x10) = 0;
    uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar4,lVar11,DAT_091e92e8,0);
  }
  if (local_74 == 0) {
    local_90._8_8_ = *(undefined8 *)(param_1 + 0x1a);
    local_90._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x18);
    auVar20 = *(undefined1 (*) [16])(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    local_74 = 0xffffffff;
    *param_1 = 0xffffffff;
LAB_0775622c:
    local_90._0_8_ = auVar20._0_8_;
    uVar4 = local_90._0_8_;
    if ((long *)local_90._0_8_ == (long *)0x0) {
LAB_077563cc:
      local_90._8_4_ = auVar20._8_4_;
      uVar3 = local_90._8_4_;
      local_90 = auVar20;
    }
    else {
      local_90._12_2_ = auVar20._12_2_;
      uVar1 = local_90._12_2_;
      lVar11 = *(long *)(DAT_0919a5c0 + 0x20);
      local_90 = auVar20;
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c(lVar11);
      }
      lVar8 = *(long *)uVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar11) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077564e0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar4,lVar11,0);
LAB_077564e0:
      uVar3 = (*(code *)*puVar5)(uVar4,uVar1,puVar5[1]);
    }
LAB_077564f4:
    iVar13 = 10;
  }
  else {
    if (local_74 == 1) {
      local_90._8_8_ = *(undefined8 *)(param_1 + 0x1a);
      local_90._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x18);
      auVar20 = *(undefined1 (*) [16])(param_1 + 0x18);
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      local_74 = 0xffffffff;
      *param_1 = 0xffffffff;
      local_90 = auVar20;
LAB_0775618c:
      uVar4 = local_90._0_8_;
      auVar20 = local_90;
      if ((long *)local_90._0_8_ == (long *)0x0) goto LAB_077563cc;
      uVar1 = local_90._12_2_;
      lVar11 = *(long *)(DAT_0919a5c0 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c(lVar11);
      }
      lVar8 = *(long *)uVar4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar11) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077564c0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar4,lVar11,0);
LAB_077564c0:
      uVar3 = (*(code *)*puVar5)(uVar4,uVar1,puVar5[1]);
      goto LAB_077564f4;
    }
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = _GAME_GameUI_DropItemController__IsBurstItem
                      (*(undefined4 *)(*(long *)(param_1 + 0xc) + 0x10),0);
    lVar11 = local_80;
    if ((uVar9 & 1) == 0) {
      if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar20 = _GAME_GameUI_DropItemController__DropSingleItemAsync
                          (param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],
                           param_1[0x13],local_80,*(undefined8 *)(param_1 + 0xc),uVar4,
                           *(undefined8 *)(param_1 + 0x14),0);
      local_70._0_8_ = 0;
      local_70._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bde20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_70 = auVar20;
      thunk_FUN_03f5d7b8(local_70,0);
      local_90 = local_70;
      uVar9 = FUN_0429cb44(local_90,DAT_0919a5c8);
      if ((uVar9 & 1) != 0) goto LAB_0775618c;
      local_74 = 1;
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x18) = local_90;
      thunk_FUN_03f5d7b8(param_1 + 0x18,0);
      FUN_047917b4(param_1 + 2,local_90,param_1,DAT_09199a90);
    }
    else {
      lVar8 = *(long *)(param_1 + 0xc);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar13 = *(int *)(lVar8 + 0x14);
      uVar3 = param_1[0xe];
      uVar15 = param_1[0xf];
      uVar14 = *(undefined8 *)(param_1 + 0x14);
      uVar16 = param_1[0x10];
      uVar17 = param_1[0x11];
      uVar18 = param_1[0x12];
      uVar19 = param_1[0x13];
      uVar6 = _GAME_GameUI_DropItemController__BurstIcon(*(undefined4 *)(lVar8 + 0x10),0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar20 = _GAME_GameUI_DropItemController__DropGoldBurstAsync
                          (uVar3,uVar15,uVar16,uVar17,uVar18,uVar19,lVar11,(long)iVar13,uVar4,uVar14
                           ,uVar6,0);
      local_70._0_8_ = 0;
      local_70._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bde20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_70 = auVar20;
      thunk_FUN_03f5d7b8(local_70,0);
      local_90 = local_70;
      uVar9 = FUN_0429cb44(local_90,DAT_0919a5c8);
      auVar20 = local_90;
      if ((uVar9 & 1) != 0) goto LAB_0775622c;
      local_74 = 0;
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x18) = local_90;
      thunk_FUN_03f5d7b8(param_1 + 0x18,0);
      FUN_047917b4(param_1 + 2,local_90,param_1,DAT_09199a90);
    }
    uVar3 = 0;
    iVar13 = 9;
  }
  if ((int)local_74 < 0) {
    lVar11 = *(long *)(param_1 + 0x16);
    if (lVar11 == 0) {
LAB_07756734:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(char *)(lVar11 + 0x10) == '\0') && (-1 < *(int *)(lVar11 + 0x14))) {
      if (local_80 == 0) goto LAB_07756734;
      _GAME_GameUI_DropItemController__HideBag(local_80,*(int *)(lVar11 + 0x14),0,0);
    }
  }
  if (iVar13 == 10) {
    *param_1 = 0xfffffffe;
    puVar7 = param_1 + 0x16;
    puVar7[0] = 0;
    puVar7[1] = 0;
    thunk_FUN_03f5d7b8(puVar7,0);
    plVar12 = *(long **)(param_1 + 2);
    if (plVar12 == (long *)0x0) {
      param_1[6] = uVar3;
    }
    else {
      lVar11 = *(long *)(DAT_09199b28 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c(lVar11);
      }
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar11) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_077566f4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar12,lVar11,2);
LAB_077566f4:
      (*(code *)*puVar5)(plVar12,uVar3,puVar5[1]);
    }
  }
  else if (iVar13 == 0) {
    uVar4 = (&uStack_a0)[local_98 + -1];
    *param_1 = 0xfffffffe;
    puVar7 = param_1 + 0x16;
    puVar7[0] = 0;
    puVar7[1] = 0;
    thunk_FUN_03f5d7b8(puVar7,0);
    lVar11 = thunk_FUN_03fc39d4(&DAT_09199b20);
    plVar12 = *(long **)(param_1 + 2);
    if (plVar12 == (long *)0x0) {
      *(undefined8 *)(param_1 + 4) = uVar4;
      thunk_FUN_03f5d7b8(param_1 + 4,uVar4);
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x20);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c();
      }
      lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
      if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_03f95a6c(lVar11);
      }
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar11) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_077566cc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar12,lVar11,3);
LAB_077566cc:
      (*(code *)*puVar5)(plVar12,uVar4,puVar5[1]);
    }
  }
  return;
}

