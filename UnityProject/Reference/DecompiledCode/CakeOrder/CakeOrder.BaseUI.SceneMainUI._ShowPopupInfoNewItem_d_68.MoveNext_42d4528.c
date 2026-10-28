// rea decompile_all
// name: CakeOrder.BaseUI.SceneMainUI.<ShowPopupInfoNewItem>d__68$$MoveNext
// address: 0x42d4528
// body: available
// range: 0x42d4528-0x42d47c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d47b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d47b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d47bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d47c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_SceneMainUI_<ShowPopupInfoNewItem>d__68__MoveNext(int *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_38;
  
  if ((DAT_095173bd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1418);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091ad630);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091ad628);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917c3e8);
    DAT_095173bd = 1;
  }
  local_38 = 0;
  if (*param_1 != 0) {
    lVar9 = *(long *)(param_1 + 8);
    lVar3 = thunk_FUN_03f9944c(DAT_0917c3e8);
    FUN_057e0400(lVar3,DAT_091ad628);
    lVar4 = DAT_091ad630;
    if (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + 0x10);
      uVar6 = *(undefined8 *)(param_1 + 10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar3,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                      );
        }
        lVar7 = thunk_FUN_03f9944c(DAT_0917c520);
        FUN_05796918(lVar7,DAT_091adc70);
        lVar4 = DAT_091adc88;
        if (lVar7 != 0) {
          lVar8 = *(long *)(lVar7 + 0x10);
          iVar1 = param_1[0xc];
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (uVar2 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
              *(int *)(lVar8 + (long)(int)uVar2 * 4 + 0x20) = iVar1;
            }
            else {
              FUN_057971a8(lVar7,iVar1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar4 = CakeOrder_BaseUI_SceneMainUI__ShowPopupInfoNewItem
                              (lVar9,lVar3,lVar7,*(undefined8 *)(param_1 + 0xe));
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_38 = System_Threading_Tasks_Task__GetAwaiter(lVar4,0);
            uVar5 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_38,0);
            if ((uVar5 & 1) == 0) {
              *param_1 = 0;
              *(undefined8 *)(param_1 + 0x10) = local_38;
              thunk_FUN_03f5d7b8(param_1 + 0x10,0);
              if (*(int *)(DAT_09181780 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              FUN_049926d0(param_1 + 2,&local_38,param_1,DAT_091c1418);
              return;
            }
            goto LAB_042d4728;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_38 = *(undefined8 *)(param_1 + 0x10);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = -1;
LAB_042d4728:
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_38,0);
  lVar4 = DAT_09181780;
  *param_1 = -2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

