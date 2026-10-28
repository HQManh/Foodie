// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIItemLoginDayReward$$GetRewardFlyStartPoint
// address: 0x42ed7bc
// body: available
// range: 0x42ed7bc-0x42ed8fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ed8b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ed8c8 to 0x42ec6d0 CakeOrder.LiveOpsImplement.UIItemLoginDayReward$$get_RewardFlyStartPoint (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42ed8f8 to 0x8656534 UnityEngine.Component$$get_transform (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIItemLoginDayReward__GetRewardFlyStartPoint
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  
  if ((DAT_0951748e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ad8a8);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091ad8b0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951748e = 1;
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    iVar4 = 0;
    do {
      if (*(int *)(lVar1 + 0x18) <= iVar4) {
        CakeOrder_LiveOpsImplement_UIItemLoginDayReward__get_RewardFlyStartPoint(param_1);
        return;
      }
      uVar2 = FUN_057e0998(lVar1,iVar4,DAT_091ad8b0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0xb8) == 0) break;
        uVar2 = FUN_057e0998(*(long *)(param_1 + 0xb8),iVar4,DAT_091b0610);
        uVar3 = System_String__op_Equality(uVar2,param_2,0);
        if ((uVar3 & 1) != 0) {
          if ((*(long *)(param_1 + 0xa8) != 0) &&
             (lVar1 = FUN_057e0998(*(long *)(param_1 + 0xa8),iVar4,DAT_091ad8b0), lVar1 != 0)) {
            UnityEngine_Component__get_transform(lVar1,0);
            return;
          }
          break;
        }
      }
      lVar1 = *(long *)(param_1 + 0xa8);
      iVar4 = iVar4 + 1;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

