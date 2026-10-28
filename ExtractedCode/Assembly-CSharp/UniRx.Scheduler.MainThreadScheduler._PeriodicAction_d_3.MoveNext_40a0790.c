// rea decompile_all
// name: UniRx.Scheduler.MainThreadScheduler.<PeriodicAction>d__3$$MoveNext
// address: 0x40a0790
// body: available
// range: 0x40a0790-0x40a0a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40a0a24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 UniRx_Scheduler_MainThreadScheduler_<PeriodicAction>d__3__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  double dVar9;
  
  if ((DAT_09515dea & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185708);
    FUN_03f5c2a4(&DAT_09187d70);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918ce90);
    DAT_09515dea = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    plVar7 = *(long **)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (plVar7 == (long *)0x0) {
LAB_040a0a24:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar7;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185708) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_040a09b8;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185708,0);
LAB_040a09b8:
    uVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UniRx_MainThreadDispatcher__UnsafeSend(uVar8);
LAB_040a09f4:
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x38);
    thunk_FUN_03f5d7b8();
    uVar4 = 2;
  }
  else {
    if (iVar1 == 1) {
      plVar7 = *(long **)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (plVar7 == (long *)0x0) goto LAB_040a0a24;
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09185708) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_040a0960;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185708,0);
LAB_040a0960:
      uVar2 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(DAT_09187d70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UniRx_MainThreadDispatcher__UnsafeSend(uVar8);
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_TimeSpan__op_Equality(uVar8,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        dVar9 = (double)System_TimeSpan__get_TotalMilliseconds((undefined8 *)(param_1 + 0x20),0);
        uVar8 = thunk_FUN_03f9944c(DAT_0918ce90);
        UnityEngine_WaitForSeconds___ctor((float)(dVar9 / 1000.0),uVar8,0);
        *(undefined8 *)(param_1 + 0x38) = uVar8;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar8);
        goto LAB_040a09f4;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return 1;
}

