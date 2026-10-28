// rea decompile_all
// name: IngameDebugConsole.DebugLogPopup$$NewLogsArrived
// address: 0x733afac
// body: available
// range: 0x733afac-0x733b0f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733b0f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogPopup__NewLogsArrived
               (long param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (0 < param_2) {
    piVar1 = (int *)(param_1 + 0x90);
    plVar4 = *(long **)(param_1 + 0x48);
    *piVar1 = *piVar1 + param_2;
    uVar2 = System_Int32__ToString(piVar1,0);
    if (plVar4 == (long *)0x0) goto LAB_0733b0f4;
    (**(code **)(*plVar4 + 0x5e8))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x5f0));
  }
  if (0 < param_3) {
    piVar1 = (int *)(param_1 + 0x94);
    plVar4 = *(long **)(param_1 + 0x50);
    *piVar1 = *piVar1 + param_3;
    uVar2 = System_Int32__ToString(piVar1,0);
    if (plVar4 == (long *)0x0) goto LAB_0733b0f4;
    (**(code **)(*plVar4 + 0x5e8))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x5f0));
  }
  if (0 < param_4) {
    piVar1 = (int *)(param_1 + 0x98);
    plVar4 = *(long **)(param_1 + 0x58);
    *piVar1 = *piVar1 + param_4;
    uVar2 = System_Int32__ToString(piVar1,0);
    if (plVar4 == (long *)0x0) goto LAB_0733b0f4;
    (**(code **)(*plVar4 + 0x5e8))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x5f0));
  }
  if (*(int *)(param_1 + 0x98) < 1) {
    plVar4 = *(long **)(param_1 + 0x30);
    if (*(int *)(param_1 + 0x94) < 1) {
      if (plVar4 == (long *)0x0) goto LAB_0733b0f4;
      uVar5 = *(undefined4 *)(param_1 + 0x60);
      uVar6 = *(undefined4 *)(param_1 + 100);
      lVar3 = *plVar4;
      uVar7 = *(undefined4 *)(param_1 + 0x68);
      uVar8 = *(undefined4 *)(param_1 + 0x6c);
    }
    else {
      if (plVar4 == (long *)0x0) {
LAB_0733b0f4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = *(undefined4 *)(param_1 + 0x70);
      uVar6 = *(undefined4 *)(param_1 + 0x74);
      lVar3 = *plVar4;
      uVar7 = *(undefined4 *)(param_1 + 0x78);
      uVar8 = *(undefined4 *)(param_1 + 0x7c);
    }
  }
  else {
    plVar4 = *(long **)(param_1 + 0x30);
    if (plVar4 == (long *)0x0) goto LAB_0733b0f4;
    uVar5 = *(undefined4 *)(param_1 + 0x80);
    uVar6 = *(undefined4 *)(param_1 + 0x84);
    lVar3 = *plVar4;
    uVar7 = *(undefined4 *)(param_1 + 0x88);
    uVar8 = *(undefined4 *)(param_1 + 0x8c);
  }
                    /* WARNING: Could not recover jumptable at 0x0733b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x2a8))(uVar5,uVar6,uVar7,uVar8,plVar4,*(undefined8 *)(lVar3 + 0x2b0));
  return;
}

