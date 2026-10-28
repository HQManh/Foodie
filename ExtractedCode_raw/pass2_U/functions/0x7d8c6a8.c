// rea decompile_all
// name: Cysharp.Threading.Tasks.TaskTracker$$ForEachActiveTask
// address: 0x7d8c6a8
// body: available
// range: 0x7d8c6a8-0x7d8c9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d8c9a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8c9ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8c9b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8c9b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8c9b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8c9bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8c9c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8c9c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8c9cc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7d8c9d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07d8c9c8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Cysharp_Threading_Tasks_TaskTracker__ForEachActiveTask(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  char local_9c [4];
  undefined8 local_98;
  long *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  if ((DAT_09525d3f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091868c0);
    FUN_03f5c2a4(&DAT_091a93f8);
    FUN_03f5c2a4(&DAT_091a9400);
    FUN_03f5c2a4(&DAT_091aa5b8);
    FUN_03f5c2a4(&DAT_091aa5c0);
    FUN_03f5c2a4(&DAT_0918b928);
    FUN_03f5c2a4(&DAT_091bf230);
    DAT_09525d3f = 1;
  }
  local_98 = 0;
  local_9c[0] = '\0';
  if (*(int *)(DAT_0918b928 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_9c[0] = '\0';
  local_98 = **(undefined8 **)(DAT_0918b928 + 0xb8);
  System_Threading_Monitor__Enter(local_98,local_9c,0);
  if (*(int *)(DAT_0918b928 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = *(long *)(*(long *)(DAT_0918b928 + 0xb8) + 8);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar5 = FUN_068213d0(lVar7,*(long *)(DAT_0918b928 + 0xb8),0,DAT_091bf230);
  if (0 < iVar5) {
    iVar11 = 0;
    do {
      if (*(int *)(DAT_0918b928 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918b928 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_0565c550(&local_90,**(long **)(DAT_0918b928 + 0xb8),iVar11,DAT_091aa5b8);
      uVar3 = local_80;
      if (**(long **)(DAT_0918b928 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_0565c550(&local_90,**(long **)(DAT_0918b928 + 0xb8),iVar11,DAT_091aa5b8);
      uVar2 = uStack_88;
      if (**(long **)(DAT_0918b928 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_0565c550(&local_90,**(long **)(DAT_0918b928 + 0xb8),iVar11,DAT_091aa5b8);
      plVar1 = local_90;
      if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *local_90;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091868c0) {
            puVar8 = (undefined8 *)(lVar7 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_07d8c8b0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(local_90,DAT_091868c0,3);
LAB_07d8c8b0:
      uVar6 = (*(code *)*puVar8)(plVar1,puVar8[1]);
      if (**(long **)(DAT_0918b928 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_0565c550(&local_90,**(long **)(DAT_0918b928 + 0xb8),iVar11,DAT_091aa5b8);
      uVar4 = local_78;
      if (**(long **)(DAT_0918b928 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_0565c550(&local_90,**(long **)(DAT_0918b928 + 0xb8),iVar11,DAT_091aa5b8);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(param_1 + 0x18))
                (*(undefined8 *)(param_1 + 0x40),uVar3 & 0xffffffff,uVar2,uVar6,uVar4,local_70,
                 *(undefined8 *)(param_1 + 0x28));
      if (**(long **)(DAT_0918b928 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_70 = 0;
      uStack_88 = 0;
      local_90 = (long *)0x0;
      local_78 = 0;
      local_80 = 0;
      FUN_0565c5b8(**(long **)(DAT_0918b928 + 0xb8),iVar11,&local_90,DAT_091aa5c0);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar5);
  }
  if (local_9c[0] != '\0') {
    System_Threading_Monitor__Exit(local_98,0);
  }
  return;
}

