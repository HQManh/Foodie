// rea decompile_all
// name: UniRx.Observable.<TimerFrameCore>d__320$$MoveNext
// address: 0x40997f4
// body: available
// range: 0x40997f4-0x40999a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40999a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 UniRx_Observable_<TimerFrameCore>d__320__MoveNext(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_09515d8d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182348);
    FUN_03f5c2a4(&DAT_0917b270);
    DAT_09515d8d = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(param_1 + 0x20) < 1) {
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Threading_CancellationToken__get_IsCancellationRequested(param_1 + 0x30,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar1 + 1;
  if (iVar1 != *(int *)(param_1 + 0x20)) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917b270) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0409991c;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b270,0);
LAB_0409991c:
    (*(code *)*puVar3)(plVar6,0,puVar3[1]);
    plVar6 = *(long **)(param_1 + 0x28);
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917b270) {
            puVar3 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_04099984;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917b270,2);
LAB_04099984:
      (*(code *)*puVar3)(plVar6,puVar3[1]);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

