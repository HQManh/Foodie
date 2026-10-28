// rea decompile_all
// name: _GAME.GameUI.DropItemController.<PlayGoldParticleAsync>d__74$$MoveNext
// address: 0x7758518
// body: available
// range: 0x7758518-0x7758a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7758a80 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7758a84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7758a88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7758a8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07758a7c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_GameUI_DropItemController_<PlayGoldParticleAsync>d__74__MoveNext(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [16];
  int local_44;
  undefined1 local_40 [16];
  
  if ((DAT_09522be5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09199aa8);
    FUN_03f5c2a4(&DAT_09199b28);
    FUN_03f5c2a4(&DAT_0919a5c0);
    FUN_03f5c2a4(&DAT_0919a5c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e92f8);
    FUN_03f5c2a4(&DAT_091902e8);
    FUN_03f5c2a4(&DAT_091bde20);
    DAT_09522be5 = 1;
  }
  local_44 = *param_1;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68 = 0;
  if (local_44 == 0) {
LAB_077587a0:
    local_60._8_8_ = *(undefined8 *)(param_1 + 0x1a);
    local_60._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x18);
    auVar11 = *(undefined1 (*) [16])(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    local_44 = -1;
    *param_1 = -1;
  }
  else {
    lVar3 = thunk_FUN_03f9944c(DAT_091902e8);
    _GAME_GameUI_DropItemController_<>c__DisplayClass74_0___ctor(lVar3,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(char *)(lVar3 + 0x10) = (char)param_1[8];
    uVar7 = *(undefined8 *)(param_1 + 9);
    *(int *)(lVar3 + 0x1c) = param_1[0xb];
    *(undefined8 *)(lVar3 + 0x14) = uVar7;
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_1 + 0xc);
    thunk_FUN_03f5d7b8();
    uVar7 = *(undefined8 *)(param_1 + 0xe);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Inequality(uVar7,0,0);
    if ((uVar4 & 1) == 0) {
      iVar2 = -1;
    }
    else {
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar2 = *(int *)(*(long *)(param_1 + 0xe) + 0x58);
    }
    param_1[0x16] = iVar2;
    if (local_44 == 0) goto LAB_077587a0;
    uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar7,lVar3,DAT_091e92f8,0);
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar11 = _GAME_GameUI_RwItemDropCtrl__PlayDropAsync
                        (param_1[0x10],param_1[0x11],param_1[0x12],*(undefined4 *)(lVar3 + 0x14),
                         *(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                         *(long *)(param_1 + 0xe),uVar7,*(undefined8 *)(param_1 + 0x14));
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bde20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar11;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    uVar4 = FUN_0429cb44(local_60,DAT_0919a5c8);
    auVar11 = local_60;
    if ((uVar4 & 1) == 0) {
      local_44 = 0;
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x18) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0x18,0);
      FUN_04791b14(param_1 + 2,local_60,param_1,DAT_09199aa8);
      iVar2 = 0;
      iVar10 = 7;
      auVar11 = local_60;
      goto LAB_07758870;
    }
  }
  local_60._0_8_ = auVar11._0_8_;
  uVar7 = local_60._0_8_;
  if ((long *)local_60._0_8_ == (long *)0x0) {
    local_60._8_4_ = auVar11._8_4_;
    iVar2 = local_60._8_4_;
  }
  else {
    local_60._12_2_ = auVar11._12_2_;
    uVar1 = local_60._12_2_;
    lVar3 = *(long *)(DAT_0919a5c0 + 0x20);
    local_60 = auVar11;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar6 = *(long *)uVar7;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07758854;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(uVar7,lVar3,0);
LAB_07758854:
    iVar2 = (*(code *)*puVar5)(uVar7,uVar1,puVar5[1]);
    auVar11 = local_60;
  }
  iVar10 = 8;
LAB_07758870:
  if (((local_44 < 0) && (plVar9 = *(long **)(param_1 + 0xe), plVar9 != (long *)0x0)) &&
     ((int)plVar9[0xb] == param_1[0x16])) {
    local_60 = auVar11;
    (**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    auVar11 = local_60;
  }
  local_60 = auVar11;
  if (iVar10 == 8) {
    plVar9 = *(long **)(param_1 + 2);
    *param_1 = -2;
    if (plVar9 == (long *)0x0) {
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
      lVar6 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_07758a58;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar9,lVar3,2);
LAB_07758a58:
      (*(code *)*puVar5)(plVar9,iVar2,puVar5[1]);
    }
  }
  else if (iVar10 == 0) {
    uVar7 = (&uStack_70)[local_68 + -1];
    *param_1 = -2;
    lVar3 = thunk_FUN_03fc39d4(&DAT_09199b20);
    plVar9 = *(long **)(param_1 + 2);
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(param_1 + 4) = uVar7;
      thunk_FUN_03f5d7b8(param_1 + 4,uVar7);
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c(lVar3);
      }
      lVar6 = *plVar9;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
            goto LAB_07758a30;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar9,lVar3,3);
LAB_07758a30:
      (*(code *)*puVar5)(plVar9,uVar7,puVar5[1]);
    }
  }
  return;
}

