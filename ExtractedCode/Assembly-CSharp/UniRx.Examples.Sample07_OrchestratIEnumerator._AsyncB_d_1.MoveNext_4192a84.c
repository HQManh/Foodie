// rea decompile_all
// name: UniRx.Examples.Sample07_OrchestratIEnumerator.<AsyncB>d__1$$MoveNext
// address: 0x4192a84
// body: available
// range: 0x4192a84-0x4192b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool UniRx_Examples_Sample07_OrchestratIEnumerator_<AsyncB>d__1__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_095167b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0918ce80);
    FUN_03f5c2a4(&DAT_09217d00);
    FUN_03f5c2a4(&DAT_09217d08);
    DAT_095167b0 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_09217d08,0);
    uVar2 = thunk_FUN_03f9944c(DAT_0918ce80);
    UnityEngine_WaitForEndOfFrame___ctor(uVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_09217d00,0);
  }
  return iVar1 == 0;
}

