// rea decompile_all
// name: _GAME.Team.TeamManager.<SendLifeRequest>d__44$$MoveNext
// address: 0x7780698
// body: available
// range: 0x7780698-0x7780e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7780e44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780e48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780e4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780e50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780e54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780e58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780e5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780e60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7780e64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<SendLifeRequest>d__44__MoveNext(int *param_1)

{
  uint uVar1;
  long lVar2;
  undefined2 uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09522d0f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199810);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091b0c68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189970);
    FUN_03f5c2a4(&DAT_091ba4f0);
    FUN_03f5c2a4(&DAT_0917e758);
    FUN_03f5c2a4(&DAT_0918b968);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522d0f = 1;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_077809e8:
    uVar13 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
      bVar4 = local_60[8] != '\0';
    }
    else {
      uVar3 = local_60._10_2_;
      lVar8 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar7 = *(long *)uVar13;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar9 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_07780a8c;
          }
          uVar6 = uVar6 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar6 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(uVar13,lVar8,0);
LAB_07780a8c:
      bVar4 = (*(code *)*puVar9)(uVar13,uVar3,puVar9[1]);
    }
    if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = DAT_091ba4f0;
    lVar7 = *(long *)(DAT_091ba4f0 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar7 = DAT_091ba4f0;
    if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(**(long **)(lVar8 + 0xb8) + 0x28) = 0;
    lVar8 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    uVar13 = **(undefined8 **)(lVar8 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    bVar5 = UnityEngine_Object__op_Equality(uVar13,0,0);
    if (((bVar5 | bVar4 ^ 0xff) & 1) == 0) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x60);
      lVar8 = thunk_FUN_03f9944c(DAT_0918b968);
      System_Object___ctor(lVar8,0);
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
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar8 + 0x18) = **(undefined8 **)(DAT_09180dc0 + 0xb8);
      thunk_FUN_03f5d7b8();
      *(undefined8 *)(lVar8 + 0x10) = DAT_091f5700;
      thunk_FUN_03f5d7b8();
      *(undefined1 *)(lVar8 + 0x28) = 0;
      uVar13 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(lVar8 + 0x20) = 0x500000000;
      *(undefined8 *)(lVar8 + 0x30) = uVar13;
      lVar2 = DAT_091b0c68;
      if (lVar7 == 0) {
LAB_07780e48:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(lVar7 + 0x10);
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_07780e48;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        plVar14 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
        *plVar14 = lVar8;
        thunk_FUN_03f5d7b8(plVar14,lVar8);
      }
      else {
        FUN_057e0c68(lVar7,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      lVar8 = **(long **)(DAT_0918b978 + 0xb8);
      if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar13 = _GAME_BaseGame_TimerManager__get_UnixTimeMillisecondsUtc(0);
      lVar7 = DAT_0918b978;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar8 + 0x18) = uVar13;
      if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Team_TeamDbModel__AddSaveAction(**(long **)(lVar7 + 0xb8));
      uVar12 = 1;
      goto LAB_07780d78;
    }
  }
  else {
    if (*(int *)(DAT_09189970 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = _GAME_Bridge_R1RemoteConfig__get_TeamEnableSendHeart(0);
    if ((uVar6 & 1) != 0) {
      if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = DAT_091ba4f0;
      lVar7 = *(long *)(DAT_091ba4f0 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = *(long *)(lVar8 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(**(long **)(lVar8 + 0xb8) + 0x28) == '\0') {
        if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = _GAME_BaseGame_TimerManager__get_UnixTimeMillisecondsUtc(0);
        *(long *)(param_1 + 8) = lVar8;
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (43199999 < lVar8 - *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x18)) {
          if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar8 = DAT_091ba4f0;
          lVar7 = *(long *)(DAT_091ba4f0 + 0x20);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
            lVar7 = FUN_03f95a6c();
          }
          if (*(int *)(lVar7 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar8 = *(long *)(lVar8 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03f95a6c();
          }
          lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_03f95a6c();
          }
          if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined1 *)(**(long **)(lVar8 + 0xb8) + 0x28) = 1;
          auVar15 = _GAME_Team_TeamServer__SendLifeRequest(1);
          local_50._0_8_ = 0;
          local_50._8_8_ = 0;
          if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          local_50 = auVar15;
          thunk_FUN_03f5d7b8(local_50,0);
          local_60 = local_50;
          uVar6 = FUN_0430cf0c(local_60,DAT_0919a588);
          if ((uVar6 & 1) == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 10) = local_60;
            thunk_FUN_03f5d7b8(param_1 + 10,0);
            FUN_0478f02c(param_1 + 2,local_60,param_1,DAT_09199810);
            return;
          }
          goto LAB_077809e8;
        }
      }
    }
  }
  uVar12 = 0;
LAB_07780d78:
  plVar14 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar14 == (long *)0x0) {
    *(undefined1 *)(param_1 + 6) = uVar12;
  }
  else {
    lVar8 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar7 = *plVar14;
    uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar9 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_07780e1c;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar14,lVar8,2);
LAB_07780e1c:
    (*(code *)*puVar9)(plVar14,uVar12,puVar9[1]);
  }
  return;
}

