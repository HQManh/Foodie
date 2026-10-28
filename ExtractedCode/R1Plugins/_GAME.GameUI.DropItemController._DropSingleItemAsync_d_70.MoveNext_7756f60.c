// rea decompile_all
// name: _GAME.GameUI.DropItemController.<DropSingleItemAsync>d__70$$MoveNext
// address: 0x7756f60
// body: available
// range: 0x7756f60-0x77574a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7757494 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7757498 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x775749c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77574a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07757494) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_GameUI_DropItemController_<DropSingleItemAsync>d__70__MoveNext(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined8 auStack_78 [2];
  int local_68;
  undefined1 local_60 [16];
  int local_44;
  undefined1 local_40 [16];
  
  if ((DAT_09522be2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199aa0);
    FUN_03f5c2a4(&DAT_09199b28);
    FUN_03f5c2a4(&DAT_0919a5c0);
    FUN_03f5c2a4(&DAT_0919a5c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bde20);
    DAT_09522be2 = 1;
  }
  local_44 = *param_1;
  lVar9 = *(long *)(param_1 + 10);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68 = 0;
  if (local_44 == 0) {
LAB_077570a0:
    local_60._8_8_ = *(undefined8 *)(param_1 + 0x1c);
    local_60._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x1a);
    auVar11 = *(undefined1 (*) [16])(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    local_44 = -1;
    *param_1 = -1;
LAB_077570b8:
    local_60._0_8_ = auVar11._0_8_;
    uVar3 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
      local_60._8_4_ = auVar11._8_4_;
      iVar2 = local_60._8_4_;
    }
    else {
      local_60._12_2_ = auVar11._12_2_;
      uVar1 = local_60._12_2_;
      lVar9 = *(long *)(DAT_0919a5c0 + 0x20);
      local_60 = auVar11;
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c(lVar9);
      }
      lVar6 = *(long *)uVar3;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0775724c;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar3,lVar9,0);
LAB_0775724c:
      iVar2 = (*(code *)*puVar5)(uVar3,uVar1,puVar5[1]);
      auVar11 = local_60;
    }
  }
  else {
    piVar7 = param_1 + 0x16;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_03f5d7b8(piVar7,0);
    param_1[0x18] = -1;
    if (local_44 == 0) goto LAB_077570a0;
    uVar3 = _GAME_GameUI_DropItemController__RespawnRwItemDrop(0);
    *(undefined8 *)(param_1 + 0x16) = uVar3;
    thunk_FUN_03f5d7b8();
    uVar3 = *(undefined8 *)(param_1 + 0x16);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar3,0,0);
    auVar11._8_8_ = local_60._8_8_;
    auVar11._0_8_ = local_60._0_8_;
    if ((uVar4 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x16);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      param_1[0x18] = *(int *)(lVar6 + 0x58);
      _GAME_GameUI_RwItemUICtrl__SetData(lVar6,*(undefined8 *)(param_1 + 8));
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *(long *)(param_1 + 0x16);
      _GAME_GameUI_DropItemController__GetRandomPosition
                (param_1[0xc],param_1[0xd],param_1[0xe],lVar9,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar11 = _GAME_GameUI_RwItemDropCtrl__PlayDropAsync
                          (lVar6,*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0x14));
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
        *(undefined1 (*) [16])(param_1 + 0x1a) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
        FUN_047919f4(param_1 + 2,local_60,param_1,DAT_09199aa0);
        iVar2 = 0;
        iVar8 = 7;
        goto LAB_07757264;
      }
      goto LAB_077570b8;
    }
    iVar2 = 1;
  }
  iVar8 = 5;
  local_60 = auVar11;
LAB_07757264:
  if (((local_44 < 0) && (plVar10 = *(long **)(param_1 + 0x16), plVar10 != (long *)0x0)) &&
     ((int)plVar10[0xb] == param_1[0x18])) {
    (**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
  }
  if (iVar8 == 5) {
    *param_1 = -2;
    piVar7 = param_1 + 0x16;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_03f5d7b8(piVar7,0);
    plVar10 = *(long **)(param_1 + 2);
    if (plVar10 == (long *)0x0) {
      param_1[6] = iVar2;
    }
    else {
      lVar9 = *(long *)(DAT_09199b28 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c(lVar9);
      }
      lVar6 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_07757470;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar10,lVar9,2);
LAB_07757470:
      (*(code *)*puVar5)(plVar10,iVar2,puVar5[1]);
    }
  }
  else if (iVar8 == 0) {
    uVar3 = auStack_78[local_68 + -1];
    *param_1 = -2;
    piVar7 = param_1 + 0x16;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_03f5d7b8(piVar7,0);
    lVar9 = thunk_FUN_03fc39d4(&DAT_09199b20);
    plVar10 = *(long **)(param_1 + 2);
    if (plVar10 == (long *)0x0) {
      *(undefined8 *)(param_1 + 4) = uVar3;
      thunk_FUN_03f5d7b8(param_1 + 4,uVar3);
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_03f95a6c(lVar9);
      }
      lVar6 = *plVar10;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 3) * 0x10 + 0x138);
            goto LAB_07757448;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar10,lVar9,3);
LAB_07757448:
      (*(code *)*puVar5)(plVar10,uVar3,puVar5[1]);
    }
  }
  return;
}

