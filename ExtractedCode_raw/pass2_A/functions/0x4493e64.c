// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass40_0$$<AutoCompleteDishAtomic>b__18
// address: 0x4493e64
// body: available
// range: 0x4493e64-0x4493f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4493f3c to 0x444c174 CookingGraph.CookingLevelSimulation$$ShowTake (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4493f40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation_<>c__DisplayClass40_0__<AutoCompleteDishAtomic>b__18
               (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_09518179 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b4b0);
    DAT_09518179 = 1;
  }
  if (((*(long *)(param_1 + 0x40) != 0) && (param_2 != 0)) &&
     (plVar7 = *(long **)(*(long *)(param_1 + 0x40) + 0x28), plVar7 != (long *)0x0)) {
    lVar3 = *plVar7;
    lVar6 = *(long *)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_2 + 0x70);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917b4b0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_04493f08;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b4b0,0);
LAB_04493f08:
    lVar3 = (*(code *)*puVar2)(plVar7,uVar1,puVar2[1]);
    if ((lVar3 != 0) && (lVar6 != 0)) {
      CookingGraph_CookingLevelSimulation__ShowTake(lVar6,param_2,*(undefined4 *)(lVar3 + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

