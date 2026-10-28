// rea decompile_all
// name: _GAME.BaseGame.ABIServerAPI.<CheckNetworkConnection>d__46$$MoveNext
// address: 0x77cf568
// body: available
// range: 0x77cf568-0x77cf84f inclusive
// range: 0x77cf868-0x77cfc6b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_ABIServerAPI_<CheckNetworkConnection>d__46__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined2 uVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  if ((DAT_09522fbd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091c2788);
    FUN_03f5c2a4(&DAT_091c2800);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522fbd = 1;
  }
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  iVar4 = *param_1;
  if (iVar4 == 0) {
    local_80 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (iVar4 == 1) {
      local_90 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      local_80 = ZEXT816(0);
      goto LAB_077cf918;
    }
    if (iVar4 == 2) {
      local_80 = *(undefined1 (*) [16])(param_1 + 6);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = -1;
      local_90 = ZEXT816(0);
      goto LAB_077cfb34;
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(char *)(*(long *)(DAT_09180dc0 + 0xb8) + 0x28) == '\0') goto LAB_077cfbbc;
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_70 = Cysharp_Threading_Tasks_UniTask__Delay(0xd05,2,8,0,0,0);
    thunk_FUN_03f5d7b8(local_70,0);
    local_80 = local_70;
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
    uVar1 = local_80._0_8_;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      lVar8 = *(long *)local_80._0_8_;
      uVar12 = local_80._8_8_ & 0xffff;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_077cf804;
          }
          uVar10 = uVar10 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_077cf804:
      iVar4 = (*(code *)*puVar5)(uVar1,uVar12,puVar5[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = local_80;
        thunk_FUN_03f5d7b8(param_1 + 6,0);
        FUN_049b594c(param_1 + 2,local_80,param_1,DAT_091c2800);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  plVar11 = (long *)local_80._0_8_;
  if ((long *)local_80._0_8_ == (long *)0x0) goto LAB_077cfbbc;
  lVar8 = *(long *)local_80._0_8_;
  uVar12 = local_80._8_8_ & 0xffff;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_091868c0) goto LAB_077cfb9c;
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_077cfbac:
  do {
    (*(code *)*puVar5)(plVar11,uVar12,puVar5[1]);
LAB_077cfbbc:
    do {
      iVar4 = param_1[4];
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = _GAME_BaseGame_ABIServerAPI__IsSessionAlive(iVar4);
      if ((uVar10 & 1) == 0) {
LAB_077cfbdc:
        *param_1 = -2;
        FUN_042dada8(param_1 + 2,0);
        return;
      }
      if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar4 = UnityEngine_Application__get_internetReachability(0);
      bVar3 = 0;
      if (iVar4 != 0) {
        uVar10 = _GAME_BaseGame_SessionManager__get_IsPlayingLevel(0);
        bVar3 = 1;
        if ((uVar10 & 1) == 0) {
          auVar13 = _GAME_BaseGame_WebService__IsActive(0);
          local_70._0_8_ = 0;
          local_70._8_8_ = 0;
          if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          local_70 = auVar13;
          thunk_FUN_03f5d7b8(local_70,0);
          local_90 = local_70;
          uVar10 = FUN_0430cf0c(local_90,DAT_0919a588);
          if ((uVar10 & 1) == 0) {
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 10) = local_90;
            thunk_FUN_03f5d7b8(param_1 + 10,0);
            FUN_049b4560(param_1 + 2,local_90,param_1,DAT_091c2788);
            return;
          }
LAB_077cf918:
          uVar1 = local_90._0_8_;
          if ((long *)local_90._0_8_ == (long *)0x0) {
            bVar3 = local_90[8] != '\0';
          }
          else {
            uVar2 = local_90._10_2_;
            lVar8 = *(long *)(DAT_0919a580 + 0x20);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_03f95a6c();
            }
            lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
            if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
              lVar8 = FUN_03f95a6c(lVar8);
            }
            lVar7 = *(long *)uVar1;
            uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar10 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == lVar8) {
                  puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_077cf9b4;
                }
                uVar10 = uVar10 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(uVar1,lVar8,0);
LAB_077cf9b4:
            bVar3 = (*(code *)*puVar5)(uVar1,uVar2,puVar5[1]);
          }
        }
      }
      iVar4 = param_1[4];
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = _GAME_BaseGame_ABIServerAPI__IsSessionAlive(iVar4);
      if ((uVar10 & 1) == 0) goto LAB_077cfbdc;
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(byte *)(*(long *)(DAT_09180dc0 + 0xb8) + 0x28) = bVar3 & 1;
      uVar10 = _GAME_BaseGame_SessionManager__get_IsPlayingLevel(0);
      uVar6 = 9999;
      if ((uVar10 & 1) == 0) {
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar10 = _GAME_BaseGame_ABIServerAPI__get_IsNetworkActive();
        uVar6 = 0xd05;
        if ((uVar10 & 1) == 0) {
          uVar6 = 999;
        }
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar13 = Cysharp_Threading_Tasks_UniTask__Delay(uVar6,2,8,0,0,0);
      local_70 = auVar13;
      thunk_FUN_03f5d7b8(local_70,0);
      local_80 = local_70;
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
      uVar1 = local_80._0_8_;
      if ((long *)local_80._0_8_ != (long *)0x0) {
        lVar8 = *(long *)local_80._0_8_;
        uVar12 = local_80._8_8_ & 0xffff;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_077cfb20;
            }
            uVar10 = uVar10 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_077cfb20:
        iVar4 = (*(code *)*puVar5)(uVar1,uVar12,puVar5[1]);
        if (iVar4 == 0) {
          *param_1 = 2;
          *(undefined1 (*) [16])(param_1 + 6) = local_80;
          thunk_FUN_03f5d7b8(param_1 + 6,0);
          FUN_049b594c(param_1 + 2,local_80,param_1,DAT_091c2800);
          return;
        }
      }
LAB_077cfb34:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      plVar11 = (long *)local_80._0_8_;
    } while ((long *)local_80._0_8_ == (long *)0x0);
    lVar8 = *(long *)local_80._0_8_;
    uVar12 = local_80._8_8_ & 0xffff;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) goto LAB_077cfb9c;
        uVar10 = uVar10 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
  } while( true );
LAB_077cfb9c:
  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
  plVar11 = (long *)local_80._0_8_;
  goto LAB_077cfbac;
}

