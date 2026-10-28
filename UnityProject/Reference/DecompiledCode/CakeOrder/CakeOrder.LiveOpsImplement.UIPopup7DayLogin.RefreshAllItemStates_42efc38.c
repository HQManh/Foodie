// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopup7DayLogin$$RefreshAllItemStates
// address: 0x42efc38
// body: available
// range: 0x42efc38-0x42efd8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42efd88 to 0x42ef9f4 CakeOrder.LiveOpsImplement.UIPopup7DayLogin$$RefreshClaimButton (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42efd8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIPopup7DayLogin__RefreshAllItemStates(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  
  if ((DAT_095174a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1450);
    FUN_03f5c2a4(&DAT_091b1458);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095174a3 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x100);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x100);
  if (plVar4 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
    if (*(long *)(param_1 + 0xc0) != 0) {
      iVar6 = *(int *)(*(long *)(param_1 + 0xc0) + 0x18);
      if (iVar6 <= iVar1) {
        iVar1 = iVar6;
      }
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if (*(long *)(param_1 + 0x100) == 0) goto LAB_042efd8c;
          uVar3 = LiveOpsR1_LiveOpsBehaviorLoginXDaysAbstract__IsTakedReward
                            (*(long *)(param_1 + 0x100),iVar6,0);
          if ((uVar3 & 1) == 0) {
            if (*(long *)(param_1 + 0x100) == 0) goto LAB_042efd8c;
            uVar2 = LiveOpsR1_LiveOpsBehaviorLoginXDaysAbstract__IsCanTakeReward
                              (*(long *)(param_1 + 0x100),iVar6,0);
            uVar2 = uVar2 & 1;
          }
          else {
            uVar2 = 2;
          }
          if ((*(long *)(param_1 + 0xc0) == 0) ||
             (lVar5 = FUN_057e0998(*(long *)(param_1 + 0xc0),iVar6,DAT_091b1458), lVar5 == 0))
          goto LAB_042efd8c;
          CakeOrder_LiveOpsImplement_UIItemLoginDayReward__SetState(lVar5,uVar2,param_2 == iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar1 != iVar6);
      }
      CakeOrder_LiveOpsImplement_UIPopup7DayLogin__RefreshClaimButton(param_1);
      return;
    }
  }
LAB_042efd8c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

