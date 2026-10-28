// rea decompile_all
// name: _GAME.Team.TeamManager.<SendChatMessage>d__42$$MoveNext
// address: 0x777fc68
// body: available
// range: 0x777fc68-0x778042b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7780400 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780404 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780408 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778040c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780410 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780414 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x778041c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780420 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780424 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780428 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<SendChatMessage>d__42__MoveNext(int *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined1 uVar12;
  long lVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09522d0d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199808);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091b0bf8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091ba4f0);
    FUN_03f5c2a4(&DAT_0917e758);
    FUN_03f5c2a4(&DAT_0918b940);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_091bddd8);
    DAT_09522d0d = 1;
  }
  local_60._8_8_ = 0;
  local_60._0_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_0777ff88:
    uVar7 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
      bVar3 = local_60[8] != '\0';
    }
    else {
      uVar2 = local_60._10_2_;
      lVar6 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c(lVar6);
      }
      lVar5 = *(long *)uVar7;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar6) {
            puVar9 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0778002c;
          }
          uVar8 = uVar8 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar8 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(uVar7,lVar6,0);
LAB_0778002c:
      bVar3 = (*(code *)*puVar9)(uVar7,uVar2,puVar9[1]);
    }
    if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = DAT_091ba4f0;
    lVar5 = *(long *)(DAT_091ba4f0 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar5 = DAT_091ba4f0;
    if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(**(long **)(lVar6 + 0xb8) + 0x28) = 0;
    lVar6 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    uVar7 = **(undefined8 **)(lVar6 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    bVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
    if (((bVar4 | bVar3 ^ 0xff) & 1) == 0) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar13 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x58);
      lVar5 = thunk_FUN_03f9944c(DAT_0918b940);
      System_Object___ctor(lVar5,0);
      lVar6 = DAT_09180dc0;
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522cb0 == '\0') {
        FUN_03f5c2a4(&DAT_09180dc0);
        DAT_09522cb0 = '\x01';
      }
      if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(undefined8 *)(lVar5 + 0x18) = **(undefined8 **)(DAT_09180dc0 + 0xb8);
      thunk_FUN_03f5d7b8();
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18);
      thunk_FUN_03f5d7b8();
      *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(param_1 + 8);
      *(undefined4 *)(lVar5 + 0x28) = 0;
      thunk_FUN_03f5d7b8();
      *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(param_1 + 10);
      lVar6 = DAT_091b0bf8;
      if (lVar13 == 0) {
LAB_07780408:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(lVar13 + 0x10);
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_07780408;
      uVar1 = *(uint *)(lVar13 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
        plVar14 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *plVar14 = lVar5;
        thunk_FUN_03f5d7b8(plVar14,lVar5);
      }
      else {
        FUN_057e0c68(lVar13,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar6 = **(long **)(DAT_0918b978 + 0xb8);
      if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = _GAME_BaseGame_TimerManager__get_UnixTimeMillisecondsUtc(0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar6 + 0x50) = uVar7;
      uVar12 = 1;
      goto LAB_07780334;
    }
  }
  else {
    if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = DAT_091ba4f0;
    lVar5 = *(long *)(DAT_091ba4f0 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(**(long **)(lVar6 + 0xb8) + 0x28) == '\0') {
      if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = _GAME_BaseGame_TimerManager__get_UnixTimeMillisecondsUtc(0);
      *(long *)(param_1 + 10) = lVar6;
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (2999 < lVar6 - *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x50)) {
        if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = DAT_091ba4f0;
        lVar5 = *(long *)(DAT_091ba4f0 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = *(long *)(lVar6 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        if (**(long **)(lVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar7 = *(undefined8 *)(param_1 + 8);
        *(undefined1 *)(**(long **)(lVar6 + 0xb8) + 0x28) = 1;
        auVar15 = _GAME_Team_TeamServer__SendChat(uVar7,1);
        local_50._0_8_ = 0;
        local_50._8_8_ = 0;
        if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_50 = auVar15;
        thunk_FUN_03f5d7b8(local_50,0);
        local_60 = local_50;
        uVar8 = FUN_0430cf0c(local_60,DAT_0919a588);
        if ((uVar8 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 0xc,0);
          FUN_0478ef0c(param_1 + 2,local_60,param_1,DAT_09199808);
          return;
        }
        goto LAB_0777ff88;
      }
    }
  }
  uVar12 = 0;
LAB_07780334:
  plVar14 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar14 == (long *)0x0) {
    *(undefined1 *)(param_1 + 6) = uVar12;
  }
  else {
    lVar6 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c(lVar6);
    }
    lVar5 = *plVar14;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar9 = (undefined8 *)(lVar5 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_077803d8;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar14,lVar6,2);
LAB_077803d8:
    (*(code *)*puVar9)(plVar14,uVar12,puVar9[1]);
  }
  return;
}

