// rea decompile_all
// name: UniRx.TaskObservableExtensions$$ToObservableDone
// address: 0x40a3c1c
// body: available
// range: 0x40a3c1c-0x40a3ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40a3ea0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_TaskObservableExtensions__ToObservableDone(long param_1,long *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09515e15 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b288);
    FUN_03f5c2a4(&DAT_0918b8d8);
    FUN_03f5c2a4(&DAT_0918c670);
    DAT_09515e15 = 1;
  }
  if (param_1 == 0) goto LAB_040a3ea0;
  iVar2 = System_Threading_Tasks_Task__get_Status(param_1,0);
  if (iVar2 == 7) {
    lVar5 = System_Threading_Tasks_Task__get_Exception(param_1,0);
    if ((lVar5 == 0) || (param_2 == (long *)0x0)) goto LAB_040a3ea0;
    lVar6 = *param_2;
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917b288) goto LAB_040a3df8;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  else {
    if (iVar2 != 6) {
      if (iVar2 != 5) {
        return;
      }
      if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09515ed7 == '\0') {
        FUN_03f5c2a4(&DAT_0918c670);
        DAT_09515ed7 = '\x01';
      }
      if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_2 != (long *)0x0) {
        lVar5 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        uVar1 = **(undefined1 **)(DAT_0918c670 + 0xb8);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b288) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_040a3e2c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b288,0);
LAB_040a3e2c:
        (*(code *)*puVar3)(param_2,uVar1,puVar3[1]);
        lVar5 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b288) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_040a3e8c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b288,2);
LAB_040a3e8c:
                    /* WARNING: Could not recover jumptable at 0x040a3e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar3)(param_2,puVar3[1]);
        return;
      }
LAB_040a3ea0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = thunk_FUN_03f9944c(DAT_0918b8d8);
    System_Threading_Tasks_TaskCanceledException___ctor(uVar4,param_1,0);
    if (param_2 == (long *)0x0) goto LAB_040a3ea0;
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_0917b288) goto LAB_040a3df8;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b288,1);
LAB_040a3e08:
                    /* WARNING: Could not recover jumptable at 0x040a3e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_2,uVar4,puVar3[1]);
  return;
LAB_040a3df8:
  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
  goto LAB_040a3e08;
}

