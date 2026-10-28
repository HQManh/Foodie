// rea decompile_all
// name: IngameDebugConsole.DebugLogRecycledListView$$ColorLogItem
// address: 0x733ed04
// body: available
// range: 0x733ed04-0x733ed77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733ed74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogRecycledListView__ColorLogItem(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_2 != 0) {
    if (*(uint *)(param_2 + 0x80) != *(uint *)(param_1 + 0x90)) {
      plVar1 = *(long **)(param_2 + 0x28);
      if ((*(uint *)(param_2 + 0x80) & 1) == 0) {
        if (plVar1 == (long *)0x0) goto LAB_0733ed74;
        uVar3 = *(undefined4 *)(param_1 + 0x30);
        uVar4 = *(undefined4 *)(param_1 + 0x34);
        lVar2 = *plVar1;
        uVar5 = *(undefined4 *)(param_1 + 0x38);
        uVar6 = *(undefined4 *)(param_1 + 0x3c);
      }
      else {
        if (plVar1 == (long *)0x0) goto LAB_0733ed74;
        uVar3 = *(undefined4 *)(param_1 + 0x40);
        uVar4 = *(undefined4 *)(param_1 + 0x44);
        lVar2 = *plVar1;
        uVar5 = *(undefined4 *)(param_1 + 0x48);
        uVar6 = *(undefined4 *)(param_1 + 0x4c);
      }
LAB_0733ed60:
                    /* WARNING: Could not recover jumptable at 0x0733ed70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x2a8))(uVar3,uVar4,uVar5,uVar6,plVar1,*(undefined8 *)(lVar2 + 0x2b0));
      return;
    }
    plVar1 = *(long **)(param_2 + 0x28);
    if (plVar1 != (long *)0x0) {
      uVar3 = *(undefined4 *)(param_1 + 0x50);
      uVar4 = *(undefined4 *)(param_1 + 0x54);
      lVar2 = *plVar1;
      uVar5 = *(undefined4 *)(param_1 + 0x58);
      uVar6 = *(undefined4 *)(param_1 + 0x5c);
      goto LAB_0733ed60;
    }
  }
LAB_0733ed74:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

