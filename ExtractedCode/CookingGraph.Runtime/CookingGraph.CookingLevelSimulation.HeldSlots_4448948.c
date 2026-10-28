// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$HeldSlots
// address: 0x4448948
// body: available
// range: 0x4448948-0x4448af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4448aec to 0x4b04274 FUN_04b04274 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4448af0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__HeldSlots
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_09517ffc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca548);
    FUN_03f5c2a4(&DAT_091cad40);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_091e7de8);
    FUN_03f5c2a4(&DAT_0918f560);
    DAT_09517ffc = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918f560);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass31_0___ctor(lVar2,0);
  lVar3 = CookingGraph_CookingLevelSimulation__Assembly(param_1,param_2,param_3);
  if (lVar2 != 0) {
    plVar9 = (long *)(lVar2 + 0x10);
    *plVar9 = lVar3;
    thunk_FUN_03f5d7b8(plVar9,lVar3);
    if ((*plVar9 != 0) && (plVar9 = *(long **)(*plVar9 + 0x28), plVar9 != (long *)0x0)) {
      lVar3 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b310) {
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04448a88;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917b310,0);
LAB_04448a88:
      uVar1 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      uVar5 = System_Linq_Enumerable__Range(0,uVar1,0);
      uVar6 = thunk_FUN_03f9944c(DAT_09178b98);
      FUN_05315754(uVar6,lVar2,DAT_091e7de8,0);
      uVar5 = FUN_04af23e0(uVar5,uVar6,DAT_091ca548);
      FUN_04b04274(uVar5,DAT_091cad40);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

