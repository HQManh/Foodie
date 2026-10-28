// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$CollectTakableForFx
// address: 0x40f97fc
// body: available
// range: 0x40f97fc-0x40f9bf3 inclusive
// range: 0x40f9bf8-0x40f9c7b inclusive
// range: 0x40f9c80-0x40f9c83 inclusive
// range: 0x40f9cbc-0x40f9cdb inclusive
// range: 0x40f9d44-0x40f9ddb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f9bf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f9c78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f9c80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f9cbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f9cc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f9cc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f9cc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f9cd0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f9cd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f9cd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40f9dd8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040f9ccc) */
/* WARNING: Removing unreachable block (ram,0x040f9dd8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void AnhPD_FoodOrder_IngredientSpawnerController__CollectTakableForFx
               (long param_1,long param_2,byte param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  
  if ((DAT_09516121 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917a5a0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_0917ac50);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091adae8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516121 = 1;
  }
  if ((*(long *)(param_1 + 0x1a0) == 0) ||
     (plVar8 = *(long **)(*(long *)(param_1 + 0x1a0) + 0x20), plVar8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917a3f0) {
        puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_040f9900;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a3f0,0);
LAB_040f9900:
  plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_040f99a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_040f99a0:
    uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_040f9d88;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917aa98) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_040f9a04;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917aa98,0);
LAB_040f9a04:
    lVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar6 = UnityEngine_Object__op_Implicit(lVar4,0);
    if ((uVar6 & 1) != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(char *)(lVar4 + 0x1ac) == '\0') && (((0 < *(int *)(lVar4 + 0x9c) ^ param_3) & 1) == 0))
      {
        plVar9 = *(long **)(lVar4 + 0x90);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917a5a0) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_040f9ab0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a5a0,0);
LAB_040f9ab0:
        plVar9 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
joined_r0x040f9ac8:
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_09185b10) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_040f9b18;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_040f9b18:
        uVar6 = (*(code *)*puVar2)(plVar9,puVar2[1]);
        if ((uVar6 & 1) != 0) {
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917ac50) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_040f9b7c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917ac50,0);
LAB_040f9b7c:
          lVar3 = (*(code *)*puVar2)(plVar9,puVar2[1]);
          lVar4 = DAT_091adae8;
          if (lVar3 != 0) {
            if (param_2 != 0) {
              lVar5 = *(long *)(param_2 + 0x10);
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
              if (lVar5 != 0) {
                uVar1 = *(uint *)(param_2 + 0x18);
                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                  *(uint *)(param_2 + 0x18) = uVar1 + 1;
                  *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar3;
                  thunk_FUN_03f5d7b8();
                }
                else {
                  FUN_057e0c68(param_2,lVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                goto joined_r0x040f9ac8;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto joined_r0x040f9ac8;
        }
        if (plVar9 != (long *)0x0) {
          lVar4 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185a58) {
                puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_040f9c5c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a58,0);
LAB_040f9c5c:
          (*(code *)*puVar2)(plVar9,puVar2[1]);
        }
      }
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_040f9da4;
    }
  }
LAB_040f9d88:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_040f9da4:
  (*(code *)*puVar2)(plVar8,puVar2[1]);
  return;
}

