// rea decompile_all
// name: _GAME.GameUI.DropItemController.<DropCloneToBagAsync>d__75$$MoveNext
// address: 0x7754cb8
// body: available
// range: 0x7754cb8-0x775523b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7754fd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7755224 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7755228 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775522c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7755230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7755234 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7755238 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07755220) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_GameUI_DropItemController_<DropCloneToBagAsync>d__75__MoveNext(int *param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined8 uStack_90;
  int local_88;
  undefined1 local_80 [16];
  long local_68;
  int local_5c;
  int *local_58;
  undefined1 local_50 [16];
  
  local_58 = param_1;
  if ((DAT_09522bd3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09199a88);
    FUN_03f5c2a4(&DAT_09199b28);
    FUN_03f5c2a4(&DAT_0919a5c0);
    FUN_03f5c2a4(&DAT_0919a5c8);
    FUN_03f5c2a4(&DAT_091e9300);
    FUN_03f5c2a4(&DAT_091902f0);
    FUN_03f5c2a4(&DAT_091bde20);
    DAT_09522bd3 = 1;
  }
  local_5c = *param_1;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_88 = 0;
  local_68 = *(long *)(param_1 + 8);
  if (local_5c == 0) {
LAB_07754f24:
    local_80._8_8_ = *(undefined8 *)(param_1 + 0x18);
    local_80._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x16);
    auVar15 = *(undefined1 (*) [16])(param_1 + 0x16);
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    local_5c = -1;
    *param_1 = -1;
LAB_07754f3c:
    local_80._0_8_ = auVar15._0_8_;
    uVar3 = local_80._0_8_;
    if ((long *)local_80._0_8_ == (long *)0x0) {
      local_80._8_4_ = auVar15._8_4_;
      iVar12 = local_80._8_4_;
    }
    else {
      local_80._12_2_ = auVar15._12_2_;
      uVar1 = local_80._12_2_;
      lVar8 = *(long *)(DAT_0919a5c0 + 0x20);
      local_80 = auVar15;
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar6 = *(long *)uVar3;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07754fe4;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar3,lVar8,0);
LAB_07754fe4:
      iVar12 = (*(code *)*puVar5)(uVar3,uVar1,puVar5[1]);
      auVar15 = local_80;
    }
    iVar13 = 8;
  }
  else {
    uVar3 = thunk_FUN_03f9944c(DAT_091902f0);
    System_Object___ctor(uVar3,0);
    *(undefined8 *)(local_58 + 0x14) = uVar3;
    thunk_FUN_03f5d7b8(local_58 + 0x14,uVar3);
    if (*(long *)(local_58 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(local_58 + 0x14) + 0x18) = *(undefined8 *)(local_58 + 8);
    thunk_FUN_03f5d7b8();
    lVar8 = *(long *)(local_58 + 0x14);
    if ((char)local_58[10] == '\0') {
      uVar2 = 0xffffffff;
      lVar6 = local_68;
      param_1 = local_58;
    }
    else {
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = _GAME_GameUI_DropItemController__ShowBag();
      lVar6 = local_68;
      param_1 = local_58;
    }
    local_68 = lVar6;
    local_58 = param_1;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined4 *)(lVar8 + 0x14) = uVar2;
    if (*(long *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(*(long *)(param_1 + 0x14) + 0x10) = 0;
    if (local_5c == 0) goto LAB_07754f24;
    iVar12 = param_1[0xe];
    iVar13 = param_1[0xf];
    uVar10 = *(undefined8 *)(param_1 + 0xc);
    iVar14 = param_1[0x10];
    uVar11 = *(undefined8 *)(param_1 + 0x14);
    uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar3,uVar11,DAT_091e9300,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar15 = _GAME_GameUI_DropItemController__DropCloneAsync
                        (iVar12,iVar13,iVar14,lVar6,uVar10,uVar3,*(undefined8 *)(local_58 + 0x12));
    local_50._0_8_ = 0;
    local_50._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bde20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_50 = auVar15;
    thunk_FUN_03f5d7b8(local_50,0);
    local_80 = local_50;
    uVar4 = FUN_0429cb44(local_80,DAT_0919a5c8);
    auVar15 = local_80;
    if ((uVar4 & 1) != 0) goto LAB_07754f3c;
    local_5c = 0;
    *local_58 = 0;
    *(undefined1 (*) [16])(local_58 + 0x16) = local_80;
    thunk_FUN_03f5d7b8(local_58 + 0x16,0);
    FUN_04791694(local_58 + 2,local_80,local_58,DAT_09199a88);
    iVar12 = 0;
    iVar13 = 7;
    auVar15 = local_80;
  }
  local_80 = auVar15;
  if (local_5c < 0) {
    lVar8 = *(long *)(local_58 + 0x14);
    if (lVar8 == 0) {
LAB_07755230:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(char *)(lVar8 + 0x10) == '\0') && (-1 < *(int *)(lVar8 + 0x14))) {
      if (local_68 == 0) goto LAB_07755230;
      _GAME_GameUI_DropItemController__HideBag(local_68,*(int *)(lVar8 + 0x14),0);
    }
  }
  if (iVar13 == 8) {
    *local_58 = -2;
    piVar7 = local_58 + 0x14;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_03f5d7b8(piVar7,0);
    plVar9 = *(long **)(local_58 + 2);
    if (plVar9 == (long *)0x0) {
      local_58[6] = iVar12;
    }
    else {
      lVar8 = *(long *)(DAT_09199b28 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar6 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_077551f4;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar9,lVar8,2);
LAB_077551f4:
      (*(code *)*puVar5)(plVar9,iVar12,puVar5[1]);
    }
  }
  else if (iVar13 == 0) {
    uVar3 = (&uStack_90)[local_88 + -1];
    *local_58 = -2;
    piVar7 = local_58 + 0x14;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_03f5d7b8(piVar7,0);
    piVar7 = local_58;
    lVar8 = thunk_FUN_03fc39d4(&DAT_09199b20);
    plVar9 = *(long **)(piVar7 + 2);
    if (plVar9 == (long *)0x0) {
      piVar7 = piVar7 + 4;
      *(undefined8 *)piVar7 = uVar3;
      thunk_FUN_03f5d7b8(piVar7,uVar3);
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar6 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar8) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_077551cc;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar9,lVar8,3);
LAB_077551cc:
      (*(code *)*puVar5)(plVar9,uVar3,puVar5[1]);
    }
  }
  return;
}

