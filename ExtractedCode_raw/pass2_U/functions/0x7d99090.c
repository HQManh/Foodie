// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.DelayRealtimePromise$$MoveNext
// address: 0x7d99090
// body: available
// range: 0x7d99090-0x7d991cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Cysharp_Threading_Tasks_UniTask_DelayRealtimePromise__MoveNext(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((DAT_09525df4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181790);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091bdb30);
    FUN_03f5c2a4(&DAT_091bdb40);
    FUN_03f5c2a4(&DAT_0918cad8);
    DAT_09525df4 = 1;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x28,0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_0918cad8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = Cysharp_Threading_Tasks_Internal_ValueStopwatch__get_IsInvalid(param_1 + 0x20,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(DAT_0918cad8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = Cysharp_Threading_Tasks_Internal_ValueStopwatch__get_ElapsedTicks(param_1 + 0x20,0);
      if (lVar2 < *(long *)(param_1 + 0x18)) {
        return 1;
      }
    }
    if (*(int *)(DAT_09181790 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_064311f4(param_1 + 0x50,**(undefined1 **)(DAT_09181790 + 0xb8),DAT_091bdb40);
  }
  else {
    FUN_0643142c(param_1 + 0x50,*(undefined8 *)(param_1 + 0x28),DAT_091bdb30);
  }
  return 0;
}

