// rea decompile_all
// name: System.Threading.Tasks.Task$$ContinueWith
// address: 0x7633af0
// body: available
// range: 0x7633af0-0x7633c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7633c40 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Threading_Tasks_Task__ContinueWith
          (undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 local_48;
  
  if ((DAT_095221ff & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b50);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095221ff = 1;
  }
  local_48 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09219910;
  }
  else {
    if (param_3 != 0) {
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_Tasks_Task__CreationOptionsFromContinuationOptions
                (param_5,(long)&local_48 + 4,&local_48);
      uVar1 = local_48;
      uVar2 = local_48._4_4_;
      uVar3 = thunk_FUN_03f9944c(DAT_09182b50);
      System_Threading_Tasks_ContinuationTaskFromTask___ctor
                (uVar3,param_1,param_2,0,uVar2,uVar1 & 0xffffffff);
      System_Threading_Tasks_Task__ContinueWithCore(param_1,uVar3,param_3,param_4,param_5);
      return uVar3;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09221fa0;
  }
  uVar5 = thunk_FUN_03fc39d4(puVar4);
  System_ArgumentNullException___ctor(uVar3,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091dae80);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar5);
}

