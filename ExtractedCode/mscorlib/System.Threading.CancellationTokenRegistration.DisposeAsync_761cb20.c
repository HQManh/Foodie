// rea decompile_all
// name: System.Threading.CancellationTokenRegistration$$DisposeAsync
// address: 0x761cb20
// body: available
// range: 0x761cb20-0x761cbd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761cba4 to 0x75c7dec System.ThrowHelper$$ThrowArgumentNullException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_Threading_CancellationTokenRegistration__DisposeAsync(undefined8 param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  ulong local_30;
  undefined2 local_28;
  undefined1 local_26;
  undefined5 uStack_25;
  
  if ((DAT_09522100 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dae20);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_09522100 = 1;
  }
  System_Threading_CancellationTokenRegistration__Dispose(param_1);
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = FUN_04d82418(0,DAT_091dae20);
  local_30 = 0;
  local_28 = 0;
  local_26 = 0;
  uStack_25 = 0;
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException(0x26,0);
  }
  local_30 = uVar2;
  thunk_FUN_03f5d7b8(&local_30,uVar2);
  auVar1._8_2_ = 0;
  auVar1._0_8_ = local_30;
  auVar1[10] = 1;
  auVar1._11_5_ = uStack_25;
  return auVar1;
}

