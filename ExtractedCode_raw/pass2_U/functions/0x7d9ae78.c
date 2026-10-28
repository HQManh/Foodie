// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.WhenAllPromise$$TryInvokeContinuation
// address: 0x7d9ae78
// body: available
// range: 0x7d9ae78-0x7d9afaf inclusive
// range: 0x7d9b014-0x7d9b017 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d9afa0 to 0x64311f4 FUN_064311f4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7d9b014 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTask_WhenAllPromise__TryInvokeContinuation
               (long param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  
  if ((DAT_09525e1f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181790);
    FUN_03f5c2a4(&DAT_091bdb40);
    DAT_09525e1f = 1;
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  plVar7 = (long *)*param_2;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar1 = *(undefined2 *)(param_2 + 1);
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_07d9af38;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091868c0,2);
LAB_07d9af38:
    (*(code *)*puVar3)(plVar7,uVar1,puVar3[1]);
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar2 = System_Threading_Interlocked__Increment(param_1 + 0x10,0);
  if (iVar2 == *(int *)(param_1 + 0x14)) {
    if (*(int *)(DAT_09181790 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_064311f4(param_1 + 0x18,**(undefined1 **)(DAT_09181790 + 0xb8),DAT_091bdb40);
    return;
  }
  return;
}

