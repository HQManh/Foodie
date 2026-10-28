// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$CountBeltServings
// address: 0x40f5830
// body: available
// range: 0x40f5830-0x40f5a77 inclusive
// range: 0x40f5a9c-0x40f5d2b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f5c60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f5cf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f5cfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f5d00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f5d08 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f5d0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f5d10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f5d14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f5d18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f5d20 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f5d28 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040f5d24) */
/* WARNING: Removing unreachable block (ram,0x040f5d1c) */
/* WARNING: Removing unreachable block (ram,0x040f5a74) */

void AnhPD_FoodOrder_IngredientSpawnerController__CountBeltServings(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 local_c0;
  long **pplStack_b8;
  long local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_09516112 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a26c0);
    FUN_03f5c2a4(&DAT_091a2708);
    FUN_03f5c2a4(&DAT_091a26c8);
    FUN_03f5c2a4(&DAT_091a2710);
    FUN_03f5c2a4(&DAT_091a26d0);
    FUN_03f5c2a4(&DAT_091a2718);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09186c40);
    FUN_03f5c2a4(&DAT_091abda0);
    FUN_03f5c2a4(&DAT_091abe28);
    FUN_03f5c2a4(&DAT_091abdb8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516112 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_a8 = (long *)0x0;
  if (*(long *)(param_1 + 0x198) != 0) {
    FUN_057e185c(&local_c0,*(long *)(param_1 + 0x198),DAT_091abe28);
    local_70 = local_b0;
    puStack_78 = pplStack_b8;
    local_80 = local_c0;
    while (uVar2 = FUN_071bd28c(&local_80,DAT_091a2710), lVar3 = local_70, (uVar2 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x218);
      if (lVar5 == 0) {
LAB_040f5cf8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
      if (lVar3 == 0) goto LAB_040f5cf8;
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      AnhPD_FoodOrder_ConveyorIngredientSource__AppendPendingBundles
                (lVar3,*(undefined8 *)(param_1 + 0x218),0);
      if (*(long *)(param_1 + 0x218) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_c0,*(long *)(param_1 + 0x218),DAT_091abdb8);
      local_a0 = local_c0;
      local_c0 = 0;
      puStack_98 = pplStack_b8;
      local_90 = local_b0;
      pplStack_b8 = (long **)&local_a0;
      while (uVar2 = FUN_071bd28c(&local_a0,DAT_091a26c8), (uVar2 & 1) != 0) {
        if ((local_90 != 0) && (lVar3 = *(long *)(local_90 + 0x10), lVar3 != 0)) {
          if (*(int *)(DAT_09186c40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          AnhPD_FoodOrder_IngredientSpawnerController__AddServings(lVar3,param_2);
        }
      }
      FUN_071bd288(&local_a0,DAT_091a26c0);
    }
    FUN_071bd288(&local_80,DAT_091a2708);
    if (*(long *)(param_1 + 0x1a0) == 0) {
      return;
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x1a0) + 0x20);
    if (plVar7 != (long *)0x0) {
      lVar3 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917a3f0) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_040f5b0c;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a3f0,0);
LAB_040f5b0c:
      plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
      pplStack_b8 = &local_a8;
      local_c0 = 0;
      do {
        local_a8 = plVar7;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar7;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185b10) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_040f5b90;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_040f5b90:
        uVar2 = (*(code *)*puVar4)(plVar7,puVar4[1]);
        plVar7 = local_a8;
        if ((uVar2 & 1) == 0) {
          if (local_a8 == (long *)0x0) {
            return;
          }
          lVar3 = *local_a8;
          uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar2 == 0) goto LAB_040f5cac;
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_040f5c94;
        }
        if (local_a8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *local_a8;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_0917aa98) {
              puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_040f5bf4;
            }
            uVar2 = uVar2 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar2 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_a8,DAT_0917aa98,0);
LAB_040f5bf4:
        lVar3 = (*(code *)*puVar4)(plVar7,puVar4[1]);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
        plVar7 = local_a8;
        if ((uVar2 & 1) != 0) {
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(char *)(lVar3 + 0x1ac) == '\0') {
            uVar8 = *(undefined8 *)(lVar3 + 0x90);
            if (*(int *)(DAT_09186c40 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_IngredientSpawnerController__AddServings(uVar8,param_2);
            plVar7 = local_a8;
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
LAB_040f5c94:
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_040f5cc8;
    }
  }
LAB_040f5cac:
  puVar4 = (undefined8 *)FUN_03f95da8(local_a8,DAT_09185a58,0);
LAB_040f5cc8:
  (*(code *)*puVar4)(plVar7,puVar4[1]);
  return;
}

