// rea decompile_all
// name: System.Threading.ThreadPoolWorkQueue$$Dequeue
// address: 0x7626ff8
// body: available
// range: 0x7626ff8-0x76271bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76271b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76271bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_ThreadPoolWorkQueue__Dequeue
               (long param_1,long param_2,long *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  
  if ((DAT_0952217a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bae18);
    FUN_03f5c2a4(&DAT_0918bd00);
    DAT_0952217a = 1;
  }
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  *param_4 = 0;
  if ((param_2 != 0) && (lVar6 = *(long *)(param_2 + 0x18), lVar6 != 0)) {
    System_Threading_ThreadPoolWorkQueue_WorkStealingQueue__LocalPop(lVar6,param_3);
    if (*param_3 != 0) {
      return;
    }
    plVar7 = (long *)(param_1 + 0x18);
    lVar8 = *plVar7;
    while (thunk_FUN_03f6a5cc(), lVar8 != 0) {
      uVar5 = System_Threading_ThreadPoolWorkQueue_QueueSegment__TryDequeue(lVar8,param_3);
      if ((((uVar5 & 1) != 0) || (lVar9 = *(long *)(lVar8 + 0x20), thunk_FUN_03f6a5cc(), lVar9 == 0)
          ) || (uVar5 = System_Threading_ThreadPoolWorkQueue_QueueSegment__IsUsedUp(lVar8),
               (uVar5 & 1) == 0)) {
        if (*param_3 != 0) {
          return;
        }
        if (*(int *)(DAT_0918bd00 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (((**(long **)(DAT_0918bd00 + 0xb8) != 0) &&
            (lVar8 = FUN_06199e98(**(long **)(DAT_0918bd00 + 0xb8),DAT_091bae18), lVar8 != 0)) &&
           (plVar7 = *(long **)(param_2 + 0x20), plVar7 != (long *)0x0)) {
          iVar4 = (**(code **)(*plVar7 + 0x1a8))
                            (plVar7,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)(*plVar7 + 0x1b0));
          if (*(int *)(lVar8 + 0x18) < 1) {
            return;
          }
          iVar11 = *(int *)(lVar8 + 0x18) + 1;
          while( true ) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            iVar3 = 0;
            if (uVar1 != 0) {
              iVar3 = iVar4 / (int)uVar1;
            }
            uVar2 = iVar4 - iVar3 * uVar1;
            if (uVar1 <= uVar2) break;
            lVar9 = *(long *)(lVar8 + 0x20 + (long)(int)uVar2 * 8);
            thunk_FUN_03f6a5cc();
            if ((lVar9 != 0 && lVar9 != lVar6) &&
               (uVar5 = System_Threading_ThreadPoolWorkQueue_WorkStealingQueue__TrySteal
                                  (lVar9,param_3,param_4,0), (uVar5 & 1) != 0)) {
              return;
            }
            iVar11 = iVar11 + -1;
            iVar4 = iVar4 + 1;
            if (iVar11 < 2) {
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        break;
      }
      thunk_FUN_03f6a5cc();
      uVar10 = *(undefined8 *)(lVar8 + 0x20);
      thunk_FUN_03f6a5cc();
      FUN_03f955cc(plVar7,uVar10,lVar8);
      lVar8 = *plVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

