// rea decompile_all
// name: IapAdsSystem.InAppManager.<LoadPrice>d__77$$MoveNext
// address: 0x731cd18
// body: available
// range: 0x731cd18-0x731ce03 inclusive
// range: 0x731ce14-0x731cf57 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x731cdf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cdfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731ce00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cf40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cf44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cf48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cf4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cf50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cf54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_InAppManager_<LoadPrice>d__77__MoveNext(int *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_09520574 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1408);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919fee0);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_09520574 = 1;
  }
  lVar5 = *(long *)(param_1 + 8);
  local_28 = 0;
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
    goto LAB_0731ce50;
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar5 + 0x48) != 0) {
    uVar1 = FUN_06fd9fbc(*(long *)(lVar5 + 0x48),*(undefined8 *)(param_1 + 10),&local_28,
                         DAT_0919fee0);
    if ((uVar1 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0xc);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),local_28,*(undefined8 *)(lVar4 + 0x28));
    }
    do {
      if (*(char *)(lVar5 + 0x40) != '\0') {
        plVar2 = *(long **)(param_1 + 10);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(lVar5 + 0x30);
        uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar3,uVar3);
        }
        lVar5 = UnityEngine_Purchasing_StoreController__GetProductById(lVar5,uVar3,0);
        if (lVar5 != 0) {
          lVar4 = *(long *)(param_1 + 0xc);
          lVar5 = UnityEngine_Purchasing_Product__get_metadata(lVar5,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          (**(code **)(lVar4 + 0x18))
                    (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar5 + 0x10),
                     *(undefined8 *)(lVar4 + 0x28));
        }
        lVar5 = DAT_09181780;
        *param_1 = -2;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
        return;
      }
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = System_Threading_Tasks_Task__Delay(500,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_38 = System_Threading_Tasks_Task__GetAwaiter(lVar4,0);
      uVar1 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_38,0);
      if ((uVar1 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xe) = local_38;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_049925d8(param_1 + 2,&local_38,param_1,DAT_091c1408);
        return;
      }
LAB_0731ce50:
      System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_38,0);
    } while (lVar5 != 0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

