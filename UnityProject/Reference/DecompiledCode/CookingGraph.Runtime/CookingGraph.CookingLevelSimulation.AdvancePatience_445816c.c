// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$AdvancePatience
// address: 0x445816c
// body: available
// range: 0x445816c-0x445853b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4458484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4458520 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4458524 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4458528 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x445852c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4458530 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4458538 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04458534) */

void CookingGraph_CookingLevelSimulation__AdvancePatience
               (double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  double dVar7;
  
  if ((DAT_09518025 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a828);
    FUN_03f5c2a4(&DAT_0917af28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09518025 = 1;
  }
  plVar6 = *(long **)(param_2 + 0x98);
  uVar1 = thunk_FUN_03f9944c(DAT_09179390);
  if (plVar6 != (long *)0x0) {
    FUN_05322d94(uVar1,plVar6,*(undefined8 *)(*plVar6 + 0x210),0);
    plVar6 = (long *)FUN_04b0cafc(param_3,uVar1,DAT_091cb610);
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917a828) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_044582c0;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a828,0);
LAB_044582c0:
      plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
      do {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_09185b10) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_04458360;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_04458360:
        uVar4 = (*(code *)*puVar2)(plVar6,puVar2[1]);
        if ((uVar4 & 1) == 0) {
          if (plVar6 == (long *)0x0) {
            return;
          }
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 == 0) goto LAB_044584d0;
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_044584b8;
        }
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_0917af28) {
              puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_044583c4;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917af28,0);
LAB_044583c4:
        lVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        dVar7 = *(double *)(lVar3 + 0x20);
        if (dVar7 != INFINITY) {
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          dVar7 = (double)System_Math__Max(0,dVar7 - param_1,0);
          *(double *)(lVar3 + 0x20) = dVar7;
          if (dVar7 <= 1e-08) {
            if (*(char *)(param_2 + 0x149) == '\0') {
              if (*(long *)(param_2 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_053d8048(*(long *)(param_2 + 0x50),*(undefined4 *)(lVar3 + 0x10),DAT_091a82b0);
            }
            if (*(long *)(param_2 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = FUN_053d8048(*(long *)(param_2 + 0xf8),*(undefined4 *)(lVar3 + 0x10),
                                 DAT_091a82b0);
            if ((uVar4 & 1) != 0) {
              CookingGraph_CookingLevelSimulation__Emit
                        (param_2,6,*(undefined4 *)(lVar3 + 0x10),DAT_091f5700,0);
            }
            if (*(char *)(param_2 + 0x149) == '\0') {
              CookingGraph_CookingLevelSimulation__Lose(param_2,4);
            }
            else {
              *(undefined8 *)(lVar3 + 0x20) = 0x7ff0000000000000;
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
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
LAB_044584b8:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_044584ec;
    }
  }
LAB_044584d0:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_044584ec:
  (*(code *)*puVar2)(plVar6,puVar2[1]);
  return;
}

