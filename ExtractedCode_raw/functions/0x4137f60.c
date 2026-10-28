// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderStrategy$$BuildIdOffers
// address: 0x4137f60
// body: available
// range: 0x4137f60-0x413830f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413825c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41382f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41382fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4138300 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4138304 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413830c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04138308) */

long AnhPD_FoodOrder_BurgerOrderStrategy__BuildIdOffers(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  long **pplStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_58;
  
  if ((DAT_09516367 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820b0);
    FUN_03f5c2a4(&DAT_0919fc08);
    FUN_03f5c2a4(&DAT_0919fc18);
    FUN_03f5c2a4(&DAT_09176b98);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a2f8);
    FUN_03f5c2a4(&DAT_0917a980);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09189150);
    DAT_09516367 = 1;
  }
  local_58 = (long *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_09176b98);
  FUN_06fd76bc(lVar2,DAT_0919fc08);
  if (((**(long **)(DAT_091881a0 + 0xb8) == 0) ||
      (lVar3 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0xd0), lVar3 == 0)) ||
     (plVar4 = (long *)AnhPD_FoodOrder_RecipeConfigSO__OfferingIngredients(lVar3,0),
     plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = *plVar4;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917a2f8) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_041380bc;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917a2f8,0);
LAB_041380bc:
  plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  pplStack_88 = &local_58;
  local_90 = 0;
  do {
    local_58 = plVar4;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04138158;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_04138158:
    uVar6 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    plVar4 = local_58;
    if ((uVar6 & 1) == 0) {
      if (local_58 == (long *)0x0) {
        return lVar2;
      }
      lVar3 = *local_58;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 == 0) goto LAB_041382a8;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *local_58;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917a980) {
          puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_041381bc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_58,DAT_0917a980,0);
LAB_041381bc:
    (*(code *)*puVar5)(&local_b0,plVar4,puVar5[1]);
    uVar1 = local_b0;
    uStack_78 = uStack_a0;
    local_80 = local_a8;
    local_70 = local_98;
    if (*(int *)(DAT_091820b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_c8 = uStack_78;
    local_d0 = local_80;
    local_c0 = local_70;
    uVar6 = AnhPD_FoodOrder_BurgerOrderStrategy__IsChickenSet(&local_d0);
    plVar4 = local_58;
    if ((uVar6 & 1) == 0) {
      lVar3 = thunk_FUN_03f9944c(DAT_09189150);
      AnhPD_FoodOrder_PieceOffer___ctor(lVar3,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined1 *)(lVar3 + 0x28) = 1;
      *(undefined4 *)(lVar3 + 0x2c) = 1;
      *(undefined8 *)(lVar3 + 0x18) = uStack_78;
      *(undefined8 *)(lVar3 + 0x10) = local_80;
      *(undefined8 *)(lVar3 + 0x20) = local_70;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06fd8440(lVar2,uVar1,lVar3,DAT_0919fc18);
      plVar4 = local_58;
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_041382c4;
    }
  }
LAB_041382a8:
  puVar5 = (undefined8 *)FUN_03f95da8(local_58,DAT_09185a58,0);
LAB_041382c4:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return lVar2;
}

