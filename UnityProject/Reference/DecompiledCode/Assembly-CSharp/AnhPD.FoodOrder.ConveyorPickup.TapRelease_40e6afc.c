// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorPickup$$TapRelease
// address: 0x40e6afc
// body: available
// range: 0x40e6afc-0x40e6deb inclusive
// range: 0x40e6df0-0x40e6fd7 inclusive
// range: 0x40e7014-0x40e7177 inclusive
// range: 0x40e7188-0x40e719f inclusive
// range: 0x40e7210-0x40e7217 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e6de8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e6fd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e716c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7174 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7188 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e718c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7198 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e719c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7214 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040e7194) */
/* WARNING: Removing unreachable block (ram,0x040e6e70) */

void AnhPD_FoodOrder_ConveyorPickup__TapRelease(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  undefined1 auVar15 [16];
  undefined8 local_d0;
  undefined1 auStack_c8 [16];
  long local_b8;
  undefined8 *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined1 auStack_78 [16];
  
  if ((DAT_09516091 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3308);
    FUN_03f5c2a4(&DAT_091a3310);
    FUN_03f5c2a4(&DAT_091a3318);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5a0);
    FUN_03f5c2a4(&DAT_0917ac50);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b22e0);
    FUN_03f5c2a4(&DAT_091ad988);
    FUN_03f5c2a4(&DAT_091b22d8);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091b32c8);
    FUN_03f5c2a4(&DAT_0917d1f8);
    FUN_03f5c2a4(&DAT_091881a0);
    DAT_09516091 = 1;
  }
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_a8 = (long *)0x0;
  uVar4 = AnhPD_FoodOrder_ConveyorPickup__HasRoomFor(param_1,param_2,0);
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_057e185c(&local_80,*(long *)(param_1 + 0x38),DAT_091ad988);
      puStack_98 = (undefined8 *)auStack_78._0_8_;
      local_a0 = local_80;
      local_90 = auStack_78._8_8_;
      local_80 = 0;
      auStack_78._0_8_ = &local_a0;
      while (uVar4 = FUN_071bd28c(&local_a0,DAT_091a3310), (uVar4 & 1) != 0) {
        if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_IngredientConveyorItem__PlayRejectBump(local_90,0);
      }
      FUN_071bd288(&local_a0,DAT_091a3308);
      AnhPD_FoodOrder_ConveyorPickup__BlinkBusyStations(param_1,param_2);
      if (*(char *)(param_1 + 0x58) != '\0') {
        if (((**(long **)(DAT_091881a0 + 0xb8) == 0) || (param_2 == 0)) ||
           (lVar9 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110), lVar9 == 0))
        goto LAB_040e719c;
        AnhPD_FoodOrder_LevelInfo__PulseGridFullAlert(*(undefined4 *)(param_2 + 0x128),lVar9,0);
      }
      lVar9 = *(long *)(param_1 + 0x30);
      if (lVar9 != 0) {
        (**(code **)(lVar9 + 0x18))
                  (*(undefined8 *)(lVar9 + 0x40),param_2,*(undefined8 *)(lVar9 + 0x28));
      }
      return;
    }
  }
  else if ((**(long **)(DAT_091881a0 + 0xb8) != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    FUN_057e185c(&local_80,*(long *)(param_1 + 0x38),DAT_091ad988);
    iVar12 = 0;
    puStack_98 = (undefined8 *)auStack_78._0_8_;
    local_a0 = local_80;
    local_90 = auStack_78._8_8_;
    local_b0 = &local_a0;
    local_b8 = 0;
LAB_040e6c70:
    uVar4 = FUN_071bd28c(&local_a0,DAT_091a3310);
    lVar3 = local_90;
    lVar9 = local_b8;
    if ((uVar4 & 1) == 0) {
      FUN_071bd288(local_b0,DAT_091a3308);
      if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(lVar9);
      }
      lVar9 = *(long *)(param_1 + 0x28);
      if (lVar9 != 0) {
        (**(code **)(lVar9 + 0x18))
                  (*(undefined8 *)(lVar9 + 0x40),param_2,*(undefined8 *)(lVar9 + 0x28));
      }
      lVar9 = *(long *)(param_1 + 0x20);
      if (lVar9 == 0) {
        return;
      }
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
      return;
    }
    if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar14 = *(long **)(local_90 + 0x90);
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *plVar14;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_0917a5a0) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_040e6cec;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917a5a0,0);
LAB_040e6cec:
    plVar14 = (long *)(*(code *)*puVar5)(plVar14,puVar5[1]);
    auStack_78._0_8_ = &local_a8;
    iVar13 = 0;
    local_80 = 0;
    do {
      local_a8 = plVar14;
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *plVar14;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09185b10) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_040e6d5c;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar14,DAT_09185b10,0);
LAB_040e6d5c:
      uVar4 = (*(code *)*puVar5)(plVar14,puVar5[1]);
      plVar14 = local_a8;
      if ((uVar4 & 1) == 0) goto LAB_040e6df0;
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar9 = *local_a8;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_0917ac50) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_040e6dc0;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_a8,DAT_0917ac50,0);
LAB_040e6dc0:
      lVar9 = (*(code *)*puVar5)(plVar14,puVar5[1]);
      if (lVar9 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(lVar9 + 0x18);
      }
      iVar13 = iVar8 + iVar13;
      plVar14 = local_a8;
    } while( true );
  }
LAB_040e719c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_040e6df0:
  if (local_a8 != (long *)0x0) {
    lVar9 = *local_a8;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09185a58) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_040e6e58;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_a8,DAT_09185a58,0);
LAB_040e6e58:
    (*(code *)*puVar5)(plVar14,puVar5[1]);
  }
  lVar9 = thunk_FUN_03f9944c(DAT_0917d1f8);
  FUN_058e07d8(lVar9,iVar13,DAT_091b22d8);
  iVar8 = iVar12;
  if (0 < iVar13) {
    iVar1 = iVar13 + iVar12;
    do {
      lVar6 = *(long *)(param_1 + 0x40);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar8 = iVar12;
      if (*(int *)(lVar6 + 0x18) <= iVar12) break;
      uVar7 = FUN_057e0998(lVar6,iVar12,DAT_091b0610);
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar15 = FUN_0595bd8c(*(long *)(param_1 + 0x48),iVar12,DAT_091b32c8);
      auStack_c8._0_8_ = 0;
      auStack_c8._8_8_ = 0;
      local_d0 = uVar7;
      thunk_FUN_03f5d7b8(&local_d0,uVar7);
      auStack_c8 = auVar15;
      thunk_FUN_03f5d7b8(auStack_c8 + 8,0);
      lVar6 = DAT_091b22e0;
      if (lVar9 == 0) {
LAB_040e7168:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar10 = *(long *)(lVar9 + 0x10);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_040e7168;
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar2 * 0x18;
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        *(undefined1 (*) [16])(lVar10 + 0x28) = auStack_c8;
        *(undefined8 *)(lVar10 + 0x20) = local_d0;
        thunk_FUN_03f5d7b8(lVar10 + 0x20,0);
      }
      else {
        local_80 = local_d0;
        auStack_78 = auStack_c8;
        FUN_058e1084(lVar9,&local_80,
                     *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      iVar13 = iVar13 + -1;
      iVar12 = iVar12 + 1;
      iVar8 = iVar1;
    } while (iVar13 != 0);
  }
  iVar12 = iVar8;
  AnhPD_FoodOrder_ConveyorPickup__ReleaseOne(param_1,lVar3,lVar9);
  goto LAB_040e6c70;
}

