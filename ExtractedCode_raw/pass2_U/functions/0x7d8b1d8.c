// rea decompile_all
// name: Cysharp.Threading.Tasks.EnumeratorAsyncExtensions.EnumeratorPromise$$MoveNext
// address: 0x7d8b1d8
// body: available
// range: 0x7d8b1d8-0x7d8b38b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d8b388 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise__MoveNext(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_09525d31 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091892e0);
    FUN_03f5c2a4(&DAT_091bdbf0);
    FUN_03f5c2a4(&DAT_091bdc00);
    DAT_09525d31 = 1;
  }
  if (*(char *)(param_1 + 0x2d) == '\0') {
    if (*(long *)(param_1 + 0x18) == 0) {
      return 0;
    }
    if (*(int *)(DAT_09182348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x20,0);
    if ((uVar4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x2c) = 0;
      FUN_064348bc(param_1 + 0x30,*(undefined8 *)(param_1 + 0x20),DAT_091bdbf0);
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == -1) {
      if (*(int *)(DAT_091892e0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = Cysharp_Threading_Tasks_PlayerLoopHelper__get_IsMainThread();
      if ((uVar4 & 1) != 0) {
        uVar3 = UnityEngine_Time__get_frameCount(0);
        *(undefined4 *)(param_1 + 0x28) = uVar3;
      }
    }
    else {
      iVar2 = UnityEngine_Time__get_frameCount(0);
      if (iVar1 == iVar2) {
        return 1;
      }
    }
    plVar8 = *(long **)(param_1 + 0x18);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07d8b350;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_07d8b350:
    uVar4 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    FUN_06434678(param_1 + 0x30,0,DAT_091bdc00);
  }
  else {
    *(undefined1 *)(param_1 + 0x2c) = 0;
    Cysharp_Threading_Tasks_EnumeratorAsyncExtensions_EnumeratorPromise__TryReturn(param_1);
  }
  return 0;
}

