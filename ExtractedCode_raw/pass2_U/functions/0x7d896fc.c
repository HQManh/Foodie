// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask$$FromCanceled
// address: 0x7d896fc
// body: available
// range: 0x7d896fc-0x7d897f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] Cysharp_Threading_Tasks_UniTask__FromCanceled(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long local_30;
  undefined2 uStack_28;
  undefined6 uStack_26;
  
  if ((DAT_09525d8c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091958e8);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525d8c = 1;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Threading_CancellationToken__get_None(0);
  uVar3 = System_Threading_CancellationToken__op_Equality(param_1,uVar2,0);
  if ((uVar3 & 1) == 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_091958e8);
    System_Object___ctor(lVar4,0);
    *(undefined8 *)(lVar4 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),0);
    uStack_28 = 0;
    uStack_26 = 0;
    local_30 = lVar4;
    thunk_FUN_03f5d7b8(&local_30,lVar4);
    uStack_28 = 0;
  }
  else {
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = (*(long **)(DAT_0918c610 + 0xb8))[1];
    local_30 = **(long **)(DAT_0918c610 + 0xb8);
    uStack_28 = (undefined2)lVar4;
    uStack_26 = (undefined6)((ulong)lVar4 >> 0x10);
  }
  auVar1._8_2_ = uStack_28;
  auVar1._0_8_ = local_30;
  auVar1._10_6_ = uStack_26;
  return auVar1;
}

