// rea decompile_all
// name: System.Threading.Tasks.TaskFactory$$CommonCWAnyLogic
// address: 0x76350b0
// body: available
// range: 0x76350b0-0x76352e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76352e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76352e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Threading_Tasks_TaskFactory__CommonCWAnyLogic(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  
  if ((DAT_0952223c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09194ef8);
    FUN_03f5c2a4(&DAT_0917a150);
    FUN_03f5c2a4(&DAT_0917b110);
    DAT_0952223c = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09194ef8);
  System_Threading_Tasks_TaskFactory_CompleteOnInvokePromise___ctor(lVar3,param_1);
  if (param_1 == (long *)0x0) {
LAB_076352e4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *param_1;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_0917a150) {
        puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_07635170;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917a150,0);
LAB_07635170:
  iVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
  if (0 < iVar2) {
    bVar1 = false;
    iVar11 = 0;
    do {
      lVar8 = *param_1;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917b110) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_076351e4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917b110,0);
LAB_076351e4:
      lVar8 = (*(code *)*puVar4)(param_1,iVar11,puVar4[1]);
      if (lVar8 == 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar5 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_092100c0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_09223c38);
        System_ArgumentException___ctor(uVar5,uVar6,uVar7,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091dafb0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar6);
      }
      if (bVar1) {
LAB_07635228:
        bVar1 = true;
      }
      else {
        if (lVar3 == 0) goto LAB_076352e4;
        uVar9 = System_Threading_Tasks_Task__get_IsCompleted(lVar3);
        if ((uVar9 & 1) != 0) goto LAB_07635228;
        uVar9 = System_Threading_Tasks_Task__get_IsCompleted(lVar8);
        if ((uVar9 & 1) != 0) {
          System_Threading_Tasks_TaskFactory_CompleteOnInvokePromise__Invoke(lVar3,lVar8);
          goto LAB_07635228;
        }
        System_Threading_Tasks_Task__AddCompletionAction(lVar8,lVar3,0);
        uVar9 = System_Threading_Tasks_Task__get_IsCompleted(lVar3);
        bVar1 = false;
        if ((uVar9 & 1) != 0) {
          System_Threading_Tasks_Task__RemoveContinuation(lVar8,lVar3);
          bVar1 = false;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar2);
  }
  return lVar3;
}

