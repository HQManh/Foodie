// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskExtensions$$AttachExternalCancellation
// address: 0x7da32a8
// body: available
// range: 0x7da32a8-0x7da3493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
Cysharp_Threading_Tasks_UniTaskExtensions__AttachExternalCancellation
          (long *param_1,ulong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  undefined1 auVar9 [16];
  long *local_40;
  ulong local_38;
  undefined8 local_28;
  
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  local_28 = param_3;
  if ((DAT_09525ea1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09195978);
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525ea1 = 1;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_Threading_CancellationToken__get_CanBeCanceled(&local_28,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_28,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      if (param_1 != (long *)0x0) {
        lVar7 = *param_1;
        uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_07da341c;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_1,DAT_091868c0,0);
LAB_07da341c:
        iVar3 = (*(code *)*puVar5)(param_1,param_2 & 0xffffffff,puVar5[1]);
        uVar2 = local_28;
        auVar9 = auVar1;
        if (iVar3 == 0) {
          plVar6 = (long *)thunk_FUN_03f9944c(DAT_09195978);
          Cysharp_Threading_Tasks_UniTaskExtensions_AttachExternalCancellationSource___ctor
                    (plVar6,param_1,param_2,uVar2);
          local_38 = 0;
          local_40 = plVar6;
          thunk_FUN_03f5d7b8(&local_40,plVar6);
          local_38 = local_38 & 0xffffffffffff0000;
          auVar9._8_8_ = local_38;
          auVar9._0_8_ = local_40;
        }
      }
    }
    else {
      Cysharp_Threading_Tasks_UniTaskExtensions__Forget(param_1,param_2);
      uVar2 = local_28;
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar9 = Cysharp_Threading_Tasks_UniTask__FromCanceled(uVar2);
    }
  }
  return auVar9;
}

