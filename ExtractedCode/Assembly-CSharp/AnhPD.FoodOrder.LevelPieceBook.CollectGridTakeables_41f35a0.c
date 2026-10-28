// rea decompile_all
// name: AnhPD.FoodOrder.LevelPieceBook$$CollectGridTakeables
// address: 0x41f35a0
// body: available
// range: 0x41f35a0-0x41f3977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f38cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f395c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f3960 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f3964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f3968 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f3970 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f3974 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041f396c) */

void AnhPD_FoodOrder_LevelPieceBook__CollectGridTakeables(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  
  if ((DAT_09516b86 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a4a8);
    FUN_03f5c2a4(&DAT_0917ab58);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ac690);
    FUN_03f5c2a4(&DAT_091ac6a0);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b86 = 1;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(param_2 + 0x10),0,iVar1,0);
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      return;
    }
    lVar11 = **(long **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(lVar11,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (((*(long *)(param_1 + 0x10) != 0) &&
        (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x40), lVar5 != 0)) &&
       (plVar6 = (long *)AnhPD_FoodOrder_AreaService__GetGridItems(lVar5,0), plVar6 != (long *)0x0))
    {
      lVar5 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917a4a8) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_041f3714;
          }
          uVar4 = uVar4 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar4 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a4a8,0);
LAB_041f3714:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      do {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_09185b10) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_041f3798;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_041f3798:
        uVar4 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar4 & 1) == 0) {
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar11 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar4 == 0) goto LAB_041f3918;
          piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_041f3900;
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917ab58) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_041f37fc;
            }
            uVar4 = uVar4 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar4 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917ab58,0);
LAB_041f37fc:
        lVar5 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(lVar5,0);
        if ((uVar4 & 1) != 0) {
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar4 = AnhPD_FoodOrder_DragItem__get_IsLandedInCell(lVar5,0);
          if ((((uVar4 & 1) != 0) && (*(char *)(lVar5 + 0x92) == '\0')) &&
             (*(char *)(lVar5 + 0xe9) == '\0')) {
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = AnhPD_FoodOrder_MessyController__IsBookedByShelf(lVar11,lVar5,0);
            lVar3 = DAT_091ac690;
            if ((uVar4 & 1) == 0) {
              lVar9 = *(long *)(param_2 + 0x10);
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar2 = *(uint *)(param_2 + 0x18);
              if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(param_2 + 0x18) = uVar2 + 1;
                plVar8 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
                *plVar8 = lVar5;
                thunk_FUN_03f5d7b8(plVar8,lVar5);
              }
              else {
                FUN_057e0c68(param_2,lVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar10 = piVar10 + 4;
    if (uVar4 == 0) break;
LAB_041f3900:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_041f3934;
    }
  }
LAB_041f3918:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_041f3934:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}

