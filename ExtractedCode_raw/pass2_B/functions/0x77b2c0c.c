// rea decompile_all
// name: _GAME.Profile.ProfileManager.<AdoptServerProfile>d__15$$MoveNext
// address: 0x77b2c0c
// body: available
// range: 0x77b2c0c-0x77b2daf inclusive
// range: 0x77b2dbc-0x77b3493 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b2dac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b3478 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b347c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b3480 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b3484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b3488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b348c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b3490 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager_<AdoptServerProfile>d__15__MoveNext(int *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 local_e0 [16];
  ulong local_d0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  ulong local_90;
  undefined1 local_80 [16];
  ulong local_70;
  
  if ((DAT_09522ea6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1e80);
    FUN_03f5c2a4(&DAT_091c2108);
    FUN_03f5c2a4(&DAT_0919a6d0);
    FUN_03f5c2a4(&DAT_0919a6d8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091ba490);
    FUN_03f5c2a4(&DAT_0917e740);
    FUN_03f5c2a4(&DAT_091bdef0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522ea6 = 1;
  }
  local_80._8_8_ = 0;
  local_80._0_8_ = 0;
  local_70 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  auVar14 = ZEXT816(0);
  local_90 = 0;
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  auVar2 = ZEXT816(0);
  local_b8 = 0;
  if (*param_1 == 0) {
    local_70 = *(ulong *)(param_1 + 0xe);
    local_80 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
    goto LAB_077b2e34;
  }
  if (*param_1 != 1) {
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x10);
      thunk_FUN_03f5d7b8();
      goto LAB_077b3124;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_b0 = *(undefined1 (*) [16])(param_1 + 0x10);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = -1;
  local_a0 = ZEXT816(0);
  local_80 = ZEXT816(0);
  do {
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar12 = local_b0._0_8_;
    if ((long *)local_b0._0_8_ != (long *)0x0) {
      lVar8 = *(long *)local_b0._0_8_;
      uVar13 = local_b0._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091868c0) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_077b3114;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(local_b0._0_8_,DAT_091868c0,2);
LAB_077b3114:
      (*(code *)*puVar6)(uVar12,uVar13,puVar6[1]);
    }
LAB_077b3124:
    if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = DAT_091ba490;
    lVar7 = *(long *)(DAT_091ba490 + 0x20);
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
    uVar12 = **(undefined8 **)(lVar8 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar9 = UnityEngine_Object__op_Inequality(uVar12,0,0);
    if ((uVar9 & 1) == 0) {
LAB_077b33b4:
      *param_1 = -2;
      piVar10 = param_1 + 8;
      piVar10[0] = 0;
      piVar10[1] = 0;
      thunk_FUN_03f5d7b8(piVar10,0);
      if (DAT_095162d8 == '\0') {
        FUN_03f5c2a4(&DAT_091866a8);
        DAT_095162d8 = '\x01';
      }
      plVar11 = *(long **)(param_1 + 2);
      if (plVar11 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_077b342c;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    _GAME_Profile_ProfileServer__ReadProfileDetailed(local_e0,*(undefined8 *)(param_1 + 6),0);
    local_90 = local_d0;
    auVar14 = local_e0;
    local_e0._8_8_ = 0;
    local_d0 = 0;
    local_e0._0_8_ = 0;
    local_a0 = auVar14;
    if ((*(byte *)(*(long *)(DAT_091bdef0 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_d0 = local_90;
    local_e0 = local_a0;
    thunk_FUN_03f5d7b8(local_e0,0);
    local_70 = local_d0;
    local_80 = local_e0;
    uVar9 = FUN_041e5390(local_80,DAT_0919a6d8);
    auVar14 = local_a0;
    auVar2 = local_b0;
    if ((uVar9 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 10) = local_80;
      *(ulong *)(param_1 + 0xe) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 10,0);
      FUN_049af248(param_1 + 2,local_80,param_1,DAT_091c1e80);
      return;
    }
LAB_077b2e34:
    uVar12 = local_80._0_8_;
    lVar8 = local_80._8_8_;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      uVar9 = local_70 & 0xffff;
      lVar8 = *(long *)(DAT_0919a6d0 + 0x20);
      local_a0 = auVar14;
      local_b0 = auVar2;
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar7 = *(long *)uVar12;
      uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar13 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077b2ed0;
          }
          uVar13 = uVar13 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar13 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(uVar12,lVar8,0);
LAB_077b2ed0:
      lVar8 = (*(code *)*puVar6)(uVar12,uVar9,puVar6[1]);
      auVar14 = local_a0;
      auVar2 = local_b0;
    }
    local_a0 = auVar14;
    local_b0 = auVar2;
    if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = DAT_091ba490;
    lVar5 = *(long *)(DAT_091ba490 + 0x20);
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
    lVar7 = *(long *)(lVar7 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    uVar12 = **(undefined8 **)(lVar7 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar9 = UnityEngine_Object__op_Equality(uVar12,0,0);
    if ((uVar9 & 1) != 0) goto LAB_077b33b4;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar8 + 0x10) != '\0') {
      if ((*(int *)(lVar8 + 0x14) == 0) &&
         ((lVar7 = *(long *)(lVar8 + 0x40), lVar7 != 0 ||
          ((*(long *)(lVar8 + 0x18) != 0 && (lVar7 = *(long *)(lVar8 + 0x18), lVar7 != 0)))))) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_Profile_ProfileManager__ApplyServerProfile(lVar7);
      }
      uVar9 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
      if ((uVar9 & 1) == 0) {
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar9 = System_String__Equals(*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 6),0);
        if ((uVar9 & 1) == 0) {
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar8 = *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0xb8);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar9 = FUN_057e1004(lVar8,*(undefined8 *)(param_1 + 8),DAT_091b0590);
          if ((uVar9 & 1) == 0) {
            if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar8 = DAT_091b0570;
            if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0xb8);
            if (lVar7 == 0) {
LAB_077b348c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar5 = *(long *)(lVar7 + 0x10);
            uVar12 = *(undefined8 *)(param_1 + 8);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar5 == 0) goto LAB_077b348c;
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
              *puVar6 = uVar12;
              thunk_FUN_03f5d7b8(puVar6);
            }
            else {
              FUN_057e0c68(lVar7,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Profile_ProfileDbModel__AddSaveAction();
      goto LAB_077b33b4;
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar14 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(2,0,8,0,0,0);
    local_e0 = auVar14;
    thunk_FUN_03f5d7b8(local_e0,0);
    uVar3 = local_e0._8_8_;
    uVar12 = local_e0._0_8_;
    local_b0 = local_e0;
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
    if ((long *)uVar12 != (long *)0x0) {
      lVar8 = *(long *)uVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091868c0) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_077b3084;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(uVar12,DAT_091868c0,0);
LAB_077b3084:
      iVar4 = (*(code *)*puVar6)(uVar12,uVar3 & 0xffffffff,puVar6[1]);
      if (iVar4 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_b0;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        FUN_049b288c(param_1 + 2,local_b0,param_1,DAT_091c2108);
        return;
      }
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == DAT_091866a8) {
      puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
      goto LAB_077b344c;
    }
  }
LAB_077b342c:
  puVar6 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091866a8,2);
LAB_077b344c:
  (*(code *)*puVar6)(plVar11,puVar6[1]);
  return;
}

