// rea decompile_all
// name: Cysharp.Threading.Tasks.UnityAsyncExtensions.UnityWebRequestAsyncOperationConfiguredSource$$MoveNext
// address: 0x7db3b40
// body: available
// range: 0x7db3b40-0x7db3d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7db3d40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Cysharp_Threading_Tasks_UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource__MoveNext
          (long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((DAT_09525f84 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0917b2a8);
    FUN_03f5c2a4(&DAT_091bdc78);
    FUN_03f5c2a4(&DAT_091bdc80);
    FUN_03f5c2a4(&DAT_091bdc88);
    FUN_03f5c2a4(&DAT_0918c7e8);
    DAT_09525f84 = 1;
  }
  if ((*(char *)(param_1 + 0x49) != '\0') || (*(long *)(param_1 + 0x18) == 0)) {
    return 0;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x28,0);
  if ((uVar1 & 1) == 0) {
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 != (long *)0x0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_07db3d40;
      uVar8 = UnityEngine_AsyncOperation__get_progress(*(long *)(param_1 + 0x18),0);
      lVar2 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917b2a8) {
            puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_07db3c9c;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b2a8,0);
LAB_07db3c9c:
      (*(code *)*puVar3)(uVar8,plVar6,puVar3[1]);
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar1 = UnityEngine_AsyncOperation__get_isDone(*(long *)(param_1 + 0x18),0);
      if ((uVar1 & 1) == 0) {
        return 1;
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar1 = Cysharp_Threading_Tasks_Internal_UnityWebRequestResultExtensions__IsError
                          (*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20));
        lVar2 = *(long *)(param_1 + 0x18);
        if ((uVar1 & 1) == 0) {
          if (lVar2 != 0) {
            FUN_06434678(param_1 + 0x50,*(undefined8 *)(lVar2 + 0x20),DAT_091bdc88);
            return 0;
          }
        }
        else if (lVar2 != 0) {
          uVar7 = *(undefined8 *)(lVar2 + 0x20);
          uVar4 = thunk_FUN_03f9944c(DAT_0918c7e8);
          Cysharp_Threading_Tasks_UnityWebRequestException___ctor(uVar4,uVar7);
          FUN_0643474c(param_1 + 0x50,uVar4,DAT_091bdc80);
          return 0;
        }
      }
    }
  }
  else if ((*(long *)(param_1 + 0x18) != 0) &&
          (lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x20), lVar2 != 0)) {
    UnityEngine_Networking_UnityWebRequest__Abort(lVar2,0);
    FUN_064348bc(param_1 + 0x50,*(undefined8 *)(param_1 + 0x28),DAT_091bdc78);
    return 0;
  }
LAB_07db3d40:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

