// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskObservableExtensions$$ToObservable
// address: 0x7da8d3c
// body: available
// range: 0x7da8d3c-0x7da8fa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Cysharp_Threading_Tasks_UniTaskObservableExtensions__ToObservable(long *param_1,ulong param_2)

{
  undefined1 uVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  long *local_40;
  ulong uStack_38;
  
  if ((DAT_09525ecb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197a90);
    FUN_03f5c2a4(&DAT_091750a0);
    FUN_03f5c2a4(&DAT_09181790);
    FUN_03f5c2a4(&DAT_091b9cd0);
    FUN_03f5c2a4(&DAT_0917e620);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525ecb = 1;
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  if (param_1 != (long *)0x0) {
    lVar6 = *param_1;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07da8e44;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_1,DAT_091868c0,0);
LAB_07da8e44:
    iVar3 = (*(code *)*puVar4)(param_1,param_2 & 0xffffffff,puVar4[1]);
    if (iVar3 == 0) {
      uVar5 = thunk_FUN_03f9944c(DAT_091750a0);
      FUN_0650aa7c(uVar5,DAT_09197a90);
      Cysharp_Threading_Tasks_UniTaskObservableExtensions__Fire(uVar5,param_1,param_2);
      return uVar5;
    }
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_40 = param_1;
  uStack_38 = param_2;
  thunk_FUN_03f5d7b8(&local_40,0);
  uVar7 = uStack_38;
  plVar2 = local_40;
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  if (plVar2 != (long *)0x0) {
    lVar6 = *plVar2;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07da8f30;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_091868c0,2);
LAB_07da8f30:
    (*(code *)*puVar4)(plVar2,uVar7 & 0xffffffff,puVar4[1]);
  }
  if (*(int *)(DAT_09181790 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = **(undefined1 **)(DAT_09181790 + 0xb8);
  uVar5 = thunk_FUN_03f9944c(DAT_0917e620);
  FUN_0606f86c(uVar5,uVar1,DAT_091b9cd0);
  return uVar5;
}

