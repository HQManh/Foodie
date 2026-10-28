// rea decompile_all
// name: System.Threading.WaitHandle$$get_SafeWaitHandle
// address: 0x7628dcc
// body: available
// range: 0x7628dcc-0x7628e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Threading_WaitHandle__get_SafeWaitHandle(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09522194 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a540);
    FUN_03f5c2a4(&DAT_0918cea8);
    DAT_09522194 = 1;
  }
  plVar1 = (long *)(param_1 + 0x20);
  lVar2 = *plVar1;
  thunk_FUN_03f6a5cc();
  if (lVar2 == 0) {
    if (*(int *)(DAT_0918cea8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = **(undefined8 **)(DAT_0918cea8 + 0xb8);
    lVar2 = thunk_FUN_03f9944c(DAT_0918a540);
    Microsoft_Win32_SafeHandles_SafeWaitHandle___ctor(lVar2,uVar3,0,0);
    thunk_FUN_03f6a5cc();
    *plVar1 = lVar2;
    thunk_FUN_03f5d7b8(plVar1,lVar2);
  }
  lVar2 = *plVar1;
  thunk_FUN_03f6a5cc();
  return lVar2;
}

