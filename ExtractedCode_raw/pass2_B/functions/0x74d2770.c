// rea decompile_all
// name: System.Runtime.CompilerServices.AsyncMethodBuilderCore$$PostBoxInitialization
// address: 0x74d2770
// body: available
// range: 0x74d2770-0x74d291b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d2914 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74d2918 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_CompilerServices_AsyncMethodBuilderCore__PostBoxInitialization
               (long *param_1,long param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  
  if ((DAT_0952153d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185618);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_091fc0e8);
    DAT_0952153d = 1;
  }
  if (param_4 != 0) {
    uVar2 = System_Threading_Tasks_AsyncCausalityTracer__get_LoggingOn(0);
    if ((uVar2 & 1) != 0) {
      uVar1 = System_Threading_Tasks_Task__get_Id(param_4,0);
      if (param_2 == 0) goto LAB_074d2918;
      plVar3 = (long *)System_Object__GetType(param_2,0);
      if (plVar3 == (long *)0x0) goto LAB_074d2918;
      uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      uVar4 = System_String__Concat(DAT_091fc0e8,uVar4,0);
      System_Threading_Tasks_AsyncCausalityTracer__TraceOperationCreation(0,uVar1,uVar4,0,0);
    }
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(char *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x10) != '\0') {
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_Tasks_Task__AddToActiveTasks(param_4,0);
    }
  }
  *param_1 = param_2;
  thunk_FUN_03f5d7b8(param_1,param_2);
  plVar3 = (long *)*param_1;
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185618) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_074d28e8;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185618,1);
LAB_074d28e8:
    (*(code *)*puVar5)(plVar3,plVar3,puVar5[1]);
    if (param_3 != 0) {
      *(long *)(param_3 + 0x18) = *param_1;
      thunk_FUN_03f5d7b8((long *)(param_3 + 0x18));
      return;
    }
  }
LAB_074d2918:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

