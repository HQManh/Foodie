// rea decompile_all
// name: CakeOrder.Home.UIStarProgressHome$$SetData
// address: 0x432b5f0
// body: available
// range: 0x432b5f0-0x432b63f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432b63c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIStarProgressHome__SetData(long *param_1,undefined4 param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0xb) = param_2;
  *(int *)((long)param_1 + 0x5c) = param_3;
  if (param_1[0xd] != 0) {
    UnityEngine_UI_Slider__set_maxValue((float)param_3,param_1[0xd],0);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x178);
    uVar1 = *(undefined8 *)(*param_1 + 0x180);
    *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0432b638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

