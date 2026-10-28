// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$FitPlate
// address: 0x4448b44
// body: available
// range: 0x4448b44-0x44490ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44490c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44490ec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CookingLevelSimulation__FitPlate(long param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  
  if ((DAT_09517ff9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_091c9298);
    FUN_03f5c2a4(&DAT_091c98c8);
    FUN_03f5c2a4(&DAT_091c9a68);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_0917b498);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_091e7d98);
    FUN_03f5c2a4(&DAT_0918f510);
    FUN_03f5c2a4(&DAT_091e7da0);
    FUN_03f5c2a4(&DAT_0918f518);
    DAT_09517ff9 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0918f510);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass28_0___ctor(lVar4,0);
  if (lVar4 != 0) {
    plVar15 = (long *)(lVar4 + 0x18);
    *plVar15 = param_2;
    thunk_FUN_03f5d7b8(plVar15,param_2);
    if ((*plVar15 != 0) && (plVar13 = *(long **)(*plVar15 + 0x28), plVar13 != (long *)0x0)) {
      lVar8 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917b310) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_04448cb8;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar13,DAT_0917b310,0);
LAB_04448cb8:
      uVar1 = (*(code *)*puVar5)(plVar13,puVar5[1]);
      lVar8 = FUN_03f5c394(DAT_0917fc40,uVar1);
      plVar13 = (long *)(lVar4 + 0x10);
      *plVar13 = lVar8;
      thunk_FUN_03f5d7b8(plVar13,lVar8);
      if ((param_1 != 0) && (plVar16 = *(long **)(param_1 + 0x28), plVar16 != (long *)0x0)) {
        iVar14 = 0;
        do {
          lVar8 = *plVar16;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_0917b310) {
                puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_04448d58;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917b310,0);
LAB_04448d58:
          iVar2 = (*(code *)*puVar5)(plVar16,puVar5[1]);
          if (iVar2 <= iVar14) {
            lVar8 = *plVar13;
            if (lVar8 != 0) {
              uVar10 = 0;
              goto LAB_04448fcc;
            }
            break;
          }
          lVar8 = thunk_FUN_03f9944c(DAT_0918f518);
          CookingGraph_CookingLevelSimulation_<>c__DisplayClass28_1___ctor(lVar8,0);
          if (lVar8 == 0) break;
          plVar16 = (long *)(lVar8 + 0x18);
          *plVar16 = lVar4;
          thunk_FUN_03f5d7b8(plVar16,lVar4);
          plVar17 = *(long **)(param_1 + 0x30);
          if (plVar17 == (long *)0x0) break;
          lVar9 = *plVar17;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_0917b498) {
                puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_04448dec;
              }
              uVar10 = uVar10 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar10 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917b498,0);
LAB_04448dec:
          uVar10 = (*(code *)*puVar5)(plVar17,iVar14,puVar5[1]);
          if ((uVar10 & 1) != 0) {
            plVar17 = *(long **)(param_1 + 0x28);
            if (plVar17 == (long *)0x0) break;
            lVar9 = *plVar17;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_0917b4b0) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_04448e5c;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917b4b0,0);
LAB_04448e5c:
            uVar6 = (*(code *)*puVar5)(plVar17,iVar14,puVar5[1]);
            *(undefined8 *)(lVar8 + 0x10) = uVar6;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x10),uVar6);
            if (((*(long *)(lVar8 + 0x18) == 0) ||
                (lVar9 = *(long *)(*(long *)(lVar8 + 0x18) + 0x18), lVar9 == 0)) ||
               (plVar17 = *(long **)(lVar9 + 0x28), plVar17 == (long *)0x0)) break;
            lVar9 = *plVar17;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_0917b310) {
                  puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_04448ee4;
                }
                uVar10 = uVar10 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917b310,0);
LAB_04448ee4:
            uVar1 = (*(code *)*puVar5)(plVar17,puVar5[1]);
            uVar6 = System_Linq_Enumerable__Range(0,uVar1,0);
            uVar7 = thunk_FUN_03f9944c(DAT_09178b98);
            FUN_05315754(uVar7,lVar8,DAT_091e7da0,0);
            uVar6 = FUN_04b0c1f0(uVar6,uVar7,DAT_091cb4e8);
            uVar6 = FUN_04adcc84(uVar6,0xffffffff,DAT_091c98c8);
            uVar3 = FUN_04ae071c(uVar6,DAT_091c9a68);
            if ((int)uVar3 < 0) {
              return 0;
            }
            if ((*plVar16 == 0) || (lVar8 = *(long *)(*plVar16 + 0x10), lVar8 == 0)) break;
            if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_044490ec;
            *(undefined1 *)(lVar8 + (ulong)uVar3 + 0x20) = 1;
          }
          plVar16 = *(long **)(param_1 + 0x28);
          iVar14 = iVar14 + 1;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
  goto LAB_044490c4;
LAB_04448fcc:
  do {
    if ((long)(int)*(uint *)(lVar8 + 0x18) <= (long)uVar10) {
      return lVar8;
    }
    if (*(uint *)(lVar8 + 0x18) <= uVar10) {
LAB_044490ec:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (*(char *)(lVar8 + uVar10 + 0x20) != '\0') {
      if ((*plVar15 == 0) || (plVar16 = *(long **)(*plVar15 + 0x28), plVar16 == (long *)0x0)) break;
      lVar8 = *plVar16;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917b4b0) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_04449050;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar16,DAT_0917b4b0,0);
LAB_04449050:
      lVar8 = (*(code *)*puVar5)(plVar16,uVar10 & 0xffffffff,puVar5[1]);
      if (lVar8 == 0) break;
      lVar9 = *(long *)(lVar4 + 0x20);
      uVar6 = *(undefined8 *)(lVar8 + 0x28);
      if (lVar9 == 0) {
        lVar9 = thunk_FUN_03f9944c(DAT_09178b98);
        FUN_05315754(lVar9,lVar4,DAT_091e7d98,0);
        *(long *)(lVar4 + 0x20) = lVar9;
        thunk_FUN_03f5d7b8(lVar4 + 0x20,lVar9);
      }
      uVar11 = FUN_04ab2d14(uVar6,lVar9,DAT_091c9298);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      lVar8 = *plVar13;
    }
    uVar10 = uVar10 + 1;
  } while (lVar8 != 0);
LAB_044490c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

