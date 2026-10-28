// rea decompile_all
// name: Cysharp.Threading.Tasks.EnumeratorAsyncExtensions$$ToUniTask
// address: 0x7d8aaa4
// body: available
// range: 0x7d8aaa4-0x7d8ab6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d8ab18 to 0x7dcb9f0 Cysharp.Threading.Tasks.Internal.Error$$ThrowArgumentNullExceptionCore (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
Cysharp_Threading_Tasks_EnumeratorAsyncExtensions__ToUniTask
          (long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  undefined8 local_40;
  undefined2 local_38;
  undefined6 uStack_36;
  undefined2 local_24 [2];
  
  if ((DAT_09525d28 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09190578);
    FUN_03f5c2a4(&DAT_091cb718);
    FUN_03f5c2a4(&DAT_0921b070);
    DAT_09525d28 = 1;
  }
  local_24[0] = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    Cysharp_Threading_Tasks_Internal_Error__ThrowArgumentNullExceptionCore(DAT_0921b070,0);
  }
  if (*(int *)(DAT_09190578 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_40 = Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise__Create
                       (param_1,param_2,param_3,local_24);
  uVar2 = local_24[0];
  local_38 = 0;
  uStack_36 = 0;
  thunk_FUN_03f5d7b8(&local_40,local_40);
  auVar1._8_2_ = uVar2;
  auVar1._0_8_ = local_40;
  auVar1._10_6_ = uStack_36;
  return auVar1;
}

