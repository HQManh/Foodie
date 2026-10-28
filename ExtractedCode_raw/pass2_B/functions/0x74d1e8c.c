// rea decompile_all
// name: System.Runtime.CompilerServices.AsyncMethodBuilderCore$$ThrowAsync
// address: 0x74d1e8c
// body: available
// range: 0x74d1e8c-0x74d1faf inclusive
// range: 0x74d2078-0x74d210f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d210c to 0x7623f0c System.Threading.ThreadPool$$QueueUserWorkItem (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_CompilerServices_AsyncMethodBuilderCore__ThrowAsync
               (undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_0952153e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a860);
    FUN_03f5c2a4(&DAT_091e5b00);
    FUN_03f5c2a4(&DAT_091e5b08);
    FUN_03f5c2a4(&DAT_0918e598);
    FUN_03f5c2a4(&DAT_0918ce78);
    DAT_0952153e = 1;
  }
  uVar1 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(param_1);
  if (param_2 != (long *)0x0) {
    if (*(int *)(DAT_0918e598 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = *(undefined8 **)(DAT_0918e598 + 0xb8);
    lVar4 = puVar3[1];
    if (lVar4 == 0) {
      if (*(int *)(DAT_0918e598 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar3 = *(undefined8 **)(DAT_0918e598 + 0xb8);
      }
      uVar5 = *puVar3;
      lVar4 = thunk_FUN_03f9944c(DAT_0918a860);
      System_Threading_SendOrPostCallback___ctor(lVar4,uVar5,DAT_091e5b00,0);
      plVar2 = (long *)(*(long *)(DAT_0918e598 + 0xb8) + 8);
      *plVar2 = lVar4;
      thunk_FUN_03f5d7b8(plVar2,lVar4);
    }
    (**(code **)(*param_2 + 0x188))(param_2,lVar4,uVar1,*(undefined8 *)(*param_2 + 400));
    return;
  }
  if (*(int *)(DAT_0918e598 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_0918e598 + 0xb8);
  lVar4 = puVar3[2];
  if (lVar4 == 0) {
    if (*(int *)(DAT_0918e598 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar3 = *(undefined8 **)(DAT_0918e598 + 0xb8);
    }
    uVar5 = *puVar3;
    lVar4 = thunk_FUN_03f9944c(DAT_0918ce78);
    System_Threading_WaitCallback___ctor(lVar4,uVar5,DAT_091e5b08,0);
    plVar2 = (long *)(*(long *)(DAT_0918e598 + 0xb8) + 0x10);
    *plVar2 = lVar4;
    thunk_FUN_03f5d7b8(plVar2,lVar4);
  }
  System_Threading_ThreadPool__QueueUserWorkItem(lVar4,uVar1,0);
  return;
}

