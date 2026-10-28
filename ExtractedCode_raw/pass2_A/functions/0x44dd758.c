// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingPieceCompositeView$$CountPieces
// address: 0x44dd758
// body: available
// range: 0x44dd758-0x44dda9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44dda78 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44dda7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44dda80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44dda84 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44dda88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44dda8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44dda90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44dda94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44dda9c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044dda98) */

long CookOrder_Cooking_Implement_CookingPieceCompositeView__CountPieces(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  
  if ((DAT_0951833d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a598);
    FUN_03f5c2a4(&DAT_0917ac48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951833d = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091801b8,0x20);
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_0917a598) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_044dd844;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a598,0);
LAB_044dd844:
  plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_044dd8b8;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_044dd8b8:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return lVar1;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_044dda2c;
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917ac48) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_044dd91c;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ac48,0);
LAB_044dd91c:
    uVar4 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    lVar5 = *(long *)(param_1 + 0x40);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar6) {
      uVar12 = 0;
      do {
        if (uVar6 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar13 = *(long *)(lVar5 + (long)(int)uVar12 * 8 + 0x20);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar11 = *(undefined8 *)(lVar13 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Equality(uVar11,uVar4,0);
        if ((uVar7 & 1) != 0) {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar6 = (uint)*(ulong *)(lVar13 + 0x18);
          if (0 < (int)uVar6) {
            uVar7 = (ulong)(uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
            uVar8 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
            puVar9 = (uint *)(lVar13 + 0x20);
            do {
              if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              uVar6 = *puVar9;
              if (-1 < (int)uVar6) {
                if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if ((int)uVar6 < *(int *)(lVar1 + 0x18)) {
                  *(int *)(lVar1 + 0x20 + (ulong)uVar6 * 4) =
                       *(int *)(lVar1 + 0x20 + (ulong)uVar6 * 4) + 1;
                }
              }
              uVar7 = uVar7 - 1;
              puVar9 = puVar9 + 1;
              uVar8 = uVar8 - 1;
            } while (uVar7 != 0);
          }
        }
        uVar6 = *(uint *)(lVar5 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < (int)uVar6);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar10 = piVar10 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_044dda48;
    }
  }
LAB_044dda2c:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_044dda48:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
  return lVar1;
}

