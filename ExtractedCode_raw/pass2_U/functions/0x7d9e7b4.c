// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.<WaitForEndOfFrame>d__9$$MoveNext
// address: 0x7d9e7b4
// body: available
// range: 0x7d9e7b4-0x7d9e953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d9e94c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d9e950 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTask_<WaitForEndOfFrame>d__9__MoveNext(int *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  long local_28;
  
  if ((DAT_09525e47 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1d28);
    FUN_03f5c2a4(&DAT_09181970);
    DAT_09525e47 = 1;
  }
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(long *)(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 6);
    if (*(int *)(DAT_09181970 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = FUN_07da7fa4(uVar7,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = UnityEngine_Awaitable__GetAwaiter(lVar2,0);
    uVar3 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_28,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 8) = local_28;
      thunk_FUN_03f5d7b8(param_1 + 8,0);
      FUN_049adf18(param_1 + 2,&local_28,param_1,DAT_091c1d28);
      return;
    }
  }
  if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_Awaitable__PropagateExceptionAndRelease(local_28,0);
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar6 = *(long **)(param_1 + 2);
  if (plVar6 != (long *)0x0) {
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_091866a8) {
          puVar4 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_07d9e930;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091866a8,2);
LAB_07d9e930:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  return;
}

