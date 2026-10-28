// rea decompile_all
// name: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder$$get_Task
// address: 0x7dcf30c
// body: available
// range: 0x7dcf30c-0x7dcf403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder__get_Task(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_095261bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091866a8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095261bf = 1;
  }
  plVar6 = (long *)*param_1;
  if (plVar6 == (long *)0x0) {
    lVar3 = param_1[1];
    if (lVar3 == 0) {
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = *(undefined8 *)(*(long *)(DAT_0918c610 + 0xb8) + 0x10);
    }
    else {
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = Cysharp_Threading_Tasks_UniTask__FromException(lVar3,0);
    }
  }
  else {
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091866a8) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_07dcf3d4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091866a8,1);
LAB_07dcf3d4:
    uVar2 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  }
  return uVar2;
}

