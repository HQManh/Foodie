// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask.WhenAnyPromise.<>c$$<.ctor>b__2_0
// address: 0x7d9b86c
// body: available
// range: 0x7d9b86c-0x7d9b99f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d9b984 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d9b994 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d9b99c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07d9b998) */

void Cysharp_Threading_Tasks_UniTask_WhenAnyPromise_<>c__<_ctor>b__2_0
               (undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  if ((DAT_09525e2d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917ea18);
    DAT_09525e2d = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_0917ea18 + 0x130)) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_0917ea18 + 0x130) * 8 + -8) !=
      DAT_0917ea18)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_2);
  }
  Cysharp_Threading_Tasks_UniTask_WhenAnyPromise__TryInvokeContinuation
            (param_2[2],param_2 + 3,(int)param_2[5]);
  if (param_2 != (long *)0x0) {
    lVar2 = *param_2;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == DAT_09185a58) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_07d9b960;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185a58,0);
LAB_07d9b960:
    (*(code *)*puVar1)(param_2,puVar1[1]);
  }
  return;
}

