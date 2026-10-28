// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass28_1$$<FitPlate>b__0
// address: 0x4490648
// body: available
// range: 0x4490648-0x449087b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4490870 to 0x742e558 System.String$$op_Equality (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4490874 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4490878 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CookingLevelSimulation_<>c__DisplayClass28_1__<FitPlate>b__0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_09518169 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b4b0);
    DAT_09518169 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if ((lVar3 != 0) && (lVar4 = *(long *)(lVar3 + 0x10), lVar4 != 0)) {
    if (*(uint *)(lVar4 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (*(char *)(lVar4 + (int)param_2 + 0x20) != '\0') {
      return 0;
    }
    if ((*(long *)(lVar3 + 0x18) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar3 + 0x18) + 0x28), plVar7 != (long *)0x0)) {
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b4b0) {
            puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04490708;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b4b0,0);
LAB_04490708:
      lVar3 = (*(code *)*puVar1)(plVar7,param_2,puVar1[1]);
      if ((lVar3 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
        if (*(int *)(lVar3 + 0x10) != *(int *)(*(long *)(param_1 + 0x10) + 0x10)) {
          return 0;
        }
        if (((*(long *)(param_1 + 0x18) != 0) &&
            (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar3 != 0)) &&
           (plVar7 = *(long **)(lVar3 + 0x28), plVar7 != (long *)0x0)) {
          lVar3 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917b4b0) {
                puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_04490798;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar1 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b4b0,0);
LAB_04490798:
          lVar3 = (*(code *)*puVar1)(plVar7,param_2,puVar1[1]);
          if ((lVar3 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
            if (*(int *)(lVar3 + 0x14) != *(int *)(*(long *)(param_1 + 0x10) + 0x14)) {
              return 0;
            }
            if (((*(long *)(param_1 + 0x18) != 0) &&
                (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar3 != 0)) &&
               (plVar7 = *(long **)(lVar3 + 0x28), plVar7 != (long *)0x0)) {
              lVar3 = *plVar7;
              uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == DAT_0917b4b0) {
                    puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
                    goto LAB_0449083c;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              puVar1 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b4b0,0);
LAB_0449083c:
              lVar3 = (*(code *)*puVar1)(plVar7,param_2,puVar1[1]);
              if ((lVar3 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
                uVar2 = System_String__op_Equality
                                  (*(undefined8 *)(lVar3 + 0x18),
                                   *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),0);
                return uVar2;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

