// rea decompile_all
// name: System.Threading.Tasks.TaskFactory.CompleteOnInvokePromise$$Invoke
// address: 0x76383d0
// body: available
// range: 0x76383d0-0x763861b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7638614 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7638618 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_Tasks_TaskFactory_CompleteOnInvokePromise__Invoke
               (long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  
  if ((DAT_0952223e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183708);
    FUN_03f5c2a4(&DAT_0917a150);
    FUN_03f5c2a4(&DAT_0917b110);
    FUN_03f5c2a4(&DAT_091bcd30);
    DAT_0952223e = 1;
  }
  uVar2 = FUN_062ee358(param_1,param_2,DAT_091bcd30);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(DAT_09183708 + 0xe4) == 0) {
    FUN_03f5c424();
    if (*(int *)(DAT_09183708 + 0xe4) == 0) {
      FUN_03f5c424();
    }
  }
  if (DAT_095197fb == '\0') {
    FUN_03f5c2a4(&DAT_09183708);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095197fb = '\x01';
  }
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x10) != '\0') {
    if (*(int *)(DAT_09183708 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Threading_Tasks_DebuggerSupport__RemoveFromActiveTasksNonInlined(param_1);
  }
  puVar6 = (undefined8 *)(param_1 + 0x58);
  plVar7 = (long *)*puVar6;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *plVar7;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_0917a150) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
        goto LAB_07638550;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a150,0);
LAB_07638550:
  iVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
  if (0 < iVar1) {
    iVar8 = 0;
    do {
      lVar4 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917b110) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_076385c0;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917b110,0);
LAB_076385c0:
      lVar4 = (*(code *)*puVar3)(plVar7,iVar8,puVar3[1]);
      if ((lVar4 != 0) && (uVar2 = System_Threading_Tasks_Task__get_IsCompleted(), (uVar2 & 1) == 0)
         ) {
        System_Threading_Tasks_Task__RemoveContinuation(lVar4,param_1);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar1);
  }
  *puVar6 = 0;
  thunk_FUN_03f5d7b8(puVar6,0);
  return;
}

