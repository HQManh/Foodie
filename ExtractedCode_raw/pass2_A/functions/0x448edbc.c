// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass161_1$$<ProcessPriority>b__7
// address: 0x448edbc
// body: available
// range: 0x448edbc-0x448eeef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x448eeec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_CookingLevelSimulation_<>c__DisplayClass161_1__<ProcessPriority>b__7
               (long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_09518156 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b378);
    FUN_03f5c2a4(&DAT_0917b4b0);
    DAT_09518156 = 1;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x28), plVar6 != (long *)0x0)) {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917b4b0) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0448ee5c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b4b0,0);
LAB_0448ee5c:
    lVar3 = (*(code *)*puVar2)(plVar6,param_2,puVar2[1]);
    if ((lVar3 != 0) && (plVar6 = *(long **)(lVar3 + 0x28), plVar6 != (long *)0x0)) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917b378) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_0448eecc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b378,0);
LAB_0448eecc:
      iVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      return iVar1 == 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

