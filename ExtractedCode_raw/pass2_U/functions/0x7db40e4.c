// rea decompile_all
// name: Cysharp.Threading.Tasks.UnityAsyncExtensions.<WaitAsync>d__11$$MoveNext
// address: 0x7db40e4
// body: available
// range: 0x7db40e4-0x7db42a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UnityAsyncExtensions_<WaitAsync>d__11__MoveNext(int *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  undefined8 local_28;
  
  if ((DAT_09525f8a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c22c8);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525f8a = 1;
  }
  local_28 = 0;
  if (*param_1 == 0) {
    local_28._4_4_ = param_1[0xe];
    param_1[0xe] = 0;
    *param_1 = -1;
    local_28._0_4_ = 0;
  }
  else {
    iVar4 = param_1[6];
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Cysharp_Threading_Tasks_UniTask__Yield(iVar4,0);
    local_28 = CONCAT44(local_28._4_4_,uVar3);
    iVar4 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_28,0);
    local_28._4_4_ = iVar4;
    uVar5 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted((long)&local_28 + 4,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      uVar1 = DAT_091c22c8;
      param_1[0xe] = local_28._4_4_;
      FUN_049b41ac(param_1 + 2,(long)&local_28 + 4,param_1,uVar1);
      return;
    }
  }
  Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult((long)&local_28 + 4,0);
  Unity_Jobs_JobHandle__Complete(param_1 + 8,0);
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Threading_CancellationToken__ThrowIfCancellationRequested(param_1 + 0xc,0);
  cVar2 = DAT_095162d8;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar7 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_07db428c;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_07db428c:
    (*(code *)*puVar6)(plVar9,puVar6[1]);
  }
  return;
}

