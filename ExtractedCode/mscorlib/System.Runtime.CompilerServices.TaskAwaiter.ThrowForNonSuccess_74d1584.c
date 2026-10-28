// rea decompile_all
// name: System.Runtime.CompilerServices.TaskAwaiter$$ThrowForNonSuccess
// address: 0x74d1584
// body: available
// range: 0x74d1584-0x74d16af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d15f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d1640 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74d168c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Runtime_CompilerServices_TaskAwaiter__ThrowForNonSuccess(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  if ((DAT_09521526 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9538);
    FUN_03f5c2a4(&DAT_091b9540);
    DAT_09521526 = 1;
  }
  if (param_1 == 0) goto LAB_074d15f8;
  uVar5 = System_Threading_Tasks_Task__get_Status(param_1,0);
  if ((int)uVar5 == 7) {
    lVar6 = System_Threading_Tasks_Task__GetExceptionDispatchInfos(param_1,0);
    if (lVar6 == 0) {
LAB_074d15f8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = FUN_05f077b8(lVar6,DAT_091b9538);
    if (iVar1 < 1) {
      FUN_039b1d98(param_1);
      uVar5 = System_Threading_Tasks_Task__get_Exception(param_1,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091daf28);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar7);
    }
    lVar6 = FUN_05f07844(lVar6,0,DAT_091b9540);
    if (lVar6 == 0) goto LAB_074d15f8;
  }
  else {
    if ((int)uVar5 != 6) {
      return uVar5;
    }
    lVar6 = System_Threading_Tasks_Task__GetCancellationExceptionDispatchInfo(param_1,0);
    if (lVar6 == 0) {
      thunk_FUN_03fc39d4(&DAT_0918b8d8);
      uVar5 = thunk_FUN_03f9944c();
      System_Threading_Tasks_TaskCanceledException___ctor(uVar5,param_1,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091daf28);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar7);
    }
  }
  auVar11 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw();
  if ((DAT_09521527 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_0918b908);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_091f0c08);
    FUN_03f5c2a4(&DAT_09194ed0);
    DAT_09521527 = 1;
  }
  lVar6 = thunk_FUN_03f9944c(DAT_09194ed0);
  System_Object___ctor(lVar6,0);
  if (lVar6 != 0) {
    plVar9 = (long *)(lVar6 + 0x10);
    *plVar9 = auVar11._0_8_;
    thunk_FUN_03f5d7b8(plVar9,auVar11._0_8_);
    *(undefined8 *)(lVar6 + 0x18) = auVar11._8_8_;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x18),auVar11._8_8_);
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09521581 == '\0') {
      FUN_03f5c2a4(&DAT_0918b8c8);
      DAT_09521581 = '\x01';
    }
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar8 = (long *)FUN_03f5c2c0(DAT_0918b8c8);
    lVar10 = *plVar8;
    if (lVar10 == 0) {
      if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_0951988b == '\0') {
        FUN_03f5c2a4(&DAT_0918b908);
        DAT_0951988b = '\x01';
      }
      if (*(int *)(DAT_0918b908 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918b908 + 0xb8) == 0) goto LAB_074d18a4;
      uVar2 = System_Threading_Tasks_TaskScheduler__get_Id(**(long **)(DAT_0918b908 + 0xb8),0);
      uVar3 = 0;
    }
    else {
      if (*(long *)(lVar10 + 0x28) == 0) goto LAB_074d18a4;
      uVar2 = System_Threading_Tasks_TaskScheduler__get_Id(*(long *)(lVar10 + 0x28),0);
      uVar3 = System_Threading_Tasks_Task__get_Id(lVar10,0);
    }
    if (*plVar9 != 0) {
      uVar4 = System_Threading_Tasks_Task__get_Id(*plVar9,0);
      Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitBegin_Asynchronous(uVar2,uVar3,uVar4,0);
      uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar5,lVar6,DAT_091f0c08,0);
      return uVar5;
    }
  }
LAB_074d18a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

