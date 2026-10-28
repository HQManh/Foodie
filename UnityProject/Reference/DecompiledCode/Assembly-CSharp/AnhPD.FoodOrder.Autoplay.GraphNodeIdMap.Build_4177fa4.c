// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.GraphNodeIdMap$$Build
// address: 0x4177fa4
// body: available
// range: 0x4177fa4-0x41785ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4178284 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41784d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4178570 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4178574 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4178578 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x417857c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4178580 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4178584 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4178588 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x417858c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4178590 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4178594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041785a4) */
/* WARNING: Removing unreachable block (ram,0x0417859c) */

long AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__Build(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_0951660f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f970);
    FUN_03f5c2a4(&DAT_09184e00);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a858);
    FUN_03f5c2a4(&DAT_0917af70);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951660f = 1;
  }
  local_70 = 0;
  local_68 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_09184e00);
  AnhPD_FoodOrder_Autoplay_GraphNodeIdMap___ctor();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    return lVar1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(param_2,0,0);
  if ((uVar2 & 1) != 0) {
    return lVar1;
  }
  if ((param_2 != 0) && (plVar6 = *(long **)(param_2 + 0x20), plVar6 != (long *)0x0)) {
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917a858) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04178100;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a858,0);
LAB_04178100:
    plVar6 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_04178184;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_04178184:
      uVar2 = (*(code *)*puVar3)(plVar6,puVar3[1]);
      if ((uVar2 & 1) == 0) {
        if (plVar6 == (long *)0x0) goto LAB_041782f8;
        lVar4 = *plVar6;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 == 0) goto LAB_041782d0;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_041782b8;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917af70) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_041781e8;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917af70,0);
LAB_041781e8:
      lVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
      if (lVar4 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar4 + 0x10);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar7,0,0);
      if ((uVar2 & 1) == 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (-1 < *(int *)(lVar4 + 0x20)) {
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = AnhPD_FoodOrder_RecipeConfigSO__TryGetSpawnIdOfPiece
                            (param_1,*(int *)(lVar4 + 0x20),&local_68,0);
          if (((uVar2 & 1) != 0) &&
             (uVar2 = System_String__IsNullOrEmpty(local_68,0), (uVar2 & 1) == 0)) {
            if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(lVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_06fd8440(*(long *)(lVar1 + 0x10),local_68,*(undefined8 *)(lVar4 + 0x10),DAT_0919f970
                        );
          }
        }
      }
    } while( true );
  }
  goto LAB_04178588;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_04178508:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0417853c;
    }
  }
LAB_04178520:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_0417853c:
  (*(code *)*puVar3)(plVar6,puVar3[1]);
  return lVar1;
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_041782b8:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_041782ec;
    }
  }
LAB_041782d0:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_041782ec:
  (*(code *)*puVar3)(plVar6,puVar3[1]);
LAB_041782f8:
  plVar6 = *(long **)(param_2 + 0x18);
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917a858) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04178350;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a858,0);
LAB_04178350:
    plVar6 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
    do {
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_041783d4;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_041783d4:
      uVar2 = (*(code *)*puVar3)(plVar6,puVar3[1]);
      if ((uVar2 & 1) == 0) {
        if (plVar6 == (long *)0x0) {
          return lVar1;
        }
        lVar4 = *plVar6;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 == 0) goto LAB_04178520;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_04178508;
      }
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917af70) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_04178438;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917af70,0);
LAB_04178438:
      lVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
      if (lVar4 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar4 + 0x10);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar7,0,0);
      if ((uVar2 & 1) == 0) {
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (-1 < *(int *)(lVar4 + 0x20)) {
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar2 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPiece
                            (param_1,*(int *)(lVar4 + 0x20),&local_70,0);
          if (((uVar2 & 1) != 0) &&
             (uVar2 = System_String__IsNullOrEmpty(local_70,0), (uVar2 & 1) == 0)) {
            if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_06fd8440(*(long *)(lVar1 + 0x18),local_70,*(undefined8 *)(lVar4 + 0x10),DAT_0919f970
                        );
          }
        }
      }
    } while( true );
  }
LAB_04178588:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

