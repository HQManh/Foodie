// rea decompile_all
// name: FUN_0443702c
// address: 0x443702c
// body: available
// range: 0x443702c-0x443741b inclusive
// range: 0x4437420-0x44374a3 inclusive
// range: 0x44374a8-0x44374ab inclusive
// range: 0x44374b0-0x44374b3 inclusive
// range: 0x44374b8-0x44374bb inclusive
// range: 0x443751c-0x443752f inclusive
// range: 0x4437598-0x443759b inclusive
// range: 0x44375f4-0x443768f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4437418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44374a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44374a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44374b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44374b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443751c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4437520 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4437524 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443752c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4437598 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x443768c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04437528) */
/* WARNING: Removing unreachable block (ram,0x0443768c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_0443702c(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x23;
  undefined1 auVar17 [16];
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000028;
  long *in_stack_00000030;
  long *in_stack_00000038;
  
  lVar6 = thunk_FUN_03f9944c(*param_1);
  FUN_06fc96ac(lVar6,*unaff_x19);
  lVar7 = thunk_FUN_03f9944c(*unaff_x20);
  FUN_057e0400(lVar7,*unaff_x23);
  plVar8 = (long *)CookingGraph_IngredientQueueGenerator__OrderedItems(in_stack_00000000);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar13 = *plVar8;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_0917a598) {
        puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_044370bc;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a598,0);
LAB_044370bc:
  plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
  do {
    in_stack_00000038 = plVar8;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar13 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_09185b10) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_04437158;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_04437158:
    uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    plVar8 = in_stack_00000038;
    if ((uVar15 & 1) == 0) {
      if (in_stack_00000038 == (long *)0x0) {
        return lVar7;
      }
      lVar6 = *in_stack_00000038;
      uVar15 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar15 == 0) goto LAB_04437638;
      piVar16 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar13 = *in_stack_00000038;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_0917ac48) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_044371c4;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(in_stack_00000038,DAT_0917ac48,0);
LAB_044371c4:
    uVar10 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    plVar8 = (long *)CookingGraph_IngredientQueueGenerator__LeavesFor(in_stack_00000000,uVar10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar13 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_0917a848) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_0443723c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a848,0);
LAB_0443723c:
    plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
joined_r0x04437258:
    in_stack_00000030 = plVar8;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar13 = *plVar8;
    uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_09185b10) {
          puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_044372a8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_044372a8:
    uVar15 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    plVar4 = in_stack_00000030;
    if ((uVar15 & 1) != 0) {
      if (in_stack_00000030 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar13 = *in_stack_00000030;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == DAT_0917af58) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_0443730c;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(in_stack_00000030,DAT_0917af58,0);
LAB_0443730c:
      lVar13 = (*(code *)*puVar9)(plVar4,puVar9[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar11 = FUN_04d8cbc0(*(undefined8 *)(lVar13 + 0x10),uVar10,DAT_091dbbe8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar17 = FUN_06fcbf70(lVar6,uVar11,(long)&stack0x00000028 + 4,DAT_0919c100);
      lVar3 = DAT_091ada00;
      uVar12 = auVar17._8_8_;
      iVar1 = in_stack_00000028._4_4_;
      if ((auVar17._0_8_ & 1) == 0) {
        iVar1 = 0;
      }
      if (iVar1 < 1) {
        if (lVar7 == 0) {
LAB_044374b8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(auVar17._0_8_,uVar12,iVar1 + -1);
        }
        lVar14 = *(long *)(lVar7 + 0x10);
        uVar12 = *(undefined8 *)(lVar13 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar14 == 0) goto LAB_044374b8;
        uVar2 = *(uint *)(lVar7 + 0x18);
        if (uVar2 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar14 + (long)(int)uVar2 * 8 + 0x20) = uVar12;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar7,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
        iVar1 = *(int *)(lVar13 + 0x18);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Math__Max(0,iVar1 + -1,0);
        FUN_06fca434(lVar6,uVar11,uVar5,DAT_0919c108);
        plVar8 = in_stack_00000030;
      }
      else {
        FUN_06fca434(lVar6,uVar11,iVar1 + -1,DAT_0919c108);
        plVar8 = in_stack_00000030;
      }
      goto joined_r0x04437258;
    }
    plVar8 = in_stack_00000038;
    if (in_stack_00000030 != (long *)0x0) {
      lVar13 = *in_stack_00000030;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == DAT_09185a58) {
            puVar9 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_04437484;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar9 = (undefined8 *)FUN_03f95da8(in_stack_00000030,DAT_09185a58,0);
LAB_04437484:
      (*(code *)*puVar9)(plVar4,puVar9[1]);
      plVar8 = in_stack_00000038;
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
    if (*(long *)(piVar16 + -2) == DAT_09185a58) {
      puVar9 = (undefined8 *)(lVar6 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_04437654;
    }
  }
LAB_04437638:
  puVar9 = (undefined8 *)FUN_03f95da8(in_stack_00000038,DAT_09185a58,0);
LAB_04437654:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return lVar7;
}

