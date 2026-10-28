// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$AutoComplete
// address: 0x444e7a4
// body: available
// range: 0x444e7a4-0x444ecdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444ec1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444ecc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444ecc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444ecc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444eccc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444ecd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444ecd8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0444ecd4) */

undefined8 CookingGraph_CookingLevelSimulation__AutoComplete(long param_1,uint param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_09518015 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca0b0);
    FUN_03f5c2a4(&DAT_091cac88);
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_091793a0);
    FUN_03f5c2a4(&DAT_091793a8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a828);
    FUN_03f5c2a4(&DAT_0917af28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091e74f8);
    FUN_03f5c2a4(&DAT_091e7500);
    FUN_03f5c2a4(&DAT_091e7508);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518015 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x98);
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar8 = puVar2[0x36];
  if (lVar8 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar9 = *puVar2;
    lVar8 = thunk_FUN_03f9944c(DAT_09179390);
    FUN_05322d94(lVar8,uVar9,DAT_091e74f8,0);
    lVar3 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar3 + 0x1b0) = lVar8;
    thunk_FUN_03f5d7b8(lVar3 + 0x1b0,lVar8);
  }
  uVar6 = FUN_04b0cafc(uVar6,lVar8,DAT_091cb610);
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918f298);
  }
  puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar8 = puVar2[0x37];
  if (lVar8 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
      puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar9 = *puVar2;
    lVar8 = thunk_FUN_03f9944c(DAT_091793a0);
    FUN_05323790(lVar8,uVar9,DAT_091e7500,0);
    lVar3 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar3 + 0x1b8) = lVar8;
    thunk_FUN_03f5d7b8(lVar3 + 0x1b8,lVar8);
  }
  uVar6 = FUN_04aeaae4(uVar6,lVar8,DAT_091ca0b0);
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918f298);
  }
  puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar8 = puVar2[0x38];
  if (lVar8 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
      puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar9 = *puVar2;
    lVar8 = thunk_FUN_03f9944c(DAT_091793a8);
    FUN_053239c8(lVar8,uVar9,DAT_091e7508,0);
    lVar3 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar3 + 0x1c0) = lVar8;
    thunk_FUN_03f5d7b8(lVar3 + 0x1c0,lVar8);
  }
  plVar1 = (long *)FUN_04b038e4(uVar6,lVar8,DAT_091cac88);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *plVar1;
  uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_0917a828) {
        puVar2 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_0444eabc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917a828,0);
LAB_0444eabc:
  plVar1 = (long *)(*(code *)*puVar2)(plVar1,puVar2[1]);
  do {
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0444eb38;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185b10,0);
LAB_0444eb38:
    uVar4 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
LAB_0444ec28:
      if (plVar1 == (long *)0x0) {
        return uVar6;
      }
      lVar8 = *plVar1;
      uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar4 == 0) goto LAB_0444ec6c;
      piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar1;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917af28) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0444eb9c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_0917af28,0);
LAB_0444eb9c:
    lVar8 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(lVar8 + 0x50);
    if (lVar3 == 0) {
LAB_0444ecc0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar7 = 0;
    while (iVar7 < *(int *)(lVar3 + 0x18)) {
      lVar3 = CookingGraph_CookingLevelSimulation__Assembly(param_1,lVar8,iVar7);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = CookingGraph_Execution_CookingAssemblySnapshot__get_Complete(lVar3,0);
      if (((uVar4 & 1) == 0) &&
         (uVar4 = CookingGraph_CookingLevelSimulation__AutoCompleteDish
                            (param_1,lVar8,iVar7,param_2 & 1,0), (uVar4 & 1) != 0)) {
        uVar6 = 1;
        goto LAB_0444ec28;
      }
      lVar3 = *(long *)(lVar8 + 0x50);
      iVar7 = iVar7 + 1;
      if (lVar3 == 0) goto LAB_0444ecc0;
    }
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar8 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0444ec88;
    }
  }
LAB_0444ec6c:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185a58,0);
LAB_0444ec88:
  (*(code *)*puVar2)(plVar1,puVar2[1]);
  return uVar6;
}

