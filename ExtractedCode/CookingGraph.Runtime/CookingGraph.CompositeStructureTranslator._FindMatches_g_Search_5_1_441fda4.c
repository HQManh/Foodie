// rea decompile_all
// name: CookingGraph.CompositeStructureTranslator$$<FindMatches>g__Search|5_1
// address: 0x441fda4
// body: available
// range: 0x441fda4-0x44203d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442030c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44203d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CompositeStructureTranslator__<FindMatches>g__Search_5_1
               (uint param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  
  if ((DAT_09517f3d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a0f8);
    FUN_03f5c2a4(&DAT_0917b358);
    FUN_03f5c2a4(&DAT_0917b4f0);
    FUN_03f5c2a4(&DAT_0917b5d8);
    FUN_03f5c2a4(&DAT_091ada20);
    FUN_03f5c2a4(&DAT_091b2298);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091b22a0);
    FUN_03f5c2a4(&DAT_091add20);
    DAT_09517f3d = 1;
  }
  plVar13 = (long *)*param_2;
  if (plVar13 != (long *)0x0) {
    lVar7 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917a0f8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0441fea0;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917a0f8,0);
LAB_0441fea0:
    iVar1 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    if (*(int *)(param_2 + 1) <= iVar1) {
      return;
    }
    plVar13 = (long *)param_2[2];
    if (plVar13 != (long *)0x0) {
      lVar7 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917b358) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0441ff14;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b358,0);
LAB_0441ff14:
      uVar2 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      if (uVar2 == param_1) {
        uVar10 = CookingGraph_CompositeStructureTranslator__ValidSelection
                           (param_2[3],param_2[4],param_2[5],param_2[6]);
        if (((uVar10 & 1) == 0) ||
           (lVar7 = CookingGraph_CompositeStructureTranslator__BuildStructure
                              (param_2[7],param_2[3],*(undefined4 *)(param_2 + 8),param_2[2],
                               param_2[4],param_2[5]), lVar7 == 0)) {
          return;
        }
        uVar6 = CookingGraph_CompositeStructureTranslator__Signature();
        plVar13 = (long *)param_2[9];
        if (plVar13 != (long *)0x0) {
          lVar8 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_0917b5d8) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_0442031c;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b5d8,0);
LAB_0442031c:
          uVar10 = (*(code *)*puVar5)(plVar13,uVar6,puVar5[1]);
          if ((uVar10 & 1) == 0) {
            return;
          }
          plVar13 = (long *)*param_2;
          if (plVar13 != (long *)0x0) {
            lVar8 = *plVar13;
            uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_0917a0f8) {
                  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
                  goto LAB_044203ac;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917a0f8,2);
LAB_044203ac:
                    /* WARNING: Could not recover jumptable at 0x044203d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)*puVar5)(plVar13,lVar7,puVar5[1]);
            return;
          }
        }
      }
      else {
        plVar13 = (long *)param_2[2];
        if (plVar13 != (long *)0x0) {
          lVar7 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_0917b4f0) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_04420008;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b4f0,0);
LAB_04420008:
          uVar6 = (*(code *)*puVar5)(plVar13,param_1,puVar5[1]);
          lVar7 = param_2[4];
          if (lVar7 != 0) {
            uVar10 = 0;
            do {
              if ((long)*(int *)(lVar7 + 0x18) <= (long)uVar10) {
                return;
              }
              lVar7 = FUN_057e0998(lVar7,uVar10 & 0xffffffff,DAT_091b22a0);
              if ((lVar7 == 0) || (*(long *)(lVar7 + 0x20) == 0)) break;
              uVar2 = FUN_057e1a08(*(long *)(lVar7 + 0x20),uVar6,DAT_091ada20);
              if (-1 < (int)uVar2) {
                lVar8 = param_2[6];
                if (lVar8 == 0) break;
                if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_044203d4;
                plVar13 = (long *)param_2[2];
                if (plVar13 == (long *)0x0) break;
                lVar9 = *plVar13;
                iVar1 = *(int *)(lVar8 + uVar10 * 4 + 0x20);
                uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == DAT_0917b358) {
                      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                      goto LAB_044200f4;
                    }
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b358,0);
LAB_044200f4:
                uVar3 = (*(code *)*puVar5)(plVar13,puVar5[1]);
                iVar4 = CookingGraph_CompositeStructureTranslator__Capacity(lVar7,uVar3);
                if (iVar1 < iVar4) {
                  lVar7 = *(long *)(lVar7 + 0x28);
                  if (lVar7 == 0) break;
                  if (((int)uVar2 < *(int *)(lVar7 + 0x18)) &&
                     (iVar1 = FUN_05796eb0(lVar7,uVar2,DAT_091add20), 0 < iVar1)) {
                    lVar7 = param_2[10];
                    if (lVar7 == 0) break;
                    if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_044203d4;
                    lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
                    if (lVar7 == 0) break;
                    if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_044203d4;
                    if (iVar1 <= *(int *)(lVar7 + (ulong)uVar2 * 4 + 0x20)) goto LAB_04420300;
                  }
                  lVar7 = param_2[5];
                  if (lVar7 == 0) break;
                  if (*(uint *)(lVar7 + 0x18) <= param_1) {
LAB_044203d4:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  lVar8 = param_2[6];
                  *(int *)(lVar7 + (long)(int)param_1 * 4 + 0x20) = (int)uVar10;
                  if (lVar8 == 0) break;
                  if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_044203d4;
                  lVar8 = lVar8 + uVar10 * 4;
                  lVar7 = param_2[10];
                  *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + 1;
                  if (lVar7 == 0) break;
                  if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_044203d4;
                  lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
                  if (lVar7 == 0) break;
                  if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_044203d4;
                  lVar7 = lVar7 + (ulong)uVar2 * 4;
                  *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + 1;
                  CookingGraph_CompositeStructureTranslator__<FindMatches>g__Search_5_1
                            (param_1 + 1,param_2);
                  lVar7 = param_2[10];
                  if (lVar7 == 0) break;
                  if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_044203d4;
                  lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
                  if (lVar7 == 0) break;
                  if (*(uint *)(lVar7 + 0x18) <= uVar2) goto LAB_044203d4;
                  lVar7 = lVar7 + (ulong)uVar2 * 4;
                  lVar8 = param_2[6];
                  *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + -1;
                  if (lVar8 == 0) break;
                  if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_044203d4;
                  lVar8 = lVar8 + uVar10 * 4;
                  lVar7 = param_2[5];
                  *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + -1;
                  if (lVar7 == 0) break;
                  if (*(uint *)(lVar7 + 0x18) <= param_1) goto LAB_044203d4;
                  plVar13 = (long *)*param_2;
                  *(undefined4 *)(lVar7 + (long)(int)param_1 * 4 + 0x20) = 0xffffffff;
                  if (plVar13 == (long *)0x0) break;
                  lVar7 = *plVar13;
                  uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar11 != 0) {
                    piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar12 + -2) == DAT_0917a0f8) {
                        puVar5 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                        goto LAB_044202e8;
                      }
                      uVar11 = uVar11 - 1;
                      piVar12 = piVar12 + 4;
                    } while (uVar11 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917a0f8,0);
LAB_044202e8:
                  iVar1 = (*(code *)*puVar5)(plVar13,puVar5[1]);
                  if (*(int *)(param_2 + 1) <= iVar1) {
                    return;
                  }
                }
              }
LAB_04420300:
              lVar7 = param_2[4];
              uVar10 = uVar10 + 1;
            } while (lVar7 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

