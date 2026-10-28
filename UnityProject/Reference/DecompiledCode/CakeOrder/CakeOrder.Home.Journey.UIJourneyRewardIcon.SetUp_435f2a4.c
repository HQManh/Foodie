// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyRewardIcon$$SetUp
// address: 0x435f2a4
// body: available
// range: 0x435f2a4-0x435f4c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435f4c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIJourneyRewardIcon__SetUp(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x1;
  long *plVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 local_34;
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  if ((DAT_09517847 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09188ad0);
    auVar7 = FUN_03f5c2a4(&DAT_09225c90);
    DAT_09517847 = 1;
  }
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x10);
    thunk_FUN_03f5d7b8();
    CakeOrder_Home_Journey_UIJourneyRewardIcon__SetClaimed(param_1,0);
    auVar8._8_8_ = extraout_x1;
    auVar8._0_8_ = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(*(long *)(DAT_091b4b60 + 0x20) + 0x135) & 1) == 0) {
      auVar8 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(auVar8._0_8_ + 0xc0) + 0x10);
    auVar9._8_8_ = auVar8._8_8_;
    auVar9._0_8_ = lVar3;
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      auVar9 = FUN_03f95a6c();
    }
    lVar3 = **(long **)(auVar9._0_8_ + 0xb8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar9._8_8_;
    auVar7 = auVar1 << 0x40;
    if (lVar3 != 0) {
      lVar3 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById
                        (lVar3,*(undefined8 *)(param_2 + 0x10),0);
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar7 = UnityEngine_Object__op_Inequality(lVar3,0,0);
        if ((auVar7._0_8_ & 1) != 0) {
          if (lVar3 == 0) goto LAB_0435f4c4;
          uVar6 = *(undefined8 *)(lVar3 + 0x38);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          auVar7 = UnityEngine_Object__op_Implicit(uVar6,0);
          if ((auVar7._0_8_ & 1) != 0) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = auVar7._8_8_;
            auVar7 = auVar2 << 0x40;
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_0435f4c4;
            UnityEngine_UI_Image__set_sprite
                      (*(long *)(param_1 + 0x20),*(undefined8 *)(lVar3 + 0x38),0);
          }
        }
      }
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar4 & 1) != 0) {
        plVar5 = *(long **)(param_1 + 0x28);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar7 = UnityEngine_Object__op_Inequality(lVar3,0,0);
        if ((auVar7._0_8_ & 1) == 0) {
          local_34 = *(undefined4 *)(param_2 + 0x18);
          uVar6 = FUN_03f5c42c(DAT_09535420,&local_34);
          uVar6 = System_String__Format(DAT_09225c90,uVar6,0);
        }
        else {
          if (lVar3 == 0) goto LAB_0435f4c4;
          uVar6 = CakeOrder_DataSO_CakeCurrencySO__GetRewardText
                            (lVar3,*(undefined4 *)(param_2 + 0x18),0);
        }
        auVar7._8_8_ = uVar6;
        auVar7._0_8_ = uVar6;
        if (plVar5 == (long *)0x0) goto LAB_0435f4c4;
        (**(code **)(*plVar5 + 0x558))(plVar5,uVar6,*(undefined8 *)(*plVar5 + 0x560));
      }
      return;
    }
  }
LAB_0435f4c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(auVar7._0_8_,auVar7._8_8_);
}

