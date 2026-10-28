// rea decompile_all
// name: CookingGraph.Execution.CookingExecution.<>c__DisplayClass52_0$$<RegisterDish>b__1
// address: 0x44a06e0
// body: available
// range: 0x44a06e0-0x44a0a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a09d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a09dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a09e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a09e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a0a2c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a0a30 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a0a58 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044a0a54) */
/* WARNING: Removing unreachable block (ram,0x044a099c) */

void CookingGraph_Execution_CookingExecution_<>c__DisplayClass52_0__<RegisterDish>b__1
               (long param_1,uint param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  
  if ((DAT_095181e3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5c0);
    FUN_03f5c2a4(&DAT_0917ac88);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_095181e3 = 1;
  }
  if (-1 < (int)param_2) {
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_044a09e4;
    if ((int)param_2 < *(int *)(*(long *)(param_1 + 0x10) + 0x18)) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 == 0) goto LAB_044a09e4;
      if (*(uint *)(lVar6 + 0x18) <= param_2) {
LAB_044a0a30:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar11 = (ulong)param_2;
      pcVar7 = (char *)(lVar6 + uVar11 + 0x20);
      cVar1 = *pcVar7;
      if (cVar1 == '\x02') {
        return;
      }
      if (cVar1 != '\x01') {
        *pcVar7 = '\x01';
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 != 0) {
          if (*(uint *)(lVar6 + 0x18) <= param_2) goto LAB_044a0a30;
          lVar6 = *(long *)(lVar6 + uVar11 * 8 + 0x20);
          if ((lVar6 != 0) && (plVar10 = *(long **)(lVar6 + 0x28), plVar10 != (long *)0x0)) {
            lVar6 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917a5c0) {
                  puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_044a0810;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar2 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a5c0,0);
LAB_044a0810:
            plVar10 = (long *)(*(code *)*puVar2)(plVar10,puVar2[1]);
            do {
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar6 = *plVar10;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                    puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_044a088c;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar2 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185b10,0);
LAB_044a088c:
              uVar8 = (*(code *)*puVar2)(plVar10,puVar2[1]);
              if ((uVar8 & 1) == 0) {
                if (plVar10 == (long *)0x0) goto LAB_044a0990;
                lVar6 = *plVar10;
                uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
                if (uVar8 == 0) goto LAB_044a0968;
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                goto LAB_044a0950;
              }
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar6 = *plVar10;
              uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == DAT_0917ac88) {
                    puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
                    goto LAB_044a08f0;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              puVar2 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917ac88,0);
LAB_044a08f0:
              uVar8 = (*(code *)*puVar2)(plVar10,puVar2[1]);
              lVar6 = *(long *)(param_1 + 0x20);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550(uVar8,uVar8 & 0xffffffff);
              }
              (**(code **)(lVar6 + 0x18))
                        (*(undefined8 *)(lVar6 + 0x40),uVar8 & 0xffffffff,
                         *(undefined8 *)(lVar6 + 0x28));
            } while( true );
          }
        }
        goto LAB_044a09e4;
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar4 = thunk_FUN_03f9944c();
      puVar5 = &DAT_091ffb10;
      goto LAB_044a0a04;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181548);
  uVar4 = thunk_FUN_03f9944c();
  puVar5 = &DAT_092006a0;
LAB_044a0a04:
  uVar3 = thunk_FUN_03fc39d4(puVar5);
  System_ArgumentException___ctor(uVar4,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091e6cb8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar3);
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_044a0950:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_044a0984;
    }
  }
LAB_044a0968:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09185a58,0);
LAB_044a0984:
  (*(code *)*puVar2)(plVar10,puVar2[1]);
LAB_044a0990:
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
    if (param_2 < *(uint *)(lVar6 + 0x18)) {
      *(undefined1 *)(lVar6 + uVar11 + 0x20) = 2;
      return;
    }
    goto LAB_044a0a30;
  }
LAB_044a09e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

