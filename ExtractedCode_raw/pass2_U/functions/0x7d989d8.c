// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.DelayIgnoreTimeScalePromise$$MoveNext
// address: 0x7d989d8
// body: available
// range: 0x7d989d8-0x7d98ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Cysharp_Threading_Tasks_UniTask_DelayIgnoreTimeScalePromise__MoveNext(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_09525de9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_091bdbf0);
    FUN_03f5c2a4(&DAT_091bdc00);
    DAT_09525de9 = 1;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x28,0);
  if ((uVar3 & 1) == 0) {
    fVar6 = *(float *)(param_1 + 0x1c);
    if (fVar6 == 0.0) {
      iVar1 = *(int *)(param_1 + 0x20);
      iVar2 = UnityEngine_Time__get_frameCount(0);
      if (iVar1 != iVar2) {
        fVar6 = *(float *)(param_1 + 0x1c);
        goto LAB_07d98a88;
      }
    }
    else {
LAB_07d98a88:
      fVar5 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
      *(float *)(param_1 + 0x1c) = fVar6 + fVar5;
      if (*(float *)(param_1 + 0x18) <= fVar6 + fVar5) {
        FUN_06434678(param_1 + 0x50,0,DAT_091bdc00);
        goto LAB_07d98ac4;
      }
    }
    uVar4 = 1;
  }
  else {
    FUN_064348bc(param_1 + 0x50,*(undefined8 *)(param_1 + 0x28),DAT_091bdbf0);
LAB_07d98ac4:
    uVar4 = 0;
  }
  return uVar4;
}

