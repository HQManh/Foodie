// rea decompile_all
// name: System.Runtime.CompilerServices.ValueTaskAwaiter$$OnCompleted
// address: 0x74d0f14
// body: available
// range: 0x74d0f14-0x74d109f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d103c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d109c to 0x74d1420 System.Runtime.CompilerServices.TaskAwaiter$$OnCompletedInternal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_CompilerServices_ValueTaskAwaiter__OnCompleted
               (undefined8 *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((DAT_0952151f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186940);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_0918cae8);
    FUN_03f5c2a4(&DAT_0918cae0);
    DAT_0952151f = 1;
  }
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    if (*(int *)(DAT_0918cae0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar6 = (long *)System_Threading_Tasks_ValueTask__get_CompletedTask(0);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    lVar3 = *plVar6;
    if ((*(byte *)(lVar3 + 0x130) < *(byte *)(DAT_0918b8c8 + 0x130)) ||
       (*(long *)(*(long *)(lVar3 + 200) + (ulong)*(byte *)(DAT_0918b8c8 + 0x130) * 8 + -8) !=
        DAT_0918b8c8)) {
      if (*(int *)(DAT_0918cae8 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar3 = *plVar6;
      }
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      uVar1 = *(undefined2 *)(param_1 + 1);
      uVar7 = **(undefined8 **)(DAT_0918cae8 + 0xb8);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09186940) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_074d1050;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09186940,1);
LAB_074d1050:
                    /* WARNING: Could not recover jumptable at 0x074d1074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar2)(plVar6,uVar7,param_2,uVar1,3,puVar2[1]);
      return;
    }
  }
  uVar7 = System_Threading_Tasks_Task__GetAwaiter(plVar6,0);
  System_Runtime_CompilerServices_TaskAwaiter__OnCompletedInternal(uVar7,param_2,1,1);
  return;
}

