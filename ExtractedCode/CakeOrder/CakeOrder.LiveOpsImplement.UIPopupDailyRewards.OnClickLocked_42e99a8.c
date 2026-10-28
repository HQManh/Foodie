// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopupDailyRewards$$OnClickLocked
// address: 0x42e99a8
// body: available
// range: 0x42e99a8-0x42e9b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e9b64 to 0x42d2044 CakeOrder.BaseUI.SceneMainUI$$ShowToast (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e9b68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e9b6c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e9b78 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIPopupDailyRewards__OnClickLocked(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  if ((DAT_09517470 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_09224030);
    FUN_03f5c2a4(&DAT_09224038);
    auVar10 = FUN_03f5c2a4(&DAT_09224040);
    DAT_09517470 = 1;
  }
  if ((param_2 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = auVar10._8_8_, auVar10 = auVar1 << 0x40,
     *(long *)(param_1 + 0xc0) != 0)) {
    uVar4 = CakeOrder_LiveOpsImplement_LiveOpBehaviorDailyReward__GetTimespanToMilestone
                      (*(long *)(param_1 + 0xc0),*(undefined4 *)(param_2 + 0x90));
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    auVar10 = System_TimeSpan__op_GreaterThan(uVar4,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
    if ((auVar10._0_8_ & 1) == 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = auVar10._8_8_;
      auVar10 = auVar2 << 0x40;
      if (*(long *)(param_1 + 0xc0) == 0) goto LAB_042e9b68;
      uVar8 = CakeOrder_LiveOpsImplement_LiveOpBehaviorDailyReward__IsFreeClaimedToday();
      if ((uVar8 & 1) == 0) {
        if (*(int *)(DAT_09182278 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar9 = &DAT_09224030;
      }
      else {
        if (*(int *)(DAT_09182278 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar9 = &DAT_09224038;
      }
      uVar8 = CakeOrder_Localization_CakeLocalization__Tr(*puVar9);
    }
    else {
      plVar5 = (long *)FUN_03f5c394(DAT_09180318,1);
      auVar10 = CakeOrder_LiveOpsImplement_UIPopupDailyRewards__FormatCountdown(uVar4);
      lVar6 = auVar10._0_8_;
      if (plVar5 == (long *)0x0) goto LAB_042e9b68;
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar5[4] = lVar6;
      thunk_FUN_03f5d7b8(plVar5 + 4,lVar6);
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_09224040,plVar5);
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar8;
    auVar10 = auVar3 << 0x40;
    if (*(long *)(param_1 + 0xb0) != 0) {
      CakeOrder_BaseUI_SceneMainUI__ShowToast(0x40000000,0,*(long *)(param_1 + 0xb0),uVar8,0);
      return;
    }
  }
LAB_042e9b68:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar10._0_8_,auVar10._8_8_);
}

