// rea decompile_all
// name: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable.ConfiguredValueTaskAwaiter$$OnCompleted
// address: 0x74d0234
// body: available
// range: 0x74d0234-0x74d03df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d03d8 to 0x74d1420 System.Runtime.CompilerServices.TaskAwaiter$$OnCompletedInternal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74d03dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_CompilerServices_ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter__OnCompleted
               (undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  if ((DAT_09521513 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186940);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_0918cae8);
    FUN_03f5c2a4(&DAT_0918cae0);
    DAT_09521513 = 1;
  }
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
    if (*(int *)(DAT_0918cae0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar8 = (long *)System_Threading_Tasks_ValueTask__get_CompletedTask(0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = *(undefined1 *)((long)param_1 + 10);
  }
  else {
    lVar5 = *plVar8;
    if ((*(byte *)(lVar5 + 0x130) < *(byte *)(DAT_0918b8c8 + 0x130)) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)*(byte *)(DAT_0918b8c8 + 0x130) * 8 + -8) !=
        DAT_0918b8c8)) {
      if (*(int *)(DAT_0918cae8 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar5 = *plVar8;
      }
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      uVar3 = *(undefined2 *)(param_1 + 1);
      bVar1 = *(byte *)((long)param_1 + 10);
      uVar9 = **(undefined8 **)(DAT_0918cae8 + 0xb8);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09186940) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_074d037c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186940,1);
LAB_074d037c:
                    /* WARNING: Could not recover jumptable at 0x074d03a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar8,uVar9,param_2,uVar3,bVar1 | 2,puVar4[1]);
      return;
    }
    uVar2 = *(undefined1 *)((long)param_1 + 10);
  }
  auVar10 = System_Threading_Tasks_Task__ConfigureAwait(plVar8,uVar2,0);
  System_Runtime_CompilerServices_TaskAwaiter__OnCompletedInternal
            (auVar10._0_8_,param_2,(auVar10._8_8_ & 0xff) != 0,1);
  return;
}

