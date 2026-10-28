// rea decompile_all
// name: _GAME.GameUI.DropItemController.<DropGoldBurstAsync>d__73$$MoveNext
// address: 0x775539c
// body: available
// range: 0x775539c-0x775569f inclusive
// range: 0x77556c0-0x7755c23 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7755c14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7755c18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7755c1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7755c20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController_<DropGoldBurstAsync>d__73__MoveNext(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar20 [16];
  long *local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined4 local_e8;
  long *local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  long *local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  
  if ((DAT_09522bdc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199a78);
    FUN_03f5c2a4(&DAT_09199ab8);
    FUN_03f5c2a4(&DAT_09199b28);
    FUN_03f5c2a4(&DAT_0919a540);
    FUN_03f5c2a4(&DAT_0919a548);
    FUN_03f5c2a4(&DAT_091aa928);
    FUN_03f5c2a4(&DAT_091aa920);
    FUN_03f5c2a4(&DAT_091aa930);
    FUN_03f5c2a4(&DAT_0917bae8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bdd78);
    FUN_03f5c2a4(&DAT_091ddb38);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522bdc = 1;
  }
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_c0 = (long *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_d8 = 0;
  local_e0 = (long *)0x0;
  iVar16 = *param_1;
  local_d0 = 0;
  lVar12 = *(long *)(param_1 + 0xc);
  local_e8 = 0;
  if (iVar16 == 0) goto LAB_07755700;
  if (iVar16 == 1) {
    local_b0 = *(ulong *)(param_1 + 0x26);
    uStack_b8 = *(undefined8 *)(param_1 + 0x24);
    local_c0 = *(long **)(param_1 + 0x22);
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *param_1 = -1;
    local_a0 = ZEXT816(0);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Math__Max(0,uVar4,0);
    iVar1 = System_Math__Min(10,uVar4,0);
    param_1[0x18] = iVar1;
    if (iVar1 < 1) {
      uVar2 = 1;
      goto LAB_07755b28;
    }
    uVar4 = thunk_FUN_03f9944c(DAT_0917bae8);
    FUN_0569fb9c(uVar4,iVar1,DAT_091aa920);
    *(undefined8 *)(param_1 + 0x1a) = uVar4;
    thunk_FUN_03f5d7b8(param_1 + 0x1a,uVar4);
    iVar1 = 0;
    *(undefined2 *)(param_1 + 0x1c) = 0;
    param_1[0x1d] = 0;
    while (iVar1 < param_1[0x18]) {
      if (iVar16 == 0) {
LAB_07755700:
        local_a0 = *(undefined1 (*) [16])(param_1 + 0x1e);
        iVar16 = -1;
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        *param_1 = -1;
LAB_07755714:
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar4 = local_a0._0_8_;
        if ((long *)local_a0._0_8_ != (long *)0x0) {
          lVar7 = *(long *)local_a0._0_8_;
          uVar9 = local_a0._8_8_ & 0xffff;
          uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar13 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_091868c0) {
                puVar3 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_07755890;
              }
              uVar13 = uVar13 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar13 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,2);
LAB_07755890:
          (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
        }
      }
      else {
        lVar7 = _GAME_GameUI_DropItemController__RespawnGoldItemDrop(0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar13 = UnityEngine_Object__op_Equality(lVar7,0,0);
        if ((uVar13 & 1) == 0) {
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          _GAME_GameUI_GoldItemDropCtrl__SetIcon(lVar7,*(undefined8 *)(param_1 + 10));
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar18 = param_1[0xf];
          iVar19 = param_1[0x10];
          uVar17 = _GAME_GameUI_DropItemController__GetRandomPosition
                             (param_1[0xe],iVar18,iVar19,lVar12,0);
          iVar1 = param_1[0x1d];
          if (iVar1 == 0) {
LAB_077557d0:
            _GAME_GameUI_DropItemController__RespawnVfxDropItem(uVar17,iVar18,iVar19,0);
            iVar1 = param_1[0x1d];
            uVar4 = 1;
            iVar8 = param_1[0x18] + -1;
          }
          else {
            uVar4 = 0;
            iVar8 = param_1[0x18] + -1;
            if (iVar1 == iVar8) goto LAB_077557d0;
          }
          lVar15 = *(long *)(param_1 + 0x1a);
          uVar6 = 0;
          if (iVar1 == iVar8) {
            uVar6 = *(undefined8 *)(param_1 + 0x14);
          }
          auVar20 = _GAME_GameUI_DropItemController__PlayGoldParticleAsync
                              (uVar17,iVar18,iVar19,param_1[0x11],param_1[0x12],param_1[0x13],lVar12
                               ,lVar7,uVar4,uVar6,*(undefined8 *)(param_1 + 0x16),0);
          lVar7 = DAT_091aa928;
          if (lVar15 == 0) {
LAB_07755c14:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = *(long *)(lVar15 + 0x10);
          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
          if (lVar10 == 0) goto LAB_07755c14;
          uVar2 = *(uint *)(lVar15 + 0x18);
          if (uVar2 < *(uint *)(lVar10 + 0x18)) {
            *(uint *)(lVar15 + 0x18) = uVar2 + 1;
            pauVar5 = (undefined1 (*) [16])(lVar10 + (long)(int)uVar2 * 0x10 + 0x20);
            *pauVar5 = auVar20;
            thunk_FUN_03f5d7b8(pauVar5,0);
          }
          else {
            FUN_056a03d0(lVar15,auVar20._0_8_,auVar20._8_8_,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
          if (param_1[0x1d] < param_1[0x18] + -1) {
            uVar4 = *(undefined8 *)(param_1 + 0x16);
            if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            auVar20 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(0x3cf5c28f,1,8,uVar4,0,0);
            local_90 = auVar20;
            thunk_FUN_03f5d7b8(local_90,0);
            local_a0 = local_90;
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
            uVar4 = local_a0._0_8_;
            if ((long *)local_a0._0_8_ != (long *)0x0) {
              lVar7 = *(long *)local_a0._0_8_;
              uVar9 = local_a0._8_8_ & 0xffff;
              uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar13 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == DAT_091868c0) {
                    puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_07755acc;
                  }
                  uVar13 = uVar13 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar13 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,0);
LAB_07755acc:
              iVar1 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
              if (iVar1 == 0) {
                *param_1 = 0;
                *(undefined1 (*) [16])(param_1 + 0x1e) = local_a0;
                thunk_FUN_03f5d7b8(param_1 + 0x1e,0);
                FUN_047920b4(param_1 + 2,local_a0,param_1,DAT_09199ab8);
                return;
              }
            }
            goto LAB_07755714;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x1c) = 1;
        }
      }
      iVar1 = param_1[0x1d] + 1;
      param_1[0x1d] = iVar1;
    }
    lVar12 = *(long *)(param_1 + 0x1a);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar12 + 0x18) == 0) {
      uVar2 = 2;
      if (*(char *)((long)param_1 + 0x71) == '\0') {
        uVar2 = 3;
      }
      goto LAB_07755b28;
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04e142e0(&local_110,lVar12,DAT_091ddb38);
    local_d0 = local_100;
    uStack_d8 = uStack_108;
    uStack_108 = 0;
    local_100 = 0;
    local_e0 = local_110;
    local_110 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdd78 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_108 = uStack_d8;
    local_110 = local_e0;
    local_100 = local_d0;
    thunk_FUN_03f5d7b8(&local_110,0);
    uStack_b8 = uStack_108;
    local_c0 = local_110;
    local_b0 = local_100;
    uVar13 = FUN_041e5390(&local_c0,DAT_0919a548);
    if ((uVar13 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x24) = uStack_b8;
      *(long **)(param_1 + 0x22) = local_c0;
      *(ulong *)(param_1 + 0x26) = local_b0;
      thunk_FUN_03f5d7b8(param_1 + 0x22,0);
      FUN_04791e74(param_1 + 2,&local_c0,param_1,DAT_09199a78);
      return;
    }
  }
  plVar14 = local_c0;
  uVar4 = uStack_b8;
  if (local_c0 != (long *)0x0) {
    uVar13 = local_b0 & 0xffff;
    lVar12 = *(long *)(DAT_0919a540 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c(lVar12);
    }
    lVar7 = *plVar14;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07755628;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar14,lVar12,0);
LAB_07755628:
    uVar4 = (*(code *)*puVar3)(plVar14,uVar13,puVar3[1]);
  }
  if (*(char *)((long)param_1 + 0x71) == '\0') {
    uVar13 = _GAME_GameUI_DropItemController__ContainsResult(uVar4,2,0);
    if ((uVar13 & 1) == 0) {
      if ((char)param_1[0x1c] == '\0') {
        uVar13 = _GAME_GameUI_DropItemController__ContainsResult(uVar4,3,0);
        if ((uVar13 & 1) == 0) {
          uVar2 = _GAME_GameUI_DropItemController__ContainsResult(uVar4,0,0);
          uVar2 = (uVar2 ^ 0xffffffff) & 1;
          goto LAB_07755b28;
        }
      }
      uVar2 = 3;
      goto LAB_07755b28;
    }
  }
  uVar2 = 2;
LAB_07755b28:
  *param_1 = -2;
  piVar11 = param_1 + 0x1a;
  piVar11[0] = 0;
  piVar11[1] = 0;
  thunk_FUN_03f5d7b8(piVar11,0);
  plVar14 = *(long **)(param_1 + 2);
  if (plVar14 == (long *)0x0) {
    param_1[6] = uVar2;
  }
  else {
    lVar12 = *(long *)(DAT_09199b28 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 8);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_03f95a6c(lVar12);
    }
    lVar7 = *plVar14;
    uVar13 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar13 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar12) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_07755bdc;
        }
        uVar13 = uVar13 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar13 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar14,lVar12,2);
LAB_07755bdc:
    (*(code *)*puVar3)(plVar14,uVar2,puVar3[1]);
  }
  return;
}

