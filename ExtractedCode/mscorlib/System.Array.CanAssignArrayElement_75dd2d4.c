// rea decompile_all
// name: System.Array$$CanAssignArrayElement
// address: 0x75dd2d4
// body: available
// range: 0x75dd2d4-0x75dd3ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75dd3a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Array__CanAssignArrayElement(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  
  if (param_1 == (long *)0x0) goto LAB_075dd3a8;
  uVar2 = (**(code **)(*param_1 + 0x638))(param_1,*(undefined8 *)(*param_1 + 0x640));
  if ((uVar2 & 1) != 0) {
    lVar5 = *param_1;
    plVar3 = param_1;
    param_1 = param_2;
LAB_075dd308:
                    /* WARNING: Could not recover jumptable at 0x075dd318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar5 + 0x2b8))(plVar3,param_1,*(undefined8 *)(lVar5 + 0x2c0));
    return uVar2;
  }
  uVar2 = System_Type__get_IsInterface(param_1);
  if ((uVar2 & 1) == 0) {
    if (param_2 == (long *)0x0) goto LAB_075dd3a8;
    uVar2 = System_Type__get_IsInterface(param_2);
    lVar5 = *param_1;
    if ((uVar2 & 1) == 0) {
      uVar2 = (**(code **)(lVar5 + 0x2b8))(param_1,param_2,*(undefined8 *)(lVar5 + 0x2c0));
      if ((uVar2 & 1) == 0) {
        lVar5 = *param_2;
        plVar3 = param_2;
        goto LAB_075dd308;
      }
      uVar1 = 1;
      goto LAB_075dd368;
    }
    pcVar6 = *(code **)(lVar5 + 0x638);
    uVar4 = *(undefined8 *)(lVar5 + 0x640);
  }
  else {
    if (param_2 == (long *)0x0) {
LAB_075dd3a8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    pcVar6 = *(code **)(*param_2 + 0x638);
    uVar4 = *(undefined8 *)(*param_2 + 0x640);
    param_1 = param_2;
  }
  uVar1 = (*pcVar6)(param_1,uVar4);
  uVar1 = uVar1 ^ 1;
LAB_075dd368:
  return (ulong)(uVar1 & 1);
}

