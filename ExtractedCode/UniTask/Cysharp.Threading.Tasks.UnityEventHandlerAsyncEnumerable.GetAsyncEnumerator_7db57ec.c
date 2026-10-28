// rea decompile_all
// name: Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable$$GetAsyncEnumerator
// address: 0x7db57ec
// body: available
// range: 0x7db57ec-0x7db58bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Cysharp_Threading_Tasks_UnityEventHandlerAsyncEnumerable__GetAsyncEnumerator
          (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09525fa6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09195ac0);
    DAT_09525fa6 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Threading_CancellationToken__op_Equality(uVar4,param_2,0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_2 = System_Threading_CancellationToken__get_None(0);
  }
  uVar3 = thunk_FUN_03f9944c(DAT_09195ac0);
  Cysharp_Threading_Tasks_UnityEventHandlerAsyncEnumerable_UnityEventHandlerAsyncEnumerator___ctor
            (uVar3,uVar4,uVar1,param_2);
  return uVar3;
}

