// rea decompile_all
// name: UniRx.Operators.BatchFrameObservable.BatchFrame$$OnNext
// address: 0x418b7e4
// body: available
// range: 0x418b7e4-0x418b9af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418b9a4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418b9a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418b9ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0418b9a0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_Operators_BatchFrameObservable_BatchFrame__OnNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  char local_24 [4];
  
  if ((DAT_0951676f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187d70);
    DAT_0951676f = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_24[0] = '\0';
  System_Threading_Monitor__Enter(uVar2,local_24,0);
  if (*(char *)(param_1 + 0x40) == '\0') {
    plVar8 = *(long **)(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x40) = 1;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0418b8f0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,2);
LAB_0418b8f0:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
    if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x24);
    if (iVar1 == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UniRx_MainThreadDispatcher__StartUpdateMicroCoroutine(uVar7,0);
    }
    else if (iVar1 == 1) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UniRx_MainThreadDispatcher__StartFixedUpdateMicroCoroutine(uVar7,0);
    }
    else if (iVar1 == 2) {
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UniRx_MainThreadDispatcher__StartEndOfFrameMicroCoroutine(uVar7,0);
    }
  }
  if (local_24[0] != '\0') {
    System_Threading_Monitor__Exit(uVar2,0);
  }
  return;
}

