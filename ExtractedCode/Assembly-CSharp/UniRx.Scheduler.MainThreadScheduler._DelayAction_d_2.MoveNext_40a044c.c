// rea decompile_all
// name: UniRx.Scheduler.MainThreadScheduler.<DelayAction>d__2$$MoveNext
// address: 0x40a044c
// body: available
// range: 0x40a044c-0x40a062b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40a0628 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 UniRx_Scheduler_MainThreadScheduler_<DelayAction>d__2__MoveNext(long param_1)

{
  double dVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  
  if ((DAT_09515de9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185708);
    FUN_03f5c2a4(&DAT_09187d70);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918ce90);
    DAT_09515de9 = 1;
  }
  if (*(int *)(param_1 + 0x10) - 1U < 2) {
    plVar7 = *(long **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *plVar7;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185708) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_040a057c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185708,0);
LAB_040a057c:
    uVar4 = (*(code *)*puVar2)(plVar7,puVar2[1]);
    if ((uVar4 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UniRx_MainThreadDispatcher__UnsafeSend(uVar6);
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_TimeSpan__op_Equality(uVar6,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
    if ((uVar4 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar1 = (double)System_TimeSpan__get_TotalSeconds((undefined8 *)(param_1 + 0x20),0);
    uVar6 = thunk_FUN_03f9944c(DAT_0918ce90);
    UnityEngine_WaitForSeconds___ctor((float)dVar1,uVar6,0);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar6);
    *(undefined4 *)(param_1 + 0x10) = 2;
    return 1;
  }
  return 0;
}

