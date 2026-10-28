// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass161_1$$<ProcessPriority>b__2
// address: 0x448e948
// body: available
// range: 0x448e948-0x448ea67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x448ea5c to 0x53d750c FUN_053d750c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x448ea60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x448ea64 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation_<>c__DisplayClass161_1__<ProcessPriority>b__2
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_09518152 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_0917b4b0);
    DAT_09518152 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if ((((lVar3 != 0) && (*(long *)(lVar3 + 0x10) != 0)) &&
      (lVar4 = *(long *)(*(long *)(lVar3 + 0x10) + 0x78), lVar4 != 0)) &&
     ((*(long *)(lVar3 + 0x18) != 0 && (lVar4 = *(long *)(lVar4 + 0x80), lVar4 != 0)))) {
    uVar1 = *(uint *)(*(long *)(lVar3 + 0x18) + 0x14);
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (plVar7 = *(long **)(*(long *)(param_1 + 0x10) + 0x28), plVar7 != (long *)0x0)) {
      lVar3 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      lVar4 = *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_0917b4b0) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0448ea28;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b4b0,0);
LAB_0448ea28:
      lVar3 = (*(code *)*puVar2)(plVar7,param_2,puVar2[1]);
      if ((lVar3 != 0) && (lVar4 != 0)) {
        FUN_053d750c(lVar4,*(undefined4 *)(lVar3 + 0x10),DAT_091a82c0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

