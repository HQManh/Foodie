// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask$$AsAsyncUnitUniTask
// address: 0x7d96118
// body: available
// range: 0x7d96118-0x7d9631f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d9631c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] Cysharp_Threading_Tasks_UniTask__AsAsyncUnitUniTask(undefined8 *param_1)

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
  
  if ((DAT_09525da9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091958e0);
    FUN_03f5c2a4(&DAT_09182850);
    FUN_03f5c2a4(&DAT_0917b618);
    FUN_03f5c2a4(&DAT_091868c0);
    FUN_03f5c2a4(&DAT_091bdda8);
    DAT_09525da9 = 1;
  }
  plVar8 = (long *)*param_1;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar1 = *(undefined2 *)(param_1 + 1);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07d961dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091868c0,0);
LAB_07d961dc:
    iVar3 = (*(code *)*puVar4)(plVar8,uVar1,puVar4[1]);
    plVar8 = (long *)*param_1;
    if (iVar3 != 1) {
      local_40 = thunk_FUN_03f99350(plVar8,DAT_0917b618);
      if (local_40 == 0) {
        uVar9 = *param_1;
        local_40 = thunk_FUN_03f9944c(DAT_091958e0);
        System_Object___ctor(local_40,0);
        *(undefined8 *)(local_40 + 0x10) = uVar9;
        thunk_FUN_03f5d7b8((undefined8 *)(local_40 + 0x10),uVar9);
        uVar1 = *(undefined2 *)(param_1 + 1);
      }
      else {
        uVar1 = *(undefined2 *)(param_1 + 1);
      }
      uStack_34 = 0;
      uStack_36 = 0;
      uStack_37 = 0;
      uStack_38 = 0;
      thunk_FUN_03f5d7b8(&local_40,local_40);
      uStack_38 = 0;
      uStack_36 = uVar1;
      goto LAB_07d96304;
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar8;
    uVar1 = *(undefined2 *)(param_1 + 1);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_07d962cc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091868c0,2);
LAB_07d962cc:
    (*(code *)*puVar4)(plVar8,uVar1,puVar4[1]);
  }
  if (*(int *)(DAT_09182850 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = (*(long **)(DAT_09182850 + 0xb8))[1];
  local_40 = **(long **)(DAT_09182850 + 0xb8);
  uStack_38 = (undefined1)lVar5;
  uStack_37 = (undefined1)((ulong)lVar5 >> 8);
  uStack_36 = (undefined2)((ulong)lVar5 >> 0x10);
  uStack_34 = (undefined4)((ulong)lVar5 >> 0x20);
LAB_07d96304:
  auVar2[8] = uStack_38;
  auVar2._0_8_ = local_40;
  auVar2[9] = uStack_37;
  auVar2._10_2_ = uStack_36;
  auVar2._12_4_ = uStack_34;
  return auVar2;
}

