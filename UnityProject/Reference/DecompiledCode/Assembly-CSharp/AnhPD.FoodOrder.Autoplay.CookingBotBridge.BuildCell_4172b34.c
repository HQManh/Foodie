// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$BuildCell
// address: 0x4172b34
// body: available
// range: 0x4172b34-0x4172f2f inclusive
// range: 0x4172f90-0x41730b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4172f14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4172f18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4172f20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4172f24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4172f28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4172f2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41730b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41730b4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041730b4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long AnhPD_FoodOrder_Autoplay_CookingBotBridge__BuildCell(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  
  if ((DAT_095165de & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181ec0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4a8);
    FUN_03f5c2a4(&DAT_0917ab58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ada00);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095165de = 1;
  }
  if (param_2 == 0) goto LAB_041730b0;
  uVar3 = AnhPD_FoodOrder_IngCell__get_IsEmpty(param_2,0);
  if ((uVar3 & 1) == 0) {
    uVar3 = AnhPD_FoodOrder_IngCell__get_HasDirtyPlate(param_2,0);
    lVar4 = thunk_FUN_03f9944c(DAT_09181ec0);
    CookingGraph_BotGridCellState___ctor(lVar4,0);
    if ((uVar3 & 1) == 0) {
      if (lVar4 != 0) {
        plVar11 = *(long **)(param_2 + 0x30);
        *(undefined1 *)(lVar4 + 0x14) = 0;
        if (plVar11 != (long *)0x0) {
          lVar7 = *plVar11;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_0917a4a8) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_04172cf0;
              }
              uVar3 = uVar3 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a4a8,0);
LAB_04172cf0:
          plVar11 = (long *)(*(code *)*puVar5)(plVar11,puVar5[1]);
          if (plVar11 != (long *)0x0) {
            lVar7 = 0;
            do {
              lVar8 = *plVar11;
              uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar3 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                    puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_04172d80;
                  }
                  uVar3 = uVar3 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar3 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_04172d80:
              uVar3 = (*(code *)*puVar5)(plVar11,puVar5[1]);
              if ((uVar3 & 1) == 0) {
                if (plVar11 == (long *)0x0) goto LAB_04172ffc;
                lVar8 = *plVar11;
                uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar3 == 0) goto LAB_04172fd4;
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                goto LAB_04172fbc;
              }
              if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *plVar11;
              uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar3 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_0917ab58) {
                    puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_04172de4;
                  }
                  uVar3 = uVar3 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar3 != 0);
              }
              puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917ab58,0);
LAB_04172de4:
              lVar8 = (*(code *)*puVar5)(plVar11,puVar5[1]);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = UnityEngine_Object__op_Implicit(lVar8,0);
              lVar12 = lVar7;
              if ((uVar3 & 1) != 0) {
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(char *)(lVar8 + 0x92) == '\0') {
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar3 = UnityEngine_Object__op_Equality(lVar7,0,0);
                  lVar12 = lVar8;
                  if ((uVar3 & 1) == 0) {
                    lVar12 = lVar7;
                  }
                  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar6 = AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__NodeOf
                                    (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar8 + 0x78),0);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
                  lVar7 = DAT_091ada00;
                  if ((uVar3 & 1) == 0) {
                    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__ReportUnmapped
                              (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar8 + 0x78),0);
                  }
                  else {
                    lVar8 = *(long *)(lVar4 + 0x20);
                    if (lVar8 == 0) {
LAB_04172f24:
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar9 = *(long *)(lVar8 + 0x10);
                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                    if (lVar9 == 0) goto LAB_04172f24;
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                      puVar5 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar5 = uVar6;
                      thunk_FUN_03f5d7b8(puVar5,uVar6);
                    }
                    else {
                      FUN_057e0c68(lVar8,uVar6,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                  }
                }
              }
              lVar7 = lVar12;
            } while (plVar11 != (long *)0x0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
    else if (lVar4 != 0) {
      *(undefined4 *)(lVar4 + 0x10) = 3;
      *(undefined1 *)(lVar4 + 0x14) = 0;
      uVar2 = AnhPD_FoodOrder_IngCell__get_OccupiedCount(param_2,0);
      *(undefined4 *)(lVar4 + 0x2c) = uVar2;
      return lVar4;
    }
    goto LAB_041730b0;
  }
  goto LAB_04172bf0;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar10 = piVar10 + 4;
    if (uVar3 == 0) break;
LAB_04172fbc:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_04172ff0;
    }
  }
LAB_04172fd4:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185a58,0);
LAB_04172ff0:
  (*(code *)*puVar5)(plVar11,puVar5[1]);
LAB_04172ffc:
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(lVar7,0,0);
  if ((uVar3 & 1) == 0) {
    if ((lVar7 != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      uVar13 = *(undefined8 *)(lVar7 + 0x78);
      uVar6 = AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__NodeOf(*(long *)(param_1 + 0x20),uVar13,0);
      *(undefined8 *)(lVar4 + 0x18) = uVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x18),uVar6);
      lVar7 = *(long *)(param_1 + 0x20);
      uVar2 = 1;
      *(undefined4 *)(lVar4 + 0x28) = 1;
      if (lVar7 != 0) {
        uVar3 = AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__IsServableId(lVar7,uVar13,0);
        if ((uVar3 & 1) != 0) {
          uVar2 = 2;
        }
        *(undefined4 *)(lVar4 + 0x10) = uVar2;
        if (*(long *)(lVar4 + 0x20) != 0) {
          if (*(int *)(*(long *)(lVar4 + 0x20) + 0x18) < 2) {
            return lVar4;
          }
          *(undefined4 *)(lVar4 + 0x10) = 4;
          return lVar4;
        }
      }
    }
    goto LAB_041730b0;
  }
LAB_04172bf0:
  lVar4 = thunk_FUN_03f9944c(DAT_09181ec0);
  CookingGraph_BotGridCellState___ctor(lVar4,0);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x10) = 0;
    *(undefined1 *)(lVar4 + 0x14) = 1;
    return lVar4;
  }
LAB_041730b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

