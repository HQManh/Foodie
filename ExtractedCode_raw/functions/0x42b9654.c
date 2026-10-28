// rea decompile_all
// name: CakeOrder.UI.UIHeartCounter$$AddHeartSource
// address: 0x42b9654
// body: available
// range: 0x42b9654-0x42b988b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b9884 to 0x42b9bf8 CakeOrder.UI.UIHeartCounter$$TriggerUpdateLoop (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42b9888 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIHeartCounter__AddHeartSource(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  
  if ((DAT_095172e3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185f10);
    FUN_03f5c2a4(&DAT_091ad418);
    FUN_03f5c2a4(&DAT_091ad420);
    FUN_03f5c2a4(&DAT_09191518);
    FUN_03f5c2a4(&DAT_091dc9c8);
    DAT_095172e3 = 1;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar2 = FUN_057e1004(*(long *)(param_1 + 0x88),param_2,DAT_091ad420);
    lVar8 = DAT_091ad418;
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar3 = *(long *)(param_1 + 0x88);
    if (lVar3 != 0) {
      lVar6 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar7 = (long)param_2;
          thunk_FUN_03f5d7b8(plVar7,param_2);
        }
        else {
          FUN_057e0c68(lVar3,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
        uVar4 = thunk_FUN_03f9944c(DAT_09191518);
        CakeOrder_DataSO_IItemCurrencyHoldingSource_OnAmountChangedDelegate___ctor
                  (uVar4,param_1,DAT_091dc9c8,0);
        if (param_2 != (long *)0x0) {
          lVar8 = *param_2;
          uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185f10) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 3) * 0x10 + 0x138);
                goto LAB_042b97e4;
              }
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar2 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185f10,3);
LAB_042b97e4:
          (*(code *)*puVar5)(param_2,uVar4,puVar5[1]);
          uVar4 = thunk_FUN_03f9944c(DAT_09191518);
          CakeOrder_DataSO_IItemCurrencyHoldingSource_OnAmountChangedDelegate___ctor
                    (uVar4,param_1,DAT_091dc9c8,0);
          lVar8 = *param_2;
          uVar2 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar2 != 0) {
            piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_09185f10) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
                goto LAB_042b9860;
              }
              uVar2 = uVar2 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar2 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(param_2,DAT_09185f10,2);
LAB_042b9860:
          (*(code *)*puVar5)(param_2,uVar4,puVar5[1]);
          CakeOrder_UI_UIHeartCounter__TriggerUpdateLoop(param_1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

