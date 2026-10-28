// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$UnfilledDemand
// address: 0x444cce8
// body: available
// range: 0x444cce8-0x444d253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444d188 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d228 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d22c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d234 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d238 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d23c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d240 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d244 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d248 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444d250 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0444d24c) */

long CookingGraph_CookingLevelSimulation__UnfilledDemand(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  long *plVar14;
  
  if ((DAT_0951800d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a828);
    FUN_03f5c2a4(&DAT_0917af28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_0917b498);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_091e7a00);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_0951800d = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09179e18);
  FUN_053d6e00(lVar2,DAT_091a8298);
  uVar9 = *(undefined8 *)(param_1 + 0x98);
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar10 = puVar4[0x28];
  if (lVar10 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar12 = *puVar4;
    lVar10 = thunk_FUN_03f9944c(DAT_09179390);
    FUN_05322d94(lVar10,uVar12,DAT_091e7a00,0);
    lVar5 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar5 + 0x140) = lVar10;
    thunk_FUN_03f5d7b8(lVar5 + 0x140,lVar10);
  }
  plVar3 = (long *)FUN_04b0cafc(uVar9,lVar10,DAT_091cb610);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar10 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_0917a828) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0444cee4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a828,0);
LAB_0444cee4:
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0444cf18:
  lVar10 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_09185b10) {
        puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_0444cf70;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_0444cf70:
  uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  if ((uVar7 & 1) != 0) {
    lVar10 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917af28) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0444cfd8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917af28,0);
LAB_0444cfd8:
    lVar10 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(lVar10 + 0x50);
    if (lVar5 == 0) {
LAB_0444d188:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar11 = 0;
LAB_0444cff8:
    if (iVar11 < *(int *)(lVar5 + 0x18)) {
      lVar5 = CookingGraph_CookingLevelSimulation__Assembly(param_1,lVar10,iVar11);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar14 = *(long **)(lVar5 + 0x28);
      if (plVar14 == (long *)0x0) {
LAB_0444d228:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar13 = 0;
      do {
        lVar6 = *plVar14;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b310) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0444d074;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b310,0);
LAB_0444d074:
        iVar1 = (*(code *)*puVar4)(plVar14,puVar4[1]);
        if (iVar1 <= iVar13) goto LAB_0444d17c;
        plVar14 = *(long **)(lVar5 + 0x30);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = *plVar14;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b498) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0444d0dc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b498,0);
LAB_0444d0dc:
        uVar7 = (*(code *)*puVar4)(plVar14,iVar13,puVar4[1]);
        if ((uVar7 & 1) == 0) {
          plVar14 = *(long **)(lVar5 + 0x28);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *plVar14;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_0917b4b0) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_0444d144;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar14,DAT_0917b4b0,0);
LAB_0444d144:
          lVar6 = (*(code *)*puVar4)(plVar14,iVar13,puVar4[1]);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_053d8048(lVar2,*(undefined4 *)(lVar6 + 0x10),DAT_091a82b0);
        }
        plVar14 = *(long **)(lVar5 + 0x28);
        iVar13 = iVar13 + 1;
        if (plVar14 == (long *)0x0) goto LAB_0444d228;
      } while( true );
    }
    goto LAB_0444cf18;
  }
  if (plVar3 != (long *)0x0) {
    lVar10 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185a58) {
          puVar4 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0444d1f4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_0444d1f4:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return lVar2;
LAB_0444d17c:
  lVar5 = *(long *)(lVar10 + 0x50);
  iVar11 = iVar11 + 1;
  if (lVar5 == 0) goto LAB_0444d188;
  goto LAB_0444cff8;
}

