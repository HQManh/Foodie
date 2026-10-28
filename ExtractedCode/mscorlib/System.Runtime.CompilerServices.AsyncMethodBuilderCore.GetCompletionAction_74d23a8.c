// rea decompile_all
// name: System.Runtime.CompilerServices.AsyncMethodBuilderCore$$GetCompletionAction
// address: 0x74d23a8
// body: available
// range: 0x74d23a8-0x74d257b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Runtime_CompilerServices_AsyncMethodBuilderCore__GetCompletionAction
               (long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_0952153b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09183700);
    FUN_03f5c2a4(&DAT_09184350);
    FUN_03f5c2a4(&DAT_091e5b28);
    FUN_03f5c2a4(&DAT_0918e5b0);
    DAT_0952153b = 1;
  }
  if (*(int *)(DAT_09183700 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Diagnostics_Debugger__NotifyOfCrossThreadDependency(0);
  if (*(int *)(DAT_09184350 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = System_Threading_ExecutionContext__FastCapture(0);
  if ((lVar1 == 0) ||
     (uVar2 = System_Threading_ExecutionContext__get_IsPreAllocatedDefault(lVar1,0),
     (uVar2 & 1) == 0)) {
    lVar5 = *param_1;
    uVar3 = thunk_FUN_03f9944c(DAT_0918e5b0);
    System_Runtime_CompilerServices_AsyncMethodBuilderCore_MoveNextRunner___ctor(uVar3,lVar1,lVar5);
    lVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    uVar4 = System_Action___ctor(lVar1,uVar3,DAT_091e5b28,0);
    if (param_2 != 0) {
      lVar1 = System_Runtime_CompilerServices_AsyncMethodBuilderCore__OutputAsyncCausalityEvents
                        (uVar4,param_2,lVar1);
    }
  }
  else {
    plVar6 = param_1 + 1;
    if (*plVar6 != 0) {
      return *plVar6;
    }
    lVar5 = *param_1;
    uVar3 = thunk_FUN_03f9944c(DAT_0918e5b0);
    System_Runtime_CompilerServices_AsyncMethodBuilderCore_MoveNextRunner___ctor(uVar3,lVar1,lVar5);
    lVar1 = thunk_FUN_03f9944c(DAT_09180e78);
    uVar4 = System_Action___ctor(lVar1,uVar3,DAT_091e5b28,0);
    if (param_2 == 0) {
      *plVar6 = lVar1;
    }
    else {
      lVar1 = System_Runtime_CompilerServices_AsyncMethodBuilderCore__OutputAsyncCausalityEvents
                        (uVar4,param_2,lVar1);
      *plVar6 = lVar1;
    }
    thunk_FUN_03f5d7b8(plVar6,lVar1);
  }
  if (*param_1 == 0) {
    *param_3 = uVar3;
    thunk_FUN_03f5d7b8(param_3,uVar3);
  }
  return lVar1;
}

