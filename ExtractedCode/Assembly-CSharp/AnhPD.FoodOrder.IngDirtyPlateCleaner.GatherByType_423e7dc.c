// rea decompile_all
// name: AnhPD.FoodOrder.IngDirtyPlateCleaner$$GatherByType
// address: 0x423e7dc
// body: available
// range: 0x423e7dc-0x423f02f inclusive
// range: 0x423f068-0x423f09b inclusive
// range: 0x423f0a0-0x423f0a3 inclusive
// range: 0x423f0a8-0x423f0b3 inclusive
// range: 0x423f118-0x423f1eb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x423ecb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f098 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f0a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f0b0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f19c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f1a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f1a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f1ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f1b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f1b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x423f1b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0423f02c) */
/* WARNING: Removing unreachable block (ram,0x0423ed34) */
/* WARNING: Removing unreachable block (ram,0x0423f090) */
/* WARNING: Removing unreachable block (ram,0x0423f094) */
/* WARNING: Removing unreachable block (ram,0x0423f1bc) */
/* WARNING: Removing unreachable block (ram,0x0423f1e4) */
/* WARNING: Removing unreachable block (ram,0x0423f140) */
/* WARNING: Removing unreachable block (ram,0x0423f1c4) */

long AnhPD_FoodOrder_IngDirtyPlateCleaner__GatherByType(long param_1,float *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  int iVar14;
  float fVar15;
  long *local_e8;
  long **pplStack_e0;
  long *local_d8;
  long *local_d0;
  long **pplStack_c8;
  long *local_c0;
  long *local_b0;
  long **pplStack_a8;
  long *local_a0;
  long *local_90;
  long **pplStack_88;
  long *local_80;
  long local_78;
  long *local_68;
  
  if ((DAT_09516e54 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f190);
    FUN_03f5c2a4(&DAT_0919f188);
    FUN_03f5c2a4(&DAT_0919f198);
    FUN_03f5c2a4(&DAT_0919f1a0);
    FUN_03f5c2a4(&DAT_09176958);
    FUN_03f5c2a4(&DAT_09183ce8);
    FUN_03f5c2a4(&DAT_091a32d8);
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a6570);
    FUN_03f5c2a4(&DAT_091a6578);
    FUN_03f5c2a4(&DAT_091a32e0);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a32e8);
    FUN_03f5c2a4(&DAT_091a6580);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a7c8);
    FUN_03f5c2a4(&DAT_0917aec0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b4d0);
    FUN_03f5c2a4(&DAT_091ad928);
    FUN_03f5c2a4(&DAT_091ac6e0);
    FUN_03f5c2a4(&DAT_091ad930);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_091ad918);
    FUN_03f5c2a4(&DAT_091ac688);
    FUN_03f5c2a4(&DAT_091ac6d8);
    FUN_03f5c2a4(&DAT_0917c0a8);
    FUN_03f5c2a4(&DAT_0917c478);
    FUN_03f5c2a4(&DAT_0917c0b0);
    FUN_03f5c2a4(&DAT_091be9d0);
    DAT_09516e54 = 1;
  }
  local_68 = (long *)0x0;
  local_80 = (long *)0x0;
  local_78 = 0;
  local_90 = (long *)0x0;
  pplStack_88 = (long **)0x0;
  local_b0 = (long *)0x0;
  pplStack_a8 = (long **)0x0;
  local_a0 = (long *)0x0;
  local_d0 = (long *)0x0;
  pplStack_c8 = (long **)0x0;
  local_c0 = (long *)0x0;
  lVar2 = thunk_FUN_03f9944c(DAT_09176958);
  FUN_06fd76bc(lVar2,DAT_0919f188);
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar3 = (long *)AnhPD_FoodOrder_IngGridLayout__EnabledCells(), plVar3 != (long *)0x0)) {
    lVar8 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917a7c8) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0423ea38;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a7c8,0);
LAB_0423ea38:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    pplStack_e0 = &local_68;
    local_e8 = (long *)0x0;
joined_r0x0423ea58:
    do {
      local_68 = plVar3;
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar3;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0423ead4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_0423ead4:
      uVar11 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      plVar3 = local_68;
      if ((uVar11 & 1) == 0) {
        if (local_68 == (long *)0x0) goto LAB_0423ed28;
        lVar8 = *local_68;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 == 0) goto LAB_0423ed00;
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_0423ece8;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *local_68;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917aec0) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0423eb38;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917aec0,0);
LAB_0423eb38:
      uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      lVar8 = *(long *)(param_1 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar5,uVar5);
      }
      lVar8 = (**(code **)(lVar8 + 0x18))
                        (*(undefined8 *)(lVar8 + 0x40),uVar5,*(undefined8 *)(lVar8 + 0x28));
      plVar3 = local_68;
    } while ((lVar8 == 0) ||
            (uVar11 = AnhPD_FoodOrder_IngCell__get_HasDirtyPlate(lVar8), plVar3 = local_68,
            (uVar11 & 1) == 0));
    plVar3 = *(long **)(lVar8 + 0x30);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *plVar3;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917b4d0) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0423ebc8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b4d0,0);
LAB_0423ebc8:
    plVar3 = (long *)(*(code *)*puVar4)(plVar3,0,puVar4[1]);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar11 = FUN_06fd9fbc(lVar2,uVar5,&local_78,DAT_0919f190);
    if ((uVar11 & 1) == 0) {
      lVar9 = thunk_FUN_03f9944c(DAT_0917c478);
      FUN_057e0400(lVar9,DAT_091ad918);
      local_78 = lVar9;
      FUN_06fd8440(lVar2,uVar5,lVar9,DAT_0919f1a0);
    }
    lVar9 = DAT_091ad928;
    if (local_78 != 0) {
      lVar10 = *(long *)(local_78 + 0x10);
      *(int *)(local_78 + 0x1c) = *(int *)(local_78 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar1 = *(uint *)(local_78 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          *(uint *)(local_78 + 0x18) = uVar1 + 1;
          plVar3 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
          *plVar3 = lVar8;
          thunk_FUN_03f5d7b8(plVar3,lVar8);
          plVar3 = local_68;
        }
        else {
          FUN_057e0c68(local_78,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          plVar3 = local_68;
        }
        goto joined_r0x0423ea58;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_0423f1b8;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0423ece8:
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0423ed1c;
    }
  }
LAB_0423ed00:
  puVar4 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_0423ed1c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_0423ed28:
  lVar8 = thunk_FUN_03f9944c(DAT_0917c0b0);
  FUN_057e0400(lVar8,DAT_091ac6d8);
  if ((lVar2 != 0) && (lVar2 = FUN_06fd8278(lVar2,DAT_0919f198), lVar2 != 0)) {
    FUN_06544014(&local_e8,lVar2,DAT_091be9d0);
    iVar14 = 0;
    local_80 = local_d8;
    pplStack_88 = pplStack_e0;
    local_90 = local_e8;
    do {
      do {
        uVar11 = FUN_072759a8(&local_90,DAT_091a6578);
        plVar3 = local_80;
        if ((uVar11 & 1) == 0) {
          FUN_072759a4(&local_90,DAT_091a6570);
          fVar15 = 0.0;
          if (iVar14 != 0) {
            fVar15 = (float)(iVar14 + -1) * 0.06 + 0.35;
          }
          *param_2 = fVar15;
          return lVar8;
        }
        plVar6 = (long *)AnhPD_FoodOrder_IngDirtyPlateCleaner__Tallest(local_80);
      } while (plVar6 == (long *)0x0);
      plVar13 = (long *)plVar6[6];
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917b4d0) {
            puVar4 = (undefined8 *)(lVar2 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0423ee48;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b4d0,0);
LAB_0423ee48:
      plVar13 = (long *)(*(code *)*puVar4)(plVar13,0,puVar4[1]);
      lVar2 = DAT_091ac6e0;
      if (plVar13 != (long *)0x0) {
        if ((*(byte *)(DAT_09183ce8 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
           (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(DAT_09183ce8 + 0x130) * 8 + -8)
            == DAT_09183ce8)) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *plVar7 = (long)plVar13;
            thunk_FUN_03f5d7b8(plVar7,plVar13);
          }
          else {
            FUN_057e0c68(lVar8,plVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_057e185c(&local_e8,plVar3,DAT_091ad930);
          local_a0 = local_d8;
          pplStack_a8 = pplStack_e0;
          local_b0 = local_e8;
          while (uVar11 = FUN_071bd28c(&local_b0,DAT_091a32e0), (uVar11 & 1) != 0) {
            if (local_a0 != plVar6) {
              if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar9 = local_a0[6];
              lVar2 = thunk_FUN_03f9944c(DAT_0917c0a8);
              FUN_057e053c(lVar2,lVar9,DAT_091ac688);
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_057e185c(&local_e8,lVar2,DAT_091ac6b0);
              local_c0 = local_d8;
              pplStack_c8 = pplStack_e0;
              local_d0 = local_e8;
              local_e8 = (long *)0x0;
              pplStack_e0 = &local_d0;
              while (uVar11 = FUN_071bd28c(&local_d0,DAT_091a2a58), (uVar11 & 1) != 0) {
                if (local_c0 != (long *)0x0) {
                  if ((*(byte *)(DAT_09183ce8 + 0x130) <= *(byte *)(*local_c0 + 0x130)) &&
                     (*(long *)(*(long *)(*local_c0 + 200) +
                                (ulong)*(byte *)(DAT_09183ce8 + 0x130) * 8 + -8) == DAT_09183ce8)) {
                    AnhPD_FoodOrder_IngDirtyPlateCleaner__FlyIntoStack
                              ((float)iVar14 * 0.06,param_1,local_c0,plVar13);
                    iVar14 = iVar14 + 1;
                  }
                }
              }
              FUN_071bd288(&local_d0,DAT_091a2a50);
            }
          }
          FUN_071bd288(&local_b0,DAT_091a32d8);
        }
      }
    } while( true );
  }
LAB_0423f1b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

