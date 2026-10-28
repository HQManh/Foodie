// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.MemoizeSource$$GetResult
// address: 0x7d9c01c
// body: available
// range: 0x7d9c01c-0x7d9c12f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d9c0c8 to 0x74cf518 System.Runtime.ExceptionServices.ExceptionDispatchInfo$$Throw (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7d9c12c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07d9c128) */

void Cysharp_Threading_Tasks_UniTask_MemoizeSource__GetResult(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((DAT_09525e36 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_09525e36 = 1;
  }
  plVar5 = *(long **)(param_1 + 0x10);
  if (plVar5 == (long *)0x0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw(*(long *)(param_1 + 0x18),0);
      return;
    }
  }
  else {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_091868c0) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
          goto LAB_07d9c0dc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar5,DAT_091868c0,2);
LAB_07d9c0dc:
    (*(code *)*puVar1)(plVar5,param_2,puVar1[1]);
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
  }
  return;
}

