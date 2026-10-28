// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask$$SuppressCancellationThrow
// address: 0x7d95d1c
// body: available
// range: 0x7d95d1c-0x7d95edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] Cysharp_Threading_Tasks_UniTask__SuppressCancellationThrow(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long local_40;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined2 uStack_36;
  undefined4 uStack_34;
  
  if ((DAT_09525da6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182850);
    FUN_03f5c2a4(&DAT_09195920);
    FUN_03f5c2a4(&DAT_091bddd0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525da6 = 1;
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
LAB_07d95e34:
    if (*(int *)(DAT_09182850 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = *(undefined8 *)(*(long *)(DAT_09182850 + 0xb8) + 0x28);
    local_40 = *(long *)(*(long *)(DAT_09182850 + 0xb8) + 0x20);
  }
  else {
    lVar5 = *plVar8;
    uVar1 = *(undefined2 *)(param_1 + 1);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07d95e14;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091868c0,0);
LAB_07d95e14:
    iVar3 = (*(code *)*puVar4)(plVar8,uVar1,puVar4[1]);
    if (iVar3 != 3) {
      if (iVar3 != 1) {
        uVar9 = *param_1;
        lVar5 = thunk_FUN_03f9944c(DAT_09195920);
        System_Object___ctor(lVar5,0);
        *(undefined8 *)(lVar5 + 0x10) = uVar9;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x10),uVar9);
        uVar1 = *(undefined2 *)(param_1 + 1);
        uStack_38 = 0;
        uStack_37 = 0;
        uStack_36 = 0;
        uStack_34 = 0;
        local_40 = lVar5;
        thunk_FUN_03f5d7b8(&local_40,lVar5);
        uStack_38 = 0;
        uStack_36 = uVar1;
        goto LAB_07d95ec4;
      }
      goto LAB_07d95e34;
    }
    if (*(int *)(DAT_09182850 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = *(undefined8 *)(*(long *)(DAT_09182850 + 0xb8) + 0x18);
    local_40 = *(long *)(*(long *)(DAT_09182850 + 0xb8) + 0x10);
  }
  uStack_38 = (undefined1)uVar9;
  uStack_37 = (undefined1)((ulong)uVar9 >> 8);
  uStack_36 = (undefined2)((ulong)uVar9 >> 0x10);
  uStack_34 = (undefined4)((ulong)uVar9 >> 0x20);
LAB_07d95ec4:
  auVar2[8] = uStack_38;
  auVar2._0_8_ = local_40;
  auVar2[9] = uStack_37;
  auVar2._10_2_ = uStack_36;
  auVar2._12_4_ = uStack_34;
  return auVar2;
}

