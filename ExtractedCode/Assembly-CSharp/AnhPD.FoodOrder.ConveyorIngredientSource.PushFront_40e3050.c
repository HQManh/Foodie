// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorIngredientSource$$PushFront
// address: 0x40e3050
// body: available
// range: 0x40e3050-0x40e347f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e33c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e3470 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e3474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e347c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040e3444) */
/* WARNING: Removing unreachable block (ram,0x040e3478) */

void AnhPD_FoodOrder_ConveyorIngredientSource__PushFront(undefined8 param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  
  if ((DAT_09516071 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b3d8);
    FUN_03f5c2a4(&DAT_09186c48);
    FUN_03f5c2a4(&DAT_091abd90);
    FUN_03f5c2a4(&DAT_091abd88);
    FUN_03f5c2a4(&DAT_0917bee0);
    DAT_09516071 = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar8 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == DAT_0917b3d8) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_040e314c;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b3d8,0);
LAB_040e314c:
  iVar2 = (*(code *)*puVar4)(param_2,puVar4[1]);
  if (iVar2 == 0) {
    return;
  }
  lVar8 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == DAT_0917b3d8) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_040e31a8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b3d8,0);
LAB_040e31a8:
  uVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
  lVar8 = thunk_FUN_03f9944c(DAT_0917bee0);
  FUN_057e0478(lVar8,uVar3,DAT_091abd88);
  lVar9 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == DAT_0917a768) {
        puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_040e3238;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a768,0);
LAB_040e3238:
  plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_040e32c4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_040e32c4:
    uVar11 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar5 == (long *)0x0) goto LAB_040e3438;
      lVar9 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_040e3410;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917ae48) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_040e3328;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917ae48,0);
LAB_040e3328:
    uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    uVar7 = thunk_FUN_03f9944c(DAT_09186c48);
    AnhPD_FoodOrder_IngredientState___ctor(uVar7,uVar6,1,0);
    uVar6 = AnhPD_FoodOrder_ConveyorIngredientSource__SingleBundle(uVar7);
    lVar9 = DAT_091abd90;
    if (lVar8 == 0) {
LAB_040e3470:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = *(long *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_040e3470;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
      thunk_FUN_03f5d7b8();
    }
    else {
      FUN_057e0c68(lVar8,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_040e342c;
    }
  }
LAB_040e3410:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_040e342c:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_040e3438:
  AnhPD_FoodOrder_ConveyorIngredientSource__PushFrontBundles(param_1,lVar8);
  return;
}

