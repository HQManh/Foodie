// rea decompile_all
// name: _GAME.SaveGame.SaveGameManager.<SyncDataWithServer>d__8$$MoveNext
// address: 0x77a2a60
// body: available
// range: 0x77a2a60-0x77a36a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a3690 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a3694 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a3698 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a369c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a36a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077a368c) */

void _GAME_SaveGame_SaveGameManager_<SyncDataWithServer>d__8__MoveNext(uint *param_1)

{
  char cVar1;
  undefined1 auVar2 [8];
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  long *local_200;
  long *local_1f8;
  long *plStack_1f0;
  long *local_1e8;
  long *local_1e0;
  long *local_1d8;
  long *plStack_1d0;
  long *local_1c8;
  long *local_1c0;
  long *local_1b8;
  long *plStack_1b0;
  long *local_1a8;
  long *local_1a0;
  long *plStack_198;
  long *plStack_190;
  long *plStack_188;
  long *local_180;
  undefined1 local_170 [8];
  undefined8 uStack_168;
  long *local_160;
  long *plStack_158;
  long *local_150;
  long *plStack_148;
  ulong local_140;
  undefined4 local_128;
  undefined1 local_120 [16];
  long *local_110;
  long *plStack_108;
  long *local_100;
  long *plStack_f8;
  long *local_f0;
  long *plStack_e8;
  ulong local_e0;
  long *local_d0;
  long *plStack_c8;
  long *local_c0;
  long *plStack_b8;
  long *local_b0;
  long *plStack_a8;
  ulong local_a0;
  undefined8 local_98;
  long *local_90;
  long *plStack_88;
  long *local_80;
  long *local_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *local_50;
  
  if ((DAT_09522e2b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091c1d50);
    FUN_03f5c2a4(&DAT_091c2120);
    FUN_03f5c2a4(&DAT_0919a4b0);
    FUN_03f5c2a4(&DAT_0919a4b8);
    FUN_03f5c2a4(&DAT_09182c50);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b77e0);
    FUN_03f5c2a4(&DAT_091b77e8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d6000);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_09189938);
    FUN_03f5c2a4(&DAT_0918a590);
    FUN_03f5c2a4(&DAT_0918a598);
    FUN_03f5c2a4(&DAT_091ba4a8);
    FUN_03f5c2a4(&DAT_0917e748);
    FUN_03f5c2a4(&DAT_091bdd20);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_092087b8);
    FUN_03f5c2a4(&DAT_0921ea10);
    FUN_03f5c2a4(&DAT_0920e290);
    FUN_03f5c2a4(&DAT_09220ac0);
    FUN_03f5c2a4(&DAT_092142b0);
    DAT_09522e2b = 1;
  }
  uVar12 = *param_1;
  local_50 = (long *)0x0;
  plStack_88 = (long *)0x0;
  local_80 = (long *)0x0;
  local_98 = 0;
  local_90 = (long *)0x0;
  local_a0 = 0;
  plStack_f8 = (long *)0x0;
  local_100 = (long *)0x0;
  plStack_e8 = (long *)0x0;
  local_f0 = (long *)0x0;
  plStack_b8 = (long *)0x0;
  local_c0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  local_b0 = (long *)0x0;
  plStack_68 = (long *)0x0;
  local_70 = (long *)0x0;
  plStack_58 = (long *)0x0;
  plStack_60 = (long *)0x0;
  plStack_c8 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_e0 = 0;
  plStack_108 = (long *)0x0;
  local_110 = (long *)0x0;
  local_120._0_8_ = 0;
  local_120._8_8_ = 0;
  auVar13 = ZEXT816(0);
  local_128 = 0;
  if (2 < uVar12) {
    if (*(char *)(*(long *)(DAT_0918a598 + 0xb8) + 1) != '\0') goto LAB_077a353c;
    if (*(int *)(DAT_0917e748 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = DAT_091ba4a8;
    lVar3 = *(long *)(DAT_091ba4a8 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    uVar10 = **(undefined8 **)(lVar4 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar10,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(DAT_09189938 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522bd9 == '\0') {
        FUN_03f5c2a4(&DAT_09189938);
        DAT_09522bd9 = '\x01';
      }
      if (*(int *)(DAT_09189938 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(char *)(*(long *)(DAT_09189938 + 0xb8) + 8) != '\0') {
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09522cb0 == '\0') {
          FUN_03f5c2a4(&DAT_09180dc0);
          DAT_09522cb0 = '\x01';
        }
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
        if ((uVar5 & 1) == 0) {
          if (*(int *)(DAT_09182c50 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = CakeOrder_SaveProfile_CookOrderSaveSync__get_IsReady(0);
          if ((uVar5 & 1) != 0) {
            *(undefined1 *)(*(long *)(DAT_0918a598 + 0xb8) + 1) = 1;
            goto LAB_077a2dbc;
          }
        }
      }
    }
    lVar4 = DAT_091c0310;
    lVar3 = *(long *)(DAT_091c0310 + 0x38);
    if (lVar3 == 0) {
      FUN_03f95ac8(DAT_091c0310);
      lVar3 = *(long *)(lVar4 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    _GAME_GameUI_ToastController__ShowLocalizeMessage
              (DAT_092087b8,**(undefined8 **)(lVar4 + 0xb8),0);
    auVar13._8_8_ = local_120._8_8_;
    auVar13._0_8_ = local_120._0_8_;
    goto LAB_077a353c;
  }
LAB_077a2dbc:
  if (uVar12 == 0) {
    plStack_c8 = *(long **)(param_1 + 8);
    local_d0 = *(long **)(param_1 + 6);
    plStack_b8 = *(long **)(param_1 + 0xc);
    local_c0 = *(long **)(param_1 + 10);
    plStack_a8 = *(long **)(param_1 + 0x10);
    local_b0 = *(long **)(param_1 + 0xe);
    local_a0 = *(ulong *)(param_1 + 0x12);
    uVar12 = 0xffffffff;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = 0xffffffff;
LAB_077a3038:
    plVar9 = local_d0;
    local_180 = plStack_a8;
    local_1a0 = plStack_c8;
    plStack_198 = local_c0;
    plStack_190 = plStack_b8;
    plStack_188 = local_b0;
    if (local_d0 != (long *)0x0) {
      uVar5 = local_a0 & 0xffff;
      lVar4 = *(long *)(DAT_0919a4b0 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c(lVar4);
      }
      lVar3 = *plVar9;
      uVar11 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar11 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar4) {
            puVar6 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_077a312c;
          }
          uVar11 = uVar11 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar9,lVar4,0);
LAB_077a312c:
      (*(code *)*puVar6)(local_170,plVar9,uVar5,puVar6[1]);
      local_180 = local_150;
      local_1a0 = (long *)local_170;
      plStack_198 = uStack_168;
      plStack_190 = local_160;
      plStack_188 = plStack_158;
    }
    lVar4 = DAT_091c0310;
    local_70._0_1_ = (char)local_1a0;
    local_70 = local_1a0;
    plStack_68 = plStack_198;
    plStack_60 = plStack_190;
    plStack_58 = plStack_188;
    local_50 = local_180;
    if ((char)local_70 == '\0') {
      lVar3 = *(long *)(DAT_091c0310 + 0x38);
      if (lVar3 == 0) {
        FUN_03f95ac8(DAT_091c0310);
        lVar3 = *(long *)(lVar4 + 0x38);
      }
      lVar3 = *(long *)(lVar3 + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      _GAME_GameUI_ToastController__ShowLocalizeMessage
                (DAT_092087b8,**(undefined8 **)(lVar4 + 0xb8),0);
      _GAME_SaveGame_SaveGameManager__Track(DAT_0921ea10);
    }
    else {
      FUN_05c3fbc0(local_170,&local_70,DAT_091b77e8);
      auVar2 = local_170;
      plStack_88 = local_160;
      local_90 = uStack_168;
      local_80 = plStack_158;
      uVar5 = _GAME_Utils_HelperString__IsNullOrEmpty(local_170,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(DAT_0918a590 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = _GAME_SaveGame_SaveGameCodec__Parse(auVar2);
        if (lVar4 == 0) {
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarning(DAT_092142b0,0);
          uVar10 = FUN_03eabcb4(DAT_091c0310);
          _GAME_GameUI_ToastController__ShowLocalizeMessage(DAT_0920e290,uVar10,0);
          _GAME_SaveGame_SaveGameManager__Track(DAT_09220ac0);
          goto LAB_077a34f8;
        }
        if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x48);
      }
      else {
        lVar4 = 0;
        uVar10 = 0;
      }
      if (*(int *)(DAT_0918a590 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = _GAME_SaveGame_SaveGameCodec__Build
                        (&local_98,uVar10,*(long *)(DAT_0918a598 + 0xb8) + 8);
      lVar3 = DAT_091c0310;
      if (lVar7 != 0) {
        if ((uVar5 & 1) != 0) {
          local_1c0 = (long *)auVar2;
          plStack_1b0 = plStack_88;
          local_1b8 = local_90;
          local_1a8 = local_80;
          auVar13 = _GAME_SaveGame_SaveGameManager__SaveDataToServer(lVar7,&local_1c0);
          if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          _local_170 = auVar13;
          thunk_FUN_03f5d7b8(local_170,0);
          local_120 = _local_170;
          uVar5 = FUN_042c5110(local_120,0);
          if ((uVar5 & 1) == 0) {
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0x14) = local_120;
            thunk_FUN_03f5d7b8(param_1 + 0x14,0);
            FUN_049b2bb0(param_1 + 2,local_120,param_1,DAT_091c2120);
            return;
          }
          goto LAB_077a2ee4;
        }
        if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 0x30);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar3 + 0x10) < 1) {
          local_200 = (long *)auVar2;
          plStack_1f0 = plStack_88;
          local_1f8 = local_90;
          local_1e8 = local_80;
          auVar13 = _GAME_SaveGame_SaveGameManager__SaveDataToServer(lVar7,&local_200);
          if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          _local_170 = auVar13;
          thunk_FUN_03f5d7b8(local_170,0);
          local_120 = _local_170;
          uVar5 = FUN_042c5110(local_120,0);
          if ((uVar5 & 1) == 0) {
            *param_1 = 2;
            *(undefined1 (*) [16])(param_1 + 0x14) = local_120;
            thunk_FUN_03f5d7b8(param_1 + 0x14,0);
            FUN_049b2bb0(param_1 + 2,local_120,param_1,DAT_091c2120);
            return;
          }
          goto LAB_077a2de4;
        }
        if (*(int *)(DAT_09189468 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = FUN_04ca5cb8(DAT_091d6000);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_1e0 = (long *)auVar2;
        plStack_1d0 = plStack_88;
        local_1d8 = local_90;
        local_1c8 = local_80;
        _GAME_SaveGame_PopupSyncDataCtrl__Open(lVar3,local_98,lVar7,lVar4,&local_1e0);
        goto LAB_077a3484;
      }
      lVar4 = *(long *)(DAT_091c0310 + 0x38);
      if (lVar4 == 0) {
        FUN_03f95ac8(DAT_091c0310);
        lVar4 = *(long *)(lVar3 + 0x38);
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f95a6c();
      }
      _GAME_GameUI_ToastController__ShowLocalizeMessage
                (DAT_0920e290,**(undefined8 **)(lVar4 + 0xb8),0);
    }
LAB_077a34f8:
    lVar4 = 4;
    auVar13 = local_120;
  }
  else {
    if (uVar12 == 1) {
      local_120 = *(undefined1 (*) [16])(param_1 + 0x14);
      uVar12 = 0xffffffff;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = 0xffffffff;
LAB_077a2ee4:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar10 = local_120._0_8_;
      if ((long *)local_120._0_8_ != (long *)0x0) {
        lVar4 = *(long *)local_120._0_8_;
        uVar11 = local_120._8_8_ & 0xffff;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091868c0) {
              puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_077a3450;
            }
            uVar5 = uVar5 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar5 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(local_120._0_8_,DAT_091868c0,2);
LAB_077a3450:
        (*(code *)*puVar6)(uVar10,uVar11,puVar6[1]);
      }
      goto LAB_077a34f8;
    }
    if (uVar12 != 2) {
      _GAME_SaveGame_SaveGameServer__LoadRaw(local_170,1);
      local_e0 = local_140;
      plStack_e8 = plStack_148;
      local_f0 = local_150;
      plStack_f8 = plStack_158;
      local_100 = local_160;
      local_140 = 0;
      plStack_158 = (long *)0x0;
      local_160 = (long *)0x0;
      plStack_148 = (long *)0x0;
      local_150 = (long *)0x0;
      plStack_108 = uStack_168;
      local_110 = (long *)local_170;
      uStack_168 = (long *)0x0;
      local_170 = (undefined1  [8])0x0;
      if ((*(byte *)(*(long *)(DAT_091bdd20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      plStack_148 = plStack_e8;
      local_150 = local_f0;
      uStack_168 = plStack_108;
      local_170 = (undefined1  [8])local_110;
      plStack_158 = plStack_f8;
      local_160 = local_100;
      local_140 = local_e0;
      thunk_FUN_03f5d7b8(local_170,0);
      plStack_c8 = uStack_168;
      local_d0 = (long *)local_170;
      plStack_b8 = plStack_158;
      local_c0 = local_160;
      plStack_a8 = plStack_148;
      local_b0 = local_150;
      local_a0 = local_140;
      uVar5 = FUN_06b67960(&local_d0,DAT_0919a4b8);
      if ((uVar5 & 1) == 0) {
        *param_1 = 0;
        *(long **)(param_1 + 0x10) = plStack_a8;
        *(long **)(param_1 + 0xe) = local_b0;
        *(long **)(param_1 + 8) = plStack_c8;
        *(long **)(param_1 + 6) = local_d0;
        *(long **)(param_1 + 0xc) = plStack_b8;
        *(long **)(param_1 + 10) = local_c0;
        *(ulong *)(param_1 + 0x12) = local_a0;
        thunk_FUN_03f5d7b8(param_1 + 6,0);
        FUN_049ae26c(param_1 + 2,&local_d0,param_1,DAT_091c1d50);
        return;
      }
      goto LAB_077a3038;
    }
    local_120 = *(undefined1 (*) [16])(param_1 + 0x14);
    uVar12 = 0xffffffff;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = 0xffffffff;
LAB_077a2de4:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar10 = local_120._0_8_;
    if ((long *)local_120._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_120._0_8_;
      uVar11 = local_120._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_077a3474;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(local_120._0_8_,DAT_091868c0,2);
LAB_077a3474:
      (*(code *)*puVar6)(uVar10,uVar11,puVar6[1]);
    }
LAB_077a3484:
    lVar4 = 0x17;
    auVar13 = local_120;
  }
  if ((int)uVar12 < 0) {
    *(undefined1 *)(*(long *)(DAT_0918a598 + 0xb8) + 1) = 0;
  }
  if (0x17 < (uint)lVar4) {
    return;
  }
  if ((1 << lVar4 & 0x800011U) == 0) {
    return;
  }
LAB_077a353c:
  cVar1 = DAT_095162d8;
  *param_1 = 0xfffffffe;
  local_120 = auVar13;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_077a35c4;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_077a35c4:
    (*(code *)*puVar6)(plVar9,puVar6[1]);
  }
  return;
}

