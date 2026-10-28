// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass109_0$$<PreMerge>b__3
// address: 0x448cc98
// body: available
// range: 0x448cc98-0x448cde7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x448cde0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x448cde4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation_<>c__DisplayClass109_0__<PreMerge>b__3
               (long param_1,long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((DAT_09518136 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c04e0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518136 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x58);
  if (((lVar7 != 0) && (param_2 != 0)) && (*(long *)(lVar7 + 0x78) != 0)) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    lVar8 = *(long *)(lVar7 + 0x180);
    uVar3 = CookingGraph_CookingGraphIndex__Ingredient(*(long *)(lVar7 + 0x78),uVar1);
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x58) + 0x78), lVar7 != 0)) {
      lVar6 = *(long *)(param_2 + 0x18);
      if (lVar6 == 0) {
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x20), lVar6 == 0)) goto LAB_0448cde0;
        lVar6 = *(long *)(lVar6 + 0x10);
      }
      uVar4 = FUN_04ee582c(*(undefined8 *)(lVar7 + 0x18),lVar6,DAT_091c04e0);
      uVar9 = *(undefined8 *)(param_2 + 0x18);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      lVar7 = *(long *)(param_1 + 0x18);
      if (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar8 != 0) {
          CookingGraph_CookingRuntimeSettings__AssemblySlot
                    (lVar8,uVar1,uVar2,uVar3,uVar4,uVar5 & 1,
                     *(undefined8 *)(lVar7 + (long)(int)param_3 * 8 + 0x20),
                     *(undefined8 *)(param_2 + 0x20));
          return;
        }
      }
    }
  }
LAB_0448cde0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

