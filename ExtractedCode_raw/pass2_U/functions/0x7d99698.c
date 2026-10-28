// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.DeferPromise$$GetStatus
// address: 0x7d99698
// body: available
// range: 0x7d99698-0x7d997f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Cysharp_Threading_Tasks_UniTask_DeferPromise__GetStatus(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  undefined1 (*pauVar7) [16];
  long *plVar8;
  undefined1 auVar9 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_09525dfb & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525dfb = 1;
  }
  lVar2 = FUN_03f957e4(param_1 + 0x10,0);
  if (lVar2 != 0) {
    auVar9 = (**(code **)(lVar2 + 0x18))
                       (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    pauVar7 = (undefined1 (*) [16])(param_1 + 0x18);
    *pauVar7 = auVar9;
    thunk_FUN_03f5d7b8(pauVar7,0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_28 = *(undefined8 *)(param_1 + 0x20);
    local_30 = *(undefined8 *)*pauVar7;
    thunk_FUN_03f5d7b8(&local_30,0);
    *(undefined8 *)(param_1 + 0x30) = uStack_28;
    *(undefined8 *)(param_1 + 0x28) = local_30;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),0);
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  plVar8 = *(long **)(param_1 + 0x18);
  if (plVar8 == (long *)0x0) {
    uVar4 = 1;
  }
  else {
    lVar2 = *plVar8;
    uVar1 = *(undefined2 *)(param_1 + 0x20);
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07d997d8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091868c0,0);
LAB_07d997d8:
    uVar4 = (*(code *)*puVar3)(plVar8,uVar1,puVar3[1]);
  }
  return uVar4;
}

