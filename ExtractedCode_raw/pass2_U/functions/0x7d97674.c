// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.WaitForEndOfFramePromise$$System.Collections.IEnumerator.MoveNext
// address: 0x7d97674
// body: available
// range: 0x7d97674-0x7d97737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Cysharp_Threading_Tasks_UniTask_WaitForEndOfFramePromise__System_Collections_IEnumerator_MoveNext
               (long param_1)

{
  char cVar1;
  ulong uVar2;
  
  if ((DAT_09525dc9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091bdbf0);
    FUN_03f5c2a4(&DAT_091bdc00);
    DAT_09525dc9 = 1;
  }
  cVar1 = *(char *)(param_1 + 0x61);
  if (cVar1 == '\0') {
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x40,0);
    if ((uVar2 & 1) == 0) {
      FUN_06434678(param_1 + 0x18,0,DAT_091bdc00);
    }
    else {
      FUN_064348bc(param_1 + 0x18,*(undefined8 *)(param_1 + 0x40),DAT_091bdbf0);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  return cVar1 != '\0';
}

